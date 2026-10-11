#include "mindustry/gen/WeatherState.h"
#include "arc/func/Prov.h"
#include "java/nio/FloatBuffer.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__weather.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "arc/util/io/Writes.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/WeatherState_invoke_arc_func_Prov_1.h"
#include "mindustry/gen/WeatherState_invoke_java_lang_Runnable_3.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/gen/WeatherState_invoke_java_lang_Runnable_2.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/String.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Math.h"
#include "mindustry/gen/WeatherStatec.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/Weather.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/core/NetClient.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Player.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/WeatherState.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jfloat SF_mindustry_gen_WeatherState_fadeTime;

void mark_mindustry_gen_WeatherState(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_gen_WeatherState *) object;
	if (self->F_weather)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weather)->clazz)->markFunction)((jobject) self->F_weather, mark, depth + 1);
	if (self->F_windVector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_windVector)->clazz)->markFunction)((jobject) self->F_windVector, mark, depth + 1);
}

void clinit_mindustry_gen_WeatherState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_gen_WeatherState_fadeTime = jfloat(240.0f);
}

void init_mindustry_gen_WeatherState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_WeatherState(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(137);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(99);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(101);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(103);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(105);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__weather = (jint(-1));
	LINE_NUMBER(107);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	LINE_NUMBER(113);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity = (jfloat(0));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_windVector = (jref) sp[1].o;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WeatherState_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WeatherState_windVector_R_arc_math_geom_Vec2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:windVector", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_windVector;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WeatherState_effectTimer_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:effectTimer", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_effectTimer);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WeatherState_intensity_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:intensity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_intensity);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WeatherState_life_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:life", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_life);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WeatherState_opacity_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:opacity", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WeatherState_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WeatherState_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_WeatherState_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return (14);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_WeatherState_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WeatherState_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"WeatherState#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_WeatherState_lastUpdated_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:lastUpdated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_lastUpdated);
	}

	popStackFrame(ctx);
}

jlong M_mindustry_gen_WeatherState_updateSpacing_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:updateSpacing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return ((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_updateSpacing);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WeatherState_weather_R_mindustry_type_Weather(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:weather", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_effectTimer_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:effectTimer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(219);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_effectTimer = (frame[1].f);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(224);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_intensity_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:intensity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(229);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_intensity = (frame[1].f);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_lastUpdated_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:lastUpdated", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(234);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_lastUpdated = (frame[1].l);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_life_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:life", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(239);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_life = (frame[1].f);
	LINE_NUMBER(240);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_opacity_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:opacity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(244);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity = (frame[1].f);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_setIndex__all_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:setIndex__all", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(249);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__all = (frame[1].i);
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(254);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_setIndex__sync_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:setIndex__sync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(259);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__sync = (frame[1].i);
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_setIndex__weather_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:setIndex__weather", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(264);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__weather = (frame[1].i);
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_updateSpacing_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:updateSpacing", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(269);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (frame[1].l);
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_weather_mindustry_type_Weather(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:weather", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(274);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather = (jref) (frame[1].o);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_windVector_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:windVector", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(279);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_windVector = (jref) (frame[1].o);
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(284);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(289);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:read", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(294);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(295);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(296);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_intensity = temp0;
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_life = temp1;
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_opacity = temp2;
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	jint temp3 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp3);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_weather = (jref) (checkCast(ctx, &class_mindustry_type_Weather, sp[1].o));
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_x = temp4;
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_y = temp5;
	goto label_9;
	}
label_2:;
	{
	LINE_NUMBER(302);
	if ((frame[2].i) != (jint(1))) goto label_10;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_effectTimer = temp0;
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_intensity = temp1;
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_life = temp2;
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_opacity = temp3;
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	jint temp4 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp4);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_weather = (jref) (checkCast(ctx, &class_mindustry_type_Weather, sp[1].o));
	LINE_NUMBER(308);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_x = temp5;
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_y = temp6;
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(310);
	if ((frame[2].i) != (jint(2))) goto label_18;
	}
	{
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_effectTimer = temp0;
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_intensity = temp1;
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_life = temp2;
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_opacity = temp3;
	LINE_NUMBER(315);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	jint temp4 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp4);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_weather = (jref) (checkCast(ctx, &class_mindustry_type_Weather, sp[1].o));
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_windVector;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_windVector = (jref) sp[1].o;
	LINE_NUMBER(317);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_x = temp5;
	LINE_NUMBER(318);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_y = temp6;
	goto label_9;
	}
