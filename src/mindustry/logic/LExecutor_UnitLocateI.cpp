#include "mindustry/logic/LExecutor_UnitLocateI.h"
#include "arc/func/Prov.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/game/Rules.h"
#include "java/lang/Iterable.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/logic/LExecutor_1.h"
#include "mindustry/ai/BlockIndexer.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LExecutor_UnitControlI.h"
#include "mindustry/type/Item.h"
#include "mindustry/logic/LExecutor_UnitLocateI_Cache.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LExecutor_UnitLocateI_invoke_arc_func_Prov_1.h"
#include "mindustry/gen/Building.h"
#include "mindustry/logic/LExecutor_UnitLocateI.h"
#include "java/lang/Object.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/logic/LLocate.h"
#include "mindustry/entities/Units.h"
#include "mindustry/ai/WaveSpawner.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {


void mark_mindustry_logic_LExecutor$UnitLocateI(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LExecutor$UnitLocateI *) object;
	if (self->F_locate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_locate)->clazz)->markFunction)((jobject) self->F_locate, mark, depth + 1);
	if (self->F_flag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flag)->clazz)->markFunction)((jobject) self->F_flag, mark, depth + 1);
	if (self->F_enemy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_enemy)->clazz)->markFunction)((jobject) self->F_enemy, mark, depth + 1);
	if (self->F_ore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ore)->clazz)->markFunction)((jobject) self->F_ore, mark, depth + 1);
	if (self->F_outX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outX)->clazz)->markFunction)((jobject) self->F_outX, mark, depth + 1);
	if (self->F_outY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outY)->clazz)->markFunction)((jobject) self->F_outY, mark, depth + 1);
	if (self->F_outFound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outFound)->clazz)->markFunction)((jobject) self->F_outFound, mark, depth + 1);
	if (self->F_outBuild)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outBuild)->clazz)->markFunction)((jobject) self->F_outBuild, mark, depth + 1);
}

void clinit_mindustry_logic_LExecutor$UnitLocateI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LExecutor$UnitLocateI_mindustry_logic_LLocate_mindustry_world_meta_BlockFlag_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitLocateI:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$UnitLocateI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(218);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LLocate(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LLocate_building;
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK(sp[0].o))->F_locate = (jref) sp[1].o;
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK(sp[0].o))->F_flag = (jref) sp[1].o;
	LINE_NUMBER(219);
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_locate = (jref) (frame[1].o);
	LINE_NUMBER(220);
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_flag = (jref) (frame[2].o);
	LINE_NUMBER(221);
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_enemy = (jref) (frame[3].o);
	LINE_NUMBER(222);
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (frame[4].o);
	LINE_NUMBER(223);
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outX = (jref) (frame[5].o);
	LINE_NUMBER(224);
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outY = (jref) (frame[6].o);
	LINE_NUMBER(225);
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outFound = (jref) (frame[7].o);
	LINE_NUMBER(226);
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outBuild = (jref) (frame[8].o);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LExecutor$UnitLocateI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitLocateI:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LExecutor$UnitLocateI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(229);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LLocate(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LLocate_building;
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK(sp[0].o))->F_locate = (jref) sp[1].o;
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK(sp[0].o))->F_flag = (jref) sp[1].o;
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LExecutor$UnitLocateI_run_mindustry_logic_LExecutor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LExecutor$UnitLocateI:run", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(234);
	if (((jint)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_privileged) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitControl) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(237);
	sp[0].o = (jobject)SM_mindustry_logic_LExecutor$UnitControlI_checkLogicAI_mindustry_logic_LExecutor_java_lang_Object_boolean_R_mindustry_ai_types_LogicAI(ctx, (frame[1].o), (frame[2].o), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(239);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Unit)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[2].o)));
	if ((frame[3].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(240);
	((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[3].o)))->F_controlTimer = (jfloat(600.0f));
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[3].o)))->F_execCache;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LExecutor$UnitLocateI_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_logic_LExecutor$UnitLocateI_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_logic_LExecutor$UnitLocateI_invoke_arc_func_Prov_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_logic_LExecutor$UnitLocateI$Cache, sp[0].o));
	LINE_NUMBER(244);
	jint temp0 = (jint)((func_mindustry_ai_types_LogicAI_checkTargetTimer_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ai_types_LogicAI_checkTargetTimer_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(245);
	frame[6].o = (jobject(nullptr));
	LINE_NUMBER(246);
	frame[7].i = (jint(0));
	LINE_NUMBER(248);
	clinit_mindustry_logic_LExecutor$1(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LExecutor$1_$SwitchMap$mindustry$logic$LLocate;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_locate;
	jint temp0 = (jint)((func_mindustry_logic_LLocate_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LLocate_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_13;
		case 2: goto label_14;
		case 3: goto label_15;
		case 4: goto label_16;
		default: goto label_17;
	}
	}
label_13:;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_ore;
	sp[0].o = (jobject)((func_mindustry_logic_LVar_obj_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_type_Item)) == 0) goto label_18;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[9].o)));
	LINE_NUMBER(251);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_findClosestOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findClosestOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[4].o), (frame[8].o));
	frame[6].o = sp[0].o;
	}
