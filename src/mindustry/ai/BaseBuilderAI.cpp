#include "mindustry/ai/BaseBuilderAI.h"
#include "mindustry/ai/BaseBuilderAI_invoke_arc_func_Intc2_2.h"
#include "mindustry/ai/BaseRegistry_BasePart.h"
#include "mindustry/ai/BaseBuilderAI_invoke_arc_func_Intc2_3.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ai/Pathfinder.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/blocks/payloads/PayloadConveyor.h"
#include "mindustry/content/Fx.h"
#include "mindustry/ai/Pathfinder_Flowfield.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Item.h"
#include "arc/struct/Queue.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/world/blocks/payloads/PayloadBlock.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/ai/BaseBuilderAI_invoke_arc_func_Boolf_2.h"
#include "mindustry/ai/BaseBuilderAI_invoke_arc_func_Boolf_3.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "arc/math/geom/Vec2.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/world/Tiles.h"
#include "arc/struct/IntSet.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/world/blocks/production/Drill.h"
#include "mindustry/world/Edges.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/game/Schematic_Stile.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/ai/BaseRegistry.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/ai/BaseBuilderAI.h"
#include "mindustry/world/Build.h"

extern "C" {

jobject SF_mindustry_ai_BaseBuilderAI_axis;
jobject SF_mindustry_ai_BaseBuilderAI_rotator;
jint SF_mindustry_ai_BaseBuilderAI_attempts;
jint SF_mindustry_ai_BaseBuilderAI_coreUnitMultiplier;
jfloat SF_mindustry_ai_BaseBuilderAI_emptyChance;
jint SF_mindustry_ai_BaseBuilderAI_timerStep;
jint SF_mindustry_ai_BaseBuilderAI_timerSpawn;
jint SF_mindustry_ai_BaseBuilderAI_timerRefreshPath;
jfloat SF_mindustry_ai_BaseBuilderAI_placeIntervalMin;
jfloat SF_mindustry_ai_BaseBuilderAI_placeIntervalMax;
jint SF_mindustry_ai_BaseBuilderAI_pathStep;
jobject SF_mindustry_ai_BaseBuilderAI_tmpTiles;
jint SF_mindustry_ai_BaseBuilderAI_correct;
jint SF_mindustry_ai_BaseBuilderAI_incorrect;

void mark_mindustry_ai_BaseBuilderAI(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_BaseBuilderAI_axis)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_BaseBuilderAI_axis)->clazz)->markFunction)((jobject) SF_mindustry_ai_BaseBuilderAI_axis, mark, depth + 1);
		if (SF_mindustry_ai_BaseBuilderAI_rotator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_BaseBuilderAI_rotator)->clazz)->markFunction)((jobject) SF_mindustry_ai_BaseBuilderAI_rotator, mark, depth + 1);
		if (SF_mindustry_ai_BaseBuilderAI_tmpTiles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_BaseBuilderAI_tmpTiles)->clazz)->markFunction)((jobject) SF_mindustry_ai_BaseBuilderAI_tmpTiles, mark, depth + 1);
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
	auto self = (mindustry_ai_BaseBuilderAI *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
	if (self->F_path)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_path)->clazz)->markFunction)((jobject) self->F_path, mark, depth + 1);
	if (self->F_calcPath)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_calcPath)->clazz)->markFunction)((jobject) self->F_calcPath, mark, depth + 1);
	if (self->F_calcTile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_calcTile)->clazz)->markFunction)((jobject) self->F_calcTile, mark, depth + 1);
}

