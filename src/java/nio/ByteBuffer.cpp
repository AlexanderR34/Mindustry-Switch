#include "java/nio/ByteBuffer.h"
#include "java/lang/Integer.h"
#include "java/nio/FloatBuffer.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/nio/ByteBufferAsIntBufferB.h"
#include "java/nio/IntBuffer.h"
#include "java/nio/DoubleBuffer.h"
#include "java/lang/Comparable.h"
#include "java/nio/ByteBufferAsDoubleBufferB.h"
#include "java/nio/ByteBufferAsFloatBufferL.h"
#include "java/lang/Float.h"
#include "java/nio/NativeUtils.h"
#include "java/lang/StringBuffer.h"
#include "java/nio/DirectFloatBuffer.h"
#include "java/nio/ReadOnlyBufferException.h"
#include "java/nio/ByteBufferAsIntBufferL.h"
#include "java/nio/DirectDoubleBuffer.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Short.h"
#include "java/nio/BufferOverflowException.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/nio/ByteBufferAsDoubleBufferL.h"
#include "java/nio/Buffer.h"
#include "java/nio/DirectLongBuffer.h"
#include "java/nio/DirectShortBuffer.h"
#include "java/nio/ByteBufferAsFloatBufferB.h"
#include "java/lang/Math.h"
#include "java/nio/ByteBufferAsShortBufferL.h"
#include "java/lang/Byte.h"
#include "java/nio/DirectIntBuffer.h"
#include "java/nio/ByteBufferAsLongBufferB.h"
#include "java/nio/ByteOrder.h"
#include "java/nio/CharBuffer.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Long.h"
#include "java/nio/ByteBufferAsCharBufferB.h"
#include "java/nio/ByteBufferAsLongBufferL.h"
#include "java/nio/BufferUnderflowException.h"
#include "java/nio/DirectCharBuffer.h"
#include "java/lang/Object.h"
#include "java/nio/ByteBufferAsCharBufferL.h"
#include "java/lang/AssertionError.h"
#include "java/nio/ShortBuffer.h"
#include "java/nio/ByteBufferAsShortBufferB.h"
#include "java/lang/Class.h"
#include "java/nio/LongBuffer.h"
#include "java/lang/Double.h"

extern "C" {

jbool SF_java_nio_ByteBuffer_$assertionsDisabled;

void mark_java_nio_ByteBuffer(jobject object, jint mark, jint depth) {
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
	auto self = (java_nio_ByteBuffer *) object;
	if (self->F_owner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_owner)->clazz)->markFunction)((jobject) self->F_owner, mark, depth + 1);
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
}

void init_java_nio_ByteBuffer_java_nio_ByteBuffer_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBuffer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(35);
	init_java_nio_Buffer_int_int_int_int(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(309);
	((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_bigEndian = (jint(1));
	LINE_NUMBER(310);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	clinit_java_nio_ByteOrder(ctx);
	sp[2].o = (jobject)SF_java_nio_ByteOrder_BIG_ENDIAN;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	((java_nio_ByteBuffer *) NULL_CHECK(sp[0].o))->F_nativeByteOrder = sp[1].i;
	LINE_NUMBER(36);
	((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_owner = (jref) (frame[1].o);
	LINE_NUMBER(37);
	((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_isOwner = (jint(0));
	LINE_NUMBER(38);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_address = (((jlong)((java_nio_Buffer *) NULL_CHECK((frame[1].o)))->F_address) + (jlong((frame[6].i))));
	LINE_NUMBER(39);
	((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_array = (jref) (jobject(nullptr));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_nio_ByteBuffer_long_int(jcontext ctx, jobject self, jlong param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBuffer(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(43);
	init_java_nio_ByteBuffer_long_int_boolean(ctx, (frame[0].o), (frame[1].l), (frame[3].i), (jint(1)));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_nio_ByteBuffer_long_int_boolean(jcontext ctx, jobject self, jlong param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBuffer(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	frame[4].i = param2;
	{
	LINE_NUMBER(47);
	init_java_nio_ByteBuffer_long_int_boolean_Array1_byte(ctx, (frame[0].o), (frame[1].l), (frame[3].i), (frame[4].i), (jobject(nullptr)));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_nio_ByteBuffer_long_int_boolean_Array1_byte(jcontext ctx, jobject self, jlong param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBuffer(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	frame[4].i = param2;
	frame[5].o = param3;
	{
	LINE_NUMBER(51);
	init_java_nio_Buffer_int_int_int_int(ctx, (frame[0].o), (jint(-1)), (jint(0)), (frame[3].i), (frame[3].i));
	LINE_NUMBER(309);
	((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_bigEndian = (jint(1));
	LINE_NUMBER(310);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	clinit_java_nio_ByteOrder(ctx);
	sp[2].o = (jobject)SF_java_nio_ByteOrder_BIG_ENDIAN;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 2;
	((java_nio_ByteBuffer *) NULL_CHECK(sp[0].o))->F_nativeByteOrder = sp[1].i;
	LINE_NUMBER(52);
	((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_owner = (jref) (jobject(nullptr));
	LINE_NUMBER(53);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_address = (frame[1].l);
	LINE_NUMBER(54);
	((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_isOwner = (frame[4].i);
	LINE_NUMBER(55);
	((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_array = (jref) (frame[5].o);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_nio_ByteBuffer_finalize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:finalize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	if ((longCompare(((jlong)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_address), (jlong(0)))) == 0) goto label_1;
	}
	{
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_isOwner) == 0) goto label_1;
	}
	{
	LINE_NUMBER(64);
	M_java_nio_ByteBuffer_deallocate(ctx, (frame[0].o));
	LINE_NUMBER(65);
	((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_address = (jlong(0));
	}
label_1:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_nio_ByteBuffer_allocate_int_R_java_nio_ByteBuffer(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:allocate", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBuffer(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer(ctx, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_ByteBuffer_wrap_Array1_byte_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:wrap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBuffer(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(74);
	clinit_java_nio_ByteBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBuffer);
	jlong temp0 = (jlong)SM_java_nio_NativeUtils_getArrayAddress_java_lang_Object_R_long(ctx, (frame[0].o));
	init_java_nio_ByteBuffer_long_int_boolean_Array1_byte(ctx, sp[0].o, (temp0 + (jlong((frame[1].i)))), (frame[2].i), (jint(0)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_nio_ByteBuffer_wrap_Array1_byte_R_java_nio_ByteBuffer(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:wrap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBuffer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)SM_java_nio_ByteBuffer_wrap_Array1_byte_int_int_R_java_nio_ByteBuffer(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:slice", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(83);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(84);
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
	LINE_NUMBER(85);
	frame[4].i = ((frame[1].i) << (jint(0)));
	LINE_NUMBER(86);
	if ((clinit_java_nio_ByteBuffer(ctx), (jint)SF_java_nio_ByteBuffer_$assertionsDisabled) != 0) goto label_7;
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
	LINE_NUMBER(87);
	clinit_java_nio_ByteBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBuffer);
	init_java_nio_ByteBuffer_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[3].i), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:duplicate", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	clinit_java_nio_ByteBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBuffer);
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_markValue_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_markValue_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[0].o));
	init_java_nio_ByteBuffer_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_asReadOnlyBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:asReadOnlyBuffer", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_clear_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)M_java_nio_Buffer_clear_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_java_nio_ByteBuffer_isReadOnly_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:isReadOnly", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_java_nio_ByteBuffer_ix_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:ix", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (((jlong)((java_nio_Buffer *) NULL_CHECK((frame[0].o)))->F_address) + ((jlong((frame[1].i))) << (jint(0))));
	}

	popStackFrame(ctx);
}

jbyte M_java_nio_ByteBuffer__get_int_R_byte(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:_get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(113);
	jlong temp0 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)SM_java_nio_NativeUtils_getByte_long_R_byte(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_java_nio_ByteBuffer__put_int_byte(jcontext ctx, jobject self, jint param0, jbyte param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:_put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(117);
	jlong temp0 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, (frame[0].o), (frame[1].i));
	SM_java_nio_NativeUtils_putByte_long_byte(ctx, temp0, (frame[2].i));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(139);
	SM_java_nio_Buffer_checkBounds_int_int_int(ctx, (frame[2].i), (frame[3].i), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(140);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_2;
	}
	{
	LINE_NUMBER(141);
	clinit_java_nio_BufferUnderflowException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_BufferUnderflowException);
	init_java_nio_BufferUnderflowException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(142);
	frame[4].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(143);
	frame[5].i = (frame[2].i);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = frame[1].o;
	jint temp0 = frame[5].i;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, (frame[0].o));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = temp1;
	LINE_NUMBER(143);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(153);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(154);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(155);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_isReadOnly_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_isReadOnly_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(156);
	clinit_java_nio_ReadOnlyBufferException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ReadOnlyBufferException);
	init_java_nio_ReadOnlyBufferException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(158);
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp1 <= temp2) goto label_6;
	}
	{
	LINE_NUMBER(159);
	clinit_java_nio_BufferOverflowException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_BufferOverflowException);
	init_java_nio_BufferOverflowException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(160);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_R_byte])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(160);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:put", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(166);
	SM_java_nio_Buffer_checkBounds_int_int_int(ctx, (frame[2].i), (frame[3].i), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(167);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[0].o));
	if (temp0 <= temp1) goto label_2;
	}
	{
	LINE_NUMBER(168);
	clinit_java_nio_BufferOverflowException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_BufferOverflowException);
	init_java_nio_BufferOverflowException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(169);
	frame[4].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(170);
	frame[5].i = (frame[2].i);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[5].i))));
	LINE_NUMBER(170);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:put", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_java_nio_ByteBuffer_hasArray_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:hasArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_array_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:array", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_nio_ByteBuffer_arrayOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:arrayOffset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(188);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_mark_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:mark", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)M_java_nio_Buffer_mark_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_reset_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)M_java_nio_Buffer_reset_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_flip_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:flip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)M_java_nio_Buffer_flip_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_rewind_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:rewind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)M_java_nio_Buffer_rewind_R_java_nio_Buffer(ctx, (frame[0].o));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_compact_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:compact", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(229);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(230);
	if ((clinit_java_nio_ByteBuffer(ctx), (jint)SF_java_nio_ByteBuffer_$assertionsDisabled) != 0) goto label_3;
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
	LINE_NUMBER(231);
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
	LINE_NUMBER(232);
	jlong temp0 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, (frame[0].o), (frame[1].i));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, (frame[0].o), (jint(0)));
	SM_java_nio_NativeUtils_copyMemory_long_long_long(ctx, temp0, temp1, ((jlong((frame[3].i))) << (jint(0))));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[3].i));
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp2);
	LINE_NUMBER(235);
	((func_java_nio_ByteBuffer_discardMark) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_discardMark])(ctx, (frame[0].o));
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_java_nio_ByteBuffer_isDirect_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:isDirect", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(244);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(245);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"[pos="_j))));
	LINE_NUMBER(247);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" lim="_j))));
	LINE_NUMBER(249);
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, sp[0].o, temp1);
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" cap="_j))));
	LINE_NUMBER(251);
	sp[0].o = frame[1].o;
	jint temp2 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, sp[0].o, temp2);
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"]"_j))));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_nio_ByteBuffer_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:hashCode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	frame[1].i = (jint(1));
	LINE_NUMBER(258);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(259);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[3].i = (temp1 - (jint(1)));
	}
