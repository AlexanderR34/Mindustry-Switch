#include "arc/scene/event/ChangeListener.h"
#include "arc/scene/event/ChangeListener_ChangeEvent.h"
#include "arc/scene/event/ChangeListener.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/event/EventListener.h"

extern "C" {


void mark_arc_scene_event_ChangeListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_event_ChangeListener *) object;
}

void clinit_arc_scene_event_ChangeListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_event_ChangeListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ChangeListener:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_ChangeListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_ChangeListener_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/ChangeListener:handle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_event_ChangeListener$ChangeEvent)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	sp[1].o = checkCast(ctx, &class_arc_scene_event_ChangeListener$ChangeEvent, (frame[1].o));
	sp[2].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_targetActor;
	((func_arc_scene_event_ChangeListener_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ChangeListener_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_ChangeListener[] {
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
	(void *) M_arc_scene_event_ChangeListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) nullptr,
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
	{ "changed", "(Larc/scene/event/ChangeListener$ChangeEvent;Larc/scene/Element;)V" },
};

static jclass interfaces[] { &class_arc_scene_event_EventListener, };

static jclass innerClasses[] {
	&class_arc_scene_event_ChangeListener$ChangeEvent,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_ChangeListener, 0, "()V", 1 },
	{ "handle", (intptr_t) M_arc_scene_event_ChangeListener_handle_arc_scene_event_SceneEvent_R_boolean, VTABLE_arc_scene_event_ChangeListener_handle_arc_scene_event_SceneEvent_R_boolean, "(Larc/scene/event/SceneEvent;)Z", 1 },
	{ "changed", 0, VTABLE_arc_scene_event_ChangeListener_changed_arc_scene_event_ChangeListener$ChangeEvent_arc_scene_Element, "(Larc/scene/event/ChangeListener$ChangeEvent;Larc/scene/Element;)V", 1025 },
};

Class class_arc_scene_event_ChangeListener{
		.nativeName = (intptr_t) "arc/scene/event/ChangeListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_event_ChangeListener),
		.classVtable = (intptr_t) vtable_arc_scene_event_ChangeListener,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_ChangeListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_ChangeListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
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
static bool registered_arc_scene_event_ChangeListener = registerClass(&class_arc_scene_event_ChangeListener);

}
