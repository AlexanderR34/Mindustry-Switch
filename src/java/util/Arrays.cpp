#include "java/util/Arrays.h"
#include "java/util/Spliterator.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Spliterator_OfLong.h"
#include "java/lang/Comparable.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/Float.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Arrays_ArrayList.h"
#include "java/lang/String.h"
#include "java/util/Spliterators.h"
#include "java/util/Arrays.h"
#include "java/util/Spliterator_OfDouble.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator_OfInt.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Math.h"
#include "java/lang/IndexOutOfBoundsException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Object.h"
#include "java/lang/ArrayIndexOutOfBoundsException.h"
#include "java/lang/Class.h"
#include "java/lang/NegativeArraySizeException.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"

extern "C" {

jint SF_java_util_Arrays_SIMPLE_LENGTH;

void mark_java_util_Arrays(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Arrays *) object;
}

void clinit_java_util_Arrays(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Arrays_SIMPLE_LENGTH = jint(7);
}

void SM_java_util_Arrays_checkOffsetAndCount_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:checkOffsetAndCount", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(40);
	if (((frame[1].i) | (frame[2].i)) < 0) goto label_1;
	}
	{
	if ((frame[1].i) > (frame[0].i)) goto label_1;
	}
	{
	if (((frame[0].i) - (frame[1].i)) >= (frame[2].i)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(41);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_2:;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_util_Arrays(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(140);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_asList_Array1_java_lang_Object_R_java_util_List(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:asList", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(155);
	clinit_java_util_Arrays$ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Arrays$ArrayList);
	init_java_util_Arrays$ArrayList_Array1_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_byte_byte_R_int(jcontext ctx, jobject param0, jbyte param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_byte_int_int_byte_R_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_char_char_R_int(jcontext ctx, jobject param0, jchar param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(187);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_char_int_int_char_R_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_double_double_R_int(jcontext ctx, jobject param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].d = param1;
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_double_int_int_double_R_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_float_float_R_int(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(217);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_float_int_int_float_R_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_int_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_int_int_int_int_R_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_long_long_R_int(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(247);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_long_int_int_long_R_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_int_int_java_lang_Object_R_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_java_lang_Object_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(293);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_int_int_java_lang_Object_java_util_Comparator_R_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_short_short_R_int(jcontext ctx, jobject param0, jshort param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(308);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_short_int_int_short_R_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_byte_int_int_byte_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jbyte param3) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(334);
	SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(335);
	frame[4].i = (frame[1].i);
	frame[5].i = (jint(-1));
	frame[6].i = ((frame[2].i) - (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(336);
	if ((frame[4].i) > (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(337);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[4].i) + (frame[6].i))) >> (jint(1))));
	LINE_NUMBER(338);
	if ((frame[3].i) <= ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[5].i)))) goto label_8;
	}
	{
	LINE_NUMBER(339);
	frame[4].i = ((frame[5].i) + (jint(1)));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(340);
	if ((frame[3].i) != ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[5].i)))) goto label_10;
	}
	{
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_10:;
	{
	LINE_NUMBER(343);
	frame[6].i = ((frame[5].i) - (jint(1)));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(346);
	if ((frame[5].i) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(347);
	frame[7].i = (frame[2].i);
	LINE_NUMBER(348);
	frame[8].i = (frame[1].i);
	}
label_15:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_16;
	}
	{
	LINE_NUMBER(349);
	if ((frame[3].i) >= ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[8].i)))) goto label_18;
	}
	{
	LINE_NUMBER(350);
	frame[7].i = (frame[8].i);
	}
label_18:;
	{
	LINE_NUMBER(348);
	INST_IINC(8, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return ((-(frame[7].i)) - (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(355);
	jint temp0 = -(frame[5].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[3].i) >= ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[5].i)))) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(2);
label_21:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_char_int_int_char_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jchar param3) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(381);
	SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(382);
	frame[4].i = (frame[1].i);
	frame[5].i = (jint(-1));
	frame[6].i = ((frame[2].i) - (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(383);
	if ((frame[4].i) > (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(384);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[4].i) + (frame[6].i))) >> (jint(1))));
	LINE_NUMBER(385);
	if ((frame[3].i) <= ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i)))) goto label_8;
	}
	{
	LINE_NUMBER(386);
	frame[4].i = ((frame[5].i) + (jint(1)));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(387);
	if ((frame[3].i) != ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i)))) goto label_10;
	}
	{
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_10:;
	{
	LINE_NUMBER(390);
	frame[6].i = ((frame[5].i) - (jint(1)));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(393);
	if ((frame[5].i) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(394);
	frame[7].i = (frame[2].i);
	LINE_NUMBER(395);
	frame[8].i = (frame[1].i);
	}
label_15:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_16;
	}
	{
	LINE_NUMBER(396);
	if ((frame[3].i) >= ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[8].i)))) goto label_18;
	}
	{
	LINE_NUMBER(397);
	frame[7].i = (frame[8].i);
	}
label_18:;
	{
	LINE_NUMBER(395);
	INST_IINC(8, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return ((-(frame[7].i)) - (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(402);
	jint temp0 = -(frame[5].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[3].i) >= ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[5].i)))) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(2);
label_21:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_double_int_int_double_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jdouble param3) {
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].d = param3;
	{
	LINE_NUMBER(428);
	SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(429);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[3].d));
	frame[5].l = temp0;
	LINE_NUMBER(430);
	frame[7].i = (frame[1].i);
	frame[8].i = (jint(-1));
	frame[9].i = ((frame[2].i) - (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(431);
	if ((frame[7].i) > (frame[9].i)) goto label_6;
	}
	{
	LINE_NUMBER(432);
	frame[8].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[7].i) + (frame[9].i))) >> (jint(1))));
	LINE_NUMBER(433);
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_double_double_R_boolean(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (frame[8].i))), (frame[3].d));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(434);
	frame[7].i = ((frame[8].i) + (jint(1)));
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(435);
	jlong temp0 = frame[5].l;
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (frame[8].i))));
	if ((longCompare(temp0, temp1)) != 0) goto label_11;
	}
	{
	LINE_NUMBER(436);
	popStackFrame(ctx);
	return (frame[8].i);
	}
label_11:;
	{
	LINE_NUMBER(438);
	frame[9].i = ((frame[8].i) - (jint(1)));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(441);
	if ((frame[8].i) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(442);
	frame[10].i = (frame[2].i);
	LINE_NUMBER(443);
	frame[11].i = (frame[1].i);
	}
label_16:;
	{
	if ((frame[11].i) >= (frame[2].i)) goto label_17;
	}
	{
	LINE_NUMBER(444);
	if ((doubleCompare((frame[3].d), ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (frame[11].i))), 1)) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(445);
	frame[10].i = (frame[11].i);
	}
label_19:;
	{
	LINE_NUMBER(443);
	INST_IINC(11, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return ((-(frame[10].i)) - (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(450);
	jint temp0 = -(frame[8].i);
	jint temp1 = (jint)SM_java_util_Arrays_lessThan_double_double_R_boolean(ctx, (frame[3].d), ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (frame[8].i))));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(2);
label_22:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_float_int_int_float_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(476);
	SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(477);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[3].f));
	frame[4].i = temp0;
	LINE_NUMBER(478);
	frame[5].i = (frame[1].i);
	frame[6].i = (jint(-1));
	frame[7].i = ((frame[2].i) - (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(479);
	if ((frame[5].i) > (frame[7].i)) goto label_6;
	}
	{
	LINE_NUMBER(480);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[5].i) + (frame[7].i))) >> (jint(1))));
	LINE_NUMBER(481);
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[6].i))), (frame[3].f));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(482);
	frame[5].i = ((frame[6].i) + (jint(1)));
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(483);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[6].i))));
	if (temp0 != temp1) goto label_11;
	}
	{
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_11:;
	{
	LINE_NUMBER(486);
	frame[7].i = ((frame[6].i) - (jint(1)));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(489);
	if ((frame[6].i) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(490);
	frame[8].i = (frame[2].i);
	LINE_NUMBER(491);
	frame[9].i = (frame[1].i);
	}
label_16:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_17;
	}
	{
	LINE_NUMBER(492);
	if ((floatCompare((frame[3].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[9].i))), 1)) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(493);
	frame[8].i = (frame[9].i);
	}
label_19:;
	{
	LINE_NUMBER(491);
	INST_IINC(9, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return ((-(frame[8].i)) - (jint(1)));
	}
label_13:;
	{
	LINE_NUMBER(498);
	jint temp0 = -(frame[6].i);
	jint temp1 = (jint)SM_java_util_Arrays_lessThan_float_float_R_boolean(ctx, (frame[3].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[6].i))));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(2);
label_22:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(524);
	SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(525);
	frame[4].i = (frame[1].i);
	frame[5].i = (jint(-1));
	frame[6].i = ((frame[2].i) - (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(526);
	if ((frame[4].i) > (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(527);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[4].i) + (frame[6].i))) >> (jint(1))));
	LINE_NUMBER(528);
	if ((frame[3].i) <= ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[5].i)))) goto label_8;
	}
	{
	LINE_NUMBER(529);
	frame[4].i = ((frame[5].i) + (jint(1)));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(530);
	if ((frame[3].i) != ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[5].i)))) goto label_10;
	}
	{
	LINE_NUMBER(531);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_10:;
	{
	LINE_NUMBER(533);
	frame[6].i = ((frame[5].i) - (jint(1)));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(536);
	if ((frame[5].i) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(537);
	frame[7].i = (frame[2].i);
	LINE_NUMBER(538);
	frame[8].i = (frame[1].i);
	}
label_15:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_16;
	}
	{
	LINE_NUMBER(539);
	if ((frame[3].i) >= ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[8].i)))) goto label_18;
	}
	{
	LINE_NUMBER(540);
	frame[7].i = (frame[8].i);
	}
label_18:;
	{
	LINE_NUMBER(538);
	INST_IINC(8, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return ((-(frame[7].i)) - (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(545);
	jint temp0 = -(frame[5].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[3].i) >= ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[5].i)))) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(2);
label_21:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_long_int_int_long_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jlong param3) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].l = param3;
	{
	LINE_NUMBER(571);
	SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(572);
	frame[5].i = (frame[1].i);
	frame[6].i = (jint(-1));
	frame[7].i = ((frame[2].i) - (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(573);
	if ((frame[5].i) > (frame[7].i)) goto label_5;
	}
	{
	LINE_NUMBER(574);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[5].i) + (frame[7].i))) >> (jint(1))));
	LINE_NUMBER(575);
	if ((longCompare((frame[3].l), ((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (frame[6].i))))) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(576);
	frame[5].i = ((frame[6].i) + (jint(1)));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(577);
	if ((longCompare((frame[3].l), ((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (frame[6].i))))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_10:;
	{
	LINE_NUMBER(580);
	frame[7].i = ((frame[6].i) - (jint(1)));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(583);
	if ((frame[6].i) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(584);
	frame[8].i = (frame[2].i);
	LINE_NUMBER(585);
	frame[9].i = (frame[1].i);
	}
label_15:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_16;
	}
	{
	LINE_NUMBER(586);
	if ((longCompare((frame[3].l), ((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (frame[9].i))))) >= 0) goto label_18;
	}
	{
	LINE_NUMBER(587);
	frame[8].i = (frame[9].i);
	}
label_18:;
	{
	LINE_NUMBER(585);
	INST_IINC(9, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return ((-(frame[8].i)) - (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(592);
	jint temp0 = -(frame[6].i);
	sp[0].i = temp0;
	sp += 1;
	if ((longCompare((frame[3].l), ((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (frame[6].i))))) >= 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(2);
label_21:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_int_int_java_lang_Object_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(622);
	SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(623);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_2;
	}
	{
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_2:;
	{
	LINE_NUMBER(626);
	frame[4].i = (frame[1].i);
	frame[5].i = (jint(-1));
	frame[6].i = ((frame[2].i) - (jint(1)));
	frame[7].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(627);
	if ((frame[4].i) > (frame[6].i)) goto label_8;
	}
	{
	LINE_NUMBER(628);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[4].i) + (frame[6].i))) >> (jint(1))));
	LINE_NUMBER(629);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i)))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i))))), (frame[3].o));
	frame[7].i = temp0;
	if (temp0 >= 0) goto label_11;
	}
	{
	LINE_NUMBER(630);
	frame[4].i = ((frame[5].i) + (jint(1)));
	goto label_7;
	}
label_11:;
	{
	LINE_NUMBER(631);
	if ((frame[7].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(632);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_13:;
	{
	LINE_NUMBER(634);
	frame[6].i = ((frame[5].i) - (jint(1)));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(637);
	if ((frame[5].i) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(638);
	frame[8].i = (frame[2].i);
	LINE_NUMBER(639);
	frame[9].i = (frame[1].i);
	}
label_18:;
	{
	if ((frame[9].i) >= (frame[2].i)) goto label_19;
	}
	{
	LINE_NUMBER(640);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, (frame[3].o)))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, (frame[3].o))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[9].i))));
	if (temp0 >= 0) goto label_21;
	}
	{
	LINE_NUMBER(641);
	frame[8].i = (frame[9].i);
	}
label_21:;
	{
	LINE_NUMBER(639);
	INST_IINC(9, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return ((-(frame[8].i)) - (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(646);
	jint temp0 = -(frame[5].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[7].i) < 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(2);
label_24:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_int_int_java_lang_Object_java_util_Comparator_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jobject param4) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(679);
	SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(680);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(681);
	jint temp0 = (jint)SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_int_int_java_lang_Object_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(684);
	frame[5].i = (frame[1].i);
	frame[6].i = (jint(-1));
	frame[7].i = ((frame[2].i) - (jint(1)));
	frame[8].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(685);
	if ((frame[5].i) > (frame[7].i)) goto label_8;
	}
	{
	LINE_NUMBER(686);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[5].i) + (frame[7].i))) >> (jint(1))));
	LINE_NUMBER(687);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i))), (frame[3].o));
	frame[8].i = temp0;
	if (temp0 >= 0) goto label_11;
	}
	{
	LINE_NUMBER(688);
	frame[5].i = ((frame[6].i) + (jint(1)));
	goto label_7;
	}
label_11:;
	{
	LINE_NUMBER(689);
	if ((frame[8].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_13:;
	{
	LINE_NUMBER(692);
	frame[7].i = ((frame[6].i) - (jint(1)));
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(695);
	if ((frame[6].i) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(696);
	frame[9].i = (frame[2].i);
	LINE_NUMBER(697);
	frame[10].i = (frame[1].i);
	}
label_18:;
	{
	if ((frame[10].i) >= (frame[2].i)) goto label_19;
	}
	{
	LINE_NUMBER(698);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[3].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[10].i))));
	if (temp0 >= 0) goto label_21;
	}
	{
	LINE_NUMBER(699);
	frame[9].i = (frame[10].i);
	}
label_21:;
	{
	LINE_NUMBER(697);
	INST_IINC(10, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(702);
	popStackFrame(ctx);
	return ((-(frame[9].i)) - (jint(1)));
	}
label_15:;
	{
	LINE_NUMBER(704);
	jint temp0 = -(frame[6].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[8].i) < 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(2);
label_24:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_binarySearch_Array1_short_int_int_short_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jshort param3) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:binarySearch", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(730);
	SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(731);
	frame[4].i = (frame[1].i);
	frame[5].i = (jint(-1));
	frame[6].i = ((frame[2].i) - (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(732);
	if ((frame[4].i) > (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(733);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[4].i) + (frame[6].i))) >> (jint(1))));
	LINE_NUMBER(734);
	if ((frame[3].i) <= ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (frame[5].i)))) goto label_8;
	}
	{
	LINE_NUMBER(735);
	frame[4].i = ((frame[5].i) + (jint(1)));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(736);
	if ((frame[3].i) != ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (frame[5].i)))) goto label_10;
	}
	{
	LINE_NUMBER(737);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_10:;
	{
	LINE_NUMBER(739);
	frame[6].i = ((frame[5].i) - (jint(1)));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(742);
	if ((frame[5].i) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(743);
	frame[7].i = (frame[2].i);
	LINE_NUMBER(744);
	frame[8].i = (frame[1].i);
	}
label_15:;
	{
	if ((frame[8].i) >= (frame[2].i)) goto label_16;
	}
	{
	LINE_NUMBER(745);
	if ((frame[3].i) >= ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (frame[8].i)))) goto label_18;
	}
	{
	LINE_NUMBER(746);
	frame[7].i = (frame[8].i);
	}
label_18:;
	{
	LINE_NUMBER(744);
	INST_IINC(8, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(749);
	popStackFrame(ctx);
	return ((-(frame[7].i)) - (jint(1)));
	}
label_12:;
	{
	LINE_NUMBER(751);
	jint temp0 = -(frame[5].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[3].i) >= ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (frame[5].i)))) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(2);
label_21:;
	INST_ISUB();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:checkIndexForBinarySearch", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(765);
	if ((frame[1].i) <= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(766);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(768);
	if ((frame[0].i) < (frame[2].i)) goto label_3;
	}
	{
	if ((jint(0)) <= (frame[1].i)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(769);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(771);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_byte_byte(jcontext ctx, jobject param0, jbyte param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(781);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(782);
	ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i)) = (frame[1].i);
	LINE_NUMBER(781);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(784);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_byte_int_int_byte(jcontext ctx, jobject param0, jint param1, jint param2, jbyte param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(803);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(804);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(805);
	ARRAY_ACCESS(jbyte, (frame[0].o), (frame[4].i)) = (frame[3].i);
	LINE_NUMBER(804);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(807);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_short_short(jcontext ctx, jobject param0, jshort param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(818);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(819);
	ARRAY_ACCESS(jshort, (frame[0].o), (frame[2].i)) = (frame[1].i);
	LINE_NUMBER(818);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(821);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_short_int_int_short(jcontext ctx, jobject param0, jint param1, jint param2, jshort param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(840);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(841);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(842);
	ARRAY_ACCESS(jshort, (frame[0].o), (frame[4].i)) = (frame[3].i);
	LINE_NUMBER(841);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(844);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_char_char(jcontext ctx, jobject param0, jchar param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(855);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(856);
	ARRAY_ACCESS(jchar, (frame[0].o), (frame[2].i)) = (frame[1].i);
	LINE_NUMBER(855);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(858);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_char_int_int_char(jcontext ctx, jobject param0, jint param1, jint param2, jchar param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(877);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(878);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(879);
	ARRAY_ACCESS(jchar, (frame[0].o), (frame[4].i)) = (frame[3].i);
	LINE_NUMBER(878);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(881);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_int_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(892);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(893);
	ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i)) = (frame[1].i);
	LINE_NUMBER(892);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(895);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(914);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(915);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(916);
	ARRAY_ACCESS(jint, (frame[0].o), (frame[4].i)) = (frame[3].i);
	LINE_NUMBER(915);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(918);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_long_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(929);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(930);
	ARRAY_ACCESS(jlong, (frame[0].o), (frame[3].i)) = (frame[1].l);
	LINE_NUMBER(929);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(932);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_long_int_int_long(jcontext ctx, jobject param0, jint param1, jint param2, jlong param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].l = param3;
	{
	LINE_NUMBER(951);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(952);
	frame[5].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(953);
	ARRAY_ACCESS(jlong, (frame[0].o), (frame[5].i)) = (frame[3].l);
	LINE_NUMBER(952);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(955);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_float_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(966);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(967);
	ARRAY_ACCESS(jfloat, (frame[0].o), (frame[2].i)) = (frame[1].f);
	LINE_NUMBER(966);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(969);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_float_int_int_float(jcontext ctx, jobject param0, jint param1, jint param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(988);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(989);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(990);
	ARRAY_ACCESS(jfloat, (frame[0].o), (frame[4].i)) = (frame[3].f);
	LINE_NUMBER(989);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(992);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_double_double(jcontext ctx, jobject param0, jdouble param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].d = param1;
	{
	LINE_NUMBER(1003);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(1004);
	ARRAY_ACCESS(jdouble, (frame[0].o), (frame[3].i)) = (frame[1].d);
	LINE_NUMBER(1003);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1006);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_double_int_int_double(jcontext ctx, jobject param0, jint param1, jint param2, jdouble param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].d = param3;
	{
	LINE_NUMBER(1025);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(1026);
	frame[5].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(1027);
	ARRAY_ACCESS(jdouble, (frame[0].o), (frame[5].i)) = (frame[3].d);
	LINE_NUMBER(1026);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1029);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_boolean_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1040);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(1041);
	ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i)) = (frame[1].i);
	LINE_NUMBER(1040);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1043);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_boolean_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1062);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(1063);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(1064);
	ARRAY_ACCESS(jbyte, (frame[0].o), (frame[4].i)) = (frame[3].i);
	LINE_NUMBER(1063);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1066);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1077);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(1078);
	ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)) = (frame[1].o);
	LINE_NUMBER(1077);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1080);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:fill", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1099);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(1100);
	frame[4].i = (frame[1].i);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(1101);
	ARRAY_ACCESS(jobject, (frame[0].o), (frame[4].i)) = (frame[3].o);
	LINE_NUMBER(1100);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_hashCode_Array1_boolean_R_int(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1122);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1123);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1125);
	frame[1].i = (jint(1));
	LINE_NUMBER(1126);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1128);
	jint temp0 = (31) * (frame[1].i);
	sp[0].i = temp0;
	sp += 1;
	if ((frame[5].i) == 0) goto label_7;
	}
	INST_SIPUSH(1231);
	goto label_8;
