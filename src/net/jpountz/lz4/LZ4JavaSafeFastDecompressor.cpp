#include "net/jpountz/lz4/LZ4JavaSafeFastDecompressor.h"
#include "net/jpountz/lz4/LZ4JavaSafeFastDecompressor.h"
#include "net/jpountz/util/ByteBufferUtils.h"
#include "java/lang/StringBuilder.h"
#include "net/jpountz/util/SafeUtils.h"
#include "net/jpountz/lz4/LZ4Utils.h"
#include "net/jpountz/lz4/LZ4Exception.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "net/jpountz/lz4/LZ4SafeUtils.h"
#include "java/lang/AssertionError.h"
#include "java/nio/Buffer.h"
#include "net/jpountz/lz4/LZ4ByteBufferUtils.h"
#include "java/lang/Class.h"
#include "net/jpountz/lz4/LZ4FastDecompressor.h"

extern "C" {

jobject SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_INSTANCE;
jbool SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_$assertionsDisabled;

void mark_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_INSTANCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_INSTANCE)->clazz)->markFunction)((jobject) SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_INSTANCE, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_net_jpountz_lz4_LZ4FastDecompressor(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (net_jpountz_lz4_LZ4JavaSafeFastDecompressor *) object;
}

void init_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4JavaSafeFastDecompressor:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_net_jpountz_lz4_LZ4FastDecompressor(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4JavaSafeFastDecompressor:decompress", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(24);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(26);
	jint temp0 = (jint)M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), ((frame[6].i) - (frame[2].i)), (frame[3].o), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4JavaSafeFastDecompressor:decompress", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(30);
	SM_net_jpountz_util_SafeUtils_checkRange_Array1_byte_int_int(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(31);
	SM_net_jpountz_util_SafeUtils_checkRange_Array1_byte_int_int(ctx, (frame[4].o), (frame[5].i), (frame[6].i));
	LINE_NUMBER(34);
	if ((frame[6].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(36);
	if ((frame[3].i) < (jint(1))) goto label_5;
	}
	{
	jint temp0 = (jint)SM_net_jpountz_util_SafeUtils_readByte_Array1_byte_int_R_byte(ctx, (frame[1].o), (frame[2].i));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(37);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(42);
	frame[7].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(43);
	frame[8].i = ((frame[5].i) + (frame[6].i));
	LINE_NUMBER(45);
	frame[9].i = (frame[2].i);
	LINE_NUMBER(46);
	frame[10].i = (frame[5].i);
	}
label_10:;
	{
	LINE_NUMBER(49);
	if ((frame[9].i) < (frame[7].i)) goto label_11;
	}
	{
	LINE_NUMBER(50);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(52);
	jint temp0 = (jint)SM_net_jpountz_util_SafeUtils_readByte_Array1_byte_int_R_byte(ctx, (frame[1].o), (frame[9].i));
	frame[11].i = (temp0 & (255));
	LINE_NUMBER(53);
	INST_IINC(9, 1);
	LINE_NUMBER(56);
	frame[12].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[11].i)) >> (jint(4))));
	LINE_NUMBER(57);
	if ((frame[12].i) != (15)) goto label_16;
	}
	{
	LINE_NUMBER(58);
	frame[13].i = (jint(-1));
	}
