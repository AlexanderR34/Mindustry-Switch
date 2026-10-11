#include "mindustry/game/MapObjectives_ShapeMarker.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/game/MapObjectives_ShapeMarker.h"
#include "mindustry/logic/LMarkerControl.h"
#include "arc/graphics/Color.h"
#include "java/lang/Enum.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "mindustry/game/MapObjectives_1.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/game/MapObjectives.h"
#include "java/lang/Double.h"
#include "mindustry/game/MapObjectives_PosMarker.h"

extern "C" {


void mark_mindustry_game_MapObjectives$ShapeMarker(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapObjectives$ShapeMarker *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$ShapeMarker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$PosMarker(ctx);
}

void init_mindustry_game_MapObjectives$ShapeMarker_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeMarker:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ShapeMarker(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1026);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1021);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(8.0f));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(1));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_startAngle = (jfloat(0));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_endAngle = (jfloat(360.0f));
	LINE_NUMBER(1022);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_fill = (jint(0));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(1023);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(1024);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(1027);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(1028);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$ShapeMarker_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeMarker:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ShapeMarker(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(1030);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1021);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(8.0f));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(1));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_startAngle = (jfloat(0));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_endAngle = (jfloat(360.0f));
	LINE_NUMBER(1022);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_fill = (jint(0));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(1023);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(1024);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(1031);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(1032);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_radius = (frame[3].f);
	LINE_NUMBER(1033);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[4].f);
	LINE_NUMBER(1034);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$ShapeMarker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeMarker:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ShapeMarker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1036);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1021);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(8.0f));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(1));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_startAngle = (jfloat(0));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_endAngle = (jfloat(360.0f));
	LINE_NUMBER(1022);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_fill = (jint(0));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_outline = (jint(1));
	LINE_NUMBER(1023);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(1024);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(1036);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ShapeMarker_draw_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeMarker:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	auto marker = (mindustry_game_MapObjectives$ShapeMarker *) self;
	if (!marker->parent.F_pos) {
		clinit_arc_math_geom_Vec2(ctx);
		marker->parent.F_pos = (arc_math_geom_Vec2 *) gcAlloc(ctx, &class_arc_math_geom_Vec2);
		init_arc_math_geom_Vec2(ctx, (jobject) marker->parent.F_pos);
	}
	if (!marker->F_color) {
		clinit_arc_graphics_Color(ctx);
		marker->F_color = (arc_graphics_Color *) SF_arc_graphics_Color_white;
	}
	LINE_NUMBER(1041);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_sides), (200));
	frame[2].i = temp0;
	LINE_NUMBER(1043);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_drawLayer));
	LINE_NUMBER(1044);
	if (((jint)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_fill) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1045);
	if (((jint)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_outline) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1046);
	jfloat temp0 = (((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_stroke) + (jfloat(2))) * (frame[1].f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float_float(ctx, temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (frame[2].i), ((((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_radius) + (jfloat(1))) * (frame[1].f)), (((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation) + ((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_startAngle)), (((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation) + ((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_endAngle)));
	}
label_5:;
	{
	LINE_NUMBER(1050);
	jfloat temp0 = ((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_stroke) * (frame[1].f);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float_float(ctx, temp1, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (frame[2].i), ((((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_radius) + (jfloat(1))) * (frame[1].f)), (((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation) + ((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_startAngle)), (((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation) + ((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_endAngle)));
	goto label_9;
	}
label_3:;
	{
	LINE_NUMBER(1053);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1054);
	if ((floatCompare(((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_startAngle), ((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_endAngle), 1)) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(1055);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	SM_arc_graphics_g2d_Fill_arc_float_float_float_float_float_int(ctx, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_radius) * (frame[1].f)), ((((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_endAngle) - ((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_startAngle)) / (jfloat(360.0f))), (((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation) + ((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_startAngle)), (frame[2].i));
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(1057);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	SM_arc_graphics_g2d_Fill_arc_float_float_float_float_float_int(ctx, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_radius) * (frame[1].f)), ((((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_startAngle) - ((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_endAngle)) / (jfloat(360.0f))), (((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation) + ((jfloat)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_endAngle)), (frame[2].i));
	}
label_9:;
	LINE_NUMBER(1060);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ShapeMarker_control_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeMarker:control", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(1064);
	M_mindustry_game_MapObjectives$PosMarker_control_mindustry_logic_LMarkerControl_double_double_double(ctx, (frame[0].o), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d));
	LINE_NUMBER(1066);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1067);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 10: goto label_4;
		case 11: goto label_2;
		case 12: goto label_5;
		case 13: goto label_6;
		case 14: goto label_7;
		case 15: goto label_8;
		case 16: goto label_9;
		case 17: goto label_10;
		default: goto label_2;
	}
	}
label_5:;
	{
	LINE_NUMBER(1068);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat((frame[2].d)));
	goto label_2;
	}
label_9:;
	{
	LINE_NUMBER(1069);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat((frame[2].d)));
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(1070);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	sp += 1;
	if (temp0 != 0) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	sp -= 2;
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK(sp[0].o))->F_outline = sp[1].i;
	goto label_2;
label_6:;
	{
	LINE_NUMBER(1071);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat((frame[2].d)));
	goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color])(ctx, sp[0].o, (frame[2].d));
	goto label_2;
	}
label_8:;
	{
	LINE_NUMBER(1073);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint((frame[2].d)));
	goto label_2;
	}
label_10:;
	{
	LINE_NUMBER(1074);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_startAngle = (jfloat((frame[2].d)));
	}
label_2:;
	{
	LINE_NUMBER(1078);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(1079);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 15: goto label_15;
		case 17: goto label_16;
		default: goto label_13;
	}
	}
label_15:;
	{
	LINE_NUMBER(1080);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[4].d))), (jfloat(0)));
	sp += 1;
	if (temp0 != 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	sp -= 2;
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK(sp[0].o))->F_fill = sp[1].i;
	goto label_13;
label_16:;
	{
	LINE_NUMBER(1081);
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK((frame[0].o)))->F_endAngle = (jfloat((frame[4].d)));
	}
label_13:;
	{
	LINE_NUMBER(1085);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[6].d));
	if (temp0 != 0) goto label_19;
	}
	{
	LINE_NUMBER(1086);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LMarkerControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LMarkerControl_shape;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	LINE_NUMBER(1087);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[6].d))), (jfloat(0)));
	sp += 1;
	if (temp0 != 0) goto label_22;
	}
	INST_ICONST(1);
	goto label_23;
