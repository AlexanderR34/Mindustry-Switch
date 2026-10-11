#include "mindustry/logic/LCanvas_JumpCurve.h"
#include "arc/math/geom/Vec2.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/util/Tmp.h"
#include "mindustry/logic/LCanvas_DragLayout.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/logic/LCanvas_JumpCurve.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Tex.h"
#include "arc/Core.h"
#include "arc/scene/Group.h"
#include "arc/util/Time.h"
#include "arc/scene/event/ClickListener.h"
#include "mindustry/logic/LCanvas_JumpButton.h"
#include "mindustry/logic/LCanvas.h"
#include "arc/Graphics.h"
#include "arc/math/geom/Intersector.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/ui/ScrollPane.h"
#include "mindustry/logic/LCanvas_StatementElem.h"

extern "C" {


void mark_mindustry_logic_LCanvas$JumpCurve(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LCanvas$JumpCurve *) object;
	if (self->F_button)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_button)->clazz)->markFunction)((jobject) self->F_button, mark, depth + 1);
}

void clinit_mindustry_logic_LCanvas$JumpCurve(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
}

void init_mindustry_logic_LCanvas$JumpCurve_mindustry_logic_LCanvas$JumpButton(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$JumpCurve:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCanvas$JumpCurve(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(638);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(631);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_predHeight = (jint(0));
	LINE_NUMBER(632);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_markedDone = (jint(0));
	LINE_NUMBER(633);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_jumpUIBegin = (jint(0));
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_jumpUIEnd = (jint(0));
	LINE_NUMBER(634);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_flipped = (jint(0));
	LINE_NUMBER(636);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_uiHeight = (jfloat(60.0f));
	LINE_NUMBER(639);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button = (jref) (frame[1].o);
	LINE_NUMBER(640);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$JumpCurve_setSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$JumpCurve:setSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(644);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(645);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	LINE_NUMBER(646);
	frame[2].f = (-(frame[2].f));
	LINE_NUMBER(647);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_invertedHeight = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(649);
	M_arc_scene_Element_setSize_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$JumpCurve_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$JumpCurve:act", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(654);
	M_arc_scene_Element_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(657);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_invertedHeight = (jint(0));
	LINE_NUMBER(658);
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_statements;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[0].o))->F_jumps;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(659);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LCanvas$JumpButton_getWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LCanvas$JumpButton_getWidth_R_float])(ctx, sp[1].o);
	jfloat temp1 = temp0 / (jfloat(2));
	sp[1].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	jfloat temp2 = (jfloat)((func_mindustry_logic_LCanvas$JumpButton_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LCanvas$JumpButton_getHeight_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (temp2 / (jfloat(2))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(660);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$JumpButton_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$JumpButton_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(661);
	((func_mindustry_logic_LCanvas$JumpCurve_setPosition_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$JumpCurve_setPosition_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y));
	LINE_NUMBER(662);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_to;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	if (((jint)((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_selecting) == 0) goto label_7;
	}
	{
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_hovered;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_to;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_Element, sp[0].o);
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(663);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(664);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getWidth_R_float])(ctx, (frame[4].o));
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getHeight_R_float])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (temp1 / (jfloat(2))));
	LINE_NUMBER(665);
	sp[0].o = (jobject)((func_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[4].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(666);
	((func_mindustry_logic_LCanvas$JumpCurve_setSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$JumpCurve_setSize_float_float])(ctx, (frame[0].o), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x) - ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x)), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y) - ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y)));
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	if (((jint)((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_selecting) == 0) goto label_15;
	}
	{
	LINE_NUMBER(668);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	jfloat temp0 = (jfloat)((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[1].o))->F_mx;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	((func_mindustry_logic_LCanvas$JumpCurve_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$JumpCurve_setSize_float_float])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[1].o))->F_my));
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(670);
	((func_mindustry_logic_LCanvas$JumpCurve_setSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$JumpCurve_setSize_float_float])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)));
	}
label_14:;
	{
	LINE_NUMBER(673);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_listener;
	jint temp0 = (jint)((func_arc_scene_event_ClickListener_isOver_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ClickListener_isOver_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(674);
	((func_mindustry_logic_LCanvas$JumpCurve_toFront) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$JumpCurve_toFront])(ctx, (frame[0].o));
	}
label_17:;
	LINE_NUMBER(676);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$JumpCurve_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$JumpCurve:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(680);
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height), (jfloat(0)), -1)) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(681);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width;
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_invertedHeight) != 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height;
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].f, sp[2].f);
	frame[1].o = sp[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v2;
	jfloat temp0 = jfloat(0);
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_invertedHeight) != 0) goto label_5;
	}
	INST_FCONST(0);
	goto label_6;
label_5:;
	INST_ALOAD(0);
	sp[-1].f = ((arc_scene_Element *) NULL_CHECK(sp[-1].o))->F_height;