label_18:;
	LINE_NUMBER(253);
	goto label_17;
label_14:;
	{
	LINE_NUMBER(255);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_y;
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_enemy;
	jint temp2 = (jint)((func_mindustry_logic_LVar_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_bool_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if (temp2 == 0) goto label_20;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_team;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_flag;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	goto label_21;
	}
label_20:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_team;
	sp[2].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_flag;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	}
label_21:;
	{
	sp -= 3;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_R_arc_math_geom_Position(ctx, sp[0].f, sp[1].f, sp[2].o);
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(256);
	if ((frame[8].o) != nullptr) goto label_23;
	}
	INST_ACONST_NULL();
	goto label_24;
label_23:;
	INST_ALOAD(8);
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_tile;
label_24:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(257);
	frame[7].i = (jint(1));
	LINE_NUMBER(258);
	goto label_17;
	}
label_15:;
	{
	LINE_NUMBER(260);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_y;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_findClosest_float_float_java_lang_Iterable_R_arc_math_geom_Position(ctx, temp0, temp1, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(261);
	goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_team;
	sp[0].o = (jobject)SM_mindustry_entities_Units_findDamagedTile_mindustry_game_Team_float_float_R_mindustry_gen_Building(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_y));
	frame[8].o = sp[0].o;
	LINE_NUMBER(264);
	if ((frame[8].o) != nullptr) goto label_29;
	}
	INST_ACONST_NULL();
	goto label_30;
label_29:;
	INST_ALOAD(8);
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_tile;
label_30:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(265);
	frame[7].i = (jint(1));
	}
label_17:;
	{
	LINE_NUMBER(269);
	if ((frame[6].o) == nullptr) goto label_32;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_33;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	if (sp[0].o == nullptr) goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(270);
	((mindustry_logic_LExecutor$UnitLocateI$Cache *) NULL_CHECK((frame[5].o)))->F_found = (jint(1));
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outX;
	sp[1].o = frame[5].o;
	sp += 2;
	if ((frame[7].i) == 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].f = temp0;
	sp += 1;
	goto label_36;
	}
label_35:;
	INST_ALOAD(6);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[0].o);
	sp++;
label_36:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, sp[2].f);
	((mindustry_logic_LExecutor$UnitLocateI$Cache *) NULL_CHECK(sp[1].o))->F_x = temp0;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(temp0)));
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outY;
	sp[1].o = frame[5].o;
	sp += 2;
	if ((frame[7].i) == 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].f = temp0;
	sp += 1;
	goto label_39;
	}
label_38:;
	INST_ALOAD(6);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[0].o);
	sp++;
label_39:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, sp[2].f);
	((mindustry_logic_LExecutor$UnitLocateI$Cache *) NULL_CHECK(sp[1].o))->F_y = temp0;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(temp0)));
	LINE_NUMBER(274);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outFound;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(1)));
	goto label_41;
	}
label_32:;
	{
	LINE_NUMBER(276);
	((mindustry_logic_LExecutor$UnitLocateI$Cache *) NULL_CHECK((frame[5].o)))->F_found = (jint(0));
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outFound;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(0)));
	}
label_41:;
	{
	LINE_NUMBER(280);
	if ((frame[6].o) == nullptr) goto label_43;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = frame[4].o;
	LINE_NUMBER(281);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, sp[1].o);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp2, (jfloat(220.0f)));
	jint temp4 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, temp3);
	if (temp4 != 0) goto label_45;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[1].o = (jobject)((mindustry_logic_LExecutor *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_43;
	}
label_45:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	((mindustry_logic_LExecutor$UnitLocateI$Cache *) NULL_CHECK(sp[0].o))->F_build = (jref) sp[1].o;
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outBuild;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	goto label_47;
	}
