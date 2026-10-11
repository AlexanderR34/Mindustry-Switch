#include "arc/scene/actions/TimeScaleAction.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/TimeScaleAction.h"
#include "arc/scene/actions/DelegateAction.h"
#include "arc/scene/Action.h"

extern "C" {


void mark_arc_scene_actions_TimeScaleAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_actions_DelegateAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_actions_TimeScaleAction *) object;
}

void clinit_arc_scene_actions_TimeScaleAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_actions_DelegateAction(ctx);
}

void init_arc_scene_actions_TimeScaleAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TimeScaleAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_TimeScaleAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_arc_scene_actions_DelegateAction(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_TimeScaleAction_delegate_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TimeScaleAction:delegate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	jint temp0 = (jint)((func_arc_scene_Action_act_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Action_act_float_R_boolean])(ctx, sp[0].o, ((frame[1].f) * ((jfloat)((arc_scene_actions_TimeScaleAction *) NULL_CHECK((frame[0].o)))->F_scale)));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_TimeScaleAction_getScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TimeScaleAction:getScale", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_TimeScaleAction *) NULL_CHECK((frame[0].o)))->F_scale);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_TimeScaleAction_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TimeScaleAction:setScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(20);
	((arc_scene_actions_TimeScaleAction *) NULL_CHECK((frame[0].o)))->F_scale = (frame[1].f);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_TimeScaleAction[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_actions_DelegateAction_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_actions_DelegateAction_reset,
	(void *) M_arc_scene_actions_DelegateAction_act_float_R_boolean,
	(void *) M_arc_scene_actions_DelegateAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_actions_DelegateAction_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_actions_DelegateAction_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_DelegateAction_getAction_R_arc_scene_Action,
	(void *) M_arc_scene_actions_DelegateAction_setAction_arc_scene_Action,
	(void *) M_arc_scene_actions_TimeScaleAction_delegate_float_R_boolean,
	(void *) M_arc_scene_actions_TimeScaleAction_getScale_R_float,
	(void *) M_arc_scene_actions_TimeScaleAction_setScale_float,
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
	{ "getAction", "()Larc/scene/Action;" },
	{ "setAction", "(Larc/scene/Action;)V" },
	{ "delegate", "(F)Z" },
	{ "getScale", "()F" },
	{ "setScale", "(F)V" },
};

static FieldMetadata fields[] {
	{ "scale", &class_float, offsetof(arc_scene_actions_TimeScaleAction, F_scale), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_TimeScaleAction, 0, "()V", 1 },
	{ "delegate", (intptr_t) M_arc_scene_actions_TimeScaleAction_delegate_float_R_boolean, VTABLE_arc_scene_actions_TimeScaleAction_delegate_float_R_boolean, "(F)Z", 4 },
	{ "getScale", (intptr_t) M_arc_scene_actions_TimeScaleAction_getScale_R_float, VTABLE_arc_scene_actions_TimeScaleAction_getScale_R_float, "()F", 1 },
	{ "setScale", (intptr_t) M_arc_scene_actions_TimeScaleAction_setScale_float, VTABLE_arc_scene_actions_TimeScaleAction_setScale_float, "(F)V", 1 },
};

Class class_arc_scene_actions_TimeScaleAction{
		.nativeName = (intptr_t) "arc/scene/actions/TimeScaleAction",
		.parentClass = (intptr_t) &class_arc_scene_actions_DelegateAction,
		.size = sizeof(arc_scene_actions_TimeScaleAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_TimeScaleAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_TimeScaleAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_TimeScaleAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_TimeScaleAction = registerClass(&class_arc_scene_actions_TimeScaleAction);

}
