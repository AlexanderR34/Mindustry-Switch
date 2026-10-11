#include "arc/scene/ui/ScrollPane_3.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ScrollPane.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/scene/ui/ScrollPane_3.h"

extern "C" {


void mark_arc_scene_ui_ScrollPane$3(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_ScrollPane$3 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_ScrollPane$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_arc_scene_ui_ScrollPane$3_arc_scene_ui_ScrollPane(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ScrollPane$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(197);
	((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ScrollPane$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ScrollPane$3:scrolled", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_scene_ui_ScrollPane_resetFade) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_resetFade])(ctx, sp[0].o);
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollY) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_amountY;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ScrollPane_getMouseWheelY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_getMouseWheelY_R_float])(ctx, sp[1].o);
	((func_arc_scene_ui_ScrollPane_setScrollY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollY_float])(ctx, sp[0].o, (temp0 + (temp1 * (frame[5].f))));
	}
label_2:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollX) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp0 = (jfloat)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[1].o))->F_amountX;
	sp[1].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ScrollPane_getMouseWheelX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_getMouseWheelX_R_float])(ctx, sp[1].o);
	((func_arc_scene_ui_ScrollPane_setScrollX_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ScrollPane_setScrollX_float])(ctx, sp[0].o, (temp0 + (temp1 * (frame[4].f))));
	}
label_3:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollX) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ScrollPane *) NULL_CHECK(sp[0].o))->F_scrollY) == 0) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_ScrollPane$3[] {
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
	(void *) M_arc_scene_event_InputListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_InputListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_ui_ScrollPane$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
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
	{ "this$0", &class_arc_scene_ui_ScrollPane, offsetof(arc_scene_ui_ScrollPane$3, F_this$0), "Larc/scene/ui/ScrollPane;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_ScrollPane$3_arc_scene_ui_ScrollPane, 0, "(Larc/scene/ui/ScrollPane;)V", 0 },
	{ "scrolled", (intptr_t) M_arc_scene_ui_ScrollPane$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, VTABLE_arc_scene_ui_ScrollPane$3_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean, "(Larc/scene/event/InputEvent;FFFF)Z", 1 },
};

Class class_arc_scene_ui_ScrollPane$3{
		.nativeName = (intptr_t) "arc/scene/ui/ScrollPane$3",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(arc_scene_ui_ScrollPane$3),
		.classVtable = (intptr_t) vtable_arc_scene_ui_ScrollPane$3,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_ScrollPane$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_ScrollPane$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_ui_ScrollPane$3 = registerClass(&class_arc_scene_ui_ScrollPane$3);

}

