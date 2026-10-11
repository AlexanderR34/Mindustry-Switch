#include "java/nio/ByteBufferAsLongBufferB.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/Bits.h"
#include "java/lang/Object.h"
#include "java/nio/Buffer.h"
#include "java/nio/ByteBufferAsLongBufferB.h"
#include "java/lang/AssertionError.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/nio/ByteOrder.h"
#include "java/nio/LongBuffer.h"
#include "java/lang/Class.h"

extern "C" {

jbool SF_java_nio_ByteBufferAsLongBufferB_$assertionsDisabled;

void mark_java_nio_ByteBufferAsLongBufferB(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_nio_LongBuffer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_ByteBufferAsLongBufferB *) object;
	if (self->F_bb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bb)->clazz)->markFunction)((jobject) self->F_bb, mark, depth + 1);
}

void init_java_nio_ByteBufferAsLongBufferB_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBufferAsLongBufferB(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	jint temp0 = jint(-1);
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	jint temp3 = temp2 >> (jint(3));
	jint temp4 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	init_java_nio_LongBuffer_int_int_int_int(ctx, sp[0].o, temp0, temp1, temp3, (temp4 >> (jint(3))));
	LINE_NUMBER(37);
	((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_bb = (jref) (frame[1].o);
	LINE_NUMBER(39);
	jint temp5 = (jint)((func_java_nio_ByteBufferAsLongBufferB_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_capacity_R_int])(ctx, (frame[0].o));
	frame[2].i = temp5;
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_java_nio_ByteBufferAsLongBufferB_limit_int_R_java_nio_LongBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_limit_int_R_java_nio_LongBuffer])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(41);
	jint temp6 = (jint)((func_java_nio_ByteBufferAsLongBufferB_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_position_R_int])(ctx, (frame[0].o));
	frame[3].i = temp6;
	LINE_NUMBER(42);
	if ((clinit_java_nio_ByteBufferAsLongBufferB(ctx), (jint)SF_java_nio_ByteBufferAsLongBufferB_$assertionsDisabled) != 0) goto label_6;
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
	((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_offset = (frame[3].i);
	LINE_NUMBER(45);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_address = ((jlong)((java_nio_Buffer *) NULL_CHECK((frame[1].o)))->F_address);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_nio_ByteBufferAsLongBufferB_java_nio_ByteBuffer_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBufferAsLongBufferB(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(50);
	init_java_nio_LongBuffer_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(51);
	((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_bb = (jref) (frame[1].o);
	LINE_NUMBER(52);
	((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_offset = (frame[6].i);
	LINE_NUMBER(54);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_address = (((jlong)((java_nio_Buffer *) NULL_CHECK((frame[1].o)))->F_address) + (jlong((frame[6].i))));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsLongBufferB_slice_R_java_nio_LongBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:slice", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	jint temp0 = (jint)((func_java_nio_ByteBufferAsLongBufferB_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(59);
	jint temp1 = (jint)((func_java_nio_ByteBufferAsLongBufferB_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_limit_R_int])(ctx, (frame[0].o));
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
	frame[4].i = (((frame[1].i) << (jint(3))) + ((jint)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_offset));
	LINE_NUMBER(62);
	if ((clinit_java_nio_ByteBufferAsLongBufferB(ctx), (jint)SF_java_nio_ByteBufferAsLongBufferB_$assertionsDisabled) != 0) goto label_7;
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
	clinit_java_nio_ByteBufferAsLongBufferB(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsLongBufferB);
	sp[1].o = (jobject)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_bb;
	init_java_nio_ByteBufferAsLongBufferB_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, sp[1].o, (jint(-1)), (jint(0)), (frame[3].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsLongBufferB_duplicate_R_java_nio_LongBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:duplicate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	clinit_java_nio_ByteBufferAsLongBufferB(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsLongBufferB);
	sp[1].o = (jobject)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_bb;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsLongBufferB_markValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_markValue_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_ByteBufferAsLongBufferB_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_position_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_java_nio_ByteBufferAsLongBufferB_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_limit_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_nio_ByteBufferAsLongBufferB_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_capacity_R_int])(ctx, (frame[0].o));
	init_java_nio_ByteBufferAsLongBufferB_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, ((jint)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_offset));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsLongBufferB_asReadOnlyBuffer_R_java_nio_LongBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:asReadOnlyBuffer", 3 };
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

jint M_java_nio_ByteBufferAsLongBufferB_ix_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:ix", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (((frame[1].i) << (jint(3))) + ((jint)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_offset));
	}

	popStackFrame(ctx);
}

jlong M_java_nio_ByteBufferAsLongBufferB_get_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_bb;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsLongBufferB_nextGetIndex_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_nextGetIndex_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_ByteBufferAsLongBufferB_ix_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_ix_int_R_int])(ctx, sp[1].o, temp0);
	jlong temp2 = (jlong)SM_java_nio_Bits_getLongB_java_nio_ByteBuffer_int_R_long(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jlong M_java_nio_ByteBufferAsLongBufferB_get_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_bb;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsLongBufferB_checkIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_checkIndex_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)((func_java_nio_ByteBufferAsLongBufferB_ix_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_ix_int_R_int])(ctx, sp[1].o, temp0);
	jlong temp2 = (jlong)SM_java_nio_Bits_getLongB_java_nio_ByteBuffer_int_R_long(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsLongBufferB_put_long_R_java_nio_LongBuffer(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_bb;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsLongBufferB_nextPutIndex_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_nextPutIndex_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_ByteBufferAsLongBufferB_ix_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_ix_int_R_int])(ctx, sp[1].o, temp0);
	SM_java_nio_Bits_putLongB_java_nio_ByteBuffer_int_long(ctx, sp[0].o, temp1, (frame[1].l));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsLongBufferB_put_int_long_R_java_nio_LongBuffer(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_bb;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsLongBufferB_checkIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_checkIndex_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)((func_java_nio_ByteBufferAsLongBufferB_ix_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_ix_int_R_int])(ctx, sp[1].o, temp0);
	SM_java_nio_Bits_putLongB_java_nio_ByteBuffer_int_long(ctx, sp[0].o, temp1, (frame[2].l));
	LINE_NUMBER(96);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsLongBufferB_compact_R_java_nio_LongBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:compact", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_java_nio_ByteBufferAsLongBufferB_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(103);
	jint temp1 = (jint)((func_java_nio_ByteBufferAsLongBufferB_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(104);
	if ((clinit_java_nio_ByteBufferAsLongBufferB(ctx), (jint)SF_java_nio_ByteBufferAsLongBufferB_$assertionsDisabled) != 0) goto label_3;
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
	LINE_NUMBER(105);
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
	LINE_NUMBER(107);
	sp[0].o = (jobject)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_bb;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_java_nio_ByteBufferAsLongBufferB_ix_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_ix_int_R_int])(ctx, (frame[0].o), (frame[2].i));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(109);
	sp[0].o = frame[4].o;
	jint temp1 = (jint)((func_java_nio_ByteBufferAsLongBufferB_ix_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_ix_int_R_int])(ctx, (frame[0].o), (jint(0)));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[5].o), ((frame[1].i) << (jint(3))));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_compact_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_compact_R_java_nio_ByteBuffer])(ctx, (frame[5].o));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_java_nio_ByteBufferAsLongBufferB_position_int_R_java_nio_LongBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_position_int_R_java_nio_LongBuffer])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_java_nio_ByteBufferAsLongBufferB_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_capacity_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_nio_ByteBufferAsLongBufferB_limit_int_R_java_nio_LongBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_limit_int_R_java_nio_LongBuffer])(ctx, sp[0].o, temp2);
	LINE_NUMBER(115);
	((func_java_nio_ByteBufferAsLongBufferB_discardMark) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBufferAsLongBufferB_discardMark])(ctx, (frame[0].o));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_java_nio_ByteBufferAsLongBufferB_isDirect_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:isDirect", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((java_nio_ByteBufferAsLongBufferB *) NULL_CHECK((frame[0].o)))->F_bb;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_isDirect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_isDirect_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_java_nio_ByteBufferAsLongBufferB_isReadOnly_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:isReadOnly", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBufferAsLongBufferB_order_R_java_nio_ByteOrder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:order", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(130);
	clinit_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)SF_java_nio_ByteOrder_BIG_ENDIAN;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_nio_ByteBufferAsLongBufferB(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_LongBuffer(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBufferAsLongBufferB:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBufferAsLongBufferB(ctx);
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_nio_ByteBufferAsLongBufferB)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_nio_ByteBufferAsLongBufferB)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_java_nio_ByteBufferAsLongBufferB(ctx);
	SF_java_nio_ByteBufferAsLongBufferB_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_nio_ByteBufferAsLongBufferB[] {
	(void *) M_java_nio_LongBuffer_hashCode_R_int,
	(void *) M_java_nio_LongBuffer_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_nio_LongBuffer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_nio_Buffer_capacity_R_int,
	(void *) M_java_nio_Buffer_position_R_int,
	(void *) M_java_nio_LongBuffer_position_int_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_limit_R_int,
	(void *) M_java_nio_LongBuffer_limit_int_R_java_nio_Buffer,
	(void *) M_java_nio_LongBuffer_mark_R_java_nio_Buffer,
	(void *) M_java_nio_LongBuffer_reset_R_java_nio_Buffer,
	(void *) M_java_nio_LongBuffer_clear_R_java_nio_Buffer,
	(void *) M_java_nio_LongBuffer_flip_R_java_nio_Buffer,
	(void *) M_java_nio_LongBuffer_rewind_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_remaining_R_int,
	(void *) M_java_nio_Buffer_hasRemaining_R_boolean,
	(void *) M_java_nio_ByteBufferAsLongBufferB_isReadOnly_R_boolean,
	(void *) M_java_nio_LongBuffer_hasArray_R_boolean,
	(void *) M_java_nio_LongBuffer_array_R_java_lang_Object,
	(void *) M_java_nio_LongBuffer_arrayOffset_R_int,
	(void *) M_java_nio_ByteBufferAsLongBufferB_isDirect_R_boolean,
	(void *) M_java_nio_Buffer_nextGetIndex_R_int,
	(void *) M_java_nio_Buffer_nextGetIndex_int_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_int_R_int,
	(void *) M_java_nio_Buffer_markValue_R_int,
	(void *) M_java_nio_Buffer_truncate,
	(void *) M_java_nio_Buffer_discardMark,
	(void *) M_java_nio_LongBuffer_compareTo_java_lang_Object_R_int,
	(void *) M_java_nio_ByteBufferAsLongBufferB_slice_R_java_nio_LongBuffer,
	(void *) M_java_nio_ByteBufferAsLongBufferB_duplicate_R_java_nio_LongBuffer,
	(void *) M_java_nio_ByteBufferAsLongBufferB_asReadOnlyBuffer_R_java_nio_LongBuffer,
	(void *) M_java_nio_ByteBufferAsLongBufferB_get_R_long,
	(void *) M_java_nio_ByteBufferAsLongBufferB_put_long_R_java_nio_LongBuffer,
	(void *) M_java_nio_ByteBufferAsLongBufferB_get_int_R_long,
	(void *) M_java_nio_ByteBufferAsLongBufferB_put_int_long_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_get_Array1_long_int_int_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_get_Array1_long_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_put_java_nio_LongBuffer_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_put_Array1_long_int_int_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_put_Array1_long_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_array_R_Array1_long,
	(void *) M_java_nio_LongBuffer_position_int_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_limit_int_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_mark_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_reset_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_clear_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_flip_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_rewind_R_java_nio_LongBuffer,
	(void *) M_java_nio_ByteBufferAsLongBufferB_compact_R_java_nio_LongBuffer,
	(void *) M_java_nio_LongBuffer_compareTo_java_nio_LongBuffer_R_int,
	(void *) M_java_nio_ByteBufferAsLongBufferB_order_R_java_nio_ByteOrder,
	(void *) M_java_nio_ByteBufferAsLongBufferB_ix_int_R_int,
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
	{ "slice", "()Ljava/nio/LongBuffer;" },
	{ "duplicate", "()Ljava/nio/LongBuffer;" },
	{ "asReadOnlyBuffer", "()Ljava/nio/LongBuffer;" },
	{ "get", "()J" },
	{ "put", "(J)Ljava/nio/LongBuffer;" },
	{ "get", "(I)J" },
	{ "put", "(IJ)Ljava/nio/LongBuffer;" },
	{ "get", "([JII)Ljava/nio/LongBuffer;" },
	{ "get", "([J)Ljava/nio/LongBuffer;" },
	{ "put", "(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;" },
	{ "put", "([JII)Ljava/nio/LongBuffer;" },
	{ "put", "([J)Ljava/nio/LongBuffer;" },
	{ "array", "()[J" },
	{ "position", "(I)Ljava/nio/LongBuffer;" },
	{ "limit", "(I)Ljava/nio/LongBuffer;" },
	{ "mark", "()Ljava/nio/LongBuffer;" },
	{ "reset", "()Ljava/nio/LongBuffer;" },
	{ "clear", "()Ljava/nio/LongBuffer;" },
	{ "flip", "()Ljava/nio/LongBuffer;" },
	{ "rewind", "()Ljava/nio/LongBuffer;" },
	{ "compact", "()Ljava/nio/LongBuffer;" },
	{ "compareTo", "(Ljava/nio/LongBuffer;)I" },
	{ "order", "()Ljava/nio/ByteOrder;" },
	{ "ix", "(I)I" },
};