void init_mindustry_ai_BaseBuilderAI_mindustry_game_Teams$TeamData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseBuilderAI:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BaseBuilderAI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[1].o, (jint(4)));
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK(sp[0].o))->F_path = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK(sp[0].o))->F_calcPath = (jref) sp[1].o;
	LINE_NUMBER(44);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcCount = (jint(0));
	LINE_NUMBER(45);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_totalCalcs = (jint(0));
	LINE_NUMBER(48);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_BaseBuilderAI_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseBuilderAI:update", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(56);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = frame[3].o;
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_getMaximumAccepted_mindustry_type_Item_R_int])(ctx, (frame[1].o), (frame[3].o));
	((func_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(58);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_aiCoreSpawn) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(1)), (jfloat(360.0f)));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_hasCore_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[1].o)))->F_unitType;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(66);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp1 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_7;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_cores;
	if (temp0 >= (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) * (jint(2)))) goto label_7;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[1].o)))->F_unitType;
	sp[1].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_cores;
	sp[1].o = (jobject)((func_arc_struct_Seq_random_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_random_R_java_lang_Object])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_arc_math_geom_Position])(ctx, sp[0].o, (checkCast(ctx, &class_arc_math_geom_Position, sp[1].o)));
	LINE_NUMBER(69);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[3].o));
	LINE_NUMBER(70);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[3].o));
	}
label_7:;
	{
	LINE_NUMBER(75);
	if (((jint)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calculating) != 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(2)), (jfloat(10800.0f)));
	if (temp0 != 0) goto label_16;
	}
	{
	if (((jint)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_startedCalculating) != 0) goto label_15;
	}
label_16:;
	{
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_hasCore_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(76);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calculating = (jint(1));
	LINE_NUMBER(77);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_startedCalculating = (jint(1));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcPath;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(82);
	if (((jint)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calculating) == 0) goto label_20;
	}
	{
	jint temp0 = (jint)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcCount;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	if (temp0 < (temp1 * temp2)) goto label_20;
	}
	{
	LINE_NUMBER(83);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calculating = (jint(0));
	LINE_NUMBER(84);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcCount = (jint(0));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcPath;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK(sp[0].o))->F_totalCalcs = (((jint)((mindustry_ai_BaseBuilderAI *) NULL_CHECK(sp[0].o))->F_totalCalcs) + (jint(1)));
	}
label_20:;
	{
	LINE_NUMBER(90);
	if (((jint)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calculating) == 0) goto label_25;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcTile;
	if (sp[0].o != nullptr) goto label_27;
	}
	{
	LINE_NUMBER(92);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BaseBuilderAI_invoke_arc_func_Intc2_2(ctx);
		auto proxy = (mindustry_ai_BaseBuilderAI_invoke_arc_func_Intc2_2 *) gcAlloc(ctx, &class_mindustry_ai_BaseBuilderAI_invoke_arc_func_Intc2_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcTile;
	if (sp[0].o != nullptr) goto label_25;
	}
	{
	LINE_NUMBER(94);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calculating = (jint(0));
	goto label_25;
	}
label_27:;
	{
	LINE_NUMBER(97);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_pathfinder;
	sp[1].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_Pathfinder_getField_mindustry_game_Team_int_int_R_mindustry_ai_Pathfinder$Flowfield])(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(99);
	jint temp0 = (jint)((func_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[1].o)))->F_completeWeights;
	frame[2].o = sp[0].o;
	LINE_NUMBER(101);
	frame[3].i = (jint(0));
	}
label_34:;
	{
	if ((frame[3].i) >= (50)) goto label_25;
	}
	{
	LINE_NUMBER(102);
	frame[4].i = (jint(2147483647));
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcTile;
	frame[5].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcTile;
	frame[6].i = ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(104);
	frame[7].i = (jint(0));
	LINE_NUMBER(105);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[8].o = sp[0].o;
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_40:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_41;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(106);
	frame[12].i = ((frame[5].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[11].o)))->F_x));
	frame[13].i = ((frame[6].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[11].o)))->F_y));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_packArray_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_packArray_int_int_R_int])(ctx, sp[0].o, (frame[12].i), (frame[13].i));
	frame[14].i = temp0;
	LINE_NUMBER(108);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[12].i), (frame[13].i));
	frame[15].o = sp[0].o;
	LINE_NUMBER(109);
	if ((frame[15].o) == nullptr) goto label_47;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[14].i))) >= (frame[4].i)) goto label_47;
	}
	{
	if (((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[14].i))) == (jint(-1))) goto label_47;
	}
	{
	LINE_NUMBER(110);
	frame[4].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[14].i)));
	LINE_NUMBER(111);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcTile = (jref) (frame[15].o);
	LINE_NUMBER(112);
	frame[7].i = (jint(1));
	}
