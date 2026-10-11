#include "java/nio/ByteBufferAsCharBufferL.h"
#include "java/nio/Bits.h"
#include "java/lang/StringIndexOutOfBoundsException.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/nio/ByteOrder.h"
#include "java/nio/CharBuffer.h"
#include "java/lang/CharSequence.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/nio/ByteBufferAsCharBufferL.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/lang/AssertionError.h"
#include "java/lang/Class.h"

extern "C" {

jbool SF_java_nio_ByteBufferAsCharBufferL_$assertionsDisabled;

void mark_java_nio_ByteBufferAsCharBufferL(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_nio_CharBuffer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_ByteBufferAsCharBufferL *) object;
	if (self->F_bb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bb)->clazz)->markFunction)((jobject) self->F_bb, mark, depth + 1);
}

void init_java_nio_ByteBufferAsCharBufferL_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBufferAsCharBufferL(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jint temp0 = jint(-1);
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	jint temp3 = temp2 >> (jint(1));
	jint temp4 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	init_java_nio_CharBuffer_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp3, (temp4 >> (jint(1))));
	LINE_NUMBER(37);
	((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb = (jref) (frame[1].o);
	LINE_NUMBER(39);
	jint temp5 = (jint)((func_java_nio_ByteBufferAsCharBufferL_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_capacity_R_int])(ctx, (frame[0].o));
	frame[2].i = temp5;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_java_nio_ByteBufferAsCharBufferL_limit_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_limit_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(41);
	jint temp6 = (jint)((func_java_nio_ByteBufferAsCharBufferL_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_position_R_int])(ctx, (frame[0].o));
	frame[3].i = temp6;
	LINE_NUMBER(42);
	if ((clinit_java_nio_ByteBufferAsCharBufferL(ctx), (jint)SF_java_nio_ByteBufferAsCharBufferL_$assertionsDisabled) != 0) goto label_6;
	}
	{
	if ((frame[3].i) <= (frame[2].i)) goto label_6;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(43);
	((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_offset = (frame[3].i);
	LINE_NUMBER(45);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_address = ((jlong)((java_nio_Buffer *) NULL_CHECK((frame[1].o)))->F_address);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_nio_ByteBufferAsCharBufferL_java_nio_ByteBuffer_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBufferAsCharBufferL(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(50);
	init_java_nio_CharBuffer_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(51);
	((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb = (jref) (frame[1].o);
	LINE_NUMBER(52);
	((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_offset = (frame[6].i);
	LINE_NUMBER(54);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_address = (((jlong)((java_nio_Buffer *) NULL_CHECK((frame[1].o)))->F_address) + (jlong((frame[6].i))));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsCharBufferL_slice_R_java_nio_CharBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:slice", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	jint temp0 = (jint)((func_java_nio_ByteBufferAsCharBufferL_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(59);
	jint temp1 = (jint)((func_java_nio_ByteBufferAsCharBufferL_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(60);
	if ((frame[1].i) > (frame[2].i)) goto label_3;
	}
	{
	jint temp0 = (frame[2].i) - (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(61);
	frame[4].i = (((frame[1].i) << (jint(1))) + ((jint)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_offset));
	LINE_NUMBER(62);
	if ((clinit_java_nio_ByteBufferAsCharBufferL(ctx), (jint)SF_java_nio_ByteBufferAsCharBufferL_$assertionsDisabled) != 0) goto label_7;
	}
	INST_ILOAD(4);
	if ((--sp)->i >= 0) goto label_7;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(63);
	clinit_java_nio_ByteBufferAsCharBufferL(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsCharBufferL);
	sp[1].o = (jobject)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb;
	init_java_nio_ByteBufferAsCharBufferL_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, sp[1].o, (jint(-1)), (jint(0)), (frame[3].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsCharBufferL_duplicate_R_java_nio_CharBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:duplicate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	clinit_java_nio_ByteBufferAsCharBufferL(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsCharBufferL);
	sp[1].o = (jobject)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsCharBufferL_markValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_markValue_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_ByteBufferAsCharBufferL_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_position_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_java_nio_ByteBufferAsCharBufferL_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_limit_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_nio_ByteBufferAsCharBufferL_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_capacity_R_int])(ctx, (frame[0].o));
	init_java_nio_ByteBufferAsCharBufferL_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, ((jint)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_offset));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsCharBufferL_asReadOnlyBuffer_R_java_nio_CharBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:asReadOnlyBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_nio_ByteBufferAsCharBufferL_ix_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:ix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (((frame[1].i) << (jint(1))) + ((jint)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_offset));
	}

	popStackFrame(ctx);
}

jchar M_java_nio_ByteBufferAsCharBufferL_get_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsCharBufferL_nextGetIndex_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_nextGetIndex_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_ByteBufferAsCharBufferL_ix_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_ix_int_R_int])(ctx, sp[1].o, temp0);
	jint temp2 = (jint)SM_java_nio_Bits_getCharL_java_nio_ByteBuffer_int_R_char(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jchar M_java_nio_ByteBufferAsCharBufferL_get_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsCharBufferL_checkIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_checkIndex_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)((func_java_nio_ByteBufferAsCharBufferL_ix_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_ix_int_R_int])(ctx, sp[1].o, temp0);
	jint temp2 = (jint)SM_java_nio_Bits_getCharL_java_nio_ByteBuffer_int_R_char(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jchar M_java_nio_ByteBufferAsCharBufferL_getUnchecked_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:getUnchecked", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsCharBufferL_ix_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_ix_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)SM_java_nio_Bits_getCharL_java_nio_ByteBuffer_int_R_char(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsCharBufferL_put_char_R_java_nio_CharBuffer(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:put", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsCharBufferL_nextPutIndex_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_nextPutIndex_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_ByteBufferAsCharBufferL_ix_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_ix_int_R_int])(ctx, sp[1].o, temp0);
	SM_java_nio_Bits_putCharL_java_nio_ByteBuffer_int_char(ctx, sp[0].o, temp1, (frame[1].i));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsCharBufferL_put_int_char_R_java_nio_CharBuffer(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsCharBufferL_checkIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_checkIndex_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)((func_java_nio_ByteBufferAsCharBufferL_ix_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_ix_int_R_int])(ctx, sp[1].o, temp0);
	SM_java_nio_Bits_putCharL_java_nio_ByteBuffer_int_char(ctx, sp[0].o, temp1, (frame[2].i));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsCharBufferL_compact_R_java_nio_CharBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:compact", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_java_nio_ByteBufferAsCharBufferL_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(107);
	jint temp1 = (jint)((func_java_nio_ByteBufferAsCharBufferL_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(108);
	if ((clinit_java_nio_ByteBufferAsCharBufferL(ctx), (jint)SF_java_nio_ByteBufferAsCharBufferL_$assertionsDisabled) != 0) goto label_3;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_3;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(109);
	if ((frame[1].i) > (frame[2].i)) goto label_4;
	}
	{
	jint temp0 = (frame[2].i) - (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(112);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsCharBufferL_ix_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_ix_int_R_int])(ctx, (frame[0].o), (frame[2].i));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(113);
	sp[0].o = frame[4].o;
	jint temp1 = (jint)((func_java_nio_ByteBufferAsCharBufferL_ix_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_ix_int_R_int])(ctx, (frame[0].o), (jint(0)));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(114);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[5].o), ((frame[1].i) << (jint(1))));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_compact_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_compact_R_java_nio_ByteBuffer])(ctx, (frame[5].o));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_java_nio_ByteBufferAsCharBufferL_position_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_position_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_java_nio_ByteBufferAsCharBufferL_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_capacity_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_nio_ByteBufferAsCharBufferL_limit_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_limit_int_R_java_nio_CharBuffer])(ctx, sp[0].o, temp2);
	LINE_NUMBER(119);
	((func_java_nio_ByteBufferAsCharBufferL_discardMark) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_discardMark])(ctx, (frame[0].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_java_nio_ByteBufferAsCharBufferL_isDirect_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:isDirect", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_isDirect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_isDirect_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_nio_ByteBufferAsCharBufferL_isReadOnly_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:isReadOnly", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsCharBufferL_toString_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:toString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(133);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_nio_ByteBufferAsCharBufferL_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_limit_R_int])(ctx, (frame[0].o));
	if (temp0 > temp1) goto label_5;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_0;
	}
