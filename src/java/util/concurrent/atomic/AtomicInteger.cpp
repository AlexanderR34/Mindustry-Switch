#include "java/util/concurrent/atomic/AtomicInteger.h"
#include "java/lang/Integer.h"
#include "java/io/Serializable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Number.h"
#include "java/util/concurrent/atomic/AtomicInteger.h"

extern "C" {


void mark_java_util_concurrent_atomic_AtomicInteger(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Number(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_atomic_AtomicInteger *) object;
}

void clinit_java_util_concurrent_atomic_AtomicInteger(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Number(ctx);
}

void init_java_util_concurrent_atomic_AtomicInteger_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_atomic_AtomicInteger(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(6);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(7);
	((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(8);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_atomic_AtomicInteger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_atomic_AtomicInteger(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Number(ctx, (frame[0].o));
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_atomic_AtomicInteger_get_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:get", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(14);
	popStackFrame(ctx, self);
	return ((jint)((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicInteger_set_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(18);
	((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(19);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicInteger_lazySet_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:lazySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(22);
	((func_java_util_concurrent_atomic_AtomicInteger_set_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_set_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_atomic_AtomicInteger_getAndSet_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:getAndSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(26);
	frame[2].i = ((jint)((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK((frame[0].o)))->F_value);
	LINE_NUMBER(27);
	((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(28);
	popStackFrame(ctx, self);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:compareAndSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(32);
	if (((jint)((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK((frame[0].o)))->F_value) != (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(33);
	((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK((frame[0].o)))->F_value = (frame[2].i);
	LINE_NUMBER(34);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(36);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_atomic_AtomicInteger_weakCompareAndSet_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:weakCompareAndSet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(40);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_atomic_AtomicInteger_getAndIncrement_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:getAndIncrement", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value;
	((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value = (temp0 + (jint(1)));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:getAndDecrement", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value;
	((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value = (temp0 - (jint(1)));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_atomic_AtomicInteger_getAndAdd_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:getAndAdd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value = (((jint)((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value) + (frame[1].i));
	LINE_NUMBER(53);
	popStackFrame(ctx, self);
	return (((jint)((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK((frame[0].o)))->F_value) - (frame[1].i));
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_atomic_AtomicInteger_incrementAndGet_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:incrementAndGet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value) + (jint(1));
	((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value = temp0;
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_atomic_AtomicInteger_decrementAndGet_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:decrementAndGet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value) - (jint(1));
	((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value = temp0;
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_atomic_AtomicInteger_addAndGet_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:addAndGet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	jint temp0 = ((jint)((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value) + (frame[1].i);
	((java_util_concurrent_atomic_AtomicInteger *) NULL_CHECK(sp[0].o))->F_value = temp0;
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_atomic_AtomicInteger_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Integer_toString_int_R_java_lang_String(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_util_concurrent_atomic_AtomicInteger_intValue_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:intValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_atomic_AtomicInteger_longValue_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:longValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jlong(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_java_util_concurrent_atomic_AtomicInteger_floatValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:floatValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jdouble M_java_util_concurrent_atomic_AtomicInteger_doubleValue_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicInteger:doubleValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicInteger_get_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jdouble(temp0));
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_atomic_AtomicInteger[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_intValue_R_int,
	(void *) M_java_lang_Number_byteValue_R_byte,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_longValue_R_long,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_floatValue_R_float,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_doubleValue_R_double,
	(void *) M_java_lang_Number_shortValue_R_short,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_get_R_int,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_set_int,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_lazySet_int,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_getAndSet_int_R_int,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_weakCompareAndSet_int_int_R_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_getAndIncrement_R_int,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_getAndAdd_int_R_int,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_incrementAndGet_R_int,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_decrementAndGet_R_int,
	(void *) M_java_util_concurrent_atomic_AtomicInteger_addAndGet_int_R_int,
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
	{ "intValue", "()I" },
	{ "byteValue", "()B" },
	{ "longValue", "()J" },
	{ "floatValue", "()F" },
	{ "doubleValue", "()D" },
	{ "shortValue", "()S" },
	{ "get", "()I" },
	{ "set", "(I)V" },
	{ "lazySet", "(I)V" },
	{ "getAndSet", "(I)I" },
	{ "compareAndSet", "(II)Z" },
	{ "weakCompareAndSet", "(II)Z" },
	{ "getAndIncrement", "()I" },
	{ "getAndDecrement", "()I" },
	{ "getAndAdd", "(I)I" },
	{ "incrementAndGet", "()I" },
	{ "decrementAndGet", "()I" },
	{ "addAndGet", "(I)I" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "value", &class_int, offsetof(java_util_concurrent_atomic_AtomicInteger, F_value), "I", 66 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_atomic_AtomicInteger_int, 0, "(I)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_atomic_AtomicInteger, 0, "()V", 1 },
	{ "get", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_get_R_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_get_R_int, "()I", 49 },
	{ "set", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_set_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_set_int, "(I)V", 49 },
	{ "lazySet", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_lazySet_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_lazySet_int, "(I)V", 17 },
	{ "getAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_getAndSet_int_R_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndSet_int_R_int, "(I)I", 49 },
	{ "compareAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean, VTABLE_java_util_concurrent_atomic_AtomicInteger_compareAndSet_int_int_R_boolean, "(II)Z", 49 },
	{ "weakCompareAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_weakCompareAndSet_int_int_R_boolean, VTABLE_java_util_concurrent_atomic_AtomicInteger_weakCompareAndSet_int_int_R_boolean, "(II)Z", 17 },
	{ "getAndIncrement", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_getAndIncrement_R_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndIncrement_R_int, "()I", 49 },
	{ "getAndDecrement", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndDecrement_R_int, "()I", 49 },
	{ "getAndAdd", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_getAndAdd_int_R_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_getAndAdd_int_R_int, "(I)I", 49 },
	{ "incrementAndGet", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_incrementAndGet_R_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_incrementAndGet_R_int, "()I", 49 },
	{ "decrementAndGet", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_decrementAndGet_R_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_decrementAndGet_R_int, "()I", 49 },
	{ "addAndGet", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_addAndGet_int_R_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_addAndGet_int_R_int, "(I)I", 49 },
	{ "toString", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_toString_R_java_lang_String, VTABLE_java_util_concurrent_atomic_AtomicInteger_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "intValue", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_intValue_R_int, VTABLE_java_util_concurrent_atomic_AtomicInteger_intValue_R_int, "()I", 1 },
	{ "longValue", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_longValue_R_long, VTABLE_java_util_concurrent_atomic_AtomicInteger_longValue_R_long, "()J", 1 },
	{ "floatValue", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_floatValue_R_float, VTABLE_java_util_concurrent_atomic_AtomicInteger_floatValue_R_float, "()F", 1 },
	{ "doubleValue", (intptr_t) M_java_util_concurrent_atomic_AtomicInteger_doubleValue_R_double, VTABLE_java_util_concurrent_atomic_AtomicInteger_doubleValue_R_double, "()D", 1 },
};

Class class_java_util_concurrent_atomic_AtomicInteger{
		.nativeName = (intptr_t) "java/util/concurrent/atomic/AtomicInteger",
		.parentClass = (intptr_t) &class_java_lang_Number,
		.size = sizeof(java_util_concurrent_atomic_AtomicInteger),
		.classVtable = (intptr_t) vtable_java_util_concurrent_atomic_AtomicInteger,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_atomic_AtomicInteger,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_atomic_AtomicInteger,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_atomic_AtomicInteger = registerClass(&class_java_util_concurrent_atomic_AtomicInteger);

}
