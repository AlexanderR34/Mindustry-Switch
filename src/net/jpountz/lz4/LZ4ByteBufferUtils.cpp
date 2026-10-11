#include "net/jpountz/lz4/LZ4ByteBufferUtils.h"
#include "net/jpountz/util/ByteBufferUtils.h"
#include "java/lang/StringBuilder.h"
#include "net/jpountz/lz4/LZ4Utils.h"
#include "java/nio/ByteOrder.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/Enum.h"
#include "java/lang/Long.h"
#include "java/nio/ByteBuffer.h"
#include "net/jpountz/lz4/LZ4Exception.h"
#include "net/jpountz/lz4/LZ4ByteBufferUtils_Match.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "net/jpountz/lz4/LZ4ByteBufferUtils.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_net_jpountz_lz4_LZ4ByteBufferUtils_$VALUES;
jbool SF_net_jpountz_lz4_LZ4ByteBufferUtils_$assertionsDisabled;

void mark_net_jpountz_lz4_LZ4ByteBufferUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_net_jpountz_lz4_LZ4ByteBufferUtils_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_lz4_LZ4ByteBufferUtils_$VALUES)->clazz)->markFunction)((jobject) SF_net_jpountz_lz4_LZ4ByteBufferUtils_$VALUES, mark, depth + 1);
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
	auto self = (net_jpountz_lz4_LZ4ByteBufferUtils *) object;
}

jobject SM_net_jpountz_lz4_LZ4ByteBufferUtils_values_R_Array1_net_jpountz_lz4_LZ4ByteBufferUtils(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	{
	LINE_NUMBER(37);
	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4ByteBufferUtils_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_net_jpountz_lz4_LZ4ByteBufferUtils, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4ByteBufferUtils_valueOf_java_lang_String_R_net_jpountz_lz4_LZ4ByteBufferUtils(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_net_jpountz_lz4_LZ4ByteBufferUtils)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_net_jpountz_lz4_LZ4ByteBufferUtils, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_net_jpountz_lz4_LZ4ByteBufferUtils_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(37);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_hash_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:hash", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)SM_net_jpountz_util_ByteBufferUtils_readInt_java_nio_ByteBuffer_int_R_int(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)SM_net_jpountz_lz4_LZ4Utils_hash_int_R_int(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_hash64k_java_nio_ByteBuffer_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:hash64k", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)SM_net_jpountz_util_ByteBufferUtils_readInt_java_nio_ByteBuffer_int_R_int(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)SM_net_jpountz_lz4_LZ4Utils_hash64k_int_R_int(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool SM_net_jpountz_lz4_LZ4ByteBufferUtils_readIntEquals_java_nio_ByteBuffer_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:readIntEquals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(49);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)((func_java_nio_ByteBuffer_getInt_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_getInt_int_R_int])(ctx, (frame[0].o), (frame[2].i));
	if (temp0 != temp1) goto label_1;
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

void SM_net_jpountz_lz4_LZ4ByteBufferUtils_safeIncrementalCopy_java_nio_ByteBuffer_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:safeIncrementalCopy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(53);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	jint temp0 = (frame[2].i) + (frame[4].i);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (frame[4].i)));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(53);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4ByteBufferUtils_wildIncrementalCopy_java_nio_ByteBuffer_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:wildIncrementalCopy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(59);
	if (((frame[2].i) - (frame[1].i)) >= (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(60);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_4;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	jint temp0 = (frame[2].i) + (frame[4].i);
	jint temp1 = (jint)SM_net_jpountz_util_ByteBufferUtils_readByte_java_nio_ByteBuffer_int_R_byte(ctx, (frame[0].o), ((frame[1].i) + (frame[4].i)));
	SM_net_jpountz_util_ByteBufferUtils_writeByte_java_nio_ByteBuffer_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(60);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(63);
	INST_IINC(2, 4);
	LINE_NUMBER(64);
	INST_IINC(1, 4);
	LINE_NUMBER(65);
	frame[4].i = (jint(0));
	LINE_NUMBER(66);
	if ((clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx), (jint)SF_net_jpountz_lz4_LZ4ByteBufferUtils_$assertionsDisabled) != 0) goto label_10;
	}
	{
	if ((frame[2].i) < (frame[1].i)) goto label_11;
	}
	{
	if (((frame[2].i) - (frame[1].i)) < (8)) goto label_10;
	}
