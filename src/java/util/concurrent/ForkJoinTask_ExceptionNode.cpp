#include "java/util/concurrent/ForkJoinTask_ExceptionNode.h"
#include "java/lang/Object.h"
#include "java/util/concurrent/ForkJoinTask.h"
#include "java/util/concurrent/ForkJoinTask_ExceptionNode.h"
#include "java/lang/ref/WeakReference.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_java_util_concurrent_ForkJoinTask$ExceptionNode(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ref_WeakReference(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_concurrent_ForkJoinTask$ExceptionNode *) object;
	if (self->F_ex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ex)->clazz)->markFunction)((jobject) self->F_ex, mark, depth + 1);
	if (self->F_next)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_next)->clazz)->markFunction)((jobject) self->F_next, mark, depth + 1);
}

void clinit_java_util_concurrent_ForkJoinTask$ExceptionNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ref_WeakReference(ctx);
}

void init_java_util_concurrent_ForkJoinTask$ExceptionNode_java_util_concurrent_ForkJoinTask_java_lang_Throwable_java_util_concurrent_ForkJoinTask$ExceptionNode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/concurrent/ForkJoinTask$ExceptionNode:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_concurrent_ForkJoinTask$ExceptionNode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(445);
	init_java_lang_ref_WeakReference_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(446);
	((java_util_concurrent_ForkJoinTask$ExceptionNode *) NULL_CHECK((frame[0].o)))->F_ex = (jref) (frame[2].o);
	LINE_NUMBER(447);
	((java_util_concurrent_ForkJoinTask$ExceptionNode *) NULL_CHECK((frame[0].o)))->F_next = (jref) (frame[3].o);
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	jlong temp0 = (jlong)((func_java_lang_Thread_getId_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Thread_getId_R_long])(ctx, sp[1].o);
	((java_util_concurrent_ForkJoinTask$ExceptionNode *) NULL_CHECK(sp[0].o))->F_thrower = temp0;
	LINE_NUMBER(449);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_System_identityHashCode_java_lang_Object_R_int(ctx, (frame[1].o));
	((java_util_concurrent_ForkJoinTask$ExceptionNode *) NULL_CHECK(sp[0].o))->F_hashCode = temp1;
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_concurrent_ForkJoinTask$ExceptionNode[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_ref_WeakReference_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_ref_WeakReference_clear,
	(void *) M_java_lang_ref_WeakReference_get_R_java_lang_Object,
	(void *) M_java_lang_ref_WeakReference_refersTo_java_lang_Object_R_boolean,
	(void *) M_java_lang_ref_WeakReference_init_java_lang_Object,
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
	{ "clear", "()V" },
	{ "get", "()Ljava/lang/Object;" },
	{ "refersTo", "(Ljava/lang/Object;)Z" },
	{ "init", "(Ljava/lang/Object;)V" },
};

static FieldMetadata fields[] {
	{ "ex", &class_java_lang_Throwable, offsetof(java_util_concurrent_ForkJoinTask$ExceptionNode, F_ex), "Ljava/lang/Throwable;", 16 },
	{ "next", &class_java_util_concurrent_ForkJoinTask$ExceptionNode, offsetof(java_util_concurrent_ForkJoinTask$ExceptionNode, F_next), "Ljava/util/concurrent/ForkJoinTask$ExceptionNode;", 0 },
	{ "thrower", &class_long, offsetof(java_util_concurrent_ForkJoinTask$ExceptionNode, F_thrower), "J", 16 },
	{ "hashCode", &class_int, offsetof(java_util_concurrent_ForkJoinTask$ExceptionNode, F_hashCode), "I", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_concurrent_ForkJoinTask$ExceptionNode_java_util_concurrent_ForkJoinTask_java_lang_Throwable_java_util_concurrent_ForkJoinTask$ExceptionNode, 0, "(Ljava/util/concurrent/ForkJoinTask;Ljava/lang/Throwable;Ljava/util/concurrent/ForkJoinTask$ExceptionNode;)V", 0 },
};

Class class_java_util_concurrent_ForkJoinTask$ExceptionNode{
		.nativeName = (intptr_t) "java/util/concurrent/ForkJoinTask$ExceptionNode",
		.parentClass = (intptr_t) &class_java_lang_ref_WeakReference,
		.size = sizeof(java_util_concurrent_ForkJoinTask$ExceptionNode),
		.classVtable = (intptr_t) vtable_java_util_concurrent_ForkJoinTask$ExceptionNode,
		.staticInitializer = (intptr_t) clinit_java_util_concurrent_ForkJoinTask$ExceptionNode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_concurrent_ForkJoinTask$ExceptionNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_concurrent_ForkJoinTask,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_concurrent_ForkJoinTask$ExceptionNode = registerClass(&class_java_util_concurrent_ForkJoinTask$ExceptionNode);

}

