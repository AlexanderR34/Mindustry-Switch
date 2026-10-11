#include "java/util/concurrent/FutureTask_WaitNode.h"
#include "java/util/concurrent/FutureTask_WaitNode.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/FutureTask.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_java_util_concurrent_FutureTask$WaitNode(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_concurrent_FutureTask$WaitNode *) object;
	if (self->F_thread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_thread)->clazz)->markFunction)((jobject) self->F_thread, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
}

void clinit_java_util_concurrent_FutureTask$WaitNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_concurrent_FutureTask$WaitNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/FutureTask$WaitNode:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_FutureTask$WaitNode(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(356);
	init_java_lang_Object(ctx, (frame[0].o));
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	((java_util_concurrent_FutureTask$WaitNode *) NULL_CHECK(sp[0].o))->F_thread = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_FutureTask$WaitNode[] {
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
	{ "thread", &class_java_lang_Thread, offsetof(java_util_concurrent_FutureTask$WaitNode, F_thread), "Ljava/lang/Thread;", 64 },
	{ "next", &class_java_util_concurrent_FutureTask$WaitNode, offsetof(java_util_concurrent_FutureTask$WaitNode, F_next), "Ljava/util/concurrent/FutureTask$WaitNode;", 64 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_FutureTask$WaitNode, 0, "()V", 0 },
};

Class class_java_util_concurrent_FutureTask$WaitNode{
		.nativeName = (intptr_t) "java/util/concurrent/FutureTask$WaitNode",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_concurrent_FutureTask$WaitNode),
		.classVtable = (intptr_t) vtable_java_util_concurrent_FutureTask$WaitNode,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_FutureTask$WaitNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_FutureTask$WaitNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_FutureTask,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_FutureTask$WaitNode = registerClass(&class_java_util_concurrent_FutureTask$WaitNode);

}

