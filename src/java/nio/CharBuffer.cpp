#include "java/nio/CharBuffer.h"
#include "java/lang/Math.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Comparable.h"
#include "java/nio/ByteOrder.h"
#include "java/nio/CharBuffer.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Appendable.h"
#include "java/nio/ReadOnlyBufferException.h"
#include "java/lang/CharSequence.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/BufferUnderflowException.h"
#include "java/nio/BufferOverflowException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/nio/Buffer.h"
#include "java/lang/AssertionError.h"
#include "java/lang/Readable.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"

extern "C" {

jbool SF_java_nio_CharBuffer_$assertionsDisabled;

void mark_java_nio_CharBuffer(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_CharBuffer *) object;
	if (self->F_hb)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hb)->clazz)->markFunction)((jobject) self->F_hb, mark, depth + 1);
}

void init_java_nio_CharBuffer_int_int_int_int_Array1_char_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_CharBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(267);
	init_java_nio_Buffer_int_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(268);
	((java_nio_CharBuffer *) NULL_CHECK((frame[0].o)))->F_hb = (jref) (frame[5].o);
	LINE_NUMBER(269);
	((java_nio_CharBuffer *) NULL_CHECK((frame[0].o)))->F_offset = (frame[6].i);
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_nio_CharBuffer_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_CharBuffer(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(275);
	init_java_nio_CharBuffer_int_int_int_int_Array1_char_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jobject(nullptr)), (jint(0)));
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_CharBuffer_allocate_int_R_java_nio_CharBuffer(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:allocate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_CharBuffer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocate_int_R_java_nio_ByteBuffer(ctx, ((frame[0].i) * (jint(2))));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_asCharBuffer_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_asCharBuffer_R_java_nio_CharBuffer])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_CharBuffer_wrap_Array1_char_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:wrap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_CharBuffer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(318);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_nio_CharBuffer_wrap_Array1_char_R_java_nio_CharBuffer(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:wrap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_CharBuffer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)SM_java_nio_CharBuffer_wrap_Array1_char_int_int_R_java_nio_CharBuffer(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_nio_CharBuffer_read_java_nio_CharBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(355);
	jint temp0 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(356);
	jint temp1 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[0].o));
	frame[3].i = temp1;
	LINE_NUMBER(357);
	frame[4].i = ((frame[2].i) - (frame[3].i));
	LINE_NUMBER(358);
	if ((clinit_java_nio_CharBuffer(ctx), (jint)SF_java_nio_CharBuffer_$assertionsDisabled) != 0) goto label_10;
	}
	INST_ILOAD(4);
	if ((--sp)->i >= 0) goto label_10;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(359);
	if ((frame[4].i) > 0) goto label_11;
	}
	{
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_11:;
	{
	LINE_NUMBER(362);
	jint temp0 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(363);
	if ((clinit_java_nio_CharBuffer(ctx), (jint)SF_java_nio_CharBuffer_$assertionsDisabled) != 0) goto label_14;
	}
	INST_ILOAD(5);
	if ((--sp)->i >= 0) goto label_14;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(364);
	if ((frame[5].i) > 0) goto label_15;
	}
	{
	LINE_NUMBER(365);
	popStackFrame(ctx);
	return (jint(0));
	}
