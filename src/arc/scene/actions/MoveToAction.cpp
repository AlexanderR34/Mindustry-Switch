#include "arc/scene/actions/MoveToAction.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/TemporalAction.h"
#include "arc/scene/Action.h"
#include "arc/scene/actions/MoveToAction.h"

extern "C" {


void mark_arc_scene_actions_MoveToAction(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_actions_MoveToAction *) object;
}

void clinit_arc_scene_actions_MoveToAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_actions_TemporalAction(ctx);
}

void init_arc_scene_actions_MoveToAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_MoveToAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_arc_scene_actions_TemporalAction(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment = (12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_MoveToAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:begin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getX_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Element_getX_int_R_float])(ctx, sp[1].o, ((jint)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment));
	((arc_scene_actions_MoveToAction *) NULL_CHECK(sp[0].o))->F_startX = temp0;
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getY_int_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Element_getY_int_R_float])(ctx, sp[1].o, ((jint)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment));
	((arc_scene_actions_MoveToAction *) NULL_CHECK(sp[0].o))->F_startY = temp1;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_MoveToAction_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:update", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((func_arc_scene_Element_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setPosition_float_float_int])(ctx, sp[0].o, (((jfloat)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startX) + ((((jfloat)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX) - ((jfloat)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startX)) * (frame[1].f))), (((jfloat)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startY) + ((((jfloat)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY) - ((jfloat)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_startY)) * (frame[1].f))), ((jint)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_MoveToAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	M_arc_scene_actions_TemporalAction_reset(ctx, (frame[0].o));
	LINE_NUMBER(28);
	((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment = (12);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_MoveToAction_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(32);
	((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX = (frame[1].f);
	LINE_NUMBER(33);
	((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY = (frame[2].f);
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_MoveToAction_setPosition_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:setPosition", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(37);
	((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX = (frame[1].f);
	LINE_NUMBER(38);
	((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY = (frame[2].f);
	LINE_NUMBER(39);
	((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment = (frame[3].i);
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_MoveToAction_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_MoveToAction_setX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:setX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(47);
	((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endX = (frame[1].f);
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_MoveToAction_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_MoveToAction_setY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:setY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(55);
	((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_endY = (frame[1].f);
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_actions_MoveToAction_getAlignment_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:getAlignment", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return ((jint)((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_MoveToAction_setAlignment_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/MoveToAction:setAlignment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(63);
	((arc_scene_actions_MoveToAction *) NULL_CHECK((frame[0].o)))->F_alignment = (frame[1].i);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_MoveToAction[] {
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
	(void *) M_arc_scene_actions_MoveToAction_reset,
	(void *) M_arc_scene_actions_TemporalAction_act_float_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_MoveToAction_begin,
	(void *) M_arc_scene_actions_TemporalAction_end,
	(void *) M_arc_scene_actions_MoveToAction_update_float,
	(void *) M_arc_scene_actions_TemporalAction_finish,
	(void *) M_arc_scene_actions_TemporalAction_getTime_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setTime_float,
	(void *) M_arc_scene_actions_TemporalAction_getDuration_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setDuration_float,
	(void *) M_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_setReverse_boolean,
	(void *) M_arc_scene_actions_MoveToAction_setPosition_float_float,
	(void *) M_arc_scene_actions_MoveToAction_setPosition_float_float_int,
	(void *) M_arc_scene_actions_MoveToAction_getX_R_float,
	(void *) M_arc_scene_actions_MoveToAction_setX_float,
	(void *) M_arc_scene_actions_MoveToAction_getY_R_float,
	(void *) M_arc_scene_actions_MoveToAction_setY_float,
	(void *) M_arc_scene_actions_MoveToAction_getAlignment_R_int,
	(void *) M_arc_scene_actions_MoveToAction_setAlignment_int,
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
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "getX", "()F" },
	{ "setX", "(F)V" },
	{ "getY", "()F" },
	{ "setY", "(F)V" },
	{ "getAlignment", "()I" },
	{ "setAlignment", "(I)V" },
};

static FieldMetadata fields[] {
	{ "startX", &class_float, offsetof(arc_scene_actions_MoveToAction, F_startX), "F", 2 },
	{ "startY", &class_float, offsetof(arc_scene_actions_MoveToAction, F_startY), "F", 2 },
	{ "endX", &class_float, offsetof(arc_scene_actions_MoveToAction, F_endX), "F", 2 },
	{ "endY", &class_float, offsetof(arc_scene_actions_MoveToAction, F_endY), "F", 2 },
	{ "alignment", &class_int, offsetof(arc_scene_actions_MoveToAction, F_alignment), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_MoveToAction, 0, "()V", 1 },
	{ "begin", (intptr_t) M_arc_scene_actions_MoveToAction_begin, VTABLE_arc_scene_actions_MoveToAction_begin, "()V", 4 },
	{ "update", (intptr_t) M_arc_scene_actions_MoveToAction_update_float, VTABLE_arc_scene_actions_MoveToAction_update_float, "(F)V", 4 },
	{ "reset", (intptr_t) M_arc_scene_actions_MoveToAction_reset, VTABLE_arc_scene_actions_MoveToAction_reset, "()V", 1 },
	{ "setPosition", (intptr_t) M_arc_scene_actions_MoveToAction_setPosition_float_float, VTABLE_arc_scene_actions_MoveToAction_setPosition_float_float, "(FF)V", 1 },
	{ "setPosition", (intptr_t) M_arc_scene_actions_MoveToAction_setPosition_float_float_int, VTABLE_arc_scene_actions_MoveToAction_setPosition_float_float_int, "(FFI)V", 1 },
	{ "getX", (intptr_t) M_arc_scene_actions_MoveToAction_getX_R_float, VTABLE_arc_scene_actions_MoveToAction_getX_R_float, "()F", 1 },
	{ "setX", (intptr_t) M_arc_scene_actions_MoveToAction_setX_float, VTABLE_arc_scene_actions_MoveToAction_setX_float, "(F)V", 1 },
	{ "getY", (intptr_t) M_arc_scene_actions_MoveToAction_getY_R_float, VTABLE_arc_scene_actions_MoveToAction_getY_R_float, "()F", 1 },
	{ "setY", (intptr_t) M_arc_scene_actions_MoveToAction_setY_float, VTABLE_arc_scene_actions_MoveToAction_setY_float, "(F)V", 1 },
	{ "getAlignment", (intptr_t) M_arc_scene_actions_MoveToAction_getAlignment_R_int, VTABLE_arc_scene_actions_MoveToAction_getAlignment_R_int, "()I", 1 },
	{ "setAlignment", (intptr_t) M_arc_scene_actions_MoveToAction_setAlignment_int, VTABLE_arc_scene_actions_MoveToAction_setAlignment_int, "(I)V", 1 },
};

Class class_arc_scene_actions_MoveToAction{
		.nativeName = (intptr_t) "arc/scene/actions/MoveToAction",
		.parentClass = (intptr_t) &class_arc_scene_actions_TemporalAction,
		.size = sizeof(arc_scene_actions_MoveToAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_MoveToAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_MoveToAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_MoveToAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_MoveToAction = registerClass(&class_arc_scene_actions_MoveToAction);

}
