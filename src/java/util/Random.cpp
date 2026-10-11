#include "java/util/Random.h"
#include "java/lang/Object.h"
#include "java/util/Random.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/System.h"

extern "C" {

jlong SF_java_util_Random_multiplier;

void mark_java_util_Random(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Random *) object;
}

void clinit_java_util_Random(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_Random_multiplier = jlong(25214903917ll);
}

void init_java_util_Random(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Random(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	init_java_util_Random_long(ctx, sp[0].o, temp0);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Random_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Random(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(45);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(46);
	((func_java_util_Random_setSeed_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_setSeed_long])(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_Random_next_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:next", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(57);
	((java_util_Random *) NULL_CHECK((frame[0].o)))->F_seed = (((((jlong)((java_util_Random *) NULL_CHECK((frame[0].o)))->F_seed) * (jlong(25214903917ll))) + (jlong(11ll))) & (jlong(281474976710655ll)));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jint((bit_cast<jlong>(bit_cast<uint64_t>(((jlong)((java_util_Random *) NULL_CHECK((frame[0].o)))->F_seed)) >> ((48) - (frame[1].i))))));
	}

	popStackFrame(ctx);
}

jdouble M_java_util_Random_nextDouble_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:nextDouble", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	jint temp0 = (jint)((func_java_util_Random_next_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_next_int_R_int])(ctx, (frame[0].o), (26));
	jlong temp1 = (jlong(temp0)) << (27);
	jint temp2 = (jint)((func_java_util_Random_next_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_next_int_R_int])(ctx, (frame[0].o), (27));
	popStackFrame(ctx);
	return ((jdouble((temp1 + (jlong(temp2))))) / (jdouble(9,007199e+15)));
	}

	popStackFrame(ctx);
}

jfloat M_java_util_Random_nextFloat_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:nextFloat", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_java_util_Random_next_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_next_int_R_int])(ctx, (frame[0].o), (24));
	popStackFrame(ctx);
	return ((jfloat(temp0)) / (jfloat(1.6777216E7f)));
	}

	popStackFrame(ctx);
}

jint M_java_util_Random_nextInt_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:nextInt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)((func_java_util_Random_next_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_next_int_R_int])(ctx, (frame[0].o), (32));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_Random_nextInt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:nextInt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(98);
	if ((frame[1].i) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(99);
	if (((frame[1].i) & (-(frame[1].i))) != (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(100);
	jlong temp0 = jlong((frame[1].i));
	jint temp1 = (jint)((func_java_util_Random_next_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_next_int_R_int])(ctx, (frame[0].o), (31));
	popStackFrame(ctx);
	return (jint(((temp0 * (jlong(temp1))) >> (31))));
	}
label_3:;
	{
	LINE_NUMBER(104);
	jint temp0 = (jint)((func_java_util_Random_next_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_next_int_R_int])(ctx, (frame[0].o), (31));
	frame[2].i = temp0;
	LINE_NUMBER(105);
	frame[3].i = ((frame[2].i) % (frame[1].i));
	LINE_NUMBER(106);
	if ((((frame[2].i) - (frame[3].i)) + ((frame[1].i) - (jint(1)))) < 0) goto label_3;
	}
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_1:;
	{
	LINE_NUMBER(109);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jlong M_java_util_Random_nextLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:nextLong", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)((func_java_util_Random_next_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_next_int_R_int])(ctx, (frame[0].o), (32));
	jlong temp1 = (jlong(temp0)) << (32);
	jint temp2 = (jint)((func_java_util_Random_next_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_next_int_R_int])(ctx, (frame[0].o), (32));
	popStackFrame(ctx);
	return (temp1 + (jlong(temp2)));
	}

	popStackFrame(ctx);
}

void M_java_util_Random_setSeed_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:setSeed", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(123);
	((java_util_Random *) NULL_CHECK((frame[0].o)))->F_seed = (((frame[1].l) ^ (jlong(25214903917ll))) & (jlong(281474976710655ll)));
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Random_nextBoolean_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:nextBoolean", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)((func_java_util_Random_nextInt_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_nextInt_R_int])(ctx, (frame[0].o));
	if ((temp0 % (jint(2))) != 0) goto label_1;
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

void M_java_util_Random_nextBytes_Array1_byte(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Random:nextBytes", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(131);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_2;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_util_Random_next_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Random_next_int_R_int])(ctx, (frame[0].o), (8));
	ARRAY_ACCESS(jbyte, sp[0].o, temp0) = (jbyte(temp1));
	LINE_NUMBER(131);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(134);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_java_util_Random[] {
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
	(void *) M_java_util_Random_next_int_R_int,
	(void *) M_java_util_Random_nextDouble_R_double,
	(void *) M_java_util_Random_nextFloat_R_float,
	(void *) M_java_util_Random_nextInt_R_int,
	(void *) M_java_util_Random_nextInt_int_R_int,
	(void *) M_java_util_Random_nextLong_R_long,
	(void *) M_java_util_Random_setSeed_long,
	(void *) M_java_util_Random_nextBoolean_R_boolean,
	(void *) M_java_util_Random_nextBytes_Array1_byte,
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
	{ "next", "(I)I" },
	{ "nextDouble", "()D" },
	{ "nextFloat", "()F" },
	{ "nextInt", "()I" },
	{ "nextInt", "(I)I" },
	{ "nextLong", "()J" },
	{ "setSeed", "(J)V" },
	{ "nextBoolean", "()Z" },
	{ "nextBytes", "([B)V" },
};

static FieldMetadata fields[] {
	{ "multiplier", &class_long, (intptr_t) &SF_java_util_Random_multiplier, "J", 26 },
	{ "seed", &class_long, offsetof(java_util_Random, F_seed), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Random, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_Random_long, 0, "(J)V", 1 },
	{ "next", (intptr_t) M_java_util_Random_next_int_R_int, VTABLE_java_util_Random_next_int_R_int, "(I)I", 4 },
	{ "nextDouble", (intptr_t) M_java_util_Random_nextDouble_R_double, VTABLE_java_util_Random_nextDouble_R_double, "()D", 1 },
	{ "nextFloat", (intptr_t) M_java_util_Random_nextFloat_R_float, VTABLE_java_util_Random_nextFloat_R_float, "()F", 1 },
	{ "nextInt", (intptr_t) M_java_util_Random_nextInt_R_int, VTABLE_java_util_Random_nextInt_R_int, "()I", 1 },
	{ "nextInt", (intptr_t) M_java_util_Random_nextInt_int_R_int, VTABLE_java_util_Random_nextInt_int_R_int, "(I)I", 1 },
	{ "nextLong", (intptr_t) M_java_util_Random_nextLong_R_long, VTABLE_java_util_Random_nextLong_R_long, "()J", 1 },
	{ "setSeed", (intptr_t) M_java_util_Random_setSeed_long, VTABLE_java_util_Random_setSeed_long, "(J)V", 1 },
	{ "nextBoolean", (intptr_t) M_java_util_Random_nextBoolean_R_boolean, VTABLE_java_util_Random_nextBoolean_R_boolean, "()Z", 1 },
	{ "nextBytes", (intptr_t) M_java_util_Random_nextBytes_Array1_byte, VTABLE_java_util_Random_nextBytes_Array1_byte, "([B)V", 1 },
};

Class class_java_util_Random{
		.nativeName = (intptr_t) "java/util/Random",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Random),
		.classVtable = (intptr_t) vtable_java_util_Random,
		.staticInitializer = (intptr_t) clinit_java_util_Random,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Random,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Random = registerClass(&class_java_util_Random);

}
