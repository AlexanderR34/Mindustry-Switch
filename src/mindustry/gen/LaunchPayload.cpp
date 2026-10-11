#include "mindustry/gen/LaunchPayload.h"
#include "arc/Events.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/blocks/campaign/LaunchPad.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/LaunchPayload.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/math/Interp.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowIn.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Timedc.h"
#include "java/lang/Object.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/io/TypeIO.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "arc/util/io/Writes.h"
#include "mindustry/type/ItemSeq.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/game/FogControl.h"
#include "arc/math/Scaled.h"
#include "mindustry/gen/Unitc.h"
#include "arc/graphics/g2d/Fill.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Teamc.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/type/Sector.h"
#include "mindustry/gen/LaunchPayloadc.h"
#include "arc/util/io/Reads.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/game/Teams.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/game/EventType_LaunchItemEvent.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Planet.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"

extern "C" {


void mark_mindustry_gen_LaunchPayload(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_LaunchPayload *) object;
	if (self->F_in)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_in)->clazz)->markFunction)((jobject) self->F_in, mark, depth + 1);
	if (self->F_stacks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stacks)->clazz)->markFunction)((jobject) self->F_stacks, mark, depth + 1);
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
}

void clinit_mindustry_gen_LaunchPayload(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_gen_LaunchPayload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LaunchPayload(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(115);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_entities_EntityGroup_nextId_R_int(ctx);
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_id = temp0;
	LINE_NUMBER(93);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_in = (jref) sp[1].o;
	LINE_NUMBER(95);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(97);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_stacks = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:buildOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:tileOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:closestCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jfloat temp0 = (jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_closestCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:closestEnemyCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	jfloat temp0 = (jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_closestEnemyCore_float_float_mindustry_game_Team_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:core", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_stacks_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:stacks", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_stacks;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_in_R_arc_util_Interval(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:in", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_in;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchPayload_lifetime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:lifetime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_lifetime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchPayload_time_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:time", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_time);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchPayload_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchPayload_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LaunchPayload_classId_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:classId", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return (15);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LaunchPayload_id_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:id", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_id);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"LaunchPayload#\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_id)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_team_R_mindustry_game_Team(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:team", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_team;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_id_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:id", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(200);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_in_arc_util_Interval(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:in", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(205);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_in = (jref) (frame[1].o);
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_lifetime_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:lifetime", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(210);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_lifetime = (frame[1].f);
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_setIndex__all_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:setIndex__all", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(215);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_index__all = (frame[1].i);
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_setIndex__draw_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:setIndex__draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(220);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_index__draw = (frame[1].i);
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_stacks_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:stacks", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(225);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_stacks = (jref) (frame[1].o);
	LINE_NUMBER(226);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_team_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:team", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_time_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:time", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(235);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_time = (frame[1].f);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_x_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:x", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(240);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_y_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:y", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(245);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y = (frame[1].f);
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:read", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	jint temp0 = (jint)((func_arc_util_io_Reads_s_R_short) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_s_R_short])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(251);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_lifetime = temp0;
	LINE_NUMBER(253);
	jint temp1 = (jint)((func_arc_util_io_Reads_i_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_i_R_int])(ctx, (frame[1].o));
	frame[3].i = temp1;
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_stacks;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(255);
	frame[4].i = (jint(0));
	}
label_7:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readItems_arc_util_io_Reads_R_mindustry_type_ItemStack(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(257);
	if ((frame[5].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_stacks;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_11:;
	{
	LINE_NUMBER(255);
	INST_IINC(4, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_io_TypeIO_readTeam_arc_util_io_Reads_R_mindustry_game_Team(ctx, (frame[1].o));
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_team = (jref) sp[1].o;
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(261);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_x = temp1;
	LINE_NUMBER(262);
	sp[0].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_arc_util_io_Reads_f_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Reads_f_R_float])(ctx, (frame[1].o));
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_y = temp2;
	LINE_NUMBER(263);
	goto label_16;
	}
label_2:;
	{
	LINE_NUMBER(264);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown revision '\u0001' for entity type 'LaunchPayloadComp'"_j.string, 1, boxShort(ctx, (frame[2].i)));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(267);
	((func_mindustry_gen_LaunchPayload_afterRead) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_afterRead])(ctx, (frame[0].o));
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(273);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_lifetime));
	LINE_NUMBER(274);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_stacks;
	((func_arc_util_io_Writes_i_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_i_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(275);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_stacks;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_stacks;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[2].i));
	SM_mindustry_io_TypeIO_writeItems_arc_util_io_Writes_mindustry_type_ItemStack(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_type_ItemStack, sp[1].o)));
	LINE_NUMBER(275);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(278);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_team;
	SM_mindustry_io_TypeIO_writeTeam_arc_util_io_Writes_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(279);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_time));
	LINE_NUMBER(280);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(281);
	((func_arc_util_io_Writes_f_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_f_float])(ctx, (frame[1].o), ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:self", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_as_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:as", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LaunchPayload_cheating_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:cheating", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_cheat);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LaunchPayload_inFogTo_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:inFogTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_fogControl;
	jint temp0 = (jint)((func_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean])(ctx, sp[0].o, (frame[1].o), ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y));
	if (temp0 != 0) goto label_1;
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

