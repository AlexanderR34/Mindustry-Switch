#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/payloads/BuildPayload_invoke_arc_func_FloatFloatf_1.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/func/FloatFloatf.h"
#include "mindustry/gen/Building.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/world/blocks/payloads/BuildPayload_invoke_arc_func_Prov_1.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "mindustry/world/Tile.h"
#include "mindustry/game/Team.h"
#include "arc/math/geom/Position.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_world_blocks_payloads_BuildPayload(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_payloads_BuildPayload *) object;
	if (self->F_build)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_build)->clazz)->markFunction)((jobject) self->F_build, mark, depth + 1);
}

void clinit_mindustry_world_blocks_payloads_BuildPayload(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_world_blocks_payloads_BuildPayload_mindustry_world_Block_mindustry_game_Team(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_BuildPayload(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_newBuilding_R_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Block_newBuilding_R_mindustry_gen_Building])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_create_mindustry_world_Block_mindustry_game_Team_R_mindustry_gen_Building])(ctx, sp[1].o, (frame[1].o), (frame[2].o));
	((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK(sp[0].o))->F_build = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_emptyTile;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_blocks_payloads_BuildPayload_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_BuildPayload(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:block", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:place", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	((func_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:place", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_block;
	sp[2].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[2].o))->F_team;
	jint temp0 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_BuildPayload_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_world_blocks_payloads_BuildPayload_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_BuildPayload_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int_arc_func_Prov])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_dropped) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_dropped])(ctx, sp[0].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_BuildPayload_isDead_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:isDead", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_dead);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_payloads_BuildPayload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:contentEquals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(48);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_payloads_BuildPayload)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_BuildPayload, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_block;
	if (sp[0].o != sp[1].o) goto label_1;
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

jobject M_mindustry_world_blocks_payloads_BuildPayload_content_R_mindustry_ctype_UnlockableContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:content", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_BuildPayload_update_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(58);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_updateInUnits) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitPayloadUpdate) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_alwaysUpdateInUnits) != 0) goto label_1;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_emptyTile;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_updatePayload_mindustry_gen_Unit_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_BuildPayload_destroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:destroyed", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_dead = (jint(1));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_onDestroyed) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onDestroyed])(ctx, sp[0].o);
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_afterDestroyed) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_afterDestroyed])(ctx, sp[0].o);
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_BuildPayload_requirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:requirements", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_BuildPayload_buildTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:buildTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildTime);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_BuildPayload_x_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:x", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_BuildPayload_y_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:y", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_payloads_BuildPayload_size_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:size", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	popStackFrame(ctx);
	return (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8))));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_BuildPayload_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_remove])(ctx, sp[0].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_BuildPayload_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:write", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(103);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(104);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_block;
	((func_arc_util_io_Writes_s_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_s_int])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	LINE_NUMBER(105);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_version_R_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_version_R_byte])(ctx, sp[1].o);
	((func_arc_util_io_Writes_b_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Writes_b_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_writeAll_arc_util_io_Writes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_writeAll_arc_util_io_Writes])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_BuildPayload_set_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_set_float_float])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_BuildPayload_drawShadow_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:drawShadow", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	SM_mindustry_graphics_Drawf_squareShadow_float_float_float_float(ctx, temp0, temp1, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) * (jfloat(1.85f))), (frame[1].f));
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_payloads_BuildPayload_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:draw", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[1].f = temp0;
	LINE_NUMBER(122);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((frame[1].f) - (jfloat(1,000000e-03f))));
	LINE_NUMBER(123);
	((func_mindustry_world_blocks_payloads_BuildPayload_drawShadow_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_BuildPayload_drawShadow_float])(ctx, (frame[0].o), (jfloat(1)));
	LINE_NUMBER(124);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[1].f));
	LINE_NUMBER(125);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_payloads_BuildPayload_invoke_arc_func_FloatFloatf_1(ctx);
		auto proxy = (mindustry_world_blocks_payloads_BuildPayload_invoke_arc_func_FloatFloatf_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_payloads_BuildPayload_invoke_arc_func_FloatFloatf_1);
		proxy->F_field0 = (frame[1].f);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_zTransform_arc_func_FloatFloatf(ctx, sp[0].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_emptyTile;
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	((func_mindustry_gen_Building_payloadDraw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_payloadDraw])(ctx, sp[0].o);
	LINE_NUMBER(131);
	SM_arc_graphics_g2d_Draw_zTransform(ctx);
	LINE_NUMBER(132);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[1].f));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_BuildPayload_icon_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_blocks_payloads_BuildPayload_lambda$draw$0_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:lambda$draw$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_payloads_BuildPayload(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(126);
	if ((floatCompare((frame[1].f), (jfloat(91.0f)), -1)) < 0) goto label_1;
	}
	INST_FLOAD(1);
	goto label_2;
