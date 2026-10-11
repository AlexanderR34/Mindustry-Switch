#include "rhino/v8dtoa/DoubleConversion.h"
#include "java/lang/Object.h"
#include "rhino/v8dtoa/DoubleConversion.h"
#include "java/lang/Double.h"

extern "C" {

jlong SF_rhino_v8dtoa_DoubleConversion_kSignMask;
jlong SF_rhino_v8dtoa_DoubleConversion_kExponentMask;
jlong SF_rhino_v8dtoa_DoubleConversion_kSignificandMask;
jlong SF_rhino_v8dtoa_DoubleConversion_kHiddenBit;
jint SF_rhino_v8dtoa_DoubleConversion_kPhysicalSignificandSize;
jint SF_rhino_v8dtoa_DoubleConversion_kSignificandSize;
jint SF_rhino_v8dtoa_DoubleConversion_kExponentBias;
jint SF_rhino_v8dtoa_DoubleConversion_kDenormalExponent;

void mark_rhino_v8dtoa_DoubleConversion(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_v8dtoa_DoubleConversion *) object;
}

void clinit_rhino_v8dtoa_DoubleConversion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_v8dtoa_DoubleConversion_kSignMask = bit_cast<jlong>(0x8000000000000000ll);
	SF_rhino_v8dtoa_DoubleConversion_kExponentMask = jlong(9218868437227405312ll);
	SF_rhino_v8dtoa_DoubleConversion_kSignificandMask = jlong(4503599627370495ll);
	SF_rhino_v8dtoa_DoubleConversion_kHiddenBit = jlong(4503599627370496ll);
	SF_rhino_v8dtoa_DoubleConversion_kPhysicalSignificandSize = jint(52);
	SF_rhino_v8dtoa_DoubleConversion_kSignificandSize = jint(53);
	SF_rhino_v8dtoa_DoubleConversion_kExponentBias = jint(1075);
	SF_rhino_v8dtoa_DoubleConversion_kDenormalExponent = jint(-1074);
}

void init_rhino_v8dtoa_DoubleConversion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleConversion:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleConversion(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_rhino_v8dtoa_DoubleConversion_exponent_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleConversion:exponent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleConversion(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(47);
	jint temp0 = (jint)SM_rhino_v8dtoa_DoubleConversion_isDenormal_long_R_boolean(ctx, (frame[0].l));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (-1074);
	}
label_1:;
	{
	LINE_NUMBER(50);
	frame[2].i = (jint((((frame[0].l) & (jlong(9218868437227405312ll))) >> (52))));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return ((frame[2].i) - (1075));
	}

	popStackFrame(ctx);
}

jlong SM_rhino_v8dtoa_DoubleConversion_significand_long_R_long(jcontext ctx, jlong param0) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleConversion:significand", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleConversion(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(55);
	frame[2].l = ((frame[0].l) & (jlong(4503599627370495ll)));
	LINE_NUMBER(56);
	jint temp0 = (jint)SM_rhino_v8dtoa_DoubleConversion_isDenormal_long_R_boolean(ctx, (frame[0].l));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return ((frame[2].l) + (jlong(4503599627370496ll)));
	}
label_2:;
	{
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (frame[2].l);
	}

	popStackFrame(ctx);
}