label_3:;
	{
	if ((frame[3].i) < (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(260);
	jint temp0 = (31) * (frame[1].i);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[0].o), (frame[3].i));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(259);
	INST_IINC(3, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jbool M_java_nio_ByteBuffer_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:equals", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(265);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(267);
	if ((isInstance(ctx, (frame[1].o), &class_java_nio_ByteBuffer)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(269);
	frame[2].o = (checkCast(ctx, &class_java_nio_ByteBuffer, (frame[1].o)));
	LINE_NUMBER(270);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(271);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(272);
	jint temp2 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[2].o));
	frame[5].i = temp2;
	LINE_NUMBER(273);
	jint temp3 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[2].o));
	frame[6].i = temp3;
	LINE_NUMBER(274);
	frame[7].i = ((frame[4].i) - (frame[3].i));
	LINE_NUMBER(275);
	frame[8].i = ((frame[6].i) - (frame[5].i));
	LINE_NUMBER(276);
	if ((frame[7].i) < 0) goto label_12;
	}
	{
	if ((frame[7].i) == (frame[8].i)) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(278);
	frame[9].i = ((frame[4].i) - (jint(1)));
	frame[10].i = ((frame[6].i) - (jint(1)));
	}
label_15:;
	{
	if ((frame[9].i) < (frame[3].i)) goto label_16;
	}
	{
	LINE_NUMBER(279);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[0].o), (frame[9].i));
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[2].o), (frame[10].i));
	jint temp2 = (jint)SM_java_nio_ByteBuffer_equals_byte_byte_R_boolean(ctx, temp0, temp1);
	if (temp2 != 0) goto label_18;
	}
	{
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(278);
	INST_IINC(9, -1);
	INST_IINC(10, -1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_nio_ByteBuffer_equals_byte_byte_R_boolean(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBuffer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(285);
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

jint M_java_nio_ByteBuffer_compareTo_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:compareTo", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(290);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[3].i = (temp1 - (frame[2].i));
	LINE_NUMBER(291);
	jint temp2 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	frame[4].i = temp2;
	LINE_NUMBER(292);
	jint temp3 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[1].o));
	frame[5].i = (temp3 - (frame[4].i));
	LINE_NUMBER(293);
	jint temp4 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[5].i));
	frame[6].i = temp4;
	LINE_NUMBER(294);
	if ((frame[6].i) >= 0) goto label_6;
	}
	{
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(296);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), (frame[5].i));
	frame[7].i = (temp0 + temp1);
	LINE_NUMBER(297);
	frame[8].i = (frame[2].i);
	frame[9].i = (frame[4].i);
	}
