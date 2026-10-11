#include "arc/scene/event/FocusListener.h"
#include "arc/scene/event/FocusListener_FocusEvent_Type.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/event/EventListener.h"
#include "arc/scene/event/FocusListener.h"
#include "java/lang/Enum.h"
#include "arc/scene/event/FocusListener_FocusEvent.h"

extern "C" {


void mark_arc_scene_event_FocusListener(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_event_FocusListener *) object;
}

void clinit_arc_scene_event_FocusListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_event_FocusListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_FocusListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_FocusListener_handle_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener:handle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(12);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_event_FocusListener$FocusEvent)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(13);
	frame[2].o = (checkCast(ctx, &class_arc_scene_event_FocusListener$FocusEvent, (frame[1].o)));
	LINE_NUMBER(14);
	sp[0].o = (jobject)((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_type;
	jint temp0 = (jint)((func_arc_scene_event_FocusListener$FocusEvent$Type_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_FocusListener$FocusEvent$Type_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 0: goto label_3;
		case 1: goto label_4;
		default: goto label_5;
	}
	}
label_3:;
	{
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_targetActor;
	((func_arc_scene_event_FocusListener_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_FocusListener_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_focused));
	LINE_NUMBER(17);
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_targetActor;
	((func_arc_scene_event_FocusListener_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_FocusListener_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jint)((arc_scene_event_FocusListener$FocusEvent *) NULL_CHECK((frame[2].o)))->F_focused));
	}
label_5:;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_FocusListener_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener:keyboardFocusChanged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_event_FocusListener_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener:scrollFocusChanged", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_FocusListener[] {
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
	(void *) M_arc_scene_event_FocusListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_event_FocusListener_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean,
	(void *) M_arc_scene_event_FocusListener_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean,
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
	{ "keyboardFocusChanged", "(Larc/scene/event/FocusListener$FocusEvent;Larc/scene/Element;Z)V" },
	{ "scrollFocusChanged", "(Larc/scene/event/FocusListener$FocusEvent;Larc/scene/Element;Z)V" },
};

static jclass interfaces[] { &class_arc_scene_event_EventListener, };

static jclass innerClasses[] {
	&class_arc_scene_event_FocusListener$FocusEvent,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_FocusListener, 0, "()V", 1 },
	{ "handle", (intptr_t) M_arc_scene_event_FocusListener_handle_arc_scene_event_SceneEvent_R_boolean, VTABLE_arc_scene_event_FocusListener_handle_arc_scene_event_SceneEvent_R_boolean, "(Larc/scene/event/SceneEvent;)Z", 1 },
	{ "keyboardFocusChanged", (intptr_t) M_arc_scene_event_FocusListener_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean, VTABLE_arc_scene_event_FocusListener_keyboardFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean, "(Larc/scene/event/FocusListener$FocusEvent;Larc/scene/Element;Z)V", 1 },
	{ "scrollFocusChanged", (intptr_t) M_arc_scene_event_FocusListener_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean, VTABLE_arc_scene_event_FocusListener_scrollFocusChanged_arc_scene_event_FocusListener$FocusEvent_arc_scene_Element_boolean, "(Larc/scene/event/FocusListener$FocusEvent;Larc/scene/Element;Z)V", 1 },
};

Class class_arc_scene_event_FocusListener{
		.nativeName = (intptr_t) "arc/scene/event/FocusListener",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_event_FocusListener),
		.classVtable = (intptr_t) vtable_arc_scene_event_FocusListener,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_FocusListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_FocusListener,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_FocusListener = registerClass(&class_arc_scene_event_FocusListener);

}