label_6:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].f, sp[2].f);
	frame[2].o = sp[0].o;
	LINE_NUMBER(683);
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_canvas;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_pane;
	frame[3].o = sp[0].o;
	LINE_NUMBER(684);
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$JumpCurve_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$JumpCurve_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	LINE_NUMBER(685);
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$JumpCurve_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$JumpCurve_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[3].o), (frame[1].o));
	LINE_NUMBER(687);
	((func_mindustry_logic_LCanvas$JumpCurve_drawCurve_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$JumpCurve_drawCurve_float_float_float_float])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(689);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LCanvas$JumpButton_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$JumpButton_getWidth_R_float])(ctx, sp[0].o);
	frame[4].f = temp0;
	LINE_NUMBER(690);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(691);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_logicNode;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) + ((frame[4].f) * (jfloat(0.75f)))), (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - ((frame[4].f) / (jfloat(2)))), (-(frame[4].f)), (frame[4].f));
	LINE_NUMBER(692);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(693);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$JumpCurve_drawCurve_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$JumpCurve:drawCurve", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(696);
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(697);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(700);
	sp[0].o = frame[0].o;
	LINE_NUMBER(701);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp1 == 0) goto label_4;
	}
	(sp++)->f = jfloat(20.0f);
	goto label_5;
label_4:;
	(sp++)->f = jfloat(40.0f);
label_5:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, sp[0].f);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_6;
	}
	(sp++)->f = jfloat(8.0f);
	goto label_7;
label_6:;
	(sp++)->f = jfloat(10.0f);
label_7:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, sp[2].f);
	jfloat temp1 = sp[1].f + (temp0 * (jfloat(((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_predHeight))));
	jfloat temp2 = (jfloat)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_uiHeight;
	jfloat temp3 = jfloat(0.9f);
	clinit_arc_util_Time(ctx);
	jfloat temp4 = (jfloat)SF_arc_util_Time_delta;
	LINE_NUMBER(703);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, temp3, temp4);
	LINE_NUMBER(700);
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp1, temp2, temp5);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK(sp[0].o))->F_uiHeight = temp6;
	LINE_NUMBER(707);
	if ((floatCompare((frame[4].f), (frame[2].f), -1)) != 0) goto label_11;
	}
	INST_FCONST(0);
	goto label_12;
label_11:;
	{
	if ((floatCompare((frame[4].f), (frame[2].f), -1)) <= 0) goto label_13;
	}
	INST_FCONST(1);
	goto label_12;
label_13:;
	(sp++)->f = jfloat(-1.0f);
label_12:;
	{
	sp -= 1;
	frame[5].f = ((sp[0].f * ((jfloat)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_uiHeight)) * (jfloat(0.5f)));
	LINE_NUMBER(709);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = (frame[1].f) + ((jfloat)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_uiHeight);
	jfloat temp3 = (frame[2].f) + (frame[5].f);
	jfloat temp4 = frame[3].f;
	jfloat temp5 = frame[4].f;
	jfloat temp6 = (frame[1].f) + ((jfloat)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_uiHeight);
	jfloat temp7 = (frame[4].f) - (frame[5].f);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	jint temp8 = (jint)SM_arc_math_geom_Intersector_intersectSegments_float_float_float_float_float_float_float_float_arc_math_geom_Vec2_R_boolean(ctx, temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, sp[0].o);
	if (temp8 == 0) goto label_15;
	}
	{
	LINE_NUMBER(710);
	SM_arc_graphics_g2d_Lines_beginLine(ctx);
	LINE_NUMBER(711);
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, (frame[1].f), (frame[2].f));
	LINE_NUMBER(712);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(713);
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, (frame[3].f), (frame[4].f));
	LINE_NUMBER(714);
	SM_arc_graphics_g2d_Lines_endLine(ctx);
	goto label_21;
	}
label_15:;
	{
	LINE_NUMBER(716);
	SM_arc_graphics_g2d_Lines_beginLine(ctx);
	LINE_NUMBER(717);
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, (frame[1].f), (frame[2].f));
	LINE_NUMBER(718);
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, ((frame[1].f) + ((jfloat)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_uiHeight)), ((frame[2].f) + (frame[5].f)));
	LINE_NUMBER(719);
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, ((frame[1].f) + ((jfloat)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_uiHeight)), ((frame[4].f) - (frame[5].f)));
	LINE_NUMBER(720);
	SM_arc_graphics_g2d_Lines_linePoint_float_float(ctx, (frame[3].f), (frame[4].f));
	LINE_NUMBER(721);
	SM_arc_graphics_g2d_Lines_endLine(ctx);
	}
