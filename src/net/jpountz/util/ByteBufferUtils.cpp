#include "net/jpountz/util/ByteBufferUtils.h"
#include "net/jpountz/util/ByteBufferUtils.h"
#include "net/jpountz/util/SafeUtils.h"
#include "java/nio/ByteOrder.h"
#include "java/lang/Enum.h"
#include "java/nio/ReadOnlyBufferException.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/nio/Buffer.h"
#include "java/lang/AssertionError.h"
#include "net/jpountz/util/Utils.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_net_jpountz_util_ByteBufferUtils_$VALUES;
jbool SF_net_jpountz_util_ByteBufferUtils_$assertionsDisabled;

void mark_net_jpountz_util_ByteBufferUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_net_jpountz_util_ByteBufferUtils_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_util_ByteBufferUtils_$VALUES)->clazz)->markFunction)((jobject) SF_net_jpountz_util_ByteBufferUtils_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (net_jpountz_util_ByteBufferUtils *) object;
}

jobject SM_net_jpountz_util_ByteBufferUtils_values_R_Array1_net_jpountz_util_ByteBufferUtils(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	{
	LINE_NUMBER(24);
	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	sp[0].o = (jobject)SF_net_jpountz_util_ByteBufferUtils_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_net_jpountz_util_ByteBufferUtils, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_util_ByteBufferUtils_valueOf_java_lang_String_R_net_jpountz_util_ByteBufferUtils(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_net_jpountz_util_ByteBufferUtils)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_net_jpountz_util_ByteBufferUtils, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_net_jpountz_util_ByteBufferUtils_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(24);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_ByteBufferUtils_checkRange_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:checkRange", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(28);
	SM_net_jpountz_util_SafeUtils_checkLength_int(ctx, (frame[2].i));
	LINE_NUMBER(29);
	if ((frame[2].i) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(30);
	SM_net_jpountz_util_ByteBufferUtils_checkRange_java_nio_ByteBuffer_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(31);
	SM_net_jpountz_util_ByteBufferUtils_checkRange_java_nio_ByteBuffer_int(ctx, (frame[0].o), (((frame[1].i) + (frame[2].i)) - (jint(1))));
	}
label_2:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_net_jpountz_util_ByteBufferUtils_checkRange_java_nio_ByteBuffer_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:checkRange", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(36);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[0].o));
	if (temp0 < temp1) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(37);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_net_jpountz_util_ByteBufferUtils_inLittleEndianOrder_java_nio_ByteBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:inLittleEndianOrder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[0].o));
	clinit_java_nio_ByteOrder(ctx);
	sp[1].o = (jobject)SF_java_nio_ByteOrder_LITTLE_ENDIAN;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	clinit_java_nio_ByteOrder(ctx);
	sp[1].o = (jobject)SF_java_nio_ByteOrder_LITTLE_ENDIAN;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_util_ByteBufferUtils_inNativeByteOrder_java_nio_ByteBuffer_R_java_nio_ByteBuffer(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:inNativeByteOrder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[0].o));
	clinit_net_jpountz_util_Utils(ctx);
	sp[1].o = (jobject)SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_duplicate_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	clinit_net_jpountz_util_Utils(ctx);
	sp[1].o = (jobject)SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER;
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbyte SM_net_jpountz_util_ByteBufferUtils_readByte_java_nio_ByteBuffer_int_R_byte(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:readByte", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(58);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_ByteBufferUtils_writeInt_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:writeInt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(62);
	if ((clinit_net_jpountz_util_ByteBufferUtils(ctx), (jint)SF_net_jpountz_util_ByteBufferUtils_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[0].o));
	clinit_net_jpountz_util_Utils(ctx);
	sp[1].o = (jobject)SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_putInt_int_int_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_util_ByteBufferUtils_readInt_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:readInt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(67);
	if ((clinit_net_jpountz_util_ByteBufferUtils(ctx), (jint)SF_net_jpountz_util_ByteBufferUtils_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[0].o));
	clinit_net_jpountz_util_Utils(ctx);
	sp[1].o = (jobject)SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(68);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_util_ByteBufferUtils_readIntLE_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:readIntLE", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(72);
	if ((clinit_net_jpountz_util_ByteBufferUtils(ctx), (jint)SF_net_jpountz_util_ByteBufferUtils_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[0].o));
	clinit_java_nio_ByteOrder(ctx);
	sp[1].o = (jobject)SF_java_nio_ByteOrder_LITTLE_ENDIAN;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_ByteBufferUtils_writeLong_java_nio_ByteBuffer_int_long(jcontext ctx, jobject param0, jint param1, jlong param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:writeLong", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].l = param2;
	{
	LINE_NUMBER(77);
	if ((clinit_net_jpountz_util_ByteBufferUtils(ctx), (jint)SF_net_jpountz_util_ByteBufferUtils_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[0].o));
	clinit_net_jpountz_util_Utils(ctx);
	sp[1].o = (jobject)SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putLong_int_long_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_putLong_int_long_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[1].i), (frame[2].l));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:readLong", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(82);
	if ((clinit_net_jpountz_util_ByteBufferUtils(ctx), (jint)SF_net_jpountz_util_ByteBufferUtils_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[0].o));
	clinit_net_jpountz_util_Utils(ctx);
	sp[1].o = (jobject)SF_net_jpountz_util_Utils_NATIVE_BYTE_ORDER;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(83);
	jlong temp0 = (jlong)((func_java_nio_ByteBuffer_getLong_int_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_getLong_int_R_long])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_net_jpountz_util_ByteBufferUtils_readLongLE_java_nio_ByteBuffer_int_R_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:readLongLE", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(87);
	if ((clinit_net_jpountz_util_ByteBufferUtils(ctx), (jint)SF_net_jpountz_util_ByteBufferUtils_$assertionsDisabled) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[0].o));
	clinit_java_nio_ByteOrder(ctx);
	sp[1].o = (jobject)SF_java_nio_ByteOrder_LITTLE_ENDIAN;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(88);
	jlong temp0 = (jlong)((func_java_nio_ByteBuffer_getLong_int_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_getLong_int_R_long])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_ByteBufferUtils_writeByte_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:writeByte", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[1].i), (jbyte((frame[2].i))));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_ByteBufferUtils_writeShortLE_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:writeShortLE", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[0].o), (frame[1].i), (jbyte((frame[2].i))));
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))), (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (8))))));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_util_ByteBufferUtils_checkNotReadOnly_java_nio_ByteBuffer(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:checkNotReadOnly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(101);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_isReadOnly_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_isReadOnly_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(102);
	clinit_java_nio_ReadOnlyBufferException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_nio_ReadOnlyBufferException);
	init_java_nio_ReadOnlyBufferException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_net_jpountz_util_ByteBufferUtils_readShortLE_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:readShortLE", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(107);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = temp0 & (255);
	jint temp2 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	popStackFrame(ctx);
	return (temp1 | ((temp2 & (255)) << (8)));
	}

	popStackFrame(ctx);
}