jbool M_mindustry_gen_LaunchPayload_isAdded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:isAdded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_added);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_gen_LaunchPayload_isLocal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:isLocal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
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

jbool M_mindustry_gen_LaunchPayload_isRemote_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:isRemote", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(317);
	frame[2].o = (frame[0].o);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unitc)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unitc, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unitc_isPlayer_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Unitc, INDEX_mindustry_gen_Unitc_isPlayer_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_LaunchPayload_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_isLocal_R_boolean])(ctx, (frame[0].o));
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

jbool M_mindustry_gen_LaunchPayload_onSolid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:onSolid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(323);
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

jbool M_mindustry_gen_LaunchPayload_serialize_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:serialize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchPayload_clipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:clipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (jfloat(3,402823e+38f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchPayload_cx_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:cx", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	jfloat temp0 = (jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow2In;
	jfloat temp1 = (jfloat)((func_mindustry_gen_LaunchPayload_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchPayload_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(12.0f);
	jint temp3 = (jint)((func_mindustry_gen_LaunchPayload_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_id_R_int])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((temp3 + (jint(3))))), (jfloat(4.0f)));
	popStackFrame(ctx);
	return (temp0 + (temp1 * (temp2 + temp4)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchPayload_cy_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:cy", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	jfloat temp0 = (jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow5In;
	jfloat temp1 = (jfloat)((func_mindustry_gen_LaunchPayload_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchPayload_fin_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = jfloat(100.0f);
	jint temp3 = (jint)((func_mindustry_gen_LaunchPayload_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_id_R_int])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong((temp3 + (jint(2))))), (jfloat(30.0f)));
	popStackFrame(ctx);
	return (temp0 + (temp1 * (temp2 + temp4)));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchPayload_fin_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:fin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_time) / ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_lifetime));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchPayload_getX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:getX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_gen_LaunchPayload_getY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:getY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y);
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LaunchPayload_tileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:tileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_gen_LaunchPayload_tileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:tileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(367);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_gen_LaunchPayload_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:blockOn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(373);
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

jobject M_mindustry_gen_LaunchPayload_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:floorOn", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(379);
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

