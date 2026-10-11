#include "java/lang/Math.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/util/Random.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "java/lang/Float.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"

extern "C" {

jdouble SF_java_lang_Math_E;
jdouble SF_java_lang_Math_PI;
jobject SF_java_lang_Math_randomInst;
jbool SF_java_lang_Math_$assertionsDisabled;

void mark_java_lang_Math(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Math_randomInst)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Math_randomInst)->clazz)->markFunction)((jobject) SF_java_lang_Math_randomInst, mark, depth + 1);
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
	auto self = (java_lang_Math *) object;
}

void init_java_lang_Math(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Math_floorDiv_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:floorDiv", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(83);
	frame[2].i = ((frame[0].i) / (frame[1].i));
	LINE_NUMBER(84);
	if (((frame[0].i) ^ (frame[1].i)) >= 0) goto label_2;
	}
	{
	if (((frame[2].i) * (frame[1].i)) == (frame[0].i)) goto label_2;
	}
	LINE_NUMBER(85);
	INST_IINC(2, -1);
label_2:;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Math_floorDiv_long_int_R_long(jcontext ctx, jlong param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:floorDiv", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(92);
	jlong temp0 = (jlong)SM_java_lang_Math_floorDiv_long_long_R_long(ctx, (frame[0].l), (jlong((frame[2].i))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Math_floorDiv_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:floorDiv", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(96);
	frame[4].l = ((frame[0].l) / (frame[2].l));
	LINE_NUMBER(97);
	if ((longCompare(((frame[0].l) ^ (frame[2].l)), (jlong(0)))) >= 0) goto label_2;
	}
	{
	if ((longCompare(((frame[4].l) * (frame[2].l)), (frame[0].l))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(98);
	frame[4].l = ((frame[4].l) - (jlong(1)));
	}
label_2:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (frame[4].l);
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Math_floorMod_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:floorMod", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(105);
	jint temp0 = frame[0].i;
	jint temp1 = (jint)SM_java_lang_Math_floorDiv_int_int_R_int(ctx, (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return (temp0 - (temp1 * (frame[1].i)));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Math_floorMod_long_int_R_int(jcontext ctx, jlong param0, jint param1) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:floorMod", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].l = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(109);
	jlong temp0 = frame[0].l;
	jlong temp1 = (jlong)SM_java_lang_Math_floorDiv_long_int_R_long(ctx, (frame[0].l), (frame[2].i));
	popStackFrame(ctx);
	return (jint((temp0 - (temp1 * (jlong((frame[2].i)))))));
	}

	popStackFrame(ctx);
}

jlong SM_java_lang_Math_floorMod_long_long_R_long(jcontext ctx, jlong param0, jlong param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:floorMod", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].l = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(113);
	jlong temp0 = frame[0].l;
	jlong temp1 = (jlong)SM_java_lang_Math_floorDiv_long_long_R_long(ctx, (frame[0].l), (frame[2].l));
	popStackFrame(ctx);
	return (temp0 - (temp1 * (frame[2].l)));
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Math_random_R_double(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:random", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	{
	LINE_NUMBER(212);
	clinit_java_lang_Math(ctx);
	sp[0].o = (jobject)SF_java_lang_Math_randomInst;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(213);
	clinit_java_util_Random(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Random);
	init_java_util_Random(ctx, sp[0].o);
	clinit_java_lang_Math(ctx);
	SF_java_lang_Math_randomInst = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(214);
	clinit_java_lang_Math(ctx);
	sp[0].o = (jobject)SF_java_lang_Math_randomInst;
	jdouble temp0 = (jdouble)((func_java_util_Random_nextDouble_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Random_nextDouble_R_double])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Math_nextUp_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:nextUp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(243);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 != 0) goto label_1;
	}
	{
	if ((doubleCompare((frame[0].d), (jdouble(std::numeric_limits<double>::infinity())), -1)) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return (frame[0].d);
	}
label_2:;
	{
	LINE_NUMBER(246);
	frame[0].d = ((frame[0].d) + (jdouble(0)));
	LINE_NUMBER(247);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToRawLongBits_double_R_long(ctx, (frame[0].d));
	LINE_NUMBER(248);
	sp[0].l = temp0;
	sp += 1;
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) < 0) goto label_5;
	}
	INST_LCONST(1);
	goto label_6;
label_5:;
	(sp++)->l = jlong(-1ll);
label_6:;
	{
	sp -= 2;
	jlong temp0 = sp[0].l + sp[1].l;
	LINE_NUMBER(247);
	jdouble temp1 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat SM_java_lang_Math_nextUp_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:nextUp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[0].f));
	if (temp0 != 0) goto label_1;
	}
	{
	if ((floatCompare((frame[0].f), (jfloat(std::numeric_limits<float>::infinity())), -1)) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return (frame[0].f);
	}
label_2:;
	{
	LINE_NUMBER(281);
	frame[0].f = ((frame[0].f) + (jfloat(0)));
	LINE_NUMBER(282);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, (frame[0].f));
	LINE_NUMBER(283);
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) < 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(-1);
label_6:;
	{
	sp -= 2;
	jint temp0 = sp[0].i + sp[1].i;
	LINE_NUMBER(282);
	jfloat temp1 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Math_ulp_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:ulp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)SM_java_lang_Math_getExponent_double_R_int(ctx, (frame[0].d));
	frame[2].i = temp0;
	LINE_NUMBER(313);
	switch((frame[2].i)) {
		case -1023: goto label_2;
		case 1024: goto label_3;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(315);
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, (frame[0].d));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return (jdouble(4,900000e-324));
	}
