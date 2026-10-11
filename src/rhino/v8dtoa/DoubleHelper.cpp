#include "rhino/v8dtoa/DoubleHelper.h"
#include "java/lang/Object.h"
#include "rhino/v8dtoa/DoubleHelper.h"
#include "java/lang/AssertionError.h"
#include "rhino/v8dtoa/DiyFp.h"
#include "java/lang/Class.h"

extern "C" {

jlong SF_rhino_v8dtoa_DoubleHelper_kSignMask;
jlong SF_rhino_v8dtoa_DoubleHelper_kExponentMask;
jlong SF_rhino_v8dtoa_DoubleHelper_kSignificandMask;
jlong SF_rhino_v8dtoa_DoubleHelper_kHiddenBit;
jint SF_rhino_v8dtoa_DoubleHelper_kSignificandSize;
jint SF_rhino_v8dtoa_DoubleHelper_kExponentBias;
jint SF_rhino_v8dtoa_DoubleHelper_kDenormalExponent;
jbool SF_rhino_v8dtoa_DoubleHelper_$assertionsDisabled;

void mark_rhino_v8dtoa_DoubleHelper(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_v8dtoa_DoubleHelper *) object;
}

void init_rhino_v8dtoa_DoubleHelper(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(34);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_v8dtoa_DoubleHelper_asDiyFp_long_R_rhino_v8dtoa_DiyFp(jcontext ctx, jlong param0) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:asDiyFp", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(42);
	if ((clinit_rhino_v8dtoa_DoubleHelper(ctx), (jint)SF_rhino_v8dtoa_DoubleHelper_$assertionsDisabled) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_rhino_v8dtoa_DoubleHelper_isSpecial_long_R_boolean(ctx, (frame[0].l));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(43);
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	jlong temp0 = (jlong)SM_rhino_v8dtoa_DoubleHelper_significand_long_R_long(ctx, (frame[0].l));
	jint temp1 = (jint)SM_rhino_v8dtoa_DoubleHelper_exponent_long_R_int(ctx, (frame[0].l));
	init_rhino_v8dtoa_DiyFp_long_int(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_v8dtoa_DoubleHelper_asNormalizedDiyFp_long_R_rhino_v8dtoa_DiyFp(jcontext ctx, jlong param0) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:asNormalizedDiyFp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(48);
	jlong temp0 = (jlong)SM_rhino_v8dtoa_DoubleHelper_significand_long_R_long(ctx, (frame[0].l));
	frame[2].l = temp0;
	LINE_NUMBER(49);
	jint temp1 = (jint)SM_rhino_v8dtoa_DoubleHelper_exponent_long_R_int(ctx, (frame[0].l));
	frame[4].i = temp1;
	LINE_NUMBER(51);
	if ((clinit_rhino_v8dtoa_DoubleHelper(ctx), (jint)SF_rhino_v8dtoa_DoubleHelper_$assertionsDisabled) != 0) goto label_3;
	}
	{
	if ((longCompare((frame[2].l), (jlong(0)))) != 0) goto label_3;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(54);
	if ((longCompare(((frame[2].l) & (jlong(4503599627370496ll))), (jlong(0)))) != 0) goto label_4;
	}
	{
	LINE_NUMBER(55);
	frame[2].l = ((frame[2].l) << (jint(1)));
	LINE_NUMBER(56);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(59);
	frame[2].l = ((frame[2].l) << (11));
	LINE_NUMBER(60);
	INST_IINC(4, -11);
	LINE_NUMBER(61);
	clinit_rhino_v8dtoa_DiyFp(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_v8dtoa_DiyFp);
	init_rhino_v8dtoa_DiyFp_long_int(ctx, sp[0].o, (frame[2].l), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_rhino_v8dtoa_DoubleHelper_exponent_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:exponent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(65);
	jint temp0 = (jint)SM_rhino_v8dtoa_DoubleHelper_isDenormal_long_R_boolean(ctx, (frame[0].l));
	if (temp0 == 0) goto label_1;
	}
	INST_SIPUSH(-1074);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(67);
	frame[2].i = (jint(((bit_cast<jlong>(bit_cast<uint64_t>(((frame[0].l) & (jlong(9218868437227405312ll)))) >> (52))) & (jlong(4294967295ll)))));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return ((frame[2].i) - (1075));
	}

	popStackFrame(ctx);
}

jlong SM_rhino_v8dtoa_DoubleHelper_significand_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:significand", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(72);
	frame[2].l = ((frame[0].l) & (jlong(4503599627370495ll)));
	LINE_NUMBER(73);
	jint temp0 = (jint)SM_rhino_v8dtoa_DoubleHelper_isDenormal_long_R_boolean(ctx, (frame[0].l));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return ((frame[2].l) + (jlong(4503599627370496ll)));
	}
