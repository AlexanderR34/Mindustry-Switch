#include "java/util/concurrent/atomic/AtomicLong.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "java/util/concurrent/atomic/AtomicLong.h"
#include "java/lang/Long.h"

extern "C" {


void mark_java_util_concurrent_atomic_AtomicLong(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_atomic_AtomicLong *) object;
}

void clinit_java_util_concurrent_atomic_AtomicLong(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_atomic_AtomicLong_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_atomic_AtomicLong(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].l);
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_atomic_AtomicLong(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_atomic_AtomicLong(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_atomic_AtomicLong_get_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	popStackFrame(ctx, self);
	return ((jlong)((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_atomic_AtomicLong_compareAndSet_long_long_R_boolean(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:compareAndSet", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(19);
	if ((longCompare(((jlong)((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK((frame[0].o)))->F_value), (frame[1].l))) != 0) goto label_1;
	}
	{
	LINE_NUMBER(20);
	((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK((frame[0].o)))->F_value = (frame[3].l);
	LINE_NUMBER(21);
	popStackFrame(ctx, self);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(23);
	popStackFrame(ctx, self);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_atomic_AtomicLong_weakCompareAndSet_long_long_R_boolean(jcontext ctx, jobject self, jlong param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:weakCompareAndSet", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].l = param1;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicLong_compareAndSet_long_long_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicLong_compareAndSet_long_long_R_boolean])(ctx, (frame[0].o), (frame[1].l), (frame[3].l));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicLong_set_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(31);
	((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].l);
	LINE_NUMBER(32);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicLong_lazySet_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:lazySet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(35);
	((func_java_util_concurrent_atomic_AtomicLong_set_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicLong_set_long])(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_atomic_AtomicLong_getAndSet_long_R_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:getAndSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(39);
	frame[3].l = ((jlong)((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK((frame[0].o)))->F_value);
	LINE_NUMBER(40);
	((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].l);
	LINE_NUMBER(41);
	popStackFrame(ctx, self);
	return (frame[3].l);
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:getAndIncrement", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value;
	((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value = (temp0 + (jlong(1)));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_atomic_AtomicLong_getAndDecrement_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:getAndDecrement", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value;
	((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value = (temp0 - (jlong(1)));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_atomic_AtomicLong_getAndAdd_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:getAndAdd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value = (((jlong)((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value) + (jlong((frame[1].i))));
	LINE_NUMBER(54);
	popStackFrame(ctx, self);
	return (((jlong)((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK((frame[0].o)))->F_value) - (jlong((frame[1].i))));
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:incrementAndGet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	jlong temp0 = ((jlong)((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value) + (jlong(1));
	((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value = temp0;
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_atomic_AtomicLong_decrementAndGet_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:decrementAndGet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	jlong temp0 = ((jlong)((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value) - (jlong(1));
	((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value = temp0;
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_util_concurrent_atomic_AtomicLong_addAndGet_int_R_long(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:addAndGet", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	jlong temp0 = ((jlong)((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value) + (jlong((frame[1].i)));
	((java_util_concurrent_atomic_AtomicLong *) NULL_CHECK(sp[0].o))->F_value = temp0;
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_atomic_AtomicLong_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicLong:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	jlong temp0 = (jlong)((func_java_util_concurrent_atomic_AtomicLong_get_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicLong_get_R_long])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_atomic_AtomicLong[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_atomic_AtomicLong_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_atomic_AtomicLong_get_R_long,
	(void *) M_java_util_concurrent_atomic_AtomicLong_compareAndSet_long_long_R_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicLong_weakCompareAndSet_long_long_R_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicLong_set_long,
	(void *) M_java_util_concurrent_atomic_AtomicLong_lazySet_long,
	(void *) M_java_util_concurrent_atomic_AtomicLong_getAndSet_long_R_long,
	(void *) M_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long,
	(void *) M_java_util_concurrent_atomic_AtomicLong_getAndDecrement_R_long,
	(void *) M_java_util_concurrent_atomic_AtomicLong_getAndAdd_int_R_long,
	(void *) M_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long,
	(void *) M_java_util_concurrent_atomic_AtomicLong_decrementAndGet_R_long,
	(void *) M_java_util_concurrent_atomic_AtomicLong_addAndGet_int_R_long,
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
	{ "get", "()J" },
	{ "compareAndSet", "(JJ)Z" },
	{ "weakCompareAndSet", "(JJ)Z" },
	{ "set", "(J)V" },
	{ "lazySet", "(J)V" },
	{ "getAndSet", "(J)J" },
	{ "getAndIncrement", "()J" },
	{ "getAndDecrement", "()J" },
	{ "getAndAdd", "(I)J" },
	{ "incrementAndGet", "()J" },
	{ "decrementAndGet", "()J" },
	{ "addAndGet", "(I)J" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "value", &class_long, offsetof(java_util_concurrent_atomic_AtomicLong, F_value), "J", 66 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_atomic_AtomicLong_long, 0, "(J)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_atomic_AtomicLong, 0, "()V", 1 },
	{ "get", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_get_R_long, VTABLE_java_util_concurrent_atomic_AtomicLong_get_R_long, "()J", 49 },
	{ "compareAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_compareAndSet_long_long_R_boolean, VTABLE_java_util_concurrent_atomic_AtomicLong_compareAndSet_long_long_R_boolean, "(JJ)Z", 49 },
	{ "weakCompareAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_weakCompareAndSet_long_long_R_boolean, VTABLE_java_util_concurrent_atomic_AtomicLong_weakCompareAndSet_long_long_R_boolean, "(JJ)Z", 1 },
	{ "set", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_set_long, VTABLE_java_util_concurrent_atomic_AtomicLong_set_long, "(J)V", 49 },
	{ "lazySet", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_lazySet_long, VTABLE_java_util_concurrent_atomic_AtomicLong_lazySet_long, "(J)V", 17 },
	{ "getAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_getAndSet_long_R_long, VTABLE_java_util_concurrent_atomic_AtomicLong_getAndSet_long_R_long, "(J)J", 49 },
	{ "getAndIncrement", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long, VTABLE_java_util_concurrent_atomic_AtomicLong_getAndIncrement_R_long, "()J", 49 },
	{ "getAndDecrement", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_getAndDecrement_R_long, VTABLE_java_util_concurrent_atomic_AtomicLong_getAndDecrement_R_long, "()J", 49 },
	{ "getAndAdd", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_getAndAdd_int_R_long, VTABLE_java_util_concurrent_atomic_AtomicLong_getAndAdd_int_R_long, "(I)J", 49 },
	{ "incrementAndGet", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long, VTABLE_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long, "()J", 49 },
	{ "decrementAndGet", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_decrementAndGet_R_long, VTABLE_java_util_concurrent_atomic_AtomicLong_decrementAndGet_R_long, "()J", 49 },
	{ "addAndGet", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_addAndGet_int_R_long, VTABLE_java_util_concurrent_atomic_AtomicLong_addAndGet_int_R_long, "(I)J", 49 },
	{ "toString", (intptr_t) M_java_util_concurrent_atomic_AtomicLong_toString_R_java_lang_String, VTABLE_java_util_concurrent_atomic_AtomicLong_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_concurrent_atomic_AtomicLong{
		.nativeName = (intptr_t) "java/util/concurrent/atomic/AtomicLong",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_atomic_AtomicLong),
		.classVtable = (intptr_t) vtable_java_util_concurrent_atomic_AtomicLong,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_atomic_AtomicLong,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_atomic_AtomicLong,
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
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_atomic_AtomicLong = registerClass(&class_java_util_concurrent_atomic_AtomicLong);

}