label_10:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_11;
	}
	{
	LINE_NUMBER(298);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[0].o), (frame[8].i));
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[1].o), (frame[9].i));
	jint temp2 = (jint)SM_java_nio_ByteBuffer_compare_byte_byte_R_int(ctx, temp0, temp1);
	frame[10].i = temp2;
	LINE_NUMBER(299);
	if ((frame[10].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return (frame[10].i);
	}
label_14:;
	{
	LINE_NUMBER(297);
	INST_IINC(8, 1);
	INST_IINC(9, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return ((frame[3].i) - (frame[5].i));
	}

	popStackFrame(ctx);
}

jint SM_java_nio_ByteBuffer_compare_byte_byte_R_int(jcontext ctx, jbyte param0, jbyte param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:compare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBuffer(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(306);
	jint temp0 = (jint)SM_java_lang_Byte_compare_byte_byte_R_int(ctx, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_order_R_java_nio_ByteOrder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:order", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_bigEndian) == 0) goto label_1;
	}
	clinit_java_nio_ByteOrder(ctx);
	(sp++)->o = SF_java_nio_ByteOrder_BIG_ENDIAN;
	goto label_2;
label_1:;
	clinit_java_nio_ByteOrder(ctx);
	(sp++)->o = SF_java_nio_ByteOrder_LITTLE_ENDIAN;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:order", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_java_nio_ByteOrder(ctx);
	sp[2].o = (jobject)SF_java_nio_ByteOrder_BIG_ENDIAN;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	((java_nio_ByteBuffer *) NULL_CHECK(sp[0].o))->F_bigEndian = sp[1].i;
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_bigEndian;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	clinit_java_nio_ByteOrder(ctx);
	sp[2].o = (jobject)SF_java_nio_ByteOrder_BIG_ENDIAN;
	jobject temp1 = sp[1].o;
	sp[1].i = temp0;
	sp += 2;
	if (temp1 != sp[0].o) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_6;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	((java_nio_ByteBuffer *) NULL_CHECK(sp[0].o))->F_nativeByteOrder = sp[1].i;
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jchar M_java_nio_ByteBuffer_getChar_long_R_char(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(323);
	jint temp0 = (jint)SM_java_nio_NativeUtils_getChar_long_R_char(ctx, (frame[1].l));
	frame[3].i = temp0;
	LINE_NUMBER(324);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_2;
	}
	INST_ILOAD(3);
	goto label_3;
label_2:;
	INST_ILOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_java_lang_Character_reverseBytes_char_R_char(ctx, sp[0].i);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jchar M_java_nio_ByteBuffer_getChar_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getChar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextGetIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextGetIndex_int_R_int])(ctx, (frame[0].o), (jint(2)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jint temp2 = (jint)M_java_nio_ByteBuffer_getChar_long_R_char(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jchar M_java_nio_ByteBuffer_getChar_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getChar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(2)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jint temp2 = (jint)M_java_nio_ByteBuffer_getChar_long_R_char(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putChar_long_char_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jlong param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putChar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(336);
	jlong temp0 = frame[1].l;
	sp[0].l = temp0;
	sp += 1;
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_1;
	}
	INST_ILOAD(3);
	goto label_2;
label_1:;
	INST_ILOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_java_lang_Character_reverseBytes_char_R_char(ctx, sp[0].i);
	sp++;
label_2:;
	{
	sp -= 2;
	SM_java_nio_NativeUtils_putChar_long_char(ctx, sp[0].l, sp[1].i);
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putChar_char_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putChar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextPutIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextPutIndex_int_R_int])(ctx, (frame[0].o), (jint(2)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putChar_long_char_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putChar_int_char_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jint param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putChar", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(2)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putChar_long_char_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_asCharBuffer_R_java_nio_CharBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:asCharBuffer", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(349);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(350);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(351);
	if ((clinit_java_nio_ByteBuffer(ctx), (jint)SF_java_nio_ByteBuffer_$assertionsDisabled) != 0) goto label_3;
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
	LINE_NUMBER(352);
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
	LINE_NUMBER(353);
	frame[4].i = ((frame[3].i) >> (jint(1)));
	LINE_NUMBER(354);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_8;
	}
	{
	LINE_NUMBER(355);
	clinit_java_nio_DirectCharBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_DirectCharBuffer);
	init_java_nio_DirectCharBuffer_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(356);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_bigEndian) == 0) goto label_10;
	}
	{
	clinit_java_nio_ByteBufferAsCharBufferB(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsCharBufferB);
	init_java_nio_ByteBufferAsCharBufferB_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	clinit_java_nio_ByteBufferAsCharBufferL(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsCharBufferL);
	init_java_nio_ByteBufferAsCharBufferL_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	}
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jshort M_java_nio_ByteBuffer_getShort_long_R_short(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getShort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(360);
	jint temp0 = (jint)SM_java_nio_NativeUtils_getShort_long_R_short(ctx, (frame[1].l));
	frame[3].i = temp0;
	LINE_NUMBER(361);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_2;
	}
	INST_ILOAD(3);
	goto label_3;
label_2:;
	INST_ILOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_java_lang_Short_reverseBytes_short_R_short(ctx, sp[0].i);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jshort M_java_nio_ByteBuffer_getShort_R_short(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getShort", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextGetIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextGetIndex_int_R_int])(ctx, (frame[0].o), (jint(2)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jint temp2 = (jint)M_java_nio_ByteBuffer_getShort_long_R_short(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jshort M_java_nio_ByteBuffer_getShort_int_R_short(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getShort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(369);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(2)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jint temp2 = (jint)M_java_nio_ByteBuffer_getShort_long_R_short(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putShort_long_short_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jlong param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putShort", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(373);
	jlong temp0 = frame[1].l;
	sp[0].l = temp0;
	sp += 1;
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_1;
	}
	INST_ILOAD(3);
	goto label_2;
label_1:;
	INST_ILOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_java_lang_Short_reverseBytes_short_R_short(ctx, sp[0].i);
	sp++;
label_2:;
	{
	sp -= 2;
	SM_java_nio_NativeUtils_putShort_long_short(ctx, sp[0].l, sp[1].i);
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jshort param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putShort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(378);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextPutIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextPutIndex_int_R_int])(ctx, (frame[0].o), (jint(2)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putShort_long_short_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putShort_int_short_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jint param0, jshort param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putShort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(382);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(2)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putShort_long_short_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:asShortBuffer", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(387);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(388);
	if ((clinit_java_nio_ByteBuffer(ctx), (jint)SF_java_nio_ByteBuffer_$assertionsDisabled) != 0) goto label_3;
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
	LINE_NUMBER(389);
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
	LINE_NUMBER(390);
	frame[4].i = ((frame[3].i) >> (jint(1)));
	LINE_NUMBER(391);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_8;
	}
	{
	LINE_NUMBER(392);
	clinit_java_nio_DirectShortBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_DirectShortBuffer);
	init_java_nio_DirectShortBuffer_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(393);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_bigEndian) == 0) goto label_10;
	}
	{
	clinit_java_nio_ByteBufferAsShortBufferB(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsShortBufferB);
	init_java_nio_ByteBufferAsShortBufferB_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	clinit_java_nio_ByteBufferAsShortBufferL(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsShortBufferL);
	init_java_nio_ByteBufferAsShortBufferL_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	}
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_java_nio_ByteBuffer_getInt_long_R_int(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(397);
	jint temp0 = (jint)SM_java_nio_NativeUtils_getInt_long_R_int(ctx, (frame[1].l));
	frame[3].i = temp0;
	LINE_NUMBER(398);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_2;
	}
	INST_ILOAD(3);
	goto label_3;
label_2:;
	INST_ILOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_java_lang_Integer_reverseBytes_int_R_int(ctx, sp[0].i);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_java_nio_ByteBuffer_getInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getInt", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(402);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextGetIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextGetIndex_int_R_int])(ctx, (frame[0].o), (jint(4)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jint temp2 = (jint)M_java_nio_ByteBuffer_getInt_long_R_int(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jint M_java_nio_ByteBuffer_getInt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(406);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(4)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jint temp2 = (jint)M_java_nio_ByteBuffer_getInt_long_R_int(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putInt_long_int_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jlong param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(410);
	jlong temp0 = frame[1].l;
	sp[0].l = temp0;
	sp += 1;
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_1;
	}
	INST_ILOAD(3);
	goto label_2;
label_1:;
	INST_ILOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_java_lang_Integer_reverseBytes_int_R_int(ctx, sp[0].i);
	sp++;
label_2:;
	{
	sp -= 2;
	SM_java_nio_NativeUtils_putInt_long_int(ctx, sp[0].l, sp[1].i);
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextPutIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextPutIndex_int_R_int])(ctx, (frame[0].o), (jint(4)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putInt_long_int_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putInt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(419);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(4)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putInt_long_int_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:asIntBuffer", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(423);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(424);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(425);
	if ((clinit_java_nio_ByteBuffer(ctx), (jint)SF_java_nio_ByteBuffer_$assertionsDisabled) != 0) goto label_3;
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
	LINE_NUMBER(426);
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
	LINE_NUMBER(427);
	frame[4].i = ((frame[3].i) >> (jint(2)));
	LINE_NUMBER(428);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_8;
	}
	{
	LINE_NUMBER(429);
	clinit_java_nio_DirectIntBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_DirectIntBuffer);
	init_java_nio_DirectIntBuffer_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(430);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_bigEndian) == 0) goto label_10;
	}
	{
	clinit_java_nio_ByteBufferAsIntBufferB(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsIntBufferB);
	init_java_nio_ByteBufferAsIntBufferB_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	clinit_java_nio_ByteBufferAsIntBufferL(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsIntBufferL);
	init_java_nio_ByteBufferAsIntBufferL_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	}
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jlong M_java_nio_ByteBuffer_getLong_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(434);
	jlong temp0 = (jlong)SM_java_nio_NativeUtils_getLong_long_R_long(ctx, (frame[1].l));
	frame[3].l = temp0;
	LINE_NUMBER(435);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_2;
	}
	INST_LLOAD(3);
	goto label_3;
