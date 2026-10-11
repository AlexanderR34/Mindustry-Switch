#include "java/util/concurrent/locks/StampedLock_ReadWriteLockView.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/locks/ReadWriteLock.h"
#include "java/util/concurrent/locks/StampedLock_ReadWriteLockView.h"
#include "java/util/concurrent/locks/Lock.h"
#include "java/util/concurrent/locks/StampedLock.h"

extern "C" {


void mark_java_util_concurrent_locks_StampedLock$ReadWriteLockView(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_StampedLock$ReadWriteLockView *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_concurrent_locks_StampedLock$ReadWriteLockView(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_locks_StampedLock$ReadWriteLockView_java_util_concurrent_locks_StampedLock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$ReadWriteLockView:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_StampedLock$ReadWriteLockView(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(983);
	((java_util_concurrent_locks_StampedLock$ReadWriteLockView *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_StampedLock$ReadWriteLockView_readLock_R_java_util_concurrent_locks_Lock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$ReadWriteLockView:readLock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(984);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$ReadWriteLockView *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_concurrent_locks_StampedLock_asReadLock_R_java_util_concurrent_locks_Lock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_asReadLock_R_java_util_concurrent_locks_Lock])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_StampedLock$ReadWriteLockView_writeLock_R_java_util_concurrent_locks_Lock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$ReadWriteLockView:writeLock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(985);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$ReadWriteLockView *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_java_util_concurrent_locks_StampedLock_asWriteLock_R_java_util_concurrent_locks_Lock) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_asWriteLock_R_java_util_concurrent_locks_Lock])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_locks_StampedLock$ReadWriteLockView[] {
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
	(void *) M_java_util_concurrent_locks_StampedLock$ReadWriteLockView_readLock_R_java_util_concurrent_locks_Lock,
	(void *) M_java_util_concurrent_locks_StampedLock$ReadWriteLockView_writeLock_R_java_util_concurrent_locks_Lock,
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
	{ "readLock", "()Ljava/util/concurrent/locks/Lock;" },
	{ "writeLock", "()Ljava/util/concurrent/locks/Lock;" },
};

static jclass interfaces[] { &class_java_util_concurrent_locks_ReadWriteLock, };

static FieldMetadata fields[] {
	{ "this$0", &class_java_util_concurrent_locks_StampedLock, offsetof(java_util_concurrent_locks_StampedLock$ReadWriteLockView, F_this$0), "Ljava/util/concurrent/locks/StampedLock;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_StampedLock$ReadWriteLockView_java_util_concurrent_locks_StampedLock, 0, "(Ljava/util/concurrent/locks/StampedLock;)V", 0 },
	{ "readLock", (intptr_t) M_java_util_concurrent_locks_StampedLock$ReadWriteLockView_readLock_R_java_util_concurrent_locks_Lock, VTABLE_java_util_concurrent_locks_StampedLock$ReadWriteLockView_readLock_R_java_util_concurrent_locks_Lock, "()Ljava/util/concurrent/locks/Lock;", 1 },
	{ "writeLock", (intptr_t) M_java_util_concurrent_locks_StampedLock$ReadWriteLockView_writeLock_R_java_util_concurrent_locks_Lock, VTABLE_java_util_concurrent_locks_StampedLock$ReadWriteLockView_writeLock_R_java_util_concurrent_locks_Lock, "()Ljava/util/concurrent/locks/Lock;", 1 },
};

Class class_java_util_concurrent_locks_StampedLock$ReadWriteLockView{
		.nativeName = (intptr_t) "java/util/concurrent/locks/StampedLock$ReadWriteLockView",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_StampedLock$ReadWriteLockView),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_StampedLock$ReadWriteLockView,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_StampedLock$ReadWriteLockView,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_StampedLock$ReadWriteLockView,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_locks_StampedLock,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_StampedLock$ReadWriteLockView = registerClass(&class_java_util_concurrent_locks_StampedLock$ReadWriteLockView);

}

