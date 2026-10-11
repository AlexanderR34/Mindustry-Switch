#include "mindustry/entities/comp/MinerComp.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/entities/comp/MinerComp.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/gen/Rotc.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/Unitc.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/core/Control.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/math/Mathf.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "mindustry/type/Item.h"
#include "mindustry/type/Sector.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/gen/Itemsc.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {


void mark_mindustry_entities_comp_MinerComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_MinerComp *) object;
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_mineTile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mineTile)->clazz)->markFunction)((jobject) self->F_mineTile, mark, depth + 1);
}

void clinit_mindustry_entities_comp_MinerComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_MinerComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/MinerComp:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_MinerComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_MinerComp_canMine_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/MinerComp:canMine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineTier) < ((jint)((mindustry_type_Item *) NULL_CHECK((frame[1].o)))->F_hardness)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/MinerComp:offloadImmediately", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_mindustry_entities_comp_MinerComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o)))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_MinerComp_mining_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/MinerComp:mining", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_MinerComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o)))->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o)));
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

jobject M_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/MinerComp:getMineResult", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineFloor) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineWalls) == 0) goto label_6;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((func_mindustry_world_Tile_wallDrop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_wallDrop_R_mindustry_type_Item])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(46);
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_canMine_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_canMine_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	INST_ALOAD(2);
	goto label_10;
label_9:;
	INST_ACONST_NULL();
label_10:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/MinerComp:validMine", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(50);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(52);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp2 = (jint)((func_mindustry_entities_comp_MinerComp_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_MinerComp_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_mineRange));
	if (temp2 != 0) goto label_2;
	}
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/MinerComp:validMine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_MinerComp_canMine_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/MinerComp:canMine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineSpeed;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((func_mindustry_entities_comp_MinerComp_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare((temp0 * temp1), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineTier) < 0) goto label_1;
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

void M_mindustry_entities_comp_MinerComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/MinerComp:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_mindustry_entities_comp_MinerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	sp[0].o = (jobject)((func_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(74);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_4;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_acceptsItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_acceptsItem_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(220.0f)));
	if (temp0 == 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_entities_comp_MinerComp_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	sp[2].o = (jobject)((func_mindustry_entities_comp_MinerComp_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_stack_R_mindustry_type_ItemStack])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount), (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(76);
	if ((frame[3].i) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_mindustry_entities_comp_MinerComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[0].o = checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_entities_comp_MinerComp_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	jint temp0 = frame[3].i;
	sp[2].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	LINE_NUMBER(78);
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[2].o);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp3 = temp1 + temp2;
	sp[2].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	LINE_NUMBER(79);
	jfloat temp4 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[2].o);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp6 = temp4 + temp5;
	sp[2].o = frame[1].o;
	LINE_NUMBER(77);
	SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, temp0, temp3, temp6, sp[2].o);
	LINE_NUMBER(80);
	((func_mindustry_entities_comp_MinerComp_clearItem) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_clearItem])(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(84);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_13;
	}
label_12:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(85);
	((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(86);
	((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTimer = (jfloat(0));
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_mining_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_mining_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_16;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_16;
	{
	LINE_NUMBER(88);
	clinit_arc_util_Time(ctx);
	jfloat temp0 = (jfloat)SF_arc_util_Time_delta;
	sp[0].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_type;
	jfloat temp1 = temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineSpeed);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((func_mindustry_entities_comp_MinerComp_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float])(ctx, sp[0].o, sp[1].o);
	frame[3].f = (temp1 * temp2);
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	((mindustry_entities_comp_MinerComp *) NULL_CHECK(sp[0].o))->F_mineTimer = (((jfloat)((mindustry_entities_comp_MinerComp *) NULL_CHECK(sp[0].o))->F_mineTimer) + (frame[3].f));
	LINE_NUMBER(91);
	jint temp3 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(((jfloat(0.035f)) * (frame[3].f)))));
	if (temp3 == 0) goto label_20;
	}
	{
	LINE_NUMBER(92);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitMine;
	sp[1].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(2)));
	jfloat temp2 = temp0 + temp1;
	sp[1].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(2)));
	jfloat temp5 = temp3 + temp4;
	jfloat temp6 = jfloat(0);
	sp[1].o = (jobject)((mindustry_type_Item *) NULL_CHECK((frame[2].o)))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color])(ctx, sp[0].o, temp2, temp5, temp6, sp[1].o);
	}
