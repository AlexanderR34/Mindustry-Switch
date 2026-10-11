#include "arc/util/Timer_1.h"
#include "java/lang/Object.h"
#include "arc/util/Timer_Task.h"
#include "arc/util/Timer_1.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_util_Timer$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_util_Timer$Task(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_Timer$1 *) object;
	if (self->F_val$task)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$task)->clazz)->markFunction)((jobject) self->F_val$task, mark, depth + 1);
}

void clinit_arc_util_Timer$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_util_Timer$Task(ctx);
}

void init_arc_util_Timer$1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Timer$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	((arc_util_Timer$1 *) NULL_CHECK((frame[0].o)))->F_val$task = (jref) (frame[1].o);
	init_arc_util_Timer$Task(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_Timer$1_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Timer$1:run", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_util_Timer$1 *) NULL_CHECK((frame[0].o)))->F_val$task;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Timer$1[] {
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
	(void *) M_arc_util_Timer$1_run,
	(void *) M_arc_util_Timer$Task_cancel,
	(void *) M_arc_util_Timer$Task_isScheduled_R_boolean,
	(void *) M_arc_util_Timer$Task_getExecuteTimeMillis_R_long,
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
	{ "run", "()V" },
	{ "cancel", "()V" },
	{ "isScheduled", "()Z" },
	{ "getExecuteTimeMillis", "()J" },
};

static FieldMetadata fields[] {
	{ "val$task", &class_java_lang_Runnable, offsetof(arc_util_Timer$1, F_val$task), "Ljava/lang/Runnable;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Timer$1_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 0 },
	{ "run", (intptr_t) M_arc_util_Timer$1_run, VTABLE_arc_util_Timer$1_run, "()V", 1 },
};

Class class_arc_util_Timer$1{
		.nativeName = (intptr_t) "arc/util/Timer$1",
		.parentClass = (intptr_t) &class_arc_util_Timer$Task,
		.size = sizeof(arc_util_Timer$1),
		.classVtable = (intptr_t) vtable_arc_util_Timer$1,
		.staticInitializer = (intptr_t) clinit_arc_util_Timer$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Timer$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_util_Timer$1 = registerClass(&class_arc_util_Timer$1);

}

