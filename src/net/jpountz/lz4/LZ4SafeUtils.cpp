#include "net/jpountz/lz4/LZ4SafeUtils.h"
#include "net/jpountz/lz4/LZ4SafeUtils_Match.h"
#include "java/lang/StringBuilder.h"
#include "net/jpountz/util/SafeUtils.h"
#include "net/jpountz/lz4/LZ4Utils.h"
#include "java/lang/Enum.h"
#include "net/jpountz/lz4/LZ4Exception.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "net/jpountz/lz4/LZ4SafeUtils.h"
#include "java/lang/AssertionError.h"
#include "java/lang/Class.h"
#include "java/lang/System.h"

extern "C" {

jobject SF_net_jpountz_lz4_LZ4SafeUtils_$VALUES;
jbool SF_net_jpountz_lz4_LZ4SafeUtils_$assertionsDisabled;

void mark_net_jpountz_lz4_LZ4SafeUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_net_jpountz_lz4_LZ4SafeUtils_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_net_jpountz_lz4_LZ4SafeUtils_$VALUES)->clazz)->markFunction)((jobject) SF_net_jpountz_lz4_LZ4SafeUtils_$VALUES, mark, depth + 1);
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
	auto self = (net_jpountz_lz4_LZ4SafeUtils *) object;
}

jobject SM_net_jpountz_lz4_LZ4SafeUtils_values_R_Array1_net_jpountz_lz4_LZ4SafeUtils(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	{
	LINE_NUMBER(29);
	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	sp[0].o = (jobject)SF_net_jpountz_lz4_LZ4SafeUtils_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_net_jpountz_lz4_LZ4SafeUtils, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_net_jpountz_lz4_LZ4SafeUtils_valueOf_java_lang_String_R_net_jpountz_lz4_LZ4SafeUtils(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_net_jpountz_lz4_LZ4SafeUtils)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_net_jpountz_lz4_LZ4SafeUtils, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_net_jpountz_lz4_LZ4SafeUtils_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4SafeUtils_hash_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:hash", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)SM_net_jpountz_util_SafeUtils_readInt_Array1_byte_int_R_int(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)SM_net_jpountz_lz4_LZ4Utils_hash_int_R_int(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4SafeUtils_hash64k_Array1_byte_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:hash64k", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)SM_net_jpountz_util_SafeUtils_readInt_Array1_byte_int_R_int(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)SM_net_jpountz_lz4_LZ4Utils_hash64k_int_R_int(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool SM_net_jpountz_lz4_LZ4SafeUtils_readIntEquals_Array1_byte_int_int_R_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:readIntEquals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(41);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i))) != ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i)))) goto label_1;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(1))))) != ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[2].i) + (jint(1)))))) goto label_1;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(2))))) != ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[2].i) + (jint(2)))))) goto label_1;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (jint(3))))) != ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[2].i) + (jint(3)))))) goto label_1;
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

void SM_net_jpountz_lz4_LZ4SafeUtils_safeIncrementalCopy_Array1_byte_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:safeIncrementalCopy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(45);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(46);
	ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[2].i) + (frame[4].i))) = ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (frame[4].i))));
	LINE_NUMBER(45);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4SafeUtils_wildIncrementalCopy_Array1_byte_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:wildIncrementalCopy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