label_43:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outBuild;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_47:;
	LINE_NUMBER(287);
	goto label_48;
label_9:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outBuild;
	sp[1].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI$Cache *) NULL_CHECK((frame[5].o)))->F_build;
	((func_mindustry_logic_LVar_setobj_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setobj_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outFound;
	((func_mindustry_logic_LVar_setbool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setbool_boolean])(ctx, sp[0].o, ((jint)((mindustry_logic_LExecutor$UnitLocateI$Cache *) NULL_CHECK((frame[5].o)))->F_found));
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outX;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(((jfloat)((mindustry_logic_LExecutor$UnitLocateI$Cache *) NULL_CHECK((frame[5].o)))->F_x))));
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outY;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, (jdouble(((jfloat)((mindustry_logic_LExecutor$UnitLocateI$Cache *) NULL_CHECK((frame[5].o)))->F_y))));
	}
label_48:;
	LINE_NUMBER(293);
	goto label_52;
label_4:;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_logic_LExecutor$UnitLocateI *) NULL_CHECK((frame[0].o)))->F_outFound;
	((func_mindustry_logic_LVar_setbool_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setbool_boolean])(ctx, sp[0].o, (jint(0)));
	}
label_52:;
	LINE_NUMBER(296);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LExecutor$UnitLocateI[] {
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
	(void *) M_mindustry_logic_LExecutor$UnitLocateI_run_mindustry_logic_LExecutor,
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
	{ "run", "(Lmindustry/logic/LExecutor;)V" },
};

static jclass interfaces[] { &class_mindustry_logic_LExecutor$LInstruction, };

static jclass innerClasses[] {
	&class_mindustry_logic_LExecutor$UnitLocateI$Cache,
};

static FieldMetadata fields[] {
	{ "locate", &class_mindustry_logic_LLocate, offsetof(mindustry_logic_LExecutor$UnitLocateI, F_locate), "Lmindustry/logic/LLocate;", 1 },
	{ "flag", &class_mindustry_world_meta_BlockFlag, offsetof(mindustry_logic_LExecutor$UnitLocateI, F_flag), "Lmindustry/world/meta/BlockFlag;", 1 },
	{ "enemy", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitLocateI, F_enemy), "Lmindustry/logic/LVar;", 1 },
	{ "ore", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitLocateI, F_ore), "Lmindustry/logic/LVar;", 1 },
	{ "outX", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitLocateI, F_outX), "Lmindustry/logic/LVar;", 1 },
	{ "outY", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitLocateI, F_outY), "Lmindustry/logic/LVar;", 1 },
	{ "outFound", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitLocateI, F_outFound), "Lmindustry/logic/LVar;", 1 },
	{ "outBuild", &class_mindustry_logic_LVar, offsetof(mindustry_logic_LExecutor$UnitLocateI, F_outBuild), "Lmindustry/logic/LVar;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$UnitLocateI_mindustry_logic_LLocate_mindustry_world_meta_BlockFlag_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar, 0, "(Lmindustry/logic/LLocate;Lmindustry/world/meta/BlockFlag;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;Lmindustry/logic/LVar;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LExecutor$UnitLocateI, 0, "()V", 1 },
	{ "run", (intptr_t) M_mindustry_logic_LExecutor$UnitLocateI_run_mindustry_logic_LExecutor, VTABLE_mindustry_logic_LExecutor$UnitLocateI_run_mindustry_logic_LExecutor, "(Lmindustry/logic/LExecutor;)V", 1 },
};

Class class_mindustry_logic_LExecutor$UnitLocateI{
		.nativeName = (intptr_t) "mindustry/logic/LExecutor$UnitLocateI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LExecutor$UnitLocateI),
		.classVtable = (intptr_t) vtable_mindustry_logic_LExecutor$UnitLocateI,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LExecutor$UnitLocateI,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LExecutor$UnitLocateI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LExecutor,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LExecutor$UnitLocateI = registerClass(&class_mindustry_logic_LExecutor$UnitLocateI);

}