label_20:;
	{
	LINE_NUMBER(95);
	jfloat temp0 = (jfloat)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTimer;
	jfloat temp1 = jfloat(50.0f);
	sp[0].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_type;
	jobject temp2 = sp[0].o;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(temp2))->F_mineHardnessScaling) == 0) goto label_22;
	}
	{
	jfloat temp0 = (jfloat(((jint)((mindustry_type_Item *) NULL_CHECK((frame[2].o)))->F_hardness))) * (jfloat(15.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_23;
	}
label_22:;
	(sp++)->f = jfloat(15.0f);
label_23:;
	{
	sp -= 3;
	if ((floatCompare(sp[0].f, (sp[1].f + sp[2].f), -1)) < 0) goto label_24;
	}
	{
	LINE_NUMBER(96);
	((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTimer = (jfloat(0));
	LINE_NUMBER(98);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_comp_MinerComp_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_27;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_info;
	((func_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SectorInfo_handleProduction_mindustry_type_Item_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_27:;
	{
	LINE_NUMBER(100);
	if ((frame[1].o) == nullptr) goto label_28;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(220.0f)));
	if (temp0 == 0) goto label_28;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, (frame[1].o), (frame[2].o), (jint(1)), (frame[0].o));
	if (temp0 != (jint(1))) goto label_28;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_28;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_mindustry_entities_comp_MinerComp_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	if (sp[0].o != (frame[2].o)) goto label_30;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_30;
	}
	{
	((func_mindustry_entities_comp_MinerComp_addItem_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_addItem_mindustry_type_Item])(ctx, (frame[0].o), (frame[2].o));
	}
label_30:;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_mindustry_entities_comp_MinerComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	sp[0].o = checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o);
	sp[1].o = frame[2].o;
	jint temp0 = jint(1);
	sp[2].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	LINE_NUMBER(104);
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[2].o);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp3 = temp1 + temp2;
	sp[2].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	LINE_NUMBER(105);
	jfloat temp4 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[2].o);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp6 = temp4 + temp5;
	sp[2].o = frame[1].o;
	LINE_NUMBER(103);
	SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, temp0, temp3, temp6, sp[2].o);
	goto label_24;
	}
label_28:;
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_mindustry_entities_comp_MinerComp_acceptsItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_MinerComp_acceptsItem_mindustry_type_Item_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_34;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	LINE_NUMBER(109);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp2 = temp0 + temp1;
	sp[1].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile;
	LINE_NUMBER(110);
	jfloat temp3 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[1].o);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(4.0f)));
	jfloat temp5 = temp3 + temp4;
	sp[1].o = frame[0].o;
	LINE_NUMBER(108);
	SM_mindustry_input_InputHandler_transferItemToUnit_mindustry_type_Item_float_float_mindustry_gen_Itemsc(ctx, sp[0].o, temp2, temp5, sp[1].o);
	goto label_24;
	}
label_34:;
	{
	LINE_NUMBER(113);
	((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(114);
	((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_mineTimer = (jfloat(0));
	}
label_24:;
	{
	LINE_NUMBER(118);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_16;
	}
	{
	LINE_NUMBER(119);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_mineSound;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_entities_comp_MinerComp *) NULL_CHECK((frame[0].o)))->F_type;
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, sp[2].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_mineSoundVolume));
	}
