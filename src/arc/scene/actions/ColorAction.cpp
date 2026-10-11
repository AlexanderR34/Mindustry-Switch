#include "arc/scene/actions/ColorAction.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/TemporalAction.h"
#include "arc/scene/actions/ColorAction.h"
#include "arc/scene/Action.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_arc_scene_actions_ColorAction(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_actions_ColorAction *) object;
	if (self->F_end)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_end)->clazz)->markFunction)((jobject) self->F_end, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_arc_scene_actions_ColorAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_actions_TemporalAction(ctx);
}

void init_arc_scene_actions_ColorAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ColorAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_ColorAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_arc_scene_actions_TemporalAction(ctx, (frame[0].o));
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((arc_scene_actions_ColorAction *) NULL_CHECK(sp[0].o))->F_end = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ColorAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ColorAction:begin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_color;
	((arc_scene_actions_ColorAction *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_color;
	((arc_scene_actions_ColorAction *) NULL_CHECK(sp[0].o))->F_startR = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_r);
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_color;
	((arc_scene_actions_ColorAction *) NULL_CHECK(sp[0].o))->F_startG = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_g);
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_color;
	((arc_scene_actions_ColorAction *) NULL_CHECK(sp[0].o))->F_startB = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_b);
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_color;
	((arc_scene_actions_ColorAction *) NULL_CHECK(sp[0].o))->F_startA = ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ColorAction_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ColorAction:update", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(27);
	jfloat temp0 = (jfloat)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_startR;
	sp[0].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_end;
	frame[2].f = (temp0 + ((((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_r) - ((jfloat)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_startR)) * (frame[1].f)));
	LINE_NUMBER(28);
	jfloat temp1 = (jfloat)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_startG;
	sp[0].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_end;
	frame[3].f = (temp1 + ((((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_g) - ((jfloat)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_startG)) * (frame[1].f)));
	LINE_NUMBER(29);
	jfloat temp2 = (jfloat)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_startB;
	sp[0].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_end;
	frame[4].f = (temp2 + ((((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_b) - ((jfloat)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_startB)) * (frame[1].f)));
	LINE_NUMBER(30);
	jfloat temp3 = (jfloat)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_startA;
	sp[0].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_end;
	frame[5].f = (temp3 + ((((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) - ((jfloat)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_startA)) * (frame[1].f)));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ColorAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ColorAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	M_arc_scene_actions_TemporalAction_reset(ctx, (frame[0].o));
	LINE_NUMBER(37);
	((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_color = (jref) (jobject(nullptr));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_actions_ColorAction_getColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ColorAction:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ColorAction_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ColorAction:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[1].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_actions_ColorAction_getEndColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ColorAction:getEndColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_end;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_ColorAction_setEndColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/ColorAction:setEndColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_scene_actions_ColorAction *) NULL_CHECK((frame[0].o)))->F_end;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_ColorAction[] {
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
	(void *) M_arc_scene_actions_ColorAction_reset,
	(void *) M_arc_scene_actions_TemporalAction_act_float_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_ColorAction_begin,
	(void *) M_arc_scene_actions_TemporalAction_end,
	(void *) M_arc_scene_actions_ColorAction_update_float,
	(void *) M_arc_scene_actions_TemporalAction_finish,
	(void *) M_arc_scene_actions_TemporalAction_getTime_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setTime_float,
	(void *) M_arc_scene_actions_TemporalAction_getDuration_R_float,
	(void *) M_arc_scene_actions_TemporalAction_setDuration_float,
	(void *) M_arc_scene_actions_TemporalAction_getInterpolation_R_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_setInterpolation_arc_math_Interp,
	(void *) M_arc_scene_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_arc_scene_actions_TemporalAction_setReverse_boolean,
	(void *) M_arc_scene_actions_ColorAction_getColor_R_arc_graphics_Color,
	(void *) M_arc_scene_actions_ColorAction_setColor_arc_graphics_Color,
	(void *) M_arc_scene_actions_ColorAction_getEndColor_R_arc_graphics_Color,
	(void *) M_arc_scene_actions_ColorAction_setEndColor_arc_graphics_Color,
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
	{ "getColor", "()Larc/graphics/Color;" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "getEndColor", "()Larc/graphics/Color;" },
	{ "setEndColor", "(Larc/graphics/Color;)V" },
};

static FieldMetadata fields[] {
	{ "end", &class_arc_graphics_Color, offsetof(arc_scene_actions_ColorAction, F_end), "Larc/graphics/Color;", 18 },
	{ "startR", &class_float, offsetof(arc_scene_actions_ColorAction, F_startR), "F", 2 },
	{ "startG", &class_float, offsetof(arc_scene_actions_ColorAction, F_startG), "F", 2 },
	{ "startB", &class_float, offsetof(arc_scene_actions_ColorAction, F_startB), "F", 2 },
	{ "startA", &class_float, offsetof(arc_scene_actions_ColorAction, F_startA), "F", 2 },
	{ "color", &class_arc_graphics_Color, offsetof(arc_scene_actions_ColorAction, F_color), "Larc/graphics/Color;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_ColorAction, 0, "()V", 1 },
	{ "begin", (intptr_t) M_arc_scene_actions_ColorAction_begin, VTABLE_arc_scene_actions_ColorAction_begin, "()V", 4 },
	{ "update", (intptr_t) M_arc_scene_actions_ColorAction_update_float, VTABLE_arc_scene_actions_ColorAction_update_float, "(F)V", 4 },
	{ "reset", (intptr_t) M_arc_scene_actions_ColorAction_reset, VTABLE_arc_scene_actions_ColorAction_reset, "()V", 1 },
	{ "getColor", (intptr_t) M_arc_scene_actions_ColorAction_getColor_R_arc_graphics_Color, VTABLE_arc_scene_actions_ColorAction_getColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "setColor", (intptr_t) M_arc_scene_actions_ColorAction_setColor_arc_graphics_Color, VTABLE_arc_scene_actions_ColorAction_setColor_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "getEndColor", (intptr_t) M_arc_scene_actions_ColorAction_getEndColor_R_arc_graphics_Color, VTABLE_arc_scene_actions_ColorAction_getEndColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "setEndColor", (intptr_t) M_arc_scene_actions_ColorAction_setEndColor_arc_graphics_Color, VTABLE_arc_scene_actions_ColorAction_setEndColor_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
};

Class class_arc_scene_actions_ColorAction{
		.nativeName = (intptr_t) "arc/scene/actions/ColorAction",
		.parentClass = (intptr_t) &class_arc_scene_actions_TemporalAction,
		.size = sizeof(arc_scene_actions_ColorAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_ColorAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_ColorAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_ColorAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_ColorAction = registerClass(&class_arc_scene_actions_ColorAction);

}
