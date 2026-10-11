#include "arc/scene/event/FocusListener_FocusEvent.h"
#include "arc/scene/event/FocusListener_FocusEvent_Type.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/event/FocusListener.h"
#include "arc/scene/event/FocusListener_FocusEvent.h"

extern "C" {


void mark_arc_scene_event_FocusListener$FocusEvent(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_event_FocusListener$FocusEvent *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_relatedActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_relatedActor)->clazz)->markFunction)((jobject) self->F_relatedActor, mark, depth + 1);
}

void clinit_arc_scene_event_FocusListener$FocusEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_SceneEvent(ctx);
}

void init_arc_scene_event_FocusListener$FocusEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener$FocusEvent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_FocusListener$FocusEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_arc_scene_event_SceneEvent(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_FocusListener$FocusEvent_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener$FocusEvent:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	M_arc_scene_event_SceneEvent_reset(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[0].o)))->F_relatedActor = (jref) (jobject(nullptr));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_FocusListener$FocusEvent[] {
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
	(void *) M_arc_scene_event_FocusListener$FocusEvent_reset,
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

static jclass innerClasses[] {
	&class_arc_scene_event_FocusListener$FocusEvent$Type,
};

static FieldMetadata fields[] {
	{ "focused", &class_boolean, offsetof(arc_scene_event_FocusListener$FocusEvent, F_focused), "Z", 1 },
	{ "type", &class_arc_scene_event_FocusListener$FocusEvent$Type, offsetof(arc_scene_event_FocusListener$FocusEvent, F_type), "Larc/scene/event/FocusListener$FocusEvent$Type;", 1 },
	{ "relatedActor", &class_arc_scene_Element, offsetof(arc_scene_event_FocusListener$FocusEvent, F_relatedActor), "Larc/scene/Element;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_FocusListener$FocusEvent, 0, "()V", 1 },
	{ "reset", (intptr_t) M_arc_scene_event_FocusListener$FocusEvent_reset, VTABLE_arc_scene_event_FocusListener$FocusEvent_reset, "()V", 1 },
};

Class class_arc_scene_event_FocusListener$FocusEvent{
		.nativeName = (intptr_t) "arc/scene/event/FocusListener$FocusEvent",
		.parentClass = (intptr_t) &class_arc_scene_event_SceneEvent,
		.size = sizeof(arc_scene_event_FocusListener$FocusEvent),
		.classVtable = (intptr_t) vtable_arc_scene_event_FocusListener$FocusEvent,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_FocusListener$FocusEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_FocusListener$FocusEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_event_FocusListener,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_FocusListener$FocusEvent = registerClass(&class_arc_scene_event_FocusListener$FocusEvent);

}

