#include "java/nio/Bits.h"
#include "java/lang/Short.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/Bits.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/Character.h"
#include "java/lang/String.h"
#include "java/lang/Float.h"
#include "java/lang/Long.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"

extern "C" {

jbool SF_java_nio_Bits_unaligned;
jbool SF_java_nio_Bits_unalignedKnown;

void mark_java_nio_Bits(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_Bits *) object;
}

void init_java_nio_Bits(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jshort SM_java_nio_Bits_swap_short_R_short(jcontext ctx, jshort param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:swap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)SM_java_lang_Short_reverseBytes_short_R_short(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar SM_java_nio_Bits_swap_char_R_char(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:swap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(38);
	jint temp0 = (jint)SM_java_lang_Character_reverseBytes_char_R_char(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_nio_Bits_swap_int_R_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:swap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(42);
	jint temp0 = (jint)SM_java_lang_Integer_reverseBytes_int_R_int(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_nio_Bits_swap_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:swap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(46);
	jlong temp0 = (jlong)SM_java_lang_Long_reverseBytes_long_R_long(ctx, (frame[0].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar SM_java_nio_Bits_makeChar_byte_byte_R_char(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:makeChar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (jchar((((frame[0].i) << (8)) | ((frame[1].i) & (255)))));
	}

	popStackFrame(ctx);
}

jchar SM_java_nio_Bits_getCharL_java_nio_ByteBuffer_int_R_char(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getCharL", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(54);
	jint temp0 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	jint temp1 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), (frame[1].i));
	jint temp2 = (jint)SM_java_nio_Bits_makeChar_byte_byte_R_char(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jchar SM_java_nio_Bits_getCharB_java_nio_ByteBuffer_int_R_char(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getCharB", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(58);
	jint temp0 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	jint temp2 = (jint)SM_java_nio_Bits_makeChar_byte_byte_R_char(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jchar SM_java_nio_Bits_getChar_java_nio_ByteBuffer_int_boolean_R_char(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getChar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(62);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_nio_Bits_getCharB_java_nio_ByteBuffer_int_R_char(ctx, (frame[0].o), (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)SM_java_nio_Bits_getCharL_java_nio_ByteBuffer_int_R_char(ctx, (frame[0].o), (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_char1_char_R_byte(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:char1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (jbyte(((frame[0].i) >> (8))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_char0_char_R_byte(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:char0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (jbyte((frame[0].i)));
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putCharL_java_nio_ByteBuffer_int_char(jcontext ctx, jobject param0, jint param1, jchar param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putCharL", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_nio_Bits_char0_char_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jint temp2 = (frame[1].i) + (jint(1));
	jint temp3 = (jint)SM_java_nio_Bits_char1_char_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putCharB_java_nio_ByteBuffer_int_char(jcontext ctx, jobject param0, jint param1, jchar param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putCharB", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_nio_Bits_char1_char_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	jint temp2 = (frame[1].i) + (jint(1));
	jint temp3 = (jint)SM_java_nio_Bits_char0_char_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putChar_java_nio_ByteBuffer_int_char_boolean(jcontext ctx, jobject param0, jint param1, jchar param2, jbool param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putChar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(84);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(85);
	SM_java_nio_Bits_putCharB_java_nio_ByteBuffer_int_char(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(87);
	SM_java_nio_Bits_putCharL_java_nio_ByteBuffer_int_char(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jshort SM_java_nio_Bits_makeShort_byte_byte_R_short(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:makeShort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jshort((((frame[0].i) << (8)) | ((frame[1].i) & (255)))));
	}

	popStackFrame(ctx);
}

jshort SM_java_nio_Bits_getShortL_java_nio_ByteBuffer_int_R_short(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getShortL", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(95);
	jint temp0 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	jint temp1 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), (frame[1].i));
	jint temp2 = (jint)SM_java_nio_Bits_makeShort_byte_byte_R_short(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jshort SM_java_nio_Bits_getShortB_java_nio_ByteBuffer_int_R_short(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getShortB", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	jint temp2 = (jint)SM_java_nio_Bits_makeShort_byte_byte_R_short(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jshort SM_java_nio_Bits_getShort_java_nio_ByteBuffer_int_boolean_R_short(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getShort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(103);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_nio_Bits_getShortB_java_nio_ByteBuffer_int_R_short(ctx, (frame[0].o), (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)SM_java_nio_Bits_getShortL_java_nio_ByteBuffer_int_R_short(ctx, (frame[0].o), (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_short1_short_R_byte(jcontext ctx, jshort param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:short1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (jbyte(((frame[0].i) >> (8))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_short0_short_R_byte(jcontext ctx, jshort param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:short0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (jbyte((frame[0].i)));
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putShortL_java_nio_ByteBuffer_int_short(jcontext ctx, jobject param0, jint param1, jshort param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putShortL", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_nio_Bits_short0_short_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	jint temp2 = (frame[1].i) + (jint(1));
	jint temp3 = (jint)SM_java_nio_Bits_short1_short_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putShortB_java_nio_ByteBuffer_int_short(jcontext ctx, jobject param0, jint param1, jshort param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putShortB", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_nio_Bits_short1_short_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	jint temp2 = (frame[1].i) + (jint(1));
	jint temp3 = (jint)SM_java_nio_Bits_short0_short_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putShort_java_nio_ByteBuffer_int_short_boolean(jcontext ctx, jobject param0, jint param1, jshort param2, jbool param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putShort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(125);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(126);
	SM_java_nio_Bits_putShortB_java_nio_ByteBuffer_int_short(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(128);
	SM_java_nio_Bits_putShortL_java_nio_ByteBuffer_int_short(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_java_nio_Bits_makeInt_byte_byte_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1, jbyte param2, jbyte param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:makeInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (((((frame[0].i) << (24)) | (((frame[1].i) & (255)) << (16))) | (((frame[2].i) & (255)) << (8))) | ((frame[3].i) & (255)));
	}

	popStackFrame(ctx);
}

jint SM_java_nio_Bits_getIntL_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getIntL", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(3))));
	jint temp1 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(2))));
	jint temp2 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	jint temp3 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), (frame[1].i));
	jint temp4 = (jint)SM_java_nio_Bits_makeInt_byte_byte_byte_byte_R_int(ctx, temp0, temp1, temp2, temp3);
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jint SM_java_nio_Bits_getIntB_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getIntB", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	jint temp2 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(2))));
	jint temp3 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(3))));
	jint temp4 = (jint)SM_java_nio_Bits_makeInt_byte_byte_byte_byte_R_int(ctx, temp0, temp1, temp2, temp3);
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jint SM_java_nio_Bits_getInt_java_nio_ByteBuffer_int_boolean_R_int(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(144);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_nio_Bits_getIntB_java_nio_ByteBuffer_int_R_int(ctx, (frame[0].o), (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)SM_java_nio_Bits_getIntL_java_nio_ByteBuffer_int_R_int(ctx, (frame[0].o), (frame[1].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_int3_int_R_byte(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:int3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (jbyte(((frame[0].i) >> (24))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_int2_int_R_byte(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:int2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return (jbyte(((frame[0].i) >> (16))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_int1_int_R_byte(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:int1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (jbyte(((frame[0].i) >> (8))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_int0_int_R_byte(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:int0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return (jbyte((frame[0].i)));
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putIntL_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putIntL", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	jint temp0 = (frame[1].i) + (jint(3));
	jint temp1 = (jint)SM_java_nio_Bits_int3_int_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	jint temp2 = (frame[1].i) + (jint(2));
	jint temp3 = (jint)SM_java_nio_Bits_int2_int_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	jint temp4 = (frame[1].i) + (jint(1));
	jint temp5 = (jint)SM_java_nio_Bits_int1_int_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp4, temp5);
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	jint temp6 = frame[1].i;
	jint temp7 = (jint)SM_java_nio_Bits_int0_int_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp6, temp7);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putIntB_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putIntB", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_nio_Bits_int3_int_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	jint temp2 = (frame[1].i) + (jint(1));
	jint temp3 = (jint)SM_java_nio_Bits_int2_int_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	jint temp4 = (frame[1].i) + (jint(2));
	jint temp5 = (jint)SM_java_nio_Bits_int1_int_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp4, temp5);
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	jint temp6 = (frame[1].i) + (jint(3));
	jint temp7 = (jint)SM_java_nio_Bits_int0_int_R_byte(ctx, (frame[2].i));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp6, temp7);
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putInt_java_nio_ByteBuffer_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(178);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(179);
	SM_java_nio_Bits_putIntB_java_nio_ByteBuffer_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(181);
	SM_java_nio_Bits_putIntL_java_nio_ByteBuffer_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong SM_java_nio_Bits_makeLong_byte_byte_byte_byte_byte_byte_byte_byte_R_long(jcontext ctx, jbyte param0, jbyte param1, jbyte param2, jbyte param3, jbyte param4, jbyte param5, jbyte param6, jbyte param7) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:makeLong", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (((((((((jlong((frame[0].i))) << (56)) | (((jlong((frame[1].i))) & (jlong(255ll))) << (48))) | (((jlong((frame[2].i))) & (jlong(255ll))) << (40))) | (((jlong((frame[3].i))) & (jlong(255ll))) << (32))) | (((jlong((frame[4].i))) & (jlong(255ll))) << (24))) | (((jlong((frame[5].i))) & (jlong(255ll))) << (16))) | (((jlong((frame[6].i))) & (jlong(255ll))) << (8))) | ((jlong((frame[7].i))) & (jlong(255ll))));
	}

	popStackFrame(ctx);
}

jlong SM_java_nio_Bits_getLongL_java_nio_ByteBuffer_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getLongL", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (7)));
	jint temp1 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (6)));
	jint temp2 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(5))));
	jint temp3 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(4))));
	jint temp4 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(3))));
	jint temp5 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(2))));
	jint temp6 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	jint temp7 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), (frame[1].i));
	jlong temp8 = (jlong)SM_java_nio_Bits_makeLong_byte_byte_byte_byte_byte_byte_byte_byte_R_long(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
	popStackFrame(ctx);
	return temp8;
	}

	popStackFrame(ctx);
}

jlong SM_java_nio_Bits_getLongB_java_nio_ByteBuffer_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getLongB", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(193);
	jint temp0 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	jint temp2 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(2))));
	jint temp3 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(3))));
	jint temp4 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(4))));
	jint temp5 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(5))));
	jint temp6 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (6)));
	jint temp7 = (jint)((func_java_nio_ByteBuffer__get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer__get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (7)));
	jlong temp8 = (jlong)SM_java_nio_Bits_makeLong_byte_byte_byte_byte_byte_byte_byte_byte_R_long(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
	popStackFrame(ctx);
	return temp8;
	}

	popStackFrame(ctx);
}