label_18:;
	{
	LINE_NUMBER(320);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown revision '\u0001' for entity type 'WeatherStateComp'"_j.string, 1, boxShort(ctx, (frame[2].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(323);
	((func_mindustry_gen_WeatherState_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(328);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (jint(2)));
	LINE_NUMBER(329);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_effectTimer));
	LINE_NUMBER(330);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_intensity));
	LINE_NUMBER(331);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_life));
	LINE_NUMBER(332);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity));
	LINE_NUMBER(333);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	sp += 1;
	if (sp[0].o != nullptr) goto label_6;
	}
	INST_ICONST(-1);
	goto label_7;
label_6:;
	{
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(334);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_windVector;
	SM_mindustry_io_TypeIO_writeVec2_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(335);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(336);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WeatherState_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WeatherState_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_WeatherState_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_WeatherState_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_controller_R_mindustry_entities_units_UnitController, (frame[1].o)))(ctx, (frame[1].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_WeatherState_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_WeatherState_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_WeatherState_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:isSyncHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_WeatherState_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(373);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_gen_WeatherState_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WeatherState_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return (jfloat(3,402823e+38f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WeatherState_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_WeatherState_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_WeatherState_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(397);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_WeatherState_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(402);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WeatherState_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(408);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_3;
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_gen_WeatherState_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(414);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, sp[0].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_gen_WeatherState_create_R_mindustry_gen_WeatherState(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_WeatherState(ctx);
	{
	LINE_NUMBER(418);
	sp[0].o = ((jobject) &class_mindustry_gen_WeatherState);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_WeatherState_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_gen_WeatherState_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_gen_WeatherState_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_WeatherState, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(422);
	if (((jint)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(423);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_all;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_index__all = temp0;
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_sync;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_index__sync = temp1;
	LINE_NUMBER(425);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp2 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_index__draw = temp2;
	LINE_NUMBER(426);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_weather;
	jint temp3 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_index__weather = temp3;
	LINE_NUMBER(428);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(433);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(437);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:afterSync", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(441);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(445);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(453);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if ((floatCompare(((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_weatherAlpha), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_drawWeather) == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"showweather"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(454);
	jfloat temp0 = jfloat(130.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_WeatherState_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_gen_WeatherState_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_gen_WeatherState_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(459);
	jfloat temp1 = jfloat(20.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_WeatherState_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_gen_WeatherState_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_gen_WeatherState_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp1, sp[0].o);
	}
label_1:;
	LINE_NUMBER(466);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_handleSyncHidden(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:handleSyncHidden", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(470);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_init_mindustry_type_Weather(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(474);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather = (jref) (frame[1].o);
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_interpolate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:interpolate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(478);
	if ((longCompare(((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	if ((longCompare(((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_updateSpacing), (jlong(0)))) == 0) goto label_1;
	}
	{
	LINE_NUMBER(479);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(480);
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[1].f) / (jfloat(((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_updateSpacing)))), (jfloat(2)));
	frame[2].f = temp1;
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_LAST_), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_TARGET_), (frame[2].f));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_x = temp2;
	LINE_NUMBER(482);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_LAST_), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_TARGET_), (frame[2].f));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_y = temp3;
	LINE_NUMBER(483);
	goto label_7;
	}
label_1:;
	{
	if ((longCompare(((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_7;
	}
	{
	LINE_NUMBER(484);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(485);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	}
label_7:;
	LINE_NUMBER(488);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:readSync", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(491);
	if ((longCompare(((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(493);
	jint temp1 = (jint)((func_mindustry_gen_WeatherState_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_isLocal_R_boolean])(ctx, (frame[0].o));
	frame[2].i = temp1;
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_effectTimer = temp2;
	LINE_NUMBER(495);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_intensity = temp3;
	LINE_NUMBER(496);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_life = temp4;
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_opacity = temp5;
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	jint temp6 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByID_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, temp6);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_weather = (jref) (checkCast(ctx, &class_mindustry_type_Weather, sp[1].o));
	LINE_NUMBER(499);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_windVector;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readVec2_arc_util_io_Reads_arc_math_geom_Vec2_R_arc_math_geom_Vec2(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_windVector = (jref) sp[1].o;
	LINE_NUMBER(500);
	if ((frame[2].i) != 0) goto label_10;
	}
	{
	LINE_NUMBER(501);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp0;
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(504);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(505);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(506);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x);
	}
label_13:;
	{
	LINE_NUMBER(508);
	if ((frame[2].i) != 0) goto label_16;
	}
	{
	LINE_NUMBER(509);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp0;
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(512);
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(513);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(514);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y);
	}
label_19:;
	{
	LINE_NUMBER(516);
	((func_mindustry_gen_WeatherState_afterSync) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_afterSync])(ctx, (frame[0].o));
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:readSyncManual", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(521);
	if ((longCompare(((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_lastUpdated), (jlong(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_lastUpdated));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_updateSpacing = temp0;
	}
label_1:;
	{
	LINE_NUMBER(522);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(523);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(524);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_x_TARGET_ = temp1;
	LINE_NUMBER(525);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(526);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_java_nio_FloatBuffer_get_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_get_R_float])(ctx, (frame[1].o));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_y_TARGET_ = temp2;
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(531);
	if (((jint)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(532);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__all));
	LINE_NUMBER(533);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(534);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_sync;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__sync));
	LINE_NUMBER(535);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__sync = (jint(-1));
	LINE_NUMBER(536);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(537);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(538);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_weather;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__weather));
	LINE_NUMBER(539);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_index__weather = (jint(-1));
	LINE_NUMBER(542);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(546);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(547);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_gen_WeatherState_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_id_R_int])(ctx, (frame[0].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	}
label_11:;
	{
	LINE_NUMBER(550);
	SM_mindustry_gen_Groups_queueFree_arc_util_pooling_Pool$Poolable(ctx, (frame[0].o));
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:reset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(554);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(555);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_effectTimer = (jfloat(0));
	LINE_NUMBER(556);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(557);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	LINE_NUMBER(558);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_lastUpdated = (jlong(0));
	LINE_NUMBER(559);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_life = (jfloat(0));
	LINE_NUMBER(560);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity = (jfloat(0));
	LINE_NUMBER(561);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(0));
	LINE_NUMBER(562);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather = (jref) (jobject(nullptr));
	LINE_NUMBER(563);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(564);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(569);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_WeatherState_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_WeatherState_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(574);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(575);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_snapInterpolation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:snapInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(579);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(580);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(581);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(582);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_TARGET_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(583);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(584);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_TARGET_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_snapSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:snapSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(589);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_updateSpacing = (jlong(16ll));
	LINE_NUMBER(590);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_lastUpdated = temp0;
	LINE_NUMBER(591);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_LAST_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(592);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x_TARGET_);
	LINE_NUMBER(593);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_LAST_ = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(594);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y = ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y_TARGET_);
	LINE_NUMBER(596);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(600);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_WeatherState_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_WeatherState_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(605);
	((func_mindustry_gen_WeatherState_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(614);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_WeatherState_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_gen_WeatherState_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(615);
	((func_mindustry_gen_WeatherState_interpolate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_interpolate])(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(620);
	if ((floatCompare(((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_life), (jfloat(240.0f)), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(621);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_life) / (jfloat(240.0f))), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_opacity = temp0;
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(623);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity), (jfloat(1)), (jfloat(4,000000e-03f)));
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_opacity = temp0;
	}
label_6:;
	{
	LINE_NUMBER(625);
	sp[0].o = frame[0].o;
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_life = (((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_life) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(626);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	((func_mindustry_type_Weather_update_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weather_update_mindustry_gen_WeatherState])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(627);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	((func_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(628);
	if ((floatCompare(((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_life), (jfloat(0)), 1)) >= 0) goto label_10;
	}
	{
	LINE_NUMBER(629);
	((func_mindustry_gen_WeatherState_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_WeatherState_remove])(ctx, (frame[0].o));
	}
label_10:;
	LINE_NUMBER(632);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:writeSync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(635);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_effectTimer));
	LINE_NUMBER(636);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_intensity));
	LINE_NUMBER(637);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_life));
	LINE_NUMBER(638);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity));
	LINE_NUMBER(639);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	sp += 1;
	if (sp[0].o != nullptr) goto label_5;
	}
	INST_ICONST(-1);
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id;
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(640);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_windVector;
	SM_mindustry_io_TypeIO_writeVec2_arc_util_io_Writes_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(641);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(642);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:writeSyncManual", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(647);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(648);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_FloatBuffer_put_float_R_java_nio_FloatBuffer])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(650);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_lambda$draw$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:lambda$draw$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = ((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_weatherAlpha) * ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 * ((jfloat)((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_opacityMultiplier)));
	LINE_NUMBER(461);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	((func_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(462);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(463);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_WeatherState_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/WeatherState:lambda$draw$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(455);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = ((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_weatherAlpha) * ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_opacity);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 * ((jfloat)((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_opacityMultiplier)));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK((frame[0].o)))->F_weather;
	((func_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(457);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(458);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_WeatherState;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method buildOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method tileOn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_gen_WeatherState[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_WeatherState_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_WeatherState_reset,
	(void *) M_mindustry_gen_WeatherState_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_WeatherState_as_R_java_lang_Object,
	(void *) M_mindustry_gen_WeatherState_isAdded_R_boolean,
	(void *) M_mindustry_gen_WeatherState_isLocal_R_boolean,
	(void *) M_mindustry_gen_WeatherState_isRemote_R_boolean,
	(void *) M_mindustry_gen_WeatherState_serialize_R_boolean,
	(void *) M_mindustry_gen_WeatherState_classId_R_int,
	(void *) M_mindustry_gen_WeatherState_id_R_int,
	(void *) M_mindustry_gen_WeatherState_add,
	(void *) M_mindustry_gen_WeatherState_afterRead,
	(void *) M_mindustry_gen_WeatherState_afterReadAll,
	(void *) M_mindustry_gen_WeatherState_beforeWrite,
	(void *) M_mindustry_gen_WeatherState_id_int,
	(void *) M_mindustry_gen_WeatherState_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_WeatherState_remove,
	(void *) M_mindustry_gen_WeatherState_update,
	(void *) M_mindustry_gen_WeatherState_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_WeatherState_getX_R_float,
	(void *) M_mindustry_gen_WeatherState_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_WeatherState_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_WeatherState_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_WeatherState_onSolid_R_boolean,
	(void *) M_mindustry_gen_WeatherState_x_R_float,
	(void *) M_mindustry_gen_WeatherState_y_R_float,
	(void *) M_mindustry_gen_WeatherState_tileX_R_int,
	(void *) M_mindustry_gen_WeatherState_tileY_R_int,
	(void *) M_mindustry_gen_WeatherState_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_WeatherState_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_WeatherState_set_float_float,
	(void *) M_mindustry_gen_WeatherState_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_WeatherState_trns_float_float,
	(void *) M_mindustry_gen_WeatherState_x_float,
	(void *) M_mindustry_gen_WeatherState_y_float,
	(void *) M_mindustry_gen_WeatherState_clipSize_R_float,
	(void *) M_mindustry_gen_WeatherState_draw,
	(void *) M_mindustry_gen_WeatherState_setIndex__all_int,
	(void *) M_mindustry_gen_WeatherState_setIndex__draw_int,
	(void *) M_mindustry_gen_WeatherState_setIndex__sync_int,
	(void *) M_mindustry_gen_WeatherState_setIndex__weather_int,
	(void *) M_mindustry_gen_WeatherState_isSyncHidden_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_WeatherState_lastUpdated_R_long,
	(void *) M_mindustry_gen_WeatherState_updateSpacing_R_long,
	(void *) M_mindustry_gen_WeatherState_afterSync,
	(void *) M_mindustry_gen_WeatherState_handleSyncHidden,
	(void *) M_mindustry_gen_WeatherState_interpolate,
	(void *) M_mindustry_gen_WeatherState_lastUpdated_long,
	(void *) M_mindustry_gen_WeatherState_readSync_arc_util_io_Reads,
	(void *) M_mindustry_gen_WeatherState_readSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_WeatherState_snapInterpolation,
	(void *) M_mindustry_gen_WeatherState_snapSync,
	(void *) M_mindustry_gen_WeatherState_updateSpacing_long,
	(void *) M_mindustry_gen_WeatherState_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_gen_WeatherState_writeSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_gen_WeatherState_windVector_R_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_WeatherState_effectTimer_R_float,
	(void *) M_mindustry_gen_WeatherState_intensity_R_float,
	(void *) M_mindustry_gen_WeatherState_life_R_float,
	(void *) M_mindustry_gen_WeatherState_opacity_R_float,
	(void *) M_mindustry_gen_WeatherState_weather_R_mindustry_type_Weather,
	(void *) M_mindustry_gen_WeatherState_effectTimer_float,
	(void *) M_mindustry_gen_WeatherState_init_mindustry_type_Weather,
	(void *) M_mindustry_gen_WeatherState_intensity_float,
	(void *) M_mindustry_gen_WeatherState_life_float,
	(void *) M_mindustry_gen_WeatherState_opacity_float,
	(void *) M_mindustry_gen_WeatherState_weather_mindustry_type_Weather,
	(void *) M_mindustry_gen_WeatherState_windVector_arc_math_geom_Vec2,
	(void *) M_mindustry_gen_WeatherState_lambda$draw$1,
	(void *) M_mindustry_gen_WeatherState_lambda$draw$0,
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
	{ "reset", "()V" },
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "setIndex__all", "(I)V" },
	{ "setIndex__draw", "(I)V" },
	{ "setIndex__sync", "(I)V" },
	{ "setIndex__weather", "(I)V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "windVector", "()Larc/math/geom/Vec2;" },
	{ "effectTimer", "()F" },
	{ "intensity", "()F" },
	{ "life", "()F" },
	{ "opacity", "()F" },
	{ "weather", "()Lmindustry/type/Weather;" },
	{ "effectTimer", "(F)V" },
	{ "init", "(Lmindustry/type/Weather;)V" },
	{ "intensity", "(F)V" },
	{ "life", "(F)V" },
	{ "opacity", "(F)V" },
	{ "weather", "(Lmindustry/type/Weather;)V" },
	{ "windVector", "(Larc/math/geom/Vec2;)V" },
	{ "lambda$draw$1", "()V" },
	{ "lambda$draw$0", "()V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_IndexableEntity__all, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_IndexableEntity__sync, &class_mindustry_gen_IndexableEntity__weather, &class_mindustry_gen_Posc, &class_mindustry_gen_Syncc, &class_mindustry_gen_WeatherStatec, };

static FieldMetadata fields[] {
	{ "fadeTime", &class_float, (intptr_t) &SF_mindustry_gen_WeatherState_fadeTime, "F", 25 },
	{ "added", &class_boolean, offsetof(mindustry_gen_WeatherState, F_added), "Z", 132 },
	{ "effectTimer", &class_float, offsetof(mindustry_gen_WeatherState, F_effectTimer), "F", 1 },
	{ "id", &class_int, offsetof(mindustry_gen_WeatherState, F_id), "I", 129 },
	{ "index__all", &class_int, offsetof(mindustry_gen_WeatherState, F_index__all), "I", 132 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_WeatherState, F_index__draw), "I", 132 },
	{ "index__sync", &class_int, offsetof(mindustry_gen_WeatherState, F_index__sync), "I", 132 },
	{ "index__weather", &class_int, offsetof(mindustry_gen_WeatherState, F_index__weather), "I", 132 },
	{ "intensity", &class_float, offsetof(mindustry_gen_WeatherState, F_intensity), "F", 1 },
	{ "lastUpdated", &class_long, offsetof(mindustry_gen_WeatherState, F_lastUpdated), "J", 129 },
	{ "life", &class_float, offsetof(mindustry_gen_WeatherState, F_life), "F", 1 },
	{ "opacity", &class_float, offsetof(mindustry_gen_WeatherState, F_opacity), "F", 1 },
	{ "updateSpacing", &class_long, offsetof(mindustry_gen_WeatherState, F_updateSpacing), "J", 129 },
	{ "weather", &class_mindustry_type_Weather, offsetof(mindustry_gen_WeatherState, F_weather), "Lmindustry/type/Weather;", 1 },
	{ "windVector", &class_arc_math_geom_Vec2, offsetof(mindustry_gen_WeatherState, F_windVector), "Larc/math/geom/Vec2;", 1 },
	{ "x", &class_float, offsetof(mindustry_gen_WeatherState, F_x), "F", 1 },
	{ "x_LAST_", &class_float, offsetof(mindustry_gen_WeatherState, F_x_LAST_), "F", 130 },
	{ "x_TARGET_", &class_float, offsetof(mindustry_gen_WeatherState, F_x_TARGET_), "F", 130 },
	{ "y", &class_float, offsetof(mindustry_gen_WeatherState, F_y), "F", 1 },
	{ "y_LAST_", &class_float, offsetof(mindustry_gen_WeatherState, F_y_LAST_), "F", 130 },
	{ "y_TARGET_", &class_float, offsetof(mindustry_gen_WeatherState, F_y_TARGET_), "F", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_WeatherState, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_WeatherState_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_WeatherState_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "windVector", (intptr_t) M_mindustry_gen_WeatherState_windVector_R_arc_math_geom_Vec2, VTABLE_mindustry_gen_WeatherState_windVector_R_arc_math_geom_Vec2, "()Larc/math/geom/Vec2;", 1 },
	{ "effectTimer", (intptr_t) M_mindustry_gen_WeatherState_effectTimer_R_float, VTABLE_mindustry_gen_WeatherState_effectTimer_R_float, "()F", 1 },
	{ "intensity", (intptr_t) M_mindustry_gen_WeatherState_intensity_R_float, VTABLE_mindustry_gen_WeatherState_intensity_R_float, "()F", 1 },
	{ "life", (intptr_t) M_mindustry_gen_WeatherState_life_R_float, VTABLE_mindustry_gen_WeatherState_life_R_float, "()F", 1 },
	{ "opacity", (intptr_t) M_mindustry_gen_WeatherState_opacity_R_float, VTABLE_mindustry_gen_WeatherState_opacity_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_gen_WeatherState_x_R_float, VTABLE_mindustry_gen_WeatherState_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_WeatherState_y_R_float, VTABLE_mindustry_gen_WeatherState_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_WeatherState_classId_R_int, VTABLE_mindustry_gen_WeatherState_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_WeatherState_id_R_int, VTABLE_mindustry_gen_WeatherState_id_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_WeatherState_toString_R_java_lang_String, VTABLE_mindustry_gen_WeatherState_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_WeatherState_lastUpdated_R_long, VTABLE_mindustry_gen_WeatherState_lastUpdated_R_long, "()J", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_WeatherState_updateSpacing_R_long, VTABLE_mindustry_gen_WeatherState_updateSpacing_R_long, "()J", 1 },
	{ "weather", (intptr_t) M_mindustry_gen_WeatherState_weather_R_mindustry_type_Weather, VTABLE_mindustry_gen_WeatherState_weather_R_mindustry_type_Weather, "()Lmindustry/type/Weather;", 1 },
	{ "effectTimer", (intptr_t) M_mindustry_gen_WeatherState_effectTimer_float, VTABLE_mindustry_gen_WeatherState_effectTimer_float, "(F)V", 1 },
	{ "id", (intptr_t) M_mindustry_gen_WeatherState_id_int, VTABLE_mindustry_gen_WeatherState_id_int, "(I)V", 1 },
	{ "intensity", (intptr_t) M_mindustry_gen_WeatherState_intensity_float, VTABLE_mindustry_gen_WeatherState_intensity_float, "(F)V", 1 },
	{ "lastUpdated", (intptr_t) M_mindustry_gen_WeatherState_lastUpdated_long, VTABLE_mindustry_gen_WeatherState_lastUpdated_long, "(J)V", 1 },
	{ "life", (intptr_t) M_mindustry_gen_WeatherState_life_float, VTABLE_mindustry_gen_WeatherState_life_float, "(F)V", 1 },
	{ "opacity", (intptr_t) M_mindustry_gen_WeatherState_opacity_float, VTABLE_mindustry_gen_WeatherState_opacity_float, "(F)V", 1 },
	{ "setIndex__all", (intptr_t) M_mindustry_gen_WeatherState_setIndex__all_int, VTABLE_mindustry_gen_WeatherState_setIndex__all_int, "(I)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_WeatherState_setIndex__draw_int, VTABLE_mindustry_gen_WeatherState_setIndex__draw_int, "(I)V", 1 },
	{ "setIndex__sync", (intptr_t) M_mindustry_gen_WeatherState_setIndex__sync_int, VTABLE_mindustry_gen_WeatherState_setIndex__sync_int, "(I)V", 1 },
	{ "setIndex__weather", (intptr_t) M_mindustry_gen_WeatherState_setIndex__weather_int, VTABLE_mindustry_gen_WeatherState_setIndex__weather_int, "(I)V", 1 },
	{ "updateSpacing", (intptr_t) M_mindustry_gen_WeatherState_updateSpacing_long, VTABLE_mindustry_gen_WeatherState_updateSpacing_long, "(J)V", 1 },
	{ "weather", (intptr_t) M_mindustry_gen_WeatherState_weather_mindustry_type_Weather, VTABLE_mindustry_gen_WeatherState_weather_mindustry_type_Weather, "(Lmindustry/type/Weather;)V", 1 },
	{ "windVector", (intptr_t) M_mindustry_gen_WeatherState_windVector_arc_math_geom_Vec2, VTABLE_mindustry_gen_WeatherState_windVector_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_WeatherState_x_float, VTABLE_mindustry_gen_WeatherState_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_WeatherState_y_float, VTABLE_mindustry_gen_WeatherState_y_float, "(F)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_WeatherState_read_arc_util_io_Reads, VTABLE_mindustry_gen_WeatherState_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_WeatherState_write_arc_util_io_Writes, VTABLE_mindustry_gen_WeatherState_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_WeatherState_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_WeatherState_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_WeatherState_as_R_java_lang_Object, VTABLE_mindustry_gen_WeatherState_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_WeatherState_isAdded_R_boolean, VTABLE_mindustry_gen_WeatherState_isAdded_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_WeatherState_isLocal_R_boolean, VTABLE_mindustry_gen_WeatherState_isLocal_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_WeatherState_isRemote_R_boolean, VTABLE_mindustry_gen_WeatherState_isRemote_R_boolean, "()Z", 1 },
	{ "isSyncHidden", (intptr_t) M_mindustry_gen_WeatherState_isSyncHidden_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_WeatherState_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_WeatherState_onSolid_R_boolean, VTABLE_mindustry_gen_WeatherState_onSolid_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_WeatherState_serialize_R_boolean, VTABLE_mindustry_gen_WeatherState_serialize_R_boolean, "()Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_WeatherState_clipSize_R_float, VTABLE_mindustry_gen_WeatherState_clipSize_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_WeatherState_getX_R_float, VTABLE_mindustry_gen_WeatherState_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_WeatherState_getY_R_float, VTABLE_mindustry_gen_WeatherState_getY_R_float, "()F", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_WeatherState_tileX_R_int, VTABLE_mindustry_gen_WeatherState_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_WeatherState_tileY_R_int, VTABLE_mindustry_gen_WeatherState_tileY_R_int, "()I", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_WeatherState_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_WeatherState_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_WeatherState_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_WeatherState_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_WeatherState_create_R_mindustry_gen_WeatherState, 0, "()Lmindustry/gen/WeatherState;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_WeatherState_add, VTABLE_mindustry_gen_WeatherState_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_WeatherState_afterRead, VTABLE_mindustry_gen_WeatherState_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_WeatherState_afterReadAll, VTABLE_mindustry_gen_WeatherState_afterReadAll, "()V", 1 },
	{ "afterSync", (intptr_t) M_mindustry_gen_WeatherState_afterSync, VTABLE_mindustry_gen_WeatherState_afterSync, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_WeatherState_beforeWrite, VTABLE_mindustry_gen_WeatherState_beforeWrite, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_WeatherState_draw, VTABLE_mindustry_gen_WeatherState_draw, "()V", 1 },
	{ "handleSyncHidden", (intptr_t) M_mindustry_gen_WeatherState_handleSyncHidden, VTABLE_mindustry_gen_WeatherState_handleSyncHidden, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_gen_WeatherState_init_mindustry_type_Weather, VTABLE_mindustry_gen_WeatherState_init_mindustry_type_Weather, "(Lmindustry/type/Weather;)V", 1 },
	{ "interpolate", (intptr_t) M_mindustry_gen_WeatherState_interpolate, VTABLE_mindustry_gen_WeatherState_interpolate, "()V", 1 },
	{ "readSync", (intptr_t) M_mindustry_gen_WeatherState_readSync_arc_util_io_Reads, VTABLE_mindustry_gen_WeatherState_readSync_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "readSyncManual", (intptr_t) M_mindustry_gen_WeatherState_readSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_WeatherState_readSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_WeatherState_remove, VTABLE_mindustry_gen_WeatherState_remove, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_gen_WeatherState_reset, VTABLE_mindustry_gen_WeatherState_reset, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_WeatherState_set_arc_math_geom_Position, VTABLE_mindustry_gen_WeatherState_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_WeatherState_set_float_float, VTABLE_mindustry_gen_WeatherState_set_float_float, "(FF)V", 1 },
	{ "snapInterpolation", (intptr_t) M_mindustry_gen_WeatherState_snapInterpolation, VTABLE_mindustry_gen_WeatherState_snapInterpolation, "()V", 1 },
	{ "snapSync", (intptr_t) M_mindustry_gen_WeatherState_snapSync, VTABLE_mindustry_gen_WeatherState_snapSync, "()V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_WeatherState_trns_arc_math_geom_Position, VTABLE_mindustry_gen_WeatherState_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_WeatherState_trns_float_float, VTABLE_mindustry_gen_WeatherState_trns_float_float, "(FF)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_WeatherState_update, VTABLE_mindustry_gen_WeatherState_update, "()V", 1 },
	{ "writeSync", (intptr_t) M_mindustry_gen_WeatherState_writeSync_arc_util_io_Writes, VTABLE_mindustry_gen_WeatherState_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "writeSyncManual", (intptr_t) M_mindustry_gen_WeatherState_writeSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_gen_WeatherState_writeSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1 },
	{ "lambda$draw$1", (intptr_t) M_mindustry_gen_WeatherState_lambda$draw$1, VTABLE_mindustry_gen_WeatherState_lambda$draw$1, "()V", 4098 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_gen_WeatherState_lambda$draw$0, VTABLE_mindustry_gen_WeatherState_lambda$draw$0, "()V", 4098 },
};

Class class_mindustry_gen_WeatherState{
		.nativeName = (intptr_t) "mindustry/gen/WeatherState",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_WeatherState),
		.classVtable = (intptr_t) vtable_mindustry_gen_WeatherState,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_WeatherState,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_WeatherState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 10,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 21,
		.nativeFields = (intptr_t) fields,
		.methodCount = 73,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 89,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_WeatherState = registerClass(&class_mindustry_gen_WeatherState);

}