label_2:;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[2].l);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_v8dtoa_DoubleHelper_isDenormal_long_R_boolean(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:isDenormal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(81);
	if ((longCompare(((frame[0].l) & (jlong(9218868437227405312ll))), (jlong(0)))) != 0) goto label_1;
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

jbool SM_rhino_v8dtoa_DoubleHelper_isSpecial_long_R_boolean(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:isSpecial", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(87);
	if ((longCompare(((frame[0].l) & (jlong(9218868437227405312ll))), (jlong(9218868437227405312ll)))) != 0) goto label_1;
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

jbool SM_rhino_v8dtoa_DoubleHelper_isNan_long_R_boolean(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:isNan", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(91);
	if ((longCompare(((frame[0].l) & (jlong(9218868437227405312ll))), (jlong(9218868437227405312ll)))) != 0) goto label_1;
	}
	{
	if ((longCompare(((frame[0].l) & (jlong(4503599627370495ll))), (jlong(0)))) == 0) goto label_1;
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

jbool SM_rhino_v8dtoa_DoubleHelper_isInfinite_long_R_boolean(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:isInfinite", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(97);
	if ((longCompare(((frame[0].l) & (jlong(9218868437227405312ll))), (jlong(9218868437227405312ll)))) != 0) goto label_1;
	}
	{
	if ((longCompare(((frame[0].l) & (jlong(4503599627370495ll))), (jlong(0)))) != 0) goto label_1;
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

jint SM_rhino_v8dtoa_DoubleHelper_sign_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:sign", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(103);
	if ((longCompare(((frame[0].l) & (bit_cast<jlong>(0x8000000000000000ll))), (jlong(0)))) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(-1);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_rhino_v8dtoa_DoubleHelper_normalizedBoundaries_long_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp(jcontext ctx, jlong param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:normalizedBoundaries", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)SM_rhino_v8dtoa_DoubleHelper_asDiyFp_long_R_rhino_v8dtoa_DiyFp(ctx, (frame[0].l));
	frame[4].o = sp[0].o;
	LINE_NUMBER(112);
	jlong temp0 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[4].o));
	if ((longCompare(temp0, (jlong(4503599627370496ll)))) != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(113);
	sp[0].o = frame[3].o;
	jlong temp0 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[4].o));
	((func_rhino_v8dtoa_DiyFp_setF_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setF_long])(ctx, sp[0].o, ((temp0 << (jint(1))) + (jlong(1))));
	LINE_NUMBER(114);
	sp[0].o = frame[3].o;
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[4].o));
	((func_rhino_v8dtoa_DiyFp_setE_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setE_int])(ctx, sp[0].o, (temp1 - (jint(1))));
	LINE_NUMBER(115);
	((func_rhino_v8dtoa_DiyFp_normalize) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_normalize])(ctx, (frame[3].o));
	LINE_NUMBER(116);
	if ((frame[5].i) == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[4].o));
	if (temp0 == (-1074)) goto label_8;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[4].o));
	((func_rhino_v8dtoa_DiyFp_setF_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setF_long])(ctx, sp[0].o, ((temp0 << (jint(2))) - (jlong(1))));
	LINE_NUMBER(124);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[4].o));
	((func_rhino_v8dtoa_DiyFp_setE_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setE_int])(ctx, sp[0].o, (temp1 - (jint(2))));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(126);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[4].o));
	((func_rhino_v8dtoa_DiyFp_setF_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setF_long])(ctx, sp[0].o, ((temp0 << (jint(1))) - (jlong(1))));
	LINE_NUMBER(127);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[4].o));
	((func_rhino_v8dtoa_DiyFp_setE_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setE_int])(ctx, sp[0].o, (temp1 - (jint(1))));
	}