jlong SM_java_nio_Bits_getLong_java_nio_ByteBuffer_int_boolean_R_long(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getLong", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(197);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jlong temp0 = (jlong)SM_java_nio_Bits_getLongB_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[1].i));
	sp[0].l = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jlong temp0 = (jlong)SM_java_nio_Bits_getLongL_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[1].i));
	sp[0].l = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_long7_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:long7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return (jbyte((jint(((frame[0].l) >> (56))))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_long6_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:long6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (jbyte((jint(((frame[0].l) >> (48))))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_long5_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:long5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return (jbyte((jint(((frame[0].l) >> (40))))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_long4_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:long4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(213);
	popStackFrame(ctx);
	return (jbyte((jint(((frame[0].l) >> (32))))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_long3_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:long3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return (jbyte((jint(((frame[0].l) >> (24))))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_long2_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:long2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (jbyte((jint(((frame[0].l) >> (16))))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_long1_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:long1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (jbyte((jint(((frame[0].l) >> (8))))));
	}

	popStackFrame(ctx);
}

jbyte SM_java_nio_Bits_long0_long_R_byte(jcontext ctx, jlong param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:long0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (jbyte((jint((frame[0].l)))));
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putLongL_java_nio_ByteBuffer_int_long(jcontext ctx, jobject param0, jint param1, jlong param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putLongL", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].l = param2;
	{
	LINE_NUMBER(233);
	sp[0].o = frame[0].o;
	jint temp0 = (frame[1].i) + (7);
	jint temp1 = (jint)SM_java_nio_Bits_long7_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	jint temp2 = (frame[1].i) + (6);
	jint temp3 = (jint)SM_java_nio_Bits_long6_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	jint temp4 = (frame[1].i) + (jint(5));
	jint temp5 = (jint)SM_java_nio_Bits_long5_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp4, temp5);
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	jint temp6 = (frame[1].i) + (jint(4));
	jint temp7 = (jint)SM_java_nio_Bits_long4_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp6, temp7);
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	jint temp8 = (frame[1].i) + (jint(3));
	jint temp9 = (jint)SM_java_nio_Bits_long3_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp8, temp9);
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	jint temp10 = (frame[1].i) + (jint(2));
	jint temp11 = (jint)SM_java_nio_Bits_long2_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp10, temp11);
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	jint temp12 = (frame[1].i) + (jint(1));
	jint temp13 = (jint)SM_java_nio_Bits_long1_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp12, temp13);
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	jint temp14 = frame[1].i;
	jint temp15 = (jint)SM_java_nio_Bits_long0_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp14, temp15);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putLongB_java_nio_ByteBuffer_int_long(jcontext ctx, jobject param0, jint param1, jlong param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putLongB", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].l = param2;
	{
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_nio_Bits_long7_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	jint temp2 = (frame[1].i) + (jint(1));
	jint temp3 = (jint)SM_java_nio_Bits_long6_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp2, temp3);
	LINE_NUMBER(246);
	sp[0].o = frame[0].o;
	jint temp4 = (frame[1].i) + (jint(2));
	jint temp5 = (jint)SM_java_nio_Bits_long5_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp4, temp5);
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	jint temp6 = (frame[1].i) + (jint(3));
	jint temp7 = (jint)SM_java_nio_Bits_long4_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp6, temp7);
	LINE_NUMBER(248);
	sp[0].o = frame[0].o;
	jint temp8 = (frame[1].i) + (jint(4));
	jint temp9 = (jint)SM_java_nio_Bits_long3_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp8, temp9);
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	jint temp10 = (frame[1].i) + (jint(5));
	jint temp11 = (jint)SM_java_nio_Bits_long2_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp10, temp11);
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	jint temp12 = (frame[1].i) + (6);
	jint temp13 = (jint)SM_java_nio_Bits_long1_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp12, temp13);
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	jint temp14 = (frame[1].i) + (7);
	jint temp15 = (jint)SM_java_nio_Bits_long0_long_R_byte(ctx, (frame[2].l));
	((func_java_nio_ByteBuffer__put_int_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer__put_int_byte])(ctx, sp[0].o, temp14, temp15);
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putLong_java_nio_ByteBuffer_int_long_boolean(jcontext ctx, jobject param0, jint param1, jlong param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putLong", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].l = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(255);
	if ((frame[4].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(256);
	SM_java_nio_Bits_putLongB_java_nio_ByteBuffer_int_long(ctx, (frame[0].o), (frame[1].i), (frame[2].l));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(258);
	SM_java_nio_Bits_putLongL_java_nio_ByteBuffer_int_long(ctx, (frame[0].o), (frame[1].i), (frame[2].l));
	}
label_3:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_java_nio_Bits_getFloatL_java_nio_ByteBuffer_int_R_float(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getFloatL", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(262);
	jint temp0 = (jint)SM_java_nio_Bits_getIntL_java_nio_ByteBuffer_int_R_int(ctx, (frame[0].o), (frame[1].i));
	jfloat temp1 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_java_nio_Bits_getFloatB_java_nio_ByteBuffer_int_R_float(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getFloatB", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)SM_java_nio_Bits_getIntB_java_nio_ByteBuffer_int_R_int(ctx, (frame[0].o), (frame[1].i));
	jfloat temp1 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_java_nio_Bits_getFloat_java_nio_ByteBuffer_int_boolean_R_float(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(270);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_java_nio_Bits_getFloatB_java_nio_ByteBuffer_int_R_float(ctx, (frame[0].o), (frame[1].i));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = (jfloat)SM_java_nio_Bits_getFloatL_java_nio_ByteBuffer_int_R_float(ctx, (frame[0].o), (frame[1].i));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putFloatL_java_nio_ByteBuffer_int_float(jcontext ctx, jobject param0, jint param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putFloatL", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[2].f));
	SM_java_nio_Bits_putIntL_java_nio_ByteBuffer_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putFloatB_java_nio_ByteBuffer_int_float(jcontext ctx, jobject param0, jint param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putFloatB", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(278);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[2].f));
	SM_java_nio_Bits_putIntB_java_nio_ByteBuffer_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putFloat_java_nio_ByteBuffer_int_float_boolean(jcontext ctx, jobject param0, jint param1, jfloat param2, jbool param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putFloat", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(282);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(283);
	SM_java_nio_Bits_putFloatB_java_nio_ByteBuffer_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].f));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(285);
	SM_java_nio_Bits_putFloatL_java_nio_ByteBuffer_int_float(ctx, (frame[0].o), (frame[1].i), (frame[2].f));
	}
label_3:;
	LINE_NUMBER(286);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble SM_java_nio_Bits_getDoubleL_java_nio_ByteBuffer_int_R_double(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getDoubleL", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(289);
	jlong temp0 = (jlong)SM_java_nio_Bits_getLongL_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[1].i));
	jdouble temp1 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jdouble SM_java_nio_Bits_getDoubleB_java_nio_ByteBuffer_int_R_double(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getDoubleB", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(293);
	jlong temp0 = (jlong)SM_java_nio_Bits_getLongB_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[1].i));
	jdouble temp1 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jdouble SM_java_nio_Bits_getDouble_java_nio_ByteBuffer_int_boolean_R_double(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:getDouble", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(297);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jdouble temp0 = (jdouble)SM_java_nio_Bits_getDoubleB_java_nio_ByteBuffer_int_R_double(ctx, (frame[0].o), (frame[1].i));
	sp[0].d = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jdouble temp0 = (jdouble)SM_java_nio_Bits_getDoubleL_java_nio_ByteBuffer_int_R_double(ctx, (frame[0].o), (frame[1].i));
	sp[0].d = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putDoubleL_java_nio_ByteBuffer_int_double(jcontext ctx, jobject param0, jint param1, jdouble param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putDoubleL", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].d = param2;
	{
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[2].d));
	SM_java_nio_Bits_putLongL_java_nio_ByteBuffer_int_long(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putDoubleB_java_nio_ByteBuffer_int_double(jcontext ctx, jobject param0, jint param1, jdouble param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putDoubleB", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].d = param2;
	{
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[2].d));
	SM_java_nio_Bits_putLongB_java_nio_ByteBuffer_int_long(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_nio_Bits_putDouble_java_nio_ByteBuffer_int_double_boolean(jcontext ctx, jobject param0, jint param1, jdouble param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:putDouble", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].d = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(309);
	if ((frame[4].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(310);
	SM_java_nio_Bits_putDoubleB_java_nio_ByteBuffer_int_double(ctx, (frame[0].o), (frame[1].i), (frame[2].d));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(312);
	SM_java_nio_Bits_putDoubleL_java_nio_ByteBuffer_int_double(ctx, (frame[0].o), (frame[1].i), (frame[2].d));
	}
label_3:;
	LINE_NUMBER(313);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_java_nio_Bits_unaligned_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:unaligned", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	{
	LINE_NUMBER(319);
	if ((clinit_java_nio_Bits(ctx), (jint)SF_java_nio_Bits_unalignedKnown) == 0) goto label_1;
	}
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (clinit_java_nio_Bits(ctx), (jint)SF_java_nio_Bits_unaligned);
	}
label_1:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))));
	frame[0].o = sp[0].o;
	LINE_NUMBER(322);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"i386"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"x86"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"amd64"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"x86_64"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ppc64"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"ppc64le"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"aarch64"_j))));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	clinit_java_nio_Bits(ctx);
	SF_java_nio_Bits_unaligned = sp[0].i;
	LINE_NUMBER(323);
	clinit_java_nio_Bits(ctx);
	SF_java_nio_Bits_unalignedKnown = (jint(1));
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (clinit_java_nio_Bits(ctx), (jint)SF_java_nio_Bits_unaligned);
	}

	popStackFrame(ctx);
}

jbool SM_java_nio_Bits_isPrimitiveArray_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:isPrimitiveArray", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(329);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void clinit_java_nio_Bits(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/Bits:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_Bits(ctx);
	{
	LINE_NUMBER(316);
	clinit_java_nio_Bits(ctx);
	SF_java_nio_Bits_unalignedKnown = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_Bits[] {
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
	{ "unaligned", &class_boolean, (intptr_t) &SF_java_nio_Bits_unaligned, "Z", 10 },
	{ "unalignedKnown", &class_boolean, (intptr_t) &SF_java_nio_Bits_unalignedKnown, "Z", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_Bits, 0, "()V", 2 },
	{ "swap", (intptr_t) SM_java_nio_Bits_swap_short_R_short, 0, "(S)S", 8 },
	{ "swap", (intptr_t) SM_java_nio_Bits_swap_char_R_char, 0, "(C)C", 8 },
	{ "swap", (intptr_t) SM_java_nio_Bits_swap_int_R_int, 0, "(I)I", 8 },
	{ "swap", (intptr_t) SM_java_nio_Bits_swap_long_R_long, 0, "(J)J", 8 },
	{ "makeChar", (intptr_t) SM_java_nio_Bits_makeChar_byte_byte_R_char, 0, "(BB)C", 10 },
	{ "getCharL", (intptr_t) SM_java_nio_Bits_getCharL_java_nio_ByteBuffer_int_R_char, 0, "(Ljava/nio/ByteBuffer;I)C", 8 },
	{ "getCharB", (intptr_t) SM_java_nio_Bits_getCharB_java_nio_ByteBuffer_int_R_char, 0, "(Ljava/nio/ByteBuffer;I)C", 8 },
	{ "getChar", (intptr_t) SM_java_nio_Bits_getChar_java_nio_ByteBuffer_int_boolean_R_char, 0, "(Ljava/nio/ByteBuffer;IZ)C", 8 },
	{ "char1", (intptr_t) SM_java_nio_Bits_char1_char_R_byte, 0, "(C)B", 10 },
	{ "char0", (intptr_t) SM_java_nio_Bits_char0_char_R_byte, 0, "(C)B", 10 },
	{ "putCharL", (intptr_t) SM_java_nio_Bits_putCharL_java_nio_ByteBuffer_int_char, 0, "(Ljava/nio/ByteBuffer;IC)V", 8 },
	{ "putCharB", (intptr_t) SM_java_nio_Bits_putCharB_java_nio_ByteBuffer_int_char, 0, "(Ljava/nio/ByteBuffer;IC)V", 8 },
	{ "putChar", (intptr_t) SM_java_nio_Bits_putChar_java_nio_ByteBuffer_int_char_boolean, 0, "(Ljava/nio/ByteBuffer;ICZ)V", 8 },
	{ "makeShort", (intptr_t) SM_java_nio_Bits_makeShort_byte_byte_R_short, 0, "(BB)S", 10 },
	{ "getShortL", (intptr_t) SM_java_nio_Bits_getShortL_java_nio_ByteBuffer_int_R_short, 0, "(Ljava/nio/ByteBuffer;I)S", 8 },
	{ "getShortB", (intptr_t) SM_java_nio_Bits_getShortB_java_nio_ByteBuffer_int_R_short, 0, "(Ljava/nio/ByteBuffer;I)S", 8 },
	{ "getShort", (intptr_t) SM_java_nio_Bits_getShort_java_nio_ByteBuffer_int_boolean_R_short, 0, "(Ljava/nio/ByteBuffer;IZ)S", 8 },
	{ "short1", (intptr_t) SM_java_nio_Bits_short1_short_R_byte, 0, "(S)B", 10 },
	{ "short0", (intptr_t) SM_java_nio_Bits_short0_short_R_byte, 0, "(S)B", 10 },
	{ "putShortL", (intptr_t) SM_java_nio_Bits_putShortL_java_nio_ByteBuffer_int_short, 0, "(Ljava/nio/ByteBuffer;IS)V", 8 },
	{ "putShortB", (intptr_t) SM_java_nio_Bits_putShortB_java_nio_ByteBuffer_int_short, 0, "(Ljava/nio/ByteBuffer;IS)V", 8 },
	{ "putShort", (intptr_t) SM_java_nio_Bits_putShort_java_nio_ByteBuffer_int_short_boolean, 0, "(Ljava/nio/ByteBuffer;ISZ)V", 8 },
	{ "makeInt", (intptr_t) SM_java_nio_Bits_makeInt_byte_byte_byte_byte_R_int, 0, "(BBBB)I", 10 },
	{ "getIntL", (intptr_t) SM_java_nio_Bits_getIntL_java_nio_ByteBuffer_int_R_int, 0, "(Ljava/nio/ByteBuffer;I)I", 8 },
	{ "getIntB", (intptr_t) SM_java_nio_Bits_getIntB_java_nio_ByteBuffer_int_R_int, 0, "(Ljava/nio/ByteBuffer;I)I", 8 },
	{ "getInt", (intptr_t) SM_java_nio_Bits_getInt_java_nio_ByteBuffer_int_boolean_R_int, 0, "(Ljava/nio/ByteBuffer;IZ)I", 8 },
	{ "int3", (intptr_t) SM_java_nio_Bits_int3_int_R_byte, 0, "(I)B", 10 },
	{ "int2", (intptr_t) SM_java_nio_Bits_int2_int_R_byte, 0, "(I)B", 10 },
	{ "int1", (intptr_t) SM_java_nio_Bits_int1_int_R_byte, 0, "(I)B", 10 },
	{ "int0", (intptr_t) SM_java_nio_Bits_int0_int_R_byte, 0, "(I)B", 10 },
	{ "putIntL", (intptr_t) SM_java_nio_Bits_putIntL_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;II)V", 8 },
	{ "putIntB", (intptr_t) SM_java_nio_Bits_putIntB_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;II)V", 8 },
	{ "putInt", (intptr_t) SM_java_nio_Bits_putInt_java_nio_ByteBuffer_int_int_boolean, 0, "(Ljava/nio/ByteBuffer;IIZ)V", 8 },
	{ "makeLong", (intptr_t) SM_java_nio_Bits_makeLong_byte_byte_byte_byte_byte_byte_byte_byte_R_long, 0, "(BBBBBBBB)J", 10 },
	{ "getLongL", (intptr_t) SM_java_nio_Bits_getLongL_java_nio_ByteBuffer_int_R_long, 0, "(Ljava/nio/ByteBuffer;I)J", 8 },
	{ "getLongB", (intptr_t) SM_java_nio_Bits_getLongB_java_nio_ByteBuffer_int_R_long, 0, "(Ljava/nio/ByteBuffer;I)J", 8 },
	{ "getLong", (intptr_t) SM_java_nio_Bits_getLong_java_nio_ByteBuffer_int_boolean_R_long, 0, "(Ljava/nio/ByteBuffer;IZ)J", 8 },
	{ "long7", (intptr_t) SM_java_nio_Bits_long7_long_R_byte, 0, "(J)B", 10 },
	{ "long6", (intptr_t) SM_java_nio_Bits_long6_long_R_byte, 0, "(J)B", 10 },
	{ "long5", (intptr_t) SM_java_nio_Bits_long5_long_R_byte, 0, "(J)B", 10 },
	{ "long4", (intptr_t) SM_java_nio_Bits_long4_long_R_byte, 0, "(J)B", 10 },
	{ "long3", (intptr_t) SM_java_nio_Bits_long3_long_R_byte, 0, "(J)B", 10 },
	{ "long2", (intptr_t) SM_java_nio_Bits_long2_long_R_byte, 0, "(J)B", 10 },
	{ "long1", (intptr_t) SM_java_nio_Bits_long1_long_R_byte, 0, "(J)B", 10 },
	{ "long0", (intptr_t) SM_java_nio_Bits_long0_long_R_byte, 0, "(J)B", 10 },
	{ "putLongL", (intptr_t) SM_java_nio_Bits_putLongL_java_nio_ByteBuffer_int_long, 0, "(Ljava/nio/ByteBuffer;IJ)V", 8 },
	{ "putLongB", (intptr_t) SM_java_nio_Bits_putLongB_java_nio_ByteBuffer_int_long, 0, "(Ljava/nio/ByteBuffer;IJ)V", 8 },
	{ "putLong", (intptr_t) SM_java_nio_Bits_putLong_java_nio_ByteBuffer_int_long_boolean, 0, "(Ljava/nio/ByteBuffer;IJZ)V", 8 },
	{ "getFloatL", (intptr_t) SM_java_nio_Bits_getFloatL_java_nio_ByteBuffer_int_R_float, 0, "(Ljava/nio/ByteBuffer;I)F", 8 },
	{ "getFloatB", (intptr_t) SM_java_nio_Bits_getFloatB_java_nio_ByteBuffer_int_R_float, 0, "(Ljava/nio/ByteBuffer;I)F", 8 },
	{ "getFloat", (intptr_t) SM_java_nio_Bits_getFloat_java_nio_ByteBuffer_int_boolean_R_float, 0, "(Ljava/nio/ByteBuffer;IZ)F", 8 },
	{ "putFloatL", (intptr_t) SM_java_nio_Bits_putFloatL_java_nio_ByteBuffer_int_float, 0, "(Ljava/nio/ByteBuffer;IF)V", 8 },
	{ "putFloatB", (intptr_t) SM_java_nio_Bits_putFloatB_java_nio_ByteBuffer_int_float, 0, "(Ljava/nio/ByteBuffer;IF)V", 8 },
	{ "putFloat", (intptr_t) SM_java_nio_Bits_putFloat_java_nio_ByteBuffer_int_float_boolean, 0, "(Ljava/nio/ByteBuffer;IFZ)V", 8 },
	{ "getDoubleL", (intptr_t) SM_java_nio_Bits_getDoubleL_java_nio_ByteBuffer_int_R_double, 0, "(Ljava/nio/ByteBuffer;I)D", 8 },
	{ "getDoubleB", (intptr_t) SM_java_nio_Bits_getDoubleB_java_nio_ByteBuffer_int_R_double, 0, "(Ljava/nio/ByteBuffer;I)D", 8 },
	{ "getDouble", (intptr_t) SM_java_nio_Bits_getDouble_java_nio_ByteBuffer_int_boolean_R_double, 0, "(Ljava/nio/ByteBuffer;IZ)D", 8 },
	{ "putDoubleL", (intptr_t) SM_java_nio_Bits_putDoubleL_java_nio_ByteBuffer_int_double, 0, "(Ljava/nio/ByteBuffer;ID)V", 8 },
	{ "putDoubleB", (intptr_t) SM_java_nio_Bits_putDoubleB_java_nio_ByteBuffer_int_double, 0, "(Ljava/nio/ByteBuffer;ID)V", 8 },
	{ "putDouble", (intptr_t) SM_java_nio_Bits_putDouble_java_nio_ByteBuffer_int_double_boolean, 0, "(Ljava/nio/ByteBuffer;IDZ)V", 8 },
	{ "unaligned", (intptr_t) SM_java_nio_Bits_unaligned_R_boolean, 0, "()Z", 8 },
	{ "isPrimitiveArray", (intptr_t) SM_java_nio_Bits_isPrimitiveArray_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 10 },
	{ "<clinit>", (intptr_t) clinit_java_nio_Bits, 0, "()V", 8 },
};

Class class_java_nio_Bits{
		.nativeName = (intptr_t) "java/nio/Bits",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_nio_Bits),
		.classVtable = (intptr_t) vtable_java_nio_Bits,
		.staticInitializer = (intptr_t) clinit_java_nio_Bits,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_Bits,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 64,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_Bits = registerClass(&class_java_nio_Bits);

}