label_15:;
	{
	LINE_NUMBER(367);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[4].i), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(370);
	if ((frame[5].i) >= (frame[4].i)) goto label_0;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), ((frame[3].i) + (frame[6].i)));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(373);
	if ((frame[6].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer])(ctx, (frame[1].o), (frame[0].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(377);
	goto label_21;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(376);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((func_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(377);
	throwException(ctx, (frame[7].o));	}
label_21:;
	{
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_CharBuffer_wrap_java_lang_CharSequence_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:wrap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_CharBuffer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(403);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_nio_CharBuffer_wrap_java_lang_CharSequence_R_java_nio_CharBuffer(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:wrap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_CharBuffer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(419);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[0].o)))(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_nio_CharBuffer_wrap_java_lang_CharSequence_int_int_R_java_nio_CharBuffer(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(580);
	SM_java_nio_Buffer_checkBounds_int_int_int(ctx, (frame[2].i), (frame[3].i), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(581);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_2;
	}
	{
	LINE_NUMBER(582);
	clinit_java_nio_BufferUnderflowException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_BufferUnderflowException);
	init_java_nio_BufferUnderflowException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(583);
	frame[4].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(584);
	frame[5].i = (frame[2].i);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(585);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_nio_CharBuffer_get_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_get_R_char])(ctx, (frame[0].o));
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = temp1;
	LINE_NUMBER(584);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_get_Array1_char_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(644);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(645);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(646);
	jint temp0 = (jint)((func_java_nio_CharBuffer_isReadOnly_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_isReadOnly_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(647);
	clinit_java_nio_ReadOnlyBufferException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ReadOnlyBufferException);
	init_java_nio_ReadOnlyBufferException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(648);
	jint temp0 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(649);
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp1 <= temp2) goto label_6;
	}
	{
	LINE_NUMBER(650);
	clinit_java_nio_BufferOverflowException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_BufferOverflowException);
	init_java_nio_BufferOverflowException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(651);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_CharBuffer_get_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_get_R_char])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(651);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(653);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(696);
	SM_java_nio_Buffer_checkBounds_int_int_int(ctx, (frame[2].i), (frame[3].i), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(697);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_2;
	}
	{
	LINE_NUMBER(698);
	clinit_java_nio_BufferOverflowException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_BufferOverflowException);
	init_java_nio_BufferOverflowException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(699);
	frame[4].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(700);
	frame[5].i = (frame[2].i);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[5].i))));
	LINE_NUMBER(700);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_put_Array1_char_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_put_java_lang_String_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:put", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(767);
	jint temp0 = frame[2].i;
	jint temp1 = (frame[3].i) - (frame[2].i);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	SM_java_nio_Buffer_checkBounds_int_int_int(ctx, temp0, temp1, temp2);
	LINE_NUMBER(768);
	jint temp3 = (jint)((func_java_nio_CharBuffer_isReadOnly_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_isReadOnly_R_boolean])(ctx, (frame[0].o));
	if (temp3 == 0) goto label_2;
	}
	{
	LINE_NUMBER(769);
	clinit_java_nio_ReadOnlyBufferException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ReadOnlyBufferException);
	init_java_nio_ReadOnlyBufferException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(770);
	jint temp0 = (frame[3].i) - (frame[2].i);
	jint temp1 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_4;
	}
	{
	LINE_NUMBER(771);
	clinit_java_nio_BufferOverflowException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_BufferOverflowException);
	init_java_nio_BufferOverflowException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(772);
	frame[4].i = (frame[2].i);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(773);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(772);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(774);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(793);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_java_lang_String_int_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_put_java_lang_String_int_int_R_java_nio_CharBuffer])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_nio_CharBuffer_hasArray_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:hasArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(810);
	sp[0].o = (jobject)((java_nio_CharBuffer *) NULL_CHECK((frame[0].o)))->F_hb;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((java_nio_CharBuffer *) NULL_CHECK((frame[0].o)))->F_isReadOnly) != 0) goto label_1;
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