label_11:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(67);
	switch(((frame[2].i) - (frame[1].i))) {
		case 1: goto label_12;
		case 2: goto label_13;
		case 3: goto label_14;
		case 4: goto label_15;
		case 5: goto label_16;
		case 6: goto label_17;
		case 7: goto label_18;
		default: goto label_15;
	}
	}
label_12:;
	{
	LINE_NUMBER(69);
	INST_IINC(1, -3);
	LINE_NUMBER(70);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(72);
	INST_IINC(1, -2);
	LINE_NUMBER(73);
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(75);
	INST_IINC(1, -3);
	LINE_NUMBER(76);
	frame[4].i = (jint(-1));
	LINE_NUMBER(77);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(79);
	frame[4].i = (jint(1));
	LINE_NUMBER(80);
	goto label_15;
	}
label_17:;
	{
	LINE_NUMBER(82);
	frame[4].i = (jint(2));
	LINE_NUMBER(83);
	goto label_15;
	}
label_18:;
	{
	LINE_NUMBER(85);
	frame[4].i = (jint(3));
	LINE_NUMBER(86);
	goto label_15;
	}
label_15:;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_net_jpountz_util_ByteBufferUtils_readInt_java_nio_ByteBuffer_int_R_int(ctx, (frame[0].o), (frame[1].i));
	SM_net_jpountz_util_ByteBufferUtils_writeInt_java_nio_ByteBuffer_int_int(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(91);
	INST_IINC(2, 4);
	LINE_NUMBER(92);
	frame[1].i = ((frame[1].i) - (frame[4].i));
	LINE_NUMBER(93);
	goto label_29;
	}
label_1:;
	{
	if (((frame[2].i) - (frame[1].i)) >= (8)) goto label_29;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jlong temp1 = (jlong)SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[1].i));
	SM_net_jpountz_util_ByteBufferUtils_writeLong_java_nio_ByteBuffer_int_long(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(95);
	frame[2].i = ((frame[2].i) + ((frame[2].i) - (frame[1].i)));
	}
label_29:;
	{
	LINE_NUMBER(97);
	if ((frame[2].i) >= (frame[3].i)) goto label_32;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	jint temp0 = frame[2].i;
	jlong temp1 = (jlong)SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[1].i));
	SM_net_jpountz_util_ByteBufferUtils_writeLong_java_nio_ByteBuffer_int_long(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(99);
	INST_IINC(2, 8);
	LINE_NUMBER(100);
	INST_IINC(1, 8);
	goto label_29;
	}
label_32:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_commonBytes_java_nio_ByteBuffer_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:commonBytes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(105);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(106);
	if ((frame[2].i) > ((frame[3].i) - (8))) goto label_2;
	}
	{
	LINE_NUMBER(107);
	jlong temp0 = (jlong)SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[2].i));
	jlong temp1 = (jlong)SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[1].i));
	if ((longCompare(temp0, temp1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(108);
	INST_IINC(4, 8);
	LINE_NUMBER(109);
	INST_IINC(1, 8);
	LINE_NUMBER(110);
	INST_IINC(2, 8);
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[0].o));
	clinit_java_nio_ByteOrder(ctx);
	sp[1].o = (jobject)SF_java_nio_ByteOrder_BIG_ENDIAN;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(114);
	jlong temp0 = (jlong)SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[2].i));
	jlong temp1 = (jlong)SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[1].i));
	jint temp2 = (jint)SM_java_lang_Long_numberOfLeadingZeros_long_R_int(ctx, (temp0 ^ temp1));
	frame[5].i = temp2;
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(116);
	jlong temp0 = (jlong)SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[2].i));
	jlong temp1 = (jlong)SM_net_jpountz_util_ByteBufferUtils_readLong_java_nio_ByteBuffer_int_R_long(ctx, (frame[0].o), (frame[1].i));
	jint temp2 = (jint)SM_java_lang_Long_numberOfTrailingZeros_long_R_int(ctx, (temp0 ^ temp1));
	frame[5].i = temp2;
	}
label_11:;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return ((frame[4].i) + (bit_cast<jint>(bit_cast<uint32_t>((frame[5].i)) >> (jint(3)))));
	}
