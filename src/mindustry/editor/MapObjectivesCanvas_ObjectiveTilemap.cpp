#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap.h"
#include "arc/math/geom/Vec2.h"
#include "arc/func/Prov.h"
#include "arc/Input.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_invoke_arc_func_Prov_1.h"
#include "mindustry/game/MapObjectives_MapObjective.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_invoke_arc_func_Boolf_1.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile.h"
#include "java/util/Iterator.h"
#include "arc/scene/Group.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/editor/MapObjectivesCanvas.h"
#include "mindustry/editor/MapObjectivesCanvas_ObjectiveTilemap_ObjectiveTile_Connector.h"
#include "arc/struct/SnapshotSeq.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_WidgetGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) object;
	if (self->F_connecting)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_connecting)->clazz)->markFunction)((jobject) self->F_connecting, mark, depth + 1);
	if (self->F_moving)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moving)->clazz)->markFunction)((jobject) self->F_moving, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
}

void init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_mindustry_editor_MapObjectivesCanvas(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_ui_layout_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(140);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_setTransform_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_touchable_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_touchable_arc_func_Prov])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:draw", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(147);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validate])(ctx, (frame[0].o));
	LINE_NUMBER(148);
	jfloat temp0 = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width)) - (jfloat(1));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp1 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, (temp0 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp1, (-100));
	frame[1].i = temp2;
	jfloat temp3 = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height)) - (jfloat(1));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp4 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, (temp3 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	jint temp5 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp4, (-100));
	frame[2].i = temp5;
	LINE_NUMBER(149);
	jfloat temp6 = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width)) + (jfloat(1));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp7 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (temp6 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	jint temp8 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp7, (100));
	frame[3].i = temp8;
	jfloat temp9 = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height)) + (jfloat(1));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp10 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (temp9 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	jint temp11 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp10, (100));
	frame[4].i = temp11;
	LINE_NUMBER(150);
	jfloat temp12 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[5].f = (fmodf(temp12, ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	jfloat temp13 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[6].f = (fmodf(temp13, ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	LINE_NUMBER(152);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(3.0f)));
	LINE_NUMBER(153);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_darkestGray;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(155);
	frame[7].i = (frame[1].i);
	}
label_10:;
	{
	if ((frame[7].i) > (frame[3].i)) goto label_11;
	}
	{
	jfloat temp0 = frame[5].f;
	jfloat temp1 = jfloat((frame[7].i));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp0 + (temp1 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize));
	jfloat temp3 = jfloat((frame[2].i));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = temp3 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize);
	jfloat temp5 = frame[5].f;
	jfloat temp6 = jfloat((frame[7].i));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp7 = temp5 + (temp6 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize));
	jfloat temp8 = jfloat((frame[4].i));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp2, temp4, temp7, (temp8 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(156);
	frame[7].i = (frame[2].i);
	}
label_12:;
	{
	if ((frame[7].i) > (frame[4].i)) goto label_13;
	}
	{
	jfloat temp0 = jfloat((frame[1].i));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize);
	jfloat temp2 = frame[6].f;
	jfloat temp3 = jfloat((frame[7].i));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = temp2 + (temp3 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize));
	jfloat temp5 = jfloat((frame[3].i));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = temp5 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize);
	jfloat temp7 = frame[6].f;
	jfloat temp8 = jfloat((frame[7].i));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp1, temp4, temp6, (temp7 + (temp8 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize))));
	INST_IINC(7, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas_isQuerying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_isQuerying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(160);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_16;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[7].i = ((jint)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_queryX);
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[8].i = ((jint)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_queryY);
	goto label_20;
	}
label_16:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouse_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouse_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(165);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[9].o)))->F_x;
	jfloat temp1 = jfloat(5.0f);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp2 = temp0 - ((temp1 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)) / (jfloat(2)));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp2 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	frame[7].i = temp3;
	LINE_NUMBER(166);
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[9].o)))->F_y;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp5 = temp4 - ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp6 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, (temp5 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	frame[8].i = temp6;
	}
