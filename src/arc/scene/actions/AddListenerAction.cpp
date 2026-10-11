#include "arc/scene/actions/AddListenerAction.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/actions/AddListenerAction.h"
#include "arc/scene/event/EventListener.h"
#include "arc/scene/Action.h"

extern "C" {


void mark_arc_scene_actions_AddListenerAction(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_actions_AddListenerAction *) object;
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
}

void clinit_arc_scene_actions_AddListenerAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Action(ctx);
}

void init_arc_scene_actions_AddListenerAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AddListenerAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_actions_AddListenerAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_arc_scene_Action(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_AddListenerAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AddListenerAction:act", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(16);
	if (((jint)((arc_scene_actions_AddListenerAction *) NULL_CHECK((frame[0].o)))->F_capture) == 0) goto label_1;
	}
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((arc_scene_actions_AddListenerAction *) NULL_CHECK((frame[0].o)))->F_listener;
	jint temp0 = (jint)((func_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((arc_scene_actions_AddListenerAction *) NULL_CHECK((frame[0].o)))->F_listener;
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_actions_AddListenerAction_getListener_R_arc_scene_event_EventListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AddListenerAction:getListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((arc_scene_actions_AddListenerAction *) NULL_CHECK((frame[0].o)))->F_listener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AddListenerAction:setListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	((arc_scene_actions_AddListenerAction *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_actions_AddListenerAction_getCapture_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AddListenerAction:getCapture", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return ((jint)((arc_scene_actions_AddListenerAction *) NULL_CHECK((frame[0].o)))->F_capture);
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_AddListenerAction_setCapture_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AddListenerAction:setCapture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(36);
	((arc_scene_actions_AddListenerAction *) NULL_CHECK((frame[0].o)))->F_capture = (frame[1].i);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_actions_AddListenerAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/actions/AddListenerAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	M_arc_scene_Action_reset(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((arc_scene_actions_AddListenerAction *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (jobject(nullptr));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_actions_AddListenerAction[] {
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
	(void *) M_arc_scene_actions_AddListenerAction_reset,
	(void *) M_arc_scene_actions_AddListenerAction_act_float_R_boolean,
	(void *) M_arc_scene_Action_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
	(void *) M_arc_scene_actions_AddListenerAction_getListener_R_arc_scene_event_EventListener,
	(void *) M_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener,
	(void *) M_arc_scene_actions_AddListenerAction_getCapture_R_boolean,
	(void *) M_arc_scene_actions_AddListenerAction_setCapture_boolean,
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
	{ "getListener", "()Larc/scene/event/EventListener;" },
	{ "setListener", "(Larc/scene/event/EventListener;)V" },
	{ "getCapture", "()Z" },
	{ "setCapture", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "listener", &class_arc_scene_event_EventListener, offsetof(arc_scene_actions_AddListenerAction, F_listener), "Larc/scene/event/EventListener;", 2 },
	{ "capture", &class_boolean, offsetof(arc_scene_actions_AddListenerAction, F_capture), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_actions_AddListenerAction, 0, "()V", 1 },
	{ "act", (intptr_t) M_arc_scene_actions_AddListenerAction_act_float_R_boolean, VTABLE_arc_scene_actions_AddListenerAction_act_float_R_boolean, "(F)Z", 1 },
	{ "getListener", (intptr_t) M_arc_scene_actions_AddListenerAction_getListener_R_arc_scene_event_EventListener, VTABLE_arc_scene_actions_AddListenerAction_getListener_R_arc_scene_event_EventListener, "()Larc/scene/event/EventListener;", 1 },
	{ "setListener", (intptr_t) M_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener, VTABLE_arc_scene_actions_AddListenerAction_setListener_arc_scene_event_EventListener, "(Larc/scene/event/EventListener;)V", 1 },
	{ "getCapture", (intptr_t) M_arc_scene_actions_AddListenerAction_getCapture_R_boolean, VTABLE_arc_scene_actions_AddListenerAction_getCapture_R_boolean, "()Z", 1 },
	{ "setCapture", (intptr_t) M_arc_scene_actions_AddListenerAction_setCapture_boolean, VTABLE_arc_scene_actions_AddListenerAction_setCapture_boolean, "(Z)V", 1 },
	{ "reset", (intptr_t) M_arc_scene_actions_AddListenerAction_reset, VTABLE_arc_scene_actions_AddListenerAction_reset, "()V", 1 },
};

Class class_arc_scene_actions_AddListenerAction{
		.nativeName = (intptr_t) "arc/scene/actions/AddListenerAction",
		.parentClass = (intptr_t) &class_arc_scene_Action,
		.size = sizeof(arc_scene_actions_AddListenerAction),
		.classVtable = (intptr_t) vtable_arc_scene_actions_AddListenerAction,
		.staticInitializer = (intptr_t) clinit_arc_scene_actions_AddListenerAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_actions_AddListenerAction,
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
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_actions_AddListenerAction = registerClass(&class_arc_scene_actions_AddListenerAction);

}