void clinit_net_jpountz_util_ByteBufferUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/util/ByteBufferUtils:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	{
	LINE_NUMBER(24);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_net_jpountz_util_ByteBufferUtils)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_net_jpountz_util_ByteBufferUtils)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	SF_net_jpountz_util_ByteBufferUtils_$assertionsDisabled = sp[0].i;
	sp[0].o = (jobject)createArray(ctx, &class_net_jpountz_util_ByteBufferUtils, (jint(0)));
	clinit_net_jpountz_util_ByteBufferUtils(ctx);
	SF_net_jpountz_util_ByteBufferUtils_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_util_ByteBufferUtils[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "$VALUES", getArrayClass(&class_net_jpountz_util_ByteBufferUtils, 1), (intptr_t) &SF_net_jpountz_util_ByteBufferUtils_$VALUES, "[Lnet/jpountz/util/ByteBufferUtils;", 4122 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_net_jpountz_util_ByteBufferUtils_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_values_R_Array1_net_jpountz_util_ByteBufferUtils, 0, "()[Lnet/jpountz/util/ByteBufferUtils;", 9 },
	{ "valueOf", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_valueOf_java_lang_String_R_net_jpountz_util_ByteBufferUtils, 0, "(Ljava/lang/String;)Lnet/jpountz/util/ByteBufferUtils;", 9 },
	{ "<init>", (intptr_t) init_net_jpountz_util_ByteBufferUtils_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "checkRange", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_checkRange_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;II)V", 9 },
	{ "checkRange", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_checkRange_java_nio_ByteBuffer_int, 0, "(Ljava/nio/ByteBuffer;I)V", 9 },
	{ "inLittleEndianOrder", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_inLittleEndianOrder_java_nio_ByteBuffer_R_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", 9 },
	{ "inNativeByteOrder", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_inNativeByteOrder_java_nio_ByteBuffer_R_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;", 9 },
	{ "readByte", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_readByte_java_nio_ByteBuffer_int_R_byte, 0, "(Ljava/nio/ByteBuffer;I)B", 9 },
	{ "writeInt", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_writeInt_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;II)V", 9 },
	{ "readInt", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_readInt_java_nio_ByteBuffer_int_R_int, 0, "(Ljava/nio/ByteBuffer;I)I", 9 },
	{ "readIntLE", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_readIntLE_java_nio_ByteBuffer_int_R_int, 0, "(Ljava/nio/ByteBuffer;I)I", 9 },
	{ "writeLong", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_writeLong_java_nio_ByteBuffer_int_long, 0, "(Ljava/nio/ByteBuffer;IJ)V", 9 },
	{ "readLong", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long, 0, "(Ljava/nio/ByteBuffer;I)J", 9 },
	{ "readLongLE", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_readLongLE_java_nio_ByteBuffer_int_R_long, 0, "(Ljava/nio/ByteBuffer;I)J", 9 },
	{ "writeByte", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_writeByte_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;II)V", 9 },
	{ "writeShortLE", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_writeShortLE_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;II)V", 9 },
	{ "checkNotReadOnly", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_checkNotReadOnly_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)V", 9 },
	{ "readShortLE", (intptr_t) SM_net_jpountz_util_ByteBufferUtils_readShortLE_java_nio_ByteBuffer_int_R_int, 0, "(Ljava/nio/ByteBuffer;I)I", 9 },
	{ "<clinit>", (intptr_t) clinit_net_jpountz_util_ByteBufferUtils, 0, "()V", 8 },
};

Class class_net_jpountz_util_ByteBufferUtils{
		.nativeName = (intptr_t) "net/jpountz/util/ByteBufferUtils",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(net_jpountz_util_ByteBufferUtils),
		.classVtable = (intptr_t) vtable_net_jpountz_util_ByteBufferUtils,
		.staticInitializer = (intptr_t) clinit_net_jpountz_util_ByteBufferUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_util_ByteBufferUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_util_ByteBufferUtils = registerClass(&class_net_jpountz_util_ByteBufferUtils);

}