label_20:;
	{
	LINE_NUMBER(169);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(4.0f)));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas_isVisualPressed_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_isVisualPressed_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_24;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_metalGrayDark;
	goto label_25;
label_24:;
	{
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean])(ctx, (frame[0].o), (frame[7].i), (frame[8].i), (jobject(nullptr)));
	if (temp0 == 0) goto label_26;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
	goto label_25;
label_26:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
label_25:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha;
	LINE_NUMBER(170);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, temp0);
	LINE_NUMBER(175);
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp2 = jfloat((frame[7].i));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = temp1 + (temp2 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize));
	jfloat temp4 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = jfloat((frame[8].i));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp6 = temp4 + (temp5 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize));
	jfloat temp7 = jfloat(5.0f);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp8 = temp7 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize);
	jfloat temp9 = jfloat(2);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, temp3, temp6, temp8, (temp9 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	}
label_14:;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_moving;
	if (sp[0].o == nullptr) goto label_29;
	}
	{
	LINE_NUMBER(180);
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_moving;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp2 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp1 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	frame[7].i = temp2;
	jfloat temp5 = jfloat(temp2);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[9].f = (temp0 + (temp5 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	LINE_NUMBER(181);
	jfloat temp6 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_moving;
	jfloat temp7 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp8 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp7 / ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	frame[8].i = temp8;
	jfloat temp11 = jfloat(temp8);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[10].f = (temp6 + (temp11 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	jint temp12 = frame[7].i;
	jint temp13 = frame[8].i;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_moving;
	jint temp14 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean])(ctx, sp[0].o, temp12, temp13, sp[1].o);
	if (temp14 == 0) goto label_35;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
	goto label_36;
label_35:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
label_36:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat(0.5f)) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha);
	LINE_NUMBER(183);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, temp0);
	LINE_NUMBER(188);
	jfloat temp1 = frame[9].f;
	jfloat temp2 = frame[10].f;
	jfloat temp3 = jfloat(5.0f);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp4 = temp3 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize);
	jfloat temp5 = jfloat(2);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, temp1, temp2, temp4, (temp5 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize)));
	}
label_29:;
	{
	LINE_NUMBER(191);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(192);
	M_arc_scene_ui_layout_WidgetGroup_draw(ctx, (frame[0].o));
	LINE_NUMBER(194);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_as_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_as_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(197);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(198);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	if (sp[0].o == nullptr) goto label_44;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	sp[1].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	sp[3].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	jfloat temp0 = (jfloat)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[3].o))->F_pointX;
	sp[3].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, temp0, ((jfloat)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[3].o))->F_pointY));
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_hit_float_float_boolean_R_arc_scene_Element])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[9].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[9].o)))->F_y), (jint(1)));
	frame[11].o = sp[0].o;
	if ((isInstance(ctx, (frame[11].o), &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector)) == 0) goto label_44;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector, (frame[11].o)));
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_canConnectTo_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_canConnectTo_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_R_boolean])(ctx, sp[0].o, (frame[10].o));
	if (temp0 == 0) goto label_44;
	}
	INST_ALOAD(10);
	INST_ASTORE(8);
label_44:;
	{
	LINE_NUMBER(203);
	frame[9].i = (jint(0));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[7].o));
	frame[10].o = sp[0].o;
	}
label_49:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_50;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, sp[0].o));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[11].o)))->F_obj;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[0].o))->F_parents;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	}
label_52:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[12].o)))(ctx, (frame[12].o));
	if (temp0 == 0) goto label_53;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[12].o)))(ctx, (frame[12].o));
	frame[13].o = (checkCast(ctx, &class_mindustry_game_MapObjectives$MapObjective, sp[0].o));
	LINE_NUMBER(206);
	sp[0].o = frame[7].o;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[13].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[14].o = (checkCast(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, sp[0].o));
	LINE_NUMBER(208);
	if ((frame[14].o) != nullptr) goto label_56;
	}
	goto label_52;
