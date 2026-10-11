#include "java/math/BitSieve.h"
#include "java/math/BigInteger.h"
#include "java/lang/Object.h"
#include "java/util/Random.h"
#include "java/math/MutableBigInteger.h"
#include "java/math/BitSieve.h"

extern "C" {

jobject SF_java_math_BitSieve_smallSieve;

void mark_java_math_BitSieve(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_math_BitSieve_smallSieve)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_BitSieve_smallSieve)->clazz)->markFunction)((jobject) SF_java_math_BitSieve_smallSieve, mark, depth + 1);
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
	auto self = (java_math_BitSieve *) object;
	if (self->F_bits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bits)->clazz)->markFunction)((jobject) self->F_bits, mark, depth + 1);
}

void init_java_math_BitSieve(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BitSieve:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BitSieve(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(75);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(76);
	((java_math_BitSieve *) NULL_CHECK((frame[0].o)))->F_length = (9600);
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_math_BitSieve_unitIndex_int_R_int(ctx, (((jint)((java_math_BitSieve *) NULL_CHECK((frame[0].o)))->F_length) - (jint(1))));
	sp[1].o = (jobject) createArray(ctx, &class_long, (temp0 + (jint(1))));
	((java_math_BitSieve *) NULL_CHECK(sp[0].o))->F_bits = (jref) sp[1].o;
	LINE_NUMBER(80);
	M_java_math_BitSieve_set_int(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(81);
	frame[1].i = (jint(1));
	LINE_NUMBER(82);
	frame[2].i = (jint(3));
	}
label_6:;
	{
	LINE_NUMBER(86);
	M_java_math_BitSieve_sieveSingle_int_int_int(ctx, (frame[0].o), ((jint)((java_math_BitSieve *) NULL_CHECK((frame[0].o)))->F_length), ((frame[1].i) + (frame[2].i)), (frame[2].i));
	LINE_NUMBER(87);
	jint temp0 = (jint)M_java_math_BitSieve_sieveSearch_int_int_R_int(ctx, (frame[0].o), ((jint)((java_math_BitSieve *) NULL_CHECK((frame[0].o)))->F_length), ((frame[1].i) + (jint(1))));
	frame[1].i = temp0;
	LINE_NUMBER(88);
	frame[2].i = (((jint(2)) * (frame[1].i)) + (jint(1)));
	LINE_NUMBER(89);
	if ((frame[1].i) <= 0) goto label_10;
	}
	{
	if ((frame[2].i) < ((jint)((java_math_BitSieve *) NULL_CHECK((frame[0].o)))->F_length)) goto label_6;
	}
label_10:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_java_math_BitSieve_java_math_BigInteger_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BitSieve:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BitSieve(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(97);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_math_BitSieve_unitIndex_int_R_int(ctx, ((frame[2].i) - (jint(1))));
	sp[1].o = (jobject) createArray(ctx, &class_long, (temp0 + (jint(1))));
	((java_math_BitSieve *) NULL_CHECK(sp[0].o))->F_bits = (jref) sp[1].o;
	LINE_NUMBER(106);
	((java_math_BitSieve *) NULL_CHECK((frame[0].o)))->F_length = (frame[2].i);
	LINE_NUMBER(107);
	frame[3].i = (jint(0));
	LINE_NUMBER(109);
	clinit_java_math_BitSieve(ctx);
	sp[0].o = (jobject)SF_java_math_BitSieve_smallSieve;
	clinit_java_math_BitSieve(ctx);
	sp[1].o = (jobject)SF_java_math_BitSieve_smallSieve;
	jint temp1 = (jint)M_java_math_BitSieve_sieveSearch_int_int_R_int(ctx, sp[0].o, ((jint)((java_math_BitSieve *) NULL_CHECK(sp[1].o))->F_length), (frame[3].i));
	frame[4].i = temp1;
	LINE_NUMBER(110);
	frame[5].i = (((frame[4].i) * (jint(2))) + (jint(1)));
	LINE_NUMBER(113);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger_java_math_BigInteger(ctx, sp[0].o, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(114);
	clinit_java_math_MutableBigInteger(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_MutableBigInteger);
	init_java_math_MutableBigInteger(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_java_math_MutableBigInteger_divideOneWord_int_java_math_MutableBigInteger_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_math_MutableBigInteger_divideOneWord_int_java_math_MutableBigInteger_R_int])(ctx, (frame[6].o), (frame[5].i), (frame[7].o));
	frame[3].i = temp0;
	LINE_NUMBER(120);
	frame[3].i = ((frame[5].i) - (frame[3].i));
	LINE_NUMBER(121);
	if (((frame[3].i) % (jint(2))) != 0) goto label_11;
	}
	{
	LINE_NUMBER(122);
	frame[3].i = ((frame[3].i) + (frame[5].i));
	}
label_11:;
	{
	LINE_NUMBER(123);
	M_java_math_BitSieve_sieveSingle_int_int_int(ctx, (frame[0].o), (frame[2].i), (((frame[3].i) - (jint(1))) / (jint(2))), (frame[5].i));
	LINE_NUMBER(126);
	clinit_java_math_BitSieve(ctx);
	sp[0].o = (jobject)SF_java_math_BitSieve_smallSieve;
	clinit_java_math_BitSieve(ctx);
	sp[1].o = (jobject)SF_java_math_BitSieve_smallSieve;
	jint temp0 = (jint)M_java_math_BitSieve_sieveSearch_int_int_R_int(ctx, sp[0].o, ((jint)((java_math_BitSieve *) NULL_CHECK(sp[1].o))->F_length), ((frame[4].i) + (jint(1))));
	frame[4].i = temp0;
	LINE_NUMBER(127);
	frame[5].i = (((frame[4].i) * (jint(2))) + (jint(1)));
	LINE_NUMBER(128);
	if ((frame[4].i) > 0) goto label_8;
	}
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_java_math_BitSieve_unitIndex_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BitSieve:unitIndex", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BitSieve(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return (bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (6)));
	}

	popStackFrame(ctx);
}

