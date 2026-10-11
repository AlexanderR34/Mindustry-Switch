#include "arc/scene/actions/SizeByAction.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/RelativeTemporalAction.h"
#include "arc/scene/actions/SizeByAction.h"
#include "arc/scene/actions/TemporalAction.h"
#include "arc/scene/Action.h"

extern "C" {


void mark_arc_scene_actions_SizeByAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_actions_RelativeTemporalAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_actions_SizeByAction *) object;
}

void clinit_arc_scene_actions_SizeByAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_actions_RelativeTemporalAction(ctx);
}

void init_arc_scene_actions_SizeByAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SizeByAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_SizeByAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_arc_scene_actions_RelativeTemporalAction(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_SizeByAction_updateRelative_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SizeByAction:updateRelative", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(12);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((func_arc_scene_Element_sizeBy_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_sizeBy_float_float])(ctx, sp[0].o, (((jfloat)((arc_scene_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountWidth) * (frame[1].f)), (((jfloat)((arc_scene_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountHeight) * (frame[1].f)));
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_SizeByAction_setAmount_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SizeByAction:setAmount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(16);
	((arc_scene_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountWidth = (frame[1].f);
	LINE_NUMBER(17);
	((arc_scene_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountHeight = (frame[2].f);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_SizeByAction_getAmountWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SizeByAction:getAmountWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountWidth);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_SizeByAction_setAmountWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SizeByAction:setAmountWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(25);
	((arc_scene_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountWidth = (frame[1].f);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_SizeByAction_getAmountHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SizeByAction:getAmountHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountHeight);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_SizeByAction_setAmountHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/SizeByAction:setAmountHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(33);
	((arc_scene_actions_SizeByAction *) NULL_CHECK((frame[0].o)))->F_amountHeight = (frame[1].f);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_SizeByAction[] {
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
	(void *) M_arc_scene_actions_RelativeTemporalAction_begin,
	(void *) M_arc_scene_actions_TemporalAction_end,
	(void *) M_arc_scene_actions_RelativeTemporalAction_update_float,
	(void *) M_arc_scene_actions_TemporalAction_finish,
	(void *) M_arc_scene_actions_TemporalAction_getTime_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setTime_float,
	(void *) M_arc_scene_actions_TemporalAction_getDuration_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setDuration_float,
	(void *) M_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_setReverse_boolean,
	(void *) M_arc_scene_actions_SizeByAction_updateRelative_float,
	(void *) M_arc_scene_actions_SizeByAction_setAmount_float_float,
	(void *) M_arc_scene_actions_SizeByAction_getAmountWidth_R_float,
	(void *) M_arc_scene_actions_SizeByAction_setAmountWidth_float,
	(void *) M_arc_scene_actions_SizeByAction_getAmountHeight_R_float,
	(void *) M_arc_scene_actions_SizeByAction_setAmountHeight_float,
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
	{ "updateRelative", "(F)V" },
	{ "setAmount", "(FF)V" },
	{ "getAmountWidth", "()F" },
	{ "setAmountWidth", "(F)V" },
	{ "getAmountHeight", "()F" },
	{ "setAmountHeight", "(F)V" },
};

static FieldMetadata fields[] {
	{ "amountWidth", &class_float, offsetof(arc_scene_actions_SizeByAction, F_amountWidth), "F", 2 },
	{ "amountHeight", &class_float, offsetof(arc_scene_actions_SizeByAction, F_amountHeight), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_SizeByAction, 0, "()V", 1 },
	{ "updateRelative", (intptr_t) M_arc_scene_actions_SizeByAction_updateRelative_float, VTABLE_arc_scene_actions_SizeByAction_updateRelative_float, "(F)V", 4 },
	{ "setAmount", (intptr_t) M_arc_scene_actions_SizeByAction_setAmount_float_float, VTABLE_arc_scene_actions_SizeByAction_setAmount_float_float, "(FF)V", 1 },
	{ "getAmountWidth", (intptr_t) M_arc_scene_actions_SizeByAction_getAmountWidth_R_float, VTABLE_arc_scene_actions_SizeByAction_getAmountWidth_R_float, "()F", 1 },
	{ "setAmountWidth", (intptr_t) M_arc_scene_actions_SizeByAction_setAmountWidth_float, VTABLE_arc_scene_actions_SizeByAction_setAmountWidth_float, "(F)V", 1 },
	{ "getAmountHeight", (intptr_t) M_arc_scene_actions_SizeByAction_getAmountHeight_R_float, VTABLE_arc_scene_actions_SizeByAction_getAmountHeight_R_float, "()F", 1 },
	{ "setAmountHeight", (intptr_t) M_arc_scene_actions_SizeByAction_setAmountHeight_float, VTABLE_arc_scene_actions_SizeByAction_setAmountHeight_float, "(F)V", 1 },
};

Class class_arc_scene_actions_SizeByAction{
		.nativeName = (intptr_t) "arc/scene/actions/SizeByAction",
		.parentClass = (intptr_t) &class_arc_scene_actions_RelativeTemporalAction,
		.size = sizeof(arc_scene_actions_SizeByAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_SizeByAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_SizeByAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_SizeByAction,
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
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_SizeByAction = registerClass(&class_arc_scene_actions_SizeByAction);

}