jobject SM_mindustry_gen_LaunchPayload_create_R_mindustry_gen_LaunchPayload(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:create", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_LaunchPayload(ctx);
	{
	LINE_NUMBER(383);
	clinit_mindustry_gen_LaunchPayload(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LaunchPayload);
	init_mindustry_gen_LaunchPayload(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	if (((jint)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_added) != (jint(1))) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(388);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_all;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_index__all = temp0;
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_draw;
	jint temp1 = (jint)((func_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int])(ctx, sp[1].o, (frame[0].o));
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_index__draw = temp1;
	LINE_NUMBER(391);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_added = (jint(1));
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_afterRead(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:afterRead", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(396);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_afterReadAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:afterReadAll", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(400);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_beforeWrite(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:beforeWrite", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(404);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:draw", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp0 = (jfloat)((func_mindustry_gen_LaunchPayload_fout_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchPayload_fout_arc_math_Interp_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = temp0;
	LINE_NUMBER(413);
	frame[2].f = ((((jfloat(1)) - (frame[1].f)) * (jfloat(1.3f))) + (jfloat(1)));
	LINE_NUMBER(414);
	jfloat temp1 = (jfloat)((func_mindustry_gen_LaunchPayload_cx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_cx_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	LINE_NUMBER(415);
	jfloat temp2 = (jfloat)((func_mindustry_gen_LaunchPayload_cy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_cy_R_float])(ctx, (frame[0].o));
	frame[4].f = temp2;
	LINE_NUMBER(416);
	jfloat temp3 = (jfloat)((func_mindustry_gen_LaunchPayload_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_fin_R_float])(ctx, (frame[0].o));
	jfloat temp4 = jfloat(130.0f);
	jint temp5 = (jint)((func_mindustry_gen_LaunchPayload_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_id_R_int])(ctx, (frame[0].o));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_randomSeedRange_long_float_R_float(ctx, (jlong(temp5)), (jfloat(50.0f)));
	frame[5].f = (temp3 * (temp4 + temp6));
	LINE_NUMBER(417);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(110.001f)));
	LINE_NUMBER(418);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_engine;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(419);
	jfloat temp7 = jfloat(0.2f);
	jfloat temp8 = (jfloat)((func_mindustry_gen_LaunchPayload_fslope_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_fslope_R_float])(ctx, (frame[0].o));
	frame[6].f = (temp7 + temp8);
	LINE_NUMBER(420);
	jfloat temp9 = frame[3].f;
	jfloat temp10 = frame[4].f;
	jint temp11 = 10;
	jfloat temp12 = (jfloat(25.0f)) * (((frame[6].f) + (frame[2].f)) - (jfloat(1)));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c2;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_engine;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_engine;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(0)));
	SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color(ctx, temp9, temp10, temp11, temp12, sp[0].o, sp[1].o);
	LINE_NUMBER(421);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[1].f));
	LINE_NUMBER(422);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (jint(4))) goto label_12;
	}
	{
	LINE_NUMBER(423);
	SM_mindustry_graphics_Drawf_tri_float_float_float_float_float(ctx, (frame[3].f), (frame[4].f), (jfloat(6.0f)), ((jfloat(40.0f)) * (((frame[6].f) + (frame[2].f)) - (jfloat(1)))), (((jfloat((frame[7].i))) * (jfloat(90.0f))) + (frame[5].f)));
	LINE_NUMBER(422);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(425);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(426);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(129.0f)));
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_mindustry_gen_LaunchPayload_blockOn_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_blockOn_R_mindustry_world_Block])(ctx, (frame[0].o));
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_world_blocks_campaign_LaunchPad)) == 0) goto label_17;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_campaign_LaunchPad, (frame[9].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK((frame[8].o)))->F_podRegion;
	sp += 1;
	goto label_19;
	}
label_17:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"launchpod"_j))));
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(428);
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, (frame[7].o));
	frame[2].f = (temp0 * temp1);
	LINE_NUMBER(429);
	frame[8].f = ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[7].o)))->F_width))) * (frame[2].f));
	LINE_NUMBER(430);
	frame[9].f = ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[7].o)))->F_height))) * (frame[2].f));
	LINE_NUMBER(431);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[1].f));
	LINE_NUMBER(432);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[7].o), (frame[3].f), (frame[4].f), (frame[8].f), (frame[9].f), (frame[5].f));
	LINE_NUMBER(433);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp2 = jfloat(225.0f);
	sp[1].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[2].o = (jobject)SF_arc_math_Interp_pow3In;
	jfloat temp3 = (jfloat)((func_mindustry_gen_LaunchPayload_fin_arc_math_Interp_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_LaunchPayload_fin_arc_math_Interp_R_float])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, (temp3 * (jfloat(250.0f))));
	LINE_NUMBER(434);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(116.0f)));
	LINE_NUMBER(435);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), ((jfloat(0.22f)) * (frame[1].f)));
	LINE_NUMBER(436);
	sp[0].o = frame[7].o;
	jfloat temp4 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp6 = frame[4].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp5, (temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (frame[8].f), (frame[9].f), (frame[5].f));
	LINE_NUMBER(437);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:remove", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(442);
	if (((jint)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_added) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(443);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_all;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_index__all));
	LINE_NUMBER(444);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_index__all = (jint(-1));
	LINE_NUMBER(445);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_draw;
	((func_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int])(ctx, sp[0].o, (frame[0].o), ((jint)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_index__draw));
	LINE_NUMBER(446);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_index__draw = (jint(-1));
	LINE_NUMBER(449);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_added = (jint(0));
	LINE_NUMBER(453);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	goto label_7;
