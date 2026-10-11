#include "arc/scene/event/SceneEvent.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "arc/scene/event/SceneEvent.h"

extern "C" {


void mark_arc_scene_event_SceneEvent(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_event_SceneEvent *) object;
	if (self->F_targetActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetActor)->clazz)->markFunction)((jobject) self->F_targetActor, mark, depth + 1);
	if (self->F_listenerActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listenerActor)->clazz)->markFunction)((jobject) self->F_listenerActor, mark, depth + 1);
}

void clinit_arc_scene_event_SceneEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_event_SceneEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/SceneEvent:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_SceneEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(27);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_bubbles = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_SceneEvent_handle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/SceneEvent:handle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_handled = (jint(1));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_SceneEvent_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/SceneEvent:cancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_cancelled = (jint(1));
	LINE_NUMBER(47);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_stopped = (jint(1));
	LINE_NUMBER(48);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_handled = (jint(1));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_SceneEvent_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/SceneEvent:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_stopped = (jint(1));
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_SceneEvent_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/SceneEvent:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_targetActor = (jref) (jobject(nullptr));
	LINE_NUMBER(59);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_listenerActor = (jref) (jobject(nullptr));
	LINE_NUMBER(60);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_capture = (jint(0));
	LINE_NUMBER(61);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_bubbles = (jint(1));
	LINE_NUMBER(62);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_handled = (jint(0));
	LINE_NUMBER(63);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_stopped = (jint(0));
	LINE_NUMBER(64);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[0].o)))->F_cancelled = (jint(0));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_SceneEvent[] {
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

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "targetActor", &class_arc_scene_Element, offsetof(arc_scene_event_SceneEvent, F_targetActor), "Larc/scene/Element;", 1 },
	{ "listenerActor", &class_arc_scene_Element, offsetof(arc_scene_event_SceneEvent, F_listenerActor), "Larc/scene/Element;", 1 },
	{ "capture", &class_boolean, offsetof(arc_scene_event_SceneEvent, F_capture), "Z", 1 },
	{ "bubbles", &class_boolean, offsetof(arc_scene_event_SceneEvent, F_bubbles), "Z", 1 },
	{ "handled", &class_boolean, offsetof(arc_scene_event_SceneEvent, F_handled), "Z", 1 },
	{ "stopped", &class_boolean, offsetof(arc_scene_event_SceneEvent, F_stopped), "Z", 1 },
	{ "cancelled", &class_boolean, offsetof(arc_scene_event_SceneEvent, F_cancelled), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_SceneEvent, 0, "()V", 1 },
	{ "handle", (intptr_t) M_arc_scene_event_SceneEvent_handle, VTABLE_arc_scene_event_SceneEvent_handle, "()V", 1 },
	{ "cancel", (intptr_t) M_arc_scene_event_SceneEvent_cancel, VTABLE_arc_scene_event_SceneEvent_cancel, "()V", 1 },
	{ "stop", (intptr_t) M_arc_scene_event_SceneEvent_stop, VTABLE_arc_scene_event_SceneEvent_stop, "()V", 1 },
	{ "reset", (intptr_t) M_arc_scene_event_SceneEvent_reset, VTABLE_arc_scene_event_SceneEvent_reset, "()V", 1 },
};

Class class_arc_scene_event_SceneEvent{
		.nativeName = (intptr_t) "arc/scene/event/SceneEvent",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_event_SceneEvent),
		.classVtable = (intptr_t) vtable_arc_scene_event_SceneEvent,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_SceneEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_SceneEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_SceneEvent = registerClass(&class_arc_scene_event_SceneEvent);

}