label_0:;
	{
	LINE_NUMBER(52);
	SM_net_jpountz_lz4_LZ4SafeUtils_copy8Bytes_Array1_byte_int_Array1_byte_int(ctx, (frame[0].o), (frame[1].i), (frame[0].o), (frame[2].i));
	LINE_NUMBER(53);
	INST_IINC(1, 8);
	LINE_NUMBER(54);
	INST_IINC(2, 8);
	LINE_NUMBER(55);
	if ((frame[2].i) < (frame[3].i)) goto label_0;
	}
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4SafeUtils_copy8Bytes_Array1_byte_int_Array1_byte_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:copy8Bytes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(59);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (8)) goto label_2;
	}
	{
	LINE_NUMBER(60);
	ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[3].i) + (frame[4].i))) = ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), ((frame[1].i) + (frame[4].i))));
	LINE_NUMBER(59);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4SafeUtils_commonBytes_Array1_byte_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:commonBytes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(65);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(66);
	if ((frame[2].i) >= (frame[3].i)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	jint temp1 = (jint)ARRAY_ACCESS(jbyte, sp[0].o, temp0);
	sp[0].o = frame[0].o;
	jint temp2 = frame[2].i;
	INST_IINC(2, 1);
	if (temp1 != ((jint)ARRAY_ACCESS(jbyte, sp[0].o, temp2))) goto label_2;
	}
	{
	LINE_NUMBER(67);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4SafeUtils_commonBytesBackward_Array1_byte_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:commonBytesBackward", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(73);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(74);
	if ((frame[1].i) <= (frame[3].i)) goto label_2;
	}
	{
	if ((frame[2].i) <= (frame[4].i)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	INST_IINC(1, -1);
	jint temp0 = (jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[1].i));
	sp[0].o = frame[0].o;
	INST_IINC(2, -1);
	if (temp0 != ((jint)ARRAY_ACCESS(jbyte, sp[0].o, (frame[2].i)))) goto label_2;
	}
	{
	LINE_NUMBER(75);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4SafeUtils_safeArraycopy_Array1_byte_int_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:safeArraycopy", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(81);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4SafeUtils_wildArraycopy_Array1_byte_int_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:wildArraycopy", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ArrayIndexOutOfBoundsException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(86);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_1;
	}
	{
	LINE_NUMBER(87);
	SM_net_jpountz_lz4_LZ4SafeUtils_copy8Bytes_Array1_byte_int_Array1_byte_int(ctx, (frame[0].o), ((frame[1].i) + (frame[5].i)), (frame[2].o), ((frame[3].i) + (frame[5].i)));
	LINE_NUMBER(86);
	INST_IINC(5, 8);
	goto label_4;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(91);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(89);
	frame[5].o = sp[0].o;
	LINE_NUMBER(90);
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
label_7:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4SafeUtils_encodeSequence_Array1_byte_int_int_int_int_Array1_byte_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jint param6, jint param7) {
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:encodeSequence", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(95);
	frame[8].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(96);
	INST_IINC(4, -4);
	LINE_NUMBER(98);
	jint temp0 = frame[6].i;
	jint temp1 = (jint)SM_net_jpountz_lz4_LZ4Utils_sequenceLength_int_int_R_int(ctx, (frame[8].i), (frame[4].i));
	frame[9].i = (temp0 + temp1);
	LINE_NUMBER(100);
	if ((frame[9].i) < 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, ((frame[7].i) - (frame[9].i)), (6));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(101);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxDestLen is too small"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(103);
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	frame[10].i = temp0;
	LINE_NUMBER(106);
	if ((frame[8].i) < (15)) goto label_7;
	}
	{
	LINE_NUMBER(107);
	frame[11].i = (-16);
	LINE_NUMBER(108);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4SafeUtils_writeLen_int_Array1_byte_int_R_int(ctx, ((frame[8].i) - (15)), (frame[5].o), (frame[6].i));
	frame[6].i = temp0;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(110);
	frame[11].i = ((frame[8].i) << (jint(4)));
	}
label_10:;
	{
	LINE_NUMBER(114);
	SM_net_jpountz_lz4_LZ4SafeUtils_wildArraycopy_Array1_byte_int_Array1_byte_int_int(ctx, (frame[0].o), (frame[1].i), (frame[5].o), (frame[6].i), (frame[8].i));
	LINE_NUMBER(115);
	frame[6].i = ((frame[6].i) + (frame[8].i));
	LINE_NUMBER(118);
	frame[12].i = ((frame[2].i) - (frame[3].i));
	LINE_NUMBER(119);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[12].i)));
	LINE_NUMBER(120);
	sp[0].o = frame[5].o;
	jint temp1 = frame[6].i;
	INST_IINC(6, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (jbyte((bit_cast<jint>(bit_cast<uint32_t>((frame[12].i)) >> (8)))));
	LINE_NUMBER(123);
	if ((frame[4].i) < (15)) goto label_16;
	}
	{
	LINE_NUMBER(124);
	frame[11].i = ((frame[11].i) | (15));
	LINE_NUMBER(125);
	jint temp0 = (jint)SM_net_jpountz_lz4_LZ4SafeUtils_writeLen_int_Array1_byte_int_R_int(ctx, ((frame[4].i) - (15)), (frame[5].o), (frame[6].i));
	frame[6].i = temp0;
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(127);
	frame[11].i = ((frame[11].i) | (frame[4].i));
	}