label_2:;
	{
	LINE_NUMBER(121);
	if ((frame[2].i) >= (frame[3].i)) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)SM_net_jpountz_util_ByteBufferUtils_readByte_java_nio_ByteBuffer_int_R_byte(ctx, sp[0].o, temp0);
	sp[0].o = frame[0].o;
	jint temp2 = frame[2].i;
	INST_IINC(2, 1);
	jint temp3 = (jint)SM_net_jpountz_util_ByteBufferUtils_readByte_java_nio_ByteBuffer_int_R_byte(ctx, sp[0].o, temp2);
	if (temp1 != temp3) goto label_12;
	}
	{
	LINE_NUMBER(122);
	INST_IINC(4, 1);
	goto label_2;
	}
label_12:;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_commonBytesBackward_java_nio_ByteBuffer_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:commonBytesBackward", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(128);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(129);
	if ((frame[1].i) <= (frame[3].i)) goto label_2;
	}
	{
	if ((frame[2].i) <= (frame[4].i)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	INST_IINC(1, -1);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = frame[0].o;
	INST_IINC(2, -1);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, sp[0].o, (frame[2].i));
	if (temp0 != temp1) goto label_2;
	}
	{
	LINE_NUMBER(130);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4ByteBufferUtils_safeArraycopy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:safeArraycopy", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(136);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = frame[2].o;
	jint temp0 = (frame[3].i) + (frame[5].i);
	jint temp1 = (jint)((func_java_nio_ByteBuffer_get_int_R_byte) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_get_int_R_byte])(ctx, (frame[0].o), ((frame[1].i) + (frame[5].i)));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(136);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4ByteBufferUtils_wildArraycopy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:wildArraycopy", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(142);
	if ((clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx), (jint)SF_net_jpountz_lz4_LZ4ByteBufferUtils_$assertionsDisabled) != 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_order_R_java_nio_ByteOrder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_order_R_java_nio_ByteOrder])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_0;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(144);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_1;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = frame[2].o;
	jint temp0 = (frame[3].i) + (frame[5].i);
	jlong temp1 = (jlong)((func_java_nio_ByteBuffer_getLong_int_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_nio_ByteBuffer_getLong_int_R_long])(ctx, (frame[0].o), ((frame[1].i) + (frame[5].i)));
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_putLong_int_long_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_putLong_int_long_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(144);
	INST_IINC(5, 8);
	goto label_5;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(149);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(147);
	frame[5].o = sp[0].o;
	LINE_NUMBER(148);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at offset "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_encodeSequence_java_nio_ByteBuffer_int_int_int_int_java_nio_ByteBuffer_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jint param6, jint param7) {
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:encodeSequence", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(153);
	frame[8].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(154);
	INST_IINC(4, -4);
	LINE_NUMBER(156);
	jint temp0 = frame[6].i;
	jint temp1 = (jint)SM_net_jpountz_lz4_LZ4Utils_sequenceLength_int_int_R_int(ctx, (frame[8].i), (frame[4].i));
	frame[9].i = (temp0 + temp1);
	LINE_NUMBER(158);
	if ((frame[9].i) < 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, ((frame[7].i) - (frame[9].i)), (6));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(159);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxDestLen is too small"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(161);
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	frame[10].i = temp0;
	LINE_NUMBER(164);
	if ((frame[8].i) < (15)) goto label_7;
	}
	{
	LINE_NUMBER(165);
	frame[11].i = (-16);
	LINE_NUMBER(166);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4ByteBufferUtils_writeLen_int_java_nio_ByteBuffer_int_R_int(ctx, ((frame[8].i) - (15)), (frame[5].o), (frame[6].i));
	frame[6].i = temp0;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(168);
	frame[11].i = ((frame[8].i) << (jint(4)));
	}
label_10:;
	{
	LINE_NUMBER(172);
	SM_net_jpountz_lz4_LZ4ByteBufferUtils_wildArraycopy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(ctx, (frame[0].o), (frame[1].i), (frame[5].o), (frame[6].i), (frame[8].i));
	LINE_NUMBER(173);
	frame[6].i = ((frame[6].i) + (frame[8].i));
	LINE_NUMBER(176);
	frame[12].i = ((frame[2].i) - (frame[3].i));
	LINE_NUMBER(177);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0, (jbyte((frame[12].i))));
	LINE_NUMBER(178);
	sp[0].o = frame[5].o;
	jint temp1 = frame[6].i;
	INST_IINC(6, 1);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp1, (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[12].i)) >> (8))))));
	LINE_NUMBER(181);
	if ((frame[4].i) < (15)) goto label_16;
	}
	{
	LINE_NUMBER(182);
	frame[11].i = ((frame[11].i) | (15));
	LINE_NUMBER(183);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4ByteBufferUtils_writeLen_int_java_nio_ByteBuffer_int_R_int(ctx, ((frame[4].i) - (15)), (frame[5].o), (frame[6].i));
	frame[6].i = temp0;
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(185);
	frame[11].i = ((frame[11].i) | (frame[4].i));
	}
