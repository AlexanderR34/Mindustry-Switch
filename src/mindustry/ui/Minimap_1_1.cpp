#include "mindustry/ui/Minimap_1_1.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/input/KeyCode.h"
#include "java/lang/Object.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/ui/Minimap_1_1.h"
#include "arc/util/Tmp.h"
#include "mindustry/ui/Minimap_1.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/core/Control.h"
#include "arc/scene/event/InputListener.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/input/InputHandler.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {


void mark_mindustry_ui_Minimap$1$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_Minimap$1$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_ui_Minimap$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ClickListener(ctx);
}

void init_mindustry_ui_Minimap$1$1_mindustry_ui_Minimap$1_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Minimap$1$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Minimap$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(26);
	((mindustry_ui_Minimap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_scene_event_ClickListener_arc_input_KeyCode(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Minimap$1$1_clicked_arc_scene_event_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Minimap$1$1:clicked", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(29);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(30);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(33);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((mindustry_ui_Minimap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jfloat temp1 = temp0 - ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((mindustry_ui_Minimap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jfloat temp2 = (jfloat)SM_mindustry_ui_Minimap$1_access$000_mindustry_ui_Minimap$1_R_float(ctx, sp[0].o);
	frame[5].f = (temp1 / temp2);
	LINE_NUMBER(34);
	jfloat temp3 = frame[3].f;
	sp[0].o = (jobject)((mindustry_ui_Minimap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jfloat temp4 = temp3 - ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y);
	sp[0].o = (jobject)((mindustry_ui_Minimap$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jfloat temp5 = (jfloat)SM_mindustry_ui_Minimap$1_access$100_mindustry_ui_Minimap$1_R_float(ctx, sp[0].o);
	frame[6].f = (temp4 / temp5);
	LINE_NUMBER(35);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_u), ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_u2), (frame[5].f));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[7].f = ((temp6 * (jfloat(temp7))) * (jfloat(8.0f)));
	LINE_NUMBER(36);
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat(1)) - ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_v2)), ((jfloat(1)) - ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_v)), (frame[6].f));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp9 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	frame[8].f = ((temp8 * (jfloat(temp9))) * (jfloat(8.0f)));
	LINE_NUMBER(38);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, (frame[7].f), (frame[8].f));
	((func_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Minimap$1$1[] {
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
	(void *) M_arc_scene_event_ClickListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_ClickListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_arc_scene_event_ClickListener_cancel,
	(void *) M_mindustry_ui_Minimap$1$1_clicked_arc_scene_event_InputEvent_float_float,
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
	{ "this$1", &class_mindustry_ui_Minimap$1, offsetof(mindustry_ui_Minimap$1$1, F_this$1), "Lmindustry/ui/Minimap$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Minimap$1$1_mindustry_ui_Minimap$1_arc_input_KeyCode, 0, "(Lmindustry/ui/Minimap$1;Larc/input/KeyCode;)V", 0 },
	{ "clicked", (intptr_t) M_mindustry_ui_Minimap$1$1_clicked_arc_scene_event_InputEvent_float_float, VTABLE_mindustry_ui_Minimap$1$1_clicked_arc_scene_event_InputEvent_float_float, "(Larc/scene/event/InputEvent;FF)V", 1 },
};

Class class_mindustry_ui_Minimap$1$1{
		.nativeName = (intptr_t) "mindustry/ui/Minimap$1$1",
		.parentClass = (intptr_t) &class_arc_scene_event_ClickListener,
		.size = sizeof(mindustry_ui_Minimap$1$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_Minimap$1$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Minimap$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Minimap$1$1,
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
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_Minimap$1$1 = registerClass(&class_mindustry_ui_Minimap$1$1);

}