label_56:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[14].o)))->F_conChildren;
	frame[15].o = sp[0].o;
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[11].o)))->F_conParent;
	frame[16].o = sp[0].o;
	LINE_NUMBER(214);
	if ((frame[8].o) == nullptr) goto label_59;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_findParent) == 0) goto label_60;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	if (sp[0].o != (frame[16].o)) goto label_60;
	}
	{
	if ((frame[8].o) == (frame[15].o)) goto label_61;
	}
label_60:;
	{
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_findParent) != 0) goto label_59;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	if (sp[0].o != (frame[15].o)) goto label_59;
	}
	{
	if ((frame[8].o) != (frame[16].o)) goto label_59;
	}
label_61:;
	{
	LINE_NUMBER(218);
	frame[9].i = (jint(1));
	LINE_NUMBER(219);
	goto label_52;
	}
label_59:;
	{
	LINE_NUMBER(223);
	sp[0].o = frame[15].o;
	sp[1].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getWidth_R_float) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getWidth_R_float])(ctx, (frame[15].o));
	jfloat temp1 = temp0 / (jfloat(2));
	jfloat temp2 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getHeight_R_float) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getHeight_R_float])(ctx, (frame[15].o));
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, temp1, (temp2 / (jfloat(2))));
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	frame[17].o = sp[0].o;
	LINE_NUMBER(224);
	sp[0].o = frame[16].o;
	sp[1].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp3 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getWidth_R_float) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getWidth_R_float])(ctx, (frame[16].o));
	jfloat temp4 = temp3 / (jfloat(2));
	jfloat temp5 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getHeight_R_float) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getHeight_R_float])(ctx, (frame[16].o));
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, temp4, (temp5 / (jfloat(2))));
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	frame[18].o = sp[0].o;
	LINE_NUMBER(226);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_drawCurve_boolean_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_drawCurve_boolean_float_float_float_float])(ctx, (frame[0].o), (jint(0)), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[17].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[17].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[18].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[18].o)))->F_y));
	LINE_NUMBER(227);
	goto label_52;
	}
label_53:;
	LINE_NUMBER(228);
	goto label_49;
label_50:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	if (sp[0].o == nullptr) goto label_66;
	}
	{
	LINE_NUMBER(232);
	if ((frame[8].o) != nullptr) goto label_68;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	sp[1].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	sp[3].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	jfloat temp0 = (jfloat)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[3].o))->F_pointX;
	sp[3].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, temp0, ((jfloat)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[3].o))->F_pointY));
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	goto label_70;
	}
label_68:;
	{
	LINE_NUMBER(234);
	sp[0].o = frame[8].o;
	sp[1].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getWidth_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getWidth_R_float])(ctx, (frame[8].o));
	jfloat temp1 = temp0 / (jfloat(2));
	jfloat temp2 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getHeight_R_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getHeight_R_float])(ctx, (frame[8].o));
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, temp1, (temp2 / (jfloat(2))));
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_70:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	frame[10].o = sp[0].o;
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	sp[1].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v2;
	sp[3].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	jfloat temp2 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getWidth_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getWidth_R_float])(ctx, sp[3].o);
	jfloat temp3 = temp2 / (jfloat(2));
	sp[3].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	jfloat temp4 = (jfloat)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getHeight_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_getHeight_R_float])(ctx, sp[3].o);
	sp[2].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[2].o, temp3, (temp4 / (jfloat(2))));
	sp[0].o = (jobject)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	frame[11].o = sp[0].o;
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_findParent) == 0) goto label_74;
	}
	INST_ALOAD(10);
	goto label_75;
label_74:;
	INST_ALOAD(11);
label_75:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(240);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_connecting;
	if (((jint)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector *) NULL_CHECK(sp[0].o))->F_findParent) == 0) goto label_77;
	}
	INST_ALOAD(11);
	goto label_78;
label_77:;
	INST_ALOAD(10);
label_78:;
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	LINE_NUMBER(242);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_drawCurve_boolean_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_drawCurve_boolean_float_float_float_float])(ctx, (frame[0].o), (frame[9].i), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[12].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_y));
	}
