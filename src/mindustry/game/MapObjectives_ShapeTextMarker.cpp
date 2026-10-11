#include "mindustry/game/MapObjectives_ShapeTextMarker.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/game/MapObjectives_Multiline.h"
#include "mindustry/game/MapObjectives_ShapeTextMarker.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/logic/LMarkerControl.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "arc/util/Pack.h"
#include "mindustry/game/MapObjectives_PosMarker.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Enum.h"
#include "mindustry/game/MapObjectives_1.h"
#include "mindustry/game/MapObjectives_LabelFlag.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/game/MapObjectives_Alignment.h"
#include "mindustry/game/MapObjectives.h"
#include "java/lang/Double.h"
#include "mindustry/gen/WorldLabel.h"

extern "C" {


void mark_mindustry_game_MapObjectives$ShapeTextMarker(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapObjectives$ShapeTextMarker *) object;
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_fetchedText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fetchedText)->clazz)->markFunction)((jobject) self->F_fetchedText, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$ShapeTextMarker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$PosMarker(ctx);
}

void init_mindustry_game_MapObjectives$ShapeTextMarker_java_lang_String_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeTextMarker:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ShapeTextMarker(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(869);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(856);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"frog"_j)));
	LINE_NUMBER(857);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textHeight = (jfloat(7.0f));
	LINE_NUMBER(858);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(859);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint(1));
	LINE_NUMBER(860);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	LINE_NUMBER(862);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(6.0f));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(863);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(870);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(871);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(872);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$ShapeTextMarker_java_lang_String_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeTextMarker:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ShapeTextMarker(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(874);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(856);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"frog"_j)));
	LINE_NUMBER(857);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textHeight = (jfloat(7.0f));
	LINE_NUMBER(858);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(859);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint(1));
	LINE_NUMBER(860);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	LINE_NUMBER(862);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(6.0f));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(863);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(875);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(876);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(877);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (frame[4].f);
	LINE_NUMBER(878);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$ShapeTextMarker_java_lang_String_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeTextMarker:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ShapeTextMarker(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(880);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(856);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"frog"_j)));
	LINE_NUMBER(857);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textHeight = (jfloat(7.0f));
	LINE_NUMBER(858);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(859);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint(1));
	LINE_NUMBER(860);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	LINE_NUMBER(862);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(6.0f));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(863);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(881);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(882);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(883);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (frame[4].f);
	LINE_NUMBER(884);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[5].f);
	LINE_NUMBER(885);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$ShapeTextMarker_java_lang_String_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeTextMarker:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ShapeTextMarker(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(887);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(856);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"frog"_j)));
	LINE_NUMBER(857);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textHeight = (jfloat(7.0f));
	LINE_NUMBER(858);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(859);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint(1));
	LINE_NUMBER(860);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	LINE_NUMBER(862);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(6.0f));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(863);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(888);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(889);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(890);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (frame[4].f);
	LINE_NUMBER(891);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[5].f);
	LINE_NUMBER(892);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textHeight = (frame[6].f);
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$ShapeTextMarker_java_lang_String_float_float_float_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeTextMarker:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ShapeTextMarker(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(895);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(856);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"frog"_j)));
	LINE_NUMBER(857);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textHeight = (jfloat(7.0f));
	LINE_NUMBER(858);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(859);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint(1));
	LINE_NUMBER(860);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	LINE_NUMBER(862);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(6.0f));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(863);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(896);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(897);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(898);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (frame[4].f);
	LINE_NUMBER(899);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[5].f);
	LINE_NUMBER(900);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textHeight = (frame[6].f);
	LINE_NUMBER(901);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (frame[7].i);
	LINE_NUMBER(902);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$ShapeTextMarker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeTextMarker:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$ShapeTextMarker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(904);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(856);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (((jobject) createStringLiteral(ctx, u8"frog"_j)));
	LINE_NUMBER(857);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat(1));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textHeight = (jfloat(7.0f));
	LINE_NUMBER(858);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_flags = (jint(3));
	LINE_NUMBER(859);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint(1));
	LINE_NUMBER(860);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	LINE_NUMBER(862);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(6.0f));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	LINE_NUMBER(863);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint(4));
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(904);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ShapeTextMarker_draw_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeTextMarker:draw", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	auto marker = (mindustry_game_MapObjectives$ShapeTextMarker *) self;
	if (!marker->parent.F_pos) {
		clinit_arc_math_geom_Vec2(ctx);
		marker->parent.F_pos = (arc_math_geom_Vec2 *) gcAlloc(ctx, &class_arc_math_geom_Vec2);
		init_arc_math_geom_Vec2(ctx, (jobject) marker->parent.F_pos);
	}
	if (!marker->F_color) {
		clinit_arc_graphics_Color(ctx);
		marker->F_color = (arc_graphics_Color *) SF_arc_graphics_Color_white;
	}
	if (!marker->F_text) {
		marker->F_text = (java_lang_String *) createStringLiteral(ctx, u8""_j);
	}
	LINE_NUMBER(909);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_sides), (300));
	frame[2].i = temp0;
	LINE_NUMBER(911);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_drawLayer));
	LINE_NUMBER(912);
	jfloat temp1 = (jfloat(3.0f)) * (frame[1].f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_gray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp1, sp[0].o);
	LINE_NUMBER(913);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (frame[2].i), ((((jfloat)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius) + (jfloat(1))) * (frame[1].f)), ((jfloat)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(914);
	jfloat temp3 = frame[1].f;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp3, sp[0].o);
	LINE_NUMBER(915);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, temp4, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (frame[2].i), ((((jfloat)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius) + (jfloat(1))) * (frame[1].f)), ((jfloat)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(916);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(918);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fetchedText;
	if (sp[0].o != nullptr) goto label_8;
	}
	{
	LINE_NUMBER(919);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)SM_mindustry_game_MapObjectives$ObjectiveMarker_fetchText_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_fetchedText = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(923);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize), (jfloat(0)));
	if (temp0 == 0) goto label_10;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(925);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fetchedText;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	SM_mindustry_gen_WorldLabel_drawAt_java_lang_String_float_float_float_int_float_int_int(ctx, sp[0].o, temp0, ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) + (((jfloat)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius) * (frame[1].f))) + (((jfloat)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textHeight) * (frame[1].f))), ((jfloat)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_drawLayer), ((jint)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_flags), (((jfloat)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize) * (frame[1].f)), ((jint)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign), ((jint)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign));
	LINE_NUMBER(926);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ShapeTextMarker_control_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeTextMarker:control", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(930);
	M_mindustry_game_MapObjectives$PosMarker_control_mindustry_logic_LMarkerControl_double_double_double(ctx, (frame[0].o), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d));
	LINE_NUMBER(932);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(933);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 6: goto label_4;
		case 7: goto label_5;
		case 8: goto label_6;
		case 9: goto label_7;
		case 10: goto label_8;
		case 11: goto label_9;
		case 12: goto label_10;
		case 13: goto label_11;
		case 14: goto label_12;
		case 15: goto label_13;
		default: goto label_2;
	}
	}
