#include "mindustry/game/MapObjectives_LineMarker.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/logic/LMarkerControl.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/LightRenderer.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/game/MapObjectives_PosMarker.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/MapObjectives_LineMarker.h"
#include "java/lang/Enum.h"
#include "mindustry/game/MapObjectives_1.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/game/MapObjectives_TilePos.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/Vars.h"
#include "java/lang/Double.h"

extern "C" {


void mark_mindustry_game_MapObjectives$LineMarker(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_game_MapObjectives$PosMarker(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_MapObjectives$LineMarker *) object;
	if (self->F_endPos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_endPos)->clazz)->markFunction)((jobject) self->F_endPos, mark, depth + 1);
	if (self->F_color1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color1)->clazz)->markFunction)((jobject) self->F_color1, mark, depth + 1);
	if (self->F_color2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color2)->clazz)->markFunction)((jobject) self->F_color2, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$LineMarker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$PosMarker(ctx);
}

void init_mindustry_game_MapObjectives$LineMarker_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$LineMarker:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$LineMarker(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(1170);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1164);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK(sp[0].o))->F_endPos = (jref) sp[1].o;
	LINE_NUMBER(1165);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(1));
	LINE_NUMBER(1166);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(1167);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK(sp[0].o))->F_color1 = (jref) sp[1].o;
	LINE_NUMBER(1168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK(sp[0].o))->F_color2 = (jref) sp[1].o;
	LINE_NUMBER(1171);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (frame[5].f);
	LINE_NUMBER(1172);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(1173);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f), (frame[4].f));
	LINE_NUMBER(1174);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$LineMarker_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$LineMarker:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$LineMarker(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(1176);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1164);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK(sp[0].o))->F_endPos = (jref) sp[1].o;
	LINE_NUMBER(1165);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(1));
	LINE_NUMBER(1166);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(1167);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK(sp[0].o))->F_color1 = (jref) sp[1].o;
	LINE_NUMBER(1168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK(sp[0].o))->F_color2 = (jref) sp[1].o;
	LINE_NUMBER(1177);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(1178);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f), (frame[4].f));
	LINE_NUMBER(1179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$LineMarker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$LineMarker:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$LineMarker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1181);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1164);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK(sp[0].o))->F_endPos = (jref) sp[1].o;
	LINE_NUMBER(1165);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(1));
	LINE_NUMBER(1166);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(1167);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK(sp[0].o))->F_color1 = (jref) sp[1].o;
	LINE_NUMBER(1168);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK(sp[0].o))->F_color2 = (jref) sp[1].o;
	LINE_NUMBER(1181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$LineMarker_draw_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$LineMarker:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	auto marker = (mindustry_game_MapObjectives$LineMarker *) self;
	if (!marker->parent.F_pos) {
		clinit_arc_math_geom_Vec2(ctx);
		marker->parent.F_pos = (arc_math_geom_Vec2 *) gcAlloc(ctx, &class_arc_math_geom_Vec2);
		init_arc_math_geom_Vec2(ctx, (jobject) marker->parent.F_pos);
	}
	if (!marker->F_endPos) {
		clinit_arc_math_geom_Vec2(ctx);
		marker->F_endPos = (arc_math_geom_Vec2 *) gcAlloc(ctx, &class_arc_math_geom_Vec2);
		init_arc_math_geom_Vec2(ctx, (jobject) marker->F_endPos);
	}
	if (!marker->F_color1) {
		clinit_arc_graphics_Color(ctx);
		marker->F_color1 = (arc_graphics_Color *) SF_arc_graphics_Color_white;
	}
	if (!marker->F_color2) {
		clinit_arc_graphics_Color(ctx);
		marker->F_color2 = (arc_graphics_Color *) SF_arc_graphics_Color_white;
	}
	LINE_NUMBER(1185);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_drawLayer));
	LINE_NUMBER(1186);
	if (((jint)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_outline) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1187);
	jfloat temp0 = (((jfloat)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_stroke) + (jfloat(2))) * (frame[1].f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(1188);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, temp1, temp2, temp3, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	}
label_2:;
	{
	LINE_NUMBER(1191);
	jfloat temp0 = ((jfloat)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_stroke) * (frame[1].f);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(1192);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_color1;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_color2;
	SM_arc_graphics_g2d_Lines_line_float_float_arc_graphics_Color_float_float_arc_graphics_Color(ctx, temp1, temp2, sp[0].o, temp3, temp4, sp[1].o);
	LINE_NUMBER(1193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$LineMarker_drawLight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$LineMarker:drawLight", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1197);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_lights;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp4 = (jfloat)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_stroke;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_color1;
	sp[2].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_color1;
	((func_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LightRenderer_line_float_float_float_float_float_arc_graphics_Color_float])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, sp[1].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_a));
	LINE_NUMBER(1198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$LineMarker_control_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$LineMarker:control", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(1202);
	M_mindustry_game_MapObjectives$PosMarker_control_mindustry_logic_LMarkerControl_double_double_double(ctx, (frame[0].o), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d));
	LINE_NUMBER(1204);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1205);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 10: goto label_4;
		case 11: goto label_2;
		case 12: goto label_2;
		case 13: goto label_2;
		case 14: goto label_5;
		case 15: goto label_2;
		case 16: goto label_6;
		case 17: goto label_2;
		case 18: goto label_7;
		default: goto label_2;
	}
	}
