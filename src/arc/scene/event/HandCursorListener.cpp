#include "arc/scene/event/HandCursorListener.h"
#include "arc/scene/event/HandCursorListener_invoke_arc_func_Boolp_1.h"
#include "arc/Core.h"
#include "arc/scene/Group.h"
#include "arc/scene/event/HandCursorListener.h"
#include "arc/func/Boolp.h"
#include "arc/Graphics_Cursor.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/Graphics.h"
#include "arc/Graphics_Cursor_SystemCursor.h"
#include "arc/scene/Element.h"
#include "arc/scene/utils/Disableable.h"
#include "java/lang/Object.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/HandCursorListener_invoke_arc_func_Boolp_0.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_arc_scene_event_HandCursorListener(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_ClickListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_event_HandCursorListener *) object;
	if (self->F_enabled)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_enabled)->clazz)->markFunction)((jobject) self->F_enabled, mark, depth + 1);
}

void clinit_arc_scene_event_HandCursorListener(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ClickListener(ctx);
}

void init_arc_scene_event_HandCursorListener_arc_func_Boolp_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/HandCursorListener:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_HandCursorListener(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(13);
	init_arc_scene_event_ClickListener(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_event_HandCursorListener_invoke_arc_func_Boolp_0(ctx);
		auto proxy = (arc_scene_event_HandCursorListener_invoke_arc_func_Boolp_0 *) gcAlloc(ctx, &class_arc_scene_event_HandCursorListener_invoke_arc_func_Boolp_0);
		sp[1].o = (jobject) proxy;
	}
	((arc_scene_event_HandCursorListener *) NULL_CHECK(sp[0].o))->F_enabled = (jref) sp[1].o;
	LINE_NUMBER(11);
	((arc_scene_event_HandCursorListener *) NULL_CHECK((frame[0].o)))->F_checkEnabled = (jint(1));
	LINE_NUMBER(14);
	((arc_scene_event_HandCursorListener *) NULL_CHECK((frame[0].o)))->F_enabled = (jref) (frame[1].o);
	LINE_NUMBER(15);
	((arc_scene_event_HandCursorListener *) NULL_CHECK((frame[0].o)))->F_checkEnabled = (frame[2].i);
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_event_HandCursorListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/HandCursorListener:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_HandCursorListener(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_arc_scene_event_ClickListener(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_event_HandCursorListener_invoke_arc_func_Boolp_1(ctx);
		auto proxy = (arc_scene_event_HandCursorListener_invoke_arc_func_Boolp_1 *) gcAlloc(ctx, &class_arc_scene_event_HandCursorListener_invoke_arc_func_Boolp_1);
		sp[1].o = (jobject) proxy;
	}
	((arc_scene_event_HandCursorListener *) NULL_CHECK(sp[0].o))->F_enabled = (jref) sp[1].o;
	LINE_NUMBER(11);
	((arc_scene_event_HandCursorListener *) NULL_CHECK((frame[0].o)))->F_checkEnabled = (jint(1));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_HandCursorListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/HandCursorListener:enter", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(23);
	M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	LINE_NUMBER(25);
	if ((frame[4].i) != (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_event_HandCursorListener *) NULL_CHECK((frame[0].o)))->F_enabled;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	if (((jint)((arc_scene_event_HandCursorListener *) NULL_CHECK((frame[0].o)))->F_checkEnabled) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_targetActor;
	jint temp0 = (jint)SM_arc_scene_event_HandCursorListener_isDisabled_arc_scene_Element_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_arc_scene_event_HandCursorListener_isDisabled_arc_scene_Element_R_boolean(ctx, (frame[5].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	LINE_NUMBER(26);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(29);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	clinit_arc_Graphics$Cursor$SystemCursor(ctx);
	sp[1].o = (jobject)SF_arc_Graphics$Cursor$SystemCursor_hand;
	((func_arc_Graphics_cursor_arc_Graphics$Cursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_cursor_arc_Graphics$Cursor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_event_HandCursorListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/HandCursorListener:exit", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(34);
	M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	LINE_NUMBER(36);
	if ((frame[4].i) != (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(37);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	((func_arc_Graphics_restoreCursor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_restoreCursor])(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_arc_scene_event_HandCursorListener_isDisabled_arc_scene_Element_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/HandCursorListener:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_HandCursorListener(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(42);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_arc_scene_utils_Disableable)) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_scene_utils_Disableable_isDisabled_R_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_utils_Disableable, INDEX_arc_scene_utils_Disableable_isDisabled_R_boolean, (checkCast(ctx, &class_arc_scene_utils_Disableable, (frame[0].o)))))(ctx, (checkCast(ctx, &class_arc_scene_utils_Disableable, (frame[0].o))));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_visible) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	jint temp0 = (jint)SM_arc_scene_event_HandCursorListener_isDisabled_arc_scene_Element_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_scene_event_HandCursorListener_lambda$new$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/HandCursorListener:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_HandCursorListener(ctx);
	{
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_HandCursorListener[] {
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
	(void *) M_arc_scene_event_ClickListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_HandCursorListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_HandCursorListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_event_ClickListener_cancel,
	(void *) M_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float,
	(void *) M_arc_scene_event_ClickListener_isOver_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_inTapSquare_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_inTapSquare_R_boolean,
	(void *) M_arc_scene_event_ClickListener_invalidateTapSquare,
	(void *) M_arc_scene_event_ClickListener_isPressed_R_boolean,
	(void *) M_arc_scene_event_ClickListener_isVisualPressed_R_boolean,
	(void *) M_arc_scene_event_ClickListener_isOver_R_boolean,
	(void *) M_arc_scene_event_ClickListener_getTapSquareSize_R_float,
	(void *) M_arc_scene_event_ClickListener_setTapSquareSize_float,
	(void *) M_arc_scene_event_ClickListener_setTapCountInterval_float,
	(void *) M_arc_scene_event_ClickListener_getTapCount_R_int,
	(void *) M_arc_scene_event_ClickListener_setTapCount_int,
	(void *) M_arc_scene_event_ClickListener_getTouchDownX_R_float,
	(void *) M_arc_scene_event_ClickListener_getTouchDownY_R_float,
	(void *) M_arc_scene_event_ClickListener_getPressedButton_R_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_getPressedPointer_R_int,
	(void *) M_arc_scene_event_ClickListener_getButton_R_arc_input_KeyCode,
	(void *) M_arc_scene_event_ClickListener_setButton_arc_input_KeyCode,
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
	{ "cancel", "()V" },
	{ "clicked", "(Larc/scene/event/InputEvent;FF)V" },
	{ "isOver", "(Larc/scene/Element;FF)Z" },
	{ "inTapSquare", "(FF)Z" },
	{ "inTapSquare", "()Z" },
	{ "invalidateTapSquare", "()V" },
	{ "isPressed", "()Z" },
	{ "isVisualPressed", "()Z" },
	{ "isOver", "()Z" },
	{ "getTapSquareSize", "()F" },
	{ "setTapSquareSize", "(F)V" },
	{ "setTapCountInterval", "(F)V" },
	{ "getTapCount", "()I" },
	{ "setTapCount", "(I)V" },
	{ "getTouchDownX", "()F" },
	{ "getTouchDownY", "()F" },
	{ "getPressedButton", "()Larc/input/KeyCode;" },
	{ "getPressedPointer", "()I" },
	{ "getButton", "()Larc/input/KeyCode;" },
	{ "setButton", "(Larc/input/KeyCode;)V" },
};

static FieldMetadata fields[] {
	{ "enabled", &class_arc_func_Boolp, offsetof(arc_scene_event_HandCursorListener, F_enabled), "Larc/func/Boolp;", 1 },
	{ "checkEnabled", &class_boolean, offsetof(arc_scene_event_HandCursorListener, F_checkEnabled), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_event_HandCursorListener_arc_func_Boolp_boolean, 0, "(Larc/func/Boolp;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_event_HandCursorListener, 0, "()V", 1 },
	{ "enter", (intptr_t) M_arc_scene_event_HandCursorListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_event_HandCursorListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "exit", (intptr_t) M_arc_scene_event_HandCursorListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, VTABLE_arc_scene_event_HandCursorListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element, "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V", 1 },
	{ "isDisabled", (intptr_t) SM_arc_scene_event_HandCursorListener_isDisabled_arc_scene_Element_R_boolean, 0, "(Larc/scene/Element;)Z", 8 },
	{ "lambda$new$0", (intptr_t) SM_arc_scene_event_HandCursorListener_lambda$new$0_R_boolean, 0, "()Z", 4106 },
};

Class class_arc_scene_event_HandCursorListener{
		.nativeName = (intptr_t) "arc/scene/event/HandCursorListener",
		.parentClass = (intptr_t) &class_arc_scene_event_ClickListener,
		.size = sizeof(arc_scene_event_HandCursorListener),
		.classVtable = (intptr_t) vtable_arc_scene_event_HandCursorListener,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_HandCursorListener,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_HandCursorListener,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_HandCursorListener = registerClass(&class_arc_scene_event_HandCursorListener);

}