jobject M_java_nio_CharBuffer_array_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:array", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)((java_nio_CharBuffer *) NULL_CHECK((frame[0].o)))->F_hb;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(830);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(831);
	if (((jint)((java_nio_CharBuffer *) NULL_CHECK((frame[0].o)))->F_isReadOnly) == 0) goto label_3;
	}
	{
	LINE_NUMBER(832);
	clinit_java_nio_ReadOnlyBufferException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ReadOnlyBufferException);
	init_java_nio_ReadOnlyBufferException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(833);
	sp[0].o = (jobject)((java_nio_CharBuffer *) NULL_CHECK((frame[0].o)))->F_hb;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_nio_CharBuffer_arrayOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:arrayOffset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(853);
	sp[0].o = (jobject)((java_nio_CharBuffer *) NULL_CHECK((frame[0].o)))->F_hb;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(854);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(855);
	if (((jint)((java_nio_CharBuffer *) NULL_CHECK((frame[0].o)))->F_isReadOnly) == 0) goto label_3;
	}
	{
	LINE_NUMBER(856);
	clinit_java_nio_ReadOnlyBufferException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ReadOnlyBufferException);
	init_java_nio_ReadOnlyBufferException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(857);
	popStackFrame(ctx);
	return ((jint)((java_nio_CharBuffer *) NULL_CHECK((frame[0].o)))->F_offset);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:position", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(862);
	sp[0].o = (jobject)M_java_nio_Buffer_position_int_R_java_nio_Buffer(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(863);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:limit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(868);
	sp[0].o = (jobject)M_java_nio_Buffer_limit_int_R_java_nio_Buffer(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(869);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_mark_R_java_nio_CharBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:mark", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(874);
	sp[0].o = (jobject)M_java_nio_Buffer_mark_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(875);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_reset_R_java_nio_CharBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(880);
	sp[0].o = (jobject)M_java_nio_Buffer_reset_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_clear_R_java_nio_CharBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(886);
	sp[0].o = (jobject)M_java_nio_Buffer_clear_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(887);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_flip_R_java_nio_CharBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:flip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(892);
	sp[0].o = (jobject)M_java_nio_Buffer_flip_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_rewind_R_java_nio_CharBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:rewind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(898);
	sp[0].o = (jobject)M_java_nio_Buffer_rewind_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(899);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jint M_java_nio_CharBuffer_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:hashCode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(946);
	frame[1].i = (jint(1));
	LINE_NUMBER(947);
	jint temp0 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(948);
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[3].i = (temp1 - (jint(1)));
	}
label_3:;
	{
	if ((frame[3].i) < (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(950);
	jint temp0 = (31) * (frame[1].i);
	jint temp1 = (jint)((func_java_nio_CharBuffer_get_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_get_int_R_char])(ctx, (frame[0].o), (frame[3].i));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(948);
	INST_IINC(3, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(952);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_nio_CharBuffer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:equals", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(987);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(988);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(989);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_CharBuffer)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(990);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(991);
	frame[2].o = (checkCast(ctx, &class_java_nio_CharBuffer, (frame[1].o)));
	LINE_NUMBER(992);
	jint temp0 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(993);
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(994);
	jint temp2 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[2].o));
	frame[5].i = temp2;
	LINE_NUMBER(995);
	jint temp3 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, (frame[2].o));
	frame[6].i = temp3;
	LINE_NUMBER(996);
	frame[7].i = ((frame[4].i) - (frame[3].i));
	LINE_NUMBER(997);
	frame[8].i = ((frame[6].i) - (frame[5].i));
	LINE_NUMBER(998);
	if ((frame[7].i) < 0) goto label_12;
	}
	{
	if ((frame[7].i) == (frame[8].i)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(999);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(1000);
	frame[9].i = ((frame[4].i) - (jint(1)));
	frame[10].i = ((frame[6].i) - (jint(1)));
	}
label_15:;
	{
	if ((frame[9].i) < (frame[3].i)) goto label_16;
	}
	{
	LINE_NUMBER(1001);
	jint temp0 = (jint)((func_java_nio_CharBuffer_get_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_get_int_R_char])(ctx, (frame[0].o), (frame[9].i));
	jint temp1 = (jint)((func_java_nio_CharBuffer_get_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_CharBuffer_get_int_R_char])(ctx, (frame[2].o), (frame[10].i));
	jint temp2 = (jint)SM_java_nio_CharBuffer_equals_char_char_R_boolean(ctx, temp0, temp1);
	if (temp2 != 0) goto label_18;
	}
	{
	LINE_NUMBER(1002);
	popStackFrame(ctx);
	return (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(1000);
	INST_IINC(9, -1);
	INST_IINC(10, -1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1003);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_nio_CharBuffer_equals_char_char_R_boolean(jcontext ctx, jchar param0, jchar param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_CharBuffer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1008);
	if ((frame[0].i) != (frame[1].i)) goto label_1;
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

jint M_java_nio_CharBuffer_compareTo_java_nio_CharBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:compareTo", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1036);
	jint temp0 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(1037);
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[3].i = (temp1 - (frame[2].i));
	LINE_NUMBER(1038);
	jint temp2 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[1].o));
	frame[4].i = temp2;
	LINE_NUMBER(1039);
	jint temp3 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, (frame[1].o));
	frame[5].i = (temp3 - (frame[4].i));
	LINE_NUMBER(1040);
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[5].i));
	frame[6].i = temp4;
	LINE_NUMBER(1041);
	if ((frame[6].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(1042);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(1043);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[5].i));
	frame[7].i = (temp0 + temp1);
	LINE_NUMBER(1044);
	frame[8].i = (frame[2].i);
	frame[9].i = (frame[4].i);
	}