label_22:;
	INST_ICONST(0);
label_23:;
	sp -= 2;
	((mindustry_game_MapObjectives$ShapeMarker *) NULL_CHECK(sp[0].o))->F_outline = sp[1].i;
label_19:;
	LINE_NUMBER(1090);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_game_MapObjectives$ShapeMarker[] {
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
	(void *) M_mindustry_game_MapObjectives$ShapeMarker_draw_float,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float,
	(void *) M_mindustry_game_MapObjectives$ShapeMarker_control_mindustry_logic_LMarkerControl_double_double_double,
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
	{ "radius", &class_float, offsetof(mindustry_game_MapObjectives$ShapeMarker, F_radius), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_game_MapObjectives$ShapeMarker, F_rotation), "F", 1 },
	{ "stroke", &class_float, offsetof(mindustry_game_MapObjectives$ShapeMarker, F_stroke), "F", 1 },
	{ "startAngle", &class_float, offsetof(mindustry_game_MapObjectives$ShapeMarker, F_startAngle), "F", 1 },
	{ "endAngle", &class_float, offsetof(mindustry_game_MapObjectives$ShapeMarker, F_endAngle), "F", 1 },
	{ "fill", &class_boolean, offsetof(mindustry_game_MapObjectives$ShapeMarker, F_fill), "Z", 1 },
	{ "outline", &class_boolean, offsetof(mindustry_game_MapObjectives$ShapeMarker, F_outline), "Z", 1 },
	{ "sides", &class_int, offsetof(mindustry_game_MapObjectives$ShapeMarker, F_sides), "I", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_game_MapObjectives$ShapeMarker, F_color), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$ShapeMarker_float_float, 0, "(FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$ShapeMarker_float_float_float_float, 0, "(FFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$ShapeMarker, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_game_MapObjectives$ShapeMarker_draw_float, VTABLE_mindustry_game_MapObjectives$ShapeMarker_draw_float, "(F)V", 1 },
	{ "control", (intptr_t) M_mindustry_game_MapObjectives$ShapeMarker_control_mindustry_logic_LMarkerControl_double_double_double, VTABLE_mindustry_game_MapObjectives$ShapeMarker_control_mindustry_logic_LMarkerControl_double_double_double, "(Lmindustry/logic/LMarkerControl;DDD)V", 1 },
};

Class class_mindustry_game_MapObjectives$ShapeMarker{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$ShapeMarker",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$PosMarker,
		.size = sizeof(mindustry_game_MapObjectives$ShapeMarker),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$ShapeMarker,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$ShapeMarker,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$ShapeMarker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$ShapeMarker = registerClass(&class_mindustry_game_MapObjectives$ShapeMarker);

}

