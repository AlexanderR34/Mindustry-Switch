#include "java/util/concurrent/locks/StampedLock_WriteLockView.h"
#include "java/lang/Object.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/util/concurrent/locks/Condition.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/locks/Lock.h"
#include "java/util/concurrent/locks/StampedLock_WriteLockView.h"
#include "java/util/concurrent/locks/StampedLock.h"

extern "C" {


void mark_java_util_concurrent_locks_StampedLock$WriteLockView(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_StampedLock$WriteLockView *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_concurrent_locks_StampedLock$WriteLockView(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_locks_StampedLock$WriteLockView_java_util_concurrent_locks_StampedLock(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$WriteLockView:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_StampedLock$WriteLockView(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(967);
	((java_util_concurrent_locks_StampedLock$WriteLockView *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_StampedLock$WriteLockView_lock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$WriteLockView:lock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(968);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WriteLockView *) NULL_CHECK((frame[0].o)))->F_this$0;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_writeLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_writeLock_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_concurrent_locks_StampedLock$WriteLockView_lockInterruptibly(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$WriteLockView:lockInterruptibly", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WriteLockView *) NULL_CHECK((frame[0].o)))->F_this$0;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_writeLockInterruptibly_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_writeLockInterruptibly_R_long])(ctx, sp[0].o);
	LINE_NUMBER(971);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_concurrent_locks_StampedLock$WriteLockView_tryLock_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$WriteLockView:tryLock", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(972);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WriteLockView *) NULL_CHECK((frame[0].o)))->F_this$0;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_tryWriteLock_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_tryWriteLock_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_1;
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

jbool M_java_util_concurrent_locks_StampedLock$WriteLockView_tryLock_long_java_util_concurrent_TimeUnit_R_boolean(jcontext ctx, jobject self, jlong param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$WriteLockView:tryLock", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	{
	LINE_NUMBER(975);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WriteLockView *) NULL_CHECK((frame[0].o)))->F_this$0;
	jlong temp0 = (jlong)((func_java_util_concurrent_locks_StampedLock_tryWriteLock_long_java_util_concurrent_TimeUnit_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_tryWriteLock_long_java_util_concurrent_TimeUnit_R_long])(ctx, sp[0].o, (frame[1].l), (frame[3].o));
	if ((longCompare(temp0, (jlong(0)))) == 0) goto label_1;
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

void M_java_util_concurrent_locks_StampedLock$WriteLockView_unlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$WriteLockView:unlock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((java_util_concurrent_locks_StampedLock$WriteLockView *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_java_util_concurrent_locks_StampedLock_unstampedUnlockWrite) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_locks_StampedLock_unstampedUnlockWrite])(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_util_concurrent_locks_StampedLock$WriteLockView_newCondition_R_java_util_concurrent_locks_Condition(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$WriteLockView:newCondition", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(979);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_locks_StampedLock$WriteLockView[] {
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
	(void *) M_java_util_concurrent_locks_StampedLock$WriteLockView_lock,
	(void *) M_java_util_concurrent_locks_StampedLock$WriteLockView_lockInterruptibly,
	(void *) M_java_util_concurrent_locks_StampedLock$WriteLockView_tryLock_R_boolean,
	(void *) M_java_util_concurrent_locks_StampedLock$WriteLockView_tryLock_long_java_util_concurrent_TimeUnit_R_boolean,
	(void *) M_java_util_concurrent_locks_StampedLock$WriteLockView_unlock,
	(void *) M_java_util_concurrent_locks_StampedLock$WriteLockView_newCondition_R_java_util_concurrent_locks_Condition,
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
	{ "lock", "()V" },
	{ "lockInterruptibly", "()V" },
	{ "tryLock", "()Z" },
	{ "tryLock", "(JLjava/util/concurrent/TimeUnit;)Z" },
	{ "unlock", "()V" },
	{ "newCondition", "()Ljava/util/concurrent/locks/Condition;" },
};

static jclass interfaces[] { &class_java_util_concurrent_locks_Lock, };

static FieldMetadata fields[] {
	{ "this$0", &class_java_util_concurrent_locks_StampedLock, offsetof(java_util_concurrent_locks_StampedLock$WriteLockView, F_this$0), "Ljava/util/concurrent/locks/StampedLock;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_StampedLock$WriteLockView_java_util_concurrent_locks_StampedLock, 0, "(Ljava/util/concurrent/locks/StampedLock;)V", 0 },
	{ "lock", (intptr_t) M_java_util_concurrent_locks_StampedLock$WriteLockView_lock, VTABLE_java_util_concurrent_locks_StampedLock$WriteLockView_lock, "()V", 1 },
	{ "lockInterruptibly", (intptr_t) M_java_util_concurrent_locks_StampedLock$WriteLockView_lockInterruptibly, VTABLE_java_util_concurrent_locks_StampedLock$WriteLockView_lockInterruptibly, "()V", 1 },
	{ "tryLock", (intptr_t) M_java_util_concurrent_locks_StampedLock$WriteLockView_tryLock_R_boolean, VTABLE_java_util_concurrent_locks_StampedLock$WriteLockView_tryLock_R_boolean, "()Z", 1 },
	{ "tryLock", (intptr_t) M_java_util_concurrent_locks_StampedLock$WriteLockView_tryLock_long_java_util_concurrent_TimeUnit_R_boolean, VTABLE_java_util_concurrent_locks_StampedLock$WriteLockView_tryLock_long_java_util_concurrent_TimeUnit_R_boolean, "(JLjava/util/concurrent/TimeUnit;)Z", 1 },
	{ "unlock", (intptr_t) M_java_util_concurrent_locks_StampedLock$WriteLockView_unlock, VTABLE_java_util_concurrent_locks_StampedLock$WriteLockView_unlock, "()V", 1 },
	{ "newCondition", (intptr_t) M_java_util_concurrent_locks_StampedLock$WriteLockView_newCondition_R_java_util_concurrent_locks_Condition, VTABLE_java_util_concurrent_locks_StampedLock$WriteLockView_newCondition_R_java_util_concurrent_locks_Condition, "()Ljava/util/concurrent/locks/Condition;", 1 },
};

Class class_java_util_concurrent_locks_StampedLock$WriteLockView{
		.nativeName = (intptr_t) "java/util/concurrent/locks/StampedLock$WriteLockView",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_StampedLock$WriteLockView),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_StampedLock$WriteLockView,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_StampedLock$WriteLockView,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_StampedLock$WriteLockView,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_StampedLock$WriteLockView = registerClass(&class_java_util_concurrent_locks_StampedLock$WriteLockView);

}

