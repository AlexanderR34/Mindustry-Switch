#include "arc/scene/event/InputEvent.h"
#include "arc/math/geom/Vec2.h"
#include "arc/scene/event/InputEvent_InputEventType.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/event/SceneEvent.h"
#include "java/lang/Enum.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_scene_event_InputEvent(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_event_InputEvent *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_keyCode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keyCode)->clazz)->markFunction)((jobject) self->F_keyCode, mark, depth + 1);
	if (self->F_relatedActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_relatedActor)->clazz)->markFunction)((jobject) self->F_relatedActor, mark, depth + 1);
}

void clinit_arc_scene_event_InputEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_SceneEvent(ctx);
}

void init_arc_scene_event_InputEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputEvent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_InputEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_arc_scene_event_SceneEvent(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_InputEvent_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputEvent:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	M_arc_scene_event_SceneEvent_reset(ctx, (frame[0].o));
	LINE_NUMBER(24);
	((arc_scene_event_InputEvent *) NULL_CHECK((frame[0].o)))->F_relatedActor = (jref) (jobject(nullptr));
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_event_InputEvent_toCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputEvent:toCoordinates", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[2].o), ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageX), ((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageY));
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_event_InputEvent_isTouchFocusCancel_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputEvent:isTouchFocusCancel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	if ((floatCompare(((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageX), (jfloat(-2,147484e+09f)), -1)) == 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_event_InputEvent *) NULL_CHECK((frame[0].o)))->F_stageY), (jfloat(-2,147484e+09f)), -1)) != 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_event_InputEvent_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputEvent:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_scene_event_InputEvent$InputEventType_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_InputEvent$InputEventType_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_InputEvent[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_event_InputEvent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_event_InputEvent_reset,
	(void *) M_arc_scene_event_SceneEvent_handle,
	(void *) M_arc_scene_event_SceneEvent_cancel,
	(void *) M_arc_scene_event_SceneEvent_stop,
	(void *) M_arc_scene_event_InputEvent_toCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_event_InputEvent_isTouchFocusCancel_R_boolean,
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
	{ "toCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "isTouchFocusCancel", "()Z" },
};

static jclass innerClasses[] {
	&class_arc_scene_event_InputEvent$InputEventType,
};

static FieldMetadata fields[] {
	{ "type", &class_arc_scene_event_InputEvent$InputEventType, offsetof(arc_scene_event_InputEvent, F_type), "Larc/scene/event/InputEvent$InputEventType;", 1 },
	{ "stageX", &class_float, offsetof(arc_scene_event_InputEvent, F_stageX), "F", 1 },
	{ "stageY", &class_float, offsetof(arc_scene_event_InputEvent, F_stageY), "F", 1 },
	{ "pointer", &class_int, offsetof(arc_scene_event_InputEvent, F_pointer), "I", 1 },
	{ "scrollAmountX", &class_float, offsetof(arc_scene_event_InputEvent, F_scrollAmountX), "F", 1 },
	{ "scrollAmountY", &class_float, offsetof(arc_scene_event_InputEvent, F_scrollAmountY), "F", 1 },
	{ "keyCode", &class_arc_input_KeyCode, offsetof(arc_scene_event_InputEvent, F_keyCode), "Larc/input/KeyCode;", 1 },
	{ "character", &class_char, offsetof(arc_scene_event_InputEvent, F_character), "C", 1 },
	{ "relatedActor", &class_arc_scene_Element, offsetof(arc_scene_event_InputEvent, F_relatedActor), "Larc/scene/Element;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_InputEvent, 0, "()V", 1 },
	{ "reset", (intptr_t) M_arc_scene_event_InputEvent_reset, VTABLE_arc_scene_event_InputEvent_reset, "()V", 1 },
	{ "toCoordinates", (intptr_t) M_arc_scene_event_InputEvent_toCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_scene_event_InputEvent_toCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "isTouchFocusCancel", (intptr_t) M_arc_scene_event_InputEvent_isTouchFocusCancel_R_boolean, VTABLE_arc_scene_event_InputEvent_isTouchFocusCancel_R_boolean, "()Z", 1 },
	{ "toString", (intptr_t) M_arc_scene_event_InputEvent_toString_R_java_lang_String, VTABLE_arc_scene_event_InputEvent_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_scene_event_InputEvent{
		.nativeName = (intptr_t) "arc/scene/event/InputEvent",
		.parentClass = (intptr_t) &class_arc_scene_event_SceneEvent,
		.size = sizeof(arc_scene_event_InputEvent),
		.classVtable = (intptr_t) vtable_arc_scene_event_InputEvent,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_InputEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_InputEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_InputEvent = registerClass(&class_arc_scene_event_InputEvent);

}
