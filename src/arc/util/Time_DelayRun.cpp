#include "arc/util/Time_DelayRun.h"
#include "java/lang/Object.h"
#include "arc/util/Time_DelayRun.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "arc/util/Time.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_util_Time$DelayRun(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Time$DelayRun *) object;
	if (self->F_finish)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_finish)->clazz)->markFunction)((jobject) self->F_finish, mark, depth + 1);
}

void clinit_arc_util_Time$DelayRun(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Time$DelayRun(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time$DelayRun:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Time$DelayRun(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(162);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_Time$DelayRun_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Time$DelayRun:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	((arc_util_Time$DelayRun *) NULL_CHECK((frame[0].o)))->F_delay = (jfloat(0));
	LINE_NUMBER(169);
	((arc_util_Time$DelayRun *) NULL_CHECK((frame[0].o)))->F_finish = (jref) (jobject(nullptr));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Time$DelayRun[] {
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
	(void *) M_arc_util_Time$DelayRun_reset,
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
	{ "reset", "()V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "delay", &class_float, offsetof(arc_util_Time$DelayRun, F_delay), "F", 0 },
	{ "finish", &class_java_lang_Runnable, offsetof(arc_util_Time$DelayRun, F_finish), "Ljava/lang/Runnable;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Time$DelayRun, 0, "()V", 1 },
	{ "reset", (intptr_t) M_arc_util_Time$DelayRun_reset, VTABLE_arc_util_Time$DelayRun_reset, "()V", 1 },
};

Class class_arc_util_Time$DelayRun{
		.nativeName = (intptr_t) "arc/util/Time$DelayRun",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Time$DelayRun),
		.classVtable = (intptr_t) vtable_arc_util_Time$DelayRun,
		.staticInitializer = (intptr_t) clinit_arc_util_Time$DelayRun,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Time$DelayRun,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_Time,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Time$DelayRun = registerClass(&class_arc_util_Time$DelayRun);

}