label_18:;
	{
	LINE_NUMBER(59);
	if ((frame[9].i) >= (frame[7].i)) goto label_19;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	jint temp1 = (jint)SM_net_jpountz_util_SafeUtils_readByte_Array1_byte_int_R_byte(ctx, sp[0].o, temp0);
	frame[13].i = temp1;
	if (temp1 != (jint(-1))) goto label_19;
	}
	{
	LINE_NUMBER(60);
	INST_IINC(12, 255);
	LINE_NUMBER(61);
	if ((frame[12].i) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(62);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too large literalLen"_j))));
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(65);
	frame[12].i = ((frame[12].i) + ((frame[13].i) & (255)));
	}
label_16:;
	{
	LINE_NUMBER(68);
	frame[13].i = ((frame[10].i) + (frame[12].i));
	LINE_NUMBER(70);
	if ((frame[13].i) >= (frame[10].i)) goto label_24;
	}
	{
	LINE_NUMBER(71);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too large literalLen"_j))));
	throwException(ctx, sp[0].o);	}
label_24:;
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, ((frame[8].i) - (frame[13].i)), (8));
	if (temp0 != 0) goto label_26;
	}
	{
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, ((frame[7].i) - (frame[9].i)), ((8) + (frame[12].i)));
	if (temp0 == 0) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(76);
	if ((frame[13].i) == (frame[8].i)) goto label_28;
	}
	{
	LINE_NUMBER(77);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, ((frame[7].i) - (frame[9].i)), (frame[12].i));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(79);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(82);
	SM_net_jpountz_lz4_LZ4SafeUtils_safeArraycopy_Array1_byte_int_Array1_byte_int_int(ctx, (frame[1].o), (frame[9].i), (frame[4].o), (frame[10].i), (frame[12].i));
	LINE_NUMBER(83);
	frame[9].i = ((frame[9].i) + (frame[12].i));
	LINE_NUMBER(84);
	frame[10].i = (frame[13].i);
	LINE_NUMBER(85);
	goto label_35;
	}