label_4:;
	{
	LINE_NUMBER(934);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_fontSize = (jfloat((frame[2].d)));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(935);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textHeight = (jfloat((frame[2].d)));
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(936);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_textAlign = (jint((frame[2].d)));
	goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(937);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint((frame[2].d)));
	goto label_2;
	}
label_8:;
	{
	LINE_NUMBER(938);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_flags;
	jint temp1 = jint(2);
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (temp2 != 0) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 4;
	jint temp0 = (jint)SM_arc_util_Pack_bitmask_int_int_boolean_R_int(ctx, sp[1].i, sp[2].i, sp[3].i);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_flags = (jbyte(temp0));
	goto label_2;
	}
label_9:;
	{
	LINE_NUMBER(939);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_flags;
	jint temp1 = jint(1);
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[2].d))), (jfloat(0)));
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (temp2 != 0) goto label_16;
	}
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	{
	sp -= 4;
	jint temp0 = (jint)SM_arc_util_Pack_bitmask_int_int_boolean_R_int(ctx, sp[1].i, sp[2].i, sp[3].i);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_flags = (jbyte(temp0));
	goto label_2;
	}
label_10:;
	{
	LINE_NUMBER(940);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat((frame[2].d)));
	goto label_2;
	}
label_11:;
	{
	LINE_NUMBER(941);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat((frame[2].d)));
	goto label_2;
	}
label_12:;
	{
	LINE_NUMBER(942);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color])(ctx, sp[0].o, (frame[2].d));
	goto label_2;
	}
label_13:;
	{
	LINE_NUMBER(943);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_sides = (jint((frame[2].d)));
	}
label_2:;
	{
	LINE_NUMBER(947);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_18;
	}
	{
	LINE_NUMBER(948);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 11: goto label_20;
		default: goto label_18;
	}
	}