label_7:;
	INST_SIPUSH(1237);
label_8:;
	{
	sp -= 2;
	frame[1].i = (sp[0].i + sp[1].i);
	LINE_NUMBER(1126);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1130);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_hashCode_Array1_int_R_int(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1150);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1151);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1153);
	frame[1].i = (jint(1));
	LINE_NUMBER(1154);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1156);
	frame[1].i = (((31) * (frame[1].i)) + (frame[5].i));
	LINE_NUMBER(1154);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1158);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_hashCode_Array1_short_R_int(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1178);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1179);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1181);
	frame[1].i = (jint(1));
	LINE_NUMBER(1182);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1184);
	frame[1].i = (((31) * (frame[1].i)) + (frame[5].i));
	LINE_NUMBER(1182);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1186);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_hashCode_Array1_char_R_int(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1206);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1207);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1209);
	frame[1].i = (jint(1));
	LINE_NUMBER(1210);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1212);
	frame[1].i = (((31) * (frame[1].i)) + (frame[5].i));
	LINE_NUMBER(1210);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1214);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_hashCode_Array1_byte_R_int(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1234);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1235);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1237);
	frame[1].i = (jint(1));
	LINE_NUMBER(1238);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1240);
	frame[1].i = (((31) * (frame[1].i)) + (frame[5].i));
	LINE_NUMBER(1238);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1242);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_hashCode_Array1_long_R_int(jcontext ctx, jobject param0) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:hashCode", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1262);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1263);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1265);
	frame[1].i = (jint(1));
	LINE_NUMBER(1266);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1271);
	frame[1].i = (((31) * (frame[1].i)) + (jint(((frame[5].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[5].l)) >> (32)))))));
	LINE_NUMBER(1266);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1274);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_hashCode_Array1_float_R_int(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:hashCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1294);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1295);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1297);
	frame[1].i = (jint(1));
	LINE_NUMBER(1298);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1303);
	jint temp0 = (31) * (frame[1].i);
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[5].f));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(1298);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1305);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_hashCode_Array1_double_R_int(jcontext ctx, jobject param0) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:hashCode", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1325);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1326);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1328);
	frame[1].i = (jint(1));
	LINE_NUMBER(1330);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1331);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[5].d));
	frame[7].l = temp0;
	LINE_NUMBER(1336);
	frame[1].i = (((31) * (frame[1].i)) + (jint(((frame[7].l) ^ (bit_cast<jlong>(bit_cast<uint64_t>((frame[7].l)) >> (32)))))));
	LINE_NUMBER(1330);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1338);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:hashCode", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1362);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1363);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1365);
	frame[1].i = (jint(1));
	LINE_NUMBER(1366);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1369);
	if ((frame[5].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1370);
	frame[6].i = (jint(0));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(1372);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[5].o));
	frame[6].i = temp0;
	}
label_10:;
	{
	LINE_NUMBER(1374);
	frame[1].i = (((31) * (frame[1].i)) + (frame[6].i));
	LINE_NUMBER(1366);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1376);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_deepHashCode_Array1_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:deepHashCode", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1407);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1408);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1410);
	frame[1].i = (jint(1));
	LINE_NUMBER(1411);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_5;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1412);
	jint temp0 = (jint)SM_java_util_Arrays_deepHashCodeElement_java_lang_Object_R_int(ctx, (frame[5].o));
	frame[6].i = temp0;
	LINE_NUMBER(1413);
	frame[1].i = (((31) * (frame[1].i)) + (frame[6].i));
	LINE_NUMBER(1411);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1415);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_deepHashCodeElement_java_lang_Object_R_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:deepHashCodeElement", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1420);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1421);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1423);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_boolean, 1))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1424);
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_boolean_R_int(ctx, (checkCast(ctx, getArrayClass(&class_boolean, 1), (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(1425);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_byte, 1))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1426);
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_byte_R_int(ctx, (checkCast(ctx, getArrayClass(&class_byte, 1), (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_5:;
	{
	LINE_NUMBER(1427);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_short, 1))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1428);
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_short_R_int(ctx, (checkCast(ctx, getArrayClass(&class_short, 1), (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(1429);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_char, 1))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1430);
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_char_R_int(ctx, (checkCast(ctx, getArrayClass(&class_char, 1), (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_9:;
	{
	LINE_NUMBER(1431);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_int, 1))) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1432);
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_int_R_int(ctx, (checkCast(ctx, getArrayClass(&class_int, 1), (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_11:;
	{
	LINE_NUMBER(1433);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_long, 1))) == 0) goto label_13;
	}
	{
	LINE_NUMBER(1434);
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_long_R_int(ctx, (checkCast(ctx, getArrayClass(&class_long, 1), (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_13:;
	{
	LINE_NUMBER(1435);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_float, 1))) == 0) goto label_15;
	}
	{
	LINE_NUMBER(1436);
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_float_R_int(ctx, (checkCast(ctx, getArrayClass(&class_float, 1), (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_15:;
	{
	LINE_NUMBER(1437);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_double, 1))) == 0) goto label_17;
	}
	{
	LINE_NUMBER(1438);
	jint temp0 = (jint)SM_java_util_Arrays_hashCode_Array1_double_R_int(ctx, (checkCast(ctx, getArrayClass(&class_double, 1), (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_17:;
	{
	LINE_NUMBER(1439);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_java_lang_Object, 1))) == 0) goto label_19;
	}
	{
	LINE_NUMBER(1440);
	jint temp0 = (jint)SM_java_util_Arrays_deepHashCode_Array1_java_lang_Object_R_int(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_19:;
	{
	LINE_NUMBER(1442);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_equals_Array1_byte_Array1_byte_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1457);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1458);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1460);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1461);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1463);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1464);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i))) == ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)))) goto label_8;
	}
	{
	LINE_NUMBER(1465);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1463);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1468);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_equals_Array1_short_Array1_short_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1483);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1484);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1486);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1487);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1489);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1490);
	if (((jint)ARRAY_ACCESS(jshort, (frame[0].o), (frame[2].i))) == ((jint)ARRAY_ACCESS(jshort, (frame[1].o), (frame[2].i)))) goto label_8;
	}
	{
	LINE_NUMBER(1491);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1489);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1494);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_equals_Array1_char_Array1_char_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1509);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1510);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1512);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1513);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1515);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1516);
	if (((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[2].i))) == ((jint)ARRAY_ACCESS(jchar, (frame[1].o), (frame[2].i)))) goto label_8;
	}
	{
	LINE_NUMBER(1517);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1515);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1520);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_equals_Array1_int_Array1_int_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1535);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1536);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1538);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1539);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1541);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1542);
	if (((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i))) == ((jint)ARRAY_ACCESS(jint, (frame[1].o), (frame[2].i)))) goto label_8;
	}
	{
	LINE_NUMBER(1543);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1541);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1546);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_equals_Array1_long_Array1_long_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:equals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1561);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1562);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1564);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1565);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1567);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1568);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (frame[2].i))), ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i))))) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1569);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1567);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1572);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_equals_Array1_float_Array1_float_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1589);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1590);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1592);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1593);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1595);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1596);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[2].i))));
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[1].o), (frame[2].i));
	LINE_NUMBER(1597);
	jint temp2 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, temp1);
	if (temp0 == temp2) goto label_9;
	}
	{
	LINE_NUMBER(1598);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(1595);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1601);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_equals_Array1_double_Array1_double_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:equals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1618);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1619);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1621);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1622);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1624);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1625);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (frame[2].i))));
	jdouble temp1 = (jdouble)ARRAY_ACCESS(jdouble, (frame[1].o), (frame[2].i));
	LINE_NUMBER(1626);
	jlong temp2 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, temp1);
	if ((longCompare(temp0, temp2)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1627);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(1624);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1630);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_equals_Array1_boolean_Array1_boolean_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1645);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1646);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1648);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1649);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1651);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1652);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i))) == ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[2].i)))) goto label_8;
	}
	{
	LINE_NUMBER(1653);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(1651);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1656);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:equals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1671);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1672);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1674);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1675);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1677);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1678);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(1679);
	if ((frame[3].o) != nullptr) goto label_10;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_11;
	goto label_12;
label_10:;
	{
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[4].o));
	if (temp0 != 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(1680);
	popStackFrame(ctx);
	return (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(1677);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1683);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_deepEquals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:deepEquals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1723);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1724);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1726);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) == (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1727);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1729);
	frame[2].i = (jint(0));
	}
label_5:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_6;
	}
	{
	LINE_NUMBER(1730);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(1732);
	jint temp0 = (jint)SM_java_util_Arrays_deepEqualsElements_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[3].o), (frame[4].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(1733);
	popStackFrame(ctx);
	return (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(1729);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1736);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_deepEqualsElements_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:deepEqualsElements", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1742);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(1743);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(1746);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(1747);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1749);
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_isSame_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:isSame", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(1754);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1755);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(1757);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1758);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(1760);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[4].l = temp0;
	LINE_NUMBER(1761);
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[2].d));
	frame[6].l = temp1;
	LINE_NUMBER(1762);
	if ((longCompare((frame[4].l), (frame[6].l))) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_lessThan_double_double_R_boolean(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:lessThan", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(1773);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1774);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1775);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1776);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(1779);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) != 0) goto label_5;
	}
	{
	if ((doubleCompare((frame[0].d), (frame[2].d), -1)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1780);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[4].l = temp0;
	LINE_NUMBER(1781);
	jlong temp1 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[2].d));
	frame[6].l = temp1;
	LINE_NUMBER(1782);
	jlong temp2 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (jdouble(-0,000000e+00)));
	frame[8].l = temp2;
	LINE_NUMBER(1783);
	if ((longCompare((frame[4].l), (frame[6].l))) == 0) goto label_10;
	}
	{
	if ((longCompare((frame[4].l), (frame[8].l))) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(1789);
	if ((doubleCompare((frame[0].d), (frame[2].d), 1)) >= 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_isSame_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:isSame", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(1794);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[0].f));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1795);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(1797);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[1].f));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1798);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(1800);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[0].f));
	frame[2].l = (jlong(temp0));
	LINE_NUMBER(1801);
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[1].f));
	frame[4].l = (jlong(temp1));
	LINE_NUMBER(1802);
	if ((longCompare((frame[2].l), (frame[4].l))) != 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_lessThan_float_float_R_boolean(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:lessThan", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(1812);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[0].f));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1813);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1814);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[1].f));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1815);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(1818);
	if ((doubleCompare((jdouble((frame[0].f))), (jdouble(0)), -1)) != 0) goto label_5;
	}
	{
	if ((floatCompare((frame[0].f), (frame[1].f), -1)) != 0) goto label_5;
	}
	{
	LINE_NUMBER(1819);
	jint temp0 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[0].f));
	frame[2].l = (jlong(temp0));
	LINE_NUMBER(1820);
	jint temp1 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (frame[1].f));
	frame[4].l = (jlong(temp1));
	LINE_NUMBER(1821);
	jint temp2 = (jint)SM_java_lang_Float_floatToIntBits_float_R_int(ctx, (jfloat(-0,000000e+00f)));
	frame[6].l = (jlong(temp2));
	LINE_NUMBER(1822);
	if ((longCompare((frame[2].l), (frame[4].l))) == 0) goto label_10;
	}
	{
	if ((longCompare((frame[2].l), (frame[6].l))) != 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(1825);
	if ((floatCompare((frame[0].f), (frame[1].f), 1)) >= 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_med3_Array1_byte_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:med3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1829);
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[1].i)));
	frame[5].i = ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i)));
	frame[6].i = ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(1830);
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	INST_ILOAD(2);
	goto label_6;
label_5:;
	{
	if ((frame[4].i) >= (frame[6].i)) goto label_7;
	}
	INST_ILOAD(3);
	goto label_6;
label_7:;
	INST_ILOAD(1);
	goto label_6;
label_4:;
	{
	if ((frame[5].i) <= (frame[6].i)) goto label_8;
	}
	INST_ILOAD(2);
	goto label_6;
label_8:;
	{
	if ((frame[4].i) <= (frame[6].i)) goto label_9;
	}
	INST_ILOAD(3);
	goto label_6;
label_9:;
	LINE_NUMBER(1831);
	INST_ILOAD(1);
label_6:;
	LINE_NUMBER(1830);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_med3_Array1_char_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:med3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1835);
	frame[4].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[1].i)));
	frame[5].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[2].i)));
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(1836);
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	INST_ILOAD(2);
	goto label_6;
label_5:;
	{
	if ((frame[4].i) >= (frame[6].i)) goto label_7;
	}
	INST_ILOAD(3);
	goto label_6;
label_7:;
	INST_ILOAD(1);
	goto label_6;
label_4:;
	{
	if ((frame[5].i) <= (frame[6].i)) goto label_8;
	}
	INST_ILOAD(2);
	goto label_6;
label_8:;
	{
	if ((frame[4].i) <= (frame[6].i)) goto label_9;
	}
	INST_ILOAD(3);
	goto label_6;
label_9:;
	LINE_NUMBER(1837);
	INST_ILOAD(1);
label_6:;
	LINE_NUMBER(1836);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_med3_Array1_double_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:med3", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1841);
	frame[4].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (frame[1].i)));
	frame[6].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (frame[2].i)));
	frame[8].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(1842);
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_double_double_R_boolean(ctx, (frame[4].d), (frame[6].d));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_double_double_R_boolean(ctx, (frame[6].d), (frame[8].d));
	if (temp0 == 0) goto label_5;
	}
	INST_ILOAD(2);
	goto label_6;
label_5:;
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_double_double_R_boolean(ctx, (frame[4].d), (frame[8].d));
	if (temp0 == 0) goto label_7;
	}
	INST_ILOAD(3);
	goto label_6;
label_7:;
	INST_ILOAD(1);
	goto label_6;
label_4:;
	{
	LINE_NUMBER(1843);
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_double_double_R_boolean(ctx, (frame[8].d), (frame[6].d));
	if (temp0 == 0) goto label_8;
	}
	INST_ILOAD(2);
	goto label_6;
label_8:;
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_double_double_R_boolean(ctx, (frame[8].d), (frame[4].d));
	if (temp0 == 0) goto label_9;
	}
	INST_ILOAD(3);
	goto label_6;
label_9:;
	INST_ILOAD(1);
label_6:;
	LINE_NUMBER(1842);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_med3_Array1_float_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:med3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1847);
	frame[4].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[1].i)));
	frame[5].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[2].i)));
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(1848);
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_float_float_R_boolean(ctx, (frame[4].f), (frame[5].f));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_float_float_R_boolean(ctx, (frame[5].f), (frame[6].f));
	if (temp0 == 0) goto label_5;
	}
	INST_ILOAD(2);
	goto label_6;
label_5:;
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_float_float_R_boolean(ctx, (frame[4].f), (frame[6].f));
	if (temp0 == 0) goto label_7;
	}
	INST_ILOAD(3);
	goto label_6;
label_7:;
	INST_ILOAD(1);
	goto label_6;
label_4:;
	{
	LINE_NUMBER(1849);
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_float_float_R_boolean(ctx, (frame[6].f), (frame[5].f));
	if (temp0 == 0) goto label_8;
	}
	INST_ILOAD(2);
	goto label_6;
label_8:;
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_float_float_R_boolean(ctx, (frame[6].f), (frame[4].f));
	if (temp0 == 0) goto label_9;
	}
	INST_ILOAD(3);
	goto label_6;
label_9:;
	INST_ILOAD(1);
label_6:;
	LINE_NUMBER(1848);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_med3_Array1_int_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:med3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1853);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[1].i)));
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i)));
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(1854);
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	INST_ILOAD(2);
	goto label_6;
label_5:;
	{
	if ((frame[4].i) >= (frame[6].i)) goto label_7;
	}
	INST_ILOAD(3);
	goto label_6;
label_7:;
	INST_ILOAD(1);
	goto label_6;
label_4:;
	{
	if ((frame[5].i) <= (frame[6].i)) goto label_8;
	}
	INST_ILOAD(2);
	goto label_6;
label_8:;
	{
	if ((frame[4].i) <= (frame[6].i)) goto label_9;
	}
	INST_ILOAD(3);
	goto label_6;
label_9:;
	LINE_NUMBER(1855);
	INST_ILOAD(1);
label_6:;
	LINE_NUMBER(1854);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_med3_Array1_long_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:med3", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1859);
	frame[4].l = ((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (frame[1].i)));
	frame[6].l = ((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (frame[2].i)));
	frame[8].l = ((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(1860);
	if ((longCompare((frame[4].l), (frame[6].l))) >= 0) goto label_4;
	}
	{
	if ((longCompare((frame[6].l), (frame[8].l))) >= 0) goto label_5;
	}
	INST_ILOAD(2);
	goto label_6;
label_5:;
	{
	if ((longCompare((frame[4].l), (frame[8].l))) >= 0) goto label_7;
	}
	INST_ILOAD(3);
	goto label_6;
label_7:;
	INST_ILOAD(1);
	goto label_6;
label_4:;
	{
	if ((longCompare((frame[6].l), (frame[8].l))) <= 0) goto label_8;
	}
	INST_ILOAD(2);
	goto label_6;
label_8:;
	{
	if ((longCompare((frame[4].l), (frame[8].l))) <= 0) goto label_9;
	}
	INST_ILOAD(3);
	goto label_6;
label_9:;
	LINE_NUMBER(1861);
	INST_ILOAD(1);
label_6:;
	LINE_NUMBER(1860);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_med3_Array1_short_int_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:med3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1865);
	frame[4].i = ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (frame[1].i)));
	frame[5].i = ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (frame[2].i)));
	frame[6].i = ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(1866);
	if ((frame[4].i) >= (frame[5].i)) goto label_4;
	}
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	INST_ILOAD(2);
	goto label_6;
label_5:;
	{
	if ((frame[4].i) >= (frame[6].i)) goto label_7;
	}
	INST_ILOAD(3);
	goto label_6;
label_7:;
	INST_ILOAD(1);
	goto label_6;
label_4:;
	{
	if ((frame[5].i) <= (frame[6].i)) goto label_8;
	}
	INST_ILOAD(2);
	goto label_6;
label_8:;
	{
	if ((frame[4].i) <= (frame[6].i)) goto label_9;
	}
	INST_ILOAD(3);
	goto label_6;
label_9:;
	LINE_NUMBER(1867);
	INST_ILOAD(1);