label_2:;
	INST_LLOAD(3);
	POP_N(1); // Pop method args
	sp->l = (jlong)SM_java_lang_Long_reverseBytes_long_R_long(ctx, sp[0].l);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_LRETURN();

	popStackFrame(ctx);
}

jlong M_java_nio_ByteBuffer_getLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getLong", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(439);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextGetIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextGetIndex_int_R_int])(ctx, (frame[0].o), (8));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jlong temp2 = (jlong)M_java_nio_ByteBuffer_getLong_long_R_long(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jlong M_java_nio_ByteBuffer_getLong_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getLong", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (8));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jlong temp2 = (jlong)M_java_nio_ByteBuffer_getLong_long_R_long(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putLong_long_long_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putLong", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(447);
	jlong temp0 = frame[1].l;
	sp[0].l = temp0;
	sp += 1;
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_1;
	}
	INST_LLOAD(3);
	goto label_2;
label_1:;
	INST_LLOAD(3);
	POP_N(1); // Pop method args
	sp->l = (jlong)SM_java_lang_Long_reverseBytes_long_R_long(ctx, sp[0].l);
	sp++;
label_2:;
	{
	sp -= 2;
	SM_java_nio_NativeUtils_putLong_long_long(ctx, sp[0].l, sp[1].l);
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putLong_long_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putLong", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(452);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextPutIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextPutIndex_int_R_int])(ctx, (frame[0].o), (8));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putLong_long_long_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[1].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putLong_int_long_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jint param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putLong", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(456);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (8));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putLong_long_long_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[2].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_asLongBuffer_R_java_nio_LongBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:asLongBuffer", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(461);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(462);
	if ((clinit_java_nio_ByteBuffer(ctx), (jint)SF_java_nio_ByteBuffer_$assertionsDisabled) != 0) goto label_3;
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
	LINE_NUMBER(463);
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
	LINE_NUMBER(464);
	frame[4].i = ((frame[3].i) >> (jint(3)));
	LINE_NUMBER(465);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_8;
	}
	{
	LINE_NUMBER(466);
	clinit_java_nio_DirectLongBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_DirectLongBuffer);
	init_java_nio_DirectLongBuffer_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(467);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_bigEndian) == 0) goto label_10;
	}
	{
	clinit_java_nio_ByteBufferAsLongBufferB(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsLongBufferB);
	init_java_nio_ByteBufferAsLongBufferB_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	clinit_java_nio_ByteBufferAsLongBufferL(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsLongBufferL);
	init_java_nio_ByteBufferAsLongBufferL_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	}
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jfloat M_java_nio_ByteBuffer_getFloat_long_R_float(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(471);
	jint temp0 = (jint)SM_java_nio_NativeUtils_getInt_long_R_int(ctx, (frame[1].l));
	frame[3].i = temp0;
	LINE_NUMBER(472);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_2;
	}
	INST_ILOAD(3);
	goto label_3;
label_2:;
	INST_ILOAD(3);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_java_lang_Integer_reverseBytes_int_R_int(ctx, sp[0].i);
	sp++;
label_3:;
	POP_N(1); // Pop method args
	sp->f = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_java_nio_ByteBuffer_getFloat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getFloat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(476);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextGetIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextGetIndex_int_R_int])(ctx, (frame[0].o), (jint(4)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jfloat temp2 = (jfloat)M_java_nio_ByteBuffer_getFloat_long_R_float(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat M_java_nio_ByteBuffer_getFloat_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getFloat", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(4)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jfloat temp2 = (jfloat)M_java_nio_ByteBuffer_getFloat_long_R_float(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putFloat_long_float_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jlong param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putFloat", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].f = param1;
	{
	LINE_NUMBER(484);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[3].f));
	frame[4].i = temp0;
	LINE_NUMBER(485);
	jlong temp1 = frame[1].l;
	sp[0].l = temp1;
	sp += 1;
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_2;
	}
	INST_ILOAD(4);
	goto label_3;
label_2:;
	INST_ILOAD(4);
	POP_N(1); // Pop method args
	sp->i = (jint)SM_java_lang_Integer_reverseBytes_int_R_int(ctx, sp[0].i);
	sp++;
label_3:;
	{
	sp -= 2;
	SM_java_nio_NativeUtils_putInt_long_int(ctx, sp[0].l, sp[1].i);
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putFloat_float_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putFloat", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(490);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextPutIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextPutIndex_int_R_int])(ctx, (frame[0].o), (jint(4)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putFloat_long_float_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putFloat_int_float_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jint param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putFloat", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (jint(4)));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putFloat_long_float_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:asFloatBuffer", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(498);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(499);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(500);
	if ((clinit_java_nio_ByteBuffer(ctx), (jint)SF_java_nio_ByteBuffer_$assertionsDisabled) != 0) goto label_3;
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
	LINE_NUMBER(501);
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
	LINE_NUMBER(502);
	frame[4].i = ((frame[3].i) >> (jint(2)));
	LINE_NUMBER(503);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_8;
	}
	{
	LINE_NUMBER(504);
	clinit_java_nio_DirectFloatBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_DirectFloatBuffer);
	init_java_nio_DirectFloatBuffer_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(505);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_bigEndian) == 0) goto label_10;
	}
	{
	clinit_java_nio_ByteBufferAsFloatBufferB(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsFloatBufferB);
	init_java_nio_ByteBufferAsFloatBufferB_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	clinit_java_nio_ByteBufferAsFloatBufferL(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsFloatBufferL);
	init_java_nio_ByteBufferAsFloatBufferL_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	}
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jdouble M_java_nio_ByteBuffer_getDouble_long_R_double(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getDouble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(509);
	jlong temp0 = (jlong)SM_java_nio_NativeUtils_getLong_long_R_long(ctx, (frame[1].l));
	frame[3].l = temp0;
	LINE_NUMBER(510);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_2;
	}
	INST_LLOAD(3);
	goto label_3;
label_2:;
	INST_LLOAD(3);
	POP_N(1); // Pop method args
	sp->l = (jlong)SM_java_lang_Long_reverseBytes_long_R_long(ctx, sp[0].l);
	sp++;
label_3:;
	POP_N(1); // Pop method args
	sp->d = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, sp[0].l);
	sp++;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jdouble M_java_nio_ByteBuffer_getDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getDouble", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextGetIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextGetIndex_int_R_int])(ctx, (frame[0].o), (8));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jdouble temp2 = (jdouble)M_java_nio_ByteBuffer_getDouble_long_R_double(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jdouble M_java_nio_ByteBuffer_getDouble_int_R_double(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:getDouble", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (8));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	jdouble temp2 = (jdouble)M_java_nio_ByteBuffer_getDouble_long_R_double(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putDouble_long_double_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jlong param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putDouble", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].d = param1;
	{
	LINE_NUMBER(522);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[3].d));
	frame[5].l = temp0;
	LINE_NUMBER(523);
	jlong temp1 = frame[1].l;
	sp[0].l = temp1;
	sp += 1;
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_2;
	}
	INST_LLOAD(5);
	goto label_3;