label_21:;
	LINE_NUMBER(723);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$JumpCurve_prepareHeight(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$JumpCurve:prepareHeight", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_to;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(727);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_markedDone = (jint(1));
	LINE_NUMBER(728);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_predHeight = (jint(0));
	LINE_NUMBER(729);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_flipped = (jint(0));
	LINE_NUMBER(730);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(2147483647);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK(sp[1].o))->F_jumpUIEnd = temp0;
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK(sp[0].o))->F_jumpUIBegin = temp0;
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(732);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_markedDone = (jint(0));
	LINE_NUMBER(733);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_elem;
	frame[1].i = ((jint)((mindustry_logic_LCanvas$StatementElem *) NULL_CHECK(sp[0].o))->F_index);
	LINE_NUMBER(734);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_button;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$JumpButton *) NULL_CHECK(sp[0].o))->F_to;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[2].i = ((jint)((mindustry_logic_LCanvas$StatementElem *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LCanvas$StatementElem, sp[0].o))))->F_index);
	LINE_NUMBER(735);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) < (frame[2].i)) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK(sp[0].o))->F_flipped = sp[1].i;
	LINE_NUMBER(736);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK(sp[0].o))->F_jumpUIBegin = temp0;
	LINE_NUMBER(737);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK(sp[0].o))->F_jumpUIEnd = temp1;
	}
label_6:;
	LINE_NUMBER(740);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LCanvas$JumpCurve[] {
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
	(void *) M_mindustry_logic_LCanvas$JumpCurve_draw,
	(void *) M_mindustry_logic_LCanvas$JumpCurve_act_float,
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
	(void *) M_mindustry_logic_LCanvas$JumpCurve_setSize_float_float,
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
	(void *) M_mindustry_logic_LCanvas$JumpCurve_drawCurve_float_float_float_float,
	(void *) M_mindustry_logic_LCanvas$JumpCurve_prepareHeight,
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
	{ "drawCurve", "(FFFF)V" },
	{ "prepareHeight", "()V" },
};

static FieldMetadata fields[] {
	{ "button", &class_mindustry_logic_LCanvas$JumpButton, offsetof(mindustry_logic_LCanvas$JumpCurve, F_button), "Lmindustry/logic/LCanvas$JumpButton;", 1 },
	{ "invertedHeight", &class_boolean, offsetof(mindustry_logic_LCanvas$JumpCurve, F_invertedHeight), "Z", 2 },
	{ "predHeight", &class_int, offsetof(mindustry_logic_LCanvas$JumpCurve, F_predHeight), "I", 1 },
	{ "markedDone", &class_boolean, offsetof(mindustry_logic_LCanvas$JumpCurve, F_markedDone), "Z", 1 },
	{ "jumpUIBegin", &class_int, offsetof(mindustry_logic_LCanvas$JumpCurve, F_jumpUIBegin), "I", 1 },
	{ "jumpUIEnd", &class_int, offsetof(mindustry_logic_LCanvas$JumpCurve, F_jumpUIEnd), "I", 1 },
	{ "flipped", &class_boolean, offsetof(mindustry_logic_LCanvas$JumpCurve, F_flipped), "Z", 1 },
	{ "uiHeight", &class_float, offsetof(mindustry_logic_LCanvas$JumpCurve, F_uiHeight), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LCanvas$JumpCurve_mindustry_logic_LCanvas$JumpButton, 0, "(Lmindustry/logic/LCanvas$JumpButton;)V", 1 },
	{ "setSize", (intptr_t) M_mindustry_logic_LCanvas$JumpCurve_setSize_float_float, VTABLE_mindustry_logic_LCanvas$JumpCurve_setSize_float_float, "(FF)V", 1 },
	{ "act", (intptr_t) M_mindustry_logic_LCanvas$JumpCurve_act_float, VTABLE_mindustry_logic_LCanvas$JumpCurve_act_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_mindustry_logic_LCanvas$JumpCurve_draw, VTABLE_mindustry_logic_LCanvas$JumpCurve_draw, "()V", 1 },
	{ "drawCurve", (intptr_t) M_mindustry_logic_LCanvas$JumpCurve_drawCurve_float_float_float_float, VTABLE_mindustry_logic_LCanvas$JumpCurve_drawCurve_float_float_float_float, "(FFFF)V", 1 },
	{ "prepareHeight", (intptr_t) M_mindustry_logic_LCanvas$JumpCurve_prepareHeight, VTABLE_mindustry_logic_LCanvas$JumpCurve_prepareHeight, "()V", 1 },
};

Class class_mindustry_logic_LCanvas$JumpCurve{
		.nativeName = (intptr_t) "mindustry/logic/LCanvas$JumpCurve",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(mindustry_logic_LCanvas$JumpCurve),
		.classVtable = (intptr_t) vtable_mindustry_logic_LCanvas$JumpCurve,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LCanvas$JumpCurve,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LCanvas$JumpCurve,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LCanvas,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 123,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LCanvas$JumpCurve = registerClass(&class_mindustry_logic_LCanvas$JumpCurve);

}

