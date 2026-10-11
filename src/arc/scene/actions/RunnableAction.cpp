#include "arc/scene/actions/RunnableAction.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/RunnableAction.h"
#include "arc/util/pooling/Pool.h"
#include "arc/scene/Action.h"
#include "java/lang/Throwable.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_arc_scene_actions_RunnableAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_Action(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_actions_RunnableAction *) object;
	if (self->F_runnable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_runnable)->clazz)->markFunction)((jobject) self->F_runnable, mark, depth + 1);
}

void clinit_arc_scene_actions_RunnableAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Action(ctx);
}

void init_arc_scene_actions_RunnableAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RunnableAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_RunnableAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_arc_scene_Action(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_RunnableAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RunnableAction:act", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(17);
	if (((jint)((arc_scene_actions_RunnableAction *) NULL_CHECK((frame[0].o)))->F_ran) != 0) goto label_1;
	}
	{
	LINE_NUMBER(18);
	((arc_scene_actions_RunnableAction *) NULL_CHECK((frame[0].o)))->F_ran = (jint(1));
	LINE_NUMBER(19);
	((func_arc_scene_actions_RunnableAction_run) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_RunnableAction_run])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_RunnableAction_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RunnableAction:run", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_arc_scene_actions_RunnableAction_getPool_R_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_RunnableAction_getPool_R_arc_util_pooling_Pool])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(27);
	((func_arc_scene_actions_RunnableAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_RunnableAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((arc_scene_actions_RunnableAction *) NULL_CHECK((frame[0].o)))->F_runnable;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(31);
	((func_arc_scene_actions_RunnableAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_RunnableAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(32);
	goto label_7;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(31);
	frame[2].o = sp[0].o;
	((func_arc_scene_actions_RunnableAction_setPool_arc_util_pooling_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_actions_RunnableAction_setPool_arc_util_pooling_Pool])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(32);
	throwException(ctx, (frame[2].o));	}
label_7:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_actions_RunnableAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RunnableAction:restart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	((arc_scene_actions_RunnableAction *) NULL_CHECK((frame[0].o)))->F_ran = (jint(0));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_RunnableAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RunnableAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	M_arc_scene_Action_reset(ctx, (frame[0].o));
	LINE_NUMBER(43);
	((arc_scene_actions_RunnableAction *) NULL_CHECK((frame[0].o)))->F_runnable = (jref) (jobject(nullptr));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_actions_RunnableAction_getRunnable_R_java_lang_Runnable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RunnableAction:getRunnable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_scene_actions_RunnableAction *) NULL_CHECK((frame[0].o)))->F_runnable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RunnableAction:setRunnable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	((arc_scene_actions_RunnableAction *) NULL_CHECK((frame[0].o)))->F_runnable = (jref) (frame[1].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_RunnableAction[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Action_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_actions_RunnableAction_reset,
	(void *) M_arc_scene_actions_RunnableAction_act_float_R_boolean,
	(void *) M_arc_scene_actions_RunnableAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_RunnableAction_run,
	(void *) M_arc_scene_actions_RunnableAction_getRunnable_R_java_lang_Runnable,
	(void *) M_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable,
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
	{ "act", "(F)Z" },
	{ "restart", "()V" },
	{ "getActor", "()Larc/scene/Element;" },
	{ "setActor", "(Larc/scene/Element;)V" },
	{ "getTarget", "()Larc/scene/Element;" },
	{ "setTarget", "(Larc/scene/Element;)V" },
	{ "getPool", "()Larc/util/pooling/Pool;" },
	{ "setPool", "(Larc/util/pooling/Pool;)V" },
	{ "run", "()V" },
	{ "getRunnable", "()Ljava/lang/Runnable;" },
	{ "setRunnable", "(Ljava/lang/Runnable;)V" },
};

static FieldMetadata fields[] {
	{ "runnable", &class_java_lang_Runnable, offsetof(arc_scene_actions_RunnableAction, F_runnable), "Ljava/lang/Runnable;", 2 },
	{ "ran", &class_boolean, offsetof(arc_scene_actions_RunnableAction, F_ran), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_RunnableAction, 0, "()V", 1 },
	{ "act", (intptr_t) M_arc_scene_actions_RunnableAction_act_float_R_boolean, VTABLE_arc_scene_actions_RunnableAction_act_float_R_boolean, "(F)Z", 1 },
	{ "run", (intptr_t) M_arc_scene_actions_RunnableAction_run, VTABLE_arc_scene_actions_RunnableAction_run, "()V", 1 },
	{ "restart", (intptr_t) M_arc_scene_actions_RunnableAction_restart, VTABLE_arc_scene_actions_RunnableAction_restart, "()V", 1 },
	{ "reset", (intptr_t) M_arc_scene_actions_RunnableAction_reset, VTABLE_arc_scene_actions_RunnableAction_reset, "()V", 1 },
	{ "getRunnable", (intptr_t) M_arc_scene_actions_RunnableAction_getRunnable_R_java_lang_Runnable, VTABLE_arc_scene_actions_RunnableAction_getRunnable_R_java_lang_Runnable, "()Ljava/lang/Runnable;", 1 },
	{ "setRunnable", (intptr_t) M_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable, VTABLE_arc_scene_actions_RunnableAction_setRunnable_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
};

Class class_arc_scene_actions_RunnableAction{
		.nativeName = (intptr_t) "arc/scene/actions/RunnableAction",
		.parentClass = (intptr_t) &class_arc_scene_Action,
		.size = sizeof(arc_scene_actions_RunnableAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_RunnableAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_RunnableAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_RunnableAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_RunnableAction = registerClass(&class_arc_scene_actions_RunnableAction);

}