label_19:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, (frame[5].o), (frame[10].i), (jbyte((frame[11].i))));
	LINE_NUMBER(190);
	if ((clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx), (jint)SF_net_jpountz_lz4_LZ4ByteBufferUtils_$assertionsDisabled) != 0) goto label_21;
	}
	{
	if ((frame[9].i) == (frame[6].i)) goto label_21;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_lastLiterals_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:lastLiterals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(195);
	frame[6].i = (frame[2].i);
	LINE_NUMBER(197);
	jint temp0 = (frame[5].i) - (frame[4].i);
	jint temp1 = jint(1);
	jint temp2 = (jint)SM_net_jpountz_lz4_LZ4Utils_lengthOfEncodedInteger_int_R_int(ctx, (frame[6].i));
	jint temp3 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, temp0, ((temp1 + temp2) + (frame[6].i)));
	if (temp3 == 0) goto label_2;
	}
	{
	LINE_NUMBER(198);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(201);
	if ((frame[6].i) < (15)) goto label_4;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0, (-16));
	LINE_NUMBER(203);
	jint temp1 = (jint)SM_net_jpountz_lz4_LZ4ByteBufferUtils_writeLen_int_java_nio_ByteBuffer_int_R_int(ctx, ((frame[6].i) - (15)), (frame[3].o), (frame[4].i));
	frame[4].i = temp1;
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(205);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0, (jbyte(((frame[6].i) << (jint(4))))));
	}