label_66:;
	{
	LINE_NUMBER(245);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_drawCurve_boolean_float_float_float_float(jcontext ctx, jobject self, jbool param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[29];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:drawCurve", 29 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(249);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(4.0f)));
	LINE_NUMBER(250);
	if ((frame[1].i) == 0) goto label_2;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
	goto label_3;
label_2:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_3:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(252);
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, (frame[2].f), (frame[3].f), (jfloat(8.0f)), (jfloat(45.0f)));
	LINE_NUMBER(253);
	SM_arc_graphics_g2d_Fill_square_float_float_float_float(ctx, (frame[4].f), (frame[5].f), (jfloat(8.0f)), (jfloat(45.0f)));
	LINE_NUMBER(255);
	jfloat temp0 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[2].f) - (frame[4].f)));
	frame[6].f = (temp0 / (jfloat(2)));
	LINE_NUMBER(256);
	frame[7].f = ((frame[2].f) + (frame[6].f));
	LINE_NUMBER(257);
	frame[8].f = ((frame[4].f) - (frame[6].f));
	LINE_NUMBER(259);
	jint temp1 = (jint)SM_arc_math_Mathf_equal_float_float_float_R_boolean(ctx, (frame[3].f), (frame[5].f), (jfloat(0.1f)));
	if (temp1 == 0) goto label_10;
	}
	{
	LINE_NUMBER(260);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(262);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[7].f;
	jfloat temp3 = frame[3].f;
	jfloat temp4 = frame[8].f;
	jfloat temp5 = frame[5].f;
	jfloat temp6 = frame[4].f;
	jfloat temp7 = frame[5].f;
	jint temp8 = jint(4);
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	jint temp10 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp8, (jint((temp9 / (jfloat(4.0f))))));
	SM_arc_graphics_g2d_Lines_curve_float_float_float_float_float_float_float_float_int(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp10);
	}
label_12:;
	{
	LINE_NUMBER(265);
	frame[9].f = ((fmodf((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(240.0f)))) / (jfloat(240.0f)));
	LINE_NUMBER(267);
	frame[10].f = ((frame[9].f) * (frame[9].f));
	LINE_NUMBER(268);
	frame[11].f = ((frame[9].f) * (frame[10].f));
	LINE_NUMBER(269);
	frame[12].f = ((jfloat(1)) - (frame[9].f));
	LINE_NUMBER(270);
	frame[13].f = (((frame[12].f) * (frame[12].f)) * (frame[12].f));
	LINE_NUMBER(271);
	frame[14].f = (((((frame[13].f) * (frame[2].f)) + (((((jfloat(3.0f)) * (frame[9].f)) * (frame[12].f)) * (frame[12].f)) * (frame[7].f))) + ((((jfloat(3.0f)) * (frame[10].f)) * (frame[12].f)) * (frame[8].f))) + ((frame[11].f) * (frame[4].f)));
	LINE_NUMBER(272);
	frame[15].f = (((((frame[13].f) * (frame[3].f)) + (((((jfloat(3.0f)) * (frame[9].f)) * (frame[12].f)) * (frame[12].f)) * (frame[3].f))) + ((((jfloat(3.0f)) * (frame[10].f)) * (frame[12].f)) * (frame[5].f))) + ((frame[11].f) * (frame[5].f)));
	LINE_NUMBER(274);
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, (frame[14].f), (frame[15].f), (jfloat(6.0f)));
	LINE_NUMBER(276);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:validPlace", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(280);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat(5.0f)), (jfloat(2)));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(-1,000000e-03f)));
	LINE_NUMBER(282);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(200.0f)), (jfloat(200.0f)));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp0 = (jint)((func_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(287);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile)) == 0) goto label_7;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, (frame[5].o)));
	if ((frame[6].o) == (frame[3].o)) goto label_7;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r2;
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[6].o)))->F_obj;
	jfloat temp0 = jfloat(((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[1].o))->F_editorX));
	sp[1].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[6].o)))->F_obj;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, (jfloat(((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK(sp[1].o))->F_editorY))), (jfloat(5.0f)), (jfloat(2)));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp1 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp1 == 0) goto label_7;
	}
	{
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return (jint(0));
	}
