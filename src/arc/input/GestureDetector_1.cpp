#include "arc/input/GestureDetector_1.h"
#include "arc/input/GestureDetector_1.h"
#include "arc/input/GestureDetector.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/util/Timer_Task.h"
#include "arc/input/GestureDetector_GestureListener.h"

extern "C" {


void mark_arc_input_GestureDetector$1(jobject object, jint mark, jint depth) {
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
	auto self = (arc_input_GestureDetector$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_input_GestureDetector$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_util_Timer$Task(ctx);
}

void init_arc_input_GestureDetector$1_arc_input_GestureDetector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_input_GestureDetector$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	((arc_input_GestureDetector$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_util_Timer$Task(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_input_GestureDetector$1_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/input/GestureDetector$1:run", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((arc_input_GestureDetector$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_longPressFired) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_input_GestureDetector$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_input_GestureDetector$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK(sp[1].o))->F_listener;
	sp[2].o = (jobject)((arc_input_GestureDetector$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK(sp[2].o))->F_pointer1;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((arc_input_GestureDetector$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((arc_input_GestureDetector *) NULL_CHECK(sp[2].o))->F_pointer1;
	jint temp1 = (jint)((func_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_input_GestureDetector$GestureListener, INDEX_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean, sp[1].o))(ctx, sp[1].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	((arc_input_GestureDetector *) NULL_CHECK(sp[0].o))->F_longPressFired = temp1;
	}
label_1:;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_input_GestureDetector$1[] {
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
	(void *) M_arc_input_GestureDetector$1_run,
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
	{ "this$0", &class_arc_input_GestureDetector, offsetof(arc_input_GestureDetector$1, F_this$0), "Larc/input/GestureDetector;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_input_GestureDetector$1_arc_input_GestureDetector, 0, "(Larc/input/GestureDetector;)V", 0 },
	{ "run", (intptr_t) M_arc_input_GestureDetector$1_run, VTABLE_arc_input_GestureDetector$1_run, "()V", 1 },
};

Class class_arc_input_GestureDetector$1{
		.nativeName = (intptr_t) "arc/input/GestureDetector$1",
		.parentClass = (intptr_t) &class_arc_util_Timer$Task,
		.size = sizeof(arc_input_GestureDetector$1),
		.classVtable = (intptr_t) vtable_arc_input_GestureDetector$1,
		.staticInitializer = (intptr_t) clinit_arc_input_GestureDetector$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_input_GestureDetector$1,
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
static bool registered_arc_input_GestureDetector$1 = registerClass(&class_arc_input_GestureDetector$1);

}