label_47:;
	{
	LINE_NUMBER(105);
	INST_IINC(10, 1);
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(117);
	if ((frame[7].i) != 0) goto label_51;
	}
	{
	LINE_NUMBER(118);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcCount = (jint(2147483647));
	LINE_NUMBER(119);
	goto label_25;
	}
label_51:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcPath;
	sp[1].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcTile;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, sp[1].o);
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	LINE_NUMBER(123);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[8].o = sp[0].o;
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_55:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_56;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(124);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcPath;
	jint temp0 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[11].o)))->F_x;
	sp[1].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcTile;
	jint temp1 = temp0 + ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x);
	jint temp2 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[11].o)))->F_y;
	sp[1].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcTile;
	jint temp3 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, temp1, (temp2 + ((jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y)));
	jint temp4 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp3);
	LINE_NUMBER(123);
	INST_IINC(10, 1);
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcTile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) == 0) goto label_59;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, (frame[9].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[8].o)))->F_team;
	sp[1].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_team;
	if (sp[0].o == sp[1].o) goto label_59;
	}
	{
	LINE_NUMBER(130);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calculating = (jint(0));
	LINE_NUMBER(131);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcCount = (jint(0));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_path;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_path;
	sp[1].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcPath;
	((func_arc_struct_IntSet_addAll_arc_struct_IntSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_addAll_arc_struct_IntSet])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcPath;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(135);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calcTile = (jref) (jobject(nullptr));
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK(sp[0].o))->F_totalCalcs = (((jint)((mindustry_ai_BaseBuilderAI *) NULL_CHECK(sp[0].o))->F_totalCalcs) + (jint(1)));
	LINE_NUMBER(137);
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_foundPath = (jint(1));
	LINE_NUMBER(139);
	goto label_25;
	}
label_59:;
	{
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK(sp[0].o))->F_calcCount = (((jint)((mindustry_ai_BaseBuilderAI *) NULL_CHECK(sp[0].o))->F_calcCount) + (jint(1)));
	LINE_NUMBER(101);
	INST_IINC(3, 1);
	goto label_34;
	}
label_25:;
	{
	LINE_NUMBER(149);
	if (((jint)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_foundPath) != 0) goto label_71;
	}
	{
	if (((jint)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_calculating) != 0) goto label_72;
	}
label_71:;
	{
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_72;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = jint(0);
	jfloat temp1 = jfloat(12.0f);
	jfloat temp2 = jfloat(2);
	sp[1].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_team;
	sp[1].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[1].o);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp1, temp2, ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[1].o))->F_buildAiTier));
	jint temp4 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, temp0, temp3);
	if (temp4 == 0) goto label_72;
	}
	{
	LINE_NUMBER(151);
	frame[1].i = (jint(0));
	}
label_74:;
	{
	if ((frame[1].i) >= (6)) goto label_72;
	}
	{
	LINE_NUMBER(152);
	frame[2].i = (150);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((func_mindustry_ai_BaseBuilderAI_randomPosition_R_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BaseBuilderAI_randomPosition_R_arc_math_geom_Position])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(157);
	if ((frame[3].o) != nullptr) goto label_78;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_78:;
	{
	LINE_NUMBER(159);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(temp0)));
	LINE_NUMBER(160);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jint temp2 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp1);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[4].i = (jint((temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x))));
	jfloat temp4 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jint temp5 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, temp4);
	jfloat temp6 = jfloat(temp5);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[5].i = (jint((temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y))));
	LINE_NUMBER(161);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getc_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[4].i), (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(164);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BaseBuilderAI_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ai_BaseBuilderAI_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ai_BaseBuilderAI_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp7 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp7 == 0) goto label_83;
	}
	LINE_NUMBER(165);
	goto label_85;
