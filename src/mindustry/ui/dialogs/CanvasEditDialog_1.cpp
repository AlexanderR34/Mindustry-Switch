#include "mindustry/ui/dialogs/CanvasEditDialog_1.h"
#include "arc/graphics/Pixmaps.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "arc/Input.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_1_1.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/struct/IntSeq.h"
#include "arc/graphics/Texture.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/scene/Element.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_1.h"
#include "arc/util/Tmp.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ui/dialogs/CanvasEditDialog.h"
#include "mindustry/Vars.h"
#include "arc/scene/ui/layout/Scl.h"

extern "C" {


void mark_mindustry_ui_dialogs_CanvasEditDialog$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_CanvasEditDialog$1 *) object;
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_CanvasEditDialog$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
}

void init_mindustry_ui_dialogs_CanvasEditDialog$1_mindustry_ui_dialogs_CanvasEditDialog_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog$1:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CanvasEditDialog$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(74);
	((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size = (frame[2].i);
	((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_CanvasEditDialog$1$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog$1$1);
	init_mindustry_ui_dialogs_CanvasEditDialog$1$1_mindustry_ui_dialogs_CanvasEditDialog$1(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_ui_dialogs_CanvasEditDialog$1_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ui_dialogs_CanvasEditDialog$1_convertX_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog$1:convertX", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (jint(((frame[1].f) / (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size)))))));
	}

	popStackFrame(ctx);
}

jint M_mindustry_ui_dialogs_CanvasEditDialog$1_convertY_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog$1:convertY", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_pix;
	popStackFrame(ctx);
	return ((((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_height) - (jint(1))) - (jint(((frame[1].f) / (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size))))))));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog$1_draw_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog$1:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_pix;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_in_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_in_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_pix;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 == ((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_curColor)) goto label_1;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_pix;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_arc_graphics_Pixmap_set_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_set_int_int_int])(ctx, sp[0].o, temp0, temp1, ((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[1].o))->F_curColor));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_texture;
	jint temp2 = frame[1].i;
	jint temp3 = frame[2].i;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_Pixmaps_drawPixel_arc_graphics_Texture_int_int_int(ctx, sp[0].o, temp2, temp3, ((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[1].o))->F_curColor));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_modified = (jint(1));
	}
label_1:;
	LINE_NUMBER(144);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog$1_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog$1:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[1].o))->F_texture;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(149);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(150);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_grid) == 0) goto label_4;
	}
	{
	LINE_NUMBER(154);
	jfloat temp0 = (jfloat)((func_mindustry_ui_dialogs_CanvasEditDialog$1_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_getWidth_R_float])(ctx, (frame[0].o));
	frame[1].f = (temp0 / (jfloat(((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size))));
	LINE_NUMBER(155);
	jfloat temp1 = (jfloat)((func_mindustry_ui_dialogs_CanvasEditDialog$1_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_getHeight_R_float])(ctx, (frame[0].o));
	frame[2].f = (temp1 / (jfloat(((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size))));
	LINE_NUMBER(156);
	frame[3].f = (jfloat(1));
	LINE_NUMBER(158);
	frame[4].i = (10);
	LINE_NUMBER(160);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat((frame[4].i))), (frame[1].f));
	frame[5].i = (jint((temp2 / (frame[1].f))));
	LINE_NUMBER(161);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat((frame[4].i))), (frame[2].f));
	frame[6].i = (jint((temp3 / (frame[2].f))));
	LINE_NUMBER(163);
	frame[7].i = (jint(0));
	}
label_12:;
	{
	if ((frame[7].i) > ((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size)) goto label_13;
	}
	{
	LINE_NUMBER(164);
	jfloat temp0 = jfloat((jint(((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + ((frame[1].f) * (jfloat((frame[7].i))))) - (frame[3].f)))));
	jfloat temp1 = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) - (frame[3].f);
	jfloat temp2 = jfloat(2);
	jfloat temp3 = (jfloat)((func_mindustry_ui_dialogs_CanvasEditDialog$1_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_getHeight_R_float])(ctx, (frame[0].o));
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp[2].f = temp2;
	sp[3].f = temp3;
	sp += 4;
	if ((frame[7].i) != ((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size)) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	sp -= 5;
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, sp[0].f, sp[1].f, sp[2].f, (sp[3].f + (jfloat(sp[4].i))));
	LINE_NUMBER(163);
	frame[7].i = ((frame[7].i) + (frame[5].i));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(167);
	frame[7].i = (jint(0));
	}