label_5:;
	{
	LINE_NUMBER(134);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_StringIndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(136);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(137);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_java_nio_CharBuffer_wrap_Array1_char_R_java_nio_CharBuffer(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_java_nio_ByteBufferAsCharBufferL_duplicate_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_duplicate_R_java_nio_CharBuffer])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer])(ctx, (frame[6].o), (frame[1].i));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer])(ctx, (frame[6].o), (frame[2].i));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer])(ctx, (frame[5].o), (frame[6].o));
	LINE_NUMBER(143);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char(ctx, sp[0].o, (frame[4].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(144);
	frame[3].o = sp[0].o;
	LINE_NUMBER(145);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsCharBufferL_subSequence_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:subSequence", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_java_nio_ByteBufferAsCharBufferL_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_position_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(151);
	jint temp1 = (jint)((func_java_nio_ByteBufferAsCharBufferL_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_limit_R_int])(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(152);
	if ((clinit_java_nio_ByteBufferAsCharBufferL(ctx), (jint)SF_java_nio_ByteBufferAsCharBufferL_$assertionsDisabled) != 0) goto label_3;
	}
	{
	if ((frame[3].i) <= (frame[4].i)) goto label_3;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(153);
	if ((frame[3].i) > (frame[4].i)) goto label_4;
	}
	INST_ILOAD(3);
	goto label_5;
label_4:;
	INST_ILOAD(4);
label_5:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(154);
	frame[5].i = ((frame[4].i) - (frame[3].i));
	LINE_NUMBER(156);
	if ((frame[1].i) < 0) goto label_8;
	}
	{
	if ((frame[2].i) > (frame[5].i)) goto label_8;
	}
	{
	if ((frame[1].i) <= (frame[2].i)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(157);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	init_java_lang_IndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(158);
	clinit_java_nio_ByteBufferAsCharBufferL(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsCharBufferL);
	sp[1].o = (jobject)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_bb;
	jint temp0 = jint(-1);
	jint temp1 = (frame[3].i) + (frame[1].i);
	jint temp2 = (frame[3].i) + (frame[2].i);
	jint temp3 = (jint)((func_java_nio_ByteBufferAsCharBufferL_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_capacity_R_int])(ctx, (frame[0].o));
	init_java_nio_ByteBufferAsCharBufferL_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, ((jint)((java_nio_ByteBufferAsCharBufferL *) NULL_CHECK((frame[0].o)))->F_offset));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsCharBufferL_order_R_java_nio_ByteOrder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:order", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	clinit_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)SF_java_nio_ByteOrder_LITTLE_ENDIAN;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsCharBufferL_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:subSequence", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_nio_ByteBufferAsCharBufferL_subSequence_int_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsCharBufferL_subSequence_int_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_nio_ByteBufferAsCharBufferL(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_CharBuffer(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsCharBufferL:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBufferAsCharBufferL(ctx);
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_nio_ByteBufferAsCharBufferL)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_nio_ByteBufferAsCharBufferL)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_java_nio_ByteBufferAsCharBufferL(ctx);
	SF_java_nio_ByteBufferAsCharBufferL_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_nio_ByteBufferAsCharBufferL[] {
	(void *) M_java_nio_CharBuffer_hashCode_R_int,
	(void *) M_java_nio_CharBuffer_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_nio_CharBuffer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_nio_Buffer_capacity_R_int,
	(void *) M_java_nio_Buffer_position_R_int,
	(void *) M_java_nio_CharBuffer_position_int_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_limit_R_int,
	(void *) M_java_nio_CharBuffer_limit_int_R_java_nio_Buffer,
	(void *) M_java_nio_CharBuffer_mark_R_java_nio_Buffer,
	(void *) M_java_nio_CharBuffer_reset_R_java_nio_Buffer,
	(void *) M_java_nio_CharBuffer_clear_R_java_nio_Buffer,
	(void *) M_java_nio_CharBuffer_flip_R_java_nio_Buffer,
	(void *) M_java_nio_CharBuffer_rewind_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_remaining_R_int,
	(void *) M_java_nio_Buffer_hasRemaining_R_boolean,
	(void *) M_java_nio_ByteBufferAsCharBufferL_isReadOnly_R_boolean,
	(void *) M_java_nio_CharBuffer_hasArray_R_boolean,
	(void *) M_java_nio_CharBuffer_array_R_java_lang_Object,
	(void *) M_java_nio_CharBuffer_arrayOffset_R_int,
	(void *) M_java_nio_ByteBufferAsCharBufferL_isDirect_R_boolean,
	(void *) M_java_nio_Buffer_nextGetIndex_R_int,
	(void *) M_java_nio_Buffer_nextGetIndex_int_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_int_R_int,
	(void *) M_java_nio_Buffer_markValue_R_int,
	(void *) M_java_nio_Buffer_truncate,
	(void *) M_java_nio_Buffer_discardMark,
	(void *) M_java_nio_CharBuffer_compareTo_java_lang_Object_R_int,
	(void *) M_java_nio_CharBuffer_append_char_R_java_lang_Appendable,
	(void *) M_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_java_nio_CharBuffer_length_R_int,
	(void *) M_java_nio_CharBuffer_charAt_int_R_char,
	(void *) M_java_nio_ByteBufferAsCharBufferL_subSequence_int_int_R_java_lang_CharSequence,
	(void *) M_java_nio_CharBuffer_read_java_nio_CharBuffer_R_int,
	(void *) M_java_nio_ByteBufferAsCharBufferL_slice_R_java_nio_CharBuffer,
	(void *) M_java_nio_ByteBufferAsCharBufferL_duplicate_R_java_nio_CharBuffer,
	(void *) M_java_nio_ByteBufferAsCharBufferL_asReadOnlyBuffer_R_java_nio_CharBuffer,
	(void *) M_java_nio_ByteBufferAsCharBufferL_get_R_char,
	(void *) M_java_nio_ByteBufferAsCharBufferL_put_char_R_java_nio_CharBuffer,
	(void *) M_java_nio_ByteBufferAsCharBufferL_get_int_R_char,
	(void *) M_java_nio_ByteBufferAsCharBufferL_getUnchecked_int_R_char,
	(void *) M_java_nio_ByteBufferAsCharBufferL_put_int_char_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_get_Array1_char_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_put_Array1_char_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_put_java_lang_String_int_int_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_array_R_Array1_char,
	(void *) M_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_mark_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_reset_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_clear_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_flip_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_rewind_R_java_nio_CharBuffer,
	(void *) M_java_nio_ByteBufferAsCharBufferL_compact_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_compareTo_java_nio_CharBuffer_R_int,
	(void *) M_java_nio_ByteBufferAsCharBufferL_toString_int_int_R_java_lang_String,
	(void *) M_java_nio_ByteBufferAsCharBufferL_subSequence_int_int_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_append_char_R_java_nio_CharBuffer,
	(void *) M_java_nio_ByteBufferAsCharBufferL_order_R_java_nio_ByteOrder,
	(void *) M_java_nio_ByteBufferAsCharBufferL_ix_int_R_int,
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
	{ "capacity", "()I" },
	{ "position", "()I" },
	{ "position", "(I)Ljava/nio/Buffer;" },
	{ "limit", "()I" },
	{ "limit", "(I)Ljava/nio/Buffer;" },
	{ "mark", "()Ljava/nio/Buffer;" },
	{ "reset", "()Ljava/nio/Buffer;" },
	{ "clear", "()Ljava/nio/Buffer;" },
	{ "flip", "()Ljava/nio/Buffer;" },
	{ "rewind", "()Ljava/nio/Buffer;" },
	{ "remaining", "()I" },
	{ "hasRemaining", "()Z" },
	{ "isReadOnly", "()Z" },
	{ "hasArray", "()Z" },
	{ "array", "()Ljava/lang/Object;" },
	{ "arrayOffset", "()I" },
	{ "isDirect", "()Z" },
	{ "nextGetIndex", "()I" },
	{ "nextGetIndex", "(I)I" },
	{ "nextPutIndex", "()I" },
	{ "nextPutIndex", "(I)I" },
	{ "checkIndex", "(I)I" },
	{ "checkIndex", "(II)I" },
	{ "markValue", "()I" },
	{ "truncate", "()V" },
	{ "discardMark", "()V" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "append", "(C)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" },
	{ "length", "()I" },
	{ "charAt", "(I)C" },
	{ "subSequence", "(II)Ljava/lang/CharSequence;" },
	{ "read", "(Ljava/nio/CharBuffer;)I" },
	{ "slice", "()Ljava/nio/CharBuffer;" },
	{ "duplicate", "()Ljava/nio/CharBuffer;" },
	{ "asReadOnlyBuffer", "()Ljava/nio/CharBuffer;" },
	{ "get", "()C" },
	{ "put", "(C)Ljava/nio/CharBuffer;" },
	{ "get", "(I)C" },
	{ "getUnchecked", "(I)C" },
	{ "put", "(IC)Ljava/nio/CharBuffer;" },
	{ "get", "([CII)Ljava/nio/CharBuffer;" },
	{ "get", "([C)Ljava/nio/CharBuffer;" },
	{ "put", "(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;" },
	{ "put", "([CII)Ljava/nio/CharBuffer;" },
	{ "put", "([C)Ljava/nio/CharBuffer;" },
	{ "put", "(Ljava/lang/String;II)Ljava/nio/CharBuffer;" },
	{ "put", "(Ljava/lang/String;)Ljava/nio/CharBuffer;" },
	{ "array", "()[C" },
	{ "position", "(I)Ljava/nio/CharBuffer;" },
	{ "limit", "(I)Ljava/nio/CharBuffer;" },
	{ "mark", "()Ljava/nio/CharBuffer;" },
	{ "reset", "()Ljava/nio/CharBuffer;" },
	{ "clear", "()Ljava/nio/CharBuffer;" },
	{ "flip", "()Ljava/nio/CharBuffer;" },
	{ "rewind", "()Ljava/nio/CharBuffer;" },
	{ "compact", "()Ljava/nio/CharBuffer;" },
	{ "compareTo", "(Ljava/nio/CharBuffer;)I" },
	{ "toString", "(II)Ljava/lang/String;" },
	{ "subSequence", "(II)Ljava/nio/CharBuffer;" },
	{ "append", "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;" },
	{ "append", "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;" },
	{ "append", "(C)Ljava/nio/CharBuffer;" },
	{ "order", "()Ljava/nio/ByteOrder;" },
	{ "ix", "(I)I" },
};

static FieldMetadata fields[] {
	{ "bb", &class_java_nio_ByteBuffer, offsetof(java_nio_ByteBufferAsCharBufferL, F_bb), "Ljava/nio/ByteBuffer;", 20 },
	{ "offset", &class_int, offsetof(java_nio_ByteBufferAsCharBufferL, F_offset), "I", 20 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_nio_ByteBufferAsCharBufferL_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_ByteBufferAsCharBufferL_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)V", 0 },
	{ "<init>", (intptr_t) init_java_nio_ByteBufferAsCharBufferL_java_nio_ByteBuffer_int_int_int_int_int, 0, "(Ljava/nio/ByteBuffer;IIIII)V", 0 },
	{ "slice", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_slice_R_java_nio_CharBuffer, VTABLE_java_nio_ByteBufferAsCharBufferL_slice_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1 },
	{ "duplicate", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_duplicate_R_java_nio_CharBuffer, VTABLE_java_nio_ByteBufferAsCharBufferL_duplicate_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1 },
	{ "asReadOnlyBuffer", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_asReadOnlyBuffer_R_java_nio_CharBuffer, VTABLE_java_nio_ByteBufferAsCharBufferL_asReadOnlyBuffer_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1 },
	{ "ix", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_ix_int_R_int, VTABLE_java_nio_ByteBufferAsCharBufferL_ix_int_R_int, "(I)I", 4 },
	{ "get", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_get_R_char, VTABLE_java_nio_ByteBufferAsCharBufferL_get_R_char, "()C", 1 },
	{ "get", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_get_int_R_char, VTABLE_java_nio_ByteBufferAsCharBufferL_get_int_R_char, "(I)C", 1 },
	{ "getUnchecked", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_getUnchecked_int_R_char, VTABLE_java_nio_ByteBufferAsCharBufferL_getUnchecked_int_R_char, "(I)C", 0 },
	{ "put", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_put_char_R_java_nio_CharBuffer, VTABLE_java_nio_ByteBufferAsCharBufferL_put_char_R_java_nio_CharBuffer, "(C)Ljava/nio/CharBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_put_int_char_R_java_nio_CharBuffer, VTABLE_java_nio_ByteBufferAsCharBufferL_put_int_char_R_java_nio_CharBuffer, "(IC)Ljava/nio/CharBuffer;", 1 },
	{ "compact", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_compact_R_java_nio_CharBuffer, VTABLE_java_nio_ByteBufferAsCharBufferL_compact_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1 },
	{ "isDirect", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_isDirect_R_boolean, VTABLE_java_nio_ByteBufferAsCharBufferL_isDirect_R_boolean, "()Z", 1 },
	{ "isReadOnly", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_isReadOnly_R_boolean, VTABLE_java_nio_ByteBufferAsCharBufferL_isReadOnly_R_boolean, "()Z", 1 },
	{ "toString", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_toString_int_int_R_java_lang_String, VTABLE_java_nio_ByteBufferAsCharBufferL_toString_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 1 },
	{ "subSequence", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_subSequence_int_int_R_java_nio_CharBuffer, VTABLE_java_nio_ByteBufferAsCharBufferL_subSequence_int_int_R_java_nio_CharBuffer, "(II)Ljava/nio/CharBuffer;", 1 },
	{ "order", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_order_R_java_nio_ByteOrder, VTABLE_java_nio_ByteBufferAsCharBufferL_order_R_java_nio_ByteOrder, "()Ljava/nio/ByteOrder;", 1 },
	{ "subSequence", (intptr_t) M_java_nio_ByteBufferAsCharBufferL_subSequence_int_int_R_java_lang_CharSequence, VTABLE_java_nio_ByteBufferAsCharBufferL_subSequence_int_int_R_java_lang_CharSequence, "(II)Ljava/lang/CharSequence;", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_nio_ByteBufferAsCharBufferL, 0, "()V", 8 },
};

Class class_java_nio_ByteBufferAsCharBufferL{
		.nativeName = (intptr_t) "java/nio/ByteBufferAsCharBufferL",
		.parentClass = (intptr_t) &class_java_nio_CharBuffer,
		.size = sizeof(java_nio_ByteBufferAsCharBufferL),
		.classVtable = (intptr_t) vtable_java_nio_ByteBufferAsCharBufferL,
		.staticInitializer = (intptr_t) clinit_java_nio_ByteBufferAsCharBufferL,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_ByteBufferAsCharBufferL,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 77,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_ByteBufferAsCharBufferL = registerClass(&class_java_nio_ByteBufferAsCharBufferL);

}