label_11:;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[2].o;
	jlong temp0 = (jlong)((func_rhino_v8dtoa_DiyFp_f_R_long) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_f_R_long])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[2].o));
	jint temp2 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[3].o));
	((func_rhino_v8dtoa_DiyFp_setF_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setF_long])(ctx, sp[0].o, (temp0 << (temp1 - temp2)));
	LINE_NUMBER(130);
	sp[0].o = frame[2].o;
	jint temp3 = (jint)((func_rhino_v8dtoa_DiyFp_e_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_v8dtoa_DiyFp_e_R_int])(ctx, (frame[3].o));
	((func_rhino_v8dtoa_DiyFp_setE_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_v8dtoa_DiyFp_setE_int])(ctx, sp[0].o, temp3);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_rhino_v8dtoa_DoubleHelper(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_v8dtoa_DoubleHelper_kSignMask = bit_cast<jlong>(0x8000000000000000ll);
	SF_rhino_v8dtoa_DoubleHelper_kExponentMask = jlong(9218868437227405312ll);
	SF_rhino_v8dtoa_DoubleHelper_kSignificandMask = jlong(4503599627370495ll);
	SF_rhino_v8dtoa_DoubleHelper_kHiddenBit = jlong(4503599627370496ll);
	SF_rhino_v8dtoa_DoubleHelper_kSignificandSize = jint(52);
	SF_rhino_v8dtoa_DoubleHelper_kExponentBias = jint(1075);
	SF_rhino_v8dtoa_DoubleHelper_kDenormalExponent = jint(-1074);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleHelper:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_v8dtoa_DoubleHelper)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_v8dtoa_DoubleHelper)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_rhino_v8dtoa_DoubleHelper(ctx);
	SF_rhino_v8dtoa_DoubleHelper_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_v8dtoa_DoubleHelper[] {
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
	{ "kSignMask", &class_long, (intptr_t) &SF_rhino_v8dtoa_DoubleHelper_kSignMask, "J", 24 },
	{ "kExponentMask", &class_long, (intptr_t) &SF_rhino_v8dtoa_DoubleHelper_kExponentMask, "J", 24 },
	{ "kSignificandMask", &class_long, (intptr_t) &SF_rhino_v8dtoa_DoubleHelper_kSignificandMask, "J", 24 },
	{ "kHiddenBit", &class_long, (intptr_t) &SF_rhino_v8dtoa_DoubleHelper_kHiddenBit, "J", 24 },
	{ "kSignificandSize", &class_int, (intptr_t) &SF_rhino_v8dtoa_DoubleHelper_kSignificandSize, "I", 26 },
	{ "kExponentBias", &class_int, (intptr_t) &SF_rhino_v8dtoa_DoubleHelper_kExponentBias, "I", 26 },
	{ "kDenormalExponent", &class_int, (intptr_t) &SF_rhino_v8dtoa_DoubleHelper_kDenormalExponent, "I", 26 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_v8dtoa_DoubleHelper_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_v8dtoa_DoubleHelper, 0, "()V", 1 },
	{ "asDiyFp", (intptr_t) SM_rhino_v8dtoa_DoubleHelper_asDiyFp_long_R_rhino_v8dtoa_DiyFp, 0, "(J)Lrhino/v8dtoa/DiyFp;", 8 },
	{ "asNormalizedDiyFp", (intptr_t) SM_rhino_v8dtoa_DoubleHelper_asNormalizedDiyFp_long_R_rhino_v8dtoa_DiyFp, 0, "(J)Lrhino/v8dtoa/DiyFp;", 8 },
	{ "exponent", (intptr_t) SM_rhino_v8dtoa_DoubleHelper_exponent_long_R_int, 0, "(J)I", 8 },
	{ "significand", (intptr_t) SM_rhino_v8dtoa_DoubleHelper_significand_long_R_long, 0, "(J)J", 8 },
	{ "isDenormal", (intptr_t) SM_rhino_v8dtoa_DoubleHelper_isDenormal_long_R_boolean, 0, "(J)Z", 8 },
	{ "isSpecial", (intptr_t) SM_rhino_v8dtoa_DoubleHelper_isSpecial_long_R_boolean, 0, "(J)Z", 8 },
	{ "isNan", (intptr_t) SM_rhino_v8dtoa_DoubleHelper_isNan_long_R_boolean, 0, "(J)Z", 8 },
	{ "isInfinite", (intptr_t) SM_rhino_v8dtoa_DoubleHelper_isInfinite_long_R_boolean, 0, "(J)Z", 8 },
	{ "sign", (intptr_t) SM_rhino_v8dtoa_DoubleHelper_sign_long_R_int, 0, "(J)I", 8 },
	{ "normalizedBoundaries", (intptr_t) SM_rhino_v8dtoa_DoubleHelper_normalizedBoundaries_long_rhino_v8dtoa_DiyFp_rhino_v8dtoa_DiyFp, 0, "(JLrhino/v8dtoa/DiyFp;Lrhino/v8dtoa/DiyFp;)V", 8 },
	{ "<clinit>", (intptr_t) clinit_rhino_v8dtoa_DoubleHelper, 0, "()V", 8 },
};

Class class_rhino_v8dtoa_DoubleHelper{
		.nativeName = (intptr_t) "rhino/v8dtoa/DoubleHelper",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_v8dtoa_DoubleHelper),
		.classVtable = (intptr_t) vtable_rhino_v8dtoa_DoubleHelper,
		.staticInitializer = (intptr_t) clinit_rhino_v8dtoa_DoubleHelper,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_v8dtoa_DoubleHelper,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_v8dtoa_DoubleHelper = registerClass(&class_rhino_v8dtoa_DoubleHelper);

}