label_27:;
	{
	LINE_NUMBER(89);
	SM_net_jpountz_lz4_LZ4SafeUtils_wildArraycopy_Array1_byte_int_Array1_byte_int_int(ctx, (frame[1].o), (frame[9].i), (frame[4].o), (frame[10].i), (frame[12].i));
	LINE_NUMBER(90);
	frame[9].i = ((frame[9].i) + (frame[12].i));
	LINE_NUMBER(91);
	frame[10].i = (frame[13].i);
	LINE_NUMBER(94);
	jint temp0 = (jint)SM_net_jpountz_util_SafeUtils_readShortLE_Array1_byte_int_R_int(ctx, (frame[1].o), (frame[9].i));
	frame[14].i = temp0;
	LINE_NUMBER(95);
	INST_IINC(9, 2);
	LINE_NUMBER(96);
	frame[15].i = ((frame[10].i) - (frame[14].i));
	LINE_NUMBER(98);
	if ((frame[15].i) >= (frame[5].i)) goto label_42;
	}
	{
	LINE_NUMBER(99);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_42:;
	{
	LINE_NUMBER(102);
	frame[16].i = ((frame[11].i) & (15));
	LINE_NUMBER(103);
	if ((frame[16].i) != (15)) goto label_45;
	}
	{
	LINE_NUMBER(104);
	frame[17].i = (jint(-1));
	}
label_47:;
	{
	LINE_NUMBER(105);
	if ((frame[9].i) >= (frame[7].i)) goto label_48;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	jint temp1 = (jint)SM_net_jpountz_util_SafeUtils_readByte_Array1_byte_int_R_byte(ctx, sp[0].o, temp0);
	frame[17].i = temp1;
	if (temp1 != (jint(-1))) goto label_48;
	}
	{
	LINE_NUMBER(106);
	INST_IINC(16, 255);
	LINE_NUMBER(107);
	if ((frame[16].i) >= 0) goto label_47;
	}
	{
	LINE_NUMBER(108);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too large matchLen"_j))));
	throwException(ctx, sp[0].o);	}
label_48:;
	{
	LINE_NUMBER(111);
	frame[16].i = ((frame[16].i) + ((frame[17].i) & (255)));
	}
label_45:;
	{
	LINE_NUMBER(113);
	INST_IINC(16, 4);
	LINE_NUMBER(115);
	frame[17].i = ((frame[10].i) + (frame[16].i));
	LINE_NUMBER(117);
	if ((frame[17].i) >= (frame[10].i)) goto label_54;
	}
	{
	LINE_NUMBER(118);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too large matchLen"_j))));
	throwException(ctx, sp[0].o);	}
label_54:;
	{
	LINE_NUMBER(121);
	if ((frame[14].i) != 0) goto label_56;
	}
	{
	LINE_NUMBER(122);
	if ((frame[17].i) <= (frame[8].i)) goto label_58;
	}
	{
	LINE_NUMBER(123);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_58:;
	{
	LINE_NUMBER(126);
	if ((clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(ctx), (jint)SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_$assertionsDisabled) != 0) goto label_60;
	}
	{
	if ((frame[15].i) == (frame[10].i)) goto label_60;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_60:;
	{
	LINE_NUMBER(127);
	SM_net_jpountz_lz4_LZ4Utils_zero_Array1_byte_int_int(ctx, (frame[4].o), (frame[10].i), (frame[17].i));
	goto label_61;
	}
label_56:;
	{
	LINE_NUMBER(128);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, ((frame[8].i) - (frame[17].i)), (8));
	if (temp0 == 0) goto label_62;
	}
	{
	LINE_NUMBER(129);
	if ((frame[17].i) <= (frame[8].i)) goto label_64;
	}
	{
	LINE_NUMBER(130);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_64:;
	{
	LINE_NUMBER(132);
	SM_net_jpountz_lz4_LZ4SafeUtils_safeIncrementalCopy_Array1_byte_int_int_int(ctx, (frame[4].o), (frame[15].i), (frame[10].i), (frame[16].i));
	goto label_61;
	}
label_62:;
	{
	LINE_NUMBER(134);
	SM_net_jpountz_lz4_LZ4SafeUtils_wildIncrementalCopy_Array1_byte_int_int_int(ctx, (frame[4].o), (frame[15].i), (frame[10].i), (frame[17].i));
	}
label_61:;
	{
	LINE_NUMBER(136);
	frame[10].i = (frame[17].i);
	LINE_NUMBER(137);
	goto label_10;
	}
label_35:;
	{
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return ((frame[9].i) - (frame[2].i));
	}

	popStackFrame(ctx);
}

jint M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4JavaSafeFastDecompressor:decompress", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_capacity_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_capacity_R_int])(ctx, (frame[1].o));
	frame[6].i = temp0;
	LINE_NUMBER(150);
	jint temp1 = (jint)M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), ((frame[6].i) - (frame[2].i)), (frame[3].o), (frame[4].i), (frame[5].i));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4JavaSafeFastDecompressor:decompress", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(154);
	SM_net_jpountz_util_ByteBufferUtils_checkRange_java_nio_ByteBuffer_int_int(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(155);
	SM_net_jpountz_util_ByteBufferUtils_checkRange_java_nio_ByteBuffer_int_int(ctx, (frame[4].o), (frame[5].i), (frame[6].i));
	LINE_NUMBER(157);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_hasArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_hasArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_java_nio_ByteBuffer_hasArray_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_hasArray_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_nio_ByteBuffer_array_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_array_R_Array1_byte])(ctx, (frame[1].o));
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_arrayOffset_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_arrayOffset_R_int])(ctx, (frame[1].o));
	jint temp2 = temp0 + temp1;
	jint temp3 = frame[3].i;
	sp[2].o = (jobject)((func_java_nio_ByteBuffer_array_R_Array1_byte) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_array_R_Array1_byte])(ctx, (frame[4].o));
	jint temp4 = frame[5].i;
	jint temp5 = (jint)((func_java_nio_ByteBuffer_arrayOffset_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_nio_ByteBuffer_arrayOffset_R_int])(ctx, (frame[4].o));
	jint temp6 = (jint)M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int(ctx, sp[0].o, sp[1].o, temp2, temp3, sp[2].o, (temp4 + temp5), (frame[6].i));
	popStackFrame(ctx);
	return temp6;
	}
