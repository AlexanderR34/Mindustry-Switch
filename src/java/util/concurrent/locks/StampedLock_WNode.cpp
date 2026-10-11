#include "java/util/concurrent/locks/StampedLock_WNode.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/locks/StampedLock_WNode.h"
#include "java/util/concurrent/locks/StampedLock.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_java_util_concurrent_locks_StampedLock$WNode(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_locks_StampedLock$WNode *) object;
	if (self->F_prev)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prev)->clazz)->markFunction)((jobject) self->F_prev, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
	if (self->F_cowait)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cowait)->clazz)->markFunction)((jobject) self->F_cowait, mark, depth + 1);
	if (self->F_thread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thread)->clazz)->markFunction)((jobject) self->F_thread, mark, depth + 1);
}

void clinit_java_util_concurrent_locks_StampedLock$WNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_locks_StampedLock$WNode_int_java_util_concurrent_locks_StampedLock$WNode(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/locks/StampedLock$WNode:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_locks_StampedLock$WNode(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(375);
	init_java_lang_Object(ctx, (frame[0].o));
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[0].o)))->F_mode = (frame[1].i);
	((java_util_concurrent_locks_StampedLock$WNode *) NULL_CHECK((frame[0].o)))->F_prev = (jref) (frame[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_locks_StampedLock$WNode[] {
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
};

static FieldMetadata fields[] {
	{ "prev", &class_java_util_concurrent_locks_StampedLock$WNode, offsetof(java_util_concurrent_locks_StampedLock$WNode, F_prev), "Ljava/util/concurrent/locks/StampedLock$WNode;", 64 },
	{ "next", &class_java_util_concurrent_locks_StampedLock$WNode, offsetof(java_util_concurrent_locks_StampedLock$WNode, F_next), "Ljava/util/concurrent/locks/StampedLock$WNode;", 64 },
	{ "cowait", &class_java_util_concurrent_locks_StampedLock$WNode, offsetof(java_util_concurrent_locks_StampedLock$WNode, F_cowait), "Ljava/util/concurrent/locks/StampedLock$WNode;", 64 },
	{ "thread", &class_java_lang_Thread, offsetof(java_util_concurrent_locks_StampedLock$WNode, F_thread), "Ljava/lang/Thread;", 64 },
	{ "status", &class_int, offsetof(java_util_concurrent_locks_StampedLock$WNode, F_status), "I", 64 },
	{ "mode", &class_int, offsetof(java_util_concurrent_locks_StampedLock$WNode, F_mode), "I", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_locks_StampedLock$WNode_int_java_util_concurrent_locks_StampedLock$WNode, 0, "(ILjava/util/concurrent/locks/StampedLock$WNode;)V", 0 },
};

Class class_java_util_concurrent_locks_StampedLock$WNode{
		.nativeName = (intptr_t) "java/util/concurrent/locks/StampedLock$WNode",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_locks_StampedLock$WNode),
		.classVtable = (intptr_t) vtable_java_util_concurrent_locks_StampedLock$WNode,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_locks_StampedLock$WNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_locks_StampedLock$WNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_locks_StampedLock,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_locks_StampedLock$WNode = registerClass(&class_java_util_concurrent_locks_StampedLock$WNode);

}

