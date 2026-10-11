#include "java/util/concurrent/atomic/AtomicReferenceFieldUpdater.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/atomic/AtomicReferenceFieldUpdater.h"
#include "java/lang/String.h"
#include "java/util/concurrent/atomic/AtomicReferenceFieldUpdater_AtomicReferenceFieldUpdaterImpl.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_util_concurrent_atomic_AtomicReferenceFieldUpdater(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_atomic_AtomicReferenceFieldUpdater *) object;
}

void clinit_java_util_concurrent_atomic_AtomicReferenceFieldUpdater(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject SM_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_newUpdater_java_lang_Class_java_lang_Class_java_lang_String_R_java_util_concurrent_atomic_AtomicReferenceFieldUpdater(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater:newUpdater", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_atomic_AtomicReferenceFieldUpdater(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(100);
	clinit_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl);
	init_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl_java_lang_Class_java_lang_Class_java_lang_String(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_atomic_AtomicReferenceFieldUpdater(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_atomic_AtomicReferenceFieldUpdater(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(106);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_getAndSet_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/atomic/AtomicReferenceFieldUpdater:getAndSet", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_0:;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((func_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_compareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_compareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[3].o), (frame[2].o));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_atomic_AtomicReferenceFieldUpdater[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_getAndSet_java_lang_Object_java_lang_Object_R_java_lang_Object,
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
	{ "compareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "weakCompareAndSet", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "set", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "lazySet", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "getAndSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
};

static jclass innerClasses[] {
	&class_java_util_concurrent_atomic_AtomicReferenceFieldUpdater$AtomicReferenceFieldUpdaterImpl,
};

static MethodMetadata methods[] {
	{ "newUpdater", (intptr_t) SM_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_newUpdater_java_lang_Class_java_lang_Class_java_lang_String_R_java_util_concurrent_atomic_AtomicReferenceFieldUpdater, 0, "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;", 9 },
	{ "<init>", (intptr_t) init_java_util_concurrent_atomic_AtomicReferenceFieldUpdater, 0, "()V", 4 },
	{ "compareAndSet", 0, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_compareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", 1025 },
	{ "weakCompareAndSet", 0, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_weakCompareAndSet_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean, "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z", 1025 },
	{ "set", 0, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_set_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 1025 },
	{ "lazySet", 0, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_lazySet_java_lang_Object_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)V", 1025 },
	{ "get", 0, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_get_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;)Ljava/lang/Object;", 1025 },
	{ "getAndSet", (intptr_t) M_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_getAndSet_java_lang_Object_java_lang_Object_R_java_lang_Object, VTABLE_java_util_concurrent_atomic_AtomicReferenceFieldUpdater_getAndSet_java_lang_Object_java_lang_Object_R_java_lang_Object, "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", 1 },
};

Class class_java_util_concurrent_atomic_AtomicReferenceFieldUpdater{
		.nativeName = (intptr_t) "java/util/concurrent/atomic/AtomicReferenceFieldUpdater",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_atomic_AtomicReferenceFieldUpdater),
		.classVtable = (intptr_t) vtable_java_util_concurrent_atomic_AtomicReferenceFieldUpdater,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_atomic_AtomicReferenceFieldUpdater,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_atomic_AtomicReferenceFieldUpdater,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_atomic_AtomicReferenceFieldUpdater = registerClass(&class_java_util_concurrent_atomic_AtomicReferenceFieldUpdater);

}
