#include "java/util/concurrent/atomic/AtomicBoolean.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/lang/String.h"
#include "java/lang/Boolean.h"
#include "java/util/concurrent/atomic/AtomicBoolean.h"

extern "C" {


void mark_java_util_concurrent_atomic_AtomicBoolean(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_atomic_AtomicBoolean *) object;
}

void clinit_java_util_concurrent_atomic_AtomicBoolean(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_atomic_AtomicBoolean_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicBoolean:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_atomic_AtomicBoolean(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((java_util_concurrent_atomic_AtomicBoolean *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_atomic_AtomicBoolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicBoolean:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_atomic_AtomicBoolean(ctx);
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

jbool M_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicBoolean:get", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	popStackFrame(ctx, self);
	return ((jint)((java_util_concurrent_atomic_AtomicBoolean *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_atomic_AtomicBoolean_compareAndSet_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicBoolean:compareAndSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(19);
	if (((jint)((java_util_concurrent_atomic_AtomicBoolean *) NULL_CHECK((frame[0].o)))->F_value) != (frame[1].i)) goto label_1;
	}
	{
	LINE_NUMBER(20);
	((java_util_concurrent_atomic_AtomicBoolean *) NULL_CHECK((frame[0].o)))->F_value = (frame[2].i);
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

jbool M_java_util_concurrent_atomic_AtomicBoolean_weakCompareAndSet_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicBoolean:weakCompareAndSet", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicBoolean_compareAndSet_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicBoolean_compareAndSet_boolean_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicBoolean_set_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicBoolean:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(31);
	((java_util_concurrent_atomic_AtomicBoolean *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(32);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_atomic_AtomicBoolean_lazySet_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicBoolean:lazySet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(35);
	((func_java_util_concurrent_atomic_AtomicBoolean_set_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicBoolean_set_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_atomic_AtomicBoolean_getAndSet_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicBoolean:getAndSet", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(39);
	frame[2].i = ((jint)((java_util_concurrent_atomic_AtomicBoolean *) NULL_CHECK((frame[0].o)))->F_value);
	LINE_NUMBER(40);
	((java_util_concurrent_atomic_AtomicBoolean *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].i);
	LINE_NUMBER(41);
	popStackFrame(ctx, self);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_atomic_AtomicBoolean_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicBoolean:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Boolean_toString_boolean_R_java_lang_String(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_atomic_AtomicBoolean[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_concurrent_atomic_AtomicBoolean_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicBoolean_compareAndSet_boolean_boolean_R_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicBoolean_weakCompareAndSet_boolean_boolean_R_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicBoolean_set_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicBoolean_lazySet_boolean,
	(void *) M_java_util_concurrent_atomic_AtomicBoolean_getAndSet_boolean_R_boolean,
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
	{ "get", "()Z" },
	{ "compareAndSet", "(ZZ)Z" },
	{ "weakCompareAndSet", "(ZZ)Z" },
	{ "set", "(Z)V" },
	{ "lazySet", "(Z)V" },
	{ "getAndSet", "(Z)Z" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "value", &class_boolean, offsetof(java_util_concurrent_atomic_AtomicBoolean, F_value), "Z", 66 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_atomic_AtomicBoolean_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_java_util_concurrent_atomic_AtomicBoolean, 0, "()V", 1 },
	{ "get", (intptr_t) M_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean, VTABLE_java_util_concurrent_atomic_AtomicBoolean_get_R_boolean, "()Z", 49 },
	{ "compareAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicBoolean_compareAndSet_boolean_boolean_R_boolean, VTABLE_java_util_concurrent_atomic_AtomicBoolean_compareAndSet_boolean_boolean_R_boolean, "(ZZ)Z", 49 },
	{ "weakCompareAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicBoolean_weakCompareAndSet_boolean_boolean_R_boolean, VTABLE_java_util_concurrent_atomic_AtomicBoolean_weakCompareAndSet_boolean_boolean_R_boolean, "(ZZ)Z", 1 },
	{ "set", (intptr_t) M_java_util_concurrent_atomic_AtomicBoolean_set_boolean, VTABLE_java_util_concurrent_atomic_AtomicBoolean_set_boolean, "(Z)V", 49 },
	{ "lazySet", (intptr_t) M_java_util_concurrent_atomic_AtomicBoolean_lazySet_boolean, VTABLE_java_util_concurrent_atomic_AtomicBoolean_lazySet_boolean, "(Z)V", 17 },
	{ "getAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicBoolean_getAndSet_boolean_R_boolean, VTABLE_java_util_concurrent_atomic_AtomicBoolean_getAndSet_boolean_R_boolean, "(Z)Z", 49 },
	{ "toString", (intptr_t) M_java_util_concurrent_atomic_AtomicBoolean_toString_R_java_lang_String, VTABLE_java_util_concurrent_atomic_AtomicBoolean_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_util_concurrent_atomic_AtomicBoolean{
		.nativeName = (intptr_t) "java/util/concurrent/atomic/AtomicBoolean",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_atomic_AtomicBoolean),
		.classVtable = (intptr_t) vtable_java_util_concurrent_atomic_AtomicBoolean,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_atomic_AtomicBoolean,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_atomic_AtomicBoolean,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_atomic_AtomicBoolean = registerClass(&class_java_util_concurrent_atomic_AtomicBoolean);

}