label_6:;
	LINE_NUMBER(1866);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1877);
	SM_java_util_Arrays_sort_int_int_Array1_byte(ctx, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[0].o));
	LINE_NUMBER(1878);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_byte_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1895);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1896);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1898);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(1899);
	SM_java_util_Arrays_sort_int_int_Array1_byte(ctx, (frame[1].i), (frame[2].i), (frame[0].o));
	LINE_NUMBER(1900);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_checkBounds_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:checkBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1903);
	if ((frame[1].i) <= (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(1905);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" out of: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1907);
	if ((frame[1].i) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(1909);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(1911);
	if ((frame[2].i) <= (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(1913);
	clinit_java_lang_IndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IndexOutOfBoundsException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IndexOutOfBoundsException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(1915);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_int_int_Array1_byte(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1919);
	frame[4].i = ((frame[1].i) - (frame[0].i));
	LINE_NUMBER(1920);
	if ((frame[4].i) >= (7)) goto label_2;
	}
	{
	LINE_NUMBER(1921);
	frame[5].i = ((frame[0].i) + (jint(1)));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(1922);
	frame[6].i = (frame[5].i);
	}
label_7:;
	{
	if ((frame[6].i) <= (frame[0].i)) goto label_8;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[6].i) - (jint(1))))) <= ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[6].i)))) goto label_8;
	}
	{
	LINE_NUMBER(1923);
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(1924);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[6].i)) = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[6].i) - (jint(1)))));
	LINE_NUMBER(1925);
	ARRAY_ACCESS(jbyte, (frame[2].o), ((frame[6].i) - (jint(1)))) = (frame[3].i);
	LINE_NUMBER(1922);
	INST_IINC(6, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1921);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(1928);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1930);
	frame[5].i = (((frame[0].i) + (frame[1].i)) / (jint(2)));
	LINE_NUMBER(1931);
	if ((frame[4].i) <= (7)) goto label_14;
	}
	{
	LINE_NUMBER(1932);
	frame[6].i = (frame[0].i);
	LINE_NUMBER(1933);
	frame[7].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(1934);
	if ((frame[4].i) <= (40)) goto label_18;
	}
	{
	LINE_NUMBER(1935);
	frame[4].i = ((frame[4].i) / (8));
	LINE_NUMBER(1936);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_byte_int_int_int_R_int(ctx, (frame[2].o), (frame[6].i), ((frame[6].i) + (frame[4].i)), ((frame[6].i) + ((jint(2)) * (frame[4].i))));
	frame[6].i = temp0;
	LINE_NUMBER(1938);
	jint temp1 = (jint)SM_java_util_Arrays_med3_Array1_byte_int_int_int_R_int(ctx, (frame[2].o), ((frame[5].i) - (frame[4].i)), (frame[5].i), ((frame[5].i) + (frame[4].i)));
	frame[5].i = temp1;
	LINE_NUMBER(1939);
	jint temp2 = (jint)SM_java_util_Arrays_med3_Array1_byte_int_int_int_R_int(ctx, (frame[2].o), ((frame[7].i) - ((jint(2)) * (frame[4].i))), ((frame[7].i) - (frame[4].i)), (frame[7].i));
	frame[7].i = temp2;
	}
label_18:;
	{
	LINE_NUMBER(1941);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_byte_int_int_int_R_int(ctx, (frame[2].o), (frame[6].i), (frame[5].i), (frame[7].i));
	frame[5].i = temp0;
	}
label_14:;
	{
	LINE_NUMBER(1943);
	frame[6].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(1945);
	jint temp0 = frame[0].i;
	frame[8].i = temp0;
	frame[7].i = temp0;
	LINE_NUMBER(1946);
	jint temp3 = (frame[1].i) - (jint(1));
	frame[10].i = temp3;
	frame[9].i = temp3;
	}
label_27:;
	{
	LINE_NUMBER(1948);
	if ((frame[8].i) > (frame[9].i)) goto label_28;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[8].i))) > (frame[6].i)) goto label_28;
	}
	{
	LINE_NUMBER(1949);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[8].i))) != (frame[6].i)) goto label_30;
	}
	{
	LINE_NUMBER(1950);
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(1951);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(1952);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[8].i)) = (frame[3].i);
	}
label_30:;
	{
	LINE_NUMBER(1954);
	INST_IINC(8, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(1956);
	if ((frame[9].i) < (frame[8].i)) goto label_34;
	}
	{
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[9].i))) < (frame[6].i)) goto label_34;
	}
	{
	LINE_NUMBER(1957);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[9].i))) != (frame[6].i)) goto label_36;
	}
	{
	LINE_NUMBER(1958);
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(1959);
	ARRAY_ACCESS(jbyte, (frame[2].o), (frame[9].i)) = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(1960);
	sp[0].o = frame[2].o;
	jint temp0 = frame[10].i;
	INST_IINC(10, -1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (frame[3].i);
	}
label_36:;
	{
	LINE_NUMBER(1962);
	INST_IINC(9, -1);
	goto label_28;
	}
label_34:;
	{
	LINE_NUMBER(1964);
	if ((frame[8].i) <= (frame[9].i)) goto label_40;
	}
	LINE_NUMBER(1965);
	goto label_42;
label_40:;
	{
	LINE_NUMBER(1967);
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(1968);
	sp[0].o = frame[2].o;
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(1969);
	sp[0].o = frame[2].o;
	jint temp1 = frame[9].i;
	INST_IINC(9, -1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (frame[3].i);
	goto label_27;
	}
label_42:;
	{
	LINE_NUMBER(1971);
	if (((frame[7].i) - (frame[0].i)) >= ((frame[8].i) - (frame[7].i))) goto label_45;
	}
	{
	jint temp0 = (frame[7].i) - (frame[0].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_46;
	}
label_45:;
	{
	jint temp0 = (frame[8].i) - (frame[7].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_46:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1972);
	frame[11].i = (frame[0].i);
	LINE_NUMBER(1973);
	frame[12].i = ((frame[8].i) - (frame[4].i));
	}
label_49:;
	{
	LINE_NUMBER(1974);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_50;
	}
	{
	LINE_NUMBER(1975);
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(1976);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(1977);
	sp[0].o = frame[2].o;
	jint temp1 = frame[12].i;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (frame[3].i);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(1979);
	if (((frame[10].i) - (frame[9].i)) >= (((frame[1].i) - (jint(1))) - (frame[10].i))) goto label_54;
	}
	{
	jint temp0 = (frame[10].i) - (frame[9].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	{
	jint temp0 = ((frame[1].i) - (jint(1))) - (frame[10].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_55:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(1980);
	frame[11].i = (frame[8].i);
	LINE_NUMBER(1981);
	frame[12].i = ((frame[1].i) - (frame[4].i));
	}
label_58:;
	{
	LINE_NUMBER(1982);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_59;
	}
	{
	LINE_NUMBER(1983);
	frame[3].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(1984);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(1985);
	sp[0].o = frame[2].o;
	jint temp1 = frame[12].i;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jbyte, sp[0].o, temp1) = (frame[3].i);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(1987);
	jint temp0 = (frame[8].i) - (frame[7].i);
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_63;
	}
	{
	LINE_NUMBER(1988);
	SM_java_util_Arrays_sort_int_int_Array1_byte(ctx, (frame[0].i), ((frame[0].i) + (frame[4].i)), (frame[2].o));
	}
label_63:;
	{
	LINE_NUMBER(1990);
	jint temp0 = (frame[10].i) - (frame[9].i);
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_65;
	}
	{
	LINE_NUMBER(1991);
	SM_java_util_Arrays_sort_int_int_Array1_byte(ctx, ((frame[1].i) - (frame[4].i)), (frame[1].i), (frame[2].o));
	}
label_65:;
	LINE_NUMBER(1993);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_char(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2002);
	SM_java_util_Arrays_sort_int_int_Array1_char(ctx, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[0].o));
	LINE_NUMBER(2003);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_char_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2020);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2021);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2023);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(2024);
	SM_java_util_Arrays_sort_int_int_Array1_char(ctx, (frame[1].i), (frame[2].i), (frame[0].o));
	LINE_NUMBER(2025);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_int_int_Array1_char(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2029);
	frame[4].i = ((frame[1].i) - (frame[0].i));
	LINE_NUMBER(2030);
	if ((frame[4].i) >= (7)) goto label_2;
	}
	{
	LINE_NUMBER(2031);
	frame[5].i = ((frame[0].i) + (jint(1)));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(2032);
	frame[6].i = (frame[5].i);
	}
label_7:;
	{
	if ((frame[6].i) <= (frame[0].i)) goto label_8;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), ((frame[6].i) - (jint(1))))) <= ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[6].i)))) goto label_8;
	}
	{
	LINE_NUMBER(2033);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(2034);
	ARRAY_ACCESS(jchar, (frame[2].o), (frame[6].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), ((frame[6].i) - (jint(1)))));
	LINE_NUMBER(2035);
	ARRAY_ACCESS(jchar, (frame[2].o), ((frame[6].i) - (jint(1)))) = (frame[3].i);
	LINE_NUMBER(2032);
	INST_IINC(6, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2031);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(2038);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2040);
	frame[5].i = (((frame[0].i) + (frame[1].i)) / (jint(2)));
	LINE_NUMBER(2041);
	if ((frame[4].i) <= (7)) goto label_14;
	}
	{
	LINE_NUMBER(2042);
	frame[6].i = (frame[0].i);
	LINE_NUMBER(2043);
	frame[7].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(2044);
	if ((frame[4].i) <= (40)) goto label_18;
	}
	{
	LINE_NUMBER(2045);
	frame[4].i = ((frame[4].i) / (8));
	LINE_NUMBER(2046);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_char_int_int_int_R_int(ctx, (frame[2].o), (frame[6].i), ((frame[6].i) + (frame[4].i)), ((frame[6].i) + ((jint(2)) * (frame[4].i))));
	frame[6].i = temp0;
	LINE_NUMBER(2048);
	jint temp1 = (jint)SM_java_util_Arrays_med3_Array1_char_int_int_int_R_int(ctx, (frame[2].o), ((frame[5].i) - (frame[4].i)), (frame[5].i), ((frame[5].i) + (frame[4].i)));
	frame[5].i = temp1;
	LINE_NUMBER(2049);
	jint temp2 = (jint)SM_java_util_Arrays_med3_Array1_char_int_int_int_R_int(ctx, (frame[2].o), ((frame[7].i) - ((jint(2)) * (frame[4].i))), ((frame[7].i) - (frame[4].i)), (frame[7].i));
	frame[7].i = temp2;
	}
label_18:;
	{
	LINE_NUMBER(2051);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_char_int_int_int_R_int(ctx, (frame[2].o), (frame[6].i), (frame[5].i), (frame[7].i));
	frame[5].i = temp0;
	}
label_14:;
	{
	LINE_NUMBER(2053);
	frame[6].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(2055);
	jint temp0 = frame[0].i;
	frame[8].i = temp0;
	frame[7].i = temp0;
	LINE_NUMBER(2056);
	jint temp3 = (frame[1].i) - (jint(1));
	frame[10].i = temp3;
	frame[9].i = temp3;
	}
label_27:;
	{
	LINE_NUMBER(2058);
	if ((frame[8].i) > (frame[9].i)) goto label_28;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[8].i))) > (frame[6].i)) goto label_28;
	}
	{
	LINE_NUMBER(2059);
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[8].i))) != (frame[6].i)) goto label_30;
	}
	{
	LINE_NUMBER(2060);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(2061);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(2062);
	ARRAY_ACCESS(jchar, (frame[2].o), (frame[8].i)) = (frame[3].i);
	}
label_30:;
	{
	LINE_NUMBER(2064);
	INST_IINC(8, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(2066);
	if ((frame[9].i) < (frame[8].i)) goto label_34;
	}
	{
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[9].i))) < (frame[6].i)) goto label_34;
	}
	{
	LINE_NUMBER(2067);
	if (((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[9].i))) != (frame[6].i)) goto label_36;
	}
	{
	LINE_NUMBER(2068);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(2069);
	ARRAY_ACCESS(jchar, (frame[2].o), (frame[9].i)) = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(2070);
	sp[0].o = frame[2].o;
	jint temp0 = frame[10].i;
	INST_IINC(10, -1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[3].i);
	}
label_36:;
	{
	LINE_NUMBER(2072);
	INST_IINC(9, -1);
	goto label_28;
	}
label_34:;
	{
	LINE_NUMBER(2074);
	if ((frame[8].i) <= (frame[9].i)) goto label_40;
	}
	LINE_NUMBER(2075);
	goto label_42;
label_40:;
	{
	LINE_NUMBER(2077);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(2078);
	sp[0].o = frame[2].o;
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(2079);
	sp[0].o = frame[2].o;
	jint temp1 = frame[9].i;
	INST_IINC(9, -1);
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = (frame[3].i);
	goto label_27;
	}
label_42:;
	{
	LINE_NUMBER(2081);
	if (((frame[7].i) - (frame[0].i)) >= ((frame[8].i) - (frame[7].i))) goto label_45;
	}
	{
	jint temp0 = (frame[7].i) - (frame[0].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_46;
	}
label_45:;
	{
	jint temp0 = (frame[8].i) - (frame[7].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_46:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2082);
	frame[11].i = (frame[0].i);
	LINE_NUMBER(2083);
	frame[12].i = ((frame[8].i) - (frame[4].i));
	}
label_49:;
	{
	LINE_NUMBER(2084);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_50;
	}
	{
	LINE_NUMBER(2085);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(2086);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(2087);
	sp[0].o = frame[2].o;
	jint temp1 = frame[12].i;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = (frame[3].i);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(2089);
	if (((frame[10].i) - (frame[9].i)) >= (((frame[1].i) - (jint(1))) - (frame[10].i))) goto label_54;
	}
	{
	jint temp0 = (frame[10].i) - (frame[9].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	{
	jint temp0 = ((frame[1].i) - (jint(1))) - (frame[10].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_55:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2090);
	frame[11].i = (frame[8].i);
	LINE_NUMBER(2091);
	frame[12].i = ((frame[1].i) - (frame[4].i));
	}
label_58:;
	{
	LINE_NUMBER(2092);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_59;
	}
	{
	LINE_NUMBER(2093);
	frame[3].i = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(2094);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jchar, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(2095);
	sp[0].o = frame[2].o;
	jint temp1 = frame[12].i;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp1) = (frame[3].i);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(2097);
	jint temp0 = (frame[8].i) - (frame[7].i);
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_63;
	}
	{
	LINE_NUMBER(2098);
	SM_java_util_Arrays_sort_int_int_Array1_char(ctx, (frame[0].i), ((frame[0].i) + (frame[4].i)), (frame[2].o));
	}
label_63:;
	{
	LINE_NUMBER(2100);
	jint temp0 = (frame[10].i) - (frame[9].i);
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_65;
	}
	{
	LINE_NUMBER(2101);
	SM_java_util_Arrays_sort_int_int_Array1_char(ctx, ((frame[1].i) - (frame[4].i)), (frame[1].i), (frame[2].o));
	}
label_65:;
	LINE_NUMBER(2103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_double(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2113);
	SM_java_util_Arrays_sort_int_int_Array1_double(ctx, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[0].o));
	LINE_NUMBER(2114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_double_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2133);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2134);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2136);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(2137);
	SM_java_util_Arrays_sort_int_int_Array1_double(ctx, (frame[1].i), (frame[2].i), (frame[0].o));
	LINE_NUMBER(2138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_int_int_Array1_double(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2142);
	frame[5].i = ((frame[1].i) - (frame[0].i));
	LINE_NUMBER(2143);
	if ((frame[5].i) >= (7)) goto label_2;
	}
	{
	LINE_NUMBER(2144);
	frame[6].i = ((frame[0].i) + (jint(1)));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(2145);
	frame[7].i = (frame[6].i);
	}
label_7:;
	{
	if ((frame[7].i) <= (frame[0].i)) goto label_8;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_double_double_R_boolean(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[7].i))), ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), ((frame[7].i) - (jint(1))))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2146);
	frame[3].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(2147);
	ARRAY_ACCESS(jdouble, (frame[2].o), (frame[7].i)) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), ((frame[7].i) - (jint(1)))));
	LINE_NUMBER(2148);
	ARRAY_ACCESS(jdouble, (frame[2].o), ((frame[7].i) - (jint(1)))) = (frame[3].d);
	LINE_NUMBER(2145);
	INST_IINC(7, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2144);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(2151);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2153);
	frame[6].i = (((frame[0].i) + (frame[1].i)) / (jint(2)));
	LINE_NUMBER(2154);
	if ((frame[5].i) <= (7)) goto label_14;
	}
	{
	LINE_NUMBER(2155);
	frame[7].i = (frame[0].i);
	LINE_NUMBER(2156);
	frame[8].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(2157);
	if ((frame[5].i) <= (40)) goto label_18;
	}
	{
	LINE_NUMBER(2158);
	frame[5].i = ((frame[5].i) / (8));
	LINE_NUMBER(2159);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_double_int_int_int_R_int(ctx, (frame[2].o), (frame[7].i), ((frame[7].i) + (frame[5].i)), ((frame[7].i) + ((jint(2)) * (frame[5].i))));
	frame[7].i = temp0;
	LINE_NUMBER(2161);
	jint temp1 = (jint)SM_java_util_Arrays_med3_Array1_double_int_int_int_R_int(ctx, (frame[2].o), ((frame[6].i) - (frame[5].i)), (frame[6].i), ((frame[6].i) + (frame[5].i)));
	frame[6].i = temp1;
	LINE_NUMBER(2162);
	jint temp2 = (jint)SM_java_util_Arrays_med3_Array1_double_int_int_int_R_int(ctx, (frame[2].o), ((frame[8].i) - ((jint(2)) * (frame[5].i))), ((frame[8].i) - (frame[5].i)), (frame[8].i));
	frame[8].i = temp2;
	}
label_18:;
	{
	LINE_NUMBER(2164);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_double_int_int_int_R_int(ctx, (frame[2].o), (frame[7].i), (frame[6].i), (frame[8].i));
	frame[6].i = temp0;
	}
label_14:;
	{
	LINE_NUMBER(2166);
	frame[7].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(2168);
	jint temp0 = frame[0].i;
	frame[10].i = temp0;
	frame[9].i = temp0;
	LINE_NUMBER(2169);
	jint temp3 = (frame[1].i) - (jint(1));
	frame[12].i = temp3;
	frame[11].i = temp3;
	}
label_27:;
	{
	LINE_NUMBER(2171);
	if ((frame[10].i) > (frame[11].i)) goto label_28;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_double_double_R_boolean(ctx, (frame[7].d), ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[10].i))));
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(2172);
	jint temp0 = (jint)SM_java_util_Arrays_isSame_double_double_R_boolean(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[10].i))), (frame[7].d));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(2173);
	frame[3].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(2174);
	sp[0].o = frame[2].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(2175);
	ARRAY_ACCESS(jdouble, (frame[2].o), (frame[10].i)) = (frame[3].d);
	}
label_30:;
	{
	LINE_NUMBER(2177);
	INST_IINC(10, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(2179);
	if ((frame[11].i) < (frame[10].i)) goto label_34;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_double_double_R_boolean(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[11].i))), (frame[7].d));
	if (temp0 != 0) goto label_34;
	}
	{
	LINE_NUMBER(2180);
	jint temp0 = (jint)SM_java_util_Arrays_isSame_double_double_R_boolean(ctx, ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[11].i))), (frame[7].d));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(2181);
	frame[3].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(2182);
	ARRAY_ACCESS(jdouble, (frame[2].o), (frame[11].i)) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(2183);
	sp[0].o = frame[2].o;
	jint temp0 = frame[12].i;
	INST_IINC(12, -1);
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = (frame[3].d);
	}
label_36:;
	{
	LINE_NUMBER(2185);
	INST_IINC(11, -1);
	goto label_28;
	}
label_34:;
	{
	LINE_NUMBER(2187);
	if ((frame[10].i) <= (frame[11].i)) goto label_40;
	}
	LINE_NUMBER(2188);
	goto label_42;