label_7:;
	LINE_NUMBER(290);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_mindustry_game_MapObjectives$MapObjective_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:createTile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(296);
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_R_boolean])(ctx, (frame[0].o), ((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[1].o)))->F_editorX), ((jint)((mindustry_game_MapObjectives$MapObjective *) NULL_CHECK((frame[1].o)))->F_editorY), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:createTile", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(300);
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_boolean_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:createTile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(304);
	if ((frame[4].i) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jobject(nullptr)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(306);
	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile);
	init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_mindustry_game_MapObjectives$MapObjective_int_int(ctx, sp[0].o, (frame[0].o), (frame[3].o), (frame[1].i), (frame[2].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(307);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pack) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pack])(ctx, (frame[5].o));
	LINE_NUMBER(309);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_moveTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:moveTile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(315);
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(317);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pos_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_pos_int_int])(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_removeTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:removeTile", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(323);
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_isDescendantOf_arc_scene_Element_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_remove_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_remove_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_clearTiles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:clearTiles", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	((func_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:getPrefWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	jfloat temp0 = jfloat(100.0f);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:getPrefHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(338);
	jfloat temp0 = jfloat(100.0f);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap *) NULL_CHECK((frame[0].o)))->F_this$0;
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_editor_MapObjectivesCanvas *) NULL_CHECK(sp[0].o))->F_unitSize));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_lambda$draw$0_mindustry_game_MapObjectives$MapObjective_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:lambda$draw$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile *) NULL_CHECK((frame[1].o)))->F_obj;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_lambda$new$0_mindustry_editor_MapObjectivesCanvas_R_arc_scene_event_Touchable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_mindustry_editor_MapObjectivesCanvas_isQuerying_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_MapObjectivesCanvas_isQuerying_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_scene_event_Touchable(ctx);
	(sp++)->o = SF_arc_scene_event_Touchable_disabled;
	goto label_2;