jbool SM_rhino_v8dtoa_DoubleConversion_isDenormal_long_R_boolean(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleConversion:isDenormal", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleConversion(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(64);
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

jint SM_rhino_v8dtoa_DoubleConversion_sign_long_R_int(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleConversion:sign", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleConversion(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(68);
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

jint SM_rhino_v8dtoa_DoubleConversion_doubleToInt32_double_R_int(jcontext ctx, jdouble param0) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/v8dtoa/DoubleConversion:doubleToInt32", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_v8dtoa_DoubleConversion(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(72);
	frame[2].i = (jint((frame[0].d)));
	LINE_NUMBER(73);
	if ((doubleCompare((jdouble((frame[2].i))), (frame[0].d), -1)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (frame[2].i);
	}
label_2:;
	{
	LINE_NUMBER(76);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[0].d));
	frame[3].l = temp0;
	LINE_NUMBER(77);
	jint temp1 = (jint)SM_rhino_v8dtoa_DoubleConversion_exponent_long_R_int(ctx, (frame[3].l));
	frame[5].i = temp1;
	LINE_NUMBER(78);
	if ((frame[5].i) <= (-53)) goto label_6;
	}
	{
	if ((frame[5].i) <= (31)) goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(81);
	jlong temp0 = (jlong)SM_rhino_v8dtoa_DoubleConversion_significand_long_R_long(ctx, (frame[3].l));
	frame[6].l = temp0;
	LINE_NUMBER(82);
	jint temp1 = (jint)SM_rhino_v8dtoa_DoubleConversion_sign_long_R_int(ctx, (frame[3].l));
	sp[0].i = temp1;
	sp += 1;
	if ((frame[5].i) >= 0) goto label_9;
	}
	{
	jlong temp0 = (frame[6].l) >> (-(frame[5].i));
	sp[0].l = temp0;
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	jlong temp0 = (frame[6].l) << (frame[5].i);
	sp[0].l = temp0;
	sp += 1;
	}
label_10:;
	{
	sp -= 2;
	popStackFrame(ctx);
	return (sp[0].i * (jint(sp[1].l)));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_v8dtoa_DoubleConversion[] {
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
	{ "kSignMask", &class_long, (intptr_t) &SF_rhino_v8dtoa_DoubleConversion_kSignMask, "J", 26 },
	{ "kExponentMask", &class_long, (intptr_t) &SF_rhino_v8dtoa_DoubleConversion_kExponentMask, "J", 26 },
	{ "kSignificandMask", &class_long, (intptr_t) &SF_rhino_v8dtoa_DoubleConversion_kSignificandMask, "J", 26 },
	{ "kHiddenBit", &class_long, (intptr_t) &SF_rhino_v8dtoa_DoubleConversion_kHiddenBit, "J", 26 },
	{ "kPhysicalSignificandSize", &class_int, (intptr_t) &SF_rhino_v8dtoa_DoubleConversion_kPhysicalSignificandSize, "I", 26 },
	{ "kSignificandSize", &class_int, (intptr_t) &SF_rhino_v8dtoa_DoubleConversion_kSignificandSize, "I", 26 },
	{ "kExponentBias", &class_int, (intptr_t) &SF_rhino_v8dtoa_DoubleConversion_kExponentBias, "I", 26 },
	{ "kDenormalExponent", &class_int, (intptr_t) &SF_rhino_v8dtoa_DoubleConversion_kDenormalExponent, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_v8dtoa_DoubleConversion, 0, "()V", 2 },
	{ "exponent", (intptr_t) SM_rhino_v8dtoa_DoubleConversion_exponent_long_R_int, 0, "(J)I", 10 },
	{ "significand", (intptr_t) SM_rhino_v8dtoa_DoubleConversion_significand_long_R_long, 0, "(J)J", 10 },
	{ "isDenormal", (intptr_t) SM_rhino_v8dtoa_DoubleConversion_isDenormal_long_R_boolean, 0, "(J)Z", 10 },
	{ "sign", (intptr_t) SM_rhino_v8dtoa_DoubleConversion_sign_long_R_int, 0, "(J)I", 10 },
	{ "doubleToInt32", (intptr_t) SM_rhino_v8dtoa_DoubleConversion_doubleToInt32_double_R_int, 0, "(D)I", 9 },
};

Class class_rhino_v8dtoa_DoubleConversion{
		.nativeName = (intptr_t) "rhino/v8dtoa/DoubleConversion",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_v8dtoa_DoubleConversion),
		.classVtable = (intptr_t) vtable_rhino_v8dtoa_DoubleConversion,
		.staticInitializer = (intptr_t) clinit_rhino_v8dtoa_DoubleConversion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_v8dtoa_DoubleConversion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_v8dtoa_DoubleConversion = registerClass(&class_rhino_v8dtoa_DoubleConversion);

}