jlong SM_java_math_BitSieve_bit_int_R_long(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BitSieve:bit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BitSieve(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(142);
	popStackFrame(ctx);
	return ((jlong(1)) << ((frame[0].i) & (63)));
	}

	popStackFrame(ctx);
}

jbool M_java_math_BitSieve_get_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BitSieve:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(149);
	jint temp0 = (jint)SM_java_math_BitSieve_unitIndex_int_R_int(ctx, (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(150);
	sp[0].o = (jobject)((java_math_BitSieve *) NULL_CHECK((frame[0].o)))->F_bits;
	jlong temp1 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[2].i));
	jlong temp2 = (jlong)SM_java_math_BitSieve_bit_int_R_long(ctx, (frame[1].i));
	if ((longCompare((temp1 & temp2), (jlong(0)))) == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_java_math_BitSieve_set_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BitSieve:set", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(157);
	jint temp0 = (jint)SM_java_math_BitSieve_unitIndex_int_R_int(ctx, (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(158);
	sp[0].o = (jobject)((java_math_BitSieve *) NULL_CHECK((frame[0].o)))->F_bits;
	jint temp1 = frame[2].i;
	jlong temp4 = (jlong)ARRAY_ACCESS(jlong, sp[0].o, temp1);
	jlong temp5 = (jlong)SM_java_math_BitSieve_bit_int_R_long(ctx, (frame[1].i));
	ARRAY_ACCESS(jlong, sp[0].o, temp1) = (temp4 | temp5);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_math_BitSieve_sieveSearch_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BitSieve:sieveSearch", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(167);
	if ((frame[2].i) < (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(170);
	frame[3].i = (frame[2].i);
	}
label_3:;
	{
	LINE_NUMBER(172);
	jint temp0 = (jint)M_java_math_BitSieve_get_int_R_boolean(ctx, (frame[0].o), (frame[3].i));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_4:;
	{
	LINE_NUMBER(174);
	INST_IINC(3, 1);
	LINE_NUMBER(175);
	if ((frame[3].i) < ((frame[1].i) - (jint(1)))) goto label_3;
	}
	{
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_java_math_BitSieve_sieveSingle_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BitSieve:sieveSingle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
label_0:;
	{
	LINE_NUMBER(185);
	if ((frame[2].i) >= (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(186);
	M_java_math_BitSieve_set_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(187);
	frame[2].i = ((frame[2].i) + (frame[3].i));
	goto label_0;
	}
label_1:;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BitSieve:retrieve", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(196);
	frame[4].i = (jint(1));
	LINE_NUMBER(197);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((java_math_BitSieve *) NULL_CHECK((frame[0].o)))->F_bits;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((java_math_BitSieve *) NULL_CHECK((frame[0].o)))->F_bits;
	frame[6].l = (((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[5].i))) ^ (jlong(-1ll)));
	LINE_NUMBER(199);
	frame[8].i = (jint(0));
	}
label_6:;
	{
	if ((frame[8].i) >= (64)) goto label_7;
	}
	{
	LINE_NUMBER(200);
	if ((longCompare(((frame[6].l) & (jlong(1))), (jlong(1)))) != 0) goto label_9;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = frame[1].o;
	jlong temp0 = jlong((frame[4].i));
	LINE_NUMBER(202);
	sp[1].o = (jobject)SM_java_math_BigInteger_valueOf_long_R_java_math_BigInteger(ctx, temp0);
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_math_BigInteger_add_java_math_BigInteger_R_java_math_BigInteger])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(203);
	jint temp1 = (jint)((func_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_math_BigInteger_primeToCertainty_int_java_util_Random_R_boolean])(ctx, (frame[9].o), (frame[2].i), (frame[3].o));
	if (temp1 == 0) goto label_9;
	}
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return (frame[9].o);
	}
label_9:;
	{
	LINE_NUMBER(206);
	frame[6].l = (bit_cast<jlong>(bit_cast<uint64_t>((frame[6].l)) >> (jint(1))));
	LINE_NUMBER(207);
	INST_IINC(4, 2);
	LINE_NUMBER(199);
	INST_IINC(8, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(197);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void clinit_java_math_BitSieve(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/BitSieve:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_BitSieve(ctx);
	{
	LINE_NUMBER(62);
	clinit_java_math_BitSieve(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_BitSieve);
	init_java_math_BitSieve(ctx, sp[0].o);
	clinit_java_math_BitSieve(ctx);
	SF_java_math_BitSieve_smallSieve = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_math_BitSieve[] {
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
	(void *) M_java_math_BitSieve_get_int_R_boolean,
	(void *) M_java_math_BitSieve_set_int,
	(void *) M_java_math_BitSieve_sieveSearch_int_int_R_int,
	(void *) M_java_math_BitSieve_sieveSingle_int_int_int,
	(void *) M_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger,
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
	{ "get", "(I)Z" },
	{ "set", "(I)V" },
	{ "sieveSearch", "(II)I" },
	{ "sieveSingle", "(III)V" },
	{ "retrieve", "(Ljava/math/BigInteger;ILjava/util/Random;)Ljava/math/BigInteger;" },
};

static FieldMetadata fields[] {
	{ "bits", getArrayClass(&class_long, 1), offsetof(java_math_BitSieve, F_bits), "[J", 2 },
	{ "length", &class_int, offsetof(java_math_BitSieve, F_length), "I", 2 },
	{ "smallSieve", &class_java_math_BitSieve, (intptr_t) &SF_java_math_BitSieve_smallSieve, "Ljava/math/BitSieve;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_math_BitSieve, 0, "()V", 2 },
	{ "<init>", (intptr_t) init_java_math_BitSieve_java_math_BigInteger_int, 0, "(Ljava/math/BigInteger;I)V", 0 },
	{ "unitIndex", (intptr_t) SM_java_math_BitSieve_unitIndex_int_R_int, 0, "(I)I", 10 },
	{ "bit", (intptr_t) SM_java_math_BitSieve_bit_int_R_long, 0, "(I)J", 10 },
	{ "get", (intptr_t) M_java_math_BitSieve_get_int_R_boolean, VTABLE_java_math_BitSieve_get_int_R_boolean, "(I)Z", 2 },
	{ "set", (intptr_t) M_java_math_BitSieve_set_int, VTABLE_java_math_BitSieve_set_int, "(I)V", 2 },
	{ "sieveSearch", (intptr_t) M_java_math_BitSieve_sieveSearch_int_int_R_int, VTABLE_java_math_BitSieve_sieveSearch_int_int_R_int, "(II)I", 2 },
	{ "sieveSingle", (intptr_t) M_java_math_BitSieve_sieveSingle_int_int_int, VTABLE_java_math_BitSieve_sieveSingle_int_int_int, "(III)V", 2 },
	{ "retrieve", (intptr_t) M_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger, VTABLE_java_math_BitSieve_retrieve_java_math_BigInteger_int_java_util_Random_R_java_math_BigInteger, "(Ljava/math/BigInteger;ILjava/util/Random;)Ljava/math/BigInteger;", 0 },
	{ "<clinit>", (intptr_t) clinit_java_math_BitSieve, 0, "()V", 8 },
};

Class class_java_math_BitSieve{
		.nativeName = (intptr_t) "java/math/BitSieve",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_math_BitSieve),
		.classVtable = (intptr_t) vtable_java_math_BitSieve,
		.staticInitializer = (intptr_t) clinit_java_math_BitSieve,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_math_BitSieve,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_math_BitSieve = registerClass(&class_java_math_BitSieve);

}