label_10:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_11;
	}
	{
	LINE_NUMBER(1045);
	jint temp0 = (jint)((func_java_nio_CharBuffer_get_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_get_int_R_char])(ctx, (frame[0].o), (frame[8].i));
	jint temp1 = (jint)((func_java_nio_CharBuffer_get_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_CharBuffer_get_int_R_char])(ctx, (frame[1].o), (frame[9].i));
	jint temp2 = (jint)SM_java_nio_CharBuffer_compare_char_char_R_int(ctx, temp0, temp1);
	frame[10].i = temp2;
	LINE_NUMBER(1046);
	if ((frame[10].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1047);
	popStackFrame(ctx);
	return (frame[10].i);
	}
label_14:;
	{
	LINE_NUMBER(1044);
	INST_IINC(8, 1);
	INST_IINC(9, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1049);
	popStackFrame(ctx);
	return ((frame[3].i) - (frame[5].i));
	}

	popStackFrame(ctx);
}

jint SM_java_nio_CharBuffer_compare_char_char_R_int(jcontext ctx, jchar param0, jchar param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:compare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_CharBuffer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1054);
	jint temp0 = (jint)SM_java_lang_Character_compare_char_char_R_int(ctx, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1071);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_CharBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_nio_CharBuffer_toString_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_toString_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_nio_CharBuffer_length_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:length", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1089);
	jint temp0 = (jint)((func_java_nio_CharBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_remaining_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jchar M_java_nio_CharBuffer_charAt_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:charAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1103);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_CharBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_position_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_CharBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(1)));
	jint temp2 = (jint)((func_java_nio_CharBuffer_get_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_get_int_R_char])(ctx, sp[0].o, (temp0 + temp1));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1159);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1160);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1162);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_nio_CharBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:append", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1189);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1190);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_subSequence_int_int_R_java_lang_CharSequence, (frame[4].o)))(ctx, (frame[4].o), (frame[2].i), (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_append_char_R_java_nio_CharBuffer(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1210);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_array_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:array", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_array_R_Array1_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_array_R_Array1_char])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_rewind_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:rewind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_rewind_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_rewind_R_java_nio_CharBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_flip_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:flip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_flip_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_flip_R_java_nio_CharBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_clear_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_clear_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_clear_R_java_nio_CharBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_reset_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_reset_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_reset_R_java_nio_CharBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_mark_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:mark", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_mark_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_mark_R_java_nio_CharBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_limit_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:limit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_position_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:position", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_nio_CharBuffer_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_java_nio_CharBuffer_compareTo_java_nio_CharBuffer_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_compareTo_java_nio_CharBuffer_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_nio_CharBuffer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:append", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_lang_Appendable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_append_char_R_java_lang_Appendable(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:append", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_append_char_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_append_char_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_CharBuffer_subSequence_int_int_R_java_lang_CharSequence(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:subSequence", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_nio_CharBuffer_subSequence_int_int_R_java_nio_CharBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_CharBuffer_subSequence_int_int_R_java_nio_CharBuffer])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_nio_CharBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_Buffer(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/CharBuffer:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_CharBuffer(ctx);
	{
	LINE_NUMBER(252);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_nio_CharBuffer)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_nio_CharBuffer)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_java_nio_CharBuffer(ctx);
	SF_java_nio_CharBuffer_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_nio_CharBuffer[] {
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
	(void *) nullptr,
	(void *) M_java_nio_CharBuffer_hasArray_R_boolean,
	(void *) M_java_nio_CharBuffer_array_R_java_lang_Object,
	(void *) M_java_nio_CharBuffer_arrayOffset_R_int,
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
	(void *) M_java_nio_CharBuffer_compareTo_java_lang_Object_R_int,
	(void *) M_java_nio_CharBuffer_append_char_R_java_lang_Appendable,
	(void *) M_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_lang_Appendable,
	(void *) M_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable,
	(void *) M_java_nio_CharBuffer_length_R_int,
	(void *) M_java_nio_CharBuffer_charAt_int_R_char,
	(void *) M_java_nio_CharBuffer_subSequence_int_int_R_java_lang_CharSequence,
	(void *) M_java_nio_CharBuffer_read_java_nio_CharBuffer_R_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	(void *) nullptr,
	(void *) M_java_nio_CharBuffer_compareTo_java_nio_CharBuffer_R_int,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_nio_CharBuffer,
	(void *) M_java_nio_CharBuffer_append_char_R_java_nio_CharBuffer,
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
};