static FieldMetadata fields[] {
	{ "bb", &class_java_nio_ByteBuffer, offsetof(java_nio_ByteBufferAsLongBufferB, F_bb), "Ljava/nio/ByteBuffer;", 20 },
	{ "offset", &class_int, offsetof(java_nio_ByteBufferAsLongBufferB, F_offset), "I", 20 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_nio_ByteBufferAsLongBufferB_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_ByteBufferAsLongBufferB_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)V", 0 },
	{ "<init>", (intptr_t) init_java_nio_ByteBufferAsLongBufferB_java_nio_ByteBuffer_int_int_int_int_int, 0, "(Ljava/nio/ByteBuffer;IIIII)V", 0 },
	{ "slice", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_slice_R_java_nio_LongBuffer, VTABLE_java_nio_ByteBufferAsLongBufferB_slice_R_java_nio_LongBuffer, "()Ljava/nio/LongBuffer;", 1 },
	{ "duplicate", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_duplicate_R_java_nio_LongBuffer, VTABLE_java_nio_ByteBufferAsLongBufferB_duplicate_R_java_nio_LongBuffer, "()Ljava/nio/LongBuffer;", 1 },
	{ "asReadOnlyBuffer", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_asReadOnlyBuffer_R_java_nio_LongBuffer, VTABLE_java_nio_ByteBufferAsLongBufferB_asReadOnlyBuffer_R_java_nio_LongBuffer, "()Ljava/nio/LongBuffer;", 1 },
	{ "ix", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_ix_int_R_int, VTABLE_java_nio_ByteBufferAsLongBufferB_ix_int_R_int, "(I)I", 4 },
	{ "get", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_get_R_long, VTABLE_java_nio_ByteBufferAsLongBufferB_get_R_long, "()J", 1 },
	{ "get", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_get_int_R_long, VTABLE_java_nio_ByteBufferAsLongBufferB_get_int_R_long, "(I)J", 1 },
	{ "put", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_put_long_R_java_nio_LongBuffer, VTABLE_java_nio_ByteBufferAsLongBufferB_put_long_R_java_nio_LongBuffer, "(J)Ljava/nio/LongBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_put_int_long_R_java_nio_LongBuffer, VTABLE_java_nio_ByteBufferAsLongBufferB_put_int_long_R_java_nio_LongBuffer, "(IJ)Ljava/nio/LongBuffer;", 1 },
	{ "compact", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_compact_R_java_nio_LongBuffer, VTABLE_java_nio_ByteBufferAsLongBufferB_compact_R_java_nio_LongBuffer, "()Ljava/nio/LongBuffer;", 1 },
	{ "isDirect", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_isDirect_R_boolean, VTABLE_java_nio_ByteBufferAsLongBufferB_isDirect_R_boolean, "()Z", 1 },
	{ "isReadOnly", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_isReadOnly_R_boolean, VTABLE_java_nio_ByteBufferAsLongBufferB_isReadOnly_R_boolean, "()Z", 1 },
	{ "order", (intptr_t) M_java_nio_ByteBufferAsLongBufferB_order_R_java_nio_ByteOrder, VTABLE_java_nio_ByteBufferAsLongBufferB_order_R_java_nio_ByteOrder, "()Ljava/nio/ByteOrder;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_nio_ByteBufferAsLongBufferB, 0, "()V", 8 },
};

Class class_java_nio_ByteBufferAsLongBufferB{
		.nativeName = (intptr_t) "java/nio/ByteBufferAsLongBufferB",
		.parentClass = (intptr_t) &class_java_nio_LongBuffer,
		.size = sizeof(java_nio_ByteBufferAsLongBufferB),
		.classVtable = (intptr_t) vtable_java_nio_ByteBufferAsLongBufferB,
		.staticInitializer = (intptr_t) clinit_java_nio_ByteBufferAsLongBufferB,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_ByteBufferAsLongBufferB,
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
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 62,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_ByteBufferAsLongBufferB = registerClass(&class_java_nio_ByteBufferAsLongBufferB);

}
