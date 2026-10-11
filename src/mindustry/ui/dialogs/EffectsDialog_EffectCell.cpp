#include "mindustry/ui/dialogs/EffectsDialog_EffectCell.h"
#include "mindustry/gen/Tex.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/Time.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/math/Mat.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Cons.h"
#include "mindustry/entities/Effect.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "mindustry/logic/LogicFx_EffectEntry.h"
#include "arc/util/Tmp.h"
#include "mindustry/ui/dialogs/EffectsDialog_EffectCell.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/EffectsDialog.h"
#include "java/lang/Class.h"
#include "arc/scene/ui/layout/Scl.h"

extern "C" {


void mark_mindustry_ui_dialogs_EffectsDialog$EffectCell(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_EffectsDialog$EffectCell *) object;
	if (self->F_effect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_effect)->clazz)->markFunction)((jobject) self->F_effect, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_cl)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cl)->clazz)->markFunction)((jobject) self->F_cl, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_EffectsDialog$EffectCell(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
}

void init_mindustry_ui_dialogs_EffectsDialog$EffectCell_mindustry_ui_dialogs_EffectsDialog_mindustry_logic_LogicFx$EffectEntry_arc_scene_event_ClickListener(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EffectsDialog$EffectCell:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_EffectsDialog$EffectCell(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(185);
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(176);
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_size = (jfloat(-1.0f));
	LINE_NUMBER(178);
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_id = (jint(1));
	LINE_NUMBER(179);
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	LINE_NUMBER(181);
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(1));
	LINE_NUMBER(186);
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_effect = (jref) (frame[2].o);
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[2].o)))->F_effect;
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK(sp[0].o))->F_lifetime = ((jfloat)((mindustry_entities_Effect *) NULL_CHECK(sp[1].o))->F_lifetime);
	LINE_NUMBER(188);
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_cl = (jref) (frame[3].o);
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK((frame[2].o)))->F_data;
	sp[1].o = (jobject)SM_mindustry_ui_dialogs_EffectsDialog_getData_java_lang_Class_R_java_lang_Object(ctx, sp[1].o);
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EffectsDialog$EffectCell_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EffectsDialog$EffectCell:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	if ((floatCompare(((jfloat)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_size), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_effect;
	jfloat temp0 = (jfloat)SM_mindustry_ui_dialogs_EffectsDialog_calculateSize_mindustry_logic_LogicFx$EffectEntry_R_float(ctx, sp[1].o);
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK(sp[0].o))->F_size = (temp0 + (jfloat(1)));
	}
label_1:;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromHsv_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, (fmodf(((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime) * (jfloat(2))), (jfloat(360.0f)))), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(201);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_EffectsDialog$EffectCell_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_EffectsDialog$EffectCell_clipBegin_float_float_float_float_R_boolean])(ctx, (frame[0].o), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_cl;
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_isOver_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ClickListener_isOver_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_EffectsDialog *) NULL_CHECK(sp[0].o))->F_listener;
	if (sp[0].o == nullptr) goto label_6;
	}
	(sp++)->f = jfloat(0.4f);
	goto label_7;
label_6:;
	(sp++)->f = jfloat(0.5f);
