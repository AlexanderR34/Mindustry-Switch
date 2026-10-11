#include "java/util/concurrent/locks/AbstractOwnableSynchronizer.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"
#include "java/util/concurrent/locks/AbstractOwnableSynchronizer.h"
#include "java/lang/Thread.h"

extern "C" {

jlong SF_java_util_concurrent_locks_AbstractOwnableSynchronizer_serialVersionUID;

void mark_java_util_concurrent_locks_AbstractOwnableSynchronizer(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_AbstractOwnableSynchronizer *) object;
	if (self->F_exclusiveOwnerThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_exclusiveOwnerThread)->clazz)->markFunction)((jobject) self->F_exclusiveOwnerThread, mark, depth + 1);
}

void clinit_java_util_concurrent_locks_AbstractOwnableSynchronizer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_concurrent_locks_AbstractOwnableSynchronizer_serialVersionUID = jlong(3737899427754241961ll);
}

void init_java_util_concurrent_locks_AbstractOwnableSynchronizer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractOwnableSynchronizer:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_AbstractOwnableSynchronizer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(59);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_AbstractOwnableSynchronizer_setExclusiveOwnerThread_java_lang_Thread(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractOwnableSynchronizer:setExclusiveOwnerThread", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	((java_util_concurrent_locks_AbstractOwnableSynchronizer *) NULL_CHECK((frame[0].o)))->F_exclusiveOwnerThread = (jref) (frame[1].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_AbstractOwnableSynchronizer_getExclusiveOwnerThread_R_java_lang_Thread(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractOwnableSynchronizer:getExclusiveOwnerThread", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractOwnableSynchronizer *) NULL_CHECK((frame[0].o)))->F_exclusiveOwnerThread;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_locks_AbstractOwnableSynchronizer[] {
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
	(void *) M_java_util_concurrent_locks_AbstractOwnableSynchronizer_setExclusiveOwnerThread_java_lang_Thread,
	(void *) M_java_util_concurrent_locks_AbstractOwnableSynchronizer_getExclusiveOwnerThread_R_java_lang_Thread,
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
	{ "setExclusiveOwnerThread", "(Ljava/lang/Thread;)V" },
	{ "getExclusiveOwnerThread", "()Ljava/lang/Thread;" },
};

static jclass interfaces[] { &class_java_io_Serializable, };

static FieldMetadata fields[] {
	{ "serialVersionUID", &class_long, (intptr_t) &SF_java_util_concurrent_locks_AbstractOwnableSynchronizer_serialVersionUID, "J", 26 },
	{ "exclusiveOwnerThread", &class_java_lang_Thread, offsetof(java_util_concurrent_locks_AbstractOwnableSynchronizer, F_exclusiveOwnerThread), "Ljava/lang/Thread;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_AbstractOwnableSynchronizer, 0, "()V", 4 },
	{ "setExclusiveOwnerThread", (intptr_t) M_java_util_concurrent_locks_AbstractOwnableSynchronizer_setExclusiveOwnerThread_java_lang_Thread, VTABLE_java_util_concurrent_locks_AbstractOwnableSynchronizer_setExclusiveOwnerThread_java_lang_Thread, "(Ljava/lang/Thread;)V", 20 },
	{ "getExclusiveOwnerThread", (intptr_t) M_java_util_concurrent_locks_AbstractOwnableSynchronizer_getExclusiveOwnerThread_R_java_lang_Thread, VTABLE_java_util_concurrent_locks_AbstractOwnableSynchronizer_getExclusiveOwnerThread_R_java_lang_Thread, "()Ljava/lang/Thread;", 20 },
};

Class class_java_util_concurrent_locks_AbstractOwnableSynchronizer{
		.nativeName = (intptr_t) "java/util/concurrent/locks/AbstractOwnableSynchronizer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_AbstractOwnableSynchronizer),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_AbstractOwnableSynchronizer,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_AbstractOwnableSynchronizer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_AbstractOwnableSynchronizer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_AbstractOwnableSynchronizer = registerClass(&class_java_util_concurrent_locks_AbstractOwnableSynchronizer);

}