label_3:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)SM_net_jpountz_util_ByteBufferUtils_inNativeByteOrder_java_nio_ByteBuffer_R_java_nio_ByteBuffer(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(161);
	sp[0].o = (jobject)SM_net_jpountz_util_ByteBufferUtils_inNativeByteOrder_java_nio_ByteBuffer_R_java_nio_ByteBuffer(ctx, (frame[4].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(164);
	if ((frame[6].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(166);
	if ((frame[3].i) < (jint(1))) goto label_9;
	}
	{
	jint temp0 = (jint)SM_net_jpountz_util_ByteBufferUtils_readByte_java_nio_ByteBuffer_int_R_byte(ctx, (frame[1].o), (frame[2].i));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(167);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(172);
	frame[7].i = ((frame[2].i) + (frame[3].i));
	LINE_NUMBER(173);
	frame[8].i = ((frame[5].i) + (frame[6].i));
	LINE_NUMBER(175);
	frame[9].i = (frame[2].i);
	LINE_NUMBER(176);
	frame[10].i = (frame[5].i);
	}
label_14:;
	{
	LINE_NUMBER(179);
	if ((frame[9].i) < (frame[7].i)) goto label_15;
	}
	{
	LINE_NUMBER(180);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)SM_net_jpountz_util_ByteBufferUtils_readByte_java_nio_ByteBuffer_int_R_byte(ctx, (frame[1].o), (frame[9].i));
	frame[11].i = (temp0 & (255));
	LINE_NUMBER(183);
	INST_IINC(9, 1);
	LINE_NUMBER(186);
	frame[12].i = (bit_cast<jint>(bit_cast<uint32_t>((frame[11].i)) >> (jint(4))));
	LINE_NUMBER(187);
	if ((frame[12].i) != (15)) goto label_20;
	}
	{
	LINE_NUMBER(188);
	frame[13].i = (jint(-1));
	}
label_22:;
	{
	LINE_NUMBER(189);
	if ((frame[9].i) >= (frame[7].i)) goto label_23;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	jint temp1 = (jint)SM_net_jpountz_util_ByteBufferUtils_readByte_java_nio_ByteBuffer_int_R_byte(ctx, sp[0].o, temp0);
	frame[13].i = temp1;
	if (temp1 != (jint(-1))) goto label_23;
	}
	{
	LINE_NUMBER(190);
	INST_IINC(12, 255);
	LINE_NUMBER(191);
	if ((frame[12].i) >= 0) goto label_22;
	}
	{
	LINE_NUMBER(192);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too large literalLen"_j))));
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(195);
	frame[12].i = ((frame[12].i) + ((frame[13].i) & (255)));
	}
label_20:;
	{
	LINE_NUMBER(198);
	frame[13].i = ((frame[10].i) + (frame[12].i));
	LINE_NUMBER(200);
	if ((frame[13].i) >= (frame[10].i)) goto label_28;
	}
	{
	LINE_NUMBER(201);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too large literalLen"_j))));
	throwException(ctx, sp[0].o);	}
label_28:;
	{
	LINE_NUMBER(204);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, ((frame[8].i) - (frame[13].i)), (8));
	if (temp0 != 0) goto label_30;
	}
	{
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, ((frame[7].i) - (frame[9].i)), ((8) + (frame[12].i)));
	if (temp0 == 0) goto label_31;
	}
label_30:;
	{
	LINE_NUMBER(206);
	if ((frame[13].i) == (frame[8].i)) goto label_32;
	}
	{
	LINE_NUMBER(207);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_32:;
	{
	LINE_NUMBER(208);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, ((frame[7].i) - (frame[9].i)), (frame[12].i));
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(209);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_34:;
	{
	LINE_NUMBER(212);
	SM_net_jpountz_lz4_LZ4ByteBufferUtils_safeArraycopy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(ctx, (frame[1].o), (frame[9].i), (frame[4].o), (frame[10].i), (frame[12].i));
	LINE_NUMBER(213);
	frame[9].i = ((frame[9].i) + (frame[12].i));
	LINE_NUMBER(214);
	frame[10].i = (frame[13].i);
	LINE_NUMBER(215);
	goto label_39;
	}
label_31:;
	{
	LINE_NUMBER(219);
	SM_net_jpountz_lz4_LZ4ByteBufferUtils_wildArraycopy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(ctx, (frame[1].o), (frame[9].i), (frame[4].o), (frame[10].i), (frame[12].i));
	LINE_NUMBER(220);
	frame[9].i = ((frame[9].i) + (frame[12].i));
	LINE_NUMBER(221);
	frame[10].i = (frame[13].i);
	LINE_NUMBER(224);
	jint temp0 = (jint)SM_net_jpountz_util_ByteBufferUtils_readShortLE_java_nio_ByteBuffer_int_R_int(ctx, (frame[1].o), (frame[9].i));
	frame[14].i = temp0;
	LINE_NUMBER(225);
	INST_IINC(9, 2);
	LINE_NUMBER(226);
	frame[15].i = ((frame[10].i) - (frame[14].i));
	LINE_NUMBER(228);
	if ((frame[15].i) >= (frame[5].i)) goto label_46;
	}
	{
	LINE_NUMBER(229);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_46:;
	{
	LINE_NUMBER(232);
	frame[16].i = ((frame[11].i) & (15));
	LINE_NUMBER(233);
	if ((frame[16].i) != (15)) goto label_49;
	}
	{
	LINE_NUMBER(234);
	frame[17].i = (jint(-1));
	}
label_51:;
	{
	LINE_NUMBER(235);
	if ((frame[9].i) >= (frame[7].i)) goto label_52;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	jint temp1 = (jint)SM_net_jpountz_util_ByteBufferUtils_readByte_java_nio_ByteBuffer_int_R_byte(ctx, sp[0].o, temp0);
	frame[17].i = temp1;
	if (temp1 != (jint(-1))) goto label_52;
	}
	{
	LINE_NUMBER(236);
	INST_IINC(16, 255);
	LINE_NUMBER(237);
	if ((frame[16].i) >= 0) goto label_51;
	}
	{
	LINE_NUMBER(238);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too large matchLen"_j))));
	throwException(ctx, sp[0].o);	}
label_52:;
	{
	LINE_NUMBER(241);
	frame[16].i = ((frame[16].i) + ((frame[17].i) & (255)));
	}
label_49:;
	{
	LINE_NUMBER(243);
	INST_IINC(16, 4);
	LINE_NUMBER(245);
	frame[17].i = ((frame[10].i) + (frame[16].i));
	LINE_NUMBER(247);
	if ((frame[17].i) >= (frame[10].i)) goto label_58;
	}
	{
	LINE_NUMBER(248);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Too large matchLen"_j))));
	throwException(ctx, sp[0].o);	}
label_58:;
	{
	LINE_NUMBER(251);
	if ((frame[14].i) != 0) goto label_60;
	}
	{
	LINE_NUMBER(252);
	if ((frame[17].i) <= (frame[8].i)) goto label_62;
	}
	{
	LINE_NUMBER(253);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_62:;
	{
	LINE_NUMBER(256);
	if ((clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(ctx), (jint)SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_$assertionsDisabled) != 0) goto label_64;
	}
	{
	if ((frame[15].i) == (frame[10].i)) goto label_64;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_64:;
	{
	LINE_NUMBER(257);
	SM_net_jpountz_lz4_LZ4Utils_zero_java_nio_ByteBuffer_int_int(ctx, (frame[4].o), (frame[10].i), (frame[17].i));
	goto label_65;
	}
label_60:;
	{
	LINE_NUMBER(258);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, ((frame[8].i) - (frame[17].i)), (8));
	if (temp0 == 0) goto label_66;
	}
	{
	LINE_NUMBER(259);
	if ((frame[17].i) <= (frame[8].i)) goto label_68;
	}
	{
	LINE_NUMBER(260);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Malformed input at "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[9].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_68:;
	{
	LINE_NUMBER(262);
	SM_net_jpountz_lz4_LZ4ByteBufferUtils_safeIncrementalCopy_java_nio_ByteBuffer_int_int_int(ctx, (frame[4].o), (frame[15].i), (frame[10].i), (frame[16].i));
	goto label_65;
	}
label_66:;
	{
	LINE_NUMBER(264);
	SM_net_jpountz_lz4_LZ4ByteBufferUtils_wildIncrementalCopy_java_nio_ByteBuffer_int_int_int(ctx, (frame[4].o), (frame[15].i), (frame[10].i), (frame[17].i));
	}
label_65:;
	{
	LINE_NUMBER(266);
	frame[10].i = (frame[17].i);
	LINE_NUMBER(267);
	goto label_14;
	}
label_39:;
	{
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return ((frame[9].i) - (frame[2].i));
	}

	popStackFrame(ctx);
}

void clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_net_jpountz_lz4_LZ4FastDecompressor(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4JavaSafeFastDecompressor:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(ctx);
	{
	LINE_NUMBER(16);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_net_jpountz_lz4_LZ4JavaSafeFastDecompressor)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_net_jpountz_lz4_LZ4JavaSafeFastDecompressor)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(ctx);
	SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_$assertionsDisabled = sp[0].i;
	LINE_NUMBER(18);
	clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4JavaSafeFastDecompressor);
	init_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(ctx, sp[0].o);
	clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor(ctx);
	SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_INSTANCE = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_lz4_LZ4JavaSafeFastDecompressor[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int,
	(void *) M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int_R_int,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_int_R_int,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_Array1_byte_R_int,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_int_R_Array1_byte,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_Array1_byte_int_R_Array1_byte,
	(void *) M_net_jpountz_lz4_LZ4FastDecompressor_decompress_java_nio_ByteBuffer_java_nio_ByteBuffer,
	(void *) M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int,
	(void *) M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int,
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
	{ "decompress", "([BI[BII)I" },
	{ "decompress", "(Ljava/nio/ByteBuffer;ILjava/nio/ByteBuffer;II)I" },
	{ "decompress", "([B[BI)I" },
	{ "decompress", "([B[B)I" },
	{ "decompress", "([BII)[B" },
	{ "decompress", "([BI)[B" },
	{ "decompress", "(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)V" },
	{ "decompress", "([BII[BII)I" },
	{ "decompress", "(Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)I" },
};

static FieldMetadata fields[] {
	{ "INSTANCE", &class_net_jpountz_lz4_LZ4FastDecompressor, (intptr_t) &SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_INSTANCE, "Lnet/jpountz/lz4/LZ4FastDecompressor;", 25 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_net_jpountz_lz4_LZ4JavaSafeFastDecompressor, 0, "()V", 0 },
	{ "decompress", (intptr_t) M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int, VTABLE_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_Array1_byte_int_Array1_byte_int_int_R_int, "([BI[BII)I", 1 },
	{ "decompress", (intptr_t) M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int, VTABLE_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_Array1_byte_int_int_Array1_byte_int_int_R_int, "([BII[BII)I", 2 },
	{ "decompress", (intptr_t) M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int_R_int, VTABLE_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int_R_int, "(Ljava/nio/ByteBuffer;ILjava/nio/ByteBuffer;II)I", 1 },
	{ "decompress", (intptr_t) M_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int, VTABLE_net_jpountz_lz4_LZ4JavaSafeFastDecompressor_decompress_java_nio_ByteBuffer_int_int_java_nio_ByteBuffer_int_int_R_int, "(Ljava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)I", 2 },
	{ "<clinit>", (intptr_t) clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor, 0, "()V", 8 },
};

Class class_net_jpountz_lz4_LZ4JavaSafeFastDecompressor{
		.nativeName = (intptr_t) "net/jpountz/lz4/LZ4JavaSafeFastDecompressor",
		.parentClass = (intptr_t) &class_net_jpountz_lz4_LZ4FastDecompressor,
		.size = sizeof(net_jpountz_lz4_LZ4JavaSafeFastDecompressor),
		.classVtable = (intptr_t) vtable_net_jpountz_lz4_LZ4JavaSafeFastDecompressor,
		.staticInitializer = (intptr_t) clinit_net_jpountz_lz4_LZ4JavaSafeFastDecompressor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_lz4_LZ4JavaSafeFastDecompressor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_lz4_LZ4JavaSafeFastDecompressor = registerClass(&class_net_jpountz_lz4_LZ4JavaSafeFastDecompressor);

}
