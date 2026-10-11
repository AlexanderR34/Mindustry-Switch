#include "arc/scene/actions/TouchableAction.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/Action.h"
#include "arc/scene/actions/TouchableAction.h"

extern "C" {


void mark_arc_scene_actions_TouchableAction(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_actions_TouchableAction *) object;
	if (self->F_touchable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchable)->clazz)->markFunction)((jobject) self->F_touchable, mark, depth + 1);
}

void clinit_arc_scene_actions_TouchableAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Action(ctx);
}

void init_arc_scene_actions_TouchableAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TouchableAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_TouchableAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_arc_scene_Action(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_TouchableAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TouchableAction:act", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((arc_scene_actions_TouchableAction *) NULL_CHECK((frame[0].o)))->F_touchable;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_actions_TouchableAction_getTouchable_R_arc_scene_event_Touchable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TouchableAction:getTouchable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((arc_scene_actions_TouchableAction *) NULL_CHECK((frame[0].o)))->F_touchable;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_TouchableAction_touchable_arc_scene_event_Touchable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/TouchableAction:touchable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	((arc_scene_actions_TouchableAction *) NULL_CHECK((frame[0].o)))->F_touchable = (jref) (frame[1].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_TouchableAction[] {
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
	(void *) M_arc_scene_actions_TouchableAction_act_float_R_boolean,
	(void *) M_arc_scene_Action_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_TouchableAction_getTouchable_R_arc_scene_event_Touchable,
	(void *) M_arc_scene_actions_TouchableAction_touchable_arc_scene_event_Touchable,
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
	{ "getTouchable", "()Larc/scene/event/Touchable;" },
	{ "touchable", "(Larc/scene/event/Touchable;)V" },
};

static FieldMetadata fields[] {
	{ "touchable", &class_arc_scene_event_Touchable, offsetof(arc_scene_actions_TouchableAction, F_touchable), "Larc/scene/event/Touchable;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_TouchableAction, 0, "()V", 1 },
	{ "act", (intptr_t) M_arc_scene_actions_TouchableAction_act_float_R_boolean, VTABLE_arc_scene_actions_TouchableAction_act_float_R_boolean, "(F)Z", 1 },
	{ "getTouchable", (intptr_t) M_arc_scene_actions_TouchableAction_getTouchable_R_arc_scene_event_Touchable, VTABLE_arc_scene_actions_TouchableAction_getTouchable_R_arc_scene_event_Touchable, "()Larc/scene/event/Touchable;", 1 },
	{ "touchable", (intptr_t) M_arc_scene_actions_TouchableAction_touchable_arc_scene_event_Touchable, VTABLE_arc_scene_actions_TouchableAction_touchable_arc_scene_event_Touchable, "(Larc/scene/event/Touchable;)V", 1 },
};

Class class_arc_scene_actions_TouchableAction{
		.nativeName = (intptr_t) "arc/scene/actions/TouchableAction",
		.parentClass = (intptr_t) &class_arc_scene_Action,
		.size = sizeof(arc_scene_actions_TouchableAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_TouchableAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_TouchableAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_TouchableAction,
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
static bool registered_arc_scene_actions_TouchableAction = registerClass(&class_arc_scene_actions_TouchableAction);

}