label_16:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_comp_MinerComp;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field mineTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getMineResult
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_comp_MinerComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_MinerComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_MinerComp_canMine_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean,
	(void *) M_mindustry_entities_comp_MinerComp_mining_R_boolean,
	(void *) M_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item,
	(void *) M_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_boolean_R_boolean,
	(void *) M_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_entities_comp_MinerComp_canMine_R_boolean,
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
	{ "acceptsItem", "(Lmindustry/type/Item;)Z" },
	{ "hasItem", "()Z" },
	{ "itemTime", "()F" },
	{ "itemCapacity", "()I" },
	{ "maxAccepted", "(Lmindustry/type/Item;)I" },
	{ "item", "()Lmindustry/type/Item;" },
	{ "stack", "()Lmindustry/type/ItemStack;" },
	{ "addItem", "(Lmindustry/type/Item;)V" },
	{ "addItem", "(Lmindustry/type/Item;I)V" },
	{ "clearItem", "()V" },
	{ "itemTime", "(F)V" },
	{ "stack", "(Lmindustry/type/ItemStack;)V" },
	{ "inFogTo", "(Lmindustry/game/Team;)Z" },
	{ "cheating", "()Z" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "closestCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "closestEnemyCore", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "team", "(Lmindustry/game/Team;)V" },
	{ "rotation", "()F" },
	{ "rotation", "(F)V" },
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "canMine", "(Lmindustry/type/Item;)Z" },
	{ "offloadImmediately", "()Z" },
	{ "mining", "()Z" },
	{ "getMineResult", "(Lmindustry/world/Tile;)Lmindustry/type/Item;" },
	{ "validMine", "(Lmindustry/world/Tile;Z)Z" },
	{ "validMine", "(Lmindustry/world/Tile;)Z" },
	{ "canMine", "()Z" },
};

static jclass interfaces[] { &class_mindustry_gen_Itemsc, &class_mindustry_gen_Posc, &class_mindustry_gen_Teamc, &class_mindustry_gen_Rotc, &class_mindustry_gen_Drawc, };

static FieldMetadata fields[] {
	{ "x", &class_float, offsetof(mindustry_entities_comp_MinerComp, F_x), "F", 0 },
	{ "y", &class_float, offsetof(mindustry_entities_comp_MinerComp, F_y), "F", 0 },
	{ "rotation", &class_float, offsetof(mindustry_entities_comp_MinerComp, F_rotation), "F", 0 },
	{ "hitSize", &class_float, offsetof(mindustry_entities_comp_MinerComp, F_hitSize), "F", 0 },
	{ "type", &class_mindustry_type_UnitType, offsetof(mindustry_entities_comp_MinerComp, F_type), "Lmindustry/type/UnitType;", 0 },
	{ "mineTimer", &class_float, offsetof(mindustry_entities_comp_MinerComp, F_mineTimer), "F", 128 },
	{ "mineTile", &class_mindustry_world_Tile, offsetof(mindustry_entities_comp_MinerComp, F_mineTile), "Lmindustry/world/Tile;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_MinerComp, 0, "()V", 0 },
	{ "canMine", (intptr_t) M_mindustry_entities_comp_MinerComp_canMine_mindustry_type_Item_R_boolean, VTABLE_mindustry_entities_comp_MinerComp_canMine_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "offloadImmediately", (intptr_t) M_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean, VTABLE_mindustry_entities_comp_MinerComp_offloadImmediately_R_boolean, "()Z", 1 },
	{ "mining", (intptr_t) M_mindustry_entities_comp_MinerComp_mining_R_boolean, VTABLE_mindustry_entities_comp_MinerComp_mining_R_boolean, "()Z", 0 },
	{ "getMineResult", (intptr_t) M_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item, VTABLE_mindustry_entities_comp_MinerComp_getMineResult_mindustry_world_Tile_R_mindustry_type_Item, "(Lmindustry/world/Tile;)Lmindustry/type/Item;", 1 },
	{ "validMine", (intptr_t) M_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_boolean_R_boolean, VTABLE_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_boolean_R_boolean, "(Lmindustry/world/Tile;Z)Z", 1 },
	{ "validMine", (intptr_t) M_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_R_boolean, VTABLE_mindustry_entities_comp_MinerComp_validMine_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "canMine", (intptr_t) M_mindustry_entities_comp_MinerComp_canMine_R_boolean, VTABLE_mindustry_entities_comp_MinerComp_canMine_R_boolean, "()Z", 1 },
	{ "update", (intptr_t) M_mindustry_entities_comp_MinerComp_update, VTABLE_mindustry_entities_comp_MinerComp_update, "()V", 1 },
};

Class class_mindustry_entities_comp_MinerComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/MinerComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_MinerComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_MinerComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_MinerComp,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_MinerComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 5,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 83,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_MinerComp = registerClass(&class_mindustry_entities_comp_MinerComp);

}