static jclass interfaces[] { &class_java_lang_Comparable, &class_java_lang_Appendable, &class_java_lang_CharSequence, &class_java_lang_Readable, };

static FieldMetadata fields[] {
	{ "hb", getArrayClass(&class_char, 1), offsetof(java_nio_CharBuffer, F_hb), "[C", 16 },
	{ "offset", &class_int, offsetof(java_nio_CharBuffer, F_offset), "I", 16 },
	{ "isReadOnly", &class_boolean, offsetof(java_nio_CharBuffer, F_isReadOnly), "Z", 0 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_nio_CharBuffer_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_CharBuffer_int_int_int_int_Array1_char_int, 0, "(IIII[CI)V", 0 },
	{ "<init>", (intptr_t) init_java_nio_CharBuffer_int_int_int_int, 0, "(IIII)V", 0 },
	{ "allocate", (intptr_t) SM_java_nio_CharBuffer_allocate_int_R_java_nio_CharBuffer, 0, "(I)Ljava/nio/CharBuffer;", 9 },
	{ "wrap", (intptr_t) SM_java_nio_CharBuffer_wrap_Array1_char_int_int_R_java_nio_CharBuffer, 0, "([CII)Ljava/nio/CharBuffer;", 9 },
	{ "wrap", (intptr_t) SM_java_nio_CharBuffer_wrap_Array1_char_R_java_nio_CharBuffer, 0, "([C)Ljava/nio/CharBuffer;", 9 },
	{ "read", (intptr_t) M_java_nio_CharBuffer_read_java_nio_CharBuffer_R_int, VTABLE_java_nio_CharBuffer_read_java_nio_CharBuffer_R_int, "(Ljava/nio/CharBuffer;)I", 1 },
	{ "wrap", (intptr_t) SM_java_nio_CharBuffer_wrap_java_lang_CharSequence_int_int_R_java_nio_CharBuffer, 0, "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;", 9 },
	{ "wrap", (intptr_t) SM_java_nio_CharBuffer_wrap_java_lang_CharSequence_R_java_nio_CharBuffer, 0, "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;", 9 },
	{ "slice", 0, VTABLE_java_nio_CharBuffer_slice_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1025 },
	{ "duplicate", 0, VTABLE_java_nio_CharBuffer_duplicate_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1025 },
	{ "asReadOnlyBuffer", 0, VTABLE_java_nio_CharBuffer_asReadOnlyBuffer_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1025 },
	{ "get", 0, VTABLE_java_nio_CharBuffer_get_R_char, "()C", 1025 },
	{ "put", 0, VTABLE_java_nio_CharBuffer_put_char_R_java_nio_CharBuffer, "(C)Ljava/nio/CharBuffer;", 1025 },
	{ "get", 0, VTABLE_java_nio_CharBuffer_get_int_R_char, "(I)C", 1025 },
	{ "getUnchecked", 0, VTABLE_java_nio_CharBuffer_getUnchecked_int_R_char, "(I)C", 1024 },
	{ "put", 0, VTABLE_java_nio_CharBuffer_put_int_char_R_java_nio_CharBuffer, "(IC)Ljava/nio/CharBuffer;", 1025 },
	{ "get", (intptr_t) M_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_get_Array1_char_int_int_R_java_nio_CharBuffer, "([CII)Ljava/nio/CharBuffer;", 1 },
	{ "get", (intptr_t) M_java_nio_CharBuffer_get_Array1_char_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_get_Array1_char_R_java_nio_CharBuffer, "([C)Ljava/nio/CharBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_put_java_nio_CharBuffer_R_java_nio_CharBuffer, "(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_put_Array1_char_int_int_R_java_nio_CharBuffer, "([CII)Ljava/nio/CharBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_CharBuffer_put_Array1_char_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_put_Array1_char_R_java_nio_CharBuffer, "([C)Ljava/nio/CharBuffer;", 17 },
	{ "put", (intptr_t) M_java_nio_CharBuffer_put_java_lang_String_int_int_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_put_java_lang_String_int_int_R_java_nio_CharBuffer, "(Ljava/lang/String;II)Ljava/nio/CharBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_put_java_lang_String_R_java_nio_CharBuffer, "(Ljava/lang/String;)Ljava/nio/CharBuffer;", 17 },
	{ "hasArray", (intptr_t) M_java_nio_CharBuffer_hasArray_R_boolean, VTABLE_java_nio_CharBuffer_hasArray_R_boolean, "()Z", 17 },
	{ "array", (intptr_t) M_java_nio_CharBuffer_array_R_Array1_char, VTABLE_java_nio_CharBuffer_array_R_Array1_char, "()[C", 17 },
	{ "arrayOffset", (intptr_t) M_java_nio_CharBuffer_arrayOffset_R_int, VTABLE_java_nio_CharBuffer_arrayOffset_R_int, "()I", 17 },
	{ "position", (intptr_t) M_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_position_int_R_java_nio_CharBuffer, "(I)Ljava/nio/CharBuffer;", 1 },
	{ "limit", (intptr_t) M_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_CharBuffer, "(I)Ljava/nio/CharBuffer;", 1 },
	{ "mark", (intptr_t) M_java_nio_CharBuffer_mark_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_mark_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1 },
	{ "reset", (intptr_t) M_java_nio_CharBuffer_reset_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_reset_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1 },
	{ "clear", (intptr_t) M_java_nio_CharBuffer_clear_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_clear_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1 },
	{ "flip", (intptr_t) M_java_nio_CharBuffer_flip_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_flip_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1 },
	{ "rewind", (intptr_t) M_java_nio_CharBuffer_rewind_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_rewind_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1 },
	{ "compact", 0, VTABLE_java_nio_CharBuffer_compact_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1025 },
	{ "isDirect", 0, VTABLE_java_nio_CharBuffer_isDirect_R_boolean, "()Z", 1025 },
	{ "hashCode", (intptr_t) M_java_nio_CharBuffer_hashCode_R_int, VTABLE_java_nio_CharBuffer_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_nio_CharBuffer_equals_java_lang_Object_R_boolean, VTABLE_java_nio_CharBuffer_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equals", (intptr_t) SM_java_nio_CharBuffer_equals_char_char_R_boolean, 0, "(CC)Z", 10 },
	{ "compareTo", (intptr_t) M_java_nio_CharBuffer_compareTo_java_nio_CharBuffer_R_int, VTABLE_java_nio_CharBuffer_compareTo_java_nio_CharBuffer_R_int, "(Ljava/nio/CharBuffer;)I", 1 },
	{ "compare", (intptr_t) SM_java_nio_CharBuffer_compare_char_char_R_int, 0, "(CC)I", 10 },
	{ "toString", (intptr_t) M_java_nio_CharBuffer_toString_R_java_lang_String, VTABLE_java_nio_CharBuffer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", 0, VTABLE_java_nio_CharBuffer_toString_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 1024 },
	{ "length", (intptr_t) M_java_nio_CharBuffer_length_R_int, VTABLE_java_nio_CharBuffer_length_R_int, "()I", 17 },
	{ "charAt", (intptr_t) M_java_nio_CharBuffer_charAt_int_R_char, VTABLE_java_nio_CharBuffer_charAt_int_R_char, "(I)C", 17 },
	{ "subSequence", 0, VTABLE_java_nio_CharBuffer_subSequence_int_int_R_java_nio_CharBuffer, "(II)Ljava/nio/CharBuffer;", 1025 },
	{ "append", (intptr_t) M_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_nio_CharBuffer, "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;", 1 },
	{ "append", (intptr_t) M_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_nio_CharBuffer, "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;", 1 },
	{ "append", (intptr_t) M_java_nio_CharBuffer_append_char_R_java_nio_CharBuffer, VTABLE_java_nio_CharBuffer_append_char_R_java_nio_CharBuffer, "(C)Ljava/nio/CharBuffer;", 1 },
	{ "order", 0, VTABLE_java_nio_CharBuffer_order_R_java_nio_ByteOrder, "()Ljava/nio/ByteOrder;", 1025 },
	{ "array", (intptr_t) M_java_nio_CharBuffer_array_R_java_lang_Object, VTABLE_java_nio_CharBuffer_array_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "rewind", (intptr_t) M_java_nio_CharBuffer_rewind_R_java_nio_Buffer, VTABLE_java_nio_CharBuffer_rewind_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "flip", (intptr_t) M_java_nio_CharBuffer_flip_R_java_nio_Buffer, VTABLE_java_nio_CharBuffer_flip_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "clear", (intptr_t) M_java_nio_CharBuffer_clear_R_java_nio_Buffer, VTABLE_java_nio_CharBuffer_clear_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "reset", (intptr_t) M_java_nio_CharBuffer_reset_R_java_nio_Buffer, VTABLE_java_nio_CharBuffer_reset_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "mark", (intptr_t) M_java_nio_CharBuffer_mark_R_java_nio_Buffer, VTABLE_java_nio_CharBuffer_mark_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "limit", (intptr_t) M_java_nio_CharBuffer_limit_int_R_java_nio_Buffer, VTABLE_java_nio_CharBuffer_limit_int_R_java_nio_Buffer, "(I)Ljava/nio/Buffer;", 4161 },
	{ "position", (intptr_t) M_java_nio_CharBuffer_position_int_R_java_nio_Buffer, VTABLE_java_nio_CharBuffer_position_int_R_java_nio_Buffer, "(I)Ljava/nio/Buffer;", 4161 },
	{ "compareTo", (intptr_t) M_java_nio_CharBuffer_compareTo_java_lang_Object_R_int, VTABLE_java_nio_CharBuffer_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "append", (intptr_t) M_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, VTABLE_java_nio_CharBuffer_append_java_lang_CharSequence_int_int_R_java_lang_Appendable, "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_lang_Appendable, VTABLE_java_nio_CharBuffer_append_java_lang_CharSequence_R_java_lang_Appendable, "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;", 4161 },
	{ "append", (intptr_t) M_java_nio_CharBuffer_append_char_R_java_lang_Appendable, VTABLE_java_nio_CharBuffer_append_char_R_java_lang_Appendable, "(C)Ljava/lang/Appendable;", 4161 },
	{ "subSequence", (intptr_t) M_java_nio_CharBuffer_subSequence_int_int_R_java_lang_CharSequence, VTABLE_java_nio_CharBuffer_subSequence_int_int_R_java_lang_CharSequence, "(II)Ljava/lang/CharSequence;", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_nio_CharBuffer, 0, "()V", 8 },
};

Class class_java_nio_CharBuffer{
		.nativeName = (intptr_t) "java/nio/CharBuffer",
		.parentClass = (intptr_t) &class_java_nio_Buffer,
		.size = sizeof(java_nio_CharBuffer),
		.classVtable = (intptr_t) vtable_java_nio_CharBuffer,
		.staticInitializer = (intptr_t) clinit_java_nio_CharBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_CharBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 4,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 63,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 76,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_CharBuffer = registerClass(&class_java_nio_CharBuffer);

}