label_7:;
	{
	LINE_NUMBER(208);
	SM_net_jpountz_lz4_LZ4ByteBufferUtils_safeArraycopy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(ctx, (frame[0].o), (frame[1].i), (frame[3].o), (frame[4].i), (frame[6].i));
	LINE_NUMBER(209);
	frame[4].i = ((frame[4].i) + (frame[6].i));
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4ByteBufferUtils_writeLen_int_java_nio_ByteBuffer_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:writeLen", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
label_0:;
	{
	LINE_NUMBER(215);
	if ((frame[0].i) < (255)) goto label_1;
	}
	{
	LINE_NUMBER(216);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0, (jint(-1)));
	LINE_NUMBER(217);
	INST_IINC(0, -255);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(219);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_put_int_byte_R_java_nio_ByteBuffer])(ctx, sp[0].o, temp0, (jbyte((frame[0].i))));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4ByteBufferUtils_copyTo_net_jpountz_lz4_LZ4ByteBufferUtils$Match_net_jpountz_lz4_LZ4ByteBufferUtils$Match(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:copyTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(238);
	((net_jpountz_lz4_LZ4ByteBufferUtils$Match *) NULL_CHECK((frame[1].o)))->F_len = ((jint)((net_jpountz_lz4_LZ4ByteBufferUtils$Match *) NULL_CHECK((frame[0].o)))->F_len);
	LINE_NUMBER(239);
	((net_jpountz_lz4_LZ4ByteBufferUtils$Match *) NULL_CHECK((frame[1].o)))->F_start = ((jint)((net_jpountz_lz4_LZ4ByteBufferUtils$Match *) NULL_CHECK((frame[0].o)))->F_start);
	LINE_NUMBER(240);
	((net_jpountz_lz4_LZ4ByteBufferUtils$Match *) NULL_CHECK((frame[1].o)))->F_ref = ((jint)((net_jpountz_lz4_LZ4ByteBufferUtils$Match *) NULL_CHECK((frame[0].o)))->F_ref);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_net_jpountz_lz4_LZ4ByteBufferUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4ByteBufferUtils:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_net_jpountz_lz4_LZ4ByteBufferUtils)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_net_jpountz_lz4_LZ4ByteBufferUtils)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	SF_net_jpountz_lz4_LZ4ByteBufferUtils_$assertionsDisabled = sp[0].i;
	sp[0].o = (jobject)createArray(ctx, &class_net_jpountz_lz4_LZ4ByteBufferUtils, (jint(0)));
	clinit_net_jpountz_lz4_LZ4ByteBufferUtils(ctx);
	SF_net_jpountz_lz4_LZ4ByteBufferUtils_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_lz4_LZ4ByteBufferUtils[] {
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

static jclass innerClasses[] {
	&class_net_jpountz_lz4_LZ4ByteBufferUtils$Match,
};

static FieldMetadata fields[] {
	{ "$VALUES", getArrayClass(&class_net_jpountz_lz4_LZ4ByteBufferUtils, 1), (intptr_t) &SF_net_jpountz_lz4_LZ4ByteBufferUtils_$VALUES, "[Lnet/jpountz/lz4/LZ4ByteBufferUtils;", 4122 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_net_jpountz_lz4_LZ4ByteBufferUtils_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_values_R_Array1_net_jpountz_lz4_LZ4ByteBufferUtils, 0, "()[Lnet/jpountz/lz4/LZ4ByteBufferUtils;", 9 },
	{ "valueOf", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_valueOf_java_lang_String_R_net_jpountz_lz4_LZ4ByteBufferUtils, 0, "(Ljava/lang/String;)Lnet/jpountz/lz4/LZ4ByteBufferUtils;", 9 },
	{ "<init>", (intptr_t) init_net_jpountz_lz4_LZ4ByteBufferUtils_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "hash", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_hash_java_nio_ByteBuffer_int_R_int, 0, "(Ljava/nio/ByteBuffer;I)I", 8 },
	{ "hash64k", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_hash64k_java_nio_ByteBuffer_int_R_int, 0, "(Ljava/nio/ByteBuffer;I)I", 8 },
	{ "readIntEquals", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_readIntEquals_java_nio_ByteBuffer_int_int_R_boolean, 0, "(Ljava/nio/ByteBuffer;II)Z", 8 },
	{ "safeIncrementalCopy", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_safeIncrementalCopy_java_nio_ByteBuffer_int_int_int, 0, "(Ljava/nio/ByteBuffer;III)V", 8 },
	{ "wildIncrementalCopy", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_wildIncrementalCopy_java_nio_ByteBuffer_int_int_int, 0, "(Ljava/nio/ByteBuffer;III)V", 8 },
	{ "commonBytes", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_commonBytes_java_nio_ByteBuffer_int_int_int_R_int, 0, "(Ljava/nio/ByteBuffer;III)I", 8 },
	{ "commonBytesBackward", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_commonBytesBackward_java_nio_ByteBuffer_int_int_int_int_R_int, 0, "(Ljava/nio/ByteBuffer;IIII)I", 8 },
	{ "safeArraycopy", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_safeArraycopy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;ILjava/nio/ByteBuffer;II)V", 8 },
	{ "wildArraycopy", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_wildArraycopy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;ILjava/nio/ByteBuffer;II)V", 8 },
	{ "encodeSequence", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_encodeSequence_java_nio_ByteBuffer_int_int_int_int_java_nio_ByteBuffer_int_int_R_int, 0, "(Ljava/nio/ByteBuffer;IIIILjava/nio/ByteBuffer;II)I", 8 },
	{ "lastLiterals", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_lastLiterals_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int, 0, "(Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)I", 8 },
	{ "writeLen", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_writeLen_int_java_nio_ByteBuffer_int_R_int, 0, "(ILjava/nio/ByteBuffer;I)I", 8 },
	{ "copyTo", (intptr_t) SM_net_jpountz_lz4_LZ4ByteBufferUtils_copyTo_net_jpountz_lz4_LZ4ByteBufferUtils$Match_net_jpountz_lz4_LZ4ByteBufferUtils$Match, 0, "(Lnet/jpountz/lz4/LZ4ByteBufferUtils$Match;Lnet/jpountz/lz4/LZ4ByteBufferUtils$Match;)V", 8 },
	{ "<clinit>", (intptr_t) clinit_net_jpountz_lz4_LZ4ByteBufferUtils, 0, "()V", 8 },
};

Class class_net_jpountz_lz4_LZ4ByteBufferUtils{
		.nativeName = (intptr_t) "net/jpountz/lz4/LZ4ByteBufferUtils",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(net_jpountz_lz4_LZ4ByteBufferUtils),
		.classVtable = (intptr_t) vtable_net_jpountz_lz4_LZ4ByteBufferUtils,
		.staticInitializer = (intptr_t) clinit_net_jpountz_lz4_LZ4ByteBufferUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_lz4_LZ4ByteBufferUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 16432,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_lz4_LZ4ByteBufferUtils = registerClass(&class_net_jpountz_lz4_LZ4ByteBufferUtils);

}