label_1:;
	{
	LINE_NUMBER(127);
	jfloat temp0 = jfloat(1,100000e-03f);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((frame[1].f) - (frame[0].f)) / (jfloat(100.0f))), (jfloat(-9,000000e-04f)), (jfloat(0.9f)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (temp1 + (frame[0].f)), (jfloat(89.0f)));
	jfloat temp3 = temp0 + temp2;
	sp[0].f = temp3;
	sp += 1;
	}
label_2:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_payloads_BuildPayload_lambda$place$0_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/payloads/BuildPayload:lambda$place$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_world_blocks_payloads_BuildPayload *) NULL_CHECK((frame[0].o)))->F_build;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_payloads_BuildPayload[] {
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
	(void *) M_mindustry_world_blocks_payloads_Payload_getX_R_float,
	(void *) M_mindustry_world_blocks_payloads_Payload_getY_R_float,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_set_float_float_float,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_draw,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_drawShadow_float,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_size_R_float,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_x_R_float,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_y_R_float,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_requirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_buildTime_R_float,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_update_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_isDead_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_Payload_dump_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_Payload_fits_float_R_boolean,
	(void *) M_mindustry_world_blocks_payloads_Payload_rotation_R_float,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_destroyed,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_write_arc_util_io_Writes,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_icon_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_content_R_mindustry_ctype_UnlockableContent,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_remove,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile_int,
	(void *) M_mindustry_world_blocks_payloads_BuildPayload_lambda$place$0_R_mindustry_gen_Building,
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
	{ "set", "(FFF)V" },
	{ "draw", "()V" },
	{ "drawShadow", "(F)V" },
	{ "size", "()F" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "requirements", "()[Lmindustry/type/ItemStack;" },
	{ "buildTime", "()F" },
	{ "contentEquals", "(Lmindustry/world/blocks/payloads/Payload;)Z" },
	{ "update", "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "isDead", "()Z" },
	{ "dump", "()Z" },
	{ "fits", "(F)Z" },
	{ "rotation", "()F" },
	{ "destroyed", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "icon", "()Larc/graphics/g2d/TextureRegion;" },
	{ "content", "()Lmindustry/ctype/UnlockableContent;" },
	{ "remove", "()V" },
	{ "block", "()Lmindustry/world/Block;" },
	{ "place", "(Lmindustry/world/Tile;)V" },
	{ "place", "(Lmindustry/world/Tile;I)V" },
	{ "lambda$place$0", "()Lmindustry/gen/Building;" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_payloads_Payload, };

static FieldMetadata fields[] {
	{ "build", &class_mindustry_gen_Building, offsetof(mindustry_world_blocks_payloads_BuildPayload, F_build), "Lmindustry/gen/Building;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_BuildPayload_mindustry_world_Block_mindustry_game_Team, 0, "(Lmindustry/world/Block;Lmindustry/game/Team;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_blocks_payloads_BuildPayload_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 1 },
	{ "block", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block, VTABLE_mindustry_world_blocks_payloads_BuildPayload_block_R_mindustry_world_Block, "()Lmindustry/world/Block;", 1 },
	{ "place", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile, VTABLE_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "place", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile_int, VTABLE_mindustry_world_blocks_payloads_BuildPayload_place_mindustry_world_Tile_int, "(Lmindustry/world/Tile;I)V", 1 },
	{ "isDead", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_isDead_R_boolean, VTABLE_mindustry_world_blocks_payloads_BuildPayload_isDead_R_boolean, "()Z", 1 },
	{ "contentEquals", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean, VTABLE_mindustry_world_blocks_payloads_BuildPayload_contentEquals_mindustry_world_blocks_payloads_Payload_R_boolean, "(Lmindustry/world/blocks/payloads/Payload;)Z", 1 },
	{ "content", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_content_R_mindustry_ctype_UnlockableContent, VTABLE_mindustry_world_blocks_payloads_BuildPayload_content_R_mindustry_ctype_UnlockableContent, "()Lmindustry/ctype/UnlockableContent;", 1 },
	{ "update", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_update_mindustry_gen_Unit_mindustry_gen_Building, VTABLE_mindustry_world_blocks_payloads_BuildPayload_update_mindustry_gen_Unit_mindustry_gen_Building, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 1 },
	{ "destroyed", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_destroyed, VTABLE_mindustry_world_blocks_payloads_BuildPayload_destroyed, "()V", 1 },
	{ "requirements", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_requirements_R_Array1_mindustry_type_ItemStack, VTABLE_mindustry_world_blocks_payloads_BuildPayload_requirements_R_Array1_mindustry_type_ItemStack, "()[Lmindustry/type/ItemStack;", 1 },
	{ "buildTime", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_buildTime_R_float, VTABLE_mindustry_world_blocks_payloads_BuildPayload_buildTime_R_float, "()F", 1 },
	{ "x", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_x_R_float, VTABLE_mindustry_world_blocks_payloads_BuildPayload_x_R_float, "()F", 1 },
	{ "y", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_y_R_float, VTABLE_mindustry_world_blocks_payloads_BuildPayload_y_R_float, "()F", 1 },
	{ "size", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_size_R_float, VTABLE_mindustry_world_blocks_payloads_BuildPayload_size_R_float, "()F", 1 },
	{ "remove", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_remove, VTABLE_mindustry_world_blocks_payloads_BuildPayload_remove, "()V", 1 },
	{ "write", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_write_arc_util_io_Writes, VTABLE_mindustry_world_blocks_payloads_BuildPayload_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1 },
	{ "set", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_set_float_float_float, VTABLE_mindustry_world_blocks_payloads_BuildPayload_set_float_float_float, "(FFF)V", 1 },
	{ "drawShadow", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_drawShadow_float, VTABLE_mindustry_world_blocks_payloads_BuildPayload_drawShadow_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_draw, VTABLE_mindustry_world_blocks_payloads_BuildPayload_draw, "()V", 1 },
	{ "icon", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_icon_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_payloads_BuildPayload_icon_R_arc_graphics_g2d_TextureRegion, "()Larc/graphics/g2d/TextureRegion;", 1 },
	{ "lambda$draw$0", (intptr_t) SM_mindustry_world_blocks_payloads_BuildPayload_lambda$draw$0_float_float_R_float, 0, "(FF)F", 4106 },
	{ "lambda$place$0", (intptr_t) M_mindustry_world_blocks_payloads_BuildPayload_lambda$place$0_R_mindustry_gen_Building, VTABLE_mindustry_world_blocks_payloads_BuildPayload_lambda$place$0_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 4098 },
};

Class class_mindustry_world_blocks_payloads_BuildPayload{
		.nativeName = (intptr_t) "mindustry/world/blocks/payloads/BuildPayload",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_payloads_BuildPayload),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_payloads_BuildPayload,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_payloads_BuildPayload,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_payloads_BuildPayload,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_payloads_BuildPayload = registerClass(&class_mindustry_world_blocks_payloads_BuildPayload);

}