label_7:;
	{
	LINE_NUMBER(1206);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat((frame[2].d))) * (jfloat(8.0f)));
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(1207);
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat((frame[2].d)));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(1208);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_color1;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_color2;
	sp[1].o = (jobject)((func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color])(ctx, sp[1].o, (frame[2].d));
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(1209);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	sp += 1;
	if (temp0 != 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	sp -= 2;
	((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK(sp[0].o))->F_outline = sp[1].i;
label_2:;
	{
	LINE_NUMBER(1213);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(1214);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 18: goto label_12;
		default: goto label_10;
	}
	}
label_12:;
	{
	LINE_NUMBER(1215);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat((frame[4].d))) * (jfloat(8.0f)));
	}
label_10:;
	{
	LINE_NUMBER(1219);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_13;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(1220);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 19: goto label_15;
		case 20: goto label_16;
		default: goto label_13;
	}
	}
label_15:;
	{
	LINE_NUMBER(1221);
	if ((jint((frame[2].d))) != 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp += 1;
	goto label_18;
	}
label_17:;
	{
	if ((jint((frame[2].d))) != (jint(1))) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	sp += 1;
	goto label_18;
	}
label_19:;
	clinit_arc_util_Tmp(ctx);
	(sp++)->o = SF_arc_util_Tmp_v1;
label_18:;
	{
	sp -= 1;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat((frame[4].d))) * (jfloat(8.0f)));
	goto label_13;
	}
label_16:;
	{
	LINE_NUMBER(1222);
	if ((jint((frame[2].d))) != 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_color1;
	sp += 1;
	goto label_21;
	}
label_20:;
	{
	if ((jint((frame[2].d))) != (jint(1))) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_color2;
	sp += 1;
	goto label_21;
	}
label_22:;
	clinit_arc_util_Tmp(ctx);
	(sp++)->o = SF_arc_util_Tmp_c1;
label_21:;
	{
	sp -= 1;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color])(ctx, sp[0].o, (frame[4].d));
	}
label_13:;
	{
	LINE_NUMBER(1226);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_23;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[6].d));
	if (temp0 != 0) goto label_23;
	}
	{
	LINE_NUMBER(1227);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 19: goto label_25;
		default: goto label_23;
	}
	}
label_25:;
	{
	LINE_NUMBER(1228);
	if ((jint((frame[2].d))) != 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp += 1;
	goto label_27;
	}
label_26:;
	{
	if ((jint((frame[2].d))) != (jint(1))) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$LineMarker *) NULL_CHECK((frame[0].o)))->F_endPos;
	sp += 1;
	goto label_27;
	}
label_28:;
	clinit_arc_util_Tmp(ctx);
	(sp++)->o = SF_arc_util_Tmp_v1;
label_27:;
	{
	sp -= 1;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat((frame[6].d))) * (jfloat(8.0f)));
	}
label_23:;
	LINE_NUMBER(1231);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives$LineMarker;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field endPos
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$TilePos);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives$LineMarker[] {
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
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_write_arc_util_serialization_Json,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_game_MapObjectives$LineMarker_draw_float,
	(void *) M_mindustry_game_MapObjectives$LineMarker_drawLight_float,
	(void *) M_mindustry_game_MapObjectives$LineMarker_control_mindustry_logic_LMarkerControl_double_double_double,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_typeName_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue,
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
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
	{ "draw", "(F)V" },
	{ "drawLight", "(F)V" },
	{ "control", "(Lmindustry/logic/LMarkerControl;DDD)V" },
	{ "setText", "(Ljava/lang/String;Z)V" },
	{ "setTexture", "(Ljava/lang/Object;)V" },
	{ "typeName", "()Ljava/lang/String;" },
	{ "updateField", "(Larc/util/serialization/JsonValue;)V" },
};

static FieldMetadata fields[] {
	{ "endPos", &class_arc_math_geom_Vec2, offsetof(mindustry_game_MapObjectives$LineMarker, F_endPos), "Larc/math/geom/Vec2;", 1 },
	{ "stroke", &class_float, offsetof(mindustry_game_MapObjectives$LineMarker, F_stroke), "F", 1 },
	{ "outline", &class_boolean, offsetof(mindustry_game_MapObjectives$LineMarker, F_outline), "Z", 1 },
	{ "color1", &class_arc_graphics_Color, offsetof(mindustry_game_MapObjectives$LineMarker, F_color1), "Larc/graphics/Color;", 1 },
	{ "color2", &class_arc_graphics_Color, offsetof(mindustry_game_MapObjectives$LineMarker, F_color2), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$LineMarker_float_float_float_float_float, 0, "(FFFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$LineMarker_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$LineMarker, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_game_MapObjectives$LineMarker_draw_float, VTABLE_mindustry_game_MapObjectives$LineMarker_draw_float, "(F)V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_game_MapObjectives$LineMarker_drawLight_float, VTABLE_mindustry_game_MapObjectives$LineMarker_drawLight_float, "(F)V", 1 },
	{ "control", (intptr_t) M_mindustry_game_MapObjectives$LineMarker_control_mindustry_logic_LMarkerControl_double_double_double, VTABLE_mindustry_game_MapObjectives$LineMarker_control_mindustry_logic_LMarkerControl_double_double_double, "(Lmindustry/logic/LMarkerControl;DDD)V", 1 },
};

Class class_mindustry_game_MapObjectives$LineMarker{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$LineMarker",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$PosMarker,
		.size = sizeof(mindustry_game_MapObjectives$LineMarker),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$LineMarker,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$LineMarker,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$LineMarker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$LineMarker = registerClass(&class_mindustry_game_MapObjectives$LineMarker);

}

