#include "arc/scene/event/ResizeListener.h"
#include "java/lang/Object.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/event/ResizeListener.h"
#include "arc/scene/event/SceneResizeEvent.h"
#include "arc/scene/event/EventListener.h"

extern "C" {


void mark_arc_scene_event_ResizeListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_event_ResizeListener *) object;
}

void clinit_arc_scene_event_ResizeListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_event_ResizeListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ResizeListener:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_ResizeListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ResizeListener_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ResizeListener:handle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(7);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_event_SceneResizeEvent)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(9);
	((func_arc_scene_event_ResizeListener_resized) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_event_ResizeListener_resized])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_ResizeListener_resized(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ResizeListener:resized", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(16);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_ResizeListener[] {
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
	(void *) M_arc_scene_event_ResizeListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_event_ResizeListener_resized,
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
	{ "handle", "(Larc/scene/event/SceneEvent;)Z" },
	{ "resized", "()V" },
};

static jclass interfaces[] { &class_arc_scene_event_EventListener, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_ResizeListener, 0, "()V", 1 },
	{ "handle", (intptr_t) M_arc_scene_event_ResizeListener_handle_arc_scene_event_SceneEvent_R_boolean, VTABLE_arc_scene_event_ResizeListener_handle_arc_scene_event_SceneEvent_R_boolean, "(Larc/scene/event/SceneEvent;)Z", 1 },
	{ "resized", (intptr_t) M_arc_scene_event_ResizeListener_resized, VTABLE_arc_scene_event_ResizeListener_resized, "()V", 1 },
};

Class class_arc_scene_event_ResizeListener{
		.nativeName = (intptr_t) "arc/scene/event/ResizeListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_event_ResizeListener),
		.classVtable = (intptr_t) vtable_arc_scene_event_ResizeListener,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_ResizeListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_ResizeListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_ResizeListener = registerClass(&class_arc_scene_event_ResizeListener);

}
