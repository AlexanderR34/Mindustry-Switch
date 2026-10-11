#include "arc/scene/actions/LayoutAction.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/LayoutAction.h"
#include "arc/scene/Action.h"

extern "C" {


void mark_arc_scene_actions_LayoutAction(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_actions_LayoutAction *) object;
}

void clinit_arc_scene_actions_LayoutAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Action(ctx);
}

void init_arc_scene_actions_LayoutAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/LayoutAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_LayoutAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_arc_scene_Action(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_LayoutAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/LayoutAction:act", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((func_arc_scene_Element_setLayoutEnabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setLayoutEnabled_boolean])(ctx, sp[0].o, ((jint)((arc_scene_actions_LayoutAction *) NULL_CHECK((frame[0].o)))->F_enabled));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_LayoutAction_isEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/LayoutAction:isEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return ((jint)((arc_scene_actions_LayoutAction *) NULL_CHECK((frame[0].o)))->F_enabled);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_LayoutAction_setLayoutEnabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/LayoutAction:setLayoutEnabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(24);
	((arc_scene_actions_LayoutAction *) NULL_CHECK((frame[0].o)))->F_enabled = (frame[1].i);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_LayoutAction[] {
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
	(void *) M_arc_scene_Action_reset,
	(void *) M_arc_scene_actions_LayoutAction_act_float_R_boolean,
	(void *) M_arc_scene_Action_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_LayoutAction_isEnabled_R_boolean,
	(void *) M_arc_scene_actions_LayoutAction_setLayoutEnabled_boolean,
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
	{ "isEnabled", "()Z" },
	{ "setLayoutEnabled", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "enabled", &class_boolean, offsetof(arc_scene_actions_LayoutAction, F_enabled), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_LayoutAction, 0, "()V", 1 },
	{ "act", (intptr_t) M_arc_scene_actions_LayoutAction_act_float_R_boolean, VTABLE_arc_scene_actions_LayoutAction_act_float_R_boolean, "(F)Z", 1 },
	{ "isEnabled", (intptr_t) M_arc_scene_actions_LayoutAction_isEnabled_R_boolean, VTABLE_arc_scene_actions_LayoutAction_isEnabled_R_boolean, "()Z", 1 },
	{ "setLayoutEnabled", (intptr_t) M_arc_scene_actions_LayoutAction_setLayoutEnabled_boolean, VTABLE_arc_scene_actions_LayoutAction_setLayoutEnabled_boolean, "(Z)V", 1 },
};

Class class_arc_scene_actions_LayoutAction{
		.nativeName = (intptr_t) "arc/scene/actions/LayoutAction",
		.parentClass = (intptr_t) &class_arc_scene_Action,
		.size = sizeof(arc_scene_actions_LayoutAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_LayoutAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_LayoutAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_LayoutAction,
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
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_LayoutAction = registerClass(&class_arc_scene_actions_LayoutAction);

}