label_1:;
	clinit_arc_scene_event_Touchable(ctx);
	(sp++)->o = SF_arc_scene_event_Touchable_childrenOnly;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field connecting
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field moving
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_draw,
	(void *) M_arc_scene_Group_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_Group_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Group_setScene_arc_scene_Scene,
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
	(void *) M_arc_scene_ui_layout_WidgetGroup_sizeChanged,
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
	(void *) M_arc_scene_ui_layout_WidgetGroup_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_getMinHeight_R_float,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefWidth_R_float,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_layout,
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
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_ui_layout_WidgetGroup_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_Group_clearChildren,
	(void *) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Group_swapActor_int_int_R_boolean,
	(void *) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq,
	(void *) M_arc_scene_Group_hasChildren_R_boolean,
	(void *) M_arc_scene_Group_isTransform_R_boolean,
	(void *) M_arc_scene_Group_setTransform_boolean,
	(void *) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Group_toString_java_lang_StringBuilder_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_arc_scene_Group_boolean,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_drawCurve_boolean_float_float_float_float,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_mindustry_game_MapObjectives$MapObjective_R_boolean,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_R_boolean,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_boolean_R_boolean,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_moveTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_int_int_R_boolean,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_removeTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile,
	(void *) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_clearTiles,
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
	{ "setCullingArea", "(Larc/math/geom/Rect;)V" },
	{ "drawChildren", "()V" },
	{ "computeTransform", "()Larc/math/Mat;" },
	{ "applyTransform", "(Larc/math/Mat;)V" },
	{ "resetTransform", "()V" },
	{ "getCullingArea", "()Larc/math/geom/Rect;" },
	{ "childrenChanged", "()V" },
	{ "forEach", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;" },
	{ "fill", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addChild", "(Larc/scene/Element;)V" },
	{ "addChildAt", "(ILarc/scene/Element;)V" },
	{ "addChildBefore", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "addChildAfter", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "removeChild", "(Larc/scene/Element;)Z" },
	{ "removeChild", "(Larc/scene/Element;Z)Z" },
	{ "clearChildren", "()V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Larc/scene/Element;Larc/scene/Element;)Z" },
	{ "getChildren", "()Larc/struct/SnapshotSeq;" },
	{ "hasChildren", "()Z" },
	{ "isTransform", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "localToDescendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "setLayoutEnabled", "(Larc/scene/Group;Z)V" },
	{ "drawCurve", "(ZFFFF)V" },
	{ "validPlace", "(IILmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;)Z" },
	{ "createTile", "(Lmindustry/game/MapObjectives$MapObjective;)Z" },
	{ "createTile", "(IILmindustry/game/MapObjectives$MapObjective;)Z" },
	{ "createTile", "(IILmindustry/game/MapObjectives$MapObjective;Z)Z" },
	{ "moveTile", "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;II)Z" },
	{ "removeTile", "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;)V" },
	{ "clearTiles", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile,
};

static FieldMetadata fields[] {
	{ "connecting", &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap, F_connecting), "Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile$Connector;", 4 },
	{ "moving", &class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap, F_moving), "Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;", 4 },
	{ "this$0", &class_mindustry_editor_MapObjectivesCanvas, offsetof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap, F_this$0), "Lmindustry/editor/MapObjectivesCanvas;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_mindustry_editor_MapObjectivesCanvas, 0, "(Lmindustry/editor/MapObjectivesCanvas;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_draw, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_draw, "()V", 1 },
	{ "drawCurve", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_drawCurve_boolean_float_float_float_float, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_drawCurve_boolean_float_float_float_float, "(ZFFFF)V", 4 },
	{ "validPlace", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_validPlace_int_int_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean, "(IILmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;)Z", 1 },
	{ "createTile", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_mindustry_game_MapObjectives$MapObjective_R_boolean, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_mindustry_game_MapObjectives$MapObjective_R_boolean, "(Lmindustry/game/MapObjectives$MapObjective;)Z", 1 },
	{ "createTile", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_R_boolean, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_R_boolean, "(IILmindustry/game/MapObjectives$MapObjective;)Z", 1 },
	{ "createTile", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_boolean_R_boolean, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_createTile_int_int_mindustry_game_MapObjectives$MapObjective_boolean_R_boolean, "(IILmindustry/game/MapObjectives$MapObjective;Z)Z", 1 },
	{ "moveTile", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_moveTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_int_int_R_boolean, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_moveTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_int_int_R_boolean, "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;II)Z", 1 },
	{ "removeTile", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_removeTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_removeTile_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile, "(Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;)V", 1 },
	{ "clearTiles", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_clearTiles, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_clearTiles, "()V", 1 },
	{ "getPrefWidth", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefWidth_R_float, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefHeight_R_float, VTABLE_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_getPrefHeight_R_float, "()F", 1 },
	{ "lambda$draw$0", (intptr_t) SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_lambda$draw$0_mindustry_game_MapObjectives$MapObjective_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile_R_boolean, 0, "(Lmindustry/game/MapObjectives$MapObjective;Lmindustry/editor/MapObjectivesCanvas$ObjectiveTilemap$ObjectiveTile;)Z", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap_lambda$new$0_mindustry_editor_MapObjectivesCanvas_R_arc_scene_event_Touchable, 0, "(Lmindustry/editor/MapObjectivesCanvas;)Larc/scene/event/Touchable;", 4106 },
};

Class class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap{
		.nativeName = (intptr_t) "mindustry/editor/MapObjectivesCanvas$ObjectiveTilemap",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_WidgetGroup,
		.size = sizeof(mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap),
		.classVtable = (intptr_t) vtable_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_editor_MapObjectivesCanvas,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 159,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap = registerClass(&class_mindustry_editor_MapObjectivesCanvas$ObjectiveTilemap);

}