label_40:;
	{
	LINE_NUMBER(2190);
	frame[3].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(2191);
	sp[0].o = frame[2].o;
	jint temp0 = frame[10].i;
	INST_IINC(10, 1);
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(2192);
	sp[0].o = frame[2].o;
	jint temp1 = frame[11].i;
	INST_IINC(11, -1);
	ARRAY_ACCESS(jdouble, sp[0].o, temp1) = (frame[3].d);
	goto label_27;
	}
label_42:;
	{
	LINE_NUMBER(2194);
	if (((frame[9].i) - (frame[0].i)) >= ((frame[10].i) - (frame[9].i))) goto label_45;
	}
	{
	jint temp0 = (frame[9].i) - (frame[0].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_46;
	}
label_45:;
	{
	jint temp0 = (frame[10].i) - (frame[9].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_46:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(2195);
	frame[13].i = (frame[0].i);
	LINE_NUMBER(2196);
	frame[14].i = ((frame[10].i) - (frame[5].i));
	}
label_49:;
	{
	LINE_NUMBER(2197);
	jint temp0 = frame[5].i;
	INST_IINC(5, -1);
	if (temp0 <= 0) goto label_50;
	}
	{
	LINE_NUMBER(2198);
	frame[3].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[13].i)));
	LINE_NUMBER(2199);
	sp[0].o = frame[2].o;
	jint temp0 = frame[13].i;
	INST_IINC(13, 1);
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[14].i)));
	LINE_NUMBER(2200);
	sp[0].o = frame[2].o;
	jint temp1 = frame[14].i;
	INST_IINC(14, 1);
	ARRAY_ACCESS(jdouble, sp[0].o, temp1) = (frame[3].d);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(2202);
	if (((frame[12].i) - (frame[11].i)) >= (((frame[1].i) - (jint(1))) - (frame[12].i))) goto label_54;
	}
	{
	jint temp0 = (frame[12].i) - (frame[11].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	{
	jint temp0 = ((frame[1].i) - (jint(1))) - (frame[12].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_55:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(2203);
	frame[13].i = (frame[10].i);
	LINE_NUMBER(2204);
	frame[14].i = ((frame[1].i) - (frame[5].i));
	}
label_58:;
	{
	LINE_NUMBER(2205);
	jint temp0 = frame[5].i;
	INST_IINC(5, -1);
	if (temp0 <= 0) goto label_59;
	}
	{
	LINE_NUMBER(2206);
	frame[3].d = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[13].i)));
	LINE_NUMBER(2207);
	sp[0].o = frame[2].o;
	jint temp0 = frame[13].i;
	INST_IINC(13, 1);
	ARRAY_ACCESS(jdouble, sp[0].o, temp0) = ((jdouble)ARRAY_ACCESS(jdouble, (frame[2].o), (frame[14].i)));
	LINE_NUMBER(2208);
	sp[0].o = frame[2].o;
	jint temp1 = frame[14].i;
	INST_IINC(14, 1);
	ARRAY_ACCESS(jdouble, sp[0].o, temp1) = (frame[3].d);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(2210);
	jint temp0 = (frame[10].i) - (frame[9].i);
	frame[5].i = temp0;
	if (temp0 <= 0) goto label_63;
	}
	{
	LINE_NUMBER(2211);
	SM_java_util_Arrays_sort_int_int_Array1_double(ctx, (frame[0].i), ((frame[0].i) + (frame[5].i)), (frame[2].o));
	}
label_63:;
	{
	LINE_NUMBER(2213);
	jint temp0 = (frame[12].i) - (frame[11].i);
	frame[5].i = temp0;
	if (temp0 <= 0) goto label_65;
	}
	{
	LINE_NUMBER(2214);
	SM_java_util_Arrays_sort_int_int_Array1_double(ctx, ((frame[1].i) - (frame[5].i)), (frame[1].i), (frame[2].o));
	}
label_65:;
	LINE_NUMBER(2216);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_float(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2226);
	SM_java_util_Arrays_sort_int_int_Array1_float(ctx, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[0].o));
	LINE_NUMBER(2227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2246);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2247);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2249);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(2250);
	SM_java_util_Arrays_sort_int_int_Array1_float(ctx, (frame[1].i), (frame[2].i), (frame[0].o));
	LINE_NUMBER(2251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_int_int_Array1_float(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2255);
	frame[4].i = ((frame[1].i) - (frame[0].i));
	LINE_NUMBER(2256);
	if ((frame[4].i) >= (7)) goto label_2;
	}
	{
	LINE_NUMBER(2257);
	frame[5].i = ((frame[0].i) + (jint(1)));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(2258);
	frame[6].i = (frame[5].i);
	}
label_7:;
	{
	if ((frame[6].i) <= (frame[0].i)) goto label_8;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[6].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[6].i) - (jint(1))))));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2259);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(2260);
	ARRAY_ACCESS(jfloat, (frame[2].o), (frame[6].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[6].i) - (jint(1)))));
	LINE_NUMBER(2261);
	ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[6].i) - (jint(1)))) = (frame[3].f);
	LINE_NUMBER(2258);
	INST_IINC(6, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2257);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(2264);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2266);
	frame[5].i = (((frame[0].i) + (frame[1].i)) / (jint(2)));
	LINE_NUMBER(2267);
	if ((frame[4].i) <= (7)) goto label_14;
	}
	{
	LINE_NUMBER(2268);
	frame[6].i = (frame[0].i);
	LINE_NUMBER(2269);
	frame[7].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(2270);
	if ((frame[4].i) <= (40)) goto label_18;
	}
	{
	LINE_NUMBER(2271);
	frame[4].i = ((frame[4].i) / (8));
	LINE_NUMBER(2272);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_float_int_int_int_R_int(ctx, (frame[2].o), (frame[6].i), ((frame[6].i) + (frame[4].i)), ((frame[6].i) + ((jint(2)) * (frame[4].i))));
	frame[6].i = temp0;
	LINE_NUMBER(2274);
	jint temp1 = (jint)SM_java_util_Arrays_med3_Array1_float_int_int_int_R_int(ctx, (frame[2].o), ((frame[5].i) - (frame[4].i)), (frame[5].i), ((frame[5].i) + (frame[4].i)));
	frame[5].i = temp1;
	LINE_NUMBER(2275);
	jint temp2 = (jint)SM_java_util_Arrays_med3_Array1_float_int_int_int_R_int(ctx, (frame[2].o), ((frame[7].i) - ((jint(2)) * (frame[4].i))), ((frame[7].i) - (frame[4].i)), (frame[7].i));
	frame[7].i = temp2;
	}
label_18:;
	{
	LINE_NUMBER(2277);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_float_int_int_int_R_int(ctx, (frame[2].o), (frame[6].i), (frame[5].i), (frame[7].i));
	frame[5].i = temp0;
	}
label_14:;
	{
	LINE_NUMBER(2279);
	frame[6].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(2281);
	jint temp0 = frame[0].i;
	frame[8].i = temp0;
	frame[7].i = temp0;
	LINE_NUMBER(2282);
	jint temp3 = (frame[1].i) - (jint(1));
	frame[10].i = temp3;
	frame[9].i = temp3;
	}
label_27:;
	{
	LINE_NUMBER(2284);
	if ((frame[8].i) > (frame[9].i)) goto label_28;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_float_float_R_boolean(ctx, (frame[6].f), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[8].i))));
	if (temp0 != 0) goto label_28;
	}
	{
	LINE_NUMBER(2285);
	jint temp0 = (jint)SM_java_util_Arrays_isSame_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[8].i))), (frame[6].f));
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(2286);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(2287);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(2288);
	ARRAY_ACCESS(jfloat, (frame[2].o), (frame[8].i)) = (frame[3].f);
	}
label_30:;
	{
	LINE_NUMBER(2290);
	INST_IINC(8, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(2292);
	if ((frame[9].i) < (frame[8].i)) goto label_34;
	}
	{
	jint temp0 = (jint)SM_java_util_Arrays_lessThan_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[9].i))), (frame[6].f));
	if (temp0 != 0) goto label_34;
	}
	{
	LINE_NUMBER(2293);
	jint temp0 = (jint)SM_java_util_Arrays_isSame_float_float_R_boolean(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[9].i))), (frame[6].f));
	if (temp0 == 0) goto label_36;
	}
	{
	LINE_NUMBER(2294);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(2295);
	ARRAY_ACCESS(jfloat, (frame[2].o), (frame[9].i)) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(2296);
	sp[0].o = frame[2].o;
	jint temp0 = frame[10].i;
	INST_IINC(10, -1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (frame[3].f);
	}
label_36:;
	{
	LINE_NUMBER(2298);
	INST_IINC(9, -1);
	goto label_28;
	}
label_34:;
	{
	LINE_NUMBER(2300);
	if ((frame[8].i) <= (frame[9].i)) goto label_40;
	}
	LINE_NUMBER(2301);
	goto label_42;
label_40:;
	{
	LINE_NUMBER(2303);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(2304);
	sp[0].o = frame[2].o;
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(2305);
	sp[0].o = frame[2].o;
	jint temp1 = frame[9].i;
	INST_IINC(9, -1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = (frame[3].f);
	goto label_27;
	}
label_42:;
	{
	LINE_NUMBER(2307);
	if (((frame[7].i) - (frame[0].i)) >= ((frame[8].i) - (frame[7].i))) goto label_45;
	}
	{
	jint temp0 = (frame[7].i) - (frame[0].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_46;
	}
label_45:;
	{
	jint temp0 = (frame[8].i) - (frame[7].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_46:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2308);
	frame[11].i = (frame[0].i);
	LINE_NUMBER(2309);
	frame[12].i = ((frame[8].i) - (frame[4].i));
	}
label_49:;
	{
	LINE_NUMBER(2310);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_50;
	}
	{
	LINE_NUMBER(2311);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(2312);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(2313);
	sp[0].o = frame[2].o;
	jint temp1 = frame[12].i;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = (frame[3].f);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(2315);
	if (((frame[10].i) - (frame[9].i)) >= (((frame[1].i) - (jint(1))) - (frame[10].i))) goto label_54;
	}
	{
	jint temp0 = (frame[10].i) - (frame[9].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	{
	jint temp0 = ((frame[1].i) - (jint(1))) - (frame[10].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_55:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2316);
	frame[11].i = (frame[8].i);
	LINE_NUMBER(2317);
	frame[12].i = ((frame[1].i) - (frame[4].i));
	}
label_58:;
	{
	LINE_NUMBER(2318);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_59;
	}
	{
	LINE_NUMBER(2319);
	frame[3].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(2320);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(2321);
	sp[0].o = frame[2].o;
	jint temp1 = frame[12].i;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = (frame[3].f);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(2323);
	jint temp0 = (frame[8].i) - (frame[7].i);
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_63;
	}
	{
	LINE_NUMBER(2324);
	SM_java_util_Arrays_sort_int_int_Array1_float(ctx, (frame[0].i), ((frame[0].i) + (frame[4].i)), (frame[2].o));
	}
label_63:;
	{
	LINE_NUMBER(2326);
	jint temp0 = (frame[10].i) - (frame[9].i);
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_65;
	}
	{
	LINE_NUMBER(2327);
	SM_java_util_Arrays_sort_int_int_Array1_float(ctx, ((frame[1].i) - (frame[4].i)), (frame[1].i), (frame[2].o));
	}
label_65:;
	LINE_NUMBER(2329);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2338);
	SM_java_util_Arrays_sort_int_int_Array1_int(ctx, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[0].o));
	LINE_NUMBER(2339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2356);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2357);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2359);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(2360);
	SM_java_util_Arrays_sort_int_int_Array1_int(ctx, (frame[1].i), (frame[2].i), (frame[0].o));
	LINE_NUMBER(2361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_int_int_Array1_int(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2365);
	frame[4].i = ((frame[1].i) - (frame[0].i));
	LINE_NUMBER(2366);
	if ((frame[4].i) >= (7)) goto label_2;
	}
	{
	LINE_NUMBER(2367);
	frame[5].i = ((frame[0].i) + (jint(1)));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(2368);
	frame[6].i = (frame[5].i);
	}
label_7:;
	{
	if ((frame[6].i) <= (frame[0].i)) goto label_8;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), ((frame[6].i) - (jint(1))))) <= ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[6].i)))) goto label_8;
	}
	{
	LINE_NUMBER(2369);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(2370);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[6].i)) = ((jint)ARRAY_ACCESS(jint, (frame[2].o), ((frame[6].i) - (jint(1)))));
	LINE_NUMBER(2371);
	ARRAY_ACCESS(jint, (frame[2].o), ((frame[6].i) - (jint(1)))) = (frame[3].i);
	LINE_NUMBER(2368);
	INST_IINC(6, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2367);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(2374);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2376);
	frame[5].i = (((frame[0].i) + (frame[1].i)) / (jint(2)));
	LINE_NUMBER(2377);
	if ((frame[4].i) <= (7)) goto label_14;
	}
	{
	LINE_NUMBER(2378);
	frame[6].i = (frame[0].i);
	LINE_NUMBER(2379);
	frame[7].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(2380);
	if ((frame[4].i) <= (40)) goto label_18;
	}
	{
	LINE_NUMBER(2381);
	frame[4].i = ((frame[4].i) / (8));
	LINE_NUMBER(2382);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_int_int_int_int_R_int(ctx, (frame[2].o), (frame[6].i), ((frame[6].i) + (frame[4].i)), ((frame[6].i) + ((jint(2)) * (frame[4].i))));
	frame[6].i = temp0;
	LINE_NUMBER(2384);
	jint temp1 = (jint)SM_java_util_Arrays_med3_Array1_int_int_int_int_R_int(ctx, (frame[2].o), ((frame[5].i) - (frame[4].i)), (frame[5].i), ((frame[5].i) + (frame[4].i)));
	frame[5].i = temp1;
	LINE_NUMBER(2385);
	jint temp2 = (jint)SM_java_util_Arrays_med3_Array1_int_int_int_int_R_int(ctx, (frame[2].o), ((frame[7].i) - ((jint(2)) * (frame[4].i))), ((frame[7].i) - (frame[4].i)), (frame[7].i));
	frame[7].i = temp2;
	}
label_18:;
	{
	LINE_NUMBER(2387);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_int_int_int_int_R_int(ctx, (frame[2].o), (frame[6].i), (frame[5].i), (frame[7].i));
	frame[5].i = temp0;
	}
label_14:;
	{
	LINE_NUMBER(2389);
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(2391);
	jint temp0 = frame[0].i;
	frame[8].i = temp0;
	frame[7].i = temp0;
	LINE_NUMBER(2392);
	jint temp3 = (frame[1].i) - (jint(1));
	frame[10].i = temp3;
	frame[9].i = temp3;
	}
label_27:;
	{
	LINE_NUMBER(2394);
	if ((frame[8].i) > (frame[9].i)) goto label_28;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[8].i))) > (frame[6].i)) goto label_28;
	}
	{
	LINE_NUMBER(2395);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[8].i))) != (frame[6].i)) goto label_30;
	}
	{
	LINE_NUMBER(2396);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(2397);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(2398);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[8].i)) = (frame[3].i);
	}
label_30:;
	{
	LINE_NUMBER(2400);
	INST_IINC(8, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(2402);
	if ((frame[9].i) < (frame[8].i)) goto label_34;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[9].i))) < (frame[6].i)) goto label_34;
	}
	{
	LINE_NUMBER(2403);
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[9].i))) != (frame[6].i)) goto label_36;
	}
	{
	LINE_NUMBER(2404);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(2405);
	ARRAY_ACCESS(jint, (frame[2].o), (frame[9].i)) = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(2406);
	sp[0].o = frame[2].o;
	jint temp0 = frame[10].i;
	INST_IINC(10, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[3].i);
	}
label_36:;
	{
	LINE_NUMBER(2408);
	INST_IINC(9, -1);
	goto label_28;
	}
label_34:;
	{
	LINE_NUMBER(2410);
	if ((frame[8].i) <= (frame[9].i)) goto label_40;
	}
	LINE_NUMBER(2411);
	goto label_42;
label_40:;
	{
	LINE_NUMBER(2413);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(2414);
	sp[0].o = frame[2].o;
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(2415);
	sp[0].o = frame[2].o;
	jint temp1 = frame[9].i;
	INST_IINC(9, -1);
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (frame[3].i);
	goto label_27;
	}
label_42:;
	{
	LINE_NUMBER(2417);
	if (((frame[7].i) - (frame[0].i)) >= ((frame[8].i) - (frame[7].i))) goto label_45;
	}
	{
	jint temp0 = (frame[7].i) - (frame[0].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_46;
	}
label_45:;
	{
	jint temp0 = (frame[8].i) - (frame[7].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_46:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2418);
	frame[11].i = (frame[0].i);
	LINE_NUMBER(2419);
	frame[12].i = ((frame[8].i) - (frame[4].i));
	}
label_49:;
	{
	LINE_NUMBER(2420);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_50;
	}
	{
	LINE_NUMBER(2421);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(2422);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(2423);
	sp[0].o = frame[2].o;
	jint temp1 = frame[12].i;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (frame[3].i);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(2425);
	if (((frame[10].i) - (frame[9].i)) >= (((frame[1].i) - (jint(1))) - (frame[10].i))) goto label_54;
	}
	{
	jint temp0 = (frame[10].i) - (frame[9].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	{
	jint temp0 = ((frame[1].i) - (jint(1))) - (frame[10].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_55:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(2426);
	frame[11].i = (frame[8].i);
	LINE_NUMBER(2427);
	frame[12].i = ((frame[1].i) - (frame[4].i));
	}
label_58:;
	{
	LINE_NUMBER(2428);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_59;
	}
	{
	LINE_NUMBER(2429);
	frame[3].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(2430);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(2431);
	sp[0].o = frame[2].o;
	jint temp1 = frame[12].i;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jint, sp[0].o, temp1) = (frame[3].i);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(2433);
	jint temp0 = (frame[8].i) - (frame[7].i);
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_63;
	}
	{
	LINE_NUMBER(2434);
	SM_java_util_Arrays_sort_int_int_Array1_int(ctx, (frame[0].i), ((frame[0].i) + (frame[4].i)), (frame[2].o));
	}
label_63:;
	{
	LINE_NUMBER(2436);
	jint temp0 = (frame[10].i) - (frame[9].i);
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_65;
	}
	{
	LINE_NUMBER(2437);
	SM_java_util_Arrays_sort_int_int_Array1_int(ctx, ((frame[1].i) - (frame[4].i)), (frame[1].i), (frame[2].o));
	}
label_65:;
	LINE_NUMBER(2439);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_long(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2448);
	SM_java_util_Arrays_sort_int_int_Array1_long(ctx, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[0].o));
	LINE_NUMBER(2449);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_long_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2466);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2467);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2469);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(2470);
	SM_java_util_Arrays_sort_int_int_Array1_long(ctx, (frame[1].i), (frame[2].i), (frame[0].o));
	LINE_NUMBER(2471);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_int_int_Array1_long(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2475);
	frame[5].i = ((frame[1].i) - (frame[0].i));
	LINE_NUMBER(2476);
	if ((frame[5].i) >= (7)) goto label_2;
	}
	{
	LINE_NUMBER(2477);
	frame[6].i = ((frame[0].i) + (jint(1)));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(2478);
	frame[7].i = (frame[6].i);
	}
