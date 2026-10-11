#include "java/nio/DoubleBuffer.h"
#include "java/lang/Math.h"
#include "java/nio/DoubleBuffer.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Comparable.h"
#include "java/nio/ByteOrder.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/StringBuffer.h"
#include "java/nio/ReadOnlyBufferException.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/BufferUnderflowException.h"
#include "java/nio/BufferOverflowException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {


void mark_java_nio_DoubleBuffer(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_nio_Buffer(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_nio_DoubleBuffer *) object;
	if (self->F_hb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hb)->clazz)->markFunction)((jobject) self->F_hb, mark, depth + 1);
}

void clinit_java_nio_DoubleBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_Buffer(ctx);
}

void init_java_nio_DoubleBuffer_int_int_int_int_Array1_double_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_DoubleBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(235);
	init_java_nio_Buffer_int_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(236);
	((java_nio_DoubleBuffer *) NULL_CHECK((frame[0].o)))->F_hb = (jref) (frame[5].o);
	LINE_NUMBER(237);
	((java_nio_DoubleBuffer *) NULL_CHECK((frame[0].o)))->F_offset = (frame[6].i);
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_nio_DoubleBuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_DoubleBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(243);
	init_java_nio_DoubleBuffer_int_int_int_int_Array1_double_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jobject(nullptr)), (jint(0)));
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_DoubleBuffer_allocate_int_R_java_nio_DoubleBuffer(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:allocate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_DoubleBuffer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocate_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (8)));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_DoubleBuffer_wrap_Array1_double_int_int_R_java_nio_DoubleBuffer(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:wrap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_DoubleBuffer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(286);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_nio_DoubleBuffer_wrap_Array1_double_R_java_nio_DoubleBuffer(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:wrap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_DoubleBuffer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)SM_java_nio_DoubleBuffer_wrap_Array1_double_int_int_R_java_nio_DoubleBuffer(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:get", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(456);
	SM_java_nio_Buffer_checkBounds_int_int_int(ctx, (frame[2].i), (frame[3].i), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(457);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_nio_DoubleBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_2;
	}
	{
	LINE_NUMBER(458);
	clinit_java_nio_BufferUnderflowException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_BufferUnderflowException);
	init_java_nio_BufferUnderflowException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(459);
	frame[4].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(460);
	frame[5].i = (frame[2].i);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(461);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	jdouble temp1 = (jdouble)((func_java_nio_DoubleBuffer_get_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_get_R_double])(ctx, (frame[0].o));
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = temp1;
	LINE_NUMBER(460);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_get_Array1_double_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_put_java_nio_DoubleBuffer_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:put", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(520);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(521);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(522);
	jint temp0 = (jint)((func_java_nio_DoubleBuffer_isReadOnly_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_isReadOnly_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(523);
	clinit_java_nio_ReadOnlyBufferException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ReadOnlyBufferException);
	init_java_nio_ReadOnlyBufferException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(524);
	jint temp0 = (jint)((func_java_nio_DoubleBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_DoubleBuffer_remaining_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(525);
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_nio_DoubleBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp1 <= temp2) goto label_6;
	}
	{
	LINE_NUMBER(526);
	clinit_java_nio_BufferOverflowException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_BufferOverflowException);
	init_java_nio_BufferOverflowException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(527);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)((func_java_nio_DoubleBuffer_get_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_DoubleBuffer_get_R_double])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_put_double_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_DoubleBuffer_put_double_R_java_nio_DoubleBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(527);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(529);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(572);
	SM_java_nio_Buffer_checkBounds_int_int_int(ctx, (frame[2].i), (frame[3].i), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(573);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_nio_DoubleBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_2;
	}
	{
	LINE_NUMBER(574);
	clinit_java_nio_BufferOverflowException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_BufferOverflowException);
	init_java_nio_BufferOverflowException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(575);
	frame[4].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(576);
	frame[5].i = (frame[2].i);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_put_double_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_put_double_R_java_nio_DoubleBuffer])(ctx, (frame[0].o), ((jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (frame[5].i))));
	LINE_NUMBER(576);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_put_Array1_double_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_nio_DoubleBuffer_hasArray_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:hasArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(615);
	sp[0].o = (jobject)((java_nio_DoubleBuffer *) NULL_CHECK((frame[0].o)))->F_hb;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((java_nio_DoubleBuffer *) NULL_CHECK((frame[0].o)))->F_isReadOnly) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_array_R_Array1_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:array", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((java_nio_DoubleBuffer *) NULL_CHECK((frame[0].o)))->F_hb;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(635);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(636);
	if (((jint)((java_nio_DoubleBuffer *) NULL_CHECK((frame[0].o)))->F_isReadOnly) == 0) goto label_3;
	}
	{
	LINE_NUMBER(637);
	clinit_java_nio_ReadOnlyBufferException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ReadOnlyBufferException);
	init_java_nio_ReadOnlyBufferException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((java_nio_DoubleBuffer *) NULL_CHECK((frame[0].o)))->F_hb;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_nio_DoubleBuffer_arrayOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:arrayOffset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((java_nio_DoubleBuffer *) NULL_CHECK((frame[0].o)))->F_hb;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(659);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(660);
	if (((jint)((java_nio_DoubleBuffer *) NULL_CHECK((frame[0].o)))->F_isReadOnly) == 0) goto label_3;
	}
	{
	LINE_NUMBER(661);
	clinit_java_nio_ReadOnlyBufferException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ReadOnlyBufferException);
	init_java_nio_ReadOnlyBufferException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(662);
	popStackFrame(ctx);
	return ((jint)((java_nio_DoubleBuffer *) NULL_CHECK((frame[0].o)))->F_offset);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_position_int_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:position", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)M_java_nio_Buffer_position_int_R_java_nio_Buffer(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_limit_int_R_java_nio_DoubleBuffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:limit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(673);
	sp[0].o = (jobject)M_java_nio_Buffer_limit_int_R_java_nio_Buffer(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(674);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_mark_R_java_nio_DoubleBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:mark", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)M_java_nio_Buffer_mark_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(680);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_reset_R_java_nio_DoubleBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)M_java_nio_Buffer_reset_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_clear_R_java_nio_DoubleBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(691);
	sp[0].o = (jobject)M_java_nio_Buffer_clear_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(692);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_flip_R_java_nio_DoubleBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:flip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(697);
	sp[0].o = (jobject)M_java_nio_Buffer_flip_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_rewind_R_java_nio_DoubleBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:rewind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)M_java_nio_Buffer_rewind_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(743);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(744);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(745);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"[pos="_j))));
	LINE_NUMBER(746);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_nio_DoubleBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_position_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(747);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" lim="_j))));
	LINE_NUMBER(748);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_java_nio_DoubleBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_limit_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(749);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" cap="_j))));
	LINE_NUMBER(750);
	sp[0].o = frame[1].o;
	jint temp2 = (jint)((func_java_nio_DoubleBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_capacity_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, sp[0].o, temp2);
	LINE_NUMBER(751);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"]"_j))));
	LINE_NUMBER(752);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_nio_DoubleBuffer_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:hashCode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(769);
	frame[1].i = (jint(1));
	LINE_NUMBER(770);
	jint temp0 = (jint)((func_java_nio_DoubleBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_position_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(771);
	jint temp1 = (jint)((func_java_nio_DoubleBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[3].i = (temp1 - (jint(1)));
	}
label_3:;
	{
	if ((frame[3].i) < (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(773);
	jint temp0 = (31) * (frame[1].i);
	jdouble temp1 = (jdouble)((func_java_nio_DoubleBuffer_get_int_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_get_int_R_double])(ctx, (frame[0].o), (frame[3].i));
	frame[1].i = (temp0 + (jint(temp1)));
	LINE_NUMBER(771);
	INST_IINC(3, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(775);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_nio_DoubleBuffer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:equals", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(810);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(812);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_DoubleBuffer)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(813);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(814);
	frame[2].o = (checkCast(ctx, &class_java_nio_DoubleBuffer, (frame[1].o)));
	LINE_NUMBER(815);
	jint temp0 = (jint)((func_java_nio_DoubleBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_position_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(816);
	jint temp1 = (jint)((func_java_nio_DoubleBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(817);
	jint temp2 = (jint)((func_java_nio_DoubleBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_DoubleBuffer_position_R_int])(ctx, (frame[2].o));
	frame[5].i = temp2;
	LINE_NUMBER(818);
	jint temp3 = (jint)((func_java_nio_DoubleBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_DoubleBuffer_limit_R_int])(ctx, (frame[2].o));
	frame[6].i = temp3;
	LINE_NUMBER(819);
	frame[7].i = ((frame[4].i) - (frame[3].i));
	LINE_NUMBER(820);
	frame[8].i = ((frame[6].i) - (frame[5].i));
	LINE_NUMBER(821);
	if ((frame[7].i) < 0) goto label_12;
	}
	{
	if ((frame[7].i) == (frame[8].i)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(822);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(823);
	frame[9].i = ((frame[4].i) - (jint(1)));
	frame[10].i = ((frame[6].i) - (jint(1)));
	}
label_15:;
	{
	if ((frame[9].i) < (frame[3].i)) goto label_16;
	}
	{
	LINE_NUMBER(824);
	jdouble temp0 = (jdouble)((func_java_nio_DoubleBuffer_get_int_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_get_int_R_double])(ctx, (frame[0].o), (frame[9].i));
	jdouble temp1 = (jdouble)((func_java_nio_DoubleBuffer_get_int_R_double) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_DoubleBuffer_get_int_R_double])(ctx, (frame[2].o), (frame[10].i));
	jint temp2 = (jint)SM_java_nio_DoubleBuffer_equals_double_double_R_boolean(ctx, temp0, temp1);
	if (temp2 != 0) goto label_18;
	}
	{
	LINE_NUMBER(825);
	popStackFrame(ctx);
	return (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(823);
	INST_IINC(9, -1);
	INST_IINC(10, -1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(826);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_nio_DoubleBuffer_equals_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:equals", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_DoubleBuffer(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(831);
	if ((doubleCompare((frame[0].d), (frame[2].d), -1)) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_nio_DoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:compareTo", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(859);
	jint temp0 = (jint)((func_java_nio_DoubleBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_position_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(860);
	jint temp1 = (jint)((func_java_nio_DoubleBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[3].i = (temp1 - (frame[2].i));
	LINE_NUMBER(861);
	jint temp2 = (jint)((func_java_nio_DoubleBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_DoubleBuffer_position_R_int])(ctx, (frame[1].o));
	frame[4].i = temp2;
	LINE_NUMBER(862);
	jint temp3 = (jint)((func_java_nio_DoubleBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_DoubleBuffer_limit_R_int])(ctx, (frame[1].o));
	frame[5].i = (temp3 - (frame[4].i));
	LINE_NUMBER(863);
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[5].i));
	frame[6].i = temp4;
	LINE_NUMBER(864);
	if ((frame[6].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(865);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(866);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[5].i));
	frame[7].i = (temp0 + temp1);
	LINE_NUMBER(867);
	frame[8].i = (frame[2].i);
	frame[9].i = (frame[4].i);
	}
label_10:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_11;
	}
	{
	LINE_NUMBER(868);
	jdouble temp0 = (jdouble)((func_java_nio_DoubleBuffer_get_int_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_get_int_R_double])(ctx, (frame[0].o), (frame[8].i));
	jdouble temp1 = (jdouble)((func_java_nio_DoubleBuffer_get_int_R_double) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_DoubleBuffer_get_int_R_double])(ctx, (frame[1].o), (frame[9].i));
	jint temp2 = (jint)SM_java_nio_DoubleBuffer_compare_double_double_R_int(ctx, temp0, temp1);
	frame[10].i = temp2;
	LINE_NUMBER(869);
	if ((frame[10].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(870);
	popStackFrame(ctx);
	return (frame[10].i);
	}
label_14:;
	{
	LINE_NUMBER(867);
	INST_IINC(8, 1);
	INST_IINC(9, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(872);
	popStackFrame(ctx);
	return ((frame[3].i) - (frame[5].i));
	}

	popStackFrame(ctx);
}

jint SM_java_nio_DoubleBuffer_compare_double_double_R_int(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:compare", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_DoubleBuffer(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(877);
	if ((doubleCompare((frame[0].d), (frame[2].d), 1)) >= 0) goto label_1;
	}
	INST_ICONST(-1);
	goto label_2;
label_1:;
	{
	if ((doubleCompare((frame[0].d), (frame[2].d), -1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_2;
label_3:;
	{
	if ((doubleCompare((frame[0].d), (frame[2].d), -1)) != 0) goto label_4;
	}
	INST_ICONST(0);
	goto label_2;
label_4:;
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(0);
	goto label_2;
label_6:;
	INST_ICONST(1);
	goto label_2;
label_5:;
	INST_ICONST(-1);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_array_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:array", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_array_R_Array1_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_array_R_Array1_double])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_rewind_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:rewind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_rewind_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_rewind_R_java_nio_DoubleBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_flip_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:flip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_flip_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_flip_R_java_nio_DoubleBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_clear_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_clear_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_clear_R_java_nio_DoubleBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_reset_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_reset_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_reset_R_java_nio_DoubleBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_mark_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:mark", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_mark_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_mark_R_java_nio_DoubleBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_limit_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:limit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_limit_int_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_limit_int_R_java_nio_DoubleBuffer])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_DoubleBuffer_position_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:position", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_java_nio_DoubleBuffer_position_int_R_java_nio_DoubleBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_position_int_R_java_nio_DoubleBuffer])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_nio_DoubleBuffer_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/DoubleBuffer:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(220);
	jint temp0 = (jint)((func_java_nio_DoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_DoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_nio_DoubleBuffer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_java_nio_DoubleBuffer[] {
	(void *) M_java_nio_DoubleBuffer_hashCode_R_int,
	(void *) M_java_nio_DoubleBuffer_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_nio_DoubleBuffer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_nio_Buffer_capacity_R_int,
	(void *) M_java_nio_Buffer_position_R_int,
	(void *) M_java_nio_DoubleBuffer_position_int_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_limit_R_int,
	(void *) M_java_nio_DoubleBuffer_limit_int_R_java_nio_Buffer,
	(void *) M_java_nio_DoubleBuffer_mark_R_java_nio_Buffer,
	(void *) M_java_nio_DoubleBuffer_reset_R_java_nio_Buffer,
	(void *) M_java_nio_DoubleBuffer_clear_R_java_nio_Buffer,
	(void *) M_java_nio_DoubleBuffer_flip_R_java_nio_Buffer,
	(void *) M_java_nio_DoubleBuffer_rewind_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_remaining_R_int,
	(void *) M_java_nio_Buffer_hasRemaining_R_boolean,
	(void *) nullptr,
	(void *) M_java_nio_DoubleBuffer_hasArray_R_boolean,
	(void *) M_java_nio_DoubleBuffer_array_R_java_lang_Object,
	(void *) M_java_nio_DoubleBuffer_arrayOffset_R_int,
	(void *) nullptr,
	(void *) M_java_nio_Buffer_nextGetIndex_R_int,
	(void *) M_java_nio_Buffer_nextGetIndex_int_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_int_R_int,
	(void *) M_java_nio_Buffer_markValue_R_int,
	(void *) M_java_nio_Buffer_truncate,
	(void *) M_java_nio_Buffer_discardMark,
	(void *) M_java_nio_DoubleBuffer_compareTo_java_lang_Object_R_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_nio_DoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_get_Array1_double_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_put_java_nio_DoubleBuffer_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_put_Array1_double_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_array_R_Array1_double,
	(void *) M_java_nio_DoubleBuffer_position_int_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_limit_int_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_mark_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_reset_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_clear_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_flip_R_java_nio_DoubleBuffer,
	(void *) M_java_nio_DoubleBuffer_rewind_R_java_nio_DoubleBuffer,
	(void *) nullptr,
	(void *) M_java_nio_DoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int,
	(void *) nullptr,
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
	{ "slice", "()Ljava/nio/DoubleBuffer;" },
	{ "duplicate", "()Ljava/nio/DoubleBuffer;" },
	{ "asReadOnlyBuffer", "()Ljava/nio/DoubleBuffer;" },
	{ "get", "()D" },
	{ "put", "(D)Ljava/nio/DoubleBuffer;" },
	{ "get", "(I)D" },
	{ "put", "(ID)Ljava/nio/DoubleBuffer;" },
	{ "get", "([DII)Ljava/nio/DoubleBuffer;" },
	{ "get", "([D)Ljava/nio/DoubleBuffer;" },
	{ "put", "(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;" },
	{ "put", "([DII)Ljava/nio/DoubleBuffer;" },
	{ "put", "([D)Ljava/nio/DoubleBuffer;" },
	{ "array", "()[D" },
	{ "position", "(I)Ljava/nio/DoubleBuffer;" },
	{ "limit", "(I)Ljava/nio/DoubleBuffer;" },
	{ "mark", "()Ljava/nio/DoubleBuffer;" },
	{ "reset", "()Ljava/nio/DoubleBuffer;" },
	{ "clear", "()Ljava/nio/DoubleBuffer;" },
	{ "flip", "()Ljava/nio/DoubleBuffer;" },
	{ "rewind", "()Ljava/nio/DoubleBuffer;" },
	{ "compact", "()Ljava/nio/DoubleBuffer;" },
	{ "compareTo", "(Ljava/nio/DoubleBuffer;)I" },
	{ "order", "()Ljava/nio/ByteOrder;" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "hb", getArrayClass(&class_double, 1), offsetof(java_nio_DoubleBuffer, F_hb), "[D", 16 },
	{ "offset", &class_int, offsetof(java_nio_DoubleBuffer, F_offset), "I", 16 },
	{ "isReadOnly", &class_boolean, offsetof(java_nio_DoubleBuffer, F_isReadOnly), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_DoubleBuffer_int_int_int_int_Array1_double_int, 0, "(IIII[DI)V", 0 },
	{ "<init>", (intptr_t) init_java_nio_DoubleBuffer_int_int_int_int, 0, "(IIII)V", 0 },
	{ "allocate", (intptr_t) SM_java_nio_DoubleBuffer_allocate_int_R_java_nio_DoubleBuffer, 0, "(I)Ljava/nio/DoubleBuffer;", 9 },
	{ "wrap", (intptr_t) SM_java_nio_DoubleBuffer_wrap_Array1_double_int_int_R_java_nio_DoubleBuffer, 0, "([DII)Ljava/nio/DoubleBuffer;", 9 },
	{ "wrap", (intptr_t) SM_java_nio_DoubleBuffer_wrap_Array1_double_R_java_nio_DoubleBuffer, 0, "([D)Ljava/nio/DoubleBuffer;", 9 },
	{ "slice", 0, VTABLE_java_nio_DoubleBuffer_slice_R_java_nio_DoubleBuffer, "()Ljava/nio/DoubleBuffer;", 1025 },
	{ "duplicate", 0, VTABLE_java_nio_DoubleBuffer_duplicate_R_java_nio_DoubleBuffer, "()Ljava/nio/DoubleBuffer;", 1025 },
	{ "asReadOnlyBuffer", 0, VTABLE_java_nio_DoubleBuffer_asReadOnlyBuffer_R_java_nio_DoubleBuffer, "()Ljava/nio/DoubleBuffer;", 1025 },
	{ "get", 0, VTABLE_java_nio_DoubleBuffer_get_R_double, "()D", 1025 },
	{ "put", 0, VTABLE_java_nio_DoubleBuffer_put_double_R_java_nio_DoubleBuffer, "(D)Ljava/nio/DoubleBuffer;", 1025 },
	{ "get", 0, VTABLE_java_nio_DoubleBuffer_get_int_R_double, "(I)D", 1025 },
	{ "put", 0, VTABLE_java_nio_DoubleBuffer_put_int_double_R_java_nio_DoubleBuffer, "(ID)Ljava/nio/DoubleBuffer;", 1025 },
	{ "get", (intptr_t) M_java_nio_DoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_get_Array1_double_int_int_R_java_nio_DoubleBuffer, "([DII)Ljava/nio/DoubleBuffer;", 1 },
	{ "get", (intptr_t) M_java_nio_DoubleBuffer_get_Array1_double_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_get_Array1_double_R_java_nio_DoubleBuffer, "([D)Ljava/nio/DoubleBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_DoubleBuffer_put_java_nio_DoubleBuffer_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_put_java_nio_DoubleBuffer_R_java_nio_DoubleBuffer, "(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_DoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_put_Array1_double_int_int_R_java_nio_DoubleBuffer, "([DII)Ljava/nio/DoubleBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_DoubleBuffer_put_Array1_double_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_put_Array1_double_R_java_nio_DoubleBuffer, "([D)Ljava/nio/DoubleBuffer;", 17 },
	{ "hasArray", (intptr_t) M_java_nio_DoubleBuffer_hasArray_R_boolean, VTABLE_java_nio_DoubleBuffer_hasArray_R_boolean, "()Z", 17 },
	{ "array", (intptr_t) M_java_nio_DoubleBuffer_array_R_Array1_double, VTABLE_java_nio_DoubleBuffer_array_R_Array1_double, "()[D", 17 },
	{ "arrayOffset", (intptr_t) M_java_nio_DoubleBuffer_arrayOffset_R_int, VTABLE_java_nio_DoubleBuffer_arrayOffset_R_int, "()I", 17 },
	{ "position", (intptr_t) M_java_nio_DoubleBuffer_position_int_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_position_int_R_java_nio_DoubleBuffer, "(I)Ljava/nio/DoubleBuffer;", 1 },
	{ "limit", (intptr_t) M_java_nio_DoubleBuffer_limit_int_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_limit_int_R_java_nio_DoubleBuffer, "(I)Ljava/nio/DoubleBuffer;", 1 },
	{ "mark", (intptr_t) M_java_nio_DoubleBuffer_mark_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_mark_R_java_nio_DoubleBuffer, "()Ljava/nio/DoubleBuffer;", 1 },
	{ "reset", (intptr_t) M_java_nio_DoubleBuffer_reset_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_reset_R_java_nio_DoubleBuffer, "()Ljava/nio/DoubleBuffer;", 1 },
	{ "clear", (intptr_t) M_java_nio_DoubleBuffer_clear_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_clear_R_java_nio_DoubleBuffer, "()Ljava/nio/DoubleBuffer;", 1 },
	{ "flip", (intptr_t) M_java_nio_DoubleBuffer_flip_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_flip_R_java_nio_DoubleBuffer, "()Ljava/nio/DoubleBuffer;", 1 },
	{ "rewind", (intptr_t) M_java_nio_DoubleBuffer_rewind_R_java_nio_DoubleBuffer, VTABLE_java_nio_DoubleBuffer_rewind_R_java_nio_DoubleBuffer, "()Ljava/nio/DoubleBuffer;", 1 },
	{ "compact", 0, VTABLE_java_nio_DoubleBuffer_compact_R_java_nio_DoubleBuffer, "()Ljava/nio/DoubleBuffer;", 1025 },
	{ "isDirect", 0, VTABLE_java_nio_DoubleBuffer_isDirect_R_boolean, "()Z", 1025 },
	{ "toString", (intptr_t) M_java_nio_DoubleBuffer_toString_R_java_lang_String, VTABLE_java_nio_DoubleBuffer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_java_nio_DoubleBuffer_hashCode_R_int, VTABLE_java_nio_DoubleBuffer_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_nio_DoubleBuffer_equals_java_lang_Object_R_boolean, VTABLE_java_nio_DoubleBuffer_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equals", (intptr_t) SM_java_nio_DoubleBuffer_equals_double_double_R_boolean, 0, "(DD)Z", 10 },
	{ "compareTo", (intptr_t) M_java_nio_DoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int, VTABLE_java_nio_DoubleBuffer_compareTo_java_nio_DoubleBuffer_R_int, "(Ljava/nio/DoubleBuffer;)I", 1 },
	{ "compare", (intptr_t) SM_java_nio_DoubleBuffer_compare_double_double_R_int, 0, "(DD)I", 10 },
	{ "order", 0, VTABLE_java_nio_DoubleBuffer_order_R_java_nio_ByteOrder, "()Ljava/nio/ByteOrder;", 1025 },
	{ "array", (intptr_t) M_java_nio_DoubleBuffer_array_R_java_lang_Object, VTABLE_java_nio_DoubleBuffer_array_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "rewind", (intptr_t) M_java_nio_DoubleBuffer_rewind_R_java_nio_Buffer, VTABLE_java_nio_DoubleBuffer_rewind_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "flip", (intptr_t) M_java_nio_DoubleBuffer_flip_R_java_nio_Buffer, VTABLE_java_nio_DoubleBuffer_flip_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "clear", (intptr_t) M_java_nio_DoubleBuffer_clear_R_java_nio_Buffer, VTABLE_java_nio_DoubleBuffer_clear_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "reset", (intptr_t) M_java_nio_DoubleBuffer_reset_R_java_nio_Buffer, VTABLE_java_nio_DoubleBuffer_reset_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "mark", (intptr_t) M_java_nio_DoubleBuffer_mark_R_java_nio_Buffer, VTABLE_java_nio_DoubleBuffer_mark_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "limit", (intptr_t) M_java_nio_DoubleBuffer_limit_int_R_java_nio_Buffer, VTABLE_java_nio_DoubleBuffer_limit_int_R_java_nio_Buffer, "(I)Ljava/nio/Buffer;", 4161 },
	{ "position", (intptr_t) M_java_nio_DoubleBuffer_position_int_R_java_nio_Buffer, VTABLE_java_nio_DoubleBuffer_position_int_R_java_nio_Buffer, "(I)Ljava/nio/Buffer;", 4161 },
	{ "compareTo", (intptr_t) M_java_nio_DoubleBuffer_compareTo_java_lang_Object_R_int, VTABLE_java_nio_DoubleBuffer_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_java_nio_DoubleBuffer{
		.nativeName = (intptr_t) "java/nio/DoubleBuffer",
		.parentClass = (intptr_t) &class_java_nio_Buffer,
		.size = sizeof(java_nio_DoubleBuffer),
		.classVtable = (intptr_t) vtable_java_nio_DoubleBuffer,
		.staticInitializer = (intptr_t) clinit_java_nio_DoubleBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_DoubleBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 45,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 61,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_DoubleBuffer = registerClass(&class_java_nio_DoubleBuffer);

}