label_2:;
	INST_LLOAD(5);
	POP_N(1); // Pop method args
	sp->l = (jlong)SM_java_lang_Long_reverseBytes_long_R_long(ctx, sp[0].l);
	sp++;
label_3:;
	{
	sp -= 2;
	SM_java_nio_NativeUtils_putLong_long_long(ctx, sp[0].l, sp[1].l);
	LINE_NUMBER(524);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putDouble_double_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putDouble", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(528);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_nextPutIndex_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_nextPutIndex_int_R_int])(ctx, (frame[0].o), (8));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putDouble_long_double_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[1].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_putDouble_int_double_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jint param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:putDouble", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_checkIndex_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_checkIndex_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (8));
	jlong temp1 = (jlong)M_java_nio_ByteBuffer_ix_int_R_long(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)M_java_nio_ByteBuffer_putDouble_long_double_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, (frame[2].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:asDoubleBuffer", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(536);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(537);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(538);
	if ((clinit_java_nio_ByteBuffer(ctx), (jint)SF_java_nio_ByteBuffer_$assertionsDisabled) != 0) goto label_3;
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
	LINE_NUMBER(539);
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
	LINE_NUMBER(540);
	frame[4].i = ((frame[3].i) >> (jint(3)));
	LINE_NUMBER(541);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_nativeByteOrder) == 0) goto label_8;
	}
	{
	LINE_NUMBER(542);
	clinit_java_nio_DirectDoubleBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_DirectDoubleBuffer);
	init_java_nio_DirectDoubleBuffer_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(543);
	if (((jint)((java_nio_ByteBuffer *) NULL_CHECK((frame[0].o)))->F_bigEndian) == 0) goto label_10;
	}
	{
	clinit_java_nio_ByteBufferAsDoubleBufferB(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsDoubleBufferB);
	init_java_nio_ByteBufferAsDoubleBufferB_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	clinit_java_nio_ByteBufferAsDoubleBufferL(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ByteBufferAsDoubleBufferL);
	init_java_nio_ByteBufferAsDoubleBufferL_java_nio_ByteBuffer_int_int_int_int_int(ctx, sp[0].o, (frame[0].o), (jint(-1)), (jint(0)), (frame[4].i), (frame[4].i), (frame[1].i));
	sp += 1;
	}
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_array_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:array", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_array_R_Array1_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_array_R_Array1_byte])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_rewind_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:rewind", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_rewind_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_rewind_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_flip_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:flip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_flip_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_flip_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_clear_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_clear_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_clear_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_reset_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_reset_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_reset_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_mark_R_java_nio_Buffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:mark", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_mark_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_mark_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:limit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_nio_ByteBuffer_position_int_R_java_nio_Buffer(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:position", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_nio_ByteBuffer_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_compareTo_java_nio_ByteBuffer_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_compareTo_java_nio_ByteBuffer_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_java_nio_ByteBuffer, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_java_nio_ByteBuffer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_nio_Buffer(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/nio/ByteBuffer:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_nio_ByteBuffer(ctx);
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_nio_ByteBuffer)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_nio_ByteBuffer)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_java_nio_ByteBuffer(ctx);
	SF_java_nio_ByteBuffer_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_nio_ByteBuffer[] {
	(void *) M_java_nio_ByteBuffer_hashCode_R_int,
	(void *) M_java_nio_ByteBuffer_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_nio_ByteBuffer_toString_R_java_lang_String,
	(void *) M_java_nio_ByteBuffer_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_nio_Buffer_capacity_R_int,
	(void *) M_java_nio_Buffer_position_R_int,
	(void *) M_java_nio_ByteBuffer_position_int_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_limit_R_int,
	(void *) M_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer,
	(void *) M_java_nio_ByteBuffer_mark_R_java_nio_Buffer,
	(void *) M_java_nio_ByteBuffer_reset_R_java_nio_Buffer,
	(void *) M_java_nio_ByteBuffer_clear_R_java_nio_Buffer,
	(void *) M_java_nio_ByteBuffer_flip_R_java_nio_Buffer,
	(void *) M_java_nio_ByteBuffer_rewind_R_java_nio_Buffer,
	(void *) M_java_nio_Buffer_remaining_R_int,
	(void *) M_java_nio_Buffer_hasRemaining_R_boolean,
	(void *) M_java_nio_ByteBuffer_isReadOnly_R_boolean,
	(void *) M_java_nio_ByteBuffer_hasArray_R_boolean,
	(void *) M_java_nio_ByteBuffer_array_R_java_lang_Object,
	(void *) M_java_nio_ByteBuffer_arrayOffset_R_int,
	(void *) M_java_nio_ByteBuffer_isDirect_R_boolean,
	(void *) M_java_nio_Buffer_nextGetIndex_R_int,
	(void *) M_java_nio_Buffer_nextGetIndex_int_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_R_int,
	(void *) M_java_nio_Buffer_nextPutIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_R_int,
	(void *) M_java_nio_Buffer_checkIndex_int_int_R_int,
	(void *) M_java_nio_Buffer_markValue_R_int,
	(void *) M_java_nio_Buffer_truncate,
	(void *) M_java_nio_Buffer_discardMark,
	(void *) M_java_nio_ByteBuffer_compareTo_java_lang_Object_R_int,
	(void *) M_java_nio_ByteBuffer_deallocate,
	(void *) M_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asReadOnlyBuffer_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_clear_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_ix_int_R_long,
	(void *) M_java_nio_ByteBuffer__get_int_R_byte,
	(void *) M_java_nio_ByteBuffer__put_int_byte,
	(void *) M_java_nio_ByteBuffer_get_R_byte,
	(void *) M_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_get_int_R_byte,
	(void *) M_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_array_R_Array1_byte,
	(void *) M_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_mark_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_reset_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_flip_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_rewind_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_compact_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_compareTo_java_nio_ByteBuffer_R_int,
	(void *) M_java_nio_ByteBuffer_order_R_java_nio_ByteOrder,
	(void *) M_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_getChar_long_R_char,
	(void *) M_java_nio_ByteBuffer_getChar_R_char,
	(void *) M_java_nio_ByteBuffer_getChar_int_R_char,
	(void *) M_java_nio_ByteBuffer_putChar_long_char_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putChar_char_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putChar_int_char_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asCharBuffer_R_java_nio_CharBuffer,
	(void *) M_java_nio_ByteBuffer_getShort_long_R_short,
	(void *) M_java_nio_ByteBuffer_getShort_R_short,
	(void *) M_java_nio_ByteBuffer_getShort_int_R_short,
	(void *) M_java_nio_ByteBuffer_putShort_long_short_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putShort_int_short_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer,
	(void *) M_java_nio_ByteBuffer_getInt_long_R_int,
	(void *) M_java_nio_ByteBuffer_getInt_R_int,
	(void *) M_java_nio_ByteBuffer_getInt_int_R_int,
	(void *) M_java_nio_ByteBuffer_putInt_long_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer,
	(void *) M_java_nio_ByteBuffer_getLong_long_R_long,
	(void *) M_java_nio_ByteBuffer_getLong_R_long,
	(void *) M_java_nio_ByteBuffer_getLong_int_R_long,
	(void *) M_java_nio_ByteBuffer_putLong_long_long_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putLong_long_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putLong_int_long_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asLongBuffer_R_java_nio_LongBuffer,
	(void *) M_java_nio_ByteBuffer_getFloat_long_R_float,
	(void *) M_java_nio_ByteBuffer_getFloat_R_float,
	(void *) M_java_nio_ByteBuffer_getFloat_int_R_float,
	(void *) M_java_nio_ByteBuffer_putFloat_long_float_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putFloat_float_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putFloat_int_float_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer,
	(void *) M_java_nio_ByteBuffer_getDouble_long_R_double,
	(void *) M_java_nio_ByteBuffer_getDouble_R_double,
	(void *) M_java_nio_ByteBuffer_getDouble_int_R_double,
	(void *) M_java_nio_ByteBuffer_putDouble_long_double_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putDouble_double_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_putDouble_int_double_R_java_nio_ByteBuffer,
	(void *) M_java_nio_ByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer,
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
	{ "deallocate", "()V" },
	{ "slice", "()Ljava/nio/ByteBuffer;" },
	{ "duplicate", "()Ljava/nio/ByteBuffer;" },
	{ "asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;" },
	{ "clear", "()Ljava/nio/ByteBuffer;" },
	{ "ix", "(I)J" },
	{ "_get", "(I)B" },
	{ "_put", "(IB)V" },
	{ "get", "()B" },
	{ "put", "(B)Ljava/nio/ByteBuffer;" },
	{ "get", "(I)B" },
	{ "put", "(IB)Ljava/nio/ByteBuffer;" },
	{ "get", "([BII)Ljava/nio/ByteBuffer;" },
	{ "get", "([B)Ljava/nio/ByteBuffer;" },
	{ "put", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;" },
	{ "put", "([BII)Ljava/nio/ByteBuffer;" },
	{ "put", "([B)Ljava/nio/ByteBuffer;" },
	{ "array", "()[B" },
	{ "position", "(I)Ljava/nio/ByteBuffer;" },
	{ "limit", "(I)Ljava/nio/ByteBuffer;" },
	{ "mark", "()Ljava/nio/ByteBuffer;" },
	{ "reset", "()Ljava/nio/ByteBuffer;" },
	{ "flip", "()Ljava/nio/ByteBuffer;" },
	{ "rewind", "()Ljava/nio/ByteBuffer;" },
	{ "compact", "()Ljava/nio/ByteBuffer;" },
	{ "compareTo", "(Ljava/nio/ByteBuffer;)I" },
	{ "order", "()Ljava/nio/ByteOrder;" },
	{ "order", "(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;" },
	{ "getChar", "(J)C" },
	{ "getChar", "()C" },
	{ "getChar", "(I)C" },
	{ "putChar", "(JC)Ljava/nio/ByteBuffer;" },
	{ "putChar", "(C)Ljava/nio/ByteBuffer;" },
	{ "putChar", "(IC)Ljava/nio/ByteBuffer;" },
	{ "asCharBuffer", "()Ljava/nio/CharBuffer;" },
	{ "getShort", "(J)S" },
	{ "getShort", "()S" },
	{ "getShort", "(I)S" },
	{ "putShort", "(JS)Ljava/nio/ByteBuffer;" },
	{ "putShort", "(S)Ljava/nio/ByteBuffer;" },
	{ "putShort", "(IS)Ljava/nio/ByteBuffer;" },
	{ "asShortBuffer", "()Ljava/nio/ShortBuffer;" },
	{ "getInt", "(J)I" },
	{ "getInt", "()I" },
	{ "getInt", "(I)I" },
	{ "putInt", "(JI)Ljava/nio/ByteBuffer;" },
	{ "putInt", "(I)Ljava/nio/ByteBuffer;" },
	{ "putInt", "(II)Ljava/nio/ByteBuffer;" },
	{ "asIntBuffer", "()Ljava/nio/IntBuffer;" },
	{ "getLong", "(J)J" },
	{ "getLong", "()J" },
	{ "getLong", "(I)J" },
	{ "putLong", "(JJ)Ljava/nio/ByteBuffer;" },
	{ "putLong", "(J)Ljava/nio/ByteBuffer;" },
	{ "putLong", "(IJ)Ljava/nio/ByteBuffer;" },
	{ "asLongBuffer", "()Ljava/nio/LongBuffer;" },
	{ "getFloat", "(J)F" },
	{ "getFloat", "()F" },
	{ "getFloat", "(I)F" },
	{ "putFloat", "(JF)Ljava/nio/ByteBuffer;" },
	{ "putFloat", "(F)Ljava/nio/ByteBuffer;" },
	{ "putFloat", "(IF)Ljava/nio/ByteBuffer;" },
	{ "asFloatBuffer", "()Ljava/nio/FloatBuffer;" },
	{ "getDouble", "(J)D" },
	{ "getDouble", "()D" },
	{ "getDouble", "(I)D" },
	{ "putDouble", "(JD)Ljava/nio/ByteBuffer;" },
	{ "putDouble", "(D)Ljava/nio/ByteBuffer;" },
	{ "putDouble", "(ID)Ljava/nio/ByteBuffer;" },
	{ "asDoubleBuffer", "()Ljava/nio/DoubleBuffer;" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "owner", &class_java_nio_ByteBuffer, offsetof(java_nio_ByteBuffer, F_owner), "Ljava/nio/ByteBuffer;", 18 },
	{ "array", getArrayClass(&class_byte, 1), offsetof(java_nio_ByteBuffer, F_array), "[B", 18 },
	{ "isOwner", &class_boolean, offsetof(java_nio_ByteBuffer, F_isOwner), "Z", 18 },
	{ "bigEndian", &class_boolean, offsetof(java_nio_ByteBuffer, F_bigEndian), "Z", 0 },
	{ "nativeByteOrder", &class_boolean, offsetof(java_nio_ByteBuffer, F_nativeByteOrder), "Z", 0 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_nio_ByteBuffer_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_nio_ByteBuffer_java_nio_ByteBuffer_int_int_int_int_int, 0, "(Ljava/nio/ByteBuffer;IIIII)V", 0 },
	{ "<init>", (intptr_t) init_java_nio_ByteBuffer_long_int, 0, "(JI)V", 0 },
	{ "<init>", (intptr_t) init_java_nio_ByteBuffer_long_int_boolean, 0, "(JIZ)V", 0 },
	{ "<init>", (intptr_t) init_java_nio_ByteBuffer_long_int_boolean_Array1_byte, 0, "(JIZ[B)V", 0 },
	{ "deallocate", (intptr_t) M_java_nio_ByteBuffer_deallocate, VTABLE_java_nio_ByteBuffer_deallocate, "()V", 258 },
	{ "allocateDirect", (intptr_t) SM_java_nio_ByteBuffer_allocateDirect_int_R_java_nio_ByteBuffer, 0, "(I)Ljava/nio/ByteBuffer;", 265 },
	{ "finalize", (intptr_t) M_java_nio_ByteBuffer_finalize, VTABLE_java_nio_ByteBuffer_finalize, "()V", 4 },
	{ "allocate", (intptr_t) SM_java_nio_ByteBuffer_allocate_int_R_java_nio_ByteBuffer, 0, "(I)Ljava/nio/ByteBuffer;", 9 },
	{ "wrap", (intptr_t) SM_java_nio_ByteBuffer_wrap_Array1_byte_int_int_R_java_nio_ByteBuffer, 0, "([BII)Ljava/nio/ByteBuffer;", 9 },
	{ "wrap", (intptr_t) SM_java_nio_ByteBuffer_wrap_Array1_byte_R_java_nio_ByteBuffer, 0, "([B)Ljava/nio/ByteBuffer;", 9 },
	{ "slice", (intptr_t) M_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_slice_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "duplicate", (intptr_t) M_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "asReadOnlyBuffer", (intptr_t) M_java_nio_ByteBuffer_asReadOnlyBuffer_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_asReadOnlyBuffer_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "clear", (intptr_t) M_java_nio_ByteBuffer_clear_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_clear_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "isReadOnly", (intptr_t) M_java_nio_ByteBuffer_isReadOnly_R_boolean, VTABLE_java_nio_ByteBuffer_isReadOnly_R_boolean, "()Z", 1 },
	{ "ix", (intptr_t) M_java_nio_ByteBuffer_ix_int_R_long, VTABLE_java_nio_ByteBuffer_ix_int_R_long, "(I)J", 2 },
	{ "_get", (intptr_t) M_java_nio_ByteBuffer__get_int_R_byte, VTABLE_java_nio_ByteBuffer__get_int_R_byte, "(I)B", 0 },
	{ "_put", (intptr_t) M_java_nio_ByteBuffer__put_int_byte, VTABLE_java_nio_ByteBuffer__put_int_byte, "(IB)V", 0 },
	{ "get", (intptr_t) M_java_nio_ByteBuffer_get_R_byte, VTABLE_java_nio_ByteBuffer_get_R_byte, "()B", 257 },
	{ "put", (intptr_t) M_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_put_byte_R_java_nio_ByteBuffer, "(B)Ljava/nio/ByteBuffer;", 257 },
	{ "get", (intptr_t) M_java_nio_ByteBuffer_get_int_R_byte, VTABLE_java_nio_ByteBuffer_get_int_R_byte, "(I)B", 257 },
	{ "put", (intptr_t) M_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer, "(IB)Ljava/nio/ByteBuffer;", 257 },
	{ "get", (intptr_t) M_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_get_Array1_byte_int_int_R_java_nio_ByteBuffer, "([BII)Ljava/nio/ByteBuffer;", 1 },
	{ "get", (intptr_t) M_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_get_Array1_byte_R_java_nio_ByteBuffer, "([B)Ljava/nio/ByteBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_ByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_put_java_nio_ByteBuffer_R_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_put_Array1_byte_int_int_R_java_nio_ByteBuffer, "([BII)Ljava/nio/ByteBuffer;", 1 },
	{ "put", (intptr_t) M_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_put_Array1_byte_R_java_nio_ByteBuffer, "([B)Ljava/nio/ByteBuffer;", 17 },
	{ "hasArray", (intptr_t) M_java_nio_ByteBuffer_hasArray_R_boolean, VTABLE_java_nio_ByteBuffer_hasArray_R_boolean, "()Z", 17 },
	{ "array", (intptr_t) M_java_nio_ByteBuffer_array_R_Array1_byte, VTABLE_java_nio_ByteBuffer_array_R_Array1_byte, "()[B", 17 },
	{ "arrayOffset", (intptr_t) M_java_nio_ByteBuffer_arrayOffset_R_int, VTABLE_java_nio_ByteBuffer_arrayOffset_R_int, "()I", 17 },
	{ "position", (intptr_t) M_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_ByteBuffer, "(I)Ljava/nio/ByteBuffer;", 257 },
	{ "limit", (intptr_t) M_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_ByteBuffer, "(I)Ljava/nio/ByteBuffer;", 257 },
	{ "mark", (intptr_t) M_java_nio_ByteBuffer_mark_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_mark_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "reset", (intptr_t) M_java_nio_ByteBuffer_reset_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_reset_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "flip", (intptr_t) M_java_nio_ByteBuffer_flip_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_flip_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "rewind", (intptr_t) M_java_nio_ByteBuffer_rewind_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_rewind_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "compact", (intptr_t) M_java_nio_ByteBuffer_compact_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_compact_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "isDirect", (intptr_t) M_java_nio_ByteBuffer_isDirect_R_boolean, VTABLE_java_nio_ByteBuffer_isDirect_R_boolean, "()Z", 1 },
	{ "toString", (intptr_t) M_java_nio_ByteBuffer_toString_R_java_lang_String, VTABLE_java_nio_ByteBuffer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "hashCode", (intptr_t) M_java_nio_ByteBuffer_hashCode_R_int, VTABLE_java_nio_ByteBuffer_hashCode_R_int, "()I", 1 },
	{ "equals", (intptr_t) M_java_nio_ByteBuffer_equals_java_lang_Object_R_boolean, VTABLE_java_nio_ByteBuffer_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "equals", (intptr_t) SM_java_nio_ByteBuffer_equals_byte_byte_R_boolean, 0, "(BB)Z", 10 },
	{ "compareTo", (intptr_t) M_java_nio_ByteBuffer_compareTo_java_nio_ByteBuffer_R_int, VTABLE_java_nio_ByteBuffer_compareTo_java_nio_ByteBuffer_R_int, "(Ljava/nio/ByteBuffer;)I", 1 },
	{ "compare", (intptr_t) SM_java_nio_ByteBuffer_compare_byte_byte_R_int, 0, "(BB)I", 10 },
	{ "order", (intptr_t) M_java_nio_ByteBuffer_order_R_java_nio_ByteOrder, VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder, "()Ljava/nio/ByteOrder;", 17 },
	{ "order", (intptr_t) M_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer, "(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;", 17 },
	{ "getChar", (intptr_t) M_java_nio_ByteBuffer_getChar_long_R_char, VTABLE_java_nio_ByteBuffer_getChar_long_R_char, "(J)C", 2 },
	{ "getChar", (intptr_t) M_java_nio_ByteBuffer_getChar_R_char, VTABLE_java_nio_ByteBuffer_getChar_R_char, "()C", 1 },
	{ "getChar", (intptr_t) M_java_nio_ByteBuffer_getChar_int_R_char, VTABLE_java_nio_ByteBuffer_getChar_int_R_char, "(I)C", 1 },
	{ "putChar", (intptr_t) M_java_nio_ByteBuffer_putChar_long_char_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putChar_long_char_R_java_nio_ByteBuffer, "(JC)Ljava/nio/ByteBuffer;", 2 },
	{ "putChar", (intptr_t) M_java_nio_ByteBuffer_putChar_char_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putChar_char_R_java_nio_ByteBuffer, "(C)Ljava/nio/ByteBuffer;", 1 },
	{ "putChar", (intptr_t) M_java_nio_ByteBuffer_putChar_int_char_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putChar_int_char_R_java_nio_ByteBuffer, "(IC)Ljava/nio/ByteBuffer;", 1 },
	{ "asCharBuffer", (intptr_t) M_java_nio_ByteBuffer_asCharBuffer_R_java_nio_CharBuffer, VTABLE_java_nio_ByteBuffer_asCharBuffer_R_java_nio_CharBuffer, "()Ljava/nio/CharBuffer;", 1 },
	{ "getShort", (intptr_t) M_java_nio_ByteBuffer_getShort_long_R_short, VTABLE_java_nio_ByteBuffer_getShort_long_R_short, "(J)S", 2 },
	{ "getShort", (intptr_t) M_java_nio_ByteBuffer_getShort_R_short, VTABLE_java_nio_ByteBuffer_getShort_R_short, "()S", 1 },
	{ "getShort", (intptr_t) M_java_nio_ByteBuffer_getShort_int_R_short, VTABLE_java_nio_ByteBuffer_getShort_int_R_short, "(I)S", 1 },
	{ "putShort", (intptr_t) M_java_nio_ByteBuffer_putShort_long_short_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putShort_long_short_R_java_nio_ByteBuffer, "(JS)Ljava/nio/ByteBuffer;", 2 },
	{ "putShort", (intptr_t) M_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putShort_short_R_java_nio_ByteBuffer, "(S)Ljava/nio/ByteBuffer;", 1 },
	{ "putShort", (intptr_t) M_java_nio_ByteBuffer_putShort_int_short_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putShort_int_short_R_java_nio_ByteBuffer, "(IS)Ljava/nio/ByteBuffer;", 1 },
	{ "asShortBuffer", (intptr_t) M_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer, VTABLE_java_nio_ByteBuffer_asShortBuffer_R_java_nio_ShortBuffer, "()Ljava/nio/ShortBuffer;", 1 },
	{ "getInt", (intptr_t) M_java_nio_ByteBuffer_getInt_long_R_int, VTABLE_java_nio_ByteBuffer_getInt_long_R_int, "(J)I", 2 },
	{ "getInt", (intptr_t) M_java_nio_ByteBuffer_getInt_R_int, VTABLE_java_nio_ByteBuffer_getInt_R_int, "()I", 1 },
	{ "getInt", (intptr_t) M_java_nio_ByteBuffer_getInt_int_R_int, VTABLE_java_nio_ByteBuffer_getInt_int_R_int, "(I)I", 1 },
	{ "putInt", (intptr_t) M_java_nio_ByteBuffer_putInt_long_int_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putInt_long_int_R_java_nio_ByteBuffer, "(JI)Ljava/nio/ByteBuffer;", 2 },
	{ "putInt", (intptr_t) M_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putInt_int_R_java_nio_ByteBuffer, "(I)Ljava/nio/ByteBuffer;", 1 },
	{ "putInt", (intptr_t) M_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer, "(II)Ljava/nio/ByteBuffer;", 1 },
	{ "asIntBuffer", (intptr_t) M_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer, VTABLE_java_nio_ByteBuffer_asIntBuffer_R_java_nio_IntBuffer, "()Ljava/nio/IntBuffer;", 1 },
	{ "getLong", (intptr_t) M_java_nio_ByteBuffer_getLong_long_R_long, VTABLE_java_nio_ByteBuffer_getLong_long_R_long, "(J)J", 2 },
	{ "getLong", (intptr_t) M_java_nio_ByteBuffer_getLong_R_long, VTABLE_java_nio_ByteBuffer_getLong_R_long, "()J", 1 },
	{ "getLong", (intptr_t) M_java_nio_ByteBuffer_getLong_int_R_long, VTABLE_java_nio_ByteBuffer_getLong_int_R_long, "(I)J", 1 },
	{ "putLong", (intptr_t) M_java_nio_ByteBuffer_putLong_long_long_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putLong_long_long_R_java_nio_ByteBuffer, "(JJ)Ljava/nio/ByteBuffer;", 2 },
	{ "putLong", (intptr_t) M_java_nio_ByteBuffer_putLong_long_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putLong_long_R_java_nio_ByteBuffer, "(J)Ljava/nio/ByteBuffer;", 1 },
	{ "putLong", (intptr_t) M_java_nio_ByteBuffer_putLong_int_long_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putLong_int_long_R_java_nio_ByteBuffer, "(IJ)Ljava/nio/ByteBuffer;", 1 },
	{ "asLongBuffer", (intptr_t) M_java_nio_ByteBuffer_asLongBuffer_R_java_nio_LongBuffer, VTABLE_java_nio_ByteBuffer_asLongBuffer_R_java_nio_LongBuffer, "()Ljava/nio/LongBuffer;", 1 },
	{ "getFloat", (intptr_t) M_java_nio_ByteBuffer_getFloat_long_R_float, VTABLE_java_nio_ByteBuffer_getFloat_long_R_float, "(J)F", 2 },
	{ "getFloat", (intptr_t) M_java_nio_ByteBuffer_getFloat_R_float, VTABLE_java_nio_ByteBuffer_getFloat_R_float, "()F", 1 },
	{ "getFloat", (intptr_t) M_java_nio_ByteBuffer_getFloat_int_R_float, VTABLE_java_nio_ByteBuffer_getFloat_int_R_float, "(I)F", 1 },
	{ "putFloat", (intptr_t) M_java_nio_ByteBuffer_putFloat_long_float_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putFloat_long_float_R_java_nio_ByteBuffer, "(JF)Ljava/nio/ByteBuffer;", 2 },
	{ "putFloat", (intptr_t) M_java_nio_ByteBuffer_putFloat_float_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putFloat_float_R_java_nio_ByteBuffer, "(F)Ljava/nio/ByteBuffer;", 1 },
	{ "putFloat", (intptr_t) M_java_nio_ByteBuffer_putFloat_int_float_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putFloat_int_float_R_java_nio_ByteBuffer, "(IF)Ljava/nio/ByteBuffer;", 1 },
	{ "asFloatBuffer", (intptr_t) M_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer, VTABLE_java_nio_ByteBuffer_asFloatBuffer_R_java_nio_FloatBuffer, "()Ljava/nio/FloatBuffer;", 1 },
	{ "getDouble", (intptr_t) M_java_nio_ByteBuffer_getDouble_long_R_double, VTABLE_java_nio_ByteBuffer_getDouble_long_R_double, "(J)D", 2 },
	{ "getDouble", (intptr_t) M_java_nio_ByteBuffer_getDouble_R_double, VTABLE_java_nio_ByteBuffer_getDouble_R_double, "()D", 1 },
	{ "getDouble", (intptr_t) M_java_nio_ByteBuffer_getDouble_int_R_double, VTABLE_java_nio_ByteBuffer_getDouble_int_R_double, "(I)D", 1 },
	{ "putDouble", (intptr_t) M_java_nio_ByteBuffer_putDouble_long_double_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putDouble_long_double_R_java_nio_ByteBuffer, "(JD)Ljava/nio/ByteBuffer;", 2 },
	{ "putDouble", (intptr_t) M_java_nio_ByteBuffer_putDouble_double_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putDouble_double_R_java_nio_ByteBuffer, "(D)Ljava/nio/ByteBuffer;", 1 },
	{ "putDouble", (intptr_t) M_java_nio_ByteBuffer_putDouble_int_double_R_java_nio_ByteBuffer, VTABLE_java_nio_ByteBuffer_putDouble_int_double_R_java_nio_ByteBuffer, "(ID)Ljava/nio/ByteBuffer;", 1 },
	{ "asDoubleBuffer", (intptr_t) M_java_nio_ByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer, VTABLE_java_nio_ByteBuffer_asDoubleBuffer_R_java_nio_DoubleBuffer, "()Ljava/nio/DoubleBuffer;", 1 },
	{ "array", (intptr_t) M_java_nio_ByteBuffer_array_R_java_lang_Object, VTABLE_java_nio_ByteBuffer_array_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "rewind", (intptr_t) M_java_nio_ByteBuffer_rewind_R_java_nio_Buffer, VTABLE_java_nio_ByteBuffer_rewind_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "flip", (intptr_t) M_java_nio_ByteBuffer_flip_R_java_nio_Buffer, VTABLE_java_nio_ByteBuffer_flip_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "clear", (intptr_t) M_java_nio_ByteBuffer_clear_R_java_nio_Buffer, VTABLE_java_nio_ByteBuffer_clear_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "reset", (intptr_t) M_java_nio_ByteBuffer_reset_R_java_nio_Buffer, VTABLE_java_nio_ByteBuffer_reset_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "mark", (intptr_t) M_java_nio_ByteBuffer_mark_R_java_nio_Buffer, VTABLE_java_nio_ByteBuffer_mark_R_java_nio_Buffer, "()Ljava/nio/Buffer;", 4161 },
	{ "limit", (intptr_t) M_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer, VTABLE_java_nio_ByteBuffer_limit_int_R_java_nio_Buffer, "(I)Ljava/nio/Buffer;", 4161 },
	{ "position", (intptr_t) M_java_nio_ByteBuffer_position_int_R_java_nio_Buffer, VTABLE_java_nio_ByteBuffer_position_int_R_java_nio_Buffer, "(I)Ljava/nio/Buffer;", 4161 },
	{ "compareTo", (intptr_t) M_java_nio_ByteBuffer_compareTo_java_lang_Object_R_int, VTABLE_java_nio_ByteBuffer_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_java_nio_ByteBuffer, 0, "()V", 8 },
};

Class class_java_nio_ByteBuffer{
		.nativeName = (intptr_t) "java/nio/ByteBuffer",
		.parentClass = (intptr_t) &class_java_nio_Buffer,
		.size = sizeof(java_nio_ByteBuffer),
		.classVtable = (intptr_t) vtable_java_nio_ByteBuffer,
		.staticInitializer = (intptr_t) clinit_java_nio_ByteBuffer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_nio_ByteBuffer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 98,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 108,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_nio_ByteBuffer = registerClass(&class_java_nio_ByteBuffer);

}
