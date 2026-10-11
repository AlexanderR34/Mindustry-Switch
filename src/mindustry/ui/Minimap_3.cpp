#include "mindustry/ui/Minimap_3.h"
#include "java/lang/Math.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/core/UI.h"
#include "mindustry/ui/Minimap.h"
#include "arc/input/KeyCode.h"
#include "java/lang/Object.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/ui/fragments/MinimapFragment.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/ui/Minimap_3.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_mindustry_ui_Minimap$3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_Minimap$3 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_Minimap$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ClickListener(ctx);
}

void init_mindustry_ui_Minimap$3_mindustry_ui_Minimap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Minimap$3:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Minimap$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	((mindustry_ui_Minimap$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_event_ClickListener(ctx, (frame[0].o));
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(11.0f)));
	((arc_scene_event_ClickListener *) NULL_CHECK(sp[0].o))->F_tapSquareSize = temp0;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Minimap$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Minimap$3:touchUp", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(83);
	jint temp0 = (jint)((func_mindustry_ui_Minimap$3_inTapSquare_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_Minimap$3_inTapSquare_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(84);
	M_arc_scene_event_ClickListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(86);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressed = (jint(0));
	LINE_NUMBER(87);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedPointer = (jint(-1));
	LINE_NUMBER(88);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_pressedButton = (jref) (jobject(nullptr));
	LINE_NUMBER(89);
	((arc_scene_event_ClickListener *) NULL_CHECK((frame[0].o)))->F_cancelled = (jint(0));
	}
label_3:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_Minimap$3_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Minimap$3:touchDragged", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(95);
	jint temp0 = (jint)((func_mindustry_ui_Minimap$3_inTapSquare_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_Minimap$3_inTapSquare_float_float_R_boolean])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(96);
	((func_mindustry_ui_Minimap$3_invalidateTapSquare) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_Minimap$3_invalidateTapSquare])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(98);
	M_arc_scene_event_ClickListener_touchDragged_arc_scene_event_InputEvent_float_float_int(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i));
	LINE_NUMBER(100);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_4;
	}
	{
	LINE_NUMBER(101);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[5].f = (((jfloat(temp2)) / (jfloat(16.0f))) / (jfloat(2)));
	LINE_NUMBER(102);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	jfloat temp3 = jfloat(1);
	jfloat temp4 = frame[3].f;
	sp[1].o = (jobject)((mindustry_ui_Minimap$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = (jfloat)SM_mindustry_ui_Minimap_access$200_mindustry_ui_Minimap_R_float(ctx, sp[1].o);
	((func_mindustry_graphics_MinimapRenderer_setZoom_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_setZoom_float])(ctx, sp[0].o, (temp3 + ((temp4 / temp5) * ((frame[5].f) - (jfloat(1))))));
	}
label_4:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_Minimap$3_clicked_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Minimap$3:clicked", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(108);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_minimapfrag;
	((func_mindustry_ui_fragments_MinimapFragment_toggle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_toggle])(ctx, sp[0].o);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Minimap$3[] {
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
	(void *) M_mindustry_ui_Minimap$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_ui_Minimap$3_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_event_ClickListener_cancel,
	(void *) M_mindustry_ui_Minimap$3_clicked_arc_scene_event_InputEvent_float_float,
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
	{ "this$0", &class_mindustry_ui_Minimap, offsetof(mindustry_ui_Minimap$3, F_this$0), "Lmindustry/ui/Minimap;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Minimap$3_mindustry_ui_Minimap, 0, "(Lmindustry/ui/Minimap;)V", 0 },
	{ "touchUp", (intptr_t) M_mindustry_ui_Minimap$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_ui_Minimap$3_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchDragged", (intptr_t) M_mindustry_ui_Minimap$3_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_mindustry_ui_Minimap$3_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "clicked", (intptr_t) M_mindustry_ui_Minimap$3_clicked_arc_scene_event_InputEvent_float_float, VTABLE_mindustry_ui_Minimap$3_clicked_arc_scene_event_InputEvent_float_float, "(Larc/scene/event/InputEvent;FF)V", 1 },
};

Class class_mindustry_ui_Minimap$3{
		.nativeName = (intptr_t) "mindustry/ui/Minimap$3",
		.parentClass = (intptr_t) &class_arc_scene_event_ClickListener,
		.size = sizeof(mindustry_ui_Minimap$3),
		.classVtable = (intptr_t) vtable_mindustry_ui_Minimap$3,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Minimap$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Minimap$3,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_Minimap$3 = registerClass(&class_mindustry_ui_Minimap$3);

}