label_19:;
	{
	LINE_NUMBER(130);
	ARRAY_ACCESS(jbyte, (frame[5].o), (frame[10].i)) = (jbyte((frame[11].i)));
	LINE_NUMBER(132);
	if ((clinit_net_jpountz_lz4_LZ4SafeUtils(ctx), (jint)SF_net_jpountz_lz4_LZ4SafeUtils_$assertionsDisabled) != 0) goto label_21;
	}
	{
	if ((frame[6].i) == (frame[9].i)) goto label_21;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[6].i);
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4SafeUtils_lastLiterals_Array1_byte_int_int_Array1_byte_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:lastLiterals", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(137);
	frame[6].i = (frame[2].i);
	LINE_NUMBER(139);
	jint temp0 = (frame[5].i) - (frame[4].i);
	jint temp1 = jint(1);
	jint temp2 = (jint)SM_net_jpountz_lz4_LZ4Utils_lengthOfEncodedInteger_int_R_int(ctx, (frame[6].i));
	jint temp3 = (jint)SM_net_jpountz_lz4_LZ4Utils_notEnoughSpace_int_int_R_boolean(ctx, temp0, ((temp1 + temp2) + (frame[6].i)));
	if (temp3 == 0) goto label_2;
	}
	{
	LINE_NUMBER(140);
	clinit_net_jpountz_lz4_LZ4Exception(ctx);
	sp[0].o = gcAlloc(ctx, &class_net_jpountz_lz4_LZ4Exception);
	init_net_jpountz_lz4_LZ4Exception(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(143);
	if ((frame[6].i) < (15)) goto label_4;
	}
	{
	LINE_NUMBER(144);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (-16);
	LINE_NUMBER(145);
	jint temp1 = (jint)SM_net_jpountz_lz4_LZ4SafeUtils_writeLen_int_Array1_byte_int_R_int(ctx, ((frame[6].i) - (15)), (frame[3].o), (frame[4].i));
	frame[4].i = temp1;
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(147);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(((frame[6].i) << (jint(4)))));
	}
label_7:;
	{
	LINE_NUMBER(150);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[3].o), (frame[4].i), (frame[6].i));
	LINE_NUMBER(151);
	frame[4].i = ((frame[4].i) + (frame[6].i));
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jint SM_net_jpountz_lz4_LZ4SafeUtils_writeLen_int_Array1_byte_int_R_int(jcontext ctx, jint param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:writeLen", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
label_0:;
	{
	LINE_NUMBER(157);
	if ((frame[0].i) < (255)) goto label_1;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jint(-1));
	LINE_NUMBER(159);
	INST_IINC(0, -255);
	goto label_0;
	}
