#include "arc/scene/actions/RotateToAction.h"
#include "arc/math/Mathf.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/TemporalAction.h"
#include "arc/scene/actions/RotateToAction.h"
#include "arc/scene/Action.h"

extern "C" {


void mark_arc_scene_actions_RotateToAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_actions_TemporalAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_actions_RotateToAction *) object;
}

void clinit_arc_scene_actions_RotateToAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_actions_TemporalAction(ctx);
}

void init_arc_scene_actions_RotateToAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RotateToAction:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_RotateToAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_arc_scene_actions_TemporalAction(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection = (jint(0));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_actions_RotateToAction_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RotateToAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_RotateToAction(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(24);
	init_arc_scene_actions_TemporalAction(ctx, (frame[0].o));
	LINE_NUMBER(18);
	((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection = (jint(0));
	LINE_NUMBER(25);
	((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection = (frame[1].i);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_RotateToAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RotateToAction:begin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getRotation_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Element_getRotation_R_float])(ctx, sp[1].o);
	((arc_scene_actions_RotateToAction *) NULL_CHECK(sp[0].o))->F_start = temp0;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_RotateToAction_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RotateToAction:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(35);
	if (((jint)((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection) == 0) goto label_1;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_slerp_float_float_float_R_float(ctx, ((jfloat)((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_start), ((jfloat)((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_end), (frame[1].f));
	((func_arc_scene_Element_setRotation_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setRotation_float])(ctx, sp[0].o, temp0);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((func_arc_scene_Element_setRotation_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setRotation_float])(ctx, sp[0].o, (((jfloat)((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_start) + ((((jfloat)((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_end) - ((jfloat)((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_start)) * (frame[1].f))));
	}
label_3:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_RotateToAction_getRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RotateToAction:getRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_end);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_RotateToAction_setRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RotateToAction:setRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(46);
	((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_end = (frame[1].f);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_RotateToAction_isUseShortestDirection_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RotateToAction:isUseShortestDirection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return ((jint)((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_RotateToAction_setUseShortestDirection_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/RotateToAction:setUseShortestDirection", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(54);
	((arc_scene_actions_RotateToAction *) NULL_CHECK((frame[0].o)))->F_useShortestDirection = (frame[1].i);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_RotateToAction[] {
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
	(void *) M_arc_scene_actions_TemporalAction_reset,
	(void *) M_arc_scene_actions_TemporalAction_act_float_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_RotateToAction_begin,
	(void *) M_arc_scene_actions_TemporalAction_end,
	(void *) M_arc_scene_actions_RotateToAction_update_float,
	(void *) M_arc_scene_actions_TemporalAction_finish,
	(void *) M_arc_scene_actions_TemporalAction_getTime_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setTime_float,
	(void *) M_arc_scene_actions_TemporalAction_getDuration_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setDuration_float,
	(void *) M_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_setReverse_boolean,
	(void *) M_arc_scene_actions_RotateToAction_getRotation_R_float,
	(void *) M_arc_scene_actions_RotateToAction_setRotation_float,
	(void *) M_arc_scene_actions_RotateToAction_isUseShortestDirection_R_boolean,
	(void *) M_arc_scene_actions_RotateToAction_setUseShortestDirection_boolean,
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
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "update", "(F)V" },
	{ "finish", "()V" },
	{ "getTime", "()F" },
	{ "setTime", "(F)V" },
	{ "getDuration", "()F" },
	{ "setDuration", "(F)V" },
	{ "getInterpolation", "()Larc/math/Interp;" },
	{ "setInterpolation", "(Larc/math/Interp;)V" },
	{ "isReverse", "()Z" },
	{ "setReverse", "(Z)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "isUseShortestDirection", "()Z" },
	{ "setUseShortestDirection", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "start", &class_float, offsetof(arc_scene_actions_RotateToAction, F_start), "F", 2 },
	{ "end", &class_float, offsetof(arc_scene_actions_RotateToAction, F_end), "F", 2 },
	{ "useShortestDirection", &class_boolean, offsetof(arc_scene_actions_RotateToAction, F_useShortestDirection), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_RotateToAction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_actions_RotateToAction_boolean, 0, "(Z)V", 1 },
	{ "begin", (intptr_t) M_arc_scene_actions_RotateToAction_begin, VTABLE_arc_scene_actions_RotateToAction_begin, "()V", 4 },
	{ "update", (intptr_t) M_arc_scene_actions_RotateToAction_update_float, VTABLE_arc_scene_actions_RotateToAction_update_float, "(F)V", 4 },
	{ "getRotation", (intptr_t) M_arc_scene_actions_RotateToAction_getRotation_R_float, VTABLE_arc_scene_actions_RotateToAction_getRotation_R_float, "()F", 1 },
	{ "setRotation", (intptr_t) M_arc_scene_actions_RotateToAction_setRotation_float, VTABLE_arc_scene_actions_RotateToAction_setRotation_float, "(F)V", 1 },
	{ "isUseShortestDirection", (intptr_t) M_arc_scene_actions_RotateToAction_isUseShortestDirection_R_boolean, VTABLE_arc_scene_actions_RotateToAction_isUseShortestDirection_R_boolean, "()Z", 1 },
	{ "setUseShortestDirection", (intptr_t) M_arc_scene_actions_RotateToAction_setUseShortestDirection_boolean, VTABLE_arc_scene_actions_RotateToAction_setUseShortestDirection_boolean, "(Z)V", 1 },
};

Class class_arc_scene_actions_RotateToAction{
		.nativeName = (intptr_t) "arc/scene/actions/RotateToAction",
		.parentClass = (intptr_t) &class_arc_scene_actions_TemporalAction,
		.size = sizeof(arc_scene_actions_RotateToAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_RotateToAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_RotateToAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_RotateToAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_RotateToAction = registerClass(&class_arc_scene_actions_RotateToAction);

}