label_18:;
	{
	if ((frame[7].i) > ((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size)) goto label_4;
	}
	{
	LINE_NUMBER(168);
	jfloat temp0 = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) - (frame[3].f);
	jfloat temp1 = jfloat((jint(((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat((frame[7].i))) * (frame[2].f))) - (frame[3].f)))));
	jfloat temp2 = (jfloat)((func_mindustry_ui_dialogs_CanvasEditDialog$1_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_getWidth_R_float])(ctx, (frame[0].o));
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, temp0, temp1, temp2, (jfloat(2)));
	LINE_NUMBER(167);
	frame[7].i = ((frame[7].i) + (frame[6].i));
	goto label_18;
	}
label_4:;
	{
	LINE_NUMBER(172);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_21;
	}
	{
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_CanvasEditDialog$1_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(174);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), (jfloat(0)), -1)) < 0) goto label_21;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (jfloat(0)), -1)) < 0) goto label_21;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), 1)) >= 0) goto label_21;
	}
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height), 1)) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(175);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_round_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size)))));
	frame[2].f = temp0;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_round_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size)))));
	frame[3].f = temp1;
	LINE_NUMBER(177);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(6.0f)));
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, temp2);
	LINE_NUMBER(178);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(179);
	jfloat temp3 = (frame[2].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x);
	jfloat temp4 = (frame[3].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y);
	jfloat temp5 = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size)));
	jfloat temp6 = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(((jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK((frame[0].o)))->F_val$size)));
	jfloat temp7 = (jfloat)SM_arc_graphics_g2d_Lines_getStroke_R_float(ctx);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float_float(ctx, temp3, temp4, temp5, temp6, (temp7 - (jfloat(1))));
	LINE_NUMBER(181);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_21:;
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_CanvasEditDialog$1[] {
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
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog$1_draw,
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
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog$1_convertX_float_R_int,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog$1_convertY_float_R_int,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog$1_draw_int_int,
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
	{ "convertX", "(F)I" },
	{ "convertY", "(F)I" },
	{ "draw", "(II)V" },
};

static FieldMetadata fields[] {
	{ "lastX", &class_int, offsetof(mindustry_ui_dialogs_CanvasEditDialog$1, F_lastX), "I", 0 },
	{ "lastY", &class_int, offsetof(mindustry_ui_dialogs_CanvasEditDialog$1, F_lastY), "I", 0 },
	{ "stack", &class_arc_struct_IntSeq, offsetof(mindustry_ui_dialogs_CanvasEditDialog$1, F_stack), "Larc/struct/IntSeq;", 0 },
	{ "val$size", &class_int, offsetof(mindustry_ui_dialogs_CanvasEditDialog$1, F_val$size), "I", 4112 },
	{ "this$0", &class_mindustry_ui_dialogs_CanvasEditDialog, offsetof(mindustry_ui_dialogs_CanvasEditDialog$1, F_this$0), "Lmindustry/ui/dialogs/CanvasEditDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_CanvasEditDialog$1_mindustry_ui_dialogs_CanvasEditDialog_int, 0, "(Lmindustry/ui/dialogs/CanvasEditDialog;I)V", 0 },
	{ "convertX", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog$1_convertX_float_R_int, VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_convertX_float_R_int, "(F)I", 0 },
	{ "convertY", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog$1_convertY_float_R_int, VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_convertY_float_R_int, "(F)I", 0 },
	{ "draw", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog$1_draw_int_int, VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_draw_int_int, "(II)V", 0 },
	{ "draw", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog$1_draw, VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_draw, "()V", 1 },
};

Class class_mindustry_ui_dialogs_CanvasEditDialog$1{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/CanvasEditDialog$1",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(mindustry_ui_dialogs_CanvasEditDialog$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_CanvasEditDialog$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_CanvasEditDialog$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_CanvasEditDialog$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 124,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_CanvasEditDialog$1 = registerClass(&class_mindustry_ui_dialogs_CanvasEditDialog$1);

}

