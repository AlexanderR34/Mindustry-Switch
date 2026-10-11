#include "java/util/concurrent/locks/AbstractQueuedSynchronizer_Node.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"
#include "java/lang/NullPointerException.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer_Node.h"
#include "java/lang/Thread.h"

extern "C" {

jobject SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SHARED;
jobject SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_EXCLUSIVE;
jint SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_CANCELLED;
jint SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SIGNAL;
jint SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_CONDITION;
jint SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_PROPAGATE;

void mark_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SHARED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SHARED)->clazz)->markFunction)((jobject) SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SHARED, mark, depth + 1);
		if (SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_EXCLUSIVE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_EXCLUSIVE)->clazz)->markFunction)((jobject) SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_EXCLUSIVE, mark, depth + 1);
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
	auto self = (java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) object;
	if (self->F_prev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev)->clazz)->markFunction)((jobject) self->F_prev, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_thread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thread)->clazz)->markFunction)((jobject) self->F_thread, mark, depth + 1);
	if (self->F_nextWaiter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nextWaiter)->clazz)->markFunction)((jobject) self->F_nextWaiter, mark, depth + 1);
}

jbool M_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$Node:isShared", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_nextWaiter;
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[1].o = (jobject)SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SHARED;
	if (sp[0].o != sp[1].o) goto label_1;
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

jobject M_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$Node:predecessor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(496);
	sp[0].o = (jobject)((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_prev;
	frame[1].o = sp[0].o;
	LINE_NUMBER(497);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(498);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$Node:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(503);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(504);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_lang_Thread_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$Node:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(506);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(507);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_nextWaiter = (jref) (frame[2].o);
	LINE_NUMBER(508);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_thread = (jref) (frame[1].o);
	LINE_NUMBER(509);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_lang_Thread_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$Node:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(511);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(512);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_waitStatus = (frame[2].i);
	LINE_NUMBER(513);
	((java_util_concurrent_locks_AbstractQueuedSynchronizer$Node *) NULL_CHECK((frame[0].o)))->F_thread = (jref) (frame[1].o);
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_CANCELLED = jint(1);
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SIGNAL = jint(-1);
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_CONDITION = jint(-2);
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_PROPAGATE = jint(-3);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/AbstractQueuedSynchronizer$Node:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	{
	LINE_NUMBER(383);
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node);
	init_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx, sp[0].o);
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SHARED = sp[0].o;
	LINE_NUMBER(385);
	clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node(ctx);
	SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_EXCLUSIVE = (jobject(nullptr));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node[] {
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
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean,
	(void *) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
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
	{ "isShared", "()Z" },
	{ "predecessor", "()Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;" },
};

static FieldMetadata fields[] {
	{ "SHARED", &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SHARED, "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 24 },
	{ "EXCLUSIVE", &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_EXCLUSIVE, "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 24 },
	{ "CANCELLED", &class_int, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_CANCELLED, "I", 24 },
	{ "SIGNAL", &class_int, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_SIGNAL, "I", 24 },
	{ "CONDITION", &class_int, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_CONDITION, "I", 24 },
	{ "PROPAGATE", &class_int, (intptr_t) &SF_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_PROPAGATE, "I", 24 },
	{ "waitStatus", &class_int, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, F_waitStatus), "I", 64 },
	{ "prev", &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, F_prev), "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 64 },
	{ "next", &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, F_next), "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 64 },
	{ "thread", &class_java_lang_Thread, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, F_thread), "Ljava/lang/Thread;", 64 },
	{ "nextWaiter", &class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, offsetof(java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, F_nextWaiter), "Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 0 },
};

static MethodMetadata methods[] {
	{ "isShared", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_isShared_R_boolean, "()Z", 16 },
	{ "predecessor", (intptr_t) M_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, VTABLE_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_predecessor_R_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, "()Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;", 16 },
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_lang_Thread_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, 0, "(Ljava/lang/Thread;Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$Node;)V", 0 },
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node_java_lang_Thread_int, 0, "(Ljava/lang/Thread;I)V", 0 },
	{ "<clinit>", (intptr_t) clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node, 0, "()V", 8 },
};

Class class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node{
		.nativeName = (intptr_t) "java/util/concurrent/locks/AbstractQueuedSynchronizer$Node",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_AbstractQueuedSynchronizer$Node),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_locks_AbstractQueuedSynchronizer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node = registerClass(&class_java_util_concurrent_locks_AbstractQueuedSynchronizer$Node);

}

