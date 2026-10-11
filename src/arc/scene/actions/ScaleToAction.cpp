#include "arc/scene/actions/ScaleToAction.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/ScaleToAction.h"
#include "arc/scene/actions/TemporalAction.h"
#include "arc/scene/Action.h"

extern "C" {


void mark_arc_scene_actions_ScaleToAction(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_actions_ScaleToAction *) object;
}

void clinit_arc_scene_actions_ScaleToAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_actions_TemporalAction(ctx);
}

void init_arc_scene_actions_ScaleToAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ScaleToAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_ScaleToAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_arc_scene_actions_TemporalAction(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ScaleToAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ScaleToAction:begin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((arc_scene_actions_ScaleToAction *) NULL_CHECK(sp[0].o))->F_startX = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_scaleX);
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((arc_scene_actions_ScaleToAction *) NULL_CHECK(sp[0].o))->F_startY = ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_scaleY);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ScaleToAction_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ScaleToAction:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((func_arc_scene_Element_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setScale_float_float])(ctx, sp[0].o, (((jfloat)((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_startX) + ((((jfloat)((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_endX) - ((jfloat)((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_startX)) * (frame[1].f))), (((jfloat)((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_startY) + ((((jfloat)((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_endY) - ((jfloat)((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_startY)) * (frame[1].f))));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ScaleToAction_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ScaleToAction:setScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(23);
	((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_endX = (frame[1].f);
	LINE_NUMBER(24);
	((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_endY = (frame[2].f);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ScaleToAction_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ScaleToAction:setScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(28);
	((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_endX = (frame[1].f);
	LINE_NUMBER(29);
	((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_endY = (frame[1].f);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_ScaleToAction_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ScaleToAction:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_endX);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ScaleToAction_setX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ScaleToAction:setX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(37);
	((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_endX = (frame[1].f);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_ScaleToAction_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ScaleToAction:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_endY);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ScaleToAction_setY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ScaleToAction:setY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(45);
	((arc_scene_actions_ScaleToAction *) NULL_CHECK((frame[0].o)))->F_endY = (frame[1].f);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_ScaleToAction[] {
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
	(void *) M_arc_scene_actions_ScaleToAction_begin,
	(void *) M_arc_scene_actions_TemporalAction_end,
	(void *) M_arc_scene_actions_ScaleToAction_update_float,
	(void *) M_arc_scene_actions_TemporalAction_finish,
	(void *) M_arc_scene_actions_TemporalAction_getTime_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setTime_float,
	(void *) M_arc_scene_actions_TemporalAction_getDuration_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setDuration_float,
	(void *) M_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_setReverse_boolean,
	(void *) M_arc_scene_actions_ScaleToAction_setScale_float_float,
	(void *) M_arc_scene_actions_ScaleToAction_setScale_float,
	(void *) M_arc_scene_actions_ScaleToAction_getX_R_float,
	(void *) M_arc_scene_actions_ScaleToAction_setX_float,
	(void *) M_arc_scene_actions_ScaleToAction_getY_R_float,
	(void *) M_arc_scene_actions_ScaleToAction_setY_float,
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
	{ "setScale", "(FF)V" },
	{ "setScale", "(F)V" },
	{ "getX", "()F" },
	{ "setX", "(F)V" },
	{ "getY", "()F" },
	{ "setY", "(F)V" },
};

static FieldMetadata fields[] {
	{ "startX", &class_float, offsetof(arc_scene_actions_ScaleToAction, F_startX), "F", 2 },
	{ "startY", &class_float, offsetof(arc_scene_actions_ScaleToAction, F_startY), "F", 2 },
	{ "endX", &class_float, offsetof(arc_scene_actions_ScaleToAction, F_endX), "F", 2 },
	{ "endY", &class_float, offsetof(arc_scene_actions_ScaleToAction, F_endY), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_ScaleToAction, 0, "()V", 1 },
	{ "begin", (intptr_t) M_arc_scene_actions_ScaleToAction_begin, VTABLE_arc_scene_actions_ScaleToAction_begin, "()V", 4 },
	{ "update", (intptr_t) M_arc_scene_actions_ScaleToAction_update_float, VTABLE_arc_scene_actions_ScaleToAction_update_float, "(F)V", 4 },
	{ "setScale", (intptr_t) M_arc_scene_actions_ScaleToAction_setScale_float_float, VTABLE_arc_scene_actions_ScaleToAction_setScale_float_float, "(FF)V", 1 },
	{ "setScale", (intptr_t) M_arc_scene_actions_ScaleToAction_setScale_float, VTABLE_arc_scene_actions_ScaleToAction_setScale_float, "(F)V", 1 },
	{ "getX", (intptr_t) M_arc_scene_actions_ScaleToAction_getX_R_float, VTABLE_arc_scene_actions_ScaleToAction_getX_R_float, "()F", 1 },
	{ "setX", (intptr_t) M_arc_scene_actions_ScaleToAction_setX_float, VTABLE_arc_scene_actions_ScaleToAction_setX_float, "(F)V", 1 },
	{ "getY", (intptr_t) M_arc_scene_actions_ScaleToAction_getY_R_float, VTABLE_arc_scene_actions_ScaleToAction_getY_R_float, "()F", 1 },
	{ "setY", (intptr_t) M_arc_scene_actions_ScaleToAction_setY_float, VTABLE_arc_scene_actions_ScaleToAction_setY_float, "(F)V", 1 },
};

Class class_arc_scene_actions_ScaleToAction{
		.nativeName = (intptr_t) "arc/scene/actions/ScaleToAction",
		.parentClass = (intptr_t) &class_arc_scene_actions_TemporalAction,
		.size = sizeof(arc_scene_actions_ScaleToAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_ScaleToAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_ScaleToAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_ScaleToAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_ScaleToAction = registerClass(&class_arc_scene_actions_ScaleToAction);

}