label_20:;
	{
	LINE_NUMBER(949);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_flags;
	jint temp1 = jint(2);
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (jfloat((frame[4].d))), (jfloat(0)));
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (temp2 != 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	{
	sp -= 4;
	jint temp0 = (jint)SM_arc_util_Pack_bitmask_int_int_boolean_R_int(ctx, sp[1].i, sp[2].i, sp[3].i);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_flags = (jbyte(temp0));
	}
label_18:;
	LINE_NUMBER(952);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$ShapeTextMarker_setText_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$ShapeTextMarker:setText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(956);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(957);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(958);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)SM_mindustry_game_MapObjectives$ObjectiveMarker_fetchText_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_fetchedText = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(960);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK((frame[0].o)))->F_text;
	((mindustry_game_MapObjectives$ShapeTextMarker *) NULL_CHECK(sp[0].o))->F_fetchedText = (jref) sp[1].o;
	}
label_4:;
	LINE_NUMBER(962);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives$ShapeTextMarker;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field text
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Multiline);
	}

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field flags
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$LabelFlag);
	}

	{ // Field textAlign
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Alignment);
		((mindustry_game_MapObjectives$Alignment *)annotations[0])->F_hor = 1;
		((mindustry_game_MapObjectives$Alignment *)annotations[0])->F_ver = 1;
	}

	{ // Field lineAlign
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Alignment);
		((mindustry_game_MapObjectives$Alignment *)annotations[0])->F_ver = 0;
		((mindustry_game_MapObjectives$Alignment *)annotations[0])->F_hor = 1;
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[4])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[5])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives$ShapeTextMarker[] {
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
	(void *) M_mindustry_game_MapObjectives$ShapeTextMarker_draw_float,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float,
	(void *) M_mindustry_game_MapObjectives$ShapeTextMarker_control_mindustry_logic_LMarkerControl_double_double_double,
	(void *) M_mindustry_game_MapObjectives$ShapeTextMarker_setText_java_lang_String_boolean,
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
	{ "text", &class_java_lang_String, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_text), "Ljava/lang/String;", 1 },
	{ "fontSize", &class_float, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_fontSize), "F", 1 },
	{ "textHeight", &class_float, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_textHeight), "F", 1 },
	{ "flags", &class_byte, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_flags), "B", 1 },
	{ "textAlign", &class_int, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_textAlign), "I", 1 },
	{ "lineAlign", &class_int, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_lineAlign), "I", 1 },
	{ "radius", &class_float, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_radius), "F", 1 },
	{ "rotation", &class_float, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_rotation), "F", 1 },
	{ "sides", &class_int, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_sides), "I", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_color), "Larc/graphics/Color;", 1 },
	{ "fetchedText", &class_java_lang_String, offsetof(mindustry_game_MapObjectives$ShapeTextMarker, F_fetchedText), "Ljava/lang/String;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$ShapeTextMarker_java_lang_String_float_float, 0, "(Ljava/lang/String;FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$ShapeTextMarker_java_lang_String_float_float_float, 0, "(Ljava/lang/String;FFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$ShapeTextMarker_java_lang_String_float_float_float_float, 0, "(Ljava/lang/String;FFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$ShapeTextMarker_java_lang_String_float_float_float_float_float, 0, "(Ljava/lang/String;FFFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$ShapeTextMarker_java_lang_String_float_float_float_float_float_int, 0, "(Ljava/lang/String;FFFFFI)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$ShapeTextMarker, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_game_MapObjectives$ShapeTextMarker_draw_float, VTABLE_mindustry_game_MapObjectives$ShapeTextMarker_draw_float, "(F)V", 1 },
	{ "control", (intptr_t) M_mindustry_game_MapObjectives$ShapeTextMarker_control_mindustry_logic_LMarkerControl_double_double_double, VTABLE_mindustry_game_MapObjectives$ShapeTextMarker_control_mindustry_logic_LMarkerControl_double_double_double, "(Lmindustry/logic/LMarkerControl;DDD)V", 1 },
	{ "setText", (intptr_t) M_mindustry_game_MapObjectives$ShapeTextMarker_setText_java_lang_String_boolean, VTABLE_mindustry_game_MapObjectives$ShapeTextMarker_setText_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 1 },
};

Class class_mindustry_game_MapObjectives$ShapeTextMarker{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$ShapeTextMarker",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$PosMarker,
		.size = sizeof(mindustry_game_MapObjectives$ShapeTextMarker),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$ShapeTextMarker,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$ShapeTextMarker,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$ShapeTextMarker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$ShapeTextMarker = registerClass(&class_mindustry_game_MapObjectives$ShapeTextMarker);

}