label_7:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_colorl_float(ctx, sp[0].f);
	LINE_NUMBER(203);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(204);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_alphaBg;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(205);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(206);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(208);
	frame[1].f = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / ((jfloat)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_size));
	LINE_NUMBER(209);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m1;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(210);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_translate_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat])(ctx, sp[0].o, (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))));
	sp[0].o = (jobject)((func_arc_math_Mat_scale_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_scale_float_float_R_arc_math_Mat])(ctx, sp[0].o, (frame[1].f), (frame[1].f));
	LINE_NUMBER(211);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_effect;
	sp[1].o = (jobject)((mindustry_logic_LogicFx$EffectEntry *) NULL_CHECK(sp[1].o))->F_effect;
	jint temp0 = (jint)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_id;
	sp[2].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp1 = (jfloat)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_time;
	jfloat temp2 = (jfloat)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_lifetime;
	jfloat temp3 = (jfloat)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_rotation;
	jfloat temp4 = jfloat(0);
	jfloat temp5 = jfloat(0);
	sp[3].o = (jobject)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_data;
	jfloat temp6 = (jfloat)((func_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_Effect_render_int_arc_graphics_Color_float_float_float_float_float_java_lang_Object_R_float])(ctx, sp[1].o, temp0, sp[2].o, temp1, temp2, temp3, temp4, temp5, sp[3].o);
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK(sp[0].o))->F_lifetime = temp6;
	LINE_NUMBER(214);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(215);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_m1;
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(216);
	((func_mindustry_ui_dialogs_EffectsDialog$EffectCell_clipEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_EffectsDialog$EffectCell_clipEnd])(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(219);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(3.0f)));
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(220);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(221);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_EffectsDialog$EffectCell_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/EffectsDialog$EffectCell:act", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(226);
	M_arc_scene_Element_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK(sp[0].o))->F_time = (((jfloat)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK(sp[0].o))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(229);
	if ((floatCompare(((jfloat)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_lifetime), -1)) < 0) goto label_3;
	}
	{
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK(sp[0].o))->F_id = (((jint)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK(sp[0].o))->F_id) + (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK(sp[0].o))->F_time = (fmodf(((jfloat)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK(sp[0].o))->F_time), ((jfloat)((mindustry_ui_dialogs_EffectsDialog$EffectCell *) NULL_CHECK((frame[0].o)))->F_lifetime)));
	LINE_NUMBER(233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_EffectsDialog$EffectCell[] {
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
	(void *) M_mindustry_ui_dialogs_EffectsDialog$EffectCell_draw,
	(void *) M_mindustry_ui_dialogs_EffectsDialog$EffectCell_act_float,
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

static FieldMetadata fields[] {
	{ "effect", &class_mindustry_logic_LogicFx$EffectEntry, offsetof(mindustry_ui_dialogs_EffectsDialog$EffectCell, F_effect), "Lmindustry/logic/LogicFx$EffectEntry;", 0 },
	{ "size", &class_float, offsetof(mindustry_ui_dialogs_EffectsDialog$EffectCell, F_size), "F", 0 },
	{ "id", &class_int, offsetof(mindustry_ui_dialogs_EffectsDialog$EffectCell, F_id), "I", 0 },
	{ "time", &class_float, offsetof(mindustry_ui_dialogs_EffectsDialog$EffectCell, F_time), "F", 0 },
	{ "lifetime", &class_float, offsetof(mindustry_ui_dialogs_EffectsDialog$EffectCell, F_lifetime), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_ui_dialogs_EffectsDialog$EffectCell, F_rotation), "F", 0 },
	{ "data", &class_java_lang_Object, offsetof(mindustry_ui_dialogs_EffectsDialog$EffectCell, F_data), "Ljava/lang/Object;", 0 },
	{ "cl", &class_arc_scene_event_ClickListener, offsetof(mindustry_ui_dialogs_EffectsDialog$EffectCell, F_cl), "Larc/scene/event/ClickListener;", 0 },
	{ "this$0", &class_mindustry_ui_dialogs_EffectsDialog, offsetof(mindustry_ui_dialogs_EffectsDialog$EffectCell, F_this$0), "Lmindustry/ui/dialogs/EffectsDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_EffectsDialog$EffectCell_mindustry_ui_dialogs_EffectsDialog_mindustry_logic_LogicFx$EffectEntry_arc_scene_event_ClickListener, 0, "(Lmindustry/ui/dialogs/EffectsDialog;Lmindustry/logic/LogicFx$EffectEntry;Larc/scene/event/ClickListener;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_ui_dialogs_EffectsDialog$EffectCell_draw, VTABLE_mindustry_ui_dialogs_EffectsDialog$EffectCell_draw, "()V", 1 },
	{ "act", (intptr_t) M_mindustry_ui_dialogs_EffectsDialog$EffectCell_act_float, VTABLE_mindustry_ui_dialogs_EffectsDialog$EffectCell_act_float, "(F)V", 1 },
};

Class class_mindustry_ui_dialogs_EffectsDialog$EffectCell{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/EffectsDialog$EffectCell",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(mindustry_ui_dialogs_EffectsDialog$EffectCell),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_EffectsDialog$EffectCell,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_EffectsDialog$EffectCell,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_EffectsDialog$EffectCell,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_EffectsDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 121,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_EffectsDialog$EffectCell = registerClass(&class_mindustry_ui_dialogs_EffectsDialog$EffectCell);

}