label_83:;
	{
	LINE_NUMBER(168);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(172);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[6].o));
	if (sp[0].o == nullptr) goto label_87;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[1].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_87;
	}
	{
	LINE_NUMBER(173);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[1].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	goto label_89;
	}
label_87:;
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(1,000000e-02)));
	if (temp0 == 0) goto label_89;
	}
	{
	LINE_NUMBER(175);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_parts;
	frame[7].o = sp[0].o;
	}
label_89:;
	{
	LINE_NUMBER(178);
	if ((frame[7].o) == nullptr) goto label_85;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_arc_struct_Seq_random_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_random_R_java_lang_Object])(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_ai_BaseRegistry$BasePart, sp[0].o));
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_mindustry_ai_BaseBuilderAI_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_BaseBuilderAI_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_R_boolean])(ctx, (frame[0].o), (frame[8].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_y));
	if (temp0 == 0) goto label_85;
	}
	LINE_NUMBER(181);
	goto label_72;
label_85:;
	{
	LINE_NUMBER(151);
	INST_IINC(1, 1);
	goto label_74;
	}
label_72:;
	LINE_NUMBER(186);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BaseBuilderAI_randomPosition_R_arc_math_geom_Position(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseBuilderAI:randomPosition", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_hasCore_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_random_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_random_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_math_geom_Position, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(193);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_random_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_random_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_math_geom_Position, sp[0].o));
	}
label_3:;
	{
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_BaseBuilderAI_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseBuilderAI:tryPlace", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(199);
	jint temp0 = (jint)SM_arc_math_Mathf_range_int_R_int(ctx, (jint(2)));
	frame[4].i = temp0;
	LINE_NUMBER(200);
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_BaseBuilderAI_axis;
	sp[1].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[1].o)))->F_schematic;
	jfloat temp1 = jfloat((jint(((jfloat(((jint)((mindustry_game_Schematic *) NULL_CHECK(sp[1].o))->F_width))) / (jfloat(2))))));
	sp[1].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[1].o)))->F_schematic;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (jfloat((jint(((jfloat(((jint)((mindustry_game_Schematic *) NULL_CHECK(sp[1].o))->F_height))) / (jfloat(2))))))));
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[1].o)))->F_schematic;
	sp[0].o = (jobject)SM_mindustry_game_Schematics_rotate_mindustry_game_Schematic_int_R_mindustry_game_Schematic(ctx, sp[0].o, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(202);
	frame[6].i = ((frame[4].i) * (90));
	LINE_NUMBER(203);
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_BaseBuilderAI_rotator;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(((jint)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[1].o)))->F_centerX))), (jfloat(((jint)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[1].o)))->F_centerY))));
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_BaseBuilderAI_axis;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotateAround_arc_math_geom_Vec2_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, (jfloat((frame[6].i))));
	LINE_NUMBER(205);
	jint temp2 = frame[2].i;
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_BaseBuilderAI_rotator;
	frame[7].i = (temp2 - (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x))));
	LINE_NUMBER(206);
	jint temp3 = frame[3].i;
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_BaseBuilderAI_rotator;
	frame[8].i = (temp3 - (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y))));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[5].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(210);
	frame[11].i = (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_x) + (frame[7].i));
	frame[12].i = (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_y) + (frame[8].i));
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	sp[1].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_team;
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, (frame[11].i), (frame[12].i), ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_rotation));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (jint(0));
	}
label_13:;
	{
	LINE_NUMBER(214);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[11].i), (frame[12].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_PayloadConveyor)) != 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_PayloadBlock)) == 0) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	frame[14].o = sp[0].o;
	frame[15].i = (((jarray) nullCheck(ctx, (frame[14].o)))->length);
	frame[16].i = (jint(0));
	}
