#include "arc/scene/event/VisibilityListener.h"
#include "arc/scene/event/VisibilityEvent.h"
#include "java/lang/Object.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/event/EventListener.h"
#include "arc/scene/event/VisibilityListener.h"

extern "C" {


void mark_arc_scene_event_VisibilityListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_event_VisibilityListener *) object;
}

void clinit_arc_scene_event_VisibilityListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_event_VisibilityListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/VisibilityListener:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_VisibilityListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_VisibilityListener_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/VisibilityListener:handle", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(7);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_event_VisibilityEvent)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(8);
	jint temp0 = (jint)((func_arc_scene_event_VisibilityEvent_isHide_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_event_VisibilityEvent, (frame[1].o))))->vtable)[VTABLE_arc_scene_event_VisibilityEvent_isHide_R_boolean])(ctx, (checkCast(ctx, &class_arc_scene_event_VisibilityEvent, (frame[1].o))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(9);
	jint temp0 = (jint)((func_arc_scene_event_VisibilityListener_hidden_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_event_VisibilityListener_hidden_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_3:;
	{
	LINE_NUMBER(11);
	jint temp0 = (jint)((func_arc_scene_event_VisibilityListener_shown_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_event_VisibilityListener_shown_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_VisibilityListener_shown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/VisibilityListener:shown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_VisibilityListener_hidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/VisibilityListener:hidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_VisibilityListener[] {
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
	(void *) M_arc_scene_event_VisibilityListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_event_VisibilityListener_shown_R_boolean,
	(void *) M_arc_scene_event_VisibilityListener_hidden_R_boolean,
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
	{ "shown", "()Z" },
	{ "hidden", "()Z" },
};

static jclass interfaces[] { &class_arc_scene_event_EventListener, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_VisibilityListener, 0, "()V", 1 },
	{ "handle", (intptr_t) M_arc_scene_event_VisibilityListener_handle_arc_scene_event_SceneEvent_R_boolean, VTABLE_arc_scene_event_VisibilityListener_handle_arc_scene_event_SceneEvent_R_boolean, "(Larc/scene/event/SceneEvent;)Z", 1 },
	{ "shown", (intptr_t) M_arc_scene_event_VisibilityListener_shown_R_boolean, VTABLE_arc_scene_event_VisibilityListener_shown_R_boolean, "()Z", 1 },
	{ "hidden", (intptr_t) M_arc_scene_event_VisibilityListener_hidden_R_boolean, VTABLE_arc_scene_event_VisibilityListener_hidden_R_boolean, "()Z", 1 },
};

Class class_arc_scene_event_VisibilityListener{
		.nativeName = (intptr_t) "arc/scene/event/VisibilityListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_event_VisibilityListener),
		.classVtable = (intptr_t) vtable_arc_scene_event_VisibilityListener,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_VisibilityListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_VisibilityListener,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_VisibilityListener = registerClass(&class_arc_scene_event_VisibilityListener);

}