label_1:;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	INST_IINC(2, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte((frame[0].i)));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void SM_net_jpountz_lz4_LZ4SafeUtils_copyTo_net_jpountz_lz4_LZ4SafeUtils$Match_net_jpountz_lz4_LZ4SafeUtils$Match(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:copyTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(180);
	((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK((frame[1].o)))->F_len = ((jint)((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK((frame[0].o)))->F_len);
	LINE_NUMBER(181);
	((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK((frame[1].o)))->F_start = ((jint)((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK((frame[0].o)))->F_start);
	LINE_NUMBER(182);
	((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK((frame[1].o)))->F_ref = ((jint)((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK((frame[0].o)))->F_ref);
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_net_jpountz_lz4_LZ4SafeUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	{
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_net_jpountz_lz4_LZ4SafeUtils)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_net_jpountz_lz4_LZ4SafeUtils)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	SF_net_jpountz_lz4_LZ4SafeUtils_$assertionsDisabled = sp[0].i;
	sp[0].o = (jobject)createArray(ctx, &class_net_jpountz_lz4_LZ4SafeUtils, (jint(0)));
	clinit_net_jpountz_lz4_LZ4SafeUtils(ctx);
	SF_net_jpountz_lz4_LZ4SafeUtils_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_lz4_LZ4SafeUtils[] {
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
	&class_net_jpountz_lz4_LZ4SafeUtils$Match,
};

static FieldMetadata fields[] {
	{ "$VALUES", getArrayClass(&class_net_jpountz_lz4_LZ4SafeUtils, 1), (intptr_t) &SF_net_jpountz_lz4_LZ4SafeUtils_$VALUES, "[Lnet/jpountz/lz4/LZ4SafeUtils;", 4122 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_net_jpountz_lz4_LZ4SafeUtils_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_values_R_Array1_net_jpountz_lz4_LZ4SafeUtils, 0, "()[Lnet/jpountz/lz4/LZ4SafeUtils;", 9 },
	{ "valueOf", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_valueOf_java_lang_String_R_net_jpountz_lz4_LZ4SafeUtils, 0, "(Ljava/lang/String;)Lnet/jpountz/lz4/LZ4SafeUtils;", 9 },
	{ "<init>", (intptr_t) init_net_jpountz_lz4_LZ4SafeUtils_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "hash", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_hash_Array1_byte_int_R_int, 0, "([BI)I", 8 },
	{ "hash64k", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_hash64k_Array1_byte_int_R_int, 0, "([BI)I", 8 },
	{ "readIntEquals", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_readIntEquals_Array1_byte_int_int_R_boolean, 0, "([BII)Z", 8 },
	{ "safeIncrementalCopy", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_safeIncrementalCopy_Array1_byte_int_int_int, 0, "([BIII)V", 8 },
	{ "wildIncrementalCopy", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_wildIncrementalCopy_Array1_byte_int_int_int, 0, "([BIII)V", 8 },
	{ "copy8Bytes", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_copy8Bytes_Array1_byte_int_Array1_byte_int, 0, "([BI[BI)V", 8 },
	{ "commonBytes", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_commonBytes_Array1_byte_int_int_int_R_int, 0, "([BIII)I", 8 },
	{ "commonBytesBackward", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_commonBytesBackward_Array1_byte_int_int_int_int_R_int, 0, "([BIIII)I", 8 },
	{ "safeArraycopy", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_safeArraycopy_Array1_byte_int_Array1_byte_int_int, 0, "([BI[BII)V", 8 },
	{ "wildArraycopy", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_wildArraycopy_Array1_byte_int_Array1_byte_int_int, 0, "([BI[BII)V", 8 },
	{ "encodeSequence", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_encodeSequence_Array1_byte_int_int_int_int_Array1_byte_int_int_R_int, 0, "([BIIII[BII)I", 8 },
	{ "lastLiterals", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_lastLiterals_Array1_byte_int_int_Array1_byte_int_int_R_int, 0, "([BII[BII)I", 8 },
	{ "writeLen", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_writeLen_int_Array1_byte_int_R_int, 0, "(I[BI)I", 8 },
	{ "copyTo", (intptr_t) SM_net_jpountz_lz4_LZ4SafeUtils_copyTo_net_jpountz_lz4_LZ4SafeUtils$Match_net_jpountz_lz4_LZ4SafeUtils$Match, 0, "(Lnet/jpountz/lz4/LZ4SafeUtils$Match;Lnet/jpountz/lz4/LZ4SafeUtils$Match;)V", 8 },
	{ "<clinit>", (intptr_t) clinit_net_jpountz_lz4_LZ4SafeUtils, 0, "()V", 8 },
};

Class class_net_jpountz_lz4_LZ4SafeUtils{
		.nativeName = (intptr_t) "net/jpountz/lz4/LZ4SafeUtils",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(net_jpountz_lz4_LZ4SafeUtils),
		.classVtable = (intptr_t) vtable_net_jpountz_lz4_LZ4SafeUtils,
		.staticInitializer = (intptr_t) clinit_net_jpountz_lz4_LZ4SafeUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_lz4_LZ4SafeUtils,
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
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_lz4_LZ4SafeUtils = registerClass(&class_net_jpountz_lz4_LZ4SafeUtils);

}