label_7:;
	{
	if ((frame[7].i) <= (frame[0].i)) goto label_8;
	}
	{
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[2].o), ((frame[7].i) - (jint(1))))), ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[7].i))))) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(2479);
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(2480);
	ARRAY_ACCESS(jlong, (frame[2].o), (frame[7].i)) = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), ((frame[7].i) - (jint(1)))));
	LINE_NUMBER(2481);
	ARRAY_ACCESS(jlong, (frame[2].o), ((frame[7].i) - (jint(1)))) = (frame[3].l);
	LINE_NUMBER(2478);
	INST_IINC(7, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(2477);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(2484);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2486);
	frame[6].i = (((frame[0].i) + (frame[1].i)) / (jint(2)));
	LINE_NUMBER(2487);
	if ((frame[5].i) <= (7)) goto label_14;
	}
	{
	LINE_NUMBER(2488);
	frame[7].i = (frame[0].i);
	LINE_NUMBER(2489);
	frame[8].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(2490);
	if ((frame[5].i) <= (40)) goto label_18;
	}
	{
	LINE_NUMBER(2491);
	frame[5].i = ((frame[5].i) / (8));
	LINE_NUMBER(2492);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_long_int_int_int_R_int(ctx, (frame[2].o), (frame[7].i), ((frame[7].i) + (frame[5].i)), ((frame[7].i) + ((jint(2)) * (frame[5].i))));
	frame[7].i = temp0;
	LINE_NUMBER(2494);
	jint temp1 = (jint)SM_java_util_Arrays_med3_Array1_long_int_int_int_R_int(ctx, (frame[2].o), ((frame[6].i) - (frame[5].i)), (frame[6].i), ((frame[6].i) + (frame[5].i)));
	frame[6].i = temp1;
	LINE_NUMBER(2495);
	jint temp2 = (jint)SM_java_util_Arrays_med3_Array1_long_int_int_int_R_int(ctx, (frame[2].o), ((frame[8].i) - ((jint(2)) * (frame[5].i))), ((frame[8].i) - (frame[5].i)), (frame[8].i));
	frame[8].i = temp2;
	}
label_18:;
	{
	LINE_NUMBER(2497);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_long_int_int_int_R_int(ctx, (frame[2].o), (frame[7].i), (frame[6].i), (frame[8].i));
	frame[6].i = temp0;
	}
label_14:;
	{
	LINE_NUMBER(2499);
	frame[7].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(2501);
	jint temp0 = frame[0].i;
	frame[10].i = temp0;
	frame[9].i = temp0;
	LINE_NUMBER(2502);
	jint temp3 = (frame[1].i) - (jint(1));
	frame[12].i = temp3;
	frame[11].i = temp3;
	}
label_27:;
	{
	LINE_NUMBER(2504);
	if ((frame[10].i) > (frame[11].i)) goto label_28;
	}
	{
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[10].i))), (frame[7].l))) > 0) goto label_28;
	}
	{
	LINE_NUMBER(2505);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[10].i))), (frame[7].l))) != 0) goto label_30;
	}
	{
	LINE_NUMBER(2506);
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(2507);
	sp[0].o = frame[2].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, 1);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(2508);
	ARRAY_ACCESS(jlong, (frame[2].o), (frame[10].i)) = (frame[3].l);
	}
label_30:;
	{
	LINE_NUMBER(2510);
	INST_IINC(10, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(2512);
	if ((frame[11].i) < (frame[10].i)) goto label_34;
	}
	{
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[11].i))), (frame[7].l))) < 0) goto label_34;
	}
	{
	LINE_NUMBER(2513);
	if ((longCompare(((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[11].i))), (frame[7].l))) != 0) goto label_36;
	}
	{
	LINE_NUMBER(2514);
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(2515);
	ARRAY_ACCESS(jlong, (frame[2].o), (frame[11].i)) = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(2516);
	sp[0].o = frame[2].o;
	jint temp0 = frame[12].i;
	INST_IINC(12, -1);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = (frame[3].l);
	}
label_36:;
	{
	LINE_NUMBER(2518);
	INST_IINC(11, -1);
	goto label_28;
	}
label_34:;
	{
	LINE_NUMBER(2520);
	if ((frame[10].i) <= (frame[11].i)) goto label_40;
	}
	LINE_NUMBER(2521);
	goto label_42;
label_40:;
	{
	LINE_NUMBER(2523);
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(2524);
	sp[0].o = frame[2].o;
	jint temp0 = frame[10].i;
	INST_IINC(10, 1);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(2525);
	sp[0].o = frame[2].o;
	jint temp1 = frame[11].i;
	INST_IINC(11, -1);
	ARRAY_ACCESS(jlong, sp[0].o, temp1) = (frame[3].l);
	goto label_27;
	}
label_42:;
	{
	LINE_NUMBER(2527);
	if (((frame[9].i) - (frame[0].i)) >= ((frame[10].i) - (frame[9].i))) goto label_45;
	}
	{
	jint temp0 = (frame[9].i) - (frame[0].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_46;
	}
label_45:;
	{
	jint temp0 = (frame[10].i) - (frame[9].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_46:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(2528);
	frame[13].i = (frame[0].i);
	LINE_NUMBER(2529);
	frame[14].i = ((frame[10].i) - (frame[5].i));
	}
label_49:;
	{
	LINE_NUMBER(2530);
	jint temp0 = frame[5].i;
	INST_IINC(5, -1);
	if (temp0 <= 0) goto label_50;
	}
	{
	LINE_NUMBER(2531);
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[13].i)));
	LINE_NUMBER(2532);
	sp[0].o = frame[2].o;
	jint temp0 = frame[13].i;
	INST_IINC(13, 1);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[14].i)));
	LINE_NUMBER(2533);
	sp[0].o = frame[2].o;
	jint temp1 = frame[14].i;
	INST_IINC(14, 1);
	ARRAY_ACCESS(jlong, sp[0].o, temp1) = (frame[3].l);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(2535);
	if (((frame[12].i) - (frame[11].i)) >= (((frame[1].i) - (jint(1))) - (frame[12].i))) goto label_54;
	}
	{
	jint temp0 = (frame[12].i) - (frame[11].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	{
	jint temp0 = ((frame[1].i) - (jint(1))) - (frame[12].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_55:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(2536);
	frame[13].i = (frame[10].i);
	LINE_NUMBER(2537);
	frame[14].i = ((frame[1].i) - (frame[5].i));
	}
label_58:;
	{
	LINE_NUMBER(2538);
	jint temp0 = frame[5].i;
	INST_IINC(5, -1);
	if (temp0 <= 0) goto label_59;
	}
	{
	LINE_NUMBER(2539);
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[13].i)));
	LINE_NUMBER(2540);
	sp[0].o = frame[2].o;
	jint temp0 = frame[13].i;
	INST_IINC(13, 1);
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (frame[14].i)));
	LINE_NUMBER(2541);
	sp[0].o = frame[2].o;
	jint temp1 = frame[14].i;
	INST_IINC(14, 1);
	ARRAY_ACCESS(jlong, sp[0].o, temp1) = (frame[3].l);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(2543);
	jint temp0 = (frame[10].i) - (frame[9].i);
	frame[5].i = temp0;
	if (temp0 <= 0) goto label_63;
	}
	{
	LINE_NUMBER(2544);
	SM_java_util_Arrays_sort_int_int_Array1_long(ctx, (frame[0].i), ((frame[0].i) + (frame[5].i)), (frame[2].o));
	}
label_63:;
	{
	LINE_NUMBER(2546);
	jint temp0 = (frame[12].i) - (frame[11].i);
	frame[5].i = temp0;
	if (temp0 <= 0) goto label_65;
	}
	{
	LINE_NUMBER(2547);
	SM_java_util_Arrays_sort_int_int_Array1_long(ctx, ((frame[1].i) - (frame[5].i)), (frame[1].i), (frame[2].o));
	}
label_65:;
	LINE_NUMBER(2549);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2562);
	SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object(ctx, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[0].o));
	LINE_NUMBER(2563);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2586);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2587);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2589);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(2590);
	SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object(ctx, (frame[1].i), (frame[2].i), (frame[0].o));
	LINE_NUMBER(2591);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2594);
	frame[3].i = ((frame[1].i) - (frame[0].i));
	LINE_NUMBER(2595);
	if ((frame[3].i) > 0) goto label_2;
	}
	LINE_NUMBER(2596);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2598);
	if ((isInstance(ctx, (frame[2].o), getArrayClass(&class_java_lang_String, 1))) == 0) goto label_4;
	}
	{
	LINE_NUMBER(2599);
	SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_int_int(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), (frame[2].o))), (frame[0].i), (frame[1].i));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(2601);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(2602);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[0].i), (frame[4].o), (frame[0].i), (frame[3].i));
	LINE_NUMBER(2603);
	SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int(ctx, (frame[4].o), (frame[2].o), (frame[0].i), (frame[1].i));
	}
label_6:;
	LINE_NUMBER(2605);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_swap_int_int_Array1_java_lang_Object(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:swap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2618);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[0].i)));
	LINE_NUMBER(2619);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[0].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)));
	LINE_NUMBER(2620);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[1].i)) = (frame[3].o);
	LINE_NUMBER(2621);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:mergeSort", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2642);
	frame[4].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(2644);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(2646);
	if ((frame[4].i) > (7)) goto label_3;
	}
	{
	LINE_NUMBER(2647);
	frame[6].i = ((frame[2].i) + (jint(1)));
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(2648);
	frame[7].o = (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i)))));
	LINE_NUMBER(2650);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[6].i) - (jint(1)))));
	LINE_NUMBER(2651);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[7].o)))(ctx, (frame[7].o), (frame[8].o));
	if (temp0 >= 0) goto label_10;
	}
	{
	LINE_NUMBER(2652);
	frame[9].i = (frame[6].i);
	}
label_12:;
	{
	LINE_NUMBER(2654);
	sp[0].o = frame[1].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[8].o);
	LINE_NUMBER(2655);
	if ((frame[9].i) <= (frame[2].i)) goto label_14;
	}
	{
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[9].i) - (jint(1))));
	frame[8].o = sp[1].o;
	LINE_NUMBER(2656);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 < 0) goto label_12;
	}
label_14:;
	{
	LINE_NUMBER(2657);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[9].i)) = (frame[7].o);
	}
label_10:;
	{
	LINE_NUMBER(2647);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(2660);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(2662);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[3].i) + (frame[2].i))) >> (jint(1))));
	LINE_NUMBER(2663);
	SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int(ctx, (frame[1].o), (frame[0].o), (frame[2].i), (frame[6].i));
	LINE_NUMBER(2664);
	SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int(ctx, (frame[1].o), (frame[0].o), (frame[6].i), (frame[3].i));
	LINE_NUMBER(2669);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[6].i) - (jint(1)))))))))(ctx, (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[6].i) - (jint(1))))))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i))));
	if (temp0 > 0) goto label_19;
	}
	{
	LINE_NUMBER(2670);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[2].i), (frame[1].o), (frame[2].i), (frame[4].i));
	LINE_NUMBER(2671);
	popStackFrame(ctx);
	return;
	}
label_19:;
	{
	LINE_NUMBER(2673);
	frame[7].i = (frame[6].i);
	frame[8].i = (frame[2].i);
	}
label_23:;
	{
	LINE_NUMBER(2677);
	frame[9].o = (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)))));
	LINE_NUMBER(2678);
	frame[10].o = (checkCast(ctx, &class_java_lang_Comparable, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[7].i)))));
	LINE_NUMBER(2679);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[9].o)))(ctx, (frame[9].o), (frame[10].o));
	if (temp0 > 0) goto label_26;
	}
	{
	LINE_NUMBER(2680);
	jint temp0 = (jint)SM_java_util_Arrays_find_Array1_java_lang_Object_java_lang_Comparable_int_int_int_R_int(ctx, (frame[0].o), (frame[10].o), (jint(-1)), ((frame[2].i) + (jint(1))), ((frame[6].i) - (jint(1))));
	frame[11].i = temp0;
	LINE_NUMBER(2681);
	frame[12].i = (((frame[11].i) - (frame[2].i)) + (jint(1)));
	LINE_NUMBER(2682);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[2].i), (frame[1].o), (frame[8].i), (frame[12].i));
	LINE_NUMBER(2683);
	frame[8].i = ((frame[8].i) + (frame[12].i));
	LINE_NUMBER(2684);
	sp[0].o = frame[1].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (frame[10].o);
	LINE_NUMBER(2685);
	INST_IINC(7, 1);
	LINE_NUMBER(2686);
	frame[2].i = ((frame[11].i) + (jint(1)));
	LINE_NUMBER(2687);
	goto label_35;
	}
label_26:;
	{
	LINE_NUMBER(2688);
	jint temp0 = (jint)SM_java_util_Arrays_find_Array1_java_lang_Object_java_lang_Comparable_int_int_int_R_int(ctx, (frame[0].o), (frame[9].o), (jint(0)), ((frame[7].i) + (jint(1))), ((frame[3].i) - (jint(1))));
	frame[11].i = temp0;
	LINE_NUMBER(2689);
	frame[12].i = (((frame[11].i) - (frame[7].i)) + (jint(1)));
	LINE_NUMBER(2690);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[7].i), (frame[1].o), (frame[8].i), (frame[12].i));
	LINE_NUMBER(2691);
	frame[8].i = ((frame[8].i) + (frame[12].i));
	LINE_NUMBER(2692);
	sp[0].o = frame[1].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (frame[9].o);
	LINE_NUMBER(2693);
	INST_IINC(2, 1);
	LINE_NUMBER(2694);
	frame[7].i = ((frame[11].i) + (jint(1)));
	}
label_35:;
	{
	LINE_NUMBER(2696);
	if (((frame[3].i) - (frame[7].i)) <= 0) goto label_42;
	}
	{
	if (((frame[6].i) - (frame[2].i)) > 0) goto label_23;
	}
label_42:;
	{
	LINE_NUMBER(2699);
	if (((frame[3].i) - (frame[7].i)) > 0) goto label_43;
	}
	{
	LINE_NUMBER(2700);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[2].i), (frame[1].o), (frame[8].i), ((frame[6].i) - (frame[2].i)));
	goto label_45;
	}
label_43:;
	{
	LINE_NUMBER(2702);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[7].i), (frame[1].o), (frame[8].i), ((frame[3].i) - (frame[7].i)));
	}
label_45:;
	LINE_NUMBER(2704);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int_java_util_Comparator(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jobject param4) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:mergeSort", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(2727);
	frame[5].i = ((frame[3].i) - (frame[2].i));
	LINE_NUMBER(2729);
	if ((frame[5].i) > (7)) goto label_2;
	}
	{
	LINE_NUMBER(2730);
	frame[6].i = ((frame[2].i) + (jint(1)));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(2731);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(2732);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[6].i) - (jint(1)))));
	LINE_NUMBER(2733);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[8].o), (frame[7].o));
	if (temp0 <= 0) goto label_9;
	}
	{
	LINE_NUMBER(2734);
	frame[9].i = (frame[6].i);
	}
label_11:;
	{
	LINE_NUMBER(2736);
	sp[0].o = frame[1].o;
	jint temp0 = frame[9].i;
	INST_IINC(9, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[8].o);
	LINE_NUMBER(2737);
	if ((frame[9].i) <= (frame[2].i)) goto label_13;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[9].i) - (jint(1))));
	frame[8].o = sp[1].o;
	sp[2].o = frame[7].o;
	LINE_NUMBER(2738);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 > 0) goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(2739);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[9].i)) = (frame[7].o);
	}
label_9:;
	{
	LINE_NUMBER(2730);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(2742);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(2744);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[3].i) + (frame[2].i))) >> (jint(1))));
	LINE_NUMBER(2745);
	SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int_java_util_Comparator(ctx, (frame[1].o), (frame[0].o), (frame[2].i), (frame[6].i), (frame[4].o));
	LINE_NUMBER(2746);
	SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int_java_util_Comparator(ctx, (frame[1].o), (frame[0].o), (frame[6].i), (frame[3].i), (frame[4].o));
	LINE_NUMBER(2751);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[6].i) - (jint(1))))), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i))));
	if (temp0 > 0) goto label_18;
	}
	{
	LINE_NUMBER(2752);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[2].i), (frame[1].o), (frame[2].i), (frame[5].i));
	LINE_NUMBER(2753);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(2755);
	frame[7].i = (frame[6].i);
	frame[8].i = (frame[2].i);
	}
label_22:;
	{
	LINE_NUMBER(2759);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(2760);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[7].i)));
	LINE_NUMBER(2761);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[4].o)))(ctx, (frame[4].o), (frame[9].o), (frame[10].o));
	if (temp0 > 0) goto label_25;
	}
	{
	LINE_NUMBER(2762);
	jint temp0 = (jint)SM_java_util_Arrays_find_Array1_java_lang_Object_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, (frame[0].o), (frame[10].o), (jint(-1)), ((frame[2].i) + (jint(1))), ((frame[6].i) - (jint(1))), (frame[4].o));
	frame[11].i = temp0;
	LINE_NUMBER(2763);
	frame[12].i = (((frame[11].i) - (frame[2].i)) + (jint(1)));
	LINE_NUMBER(2764);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[2].i), (frame[1].o), (frame[8].i), (frame[12].i));
	LINE_NUMBER(2765);
	frame[8].i = ((frame[8].i) + (frame[12].i));
	LINE_NUMBER(2766);
	sp[0].o = frame[1].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (frame[10].o);
	LINE_NUMBER(2767);
	INST_IINC(7, 1);
	LINE_NUMBER(2768);
	frame[2].i = ((frame[11].i) + (jint(1)));
	LINE_NUMBER(2769);
	goto label_34;
	}
label_25:;
	{
	LINE_NUMBER(2770);
	jint temp0 = (jint)SM_java_util_Arrays_find_Array1_java_lang_Object_java_lang_Object_int_int_int_java_util_Comparator_R_int(ctx, (frame[0].o), (frame[9].o), (jint(0)), ((frame[7].i) + (jint(1))), ((frame[3].i) - (jint(1))), (frame[4].o));
	frame[11].i = temp0;
	LINE_NUMBER(2771);
	frame[12].i = (((frame[11].i) - (frame[7].i)) + (jint(1)));
	LINE_NUMBER(2772);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[7].i), (frame[1].o), (frame[8].i), (frame[12].i));
	LINE_NUMBER(2773);
	frame[8].i = ((frame[8].i) + (frame[12].i));
	LINE_NUMBER(2774);
	sp[0].o = frame[1].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (frame[9].o);
	LINE_NUMBER(2775);
	INST_IINC(2, 1);
	LINE_NUMBER(2776);
	frame[7].i = ((frame[11].i) + (jint(1)));
	}
label_34:;
	{
	LINE_NUMBER(2778);
	if (((frame[3].i) - (frame[7].i)) <= 0) goto label_41;
	}
	{
	if (((frame[6].i) - (frame[2].i)) > 0) goto label_22;
	}
label_41:;
	{
	LINE_NUMBER(2781);
	if (((frame[3].i) - (frame[7].i)) > 0) goto label_42;
	}
	{
	LINE_NUMBER(2782);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[2].i), (frame[1].o), (frame[8].i), ((frame[6].i) - (frame[2].i)));
	goto label_44;
	}
label_42:;
	{
	LINE_NUMBER(2784);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[7].i), (frame[1].o), (frame[8].i), ((frame[3].i) - (frame[7].i)));
	}
label_44:;
	LINE_NUMBER(2786);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_find_Array1_java_lang_Object_java_lang_Comparable_int_int_int_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:find", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2813);
	frame[5].i = (frame[3].i);
	LINE_NUMBER(2814);
	frame[6].i = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(2815);
	if ((frame[5].i) > (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(2816);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i))));
	if (temp0 <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(2817);
	frame[3].i = ((frame[5].i) + (jint(1)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(2819);
	frame[4].i = ((frame[5].i) - (jint(1)));
	LINE_NUMBER(2820);
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(2822);
	frame[5].i = ((frame[5].i) + (frame[6].i));
	LINE_NUMBER(2823);
	frame[6].i = ((frame[6].i) << (jint(1)));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(2825);
	if ((frame[3].i) > (frame[4].i)) goto label_10;
	}
	{
	LINE_NUMBER(2826);
	frame[5].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[3].i) + (frame[4].i))) >> (jint(1))));
	LINE_NUMBER(2827);
	jint temp0 = (jint)((func_java_lang_Comparable_compareTo_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_lang_Comparable, INDEX_java_lang_Comparable_compareTo_java_lang_Object_R_int, (frame[1].o)))(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[5].i))));
	if (temp0 <= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(2828);
	frame[3].i = ((frame[5].i) + (jint(1)));
	goto label_3;
	}
label_13:;
	{
	LINE_NUMBER(2830);
	frame[4].i = ((frame[5].i) - (jint(1)));
	goto label_3;
	}
