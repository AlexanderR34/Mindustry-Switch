#include "mindustry/ui/fragments/PerformanceFragment_PerfBar.h"
#include "arc/math/geom/Vec2.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/fragments/PerformanceFragment_PerfBar_invoke_arc_func_Prov_1.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/Input.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/ui/fragments/PerformanceFragment.h"
#include "arc/scene/ui/layout/Scl.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/Core.h"
#include "mindustry/core/PerfCounter.h"
#include "java/lang/Enum.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/ui/Fonts.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/ui/fragments/PerformanceFragment_PerfBar.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_ui_fragments_PerformanceFragment$PerfBar(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_Element(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_fragments_PerformanceFragment$PerfBar *) object;
}

void clinit_mindustry_ui_fragments_PerformanceFragment$PerfBar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
}

void init_mindustry_ui_fragments_PerformanceFragment$PerfBar(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment$PerfBar:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_PerformanceFragment$PerfBar(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(75);
	init_arc_scene_Element(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_PerformanceFragment$PerfBar_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/PerformanceFragment$PerfBar:draw", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_PerformanceFragment$PerfBar_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PerformanceFragment$PerfBar_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	frame[1].o = sp[0].o;
	LINE_NUMBER(80);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(81);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_displayedCounters;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_mindustry_core_PerfCounter_valueMs_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_core_PerfCounter_valueMs_R_float])(ctx, (frame[6].o));
	frame[2].f = (temp0 + temp1);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(82);
	jfloat temp0 = frame[2].f;
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_frame;
	jfloat temp1 = (jfloat)((func_mindustry_core_PerfCounter_valueMs_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_PerfCounter_valueMs_R_float])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[3].f = temp2;
	LINE_NUMBER(83);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(84);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(86);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_darkGray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(87);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(89);
	clinit_mindustry_core_PerfCounter(ctx);
	sp[0].o = (jobject)SF_mindustry_core_PerfCounter_displayedCounters;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_12:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_13;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(90);
	jfloat temp0 = (jfloat)((func_mindustry_core_PerfCounter_valueMs_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_core_PerfCounter_valueMs_R_float])(ctx, (frame[9].o));
	frame[10].f = temp0;
	LINE_NUMBER(91);
	sp[0].o = (jobject)SM_mindustry_ui_fragments_PerformanceFragment_color_mindustry_core_PerfCounter_R_arc_graphics_Color(ctx, (frame[9].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(93);
	frame[11].f = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + (((frame[4].f) / (frame[3].f)) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width)));
	frame[12].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y);
	frame[13].f = ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) * (frame[10].f)) / (frame[3].f));
	frame[14].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height);
	LINE_NUMBER(95);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, (frame[11].f), (frame[12].f), (frame[13].f), (frame[14].f));
	LINE_NUMBER(96);
	jint temp1 = (jint)SM_arc_math_geom_Rect_contains_float_float_float_float_float_float_R_boolean(ctx, (frame[11].f), (frame[12].f), (frame[13].f), (frame[14].f), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	if (temp1 == 0) goto label_22;
	}
	{
	LINE_NUMBER(97);
	frame[5].o = (frame[9].o);
	}
label_22:;
	{
	LINE_NUMBER(99);
	frame[4].f = ((frame[4].f) + (frame[10].f));
	LINE_NUMBER(89);
	INST_IINC(8, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(101);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(103);
	if ((frame[5].o) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(104);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(30.0f)));
	frame[6].f = temp0;
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_mindustry_core_PerfCounter_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_core_PerfCounter_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_util_Strings_insertSpaces_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	jfloat temp1 = (jfloat)((func_mindustry_core_PerfCounter_valueMs_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_core_PerfCounter_valueMs_R_float])(ctx, (frame[5].o));
	sp[1].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, temp1, (jint(1)));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001: \u0001"_j.string, 2, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(106);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_PerformanceFragment$PerfBar_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_fragments_PerformanceFragment$PerfBar_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_PerformanceFragment$PerfBar_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[8].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(107);
	sp[0].o = frame[8].o;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_outline;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, (frame[7].o));
	LINE_NUMBER(108);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.5f)));
	LINE_NUMBER(109);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	frame[9].f = temp2;
	LINE_NUMBER(110);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) + (frame[6].f)) - (frame[9].f)), (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[6].f)) - ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_height)) - (frame[9].f)), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_width) + ((frame[9].f) * (jfloat(2)))), (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[8].o)))->F_height) + ((frame[9].f) * (jfloat(2)))));
	LINE_NUMBER(111);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(112);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, (frame[7].o), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) + (frame[6].f)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[6].f)));
	LINE_NUMBER(113);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[8].o));
	}
label_26:;
	LINE_NUMBER(115);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_PerformanceFragment$PerfBar[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Element_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ui_fragments_PerformanceFragment$PerfBar_draw,
	(void *) M_arc_scene_Element_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Element_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Element_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_Element_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_getMinWidth_R_float,
	(void *) M_arc_scene_Element_getMinHeight_R_float,
	(void *) M_arc_scene_Element_getPrefWidth_R_float,
	(void *) M_arc_scene_Element_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_Element_setLayoutEnabled_boolean,
	(void *) M_arc_scene_Element_validate,
	(void *) M_arc_scene_Element_needsLayout_R_boolean,
	(void *) M_arc_scene_Element_invalidate,
	(void *) M_arc_scene_Element_invalidateHierarchy,
	(void *) M_arc_scene_Element_pack,
	(void *) M_arc_scene_Element_setFillParent_boolean,
	(void *) M_arc_scene_Element_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_PerformanceFragment$PerfBar, 0, "()V", 0 },
	{ "draw", (intptr_t) M_mindustry_ui_fragments_PerformanceFragment$PerfBar_draw, VTABLE_mindustry_ui_fragments_PerformanceFragment$PerfBar_draw, "()V", 1 },
};

Class class_mindustry_ui_fragments_PerformanceFragment$PerfBar{
		.nativeName = (intptr_t) "mindustry/ui/fragments/PerformanceFragment$PerfBar",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(mindustry_ui_fragments_PerformanceFragment$PerfBar),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_PerformanceFragment$PerfBar,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_PerformanceFragment$PerfBar,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_PerformanceFragment$PerfBar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_fragments_PerformanceFragment,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 121,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_PerformanceFragment$PerfBar = registerClass(&class_mindustry_ui_fragments_PerformanceFragment$PerfBar);

}

