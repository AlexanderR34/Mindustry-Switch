#include "java/util/concurrent/ThreadLocalRandom.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/util/Random.h"
#include "java/util/concurrent/ThreadLocalRandom.h"
#include "java/lang/ThreadLocal.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/concurrent/ThreadLocalRandom_1.h"

extern "C" {

jobject SF_java_util_concurrent_ThreadLocalRandom_current;

void mark_java_util_concurrent_ThreadLocalRandom(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_concurrent_ThreadLocalRandom_current)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_ThreadLocalRandom_current)->clazz)->markFunction)((jobject) SF_java_util_concurrent_ThreadLocalRandom_current, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_Random(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ThreadLocalRandom *) object;
}

void init_java_util_concurrent_ThreadLocalRandom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadLocalRandom:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadLocalRandom(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(29);
	init_java_util_Random(ctx, (frame[0].o));
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_concurrent_ThreadLocalRandom_current_R_java_util_concurrent_ThreadLocalRandom(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadLocalRandom:current", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadLocalRandom(ctx);
	{
	LINE_NUMBER(33);
	clinit_java_util_concurrent_ThreadLocalRandom(ctx);
	sp[0].o = (jobject)SF_java_util_concurrent_ThreadLocalRandom_current;
	sp[0].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_concurrent_ThreadLocalRandom, sp[0].o));
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_ThreadLocalRandom_nextInt_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadLocalRandom:nextInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(37);
	if ((frame[1].i) < (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(38);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(40);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(41);
	if ((frame[3].i) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(42);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadLocalRandom_nextInt_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadLocalRandom_nextInt_int_R_int])(ctx, (frame[0].o), (frame[3].i));
	popStackFrame(ctx);
	return (temp0 + (frame[1].i));
	}
label_4:;
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_java_util_concurrent_ThreadLocalRandom_nextInt_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadLocalRandom_nextInt_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(46);
	if ((frame[4].i) < (frame[1].i)) goto label_7;
	}
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_7:;
	LINE_NUMBER(49);
	goto label_4;

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ThreadLocalRandom_nextLong_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadLocalRandom:nextLong", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(54);
	if ((longCompare((frame[1].l), (jlong(0)))) > 0) goto label_1;
	}
	{
	LINE_NUMBER(55);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(58);
	jlong temp0 = (jlong)((func_java_util_concurrent_ThreadLocalRandom_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadLocalRandom_nextLong_R_long])(ctx, (frame[0].o));
	frame[3].l = temp0;
	LINE_NUMBER(59);
	frame[5].l = ((frame[3].l) % (frame[1].l));
	LINE_NUMBER(60);
	if ((longCompare((((frame[3].l) - (frame[5].l)) + ((frame[1].l) - (jlong(1)))), (jlong(0)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (frame[5].l);
	}
label_5:;
	LINE_NUMBER(63);
	goto label_1;

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_ThreadLocalRandom_nextLong_long_long_R_long(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadLocalRandom:nextLong", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(67);
	if ((longCompare((frame[1].l), (frame[3].l))) < 0) goto label_1;
	}
	{
	LINE_NUMBER(68);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(70);
	frame[5].l = ((frame[3].l) - (frame[1].l));
	LINE_NUMBER(71);
	if ((longCompare((frame[5].l), (jlong(0)))) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(72);
	jlong temp0 = (jlong)((func_java_util_concurrent_ThreadLocalRandom_nextLong_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadLocalRandom_nextLong_long_R_long])(ctx, (frame[0].o), (frame[5].l));
	popStackFrame(ctx);
	return (temp0 + (frame[1].l));
	}
label_4:;
	{
	LINE_NUMBER(75);
	jlong temp0 = (jlong)((func_java_util_concurrent_ThreadLocalRandom_nextLong_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadLocalRandom_nextLong_R_long])(ctx, (frame[0].o));
	frame[7].l = temp0;
	LINE_NUMBER(76);
	if ((longCompare((frame[7].l), (frame[1].l))) < 0) goto label_7;
	}
	{
	if ((longCompare((frame[7].l), (frame[3].l))) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return (frame[7].l);
	}
label_7:;
	LINE_NUMBER(79);
	goto label_4;

	popStackFrame(ctx);
}

jdouble M_java_util_concurrent_ThreadLocalRandom_nextDouble_double_R_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadLocalRandom:nextDouble", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(84);
	if ((doubleCompare((frame[1].d), (jdouble(0)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(85);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(87);
	jdouble temp0 = (jdouble)((func_java_util_concurrent_ThreadLocalRandom_nextDouble_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadLocalRandom_nextDouble_R_double])(ctx, (frame[0].o));
	frame[3].d = (temp0 * (frame[1].d));
	LINE_NUMBER(88);
	if ((doubleCompare((frame[3].d), (frame[1].d), -1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(89);
	jdouble temp0 = (jdouble)SM_java_lang_Math_nextDown_double_R_double(ctx, (frame[3].d));
	frame[3].d = temp0;
	}
label_4:;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (frame[3].d);
	}

	popStackFrame(ctx);
}

jdouble M_java_util_concurrent_ThreadLocalRandom_nextDouble_double_double_R_double(jcontext ctx, jobject self, jdouble param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadLocalRandom:nextDouble", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	frame[3].d = param1;
	{
	LINE_NUMBER(95);
	if ((doubleCompare((frame[1].d), (frame[3].d), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(96);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(98);
	jdouble temp0 = frame[1].d;
	jdouble temp1 = (jdouble)((func_java_util_concurrent_ThreadLocalRandom_nextDouble_double_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_ThreadLocalRandom_nextDouble_double_R_double])(ctx, (frame[0].o), ((frame[3].d) - (frame[1].d)));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_ThreadLocalRandom_java_util_concurrent_ThreadLocalRandom$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadLocalRandom:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadLocalRandom(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	init_java_util_concurrent_ThreadLocalRandom(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_ThreadLocalRandom(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_Random(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ThreadLocalRandom:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ThreadLocalRandom(ctx);
	{
	LINE_NUMBER(21);
	clinit_java_util_concurrent_ThreadLocalRandom$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_ThreadLocalRandom$1);
	init_java_util_concurrent_ThreadLocalRandom$1(ctx, sp[0].o);
	clinit_java_util_concurrent_ThreadLocalRandom(ctx);
	SF_java_util_concurrent_ThreadLocalRandom_current = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ThreadLocalRandom[] {
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
	(void *) M_java_util_concurrent_ThreadLocalRandom_nextInt_int_int_R_int,
	(void *) M_java_util_concurrent_ThreadLocalRandom_nextLong_long_R_long,
	(void *) M_java_util_concurrent_ThreadLocalRandom_nextLong_long_long_R_long,
	(void *) M_java_util_concurrent_ThreadLocalRandom_nextDouble_double_R_double,
	(void *) M_java_util_concurrent_ThreadLocalRandom_nextDouble_double_double_R_double,
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
	{ "nextInt", "(II)I" },
	{ "nextLong", "(J)J" },
	{ "nextLong", "(JJ)J" },
	{ "nextDouble", "(D)D" },
	{ "nextDouble", "(DD)D" },
};

static FieldMetadata fields[] {
	{ "current", &class_java_lang_ThreadLocal, (intptr_t) &SF_java_util_concurrent_ThreadLocalRandom_current, "Ljava/lang/ThreadLocal;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ThreadLocalRandom, 0, "()V", 2 },
	{ "current", (intptr_t) SM_java_util_concurrent_ThreadLocalRandom_current_R_java_util_concurrent_ThreadLocalRandom, 0, "()Ljava/util/concurrent/ThreadLocalRandom;", 9 },
	{ "nextInt", (intptr_t) M_java_util_concurrent_ThreadLocalRandom_nextInt_int_int_R_int, VTABLE_java_util_concurrent_ThreadLocalRandom_nextInt_int_int_R_int, "(II)I", 1 },
	{ "nextLong", (intptr_t) M_java_util_concurrent_ThreadLocalRandom_nextLong_long_R_long, VTABLE_java_util_concurrent_ThreadLocalRandom_nextLong_long_R_long, "(J)J", 1 },
	{ "nextLong", (intptr_t) M_java_util_concurrent_ThreadLocalRandom_nextLong_long_long_R_long, VTABLE_java_util_concurrent_ThreadLocalRandom_nextLong_long_long_R_long, "(JJ)J", 1 },
	{ "nextDouble", (intptr_t) M_java_util_concurrent_ThreadLocalRandom_nextDouble_double_R_double, VTABLE_java_util_concurrent_ThreadLocalRandom_nextDouble_double_R_double, "(D)D", 1 },
	{ "nextDouble", (intptr_t) M_java_util_concurrent_ThreadLocalRandom_nextDouble_double_double_R_double, VTABLE_java_util_concurrent_ThreadLocalRandom_nextDouble_double_double_R_double, "(DD)D", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_ThreadLocalRandom_java_util_concurrent_ThreadLocalRandom$1, 0, "(Ljava/util/concurrent/ThreadLocalRandom$1;)V", 4096 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_ThreadLocalRandom, 0, "()V", 8 },
};

Class class_java_util_concurrent_ThreadLocalRandom{
		.nativeName = (intptr_t) "java/util/concurrent/ThreadLocalRandom",
		.parentClass = (intptr_t) &class_java_util_Random,
		.size = sizeof(java_util_concurrent_ThreadLocalRandom),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ThreadLocalRandom,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ThreadLocalRandom,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ThreadLocalRandom,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ThreadLocalRandom = registerClass(&class_java_util_concurrent_ThreadLocalRandom);

}
