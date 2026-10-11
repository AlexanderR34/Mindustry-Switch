#include "arc/scene/Element_5.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/scene/Element_5.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_arc_scene_Element$5(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_InputListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_Element$5 *) object;
	if (self->F_val$r)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$r)->clazz)->markFunction)((jobject) self->F_val$r, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_Element$5(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_arc_scene_Element$5_arc_scene_Element_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element$5:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Element$5(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(933);
	((arc_scene_Element$5 *) NULL_CHECK((frame[0].o)))->F_val$r = (jref) (frame[2].o);
	((arc_scene_Element$5 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element$5_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element$5:touchDown", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(936);
	sp[0].o = (jobject)((arc_scene_Element$5 *) NULL_CHECK((frame[0].o)))->F_val$r;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(937);
	((func_arc_scene_event_InputEvent_stop) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_event_InputEvent_stop])(ctx, (frame[1].o));
	LINE_NUMBER(938);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_Element$5[] {
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
	(void *) M_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element$5_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
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
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchDragged", "(Larc/scene/event/InputEvent;FFI)V" },
	{ "mouseMoved", "(Larc/scene/event/InputEvent;FF)Z" },
	{ "enter", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "exit", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "scrolled", "(Larc/scene/event/InputEvent;FFFF)Z" },
	{ "keyDown", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(Larc/scene/event/InputEvent;C)Z" },
};

static FieldMetadata fields[] {
	{ "val$r", &class_java_lang_Runnable, offsetof(arc_scene_Element$5, F_val$r), "Ljava/lang/Runnable;", 4112 },
	{ "this$0", &class_arc_scene_Element, offsetof(arc_scene_Element$5, F_this$0), "Larc/scene/Element;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_Element$5_arc_scene_Element_java_lang_Runnable, 0, "(Larc/scene/Element;Ljava/lang/Runnable;)V", 0 },
	{ "touchDown", (intptr_t) M_arc_scene_Element$5_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_Element$5_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
};

Class class_arc_scene_Element$5{
		.nativeName = (intptr_t) "arc/scene/Element$5",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(arc_scene_Element$5),
		.classVtable = (intptr_t) vtable_arc_scene_Element$5,
		.staticInitializer = (intptr_t) clinit_arc_scene_Element$5,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_Element$5,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_Element$5 = registerClass(&class_arc_scene_Element$5);

}

