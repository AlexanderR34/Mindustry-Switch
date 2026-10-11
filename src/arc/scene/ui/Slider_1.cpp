#include "arc/scene/ui/Slider_1.h"
#include "arc/scene/ui/Slider.h"
#include "arc/func/Prov.h"
#include "arc/scene/ui/Slider_1.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/event/ChangeListener_ChangeEvent.h"
#include "arc/scene/ui/Slider_1_invoke_arc_func_Prov_0.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/util/pooling/Pools.h"
#include "arc/scene/event/InputListener.h"
#include "java/lang/Class.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_arc_scene_ui_Slider$1(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_Slider$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_scene_ui_Slider$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_arc_scene_ui_Slider$1_arc_scene_ui_Slider(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Slider$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Slider$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider$1:touchDown", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_disabled) == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((arc_scene_ui_Slider *) NULL_CHECK(sp[0].o))->F_draggingPointer) == (jint(-1))) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Slider *) NULL_CHECK(sp[0].o))->F_draggingPointer = (frame[4].i);
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_scene_ui_Slider_calculatePositionAndValue_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_calculatePositionAndValue_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Slider$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider$1:touchUp", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(67);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((arc_scene_ui_Slider *) NULL_CHECK(sp[0].o))->F_draggingPointer)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Slider *) NULL_CHECK(sp[0].o))->F_draggingPointer = (jint(-1));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_scene_ui_Slider_calculatePositionAndValue_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_calculatePositionAndValue_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = ((jobject) &class_arc_scene_event_ChangeListener$ChangeEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Slider$1_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_ui_Slider$1_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_ui_Slider$1_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_arc_scene_event_ChangeListener$ChangeEvent, sp[0].o));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_scene_ui_Slider_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(73);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[6].o));
	}
label_3:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Slider$1_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider$1:touchDragged", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_arc_scene_ui_Slider_calculatePositionAndValue_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Slider_calculatePositionAndValue_float_float_R_boolean])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Slider$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider$1:enter", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(84);
	if ((frame[4].i) != (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Slider *) NULL_CHECK(sp[0].o))->F_mouseOver = (jint(1));
	}
label_1:;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Slider$1_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Slider$1:exit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(89);
	if ((frame[4].i) != (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Slider$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((arc_scene_ui_Slider *) NULL_CHECK(sp[0].o))->F_mouseOver = (jint(0));
	}
label_1:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Slider$1[] {
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
	(void *) M_arc_scene_ui_Slider$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_ui_Slider$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_ui_Slider$1_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_ui_Slider$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_ui_Slider$1_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
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
	{ "this$0", &class_arc_scene_ui_Slider, offsetof(arc_scene_ui_Slider$1, F_this$0), "Larc/scene/ui/Slider;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Slider$1_arc_scene_ui_Slider, 0, "(Larc/scene/ui/Slider;)V", 0 },
	{ "touchDown", (intptr_t) M_arc_scene_ui_Slider$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_arc_scene_ui_Slider$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchUp", (intptr_t) M_arc_scene_ui_Slider$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_arc_scene_ui_Slider$1_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchDragged", (intptr_t) M_arc_scene_ui_Slider$1_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_arc_scene_ui_Slider$1_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "enter", (intptr_t) M_arc_scene_ui_Slider$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_ui_Slider$1_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "exit", (intptr_t) M_arc_scene_ui_Slider$1_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_ui_Slider$1_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
};

Class class_arc_scene_ui_Slider$1{
		.nativeName = (intptr_t) "arc/scene/ui/Slider$1",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(arc_scene_ui_Slider$1),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Slider$1,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Slider$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Slider$1,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Slider$1 = registerClass(&class_arc_scene_ui_Slider$1);

}