label_10:;
	{
	LINE_NUMBER(2833);
	popStackFrame(ctx);
	return ((frame[3].i) - (jint(1)));
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_find_Array1_java_lang_Object_java_lang_Object_int_int_int_java_util_Comparator_R_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3, jint param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:find", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(2859);
	frame[6].i = (frame[3].i);
	LINE_NUMBER(2860);
	frame[7].i = (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(2861);
	if ((frame[6].i) > (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(2862);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i))));
	if (temp0 <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(2863);
	frame[3].i = ((frame[6].i) + (jint(1)));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(2865);
	frame[4].i = ((frame[6].i) - (jint(1)));
	LINE_NUMBER(2866);
	goto label_3;
	}
label_7:;
	{
	LINE_NUMBER(2868);
	frame[6].i = ((frame[6].i) + (frame[7].i));
	LINE_NUMBER(2869);
	frame[7].i = ((frame[7].i) << (jint(1)));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(2871);
	if ((frame[3].i) > (frame[4].i)) goto label_10;
	}
	{
	LINE_NUMBER(2872);
	frame[6].i = (bit_cast<jint>(bit_cast<uint32_t>(((frame[3].i) + (frame[4].i))) >> (jint(1))));
	LINE_NUMBER(2873);
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, (frame[5].o)))(ctx, (frame[5].o), (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i))));
	if (temp0 <= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(2874);
	frame[3].i = ((frame[6].i) + (jint(1)));
	goto label_3;
	}
label_13:;
	{
	LINE_NUMBER(2876);
	frame[4].i = ((frame[6].i) - (jint(1)));
	goto label_3;
	}
label_10:;
	{
	LINE_NUMBER(2879);
	popStackFrame(ctx);
	return ((frame[3].i) - (jint(1)));
	}

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_medChar_int_int_int_Array1_java_lang_String_int_R_int(jcontext ctx, jint param0, jint param1, jint param2, jobject param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:medChar", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2886);
	jint temp0 = (jint)SM_java_util_Arrays_charAt_java_lang_String_int_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[0].i))), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(2887);
	jint temp1 = (jint)SM_java_util_Arrays_charAt_java_lang_String_int_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[1].i))), (frame[4].i));
	frame[6].i = temp1;
	LINE_NUMBER(2888);
	jint temp2 = (jint)SM_java_util_Arrays_charAt_java_lang_String_int_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[2].i))), (frame[4].i));
	frame[7].i = temp2;
	LINE_NUMBER(2889);
	if ((frame[5].i) >= (frame[6].i)) goto label_4;
	}
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_5;
	}
	INST_ILOAD(1);
	goto label_6;
label_5:;
	{
	if ((frame[5].i) >= (frame[7].i)) goto label_7;
	}
	INST_ILOAD(2);
	goto label_6;
label_7:;
	INST_ILOAD(0);
	goto label_6;
label_4:;
	{
	LINE_NUMBER(2890);
	if ((frame[6].i) >= (frame[7].i)) goto label_8;
	}
	{
	if ((frame[5].i) >= (frame[7].i)) goto label_9;
	}
	INST_ILOAD(0);
	goto label_6;
label_9:;
	INST_ILOAD(2);
	goto label_6;
label_8:;
	INST_ILOAD(1);
label_6:;
	LINE_NUMBER(2889);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_java_util_Arrays_charAt_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:charAt", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2899);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 < temp1) goto label_1;
	}
	{
	LINE_NUMBER(2900);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(2902);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_copySwap_Array1_java_lang_Object_int_Array1_java_lang_Object_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copySwap", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2922);
	if ((frame[0].o) != (frame[2].o)) goto label_1;
	}
	{
	if (((frame[1].i) + (frame[4].i)) <= (frame[3].i)) goto label_1;
	}
	{
	LINE_NUMBER(2923);
	frame[5].i = (((frame[3].i) + (frame[4].i)) - (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(2924);
	if ((frame[1].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(2925);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(2924);
	INST_IINC(1, 1);
	INST_IINC(5, -1);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(2927);
	if ((frame[4].i) <= (jint(1))) goto label_7;
	}
	{
	LINE_NUMBER(2928);
	SM_java_util_Arrays_swap_int_int_Array1_java_lang_Object(ctx, (frame[1].i), (frame[5].i), (frame[2].o));
	LINE_NUMBER(2927);
	INST_IINC(1, 1);
	INST_IINC(5, -1);
	INST_IINC(4, -2);
	goto label_4;
	}
label_7:;
	LINE_NUMBER(2931);
	goto label_10;
label_1:;
	{
	LINE_NUMBER(2932);
	frame[3].i = (((frame[3].i) + (frame[4].i)) - (jint(1)));
	}
label_11:;
	{
	LINE_NUMBER(2933);
	if ((frame[4].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(2934);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(2933);
	INST_IINC(1, 1);
	INST_IINC(3, -1);
	INST_IINC(4, -1);
	goto label_11;
	}
label_10:;
	LINE_NUMBER(2937);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:stableStringSort", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(2952);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[2].i));
	SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_Array1_java_lang_String_Array1_java_lang_String_int_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].i), (frame[2].i), (jint(0)));
	LINE_NUMBER(2953);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_Array1_java_lang_String_Array1_java_lang_String_int_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jint param4, jint param5) {
	jtype frame[25];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:stableStringSort", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(2974);
	frame[6].i = ((frame[4].i) - (frame[3].i));
	LINE_NUMBER(2976);
	if ((frame[6].i) >= (7)) goto label_2;
	}
	{
	LINE_NUMBER(2977);
	if ((frame[1].o) != (frame[0].o)) goto label_4;
	}
	{
	LINE_NUMBER(2978);
	frame[7].i = ((frame[3].i) + (jint(1)));
	}
label_6:;
	{
	if ((frame[7].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(2979);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[7].i)));
	LINE_NUMBER(2980);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[7].i) - (jint(1)))));
	LINE_NUMBER(2981);
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, (frame[8].o), (frame[9].o));
	if (temp0 >= 0) goto label_11;
	}
	{
	LINE_NUMBER(2982);
	frame[10].i = (frame[7].i);
	}
label_13:;
	{
	LINE_NUMBER(2984);
	sp[0].o = frame[0].o;
	jint temp0 = frame[10].i;
	INST_IINC(10, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[9].o);
	LINE_NUMBER(2985);
	if ((frame[10].i) <= (frame[3].i)) goto label_15;
	}
	{
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[0].o), ((frame[10].i) - (jint(1))));
	frame[9].o = sp[1].o;
	LINE_NUMBER(2986);
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 < 0) goto label_13;
	}
label_15:;
	{
	LINE_NUMBER(2987);
	ARRAY_ACCESS(jobject, (frame[0].o), (frame[10].i)) = (frame[8].o);
	}
label_11:;
	{
	LINE_NUMBER(2978);
	INST_IINC(7, 1);
	goto label_6;
	}
label_7:;
	goto label_17;
label_4:;
	{
	LINE_NUMBER(2991);
	frame[7].i = ((frame[4].i) - (jint(1)));
	LINE_NUMBER(2992);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = frame[1].o;
	jint temp1 = frame[7].i;
	INST_IINC(7, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, temp1));
	LINE_NUMBER(2993);
	frame[8].i = ((frame[3].i) + (jint(1)));
	}
label_20:;
	{
	if ((frame[8].i) >= (frame[4].i)) goto label_17;
	}
	{
	LINE_NUMBER(2994);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[7].i)));
	LINE_NUMBER(2996);
	frame[11].i = (frame[8].i);
	}
label_23:;
	{
	LINE_NUMBER(2997);
	if ((frame[11].i) <= (frame[3].i)) goto label_24;
	}
	{
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)ARRAY_ACCESS(jobject, (frame[2].o), ((frame[11].i) - (jint(1))));
	frame[10].o = sp[1].o;
	LINE_NUMBER(2998);
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 >= 0) goto label_24;
	}
	{
	LINE_NUMBER(2999);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, -1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[10].o);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(3001);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[11].i)) = (frame[9].o);
	LINE_NUMBER(2993);
	INST_IINC(8, 1);
	INST_IINC(7, -1);
	goto label_20;
	}
label_17:;
	LINE_NUMBER(3004);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(3008);
	frame[8].i = ((frame[3].i) + ((frame[6].i) / (jint(2))));
	LINE_NUMBER(3009);
	frame[9].i = (frame[3].i);
	LINE_NUMBER(3010);
	frame[10].i = ((frame[4].i) - (jint(1)));
	LINE_NUMBER(3011);
	if ((frame[6].i) <= (40)) goto label_31;
	}
	{
	LINE_NUMBER(3012);
	frame[7].i = ((frame[6].i) / (8));
	LINE_NUMBER(3013);
	jint temp0 = (jint)SM_java_util_Arrays_medChar_int_int_int_Array1_java_lang_String_int_R_int(ctx, (frame[9].i), ((frame[9].i) + (frame[7].i)), ((frame[9].i) + ((frame[7].i) * (jint(2)))), (frame[1].o), (frame[5].i));
	frame[9].i = temp0;
	LINE_NUMBER(3014);
	jint temp1 = (jint)SM_java_util_Arrays_medChar_int_int_int_Array1_java_lang_String_int_R_int(ctx, ((frame[8].i) - (frame[7].i)), (frame[8].i), ((frame[8].i) + (frame[7].i)), (frame[1].o), (frame[5].i));
	frame[8].i = temp1;
	LINE_NUMBER(3015);
	jint temp2 = (jint)SM_java_util_Arrays_medChar_int_int_int_Array1_java_lang_String_int_R_int(ctx, (frame[10].i), ((frame[10].i) - (frame[7].i)), ((frame[10].i) - ((frame[7].i) * (jint(2)))), (frame[1].o), (frame[5].i));
	frame[10].i = temp2;
	}
label_31:;
	{
	LINE_NUMBER(3017);
	jint temp0 = (jint)SM_java_util_Arrays_medChar_int_int_int_Array1_java_lang_String_int_R_int(ctx, (frame[9].i), (frame[8].i), (frame[10].i), (frame[1].o), (frame[5].i));
	frame[8].i = temp0;
	LINE_NUMBER(3022);
	jint temp1 = (jint)SM_java_util_Arrays_charAt_java_lang_String_int_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[8].i))), (frame[5].i));
	frame[11].i = temp1;
	LINE_NUMBER(3024);
	jint temp2 = frame[3].i;
	frame[13].i = temp2;
	frame[12].i = temp2;
	LINE_NUMBER(3025);
	frame[14].i = ((frame[4].i) - (jint(1)));
	LINE_NUMBER(3028);
	frame[16].i = (frame[3].i);
	}
label_41:;
	{
	if ((frame[16].i) >= (frame[4].i)) goto label_42;
	}
	{
	LINE_NUMBER(3029);
	frame[17].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[16].i)));
	LINE_NUMBER(3030);
	jint temp0 = (jint)SM_java_util_Arrays_charAt_java_lang_String_int_R_int(ctx, (frame[17].o), (frame[5].i));
	frame[15].i = (temp0 - (frame[11].i));
	LINE_NUMBER(3031);
	if ((frame[15].i) >= 0) goto label_46;
	}
	{
	LINE_NUMBER(3032);
	ARRAY_ACCESS(jobject, (frame[1].o), (frame[12].i)) = (frame[17].o);
	LINE_NUMBER(3033);
	INST_IINC(12, 1);
	goto label_49;
	}
label_46:;
	{
	LINE_NUMBER(3034);
	if ((frame[15].i) <= 0) goto label_50;
	}
	{
	LINE_NUMBER(3035);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[14].i)) = (frame[17].o);
	LINE_NUMBER(3036);
	INST_IINC(14, -1);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(3038);
	ARRAY_ACCESS(jobject, (frame[2].o), (frame[13].i)) = (frame[17].o);
	LINE_NUMBER(3039);
	INST_IINC(13, 1);
	}
label_49:;
	{
	LINE_NUMBER(3028);
	INST_IINC(16, 1);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(3043);
	frame[7].i = ((frame[13].i) - (frame[3].i));
	LINE_NUMBER(3044);
	if ((frame[7].i) <= 0) goto label_55;
	}
	{
	LINE_NUMBER(3045);
	if ((frame[0].o) != (frame[1].o)) goto label_57;
	}
	{
	LINE_NUMBER(3046);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[0].o), (frame[12].i), (frame[7].i));
	goto label_59;
	}
label_57:;
	{
	LINE_NUMBER(3048);
	SM_java_util_Arrays_copySwap_Array1_java_lang_Object_int_Array1_java_lang_Object_int_int(ctx, (frame[2].o), (frame[3].i), (frame[0].o), (frame[12].i), (frame[7].i));
	}
label_59:;
	{
	LINE_NUMBER(3051);
	if ((frame[13].i) < (frame[4].i)) goto label_60;
	}
	{
	if ((frame[11].i) != (jint(-1))) goto label_60;
	}
	LINE_NUMBER(3052);
	popStackFrame(ctx);
	INST_RETURN();
label_60:;
	{
	LINE_NUMBER(3054);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp += 2;
	if ((frame[0].o) != (frame[2].o)) goto label_62;
	}
	INST_ALOAD(1);
	goto label_63;
label_62:;
	INST_ALOAD(2);
label_63:;
	{
	sp -= 3;
	SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_Array1_java_lang_String_Array1_java_lang_String_int_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[12].i), ((frame[12].i) + (frame[7].i)), ((frame[5].i) + (jint(1))));
	}
label_55:;
	{
	LINE_NUMBER(3058);
	frame[7].i = ((frame[12].i) - (frame[3].i));
	LINE_NUMBER(3059);
	if ((frame[7].i) <= 0) goto label_65;
	}
	{
	LINE_NUMBER(3060);
	SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_Array1_java_lang_String_Array1_java_lang_String_int_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[12].i), (frame[5].i));
	}
label_65:;
	{
	LINE_NUMBER(3063);
	INST_IINC(14, 1);
	LINE_NUMBER(3064);
	frame[7].i = ((frame[4].i) - (frame[14].i));
	LINE_NUMBER(3065);
	if ((frame[7].i) <= 0) goto label_69;
	}
	{
	LINE_NUMBER(3066);
	SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_Array1_java_lang_String_Array1_java_lang_String_int_int_int(ctx, (frame[0].o), (frame[2].o), (frame[1].o), (frame[14].i), (frame[4].i), (frame[5].i));
	}
label_69:;
	LINE_NUMBER(3068);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_java_lang_Object_int_int_java_util_Comparator(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(3093);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3094);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3096);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(3097);
	SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object_java_util_Comparator(ctx, (frame[1].i), (frame[2].i), (frame[0].o), (frame[3].o));
	LINE_NUMBER(3098);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jint param0, jint param1, jobject param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(3102);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3103);
	SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object(ctx, (frame[0].i), (frame[1].i), (frame[2].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(3105);
	frame[4].i = ((frame[1].i) - (frame[0].i));
	LINE_NUMBER(3106);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (frame[1].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3107);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[2].o), (frame[0].i), (frame[5].o), (frame[0].i), (frame[4].i));
	LINE_NUMBER(3108);
	SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int_java_util_Comparator(ctx, (frame[5].o), (frame[2].o), (frame[0].i), (frame[1].i), (frame[3].o));
	}
label_3:;
	LINE_NUMBER(3110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3125);
	SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object_java_util_Comparator(ctx, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[0].o), (frame[1].o));
	LINE_NUMBER(3126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_short(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3135);
	SM_java_util_Arrays_sort_int_int_Array1_short(ctx, (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[0].o));
	LINE_NUMBER(3136);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_Array1_short_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3153);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3154);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3156);
	SM_java_util_Arrays_checkBounds_int_int_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i), (frame[2].i));
	LINE_NUMBER(3157);
	SM_java_util_Arrays_sort_int_int_Array1_short(ctx, (frame[1].i), (frame[2].i), (frame[0].o));
	LINE_NUMBER(3158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_util_Arrays_sort_int_int_Array1_short(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:sort", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3162);
	frame[4].i = ((frame[1].i) - (frame[0].i));
	LINE_NUMBER(3163);
	if ((frame[4].i) >= (7)) goto label_2;
	}
	{
	LINE_NUMBER(3164);
	frame[5].i = ((frame[0].i) + (jint(1)));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(3165);
	frame[6].i = (frame[5].i);
	}
label_7:;
	{
	if ((frame[6].i) <= (frame[0].i)) goto label_8;
	}
	{
	if (((jint)ARRAY_ACCESS(jshort, (frame[2].o), ((frame[6].i) - (jint(1))))) <= ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[6].i)))) goto label_8;
	}
	{
	LINE_NUMBER(3166);
	frame[3].i = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(3167);
	ARRAY_ACCESS(jshort, (frame[2].o), (frame[6].i)) = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), ((frame[6].i) - (jint(1)))));
	LINE_NUMBER(3168);
	ARRAY_ACCESS(jshort, (frame[2].o), ((frame[6].i) - (jint(1)))) = (frame[3].i);
	LINE_NUMBER(3165);
	INST_IINC(6, -1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(3164);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(3171);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(3173);
	frame[5].i = (((frame[0].i) + (frame[1].i)) / (jint(2)));
	LINE_NUMBER(3174);
	if ((frame[4].i) <= (7)) goto label_14;
	}
	{
	LINE_NUMBER(3175);
	frame[6].i = (frame[0].i);
	LINE_NUMBER(3176);
	frame[7].i = ((frame[1].i) - (jint(1)));
	LINE_NUMBER(3177);
	if ((frame[4].i) <= (40)) goto label_18;
	}
	{
	LINE_NUMBER(3178);
	frame[4].i = ((frame[4].i) / (8));
	LINE_NUMBER(3179);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_short_int_int_int_R_int(ctx, (frame[2].o), (frame[6].i), ((frame[6].i) + (frame[4].i)), ((frame[6].i) + ((jint(2)) * (frame[4].i))));
	frame[6].i = temp0;
	LINE_NUMBER(3181);
	jint temp1 = (jint)SM_java_util_Arrays_med3_Array1_short_int_int_int_R_int(ctx, (frame[2].o), ((frame[5].i) - (frame[4].i)), (frame[5].i), ((frame[5].i) + (frame[4].i)));
	frame[5].i = temp1;
	LINE_NUMBER(3182);
	jint temp2 = (jint)SM_java_util_Arrays_med3_Array1_short_int_int_int_R_int(ctx, (frame[2].o), ((frame[7].i) - ((jint(2)) * (frame[4].i))), ((frame[7].i) - (frame[4].i)), (frame[7].i));
	frame[7].i = temp2;
	}
label_18:;
	{
	LINE_NUMBER(3184);
	jint temp0 = (jint)SM_java_util_Arrays_med3_Array1_short_int_int_int_R_int(ctx, (frame[2].o), (frame[6].i), (frame[5].i), (frame[7].i));
	frame[5].i = temp0;
	}
label_14:;
	{
	LINE_NUMBER(3186);
	frame[6].i = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(3188);
	jint temp0 = frame[0].i;
	frame[8].i = temp0;
	frame[7].i = temp0;
	LINE_NUMBER(3189);
	jint temp3 = (frame[1].i) - (jint(1));
	frame[10].i = temp3;
	frame[9].i = temp3;
	}
label_27:;
	{
	LINE_NUMBER(3191);
	if ((frame[8].i) > (frame[9].i)) goto label_28;
	}
	{
	if (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[8].i))) > (frame[6].i)) goto label_28;
	}
	{
	LINE_NUMBER(3192);
	if (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[8].i))) != (frame[6].i)) goto label_30;
	}
	{
	LINE_NUMBER(3193);
	frame[3].i = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(3194);
	sp[0].o = frame[2].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(3195);
	ARRAY_ACCESS(jshort, (frame[2].o), (frame[8].i)) = (frame[3].i);
	}