label_4:;
	{
	LINE_NUMBER(321);
	if ((clinit_java_lang_Math(ctx), (jint)SF_java_lang_Math_$assertionsDisabled) != 0) goto label_5;
	}
	{
	if ((frame[2].i) > (1023)) goto label_6;
	}
	{
	if ((frame[2].i) >= (-1022)) goto label_5;
	}
label_6:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(324);
	frame[2].i = ((frame[2].i) - (52));
	LINE_NUMBER(325);
	if ((frame[2].i) < (-1022)) goto label_8;
	}
	{
	LINE_NUMBER(326);
	jdouble temp0 = (jdouble)SM_java_lang_Math_powerOfTwoD_int_R_double(ctx, (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}
label_8:;
	{
	LINE_NUMBER(332);
	jdouble temp0 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, ((jlong(1)) << ((frame[2].i) - (-1074))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_java_lang_Math_ulp_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:ulp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(362);
	jint temp0 = (jint)SM_java_lang_Math_getExponent_float_R_int(ctx, (frame[0].f));
	frame[1].i = temp0;
	LINE_NUMBER(364);
	switch((frame[1].i)) {
		case -127: goto label_2;
		case 128: goto label_3;
		default: goto label_4;
	}
	}
label_3:;
	{
	LINE_NUMBER(366);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (frame[0].f));
	popStackFrame(ctx);
	return temp0;
	}
label_2:;
	{
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return (jfloat(1,401298e-45f));
	}
label_4:;
	{
	LINE_NUMBER(372);
	if ((clinit_java_lang_Math(ctx), (jint)SF_java_lang_Math_$assertionsDisabled) != 0) goto label_5;
	}
	{
	if ((frame[1].i) > (127)) goto label_6;
	}
	{
	if ((frame[1].i) >= (-126)) goto label_5;
	}
label_6:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(375);
	frame[1].i = ((frame[1].i) - (23));
	LINE_NUMBER(376);
	if ((frame[1].i) < (-126)) goto label_8;
	}
	{
	LINE_NUMBER(377);
	jfloat temp0 = (jfloat)SM_java_lang_Math_powerOfTwoF_int_R_float(ctx, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}
label_8:;
	{
	LINE_NUMBER(383);
	jfloat temp0 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, ((jint(1)) << ((frame[1].i) - (-149))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Math_powerOfTwoD_int_R_double(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:powerOfTwoD", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(393);
	if ((clinit_java_lang_Math(ctx), (jint)SF_java_lang_Math_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((frame[0].i) < (-1022)) goto label_2;
	}
	{
	if ((frame[0].i) <= (1023)) goto label_1;
	}
label_2:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(394);
	jdouble temp0 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, ((((jlong((frame[0].i))) + (jlong(1023ll))) << (52)) & (jlong(9218868437227405312ll))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_java_lang_Math_powerOfTwoF_int_R_float(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:powerOfTwoF", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(403);
	if ((clinit_java_lang_Math(ctx), (jint)SF_java_lang_Math_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((frame[0].i) < (-126)) goto label_2;
	}
	{
	if ((frame[0].i) <= (127)) goto label_1;
	}
label_2:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(404);
	jfloat temp0 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, ((((frame[0].i) + (127)) << (23)) & (jint(2139095040))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Math_getExponent_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:getExponent", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(429);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, (frame[0].f));
	popStackFrame(ctx);
	return (((temp0 & (jint(2139095040))) >> (23)) - (127));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Math_getExponent_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:getExponent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(453);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToRawLongBits_double_R_long(ctx, (frame[0].d));
	popStackFrame(ctx);
	return (jint((((temp0 & (jlong(9218868437227405312ll))) >> (52)) - (jlong(1023ll)))));
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Math_toDegrees_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:toDegrees", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return ((frame[0].d) * (jdouble(57.2957795)));
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Math_toRadians_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:toRadians", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return ((frame[0].d) / (jdouble(57.2957795)));
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Math_copySign_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:copySign", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(487);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToRawLongBits_double_R_long(ctx, (frame[2].d));
	jlong temp1 = temp0 & (bit_cast<jlong>(0x8000000000000000ll));
	jlong temp2 = (jlong)SM_java_lang_Double_doubleToRawLongBits_double_R_long(ctx, (frame[0].d));
	jdouble temp3 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, (temp1 | (temp2 & (jlong(9223372036854775807ll)))));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jfloat SM_java_lang_Math_copySign_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:copySign", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(506);
	jint temp0 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, (frame[1].f));
	jint temp1 = temp0 & (bit_cast<jint>(0x80000000));
	jint temp2 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, (frame[0].f));
	jfloat temp3 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, (temp1 | (temp2 & (jint(2147483647)))));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Math_signum_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:signum", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(527);
	if ((doubleCompare((frame[0].d), (jdouble(0)), -1)) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_DLOAD(0);
	goto label_3;
label_2:;
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_copySign_double_double_R_double(ctx, (jdouble(1)), (frame[0].d));
	sp[0].d = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jfloat SM_java_lang_Math_signum_float_R_float(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:signum", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(548);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[0].f));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_FLOAD(0);
	goto label_3;
label_2:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_copySign_float_float_R_float(ctx, (jfloat(1)), (frame[0].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jlong SM_java_lang_Math_round_double_R_long(jcontext ctx, jdouble param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:round", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(571);
	if ((doubleCompare((frame[0].d), (frame[0].d), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(572);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_1:;
	{
	LINE_NUMBER(574);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, ((frame[0].d) + (jdouble(0.5))));
	popStackFrame(ctx);
	return (jlong(temp0));
	}

	popStackFrame(ctx);
}

jint SM_java_lang_Math_round_float_R_int(jcontext ctx, jfloat param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:round", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(597);
	if ((floatCompare((frame[0].f), (frame[0].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(600);
	jdouble temp0 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble(((frame[0].f) + (jfloat(0.5f))))));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Math_nextDown_double_R_double(jcontext ctx, jdouble param0) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:nextDown", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(604);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(605);
	popStackFrame(ctx);
	return (frame[0].d);
	}
label_1:;
	{
	LINE_NUMBER(607);
	if ((doubleCompare((frame[0].d), (jdouble(-std::numeric_limits<double>::infinity())), -1)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(608);
	popStackFrame(ctx);
	return (frame[0].d);
	}
label_3:;
	{
	LINE_NUMBER(610);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[2].l = temp0;
	LINE_NUMBER(611);
	if ((longCompare(((frame[2].l) & (bit_cast<jlong>(0x8000000000000000ll))), (jlong(0)))) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(612);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(613);
	frame[2].l = ((frame[2].l) + (jlong(1)));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(615);
	frame[2].l = ((frame[2].l) - (jlong(1)));
	}
label_11:;
	{
	LINE_NUMBER(617);
	jdouble temp0 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, (frame[2].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jdouble SM_java_lang_Math_nextAfter_double_double_R_double(jcontext ctx, jdouble param0, jdouble param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:nextAfter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].d = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(621);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Math.nextAfter() not supported.  Use MathUtil.nextAfter()"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jfloat SM_java_lang_Math_nextAfter_float_double_R_float(jcontext ctx, jfloat param0, jdouble param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:nextAfter", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	frame[0].f = param0;
	frame[1].d = param1;
	{
	LINE_NUMBER(625);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Math.nextAfter() not supported.  Use MathUtil.nextAfter()"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_java_lang_Math(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_lang_Math_E = jdouble(2.718281828459045);
	SF_java_lang_Math_PI = jdouble(3.141592653589793);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Math:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Math(ctx);
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_lang_Math)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_java_lang_Math)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_java_lang_Math(ctx);
	SF_java_lang_Math_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_lang_Math[] {
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

static FieldMetadata fields[] {
	{ "E", &class_double, (intptr_t) &SF_java_lang_Math_E, "D", 25 },
	{ "PI", &class_double, (intptr_t) &SF_java_lang_Math_PI, "D", 25 },
	{ "randomInst", &class_java_util_Random, (intptr_t) &SF_java_lang_Math_randomInst, "Ljava/util/Random;", 10 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_java_lang_Math_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_Math, 0, "()V", 1 },
	{ "abs", (intptr_t) SM_java_lang_Math_abs_double_R_double, 0, "(D)D", 265 },
	{ "abs", (intptr_t) SM_java_lang_Math_abs_float_R_float, 0, "(F)F", 265 },
	{ "abs", (intptr_t) SM_java_lang_Math_abs_int_R_int, 0, "(I)I", 265 },
	{ "abs", (intptr_t) SM_java_lang_Math_abs_long_R_long, 0, "(J)J", 265 },
	{ "ceil", (intptr_t) SM_java_lang_Math_ceil_double_R_double, 0, "(D)D", 265 },
	{ "floor", (intptr_t) SM_java_lang_Math_floor_double_R_double, 0, "(D)D", 265 },
	{ "floorDiv", (intptr_t) SM_java_lang_Math_floorDiv_int_int_R_int, 0, "(II)I", 9 },
	{ "floorDiv", (intptr_t) SM_java_lang_Math_floorDiv_long_int_R_long, 0, "(JI)J", 9 },
	{ "floorDiv", (intptr_t) SM_java_lang_Math_floorDiv_long_long_R_long, 0, "(JJ)J", 9 },
	{ "floorMod", (intptr_t) SM_java_lang_Math_floorMod_int_int_R_int, 0, "(II)I", 9 },
	{ "floorMod", (intptr_t) SM_java_lang_Math_floorMod_long_int_R_int, 0, "(JI)I", 9 },
	{ "floorMod", (intptr_t) SM_java_lang_Math_floorMod_long_long_R_long, 0, "(JJ)J", 9 },
	{ "max", (intptr_t) SM_java_lang_Math_max_double_double_R_double, 0, "(DD)D", 265 },
	{ "pow", (intptr_t) SM_java_lang_Math_pow_double_double_R_double, 0, "(DD)D", 265 },
	{ "max", (intptr_t) SM_java_lang_Math_max_float_float_R_float, 0, "(FF)F", 265 },
	{ "max", (intptr_t) SM_java_lang_Math_max_int_int_R_int, 0, "(II)I", 265 },
	{ "max", (intptr_t) SM_java_lang_Math_max_long_long_R_long, 0, "(JJ)J", 265 },
	{ "min", (intptr_t) SM_java_lang_Math_min_double_double_R_double, 0, "(DD)D", 265 },
	{ "min", (intptr_t) SM_java_lang_Math_min_float_float_R_float, 0, "(FF)F", 265 },
	{ "min", (intptr_t) SM_java_lang_Math_min_int_int_R_int, 0, "(II)I", 265 },
	{ "min", (intptr_t) SM_java_lang_Math_min_long_long_R_long, 0, "(JJ)J", 265 },
	{ "cos", (intptr_t) SM_java_lang_Math_cos_double_R_double, 0, "(D)D", 265 },
	{ "sin", (intptr_t) SM_java_lang_Math_sin_double_R_double, 0, "(D)D", 265 },
	{ "sqrt", (intptr_t) SM_java_lang_Math_sqrt_double_R_double, 0, "(D)D", 265 },
	{ "cbrt", (intptr_t) SM_java_lang_Math_cbrt_double_R_double, 0, "(D)D", 265 },
	{ "tan", (intptr_t) SM_java_lang_Math_tan_double_R_double, 0, "(D)D", 265 },
	{ "atan", (intptr_t) SM_java_lang_Math_atan_double_R_double, 0, "(D)D", 265 },
	{ "asin", (intptr_t) SM_java_lang_Math_asin_double_R_double, 0, "(D)D", 265 },
	{ "acos", (intptr_t) SM_java_lang_Math_acos_double_R_double, 0, "(D)D", 265 },
	{ "atan2", (intptr_t) SM_java_lang_Math_atan2_double_double_R_double, 0, "(DD)D", 265 },
	{ "sinh", (intptr_t) SM_java_lang_Math_sinh_double_R_double, 0, "(D)D", 265 },
	{ "cosh", (intptr_t) SM_java_lang_Math_cosh_double_R_double, 0, "(D)D", 265 },
	{ "tanh", (intptr_t) SM_java_lang_Math_tanh_double_R_double, 0, "(D)D", 265 },
	{ "exp", (intptr_t) SM_java_lang_Math_exp_double_R_double, 0, "(D)D", 265 },
	{ "expm1", (intptr_t) SM_java_lang_Math_expm1_double_R_double, 0, "(D)D", 265 },
	{ "log10", (intptr_t) SM_java_lang_Math_log10_double_R_double, 0, "(D)D", 265 },
	{ "log1p", (intptr_t) SM_java_lang_Math_log1p_double_R_double, 0, "(D)D", 265 },
	{ "rint", (intptr_t) SM_java_lang_Math_rint_double_R_double, 0, "(D)D", 265 },
	{ "IEEEremainder", (intptr_t) SM_java_lang_Math_IEEEremainder_double_double_R_double, 0, "(DD)D", 265 },
	{ "log", (intptr_t) SM_java_lang_Math_log_double_R_double, 0, "(D)D", 265 },
	{ "hypot", (intptr_t) SM_java_lang_Math_hypot_double_double_R_double, 0, "(DD)D", 265 },
	{ "random", (intptr_t) SM_java_lang_Math_random_R_double, 0, "()D", 9 },
	{ "nextUp", (intptr_t) SM_java_lang_Math_nextUp_double_R_double, 0, "(D)D", 9 },
	{ "nextUp", (intptr_t) SM_java_lang_Math_nextUp_float_R_float, 0, "(F)F", 9 },
	{ "ulp", (intptr_t) SM_java_lang_Math_ulp_double_R_double, 0, "(D)D", 9 },
	{ "ulp", (intptr_t) SM_java_lang_Math_ulp_float_R_float, 0, "(F)F", 9 },
	{ "powerOfTwoD", (intptr_t) SM_java_lang_Math_powerOfTwoD_int_R_double, 0, "(I)D", 8 },
	{ "powerOfTwoF", (intptr_t) SM_java_lang_Math_powerOfTwoF_int_R_float, 0, "(I)F", 8 },
	{ "getExponent", (intptr_t) SM_java_lang_Math_getExponent_float_R_int, 0, "(F)I", 9 },
	{ "getExponent", (intptr_t) SM_java_lang_Math_getExponent_double_R_int, 0, "(D)I", 9 },
	{ "toDegrees", (intptr_t) SM_java_lang_Math_toDegrees_double_R_double, 0, "(D)D", 9 },
	{ "toRadians", (intptr_t) SM_java_lang_Math_toRadians_double_R_double, 0, "(D)D", 9 },
	{ "copySign", (intptr_t) SM_java_lang_Math_copySign_double_double_R_double, 0, "(DD)D", 9 },
	{ "copySign", (intptr_t) SM_java_lang_Math_copySign_float_float_R_float, 0, "(FF)F", 9 },
	{ "signum", (intptr_t) SM_java_lang_Math_signum_double_R_double, 0, "(D)D", 9 },
	{ "signum", (intptr_t) SM_java_lang_Math_signum_float_R_float, 0, "(F)F", 9 },
	{ "round", (intptr_t) SM_java_lang_Math_round_double_R_long, 0, "(D)J", 9 },
	{ "round", (intptr_t) SM_java_lang_Math_round_float_R_int, 0, "(F)I", 9 },
	{ "nextDown", (intptr_t) SM_java_lang_Math_nextDown_double_R_double, 0, "(D)D", 9 },
	{ "nextAfter", (intptr_t) SM_java_lang_Math_nextAfter_double_double_R_double, 0, "(DD)D", 9 },
	{ "nextAfter", (intptr_t) SM_java_lang_Math_nextAfter_float_double_R_float, 0, "(FD)F", 9 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Math, 0, "()V", 8 },
};

Class class_java_lang_Math{
		.nativeName = (intptr_t) "java/lang/Math",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_Math),
		.classVtable = (intptr_t) vtable_java_lang_Math,
		.staticInitializer = (intptr_t) clinit_java_lang_Math,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Math,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 63,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Math = registerClass(&class_java_lang_Math);

}