label_18:;
	{
	if ((frame[16].i) >= (frame[15].i)) goto label_17;
	}
	{
	frame[17].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[16].i)));
	LINE_NUMBER(219);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_x)), (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_y)));
	frame[18].o = sp[0].o;
	LINE_NUMBER(220);
	if ((frame[18].o) == nullptr) goto label_21;
	}
	{
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(218);
	INST_IINC(16, 1);
	goto label_18;
	}
label_17:;
	{
	LINE_NUMBER(227);
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_BaseBuilderAI_tmpTiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_24;
	}
	INST_ALOAD(13);
	if ((--sp)->o == nullptr) goto label_24;
	{
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_BaseBuilderAI_tmpTiles;
	sp[0].o = (jobject)((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BaseBuilderAI_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ai_BaseBuilderAI_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ai_BaseBuilderAI_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return (jint(0));
	}
label_24:;
	LINE_NUMBER(231);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(234);
	jint temp0 = jint(0);
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	SF_mindustry_ai_BaseBuilderAI_incorrect = temp0;
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	SF_mindustry_ai_BaseBuilderAI_correct = temp0;
	LINE_NUMBER(235);
	frame[9].i = (jint(0));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[1].o)))->F_required;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_type_Item)) == 0) goto label_28;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[5].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_30:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_production_Drill)) == 0) goto label_32;
	}
	{
	LINE_NUMBER(240);
	frame[9].i = (jint(1));
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_block;
	jint temp0 = ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_x) + (frame[7].i);
	jint temp1 = ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_y) + (frame[8].i);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BaseBuilderAI_invoke_arc_func_Intc2_3(ctx);
		auto proxy = (mindustry_ai_BaseBuilderAI_invoke_arc_func_Intc2_3 *) gcAlloc(ctx, &class_mindustry_ai_BaseBuilderAI_invoke_arc_func_Intc2_3);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	}
label_32:;
	LINE_NUMBER(251);
	goto label_30;
label_28:;
	{
	LINE_NUMBER(255);
	if ((frame[9].i) == 0) goto label_35;
	}
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	(sp++)->i = SF_mindustry_ai_BaseBuilderAI_incorrect;
	if ((--sp)->i != 0) goto label_36;
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	(sp++)->i = SF_mindustry_ai_BaseBuilderAI_correct;
	if ((--sp)->i != 0) goto label_35;
label_36:;
	{
	LINE_NUMBER(256);
	popStackFrame(ctx);
	return (jint(0));
	}