label_30:;
	{
	LINE_NUMBER(3197);
	INST_IINC(8, 1);
	goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(3199);
	if ((frame[9].i) < (frame[8].i)) goto label_34;
	}
	{
	if (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[9].i))) < (frame[6].i)) goto label_34;
	}
	{
	LINE_NUMBER(3200);
	if (((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[9].i))) != (frame[6].i)) goto label_36;
	}
	{
	LINE_NUMBER(3201);
	frame[3].i = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(3202);
	ARRAY_ACCESS(jshort, (frame[2].o), (frame[9].i)) = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(3203);
	sp[0].o = frame[2].o;
	jint temp0 = frame[10].i;
	INST_IINC(10, -1);
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = (frame[3].i);
	}
label_36:;
	{
	LINE_NUMBER(3205);
	INST_IINC(9, -1);
	goto label_28;
	}
label_34:;
	{
	LINE_NUMBER(3207);
	if ((frame[8].i) <= (frame[9].i)) goto label_40;
	}
	LINE_NUMBER(3208);
	goto label_42;
label_40:;
	{
	LINE_NUMBER(3210);
	frame[3].i = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(3211);
	sp[0].o = frame[2].o;
	jint temp0 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[9].i)));
	LINE_NUMBER(3212);
	sp[0].o = frame[2].o;
	jint temp1 = frame[9].i;
	INST_IINC(9, -1);
	ARRAY_ACCESS(jshort, sp[0].o, temp1) = (frame[3].i);
	goto label_27;
	}
label_42:;
	{
	LINE_NUMBER(3214);
	if (((frame[7].i) - (frame[0].i)) >= ((frame[8].i) - (frame[7].i))) goto label_45;
	}
	{
	jint temp0 = (frame[7].i) - (frame[0].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_46;
	}
label_45:;
	{
	jint temp0 = (frame[8].i) - (frame[7].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_46:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(3215);
	frame[11].i = (frame[0].i);
	LINE_NUMBER(3216);
	frame[12].i = ((frame[8].i) - (frame[4].i));
	}
label_49:;
	{
	LINE_NUMBER(3217);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_50;
	}
	{
	LINE_NUMBER(3218);
	frame[3].i = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(3219);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(3220);
	sp[0].o = frame[2].o;
	jint temp1 = frame[12].i;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jshort, sp[0].o, temp1) = (frame[3].i);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(3222);
	if (((frame[10].i) - (frame[9].i)) >= (((frame[1].i) - (jint(1))) - (frame[10].i))) goto label_54;
	}
	{
	jint temp0 = (frame[10].i) - (frame[9].i);
	sp[0].i = temp0;
	sp += 1;
	goto label_55;
	}
label_54:;
	{
	jint temp0 = ((frame[1].i) - (jint(1))) - (frame[10].i);
	sp[0].i = temp0;
	sp += 1;
	}
label_55:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(3223);
	frame[11].i = (frame[8].i);
	LINE_NUMBER(3224);
	frame[12].i = ((frame[1].i) - (frame[4].i));
	}
label_58:;
	{
	LINE_NUMBER(3225);
	jint temp0 = frame[4].i;
	INST_IINC(4, -1);
	if (temp0 <= 0) goto label_59;
	}
	{
	LINE_NUMBER(3226);
	frame[3].i = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[11].i)));
	LINE_NUMBER(3227);
	sp[0].o = frame[2].o;
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = ((jint)ARRAY_ACCESS(jshort, (frame[2].o), (frame[12].i)));
	LINE_NUMBER(3228);
	sp[0].o = frame[2].o;
	jint temp1 = frame[12].i;
	INST_IINC(12, 1);
	ARRAY_ACCESS(jshort, sp[0].o, temp1) = (frame[3].i);
	goto label_58;
	}
label_59:;
	{
	LINE_NUMBER(3230);
	jint temp0 = (frame[8].i) - (frame[7].i);
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_63;
	}
	{
	LINE_NUMBER(3231);
	SM_java_util_Arrays_sort_int_int_Array1_short(ctx, (frame[0].i), ((frame[0].i) + (frame[4].i)), (frame[2].o));
	}
label_63:;
	{
	LINE_NUMBER(3233);
	jint temp0 = (frame[10].i) - (frame[9].i);
	frame[4].i = temp0;
	if (temp0 <= 0) goto label_65;
	}
	{
	LINE_NUMBER(3234);
	SM_java_util_Arrays_sort_int_int_Array1_short(ctx, ((frame[1].i) - (frame[4].i)), (frame[1].i), (frame[2].o));
	}
label_65:;
	LINE_NUMBER(3236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_toString_Array1_boolean_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3251);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3252);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3254);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3255);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(3257);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, ((jint(2)) + ((((jarray) nullCheck(ctx, (frame[0].o)))->length) * (jint(5)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3258);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (91));
	LINE_NUMBER(3259);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))));
	LINE_NUMBER(3260);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(3261);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(3262);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_boolean_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(3260);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3264);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (93));
	LINE_NUMBER(3265);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_toString_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3281);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3282);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3284);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3285);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(3287);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, ((jint(2)) + ((((jarray) nullCheck(ctx, (frame[0].o)))->length) * (jint(3)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3288);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (91));
	LINE_NUMBER(3289);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))));
	LINE_NUMBER(3290);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(3291);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(3292);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(3290);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3294);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (93));
	LINE_NUMBER(3295);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_toString_Array1_char_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3311);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3312);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3314);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3315);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(3317);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, ((jint(2)) + ((((jarray) nullCheck(ctx, (frame[0].o)))->length) * (jint(2)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3318);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (91));
	LINE_NUMBER(3319);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (jint(0)))));
	LINE_NUMBER(3320);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(3321);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(3322);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jchar, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(3320);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3324);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (93));
	LINE_NUMBER(3325);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_toString_Array1_double_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3341);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3342);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3344);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3345);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(3347);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, ((jint(2)) + ((((jarray) nullCheck(ctx, (frame[0].o)))->length) * (jint(5)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3348);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (91));
	LINE_NUMBER(3349);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (jint(0)))));
	LINE_NUMBER(3350);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(3351);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(3352);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_double_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jdouble)ARRAY_ACCESS(jdouble, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(3350);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3354);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (93));
	LINE_NUMBER(3355);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_toString_Array1_float_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3371);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3372);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3374);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3375);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(3377);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, ((jint(2)) + ((((jarray) nullCheck(ctx, (frame[0].o)))->length) * (jint(5)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3378);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (91));
	LINE_NUMBER(3379);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)))));
	LINE_NUMBER(3380);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(3381);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(3382);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_float_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(3380);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3384);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (93));
	LINE_NUMBER(3385);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_toString_Array1_int_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3401);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3402);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3404);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3405);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(3407);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, ((jint(2)) + ((((jarray) nullCheck(ctx, (frame[0].o)))->length) * (jint(4)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3408);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (91));
	LINE_NUMBER(3409);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jint, (frame[0].o), (jint(0)))));
	LINE_NUMBER(3410);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(3411);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(3412);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jint, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(3410);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3414);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (93));
	LINE_NUMBER(3415);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_toString_Array1_long_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3431);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3432);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3434);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3435);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(3437);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, ((jint(2)) + ((((jarray) nullCheck(ctx, (frame[0].o)))->length) * (jint(4)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3438);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (91));
	LINE_NUMBER(3439);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (jint(0)))));
	LINE_NUMBER(3440);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(3441);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(3442);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_long_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jlong)ARRAY_ACCESS(jlong, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(3440);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3444);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (93));
	LINE_NUMBER(3445);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_toString_Array1_short_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3461);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3462);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3464);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3465);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(3467);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, ((jint(2)) + ((((jarray) nullCheck(ctx, (frame[0].o)))->length) * (jint(4)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3468);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (91));
	LINE_NUMBER(3469);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (jint(0)))));
	LINE_NUMBER(3470);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(3471);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(3472);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_int_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jshort, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(3470);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3474);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (93));
	LINE_NUMBER(3475);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_toString_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3491);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3492);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3494);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3495);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(3497);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, ((jint(2)) + ((((jarray) nullCheck(ctx, (frame[0].o)))->length) * (jint(5)))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(3498);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (91));
	LINE_NUMBER(3499);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(0)))));
	LINE_NUMBER(3500);
	frame[2].i = (jint(1));
	}
label_8:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(3501);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(3502);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i))));
	LINE_NUMBER(3500);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3504);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[1].o), (93));
	LINE_NUMBER(3505);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_deepToString_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:deepToString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3527);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[0].o);
	sp[0].o = (jobject)SM_java_util_Arrays_deepToStringImpl_Array1_java_lang_Object_Array1_java_lang_Object_java_lang_StringBuffer_R_java_lang_String(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_deepToStringImpl_Array1_java_lang_Object_Array1_java_lang_Object_java_lang_StringBuffer_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:deepToStringImpl", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3546);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3547);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"null"_j)));
	}
label_1:;
	{
	LINE_NUMBER(3549);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_3;
	}
	{
	LINE_NUMBER(3550);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"[]"_j)));
	}
label_3:;
	{
	LINE_NUMBER(3553);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(3554);
	clinit_java_lang_StringBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuffer);
	init_java_lang_StringBuffer_int(ctx, sp[0].o, ((jint(2)) + ((((jarray) nullCheck(ctx, (frame[0].o)))->length) * (jint(5)))));
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3556);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[2].o), (91));
	LINE_NUMBER(3558);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(3559);
	if ((frame[3].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(3560);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	}
label_11:;
	{
	LINE_NUMBER(3563);
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i)));
	LINE_NUMBER(3564);
	if ((frame[4].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(3566);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(3569);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3570);
	jint temp0 = (jint)((func_java_lang_Class_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_isArray_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(3572);
	jint temp0 = (jint)SM_java_util_Arrays_isPrimitiveArray_java_lang_Object_R_boolean(ctx, (frame[4].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(3573);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_util_Arrays_toStringObj_java_lang_Object_R_java_lang_String(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, sp[0].o, sp[1].o);
	goto label_16;
	}
label_20:;
	{
	LINE_NUMBER(3578);
	jint temp0 = (jint)SM_java_util_Arrays_deepToStringImplContains_Array1_java_lang_Object_java_lang_Object_R_boolean(ctx, (frame[1].o), (frame[4].o));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(3579);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_String_R_java_lang_StringBuffer])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[...]"_j))));
	goto label_16;
	}
label_22:;
	{
	LINE_NUMBER(3581);
	frame[6].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[4].o)));
	LINE_NUMBER(3582);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) + (jint(1))));
	frame[7].o = sp[0].o;
	LINE_NUMBER(3583);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[1].o), (jint(0)), (frame[7].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(3585);
	ARRAY_ACCESS(jobject, (frame[7].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length)) = (frame[6].o);
	LINE_NUMBER(3587);
	sp[0].o = (jobject)SM_java_util_Arrays_deepToStringImpl_Array1_java_lang_Object_Array1_java_lang_Object_java_lang_StringBuffer_R_java_lang_String(ctx, (frame[6].o), (frame[7].o), (frame[2].o));
	LINE_NUMBER(3588);
	goto label_16;
	}
label_18:;
	{
	LINE_NUMBER(3591);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_java_lang_Object_R_java_lang_StringBuffer])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[3].i))));
	}
