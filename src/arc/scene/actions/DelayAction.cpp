#include "arc/scene/actions/DelayAction.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/DelegateAction.h"
#include "arc/scene/actions/DelayAction.h"
#include "arc/scene/Action.h"

extern "C" {


void mark_arc_scene_actions_DelayAction(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_actions_DelayAction *) object;
}

void clinit_arc_scene_actions_DelayAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_actions_DelegateAction(ctx);
}

void init_arc_scene_actions_DelayAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelayAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_DelayAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_arc_scene_actions_DelegateAction(ctx, (frame[0].o));
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_actions_DelayAction_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelayAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_DelayAction(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(13);
	init_arc_scene_actions_DelegateAction(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_DelayAction_delegate_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelayAction:delegate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(19);
	if ((floatCompare(((jfloat)((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	((arc_scene_actions_DelayAction *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((arc_scene_actions_DelayAction *) NULL_CHECK(sp[0].o))->F_time) + (frame[1].f));
	LINE_NUMBER(21);
	if ((floatCompare(((jfloat)((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration), 1)) >= 0) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(22);
	frame[1].f = (((jfloat)((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time) - ((jfloat)((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration));
	}
label_1:;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_scene_actions_DelegateAction *) NULL_CHECK((frame[0].o)))->F_action;
	jint temp0 = (jint)((func_arc_scene_Action_act_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Action_act_float_R_boolean])(ctx, sp[0].o, (frame[1].f));
	if (temp0 == 0) goto label_6;
	}
label_5:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_scene_actions_DelayAction_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelayAction:finish", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time = ((jfloat)((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_DelayAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelayAction:restart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	M_arc_scene_actions_DelegateAction_restart(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_DelayAction_getTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelayAction:getTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_DelayAction_setTime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelayAction:setTime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(45);
	((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].f);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_actions_DelayAction_getDuration_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelayAction:getDuration", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_DelayAction_setDuration_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/DelayAction:setDuration", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(54);
	((arc_scene_actions_DelayAction *) NULL_CHECK((frame[0].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_DelayAction[] {
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
	(void *) M_arc_scene_actions_DelayAction_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_actions_DelegateAction_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_actions_DelegateAction_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_DelegateAction_getAction_R_arc_scene_Action,
	(void *) M_arc_scene_actions_DelegateAction_setAction_arc_scene_Action,
	(void *) M_arc_scene_actions_DelayAction_delegate_float_R_boolean,
	(void *) M_arc_scene_actions_DelayAction_finish,
	(void *) M_arc_scene_actions_DelayAction_getTime_R_float,
	(void *) M_arc_scene_actions_DelayAction_setTime_float,
	(void *) M_arc_scene_actions_DelayAction_getDuration_R_float,
	(void *) M_arc_scene_actions_DelayAction_setDuration_float,
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
	{ "finish", "()V" },
	{ "getTime", "()F" },
	{ "setTime", "(F)V" },
	{ "getDuration", "()F" },
	{ "setDuration", "(F)V" },
};

static FieldMetadata fields[] {
	{ "duration", &class_float, offsetof(arc_scene_actions_DelayAction, F_duration), "F", 2 },
	{ "time", &class_float, offsetof(arc_scene_actions_DelayAction, F_time), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_DelayAction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_actions_DelayAction_float, 0, "(F)V", 1 },
	{ "delegate", (intptr_t) M_arc_scene_actions_DelayAction_delegate_float_R_boolean, VTABLE_arc_scene_actions_DelayAction_delegate_float_R_boolean, "(F)Z", 4 },
	{ "finish", (intptr_t) M_arc_scene_actions_DelayAction_finish, VTABLE_arc_scene_actions_DelayAction_finish, "()V", 1 },
	{ "restart", (intptr_t) M_arc_scene_actions_DelayAction_restart, VTABLE_arc_scene_actions_DelayAction_restart, "()V", 1 },
	{ "getTime", (intptr_t) M_arc_scene_actions_DelayAction_getTime_R_float, VTABLE_arc_scene_actions_DelayAction_getTime_R_float, "()F", 1 },
	{ "setTime", (intptr_t) M_arc_scene_actions_DelayAction_setTime_float, VTABLE_arc_scene_actions_DelayAction_setTime_float, "(F)V", 1 },
	{ "getDuration", (intptr_t) M_arc_scene_actions_DelayAction_getDuration_R_float, VTABLE_arc_scene_actions_DelayAction_getDuration_R_float, "()F", 1 },
	{ "setDuration", (intptr_t) M_arc_scene_actions_DelayAction_setDuration_float, VTABLE_arc_scene_actions_DelayAction_setDuration_float, "(F)V", 1 },
};

Class class_arc_scene_actions_DelayAction{
		.nativeName = (intptr_t) "arc/scene/actions/DelayAction",
		.parentClass = (intptr_t) &class_arc_scene_actions_DelegateAction,
		.size = sizeof(arc_scene_actions_DelayAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_DelayAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_DelayAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_DelayAction,
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
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_DelayAction = registerClass(&class_arc_scene_actions_DelayAction);

}