label_35:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[5].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_37:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	clinit_mindustry_game_Teams$BlockPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Teams$BlockPlan);
	jint temp0 = (frame[7].i) + ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_x);
	jint temp1 = (frame[8].i) + ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_y);
	jint temp2 = jshort(((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_rotation));
	sp[2].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_block;
	sp[3].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[11].o)))->F_config;
	init_mindustry_game_Teams$BlockPlan_int_int_short_mindustry_world_Block_java_lang_Object(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((func_arc_struct_Queue_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(262);
	goto label_37;
	}
label_38:;
	{
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_BaseBuilderAI_lambda$tryPlace$1_mindustry_ai_BaseRegistry$BasePart_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseBuilderAI:lambda$tryPlace$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BaseBuilderAI(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(243);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(244);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_required;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(245);
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	SF_mindustry_ai_BaseBuilderAI_correct = ((clinit_mindustry_ai_BaseBuilderAI(ctx), (jint)SF_mindustry_ai_BaseBuilderAI_correct) + (jint(1)));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[3].o));
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(247);
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	SF_mindustry_ai_BaseBuilderAI_incorrect = ((clinit_mindustry_ai_BaseBuilderAI(ctx), (jint)SF_mindustry_ai_BaseBuilderAI_incorrect) + (jint(1)));
	}
label_4:;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_BaseBuilderAI_lambda$tryPlace$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseBuilderAI:lambda$tryPlace$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_ai_BaseBuilderAI *) NULL_CHECK((frame[0].o)))->F_path;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_BaseBuilderAI_lambda$update$1_mindustry_world_Tile_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseBuilderAI:lambda$update$1", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BaseBuilderAI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(164);
	jint temp0 = (jint)((func_mindustry_world_Tile_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[1].o), (frame[0].o), (jfloat(320.0f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_BaseBuilderAI_lambda$update$0_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseBuilderAI:lambda$update$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	((mindustry_ai_BaseBuilderAI *) NULL_CHECK(sp[0].o))->F_calcTile = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ai_BaseBuilderAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ai_BaseBuilderAI_attempts = jint(6);
	SF_mindustry_ai_BaseBuilderAI_coreUnitMultiplier = jint(2);
	SF_mindustry_ai_BaseBuilderAI_emptyChance = jfloat(1,000000e-02f);
	SF_mindustry_ai_BaseBuilderAI_timerStep = jint(0);
	SF_mindustry_ai_BaseBuilderAI_timerSpawn = jint(1);
	SF_mindustry_ai_BaseBuilderAI_timerRefreshPath = jint(2);
	SF_mindustry_ai_BaseBuilderAI_placeIntervalMin = jfloat(12.0f);
	SF_mindustry_ai_BaseBuilderAI_placeIntervalMax = jfloat(2.0f);
	SF_mindustry_ai_BaseBuilderAI_pathStep = jint(50);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseBuilderAI:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BaseBuilderAI(ctx);
	{
	LINE_NUMBER(25);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	SF_mindustry_ai_BaseBuilderAI_axis = sp[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	SF_mindustry_ai_BaseBuilderAI_rotator = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	SF_mindustry_ai_BaseBuilderAI_tmpTiles = sp[0].o;
	LINE_NUMBER(33);
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	SF_mindustry_ai_BaseBuilderAI_correct = (jint(0));
	clinit_mindustry_ai_BaseBuilderAI(ctx);
	SF_mindustry_ai_BaseBuilderAI_incorrect = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_BaseBuilderAI;
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

	{ // Field calcTile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[19]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ai_BaseBuilderAI[] {
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
	(void *) M_mindustry_ai_BaseBuilderAI_update,
	(void *) M_mindustry_ai_BaseBuilderAI_randomPosition_R_arc_math_geom_Position,
	(void *) M_mindustry_ai_BaseBuilderAI_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_R_boolean,
	(void *) M_mindustry_ai_BaseBuilderAI_lambda$tryPlace$0_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_ai_BaseBuilderAI_lambda$update$0_int_int,
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
	{ "update", "()V" },
	{ "randomPosition", "()Larc/math/geom/Position;" },
	{ "tryPlace", "(Lmindustry/ai/BaseRegistry$BasePart;II)Z" },
	{ "lambda$tryPlace$0", "(Lmindustry/world/Tile;)Z" },
	{ "lambda$update$0", "(II)V" },
};

static FieldMetadata fields[] {
	{ "axis", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_axis, "Larc/math/geom/Vec2;", 26 },
	{ "rotator", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_rotator, "Larc/math/geom/Vec2;", 26 },
	{ "attempts", &class_int, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_attempts, "I", 26 },
	{ "coreUnitMultiplier", &class_int, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_coreUnitMultiplier, "I", 26 },
	{ "emptyChance", &class_float, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_emptyChance, "F", 26 },
	{ "timerStep", &class_int, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_timerStep, "I", 26 },
	{ "timerSpawn", &class_int, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_timerSpawn, "I", 26 },
	{ "timerRefreshPath", &class_int, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_timerRefreshPath, "I", 26 },
	{ "placeIntervalMin", &class_float, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_placeIntervalMin, "F", 26 },
	{ "placeIntervalMax", &class_float, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_placeIntervalMax, "F", 26 },
	{ "pathStep", &class_int, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_pathStep, "I", 26 },
	{ "tmpTiles", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_tmpTiles, "Larc/struct/Seq;", 26 },
	{ "correct", &class_int, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_correct, "I", 10 },
	{ "incorrect", &class_int, (intptr_t) &SF_mindustry_ai_BaseBuilderAI_incorrect, "I", 10 },
	{ "foundPath", &class_boolean, offsetof(mindustry_ai_BaseBuilderAI, F_foundPath), "Z", 2 },
	{ "data", &class_mindustry_game_Teams$TeamData, offsetof(mindustry_ai_BaseBuilderAI, F_data), "Lmindustry/game/Teams$TeamData;", 16 },
	{ "timer", &class_arc_util_Interval, offsetof(mindustry_ai_BaseBuilderAI, F_timer), "Larc/util/Interval;", 16 },
	{ "path", &class_arc_struct_IntSet, offsetof(mindustry_ai_BaseBuilderAI, F_path), "Larc/struct/IntSet;", 0 },
	{ "calcPath", &class_arc_struct_IntSet, offsetof(mindustry_ai_BaseBuilderAI, F_calcPath), "Larc/struct/IntSet;", 0 },
	{ "calcTile", &class_mindustry_world_Tile, offsetof(mindustry_ai_BaseBuilderAI, F_calcTile), "Lmindustry/world/Tile;", 0 },
	{ "calculating", &class_boolean, offsetof(mindustry_ai_BaseBuilderAI, F_calculating), "Z", 0 },
	{ "startedCalculating", &class_boolean, offsetof(mindustry_ai_BaseBuilderAI, F_startedCalculating), "Z", 0 },
	{ "calcCount", &class_int, offsetof(mindustry_ai_BaseBuilderAI, F_calcCount), "I", 0 },
	{ "totalCalcs", &class_int, offsetof(mindustry_ai_BaseBuilderAI, F_totalCalcs), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_BaseBuilderAI_mindustry_game_Teams$TeamData, 0, "(Lmindustry/game/Teams$TeamData;)V", 1 },
	{ "update", (intptr_t) M_mindustry_ai_BaseBuilderAI_update, VTABLE_mindustry_ai_BaseBuilderAI_update, "()V", 1 },
	{ "randomPosition", (intptr_t) M_mindustry_ai_BaseBuilderAI_randomPosition_R_arc_math_geom_Position, VTABLE_mindustry_ai_BaseBuilderAI_randomPosition_R_arc_math_geom_Position, "()Larc/math/geom/Position;", 2 },
	{ "tryPlace", (intptr_t) M_mindustry_ai_BaseBuilderAI_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_R_boolean, VTABLE_mindustry_ai_BaseBuilderAI_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_R_boolean, "(Lmindustry/ai/BaseRegistry$BasePart;II)Z", 2 },
	{ "lambda$tryPlace$1", (intptr_t) SM_mindustry_ai_BaseBuilderAI_lambda$tryPlace$1_mindustry_ai_BaseRegistry$BasePart_int_int, 0, "(Lmindustry/ai/BaseRegistry$BasePart;II)V", 4106 },
	{ "lambda$tryPlace$0", (intptr_t) M_mindustry_ai_BaseBuilderAI_lambda$tryPlace$0_mindustry_world_Tile_R_boolean, VTABLE_mindustry_ai_BaseBuilderAI_lambda$tryPlace$0_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 4098 },
	{ "lambda$update$1", (intptr_t) SM_mindustry_ai_BaseBuilderAI_lambda$update$1_mindustry_world_Tile_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$update$0", (intptr_t) M_mindustry_ai_BaseBuilderAI_lambda$update$0_int_int, VTABLE_mindustry_ai_BaseBuilderAI_lambda$update$0_int_int, "(II)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_BaseBuilderAI, 0, "()V", 8 },
};

Class class_mindustry_ai_BaseBuilderAI{
		.nativeName = (intptr_t) "mindustry/ai/BaseBuilderAI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_BaseBuilderAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_BaseBuilderAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_BaseBuilderAI,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_BaseBuilderAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_BaseBuilderAI = registerClass(&class_mindustry_ai_BaseBuilderAI);

}
