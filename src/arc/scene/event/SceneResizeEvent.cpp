#include "arc/scene/event/SceneResizeEvent.h"
#include "java/lang/Object.h"
#include "arc/scene/event/SceneEvent.h"

extern "C" {


void mark_arc_scene_event_SceneResizeEvent(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_event_SceneResizeEvent *) object;
}

void clinit_arc_scene_event_SceneResizeEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_SceneEvent(ctx);
}

void init_arc_scene_event_SceneResizeEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/SceneResizeEvent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_SceneResizeEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_arc_scene_event_SceneEvent(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_SceneResizeEvent[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_SceneResizeEvent, 0, "()V", 1 },
};

Class class_arc_scene_event_SceneResizeEvent{
		.nativeName = (intptr_t) "arc/scene/event/SceneResizeEvent",
		.parentClass = (intptr_t) &class_arc_scene_event_SceneEvent,
		.size = sizeof(arc_scene_event_SceneResizeEvent),
		.classVtable = (intptr_t) vtable_arc_scene_event_SceneResizeEvent,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_SceneResizeEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_SceneResizeEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_SceneResizeEvent = registerClass(&class_arc_scene_event_SceneResizeEvent);

}