label_8:;
	{
	LINE_NUMBER(454);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_destination;
	frame[1].o = sp[0].o;
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_mindustry_gen_LaunchPayload_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_7;
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(456);
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(457);
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_stacks;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	LINE_NUMBER(458);
	((func_mindustry_type_ItemSeq_add_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_ItemStack])(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(459);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleItemExport_mindustry_type_ItemStack])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(460);
	clinit_mindustry_game_EventType$LaunchItemEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$LaunchItemEvent);
	init_mindustry_game_EventType$LaunchItemEvent_mindustry_type_ItemStack(ctx, sp[0].o, (frame[4].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(461);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(462);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_legacyLaunchPads) == 0) goto label_7;
	}
	{
	LINE_NUMBER(463);
	((func_mindustry_type_Sector_addItems_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_addItems_mindustry_type_ItemSeq])(ctx, (frame[1].o), (frame[2].o));
	}
label_7:;
	LINE_NUMBER(467);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(471);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_LaunchPayload_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchPayload_set_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(476);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(477);
	((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	LINE_NUMBER(478);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:trns", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(482);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_mindustry_gen_LaunchPayload_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_LaunchPayload_trns_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(483);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:trns", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(487);
	((func_mindustry_gen_LaunchPayload_set_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_set_float_float])(ctx, (frame[0].o), (((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].f)), (((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].f)));
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_gen_LaunchPayload_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/LaunchPayload:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(496);
	frame[1].f = (jfloat(3.0f));
	LINE_NUMBER(497);
	sp[0].o = (jobject)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_in;
	jfloat temp0 = jfloat(4.0f);
	jfloat temp1 = (jfloat)((func_mindustry_gen_LaunchPayload_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_fin_R_float])(ctx, (frame[0].o));
	jint temp2 = (jint)((func_arc_util_Interval_get_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_float_R_boolean])(ctx, sp[0].o, (temp0 - (temp1 * (jfloat(2)))));
	if (temp2 == 0) goto label_2;
	}
	{
	LINE_NUMBER(498);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rocketSmoke;
	jfloat temp0 = (jfloat)((func_mindustry_gen_LaunchPayload_cx_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_cx_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[1].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((func_mindustry_gen_LaunchPayload_cy_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_cy_R_float])(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[1].f));
	jfloat temp5 = temp3 + temp4;
	jfloat temp6 = (jfloat)((func_mindustry_gen_LaunchPayload_fin_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_fin_R_float])(ctx, (frame[0].o));
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp2, temp5, temp6);
	}
label_2:;
	{
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_time) + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)), ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_lifetime));
	((mindustry_gen_LaunchPayload *) NULL_CHECK(sp[0].o))->F_time = temp0;
	LINE_NUMBER(504);
	if ((floatCompare(((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_time), ((jfloat)((mindustry_gen_LaunchPayload *) NULL_CHECK((frame[0].o)))->F_lifetime), -1)) < 0) goto label_5;
	}
	{
	LINE_NUMBER(505);
	((func_mindustry_gen_LaunchPayload_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_LaunchPayload_remove])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(508);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_gen_LaunchPayload;
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

	{ // Method closestCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method closestEnemyCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method core
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_gen_LaunchPayload[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_gen_LaunchPayload_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_gen_LaunchPayload_self_R_mindustry_gen_Entityc,
	(void *) M_mindustry_gen_LaunchPayload_as_R_java_lang_Object,
	(void *) M_mindustry_gen_LaunchPayload_isAdded_R_boolean,
	(void *) M_mindustry_gen_LaunchPayload_isLocal_R_boolean,
	(void *) M_mindustry_gen_LaunchPayload_isRemote_R_boolean,
	(void *) M_mindustry_gen_LaunchPayload_serialize_R_boolean,
	(void *) M_mindustry_gen_LaunchPayload_classId_R_int,
	(void *) M_mindustry_gen_LaunchPayload_id_R_int,
	(void *) M_mindustry_gen_LaunchPayload_add,
	(void *) M_mindustry_gen_LaunchPayload_afterRead,
	(void *) M_mindustry_gen_LaunchPayload_afterReadAll,
	(void *) M_mindustry_gen_LaunchPayload_beforeWrite,
	(void *) M_mindustry_gen_LaunchPayload_id_int,
	(void *) M_mindustry_gen_LaunchPayload_read_arc_util_io_Reads,
	(void *) M_mindustry_gen_LaunchPayload_remove,
	(void *) M_mindustry_gen_LaunchPayload_update,
	(void *) M_mindustry_gen_LaunchPayload_write_arc_util_io_Writes,
	(void *) M_mindustry_gen_LaunchPayload_getX_R_float,
	(void *) M_mindustry_gen_LaunchPayload_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_gen_LaunchPayload_floorOn_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_gen_LaunchPayload_buildOn_R_mindustry_gen_Building,
	(void *) M_mindustry_gen_LaunchPayload_onSolid_R_boolean,
	(void *) M_mindustry_gen_LaunchPayload_x_R_float,
	(void *) M_mindustry_gen_LaunchPayload_y_R_float,
	(void *) M_mindustry_gen_LaunchPayload_tileX_R_int,
	(void *) M_mindustry_gen_LaunchPayload_tileY_R_int,
	(void *) M_mindustry_gen_LaunchPayload_blockOn_R_mindustry_world_Block,
	(void *) M_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile,
	(void *) M_mindustry_gen_LaunchPayload_set_arc_math_geom_Position,
	(void *) M_mindustry_gen_LaunchPayload_set_float_float,
	(void *) M_mindustry_gen_LaunchPayload_trns_arc_math_geom_Position,
	(void *) M_mindustry_gen_LaunchPayload_trns_float_float,
	(void *) M_mindustry_gen_LaunchPayload_x_float,
	(void *) M_mindustry_gen_LaunchPayload_y_float,
	(void *) M_mindustry_gen_LaunchPayload_clipSize_R_float,
	(void *) M_mindustry_gen_LaunchPayload_draw,
	(void *) M_mindustry_gen_LaunchPayload_setIndex__all_int,
	(void *) M_mindustry_gen_LaunchPayload_setIndex__draw_int,
	(void *) M_mindustry_gen_LaunchPayload_inFogTo_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_gen_LaunchPayload_cheating_R_boolean,
	(void *) M_mindustry_gen_LaunchPayload_team_R_mindustry_game_Team,
	(void *) M_mindustry_gen_LaunchPayload_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_LaunchPayload_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_LaunchPayload_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_gen_LaunchPayload_team_mindustry_game_Team,
	(void *) M_mindustry_gen_LaunchPayload_fin_R_float,
	(void *) M_arc_math_Scaled_fout_R_float,
	(void *) M_arc_math_Scaled_fout_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_fout_float_R_float,
	(void *) M_arc_math_Scaled_fin_arc_math_Interp_R_float,
	(void *) M_arc_math_Scaled_finpow_R_float,
	(void *) M_arc_math_Scaled_foutpow_R_float,
	(void *) M_arc_math_Scaled_finpowdown_R_float,
	(void *) M_arc_math_Scaled_foutpowdown_R_float,
	(void *) M_arc_math_Scaled_fslope_R_float,
	(void *) M_mindustry_gen_LaunchPayload_lifetime_R_float,
	(void *) M_mindustry_gen_LaunchPayload_time_R_float,
	(void *) M_mindustry_gen_LaunchPayload_lifetime_float,
	(void *) M_mindustry_gen_LaunchPayload_time_float,
	(void *) M_mindustry_gen_LaunchPayload_stacks_R_arc_struct_Seq,
	(void *) M_mindustry_gen_LaunchPayload_in_R_arc_util_Interval,
	(void *) M_mindustry_gen_LaunchPayload_cx_R_float,
	(void *) M_mindustry_gen_LaunchPayload_cy_R_float,
	(void *) M_mindustry_gen_LaunchPayload_in_arc_util_Interval,
	(void *) M_mindustry_gen_LaunchPayload_stacks_arc_struct_Seq,
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
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "fin", "()F" },
	{ "fout", "()F" },
	{ "fout", "(Larc/math/Interp;)F" },
	{ "fout", "(F)F" },
	{ "fin", "(Larc/math/Interp;)F" },
	{ "finpow", "()F" },
	{ "foutpow", "()F" },
	{ "finpowdown", "()F" },
	{ "foutpowdown", "()F" },
	{ "fslope", "()F" },
	{ "lifetime", "()F" },
	{ "time", "()F" },
	{ "lifetime", "(F)V" },
	{ "time", "(F)V" },
	{ "stacks", "()Larc/struct/Seq;" },
	{ "in", "()Larc/util/Interval;" },
	{ "cx", "()F" },
	{ "cy", "()F" },
	{ "in", "(Larc/util/Interval;)V" },
	{ "stacks", "(Larc/struct/Seq;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Drawc, &class_mindustry_gen_Entityc, &class_mindustry_gen_IndexableEntity__all, &class_mindustry_gen_IndexableEntity__draw, &class_mindustry_gen_LaunchPayloadc, &class_mindustry_gen_Posc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Timedc, };

static FieldMetadata fields[] {
	{ "added", &class_boolean, offsetof(mindustry_gen_LaunchPayload, F_added), "Z", 132 },
	{ "id", &class_int, offsetof(mindustry_gen_LaunchPayload, F_id), "I", 129 },
	{ "in", &class_arc_util_Interval, offsetof(mindustry_gen_LaunchPayload, F_in), "Larc/util/Interval;", 129 },
	{ "index__all", &class_int, offsetof(mindustry_gen_LaunchPayload, F_index__all), "I", 132 },
	{ "index__draw", &class_int, offsetof(mindustry_gen_LaunchPayload, F_index__draw), "I", 132 },
	{ "lifetime", &class_float, offsetof(mindustry_gen_LaunchPayload, F_lifetime), "F", 1 },
	{ "stacks", &class_arc_struct_Seq, offsetof(mindustry_gen_LaunchPayload, F_stacks), "Larc/struct/Seq;", 1 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_gen_LaunchPayload, F_team), "Lmindustry/game/Team;", 1 },
	{ "time", &class_float, offsetof(mindustry_gen_LaunchPayload, F_time), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_gen_LaunchPayload, F_x), "F", 1 },
	{ "y", &class_float, offsetof(mindustry_gen_LaunchPayload, F_y), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_LaunchPayload, 0, "()V", 4 },
	{ "buildOn", (intptr_t) M_mindustry_gen_LaunchPayload_buildOn_R_mindustry_gen_Building, VTABLE_mindustry_gen_LaunchPayload_buildOn_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "tileOn", (intptr_t) M_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile, VTABLE_mindustry_gen_LaunchPayload_tileOn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "closestCore", (intptr_t) M_mindustry_gen_LaunchPayload_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_LaunchPayload_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "closestEnemyCore", (intptr_t) M_mindustry_gen_LaunchPayload_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_LaunchPayload_closestEnemyCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "core", (intptr_t) M_mindustry_gen_LaunchPayload_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_gen_LaunchPayload_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "stacks", (intptr_t) M_mindustry_gen_LaunchPayload_stacks_R_arc_struct_Seq, VTABLE_mindustry_gen_LaunchPayload_stacks_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "in", (intptr_t) M_mindustry_gen_LaunchPayload_in_R_arc_util_Interval, VTABLE_mindustry_gen_LaunchPayload_in_R_arc_util_Interval, "()Larc/util/Interval;", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_LaunchPayload_lifetime_R_float, VTABLE_mindustry_gen_LaunchPayload_lifetime_R_float, "()F", 1 },
	{ "time", (intptr_t) M_mindustry_gen_LaunchPayload_time_R_float, VTABLE_mindustry_gen_LaunchPayload_time_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_gen_LaunchPayload_x_R_float, VTABLE_mindustry_gen_LaunchPayload_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_gen_LaunchPayload_y_R_float, VTABLE_mindustry_gen_LaunchPayload_y_R_float, "()F", 1 },
	{ "classId", (intptr_t) M_mindustry_gen_LaunchPayload_classId_R_int, VTABLE_mindustry_gen_LaunchPayload_classId_R_int, "()I", 1 },
	{ "id", (intptr_t) M_mindustry_gen_LaunchPayload_id_R_int, VTABLE_mindustry_gen_LaunchPayload_id_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_mindustry_gen_LaunchPayload_toString_R_java_lang_String, VTABLE_mindustry_gen_LaunchPayload_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "team", (intptr_t) M_mindustry_gen_LaunchPayload_team_R_mindustry_game_Team, VTABLE_mindustry_gen_LaunchPayload_team_R_mindustry_game_Team, "()Lmindustry/game/Team;", 1 },
	{ "id", (intptr_t) M_mindustry_gen_LaunchPayload_id_int, VTABLE_mindustry_gen_LaunchPayload_id_int, "(I)V", 1 },
	{ "in", (intptr_t) M_mindustry_gen_LaunchPayload_in_arc_util_Interval, VTABLE_mindustry_gen_LaunchPayload_in_arc_util_Interval, "(Larc/util/Interval;)V", 1 },
	{ "lifetime", (intptr_t) M_mindustry_gen_LaunchPayload_lifetime_float, VTABLE_mindustry_gen_LaunchPayload_lifetime_float, "(F)V", 1 },
	{ "setIndex__all", (intptr_t) M_mindustry_gen_LaunchPayload_setIndex__all_int, VTABLE_mindustry_gen_LaunchPayload_setIndex__all_int, "(I)V", 1 },
	{ "setIndex__draw", (intptr_t) M_mindustry_gen_LaunchPayload_setIndex__draw_int, VTABLE_mindustry_gen_LaunchPayload_setIndex__draw_int, "(I)V", 1 },
	{ "stacks", (intptr_t) M_mindustry_gen_LaunchPayload_stacks_arc_struct_Seq, VTABLE_mindustry_gen_LaunchPayload_stacks_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "team", (intptr_t) M_mindustry_gen_LaunchPayload_team_mindustry_game_Team, VTABLE_mindustry_gen_LaunchPayload_team_mindustry_game_Team, "(Lmindustry/game/Team;)V", 1 },
	{ "time", (intptr_t) M_mindustry_gen_LaunchPayload_time_float, VTABLE_mindustry_gen_LaunchPayload_time_float, "(F)V", 1 },
	{ "x", (intptr_t) M_mindustry_gen_LaunchPayload_x_float, VTABLE_mindustry_gen_LaunchPayload_x_float, "(F)V", 1 },
	{ "y", (intptr_t) M_mindustry_gen_LaunchPayload_y_float, VTABLE_mindustry_gen_LaunchPayload_y_float, "(F)V", 1 },
	{ "read", (intptr_t) M_mindustry_gen_LaunchPayload_read_arc_util_io_Reads, VTABLE_mindustry_gen_LaunchPayload_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1 },
	{ "write", (intptr_t) M_mindustry_gen_LaunchPayload_write_arc_util_io_Writes, VTABLE_mindustry_gen_LaunchPayload_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "self", (intptr_t) M_mindustry_gen_LaunchPayload_self_R_mindustry_gen_Entityc, VTABLE_mindustry_gen_LaunchPayload_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "as", (intptr_t) M_mindustry_gen_LaunchPayload_as_R_java_lang_Object, VTABLE_mindustry_gen_LaunchPayload_as_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "cheating", (intptr_t) M_mindustry_gen_LaunchPayload_cheating_R_boolean, VTABLE_mindustry_gen_LaunchPayload_cheating_R_boolean, "()Z", 1 },
	{ "inFogTo", (intptr_t) M_mindustry_gen_LaunchPayload_inFogTo_mindustry_game_Team_R_boolean, VTABLE_mindustry_gen_LaunchPayload_inFogTo_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "isAdded", (intptr_t) M_mindustry_gen_LaunchPayload_isAdded_R_boolean, VTABLE_mindustry_gen_LaunchPayload_isAdded_R_boolean, "()Z", 1 },
	{ "isLocal", (intptr_t) M_mindustry_gen_LaunchPayload_isLocal_R_boolean, VTABLE_mindustry_gen_LaunchPayload_isLocal_R_boolean, "()Z", 1 },
	{ "isRemote", (intptr_t) M_mindustry_gen_LaunchPayload_isRemote_R_boolean, VTABLE_mindustry_gen_LaunchPayload_isRemote_R_boolean, "()Z", 1 },
	{ "onSolid", (intptr_t) M_mindustry_gen_LaunchPayload_onSolid_R_boolean, VTABLE_mindustry_gen_LaunchPayload_onSolid_R_boolean, "()Z", 1 },
	{ "serialize", (intptr_t) M_mindustry_gen_LaunchPayload_serialize_R_boolean, VTABLE_mindustry_gen_LaunchPayload_serialize_R_boolean, "()Z", 1 },
	{ "clipSize", (intptr_t) M_mindustry_gen_LaunchPayload_clipSize_R_float, VTABLE_mindustry_gen_LaunchPayload_clipSize_R_float, "()F", 1 },
	{ "cx", (intptr_t) M_mindustry_gen_LaunchPayload_cx_R_float, VTABLE_mindustry_gen_LaunchPayload_cx_R_float, "()F", 1 },
	{ "cy", (intptr_t) M_mindustry_gen_LaunchPayload_cy_R_float, VTABLE_mindustry_gen_LaunchPayload_cy_R_float, "()F", 1 },
	{ "fin", (intptr_t) M_mindustry_gen_LaunchPayload_fin_R_float, VTABLE_mindustry_gen_LaunchPayload_fin_R_float, "()F", 1 },
	{ "getX", (intptr_t) M_mindustry_gen_LaunchPayload_getX_R_float, VTABLE_mindustry_gen_LaunchPayload_getX_R_float, "()F", 1 },
	{ "getY", (intptr_t) M_mindustry_gen_LaunchPayload_getY_R_float, VTABLE_mindustry_gen_LaunchPayload_getY_R_float, "()F", 1 },
	{ "tileX", (intptr_t) M_mindustry_gen_LaunchPayload_tileX_R_int, VTABLE_mindustry_gen_LaunchPayload_tileX_R_int, "()I", 1 },
	{ "tileY", (intptr_t) M_mindustry_gen_LaunchPayload_tileY_R_int, VTABLE_mindustry_gen_LaunchPayload_tileY_R_int, "()I", 1 },
	{ "blockOn", (intptr_t) M_mindustry_gen_LaunchPayload_blockOn_R_mindustry_world_Block, VTABLE_mindustry_gen_LaunchPayload_blockOn_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "floorOn", (intptr_t) M_mindustry_gen_LaunchPayload_floorOn_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_gen_LaunchPayload_floorOn_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "create", (intptr_t) SM_mindustry_gen_LaunchPayload_create_R_mindustry_gen_LaunchPayload, 0, "()Lmindustry/gen/LaunchPayload;", 9 },
	{ "add", (intptr_t) M_mindustry_gen_LaunchPayload_add, VTABLE_mindustry_gen_LaunchPayload_add, "()V", 1 },
	{ "afterRead", (intptr_t) M_mindustry_gen_LaunchPayload_afterRead, VTABLE_mindustry_gen_LaunchPayload_afterRead, "()V", 1 },
	{ "afterReadAll", (intptr_t) M_mindustry_gen_LaunchPayload_afterReadAll, VTABLE_mindustry_gen_LaunchPayload_afterReadAll, "()V", 1 },
	{ "beforeWrite", (intptr_t) M_mindustry_gen_LaunchPayload_beforeWrite, VTABLE_mindustry_gen_LaunchPayload_beforeWrite, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_gen_LaunchPayload_draw, VTABLE_mindustry_gen_LaunchPayload_draw, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_gen_LaunchPayload_remove, VTABLE_mindustry_gen_LaunchPayload_remove, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_LaunchPayload_set_arc_math_geom_Position, VTABLE_mindustry_gen_LaunchPayload_set_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "set", (intptr_t) M_mindustry_gen_LaunchPayload_set_float_float, VTABLE_mindustry_gen_LaunchPayload_set_float_float, "(FF)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_LaunchPayload_trns_arc_math_geom_Position, VTABLE_mindustry_gen_LaunchPayload_trns_arc_math_geom_Position, "(Larc/math/geom/Position;)V", 1 },
	{ "trns", (intptr_t) M_mindustry_gen_LaunchPayload_trns_float_float, VTABLE_mindustry_gen_LaunchPayload_trns_float_float, "(FF)V", 1 },
	{ "update", (intptr_t) M_mindustry_gen_LaunchPayload_update, VTABLE_mindustry_gen_LaunchPayload_update, "()V", 1 },
};

Class class_mindustry_gen_LaunchPayload{
		.nativeName = (intptr_t) "mindustry/gen/LaunchPayload",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_LaunchPayload),
		.classVtable = (intptr_t) vtable_mindustry_gen_LaunchPayload,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_LaunchPayload,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_gen_LaunchPayload,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 8,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 59,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 84,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_LaunchPayload = registerClass(&class_mindustry_gen_LaunchPayload);

}