label_16:;
	{
	LINE_NUMBER(3558);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(3595);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_append_char_R_java_lang_StringBuffer])(ctx, (frame[2].o), (93));
	LINE_NUMBER(3596);
	sp[0].o = (jobject)((func_java_lang_StringBuffer_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuffer_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_isPrimitiveArray_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:isPrimitiveArray", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3600);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_int, 1))) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_byte, 1))) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_char, 1))) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_boolean, 1))) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_long, 1))) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_short, 1))) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_double, 1))) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_float, 1))) == 0) goto label_2;
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

jobject SM_java_util_Arrays_toStringObj_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:toStringObj", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3612);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_java_lang_Object, 1))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(3613);
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_java_lang_Object_R_java_lang_String(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(3615);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_int, 1))) == 0) goto label_3;
	}
	{
	LINE_NUMBER(3616);
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_int_R_java_lang_String(ctx, (checkCast(ctx, getArrayClass(&class_int, 1), (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(3618);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_byte, 1))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(3619);
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_byte_R_java_lang_String(ctx, (checkCast(ctx, getArrayClass(&class_byte, 1), (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(3621);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_char, 1))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(3622);
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_char_R_java_lang_String(ctx, (checkCast(ctx, getArrayClass(&class_char, 1), (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(3624);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_short, 1))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(3625);
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_short_R_java_lang_String(ctx, (checkCast(ctx, getArrayClass(&class_short, 1), (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(3627);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_long, 1))) == 0) goto label_11;
	}
	{
	LINE_NUMBER(3628);
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_long_R_java_lang_String(ctx, (checkCast(ctx, getArrayClass(&class_long, 1), (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(3630);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_double, 1))) == 0) goto label_13;
	}
	{
	LINE_NUMBER(3631);
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_double_R_java_lang_String(ctx, (checkCast(ctx, getArrayClass(&class_double, 1), (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(3633);
	if ((isInstance(ctx, (frame[0].o), getArrayClass(&class_float, 1))) == 0) goto label_15;
	}
	{
	LINE_NUMBER(3634);
	sp[0].o = (jobject)SM_java_util_Arrays_toString_Array1_float_R_java_lang_String(ctx, (checkCast(ctx, getArrayClass(&class_float, 1), (frame[0].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(3636);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_java_util_Arrays_deepToStringImplContains_Array1_java_lang_Object_java_lang_Object_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:deepToStringImplContains", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(3652);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(3653);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(3655);
	frame[2].o = (frame[0].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(3656);
	if ((frame[5].o) != (frame[1].o)) goto label_6;
	}
	{
	LINE_NUMBER(3657);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(3655);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(3660);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOfRange_Array1_boolean_int_int_R_Array1_boolean(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOfRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3687);
	if ((frame[1].i) > (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(3688);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) < (frame[1].i)) goto label_3;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(3689);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(3690);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)));
	frame[4].i = temp0;
	LINE_NUMBER(3691);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3692);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(3693);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(3695);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3697);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(3701);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3702);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"copyOf expects newLength >= 0, but found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3704);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(3705);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (((jarray) nullCheck(ctx, (frame[0].o)))->length), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(3706);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (jint(0)), (frame[3].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(3707);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3711);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3712);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"copyOf expects newLength >= 0, but found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3714);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_java_lang_Class_R_Array1_java_lang_Object(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOfRange_Array1_byte_int_int_R_Array1_byte(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOfRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3740);
	if ((frame[1].i) > (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(3741);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) < (frame[1].i)) goto label_3;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(3742);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(3743);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)));
	frame[4].i = temp0;
	LINE_NUMBER(3744);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3745);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(3746);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(3748);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3750);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOfRange_Array1_char_int_int_R_Array1_char(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOfRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3776);
	if ((frame[1].i) > (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(3777);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) < (frame[1].i)) goto label_3;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(3778);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(3779);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)));
	frame[4].i = temp0;
	LINE_NUMBER(3780);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3781);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(3782);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(3784);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3786);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOfRange_Array1_double_int_int_R_Array1_double(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOfRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3812);
	if ((frame[1].i) > (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(3813);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) < (frame[1].i)) goto label_3;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(3814);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(3815);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)));
	frame[4].i = temp0;
	LINE_NUMBER(3816);
	sp[0].o = (jobject) createArray(ctx, &class_double, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3817);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(3818);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(3820);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3822);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOfRange_Array1_float_int_int_R_Array1_float(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOfRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3848);
	if ((frame[1].i) > (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(3849);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) < (frame[1].i)) goto label_3;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(3850);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(3851);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)));
	frame[4].i = temp0;
	LINE_NUMBER(3852);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(3853);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(3854);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(3856);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3858);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_boolean_R_Array1_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3862);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_boolean_int_int_R_Array1_boolean(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_boolean_int_R_Array1_boolean(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3866);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3867);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"copyOf expects newLength >= 0, but found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3869);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_boolean_int_int_R_Array1_boolean(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_char_R_Array1_char(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3873);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_char_int_int_R_Array1_char(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_char_int_R_Array1_char(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3877);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3878);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"copyOf expects newLength >= 0, but found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3880);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_char_int_int_R_Array1_char(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_double_R_Array1_double(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3884);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_double_int_int_R_Array1_double(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_double_int_R_Array1_double(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3887);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3888);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"copyOf expects newLength >= 0, but found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3890);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_double_int_int_R_Array1_double(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_float_R_Array1_float(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3894);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_float_int_int_R_Array1_float(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_float_int_R_Array1_float(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3897);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3898);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"copyOf expects newLength >= 0, but found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3900);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_float_int_int_R_Array1_float(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_long_R_Array1_long(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3904);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_long_int_int_R_Array1_long(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_long_int_R_Array1_long(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3908);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3909);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"copyOf expects newLength >= 0, but found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3911);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_long_int_int_R_Array1_long(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_int_R_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3915);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3919);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3920);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"copyOf expects newLength >= 0, but found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3922);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_byte_R_Array1_byte(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3926);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_byte_int_int_R_Array1_byte(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_byte_int_R_Array1_byte(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(3930);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(3931);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"copyOf expects newLength >= 0, but found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3932);
	if ((frame[1].i) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(3933);
	clinit_java_lang_NegativeArraySizeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NegativeArraySizeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"copyOf expects newLength >= 0, but found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_NegativeArraySizeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(3935);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_byte_int_int_R_Array1_byte(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_short_R_Array1_short(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3939);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_short_int_int_R_Array1_short(ctx, (frame[0].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[0].o)))->length));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_java_lang_Class_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOfRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(3946);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3947);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"copyOfRange() attempted on null array"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3949);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((frame[1].i) <= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(3950);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(3952);
	if ((frame[1].i) <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(3953);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Expected 'from' parameter in copyOfRange must be <= the 'to' param.  From="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", to="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(3955);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, ((frame[2].i) - (frame[1].i)));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(3956);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[4].o), (jint(0)), ((frame[2].i) - (frame[1].i)));
	LINE_NUMBER(3958);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOfRange", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3964);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(3965);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"copyOfRange() attempted on null array"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(3967);
	if ((frame[1].i) < 0) goto label_3;
	}
	{
	if ((frame[1].i) <= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(3968);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException_int(ctx, sp[0].o, (frame[1].i));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(3970);
	if ((frame[1].i) <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(3971);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Expected 'from' parameter in copyOfRange must be <= the 'to' param.  From="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", to="_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(3973);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_java_lang_Class_R_Array1_java_lang_Object(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOfRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(3999);
	if ((frame[1].i) > (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(4000);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) < (frame[1].i)) goto label_3;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(4001);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(4002);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)));
	frame[4].i = temp0;
	LINE_NUMBER(4003);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(4004);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(4005);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(4007);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(4009);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOfRange_Array1_long_int_int_R_Array1_long(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOfRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(4035);
	if ((frame[1].i) > (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(4036);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) < (frame[1].i)) goto label_3;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(4037);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(4038);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)));
	frame[4].i = temp0;
	LINE_NUMBER(4039);
	sp[0].o = (jobject) createArray(ctx, &class_long, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(4040);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(4041);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(4043);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(4045);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOfRange_Array1_short_int_int_R_Array1_short(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOfRange", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(4071);
	if ((frame[1].i) > (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(4072);
	if ((((jarray) nullCheck(ctx, (frame[0].o)))->length) < (frame[1].i)) goto label_3;
	}
	{
	if ((jint(0)) > (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(4073);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(4074);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[3].i), ((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (frame[1].i)));
	frame[4].i = temp0;
	LINE_NUMBER(4075);
	sp[0].o = (jobject) createArray(ctx, &class_short, (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(4076);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[0].o), (frame[1].i), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(4077);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_3:;
	{
	LINE_NUMBER(4079);
	clinit_java_lang_ArrayIndexOutOfBoundsException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ArrayIndexOutOfBoundsException);
	init_java_lang_ArrayIndexOutOfBoundsException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(4081);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_copyOf_Array1_short_int_R_Array1_short(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:copyOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(4085);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_short_int_int_R_Array1_short(ctx, (frame[0].o), (jint(0)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_spliterator_Array1_java_lang_Object_R_java_util_Spliterator(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:spliterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4089);
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_Array1_java_lang_Object_int_R_java_util_Spliterator(ctx, (frame[0].o), (1040));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_spliterator_Array1_java_lang_Object_int_int_R_java_util_Spliterator(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:spliterator", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(4093);
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_Array1_java_lang_Object_int_int_int_R_java_util_Spliterator(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (1040));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_spliterator_Array1_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:spliterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4097);
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_Array1_int_int_R_java_util_Spliterator$OfInt(ctx, (frame[0].o), (1040));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_spliterator_Array1_int_int_int_R_java_util_Spliterator$OfInt(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:spliterator", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(4101);
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_Array1_int_int_int_int_R_java_util_Spliterator$OfInt(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (1040));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_spliterator_Array1_long_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:spliterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4105);
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_Array1_long_int_R_java_util_Spliterator$OfLong(ctx, (frame[0].o), (1040));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_spliterator_Array1_long_int_int_R_java_util_Spliterator$OfLong(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:spliterator", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(4109);
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_Array1_long_int_int_int_R_java_util_Spliterator$OfLong(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (1040));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_spliterator_Array1_double_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:spliterator", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4113);
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_Array1_double_int_R_java_util_Spliterator$OfDouble(ctx, (frame[0].o), (1040));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_Arrays_spliterator_Array1_double_int_int_R_java_util_Spliterator$OfDouble(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Arrays:spliterator", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Arrays(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(4117);
	sp[0].o = (jobject)SM_java_util_Spliterators_spliterator_Array1_double_int_int_int_R_java_util_Spliterator$OfDouble(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (1040));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_Arrays[] {
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

static jclass innerClasses[] {
	&class_java_util_Arrays$ArrayList,
};

static FieldMetadata fields[] {
	{ "SIMPLE_LENGTH", &class_int, (intptr_t) &SF_java_util_Arrays_SIMPLE_LENGTH, "I", 26 },
};

static MethodMetadata methods[] {
	{ "checkOffsetAndCount", (intptr_t) SM_java_util_Arrays_checkOffsetAndCount_int_int_int, 0, "(III)V", 9 },
	{ "<init>", (intptr_t) init_java_util_Arrays, 0, "()V", 2 },
	{ "asList", (intptr_t) SM_java_util_Arrays_asList_Array1_java_lang_Object_R_java_util_List, 0, "([Ljava/lang/Object;)Ljava/util/List;", 137 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_byte_byte_R_int, 0, "([BB)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_char_char_R_int, 0, "([CC)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_double_double_R_int, 0, "([DD)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_float_float_R_int, 0, "([FF)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_int_int_R_int, 0, "([II)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_long_long_R_int, 0, "([JJ)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_java_lang_Object_R_int, 0, "([Ljava/lang/Object;Ljava/lang/Object;)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_java_lang_Object_java_util_Comparator_R_int, 0, "([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_short_short_R_int, 0, "([SS)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_byte_int_int_byte_R_int, 0, "([BIIB)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_char_int_int_char_R_int, 0, "([CIIC)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_double_int_int_double_R_int, 0, "([DIID)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_float_int_int_float_R_int, 0, "([FIIF)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_int_int_int_int_R_int, 0, "([IIII)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_long_int_int_long_R_int, 0, "([JIIJ)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_int_int_java_lang_Object_R_int, 0, "([Ljava/lang/Object;IILjava/lang/Object;)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_java_lang_Object_int_int_java_lang_Object_java_util_Comparator_R_int, 0, "([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I", 9 },
	{ "binarySearch", (intptr_t) SM_java_util_Arrays_binarySearch_Array1_short_int_int_short_R_int, 0, "([SIIS)I", 9 },
	{ "checkIndexForBinarySearch", (intptr_t) SM_java_util_Arrays_checkIndexForBinarySearch_int_int_int, 0, "(III)V", 10 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_byte_byte, 0, "([BB)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_byte_int_int_byte, 0, "([BIIB)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_short_short, 0, "([SS)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_short_int_int_short, 0, "([SIIS)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_char_char, 0, "([CC)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_char_int_int_char, 0, "([CIIC)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_int_int, 0, "([II)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_int_int_int_int, 0, "([IIII)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_long_long, 0, "([JJ)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_long_int_int_long, 0, "([JIIJ)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_float_float, 0, "([FF)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_float_int_int_float, 0, "([FIIF)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_double_double, 0, "([DD)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_double_int_int_double, 0, "([DIID)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_boolean_boolean, 0, "([ZZ)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_boolean_int_int_boolean, 0, "([ZIIZ)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object, 0, "([Ljava/lang/Object;Ljava/lang/Object;)V", 9 },
	{ "fill", (intptr_t) SM_java_util_Arrays_fill_Array1_java_lang_Object_int_int_java_lang_Object, 0, "([Ljava/lang/Object;IILjava/lang/Object;)V", 9 },
	{ "hashCode", (intptr_t) SM_java_util_Arrays_hashCode_Array1_boolean_R_int, 0, "([Z)I", 9 },
	{ "hashCode", (intptr_t) SM_java_util_Arrays_hashCode_Array1_int_R_int, 0, "([I)I", 9 },
	{ "hashCode", (intptr_t) SM_java_util_Arrays_hashCode_Array1_short_R_int, 0, "([S)I", 9 },
	{ "hashCode", (intptr_t) SM_java_util_Arrays_hashCode_Array1_char_R_int, 0, "([C)I", 9 },
	{ "hashCode", (intptr_t) SM_java_util_Arrays_hashCode_Array1_byte_R_int, 0, "([B)I", 9 },
	{ "hashCode", (intptr_t) SM_java_util_Arrays_hashCode_Array1_long_R_int, 0, "([J)I", 9 },
	{ "hashCode", (intptr_t) SM_java_util_Arrays_hashCode_Array1_float_R_int, 0, "([F)I", 9 },
	{ "hashCode", (intptr_t) SM_java_util_Arrays_hashCode_Array1_double_R_int, 0, "([D)I", 9 },
	{ "hashCode", (intptr_t) SM_java_util_Arrays_hashCode_Array1_java_lang_Object_R_int, 0, "([Ljava/lang/Object;)I", 9 },
	{ "deepHashCode", (intptr_t) SM_java_util_Arrays_deepHashCode_Array1_java_lang_Object_R_int, 0, "([Ljava/lang/Object;)I", 9 },
	{ "deepHashCodeElement", (intptr_t) SM_java_util_Arrays_deepHashCodeElement_java_lang_Object_R_int, 0, "(Ljava/lang/Object;)I", 10 },
	{ "equals", (intptr_t) SM_java_util_Arrays_equals_Array1_byte_Array1_byte_R_boolean, 0, "([B[B)Z", 9 },
	{ "equals", (intptr_t) SM_java_util_Arrays_equals_Array1_short_Array1_short_R_boolean, 0, "([S[S)Z", 9 },
	{ "equals", (intptr_t) SM_java_util_Arrays_equals_Array1_char_Array1_char_R_boolean, 0, "([C[C)Z", 9 },
	{ "equals", (intptr_t) SM_java_util_Arrays_equals_Array1_int_Array1_int_R_boolean, 0, "([I[I)Z", 9 },
	{ "equals", (intptr_t) SM_java_util_Arrays_equals_Array1_long_Array1_long_R_boolean, 0, "([J[J)Z", 9 },
	{ "equals", (intptr_t) SM_java_util_Arrays_equals_Array1_float_Array1_float_R_boolean, 0, "([F[F)Z", 9 },
	{ "equals", (intptr_t) SM_java_util_Arrays_equals_Array1_double_Array1_double_R_boolean, 0, "([D[D)Z", 9 },
	{ "equals", (intptr_t) SM_java_util_Arrays_equals_Array1_boolean_Array1_boolean_R_boolean, 0, "([Z[Z)Z", 9 },
	{ "equals", (intptr_t) SM_java_util_Arrays_equals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean, 0, "([Ljava/lang/Object;[Ljava/lang/Object;)Z", 9 },
	{ "deepEquals", (intptr_t) SM_java_util_Arrays_deepEquals_Array1_java_lang_Object_Array1_java_lang_Object_R_boolean, 0, "([Ljava/lang/Object;[Ljava/lang/Object;)Z", 9 },
	{ "deepEqualsElements", (intptr_t) SM_java_util_Arrays_deepEqualsElements_java_lang_Object_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;Ljava/lang/Object;)Z", 8 },
	{ "isSame", (intptr_t) SM_java_util_Arrays_isSame_double_double_R_boolean, 0, "(DD)Z", 10 },
	{ "lessThan", (intptr_t) SM_java_util_Arrays_lessThan_double_double_R_boolean, 0, "(DD)Z", 10 },
	{ "isSame", (intptr_t) SM_java_util_Arrays_isSame_float_float_R_boolean, 0, "(FF)Z", 10 },
	{ "lessThan", (intptr_t) SM_java_util_Arrays_lessThan_float_float_R_boolean, 0, "(FF)Z", 10 },
	{ "med3", (intptr_t) SM_java_util_Arrays_med3_Array1_byte_int_int_int_R_int, 0, "([BIII)I", 10 },
	{ "med3", (intptr_t) SM_java_util_Arrays_med3_Array1_char_int_int_int_R_int, 0, "([CIII)I", 10 },
	{ "med3", (intptr_t) SM_java_util_Arrays_med3_Array1_double_int_int_int_R_int, 0, "([DIII)I", 10 },
	{ "med3", (intptr_t) SM_java_util_Arrays_med3_Array1_float_int_int_int_R_int, 0, "([FIII)I", 10 },
	{ "med3", (intptr_t) SM_java_util_Arrays_med3_Array1_int_int_int_int_R_int, 0, "([IIII)I", 10 },
	{ "med3", (intptr_t) SM_java_util_Arrays_med3_Array1_long_int_int_int_R_int, 0, "([JIII)I", 10 },
	{ "med3", (intptr_t) SM_java_util_Arrays_med3_Array1_short_int_int_int_R_int, 0, "([SIII)I", 10 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_byte, 0, "([B)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_byte_int_int, 0, "([BII)V", 9 },
	{ "checkBounds", (intptr_t) SM_java_util_Arrays_checkBounds_int_int_int, 0, "(III)V", 10 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_int_int_Array1_byte, 0, "(II[B)V", 10 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_char, 0, "([C)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_char_int_int, 0, "([CII)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_int_int_Array1_char, 0, "(II[C)V", 10 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_double, 0, "([D)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_double_int_int, 0, "([DII)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_int_int_Array1_double, 0, "(II[D)V", 10 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_float, 0, "([F)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_float_int_int, 0, "([FII)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_int_int_Array1_float, 0, "(II[F)V", 10 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_int, 0, "([I)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_int_int_int, 0, "([III)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_int_int_Array1_int, 0, "(II[I)V", 10 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_long, 0, "([J)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_long_int_int, 0, "([JII)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_int_int_Array1_long, 0, "(II[J)V", 10 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_java_lang_Object_int_int, 0, "([Ljava/lang/Object;II)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object, 0, "(II[Ljava/lang/Object;)V", 10 },
	{ "swap", (intptr_t) SM_java_util_Arrays_swap_int_int_Array1_java_lang_Object, 0, "(II[Ljava/lang/Object;)V", 10 },
	{ "mergeSort", (intptr_t) SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int, 0, "([Ljava/lang/Object;[Ljava/lang/Object;II)V", 10 },
	{ "mergeSort", (intptr_t) SM_java_util_Arrays_mergeSort_Array1_java_lang_Object_Array1_java_lang_Object_int_int_java_util_Comparator, 0, "([Ljava/lang/Object;[Ljava/lang/Object;IILjava/util/Comparator;)V", 10 },
	{ "find", (intptr_t) SM_java_util_Arrays_find_Array1_java_lang_Object_java_lang_Comparable_int_int_int_R_int, 0, "([Ljava/lang/Object;Ljava/lang/Comparable;III)I", 10 },
	{ "find", (intptr_t) SM_java_util_Arrays_find_Array1_java_lang_Object_java_lang_Object_int_int_int_java_util_Comparator_R_int, 0, "([Ljava/lang/Object;Ljava/lang/Object;IIILjava/util/Comparator;)I", 10 },
	{ "medChar", (intptr_t) SM_java_util_Arrays_medChar_int_int_int_Array1_java_lang_String_int_R_int, 0, "(III[Ljava/lang/String;I)I", 10 },
	{ "charAt", (intptr_t) SM_java_util_Arrays_charAt_java_lang_String_int_R_int, 0, "(Ljava/lang/String;I)I", 10 },
	{ "copySwap", (intptr_t) SM_java_util_Arrays_copySwap_Array1_java_lang_Object_int_Array1_java_lang_Object_int_int, 0, "([Ljava/lang/Object;I[Ljava/lang/Object;II)V", 10 },
	{ "stableStringSort", (intptr_t) SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_int_int, 0, "([Ljava/lang/String;II)V", 10 },
	{ "stableStringSort", (intptr_t) SM_java_util_Arrays_stableStringSort_Array1_java_lang_String_Array1_java_lang_String_Array1_java_lang_String_int_int_int, 0, "([Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;III)V", 10 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_java_lang_Object_int_int_java_util_Comparator, 0, "([Ljava/lang/Object;IILjava/util/Comparator;)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_int_int_Array1_java_lang_Object_java_util_Comparator, 0, "(II[Ljava/lang/Object;Ljava/util/Comparator;)V", 10 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator, 0, "([Ljava/lang/Object;Ljava/util/Comparator;)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_short, 0, "([S)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_Array1_short_int_int, 0, "([SII)V", 9 },
	{ "sort", (intptr_t) SM_java_util_Arrays_sort_int_int_Array1_short, 0, "(II[S)V", 10 },
	{ "toString", (intptr_t) SM_java_util_Arrays_toString_Array1_boolean_R_java_lang_String, 0, "([Z)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_util_Arrays_toString_Array1_byte_R_java_lang_String, 0, "([B)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_util_Arrays_toString_Array1_char_R_java_lang_String, 0, "([C)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_util_Arrays_toString_Array1_double_R_java_lang_String, 0, "([D)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_util_Arrays_toString_Array1_float_R_java_lang_String, 0, "([F)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_util_Arrays_toString_Array1_int_R_java_lang_String, 0, "([I)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_util_Arrays_toString_Array1_long_R_java_lang_String, 0, "([J)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_util_Arrays_toString_Array1_short_R_java_lang_String, 0, "([S)Ljava/lang/String;", 9 },
	{ "toString", (intptr_t) SM_java_util_Arrays_toString_Array1_java_lang_Object_R_java_lang_String, 0, "([Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "deepToString", (intptr_t) SM_java_util_Arrays_deepToString_Array1_java_lang_Object_R_java_lang_String, 0, "([Ljava/lang/Object;)Ljava/lang/String;", 9 },
	{ "deepToStringImpl", (intptr_t) SM_java_util_Arrays_deepToStringImpl_Array1_java_lang_Object_Array1_java_lang_Object_java_lang_StringBuffer_R_java_lang_String, 0, "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/StringBuffer;)Ljava/lang/String;", 10 },
	{ "isPrimitiveArray", (intptr_t) SM_java_util_Arrays_isPrimitiveArray_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 10 },
	{ "toStringObj", (intptr_t) SM_java_util_Arrays_toStringObj_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/Object;)Ljava/lang/String;", 10 },
	{ "deepToStringImplContains", (intptr_t) SM_java_util_Arrays_deepToStringImplContains_Array1_java_lang_Object_java_lang_Object_R_boolean, 0, "([Ljava/lang/Object;Ljava/lang/Object;)Z", 10 },
	{ "copyOfRange", (intptr_t) SM_java_util_Arrays_copyOfRange_Array1_boolean_int_int_R_Array1_boolean, 0, "([ZII)[Z", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_java_lang_Class_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_java_lang_Object_int_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;I)[Ljava/lang/Object;", 9 },
	{ "copyOfRange", (intptr_t) SM_java_util_Arrays_copyOfRange_Array1_byte_int_int_R_Array1_byte, 0, "([BII)[B", 9 },
	{ "copyOfRange", (intptr_t) SM_java_util_Arrays_copyOfRange_Array1_char_int_int_R_Array1_char, 0, "([CII)[C", 9 },
	{ "copyOfRange", (intptr_t) SM_java_util_Arrays_copyOfRange_Array1_double_int_int_R_Array1_double, 0, "([DII)[D", 9 },
	{ "copyOfRange", (intptr_t) SM_java_util_Arrays_copyOfRange_Array1_float_int_int_R_Array1_float, 0, "([FII)[F", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_boolean_R_Array1_boolean, 0, "([Z)[Z", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_boolean_int_R_Array1_boolean, 0, "([ZI)[Z", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_char_R_Array1_char, 0, "([C)[C", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_char_int_R_Array1_char, 0, "([CI)[C", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_double_R_Array1_double, 0, "([D)[D", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_double_int_R_Array1_double, 0, "([DI)[D", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_float_R_Array1_float, 0, "([F)[F", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_float_int_R_Array1_float, 0, "([FI)[F", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_long_R_Array1_long, 0, "([J)[J", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_long_int_R_Array1_long, 0, "([JI)[J", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_int_R_Array1_int, 0, "([I)[I", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int, 0, "([II)[I", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_byte_R_Array1_byte, 0, "([B)[B", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_byte_int_R_Array1_byte, 0, "([BI)[B", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_short_R_Array1_short, 0, "([S)[S", 9 },
	{ "copyOfRange", (intptr_t) SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_java_lang_Class_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;", 9 },
	{ "copyOfRange", (intptr_t) SM_java_util_Arrays_copyOfRange_Array1_java_lang_Object_int_int_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;II)[Ljava/lang/Object;", 9 },
	{ "copyOfRange", (intptr_t) SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int, 0, "([III)[I", 9 },
	{ "copyOfRange", (intptr_t) SM_java_util_Arrays_copyOfRange_Array1_long_int_int_R_Array1_long, 0, "([JII)[J", 9 },
	{ "copyOfRange", (intptr_t) SM_java_util_Arrays_copyOfRange_Array1_short_int_int_R_Array1_short, 0, "([SII)[S", 9 },
	{ "copyOf", (intptr_t) SM_java_util_Arrays_copyOf_Array1_short_int_R_Array1_short, 0, "([SI)[S", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Arrays_spliterator_Array1_java_lang_Object_R_java_util_Spliterator, 0, "([Ljava/lang/Object;)Ljava/util/Spliterator;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Arrays_spliterator_Array1_java_lang_Object_int_int_R_java_util_Spliterator, 0, "([Ljava/lang/Object;II)Ljava/util/Spliterator;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Arrays_spliterator_Array1_int_R_java_util_Spliterator$OfInt, 0, "([I)Ljava/util/Spliterator$OfInt;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Arrays_spliterator_Array1_int_int_int_R_java_util_Spliterator$OfInt, 0, "([III)Ljava/util/Spliterator$OfInt;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Arrays_spliterator_Array1_long_R_java_util_Spliterator$OfLong, 0, "([J)Ljava/util/Spliterator$OfLong;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Arrays_spliterator_Array1_long_int_int_R_java_util_Spliterator$OfLong, 0, "([JII)Ljava/util/Spliterator$OfLong;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Arrays_spliterator_Array1_double_R_java_util_Spliterator$OfDouble, 0, "([D)Ljava/util/Spliterator$OfDouble;", 9 },
	{ "spliterator", (intptr_t) SM_java_util_Arrays_spliterator_Array1_double_int_int_R_java_util_Spliterator$OfDouble, 0, "([DII)Ljava/util/Spliterator$OfDouble;", 9 },
};

Class class_java_util_Arrays{
		.nativeName = (intptr_t) "java/util/Arrays",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Arrays),
		.classVtable = (intptr_t) vtable_java_util_Arrays,
		.staticInitializer = (intptr_t) clinit_java_util_Arrays,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Arrays,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 161,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Arrays = registerClass(&class_java_util_Arrays);

}
