#include "arc/scene/Scene_TouchFocus.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/Scene_1.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "arc/scene/Scene_TouchFocus.h"
#include "arc/scene/event/EventListener.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_scene_Scene$TouchFocus(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_Scene$TouchFocus *) object;
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
	if (self->F_listenerActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listenerActor)->clazz)->markFunction)((jobject) self->F_listenerActor, mark, depth + 1);
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_button)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_button)->clazz)->markFunction)((jobject) self->F_button, mark, depth + 1);
}

void clinit_arc_scene_Scene$TouchFocus(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_Scene$TouchFocus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene$TouchFocus:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Scene$TouchFocus(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(835);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Scene$TouchFocus_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene$TouchFocus:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(843);
	((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[0].o)))->F_listenerActor = (jref) (jobject(nullptr));
	LINE_NUMBER(844);
	((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (jobject(nullptr));
	LINE_NUMBER(845);
	((arc_scene_Scene$TouchFocus *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	LINE_NUMBER(846);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_Scene$TouchFocus_arc_scene_Scene$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Scene$TouchFocus:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Scene$TouchFocus(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(835);
	init_arc_scene_Scene$TouchFocus(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_Scene$TouchFocus[] {
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
	(void *) M_arc_scene_Scene$TouchFocus_reset,
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
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "listener", &class_arc_scene_event_EventListener, offsetof(arc_scene_Scene$TouchFocus, F_listener), "Larc/scene/event/EventListener;", 0 },
	{ "listenerActor", &class_arc_scene_Element, offsetof(arc_scene_Scene$TouchFocus, F_listenerActor), "Larc/scene/Element;", 0 },
	{ "target", &class_arc_scene_Element, offsetof(arc_scene_Scene$TouchFocus, F_target), "Larc/scene/Element;", 0 },
	{ "pointer", &class_int, offsetof(arc_scene_Scene$TouchFocus, F_pointer), "I", 0 },
	{ "button", &class_arc_input_KeyCode, offsetof(arc_scene_Scene$TouchFocus, F_button), "Larc/input/KeyCode;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_Scene$TouchFocus, 0, "()V", 2 },
	{ "reset", (intptr_t) M_arc_scene_Scene$TouchFocus_reset, VTABLE_arc_scene_Scene$TouchFocus_reset, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_Scene$TouchFocus_arc_scene_Scene$1, 0, "(Larc/scene/Scene$1;)V", 4096 },
};

Class class_arc_scene_Scene$TouchFocus{
		.nativeName = (intptr_t) "arc/scene/Scene$TouchFocus",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_Scene$TouchFocus),
		.classVtable = (intptr_t) vtable_arc_scene_Scene$TouchFocus,
		.staticInitializer = (intptr_t) clinit_arc_scene_Scene$TouchFocus,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_Scene$TouchFocus,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_Scene,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_Scene$TouchFocus = registerClass(&class_arc_scene_Scene$TouchFocus);

}

