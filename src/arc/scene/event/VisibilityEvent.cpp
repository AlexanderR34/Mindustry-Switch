#include "arc/scene/event/VisibilityEvent.h"
#include "arc/scene/event/VisibilityEvent.h"
#include "java/lang/Object.h"
#include "arc/scene/event/SceneEvent.h"

extern "C" {


void mark_arc_scene_event_VisibilityEvent(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_SceneEvent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_event_VisibilityEvent *) object;
}

void clinit_arc_scene_event_VisibilityEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_SceneEvent(ctx);
}

void init_arc_scene_event_VisibilityEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/VisibilityEvent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_VisibilityEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_arc_scene_event_SceneEvent(ctx, (frame[0].o));
	LINE_NUMBER(7);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_event_VisibilityEvent_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/VisibilityEvent:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_VisibilityEvent(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(9);
	init_arc_scene_event_SceneEvent(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((arc_scene_event_VisibilityEvent *) NULL_CHECK((frame[0].o)))->F_hide = (frame[1].i);
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_VisibilityEvent_isHide_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/VisibilityEvent:isHide", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return ((jint)((arc_scene_event_VisibilityEvent *) NULL_CHECK((frame[0].o)))->F_hide);
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_VisibilityEvent[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_event_SceneEvent_reset,
	(void *) M_arc_scene_event_SceneEvent_handle,
	(void *) M_arc_scene_event_SceneEvent_cancel,
	(void *) M_arc_scene_event_SceneEvent_stop,
	(void *) M_arc_scene_event_VisibilityEvent_isHide_R_boolean,
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
	{ "handle", "()V" },
	{ "cancel", "()V" },
	{ "stop", "()V" },
	{ "isHide", "()Z" },
};

static FieldMetadata fields[] {
	{ "hide", &class_boolean, offsetof(arc_scene_event_VisibilityEvent, F_hide), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_VisibilityEvent, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_event_VisibilityEvent_boolean, 0, "(Z)V", 1 },
	{ "isHide", (intptr_t) M_arc_scene_event_VisibilityEvent_isHide_R_boolean, VTABLE_arc_scene_event_VisibilityEvent_isHide_R_boolean, "()Z", 1 },
};

Class class_arc_scene_event_VisibilityEvent{
		.nativeName = (intptr_t) "arc/scene/event/VisibilityEvent",
		.parentClass = (intptr_t) &class_arc_scene_event_SceneEvent,
		.size = sizeof(arc_scene_event_VisibilityEvent),
		.classVtable = (intptr_t) vtable_arc_scene_event_VisibilityEvent,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_VisibilityEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_VisibilityEvent,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_VisibilityEvent = registerClass(&class_arc_scene_event_VisibilityEvent);

}
