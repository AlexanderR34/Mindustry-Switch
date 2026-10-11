#include "mindustry/ai/types/PrebuildAI.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/BlockIndexer.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "arc/util/Structs.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/struct/Queue.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "java/lang/Iterable.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/ai/types/PrebuildAI_invoke_arc_func_Floatf_5.h"
#include "mindustry/ai/types/PrebuildAI_invoke_arc_func_Floatf_3.h"
#include "mindustry/ai/types/PrebuildAI_invoke_arc_func_Floatf_4.h"
#include "java/util/Comparator.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "java/lang/Enum.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/ai/types/PrebuildAI_invoke_arc_func_Boolf_4.h"
#include "mindustry/ai/types/PrebuildAI_invoke_arc_func_Boolf_3.h"
#include "mindustry/type/Category.h"
#include "mindustry/ai/types/PrebuildAI_invoke_arc_func_Boolf_5.h"
#include "mindustry/ai/types/PrebuildAI.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/gen/Call.h"
#include "mindustry/world/Build.h"

extern "C" {

jobject SF_mindustry_ai_types_PrebuildAI_priorities;
jobject SF_mindustry_ai_types_PrebuildAI_tmpCopy;

void mark_mindustry_ai_types_PrebuildAI(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_types_PrebuildAI_priorities)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_types_PrebuildAI_priorities)->clazz)->markFunction)((jobject) SF_mindustry_ai_types_PrebuildAI_priorities, mark, depth + 1);
		if (SF_mindustry_ai_types_PrebuildAI_tmpCopy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_types_PrebuildAI_tmpCopy)->clazz)->markFunction)((jobject) SF_mindustry_ai_types_PrebuildAI_tmpCopy, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_units_AIController(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_types_PrebuildAI *) object;
	if (self->F_lastPlan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPlan)->clazz)->markFunction)((jobject) self->F_lastPlan, mark, depth + 1);
	if (self->F_collectBlock)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_collectBlock)->clazz)->markFunction)((jobject) self->F_collectBlock, mark, depth + 1);
	if (self->F_lastTargetItem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastTargetItem)->clazz)->markFunction)((jobject) self->F_lastTargetItem, mark, depth + 1);
	if (self->F_ore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ore)->clazz)->markFunction)((jobject) self->F_ore, mark, depth + 1);
}

void init_mindustry_ai_types_PrebuildAI(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_PrebuildAI(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_mindustry_entities_units_AIController(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_types_PrebuildAI_sortPlans_arc_struct_Queue(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:sortPlans", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_PrebuildAI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)SM_arc_struct_Seq_with_java_lang_Iterable_R_arc_struct_Seq(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_PrebuildAI_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_ai_types_PrebuildAI_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_ai_types_PrebuildAI_invoke_arc_func_Floatf_3);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(44);
	sp[1].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_PrebuildAI_invoke_arc_func_Floatf_4(ctx);
		auto proxy = (mindustry_ai_types_PrebuildAI_invoke_arc_func_Floatf_4 *) gcAlloc(ctx, &class_mindustry_ai_types_PrebuildAI_invoke_arc_func_Floatf_4);
		sp[2].o = (jobject) proxy;
	}
	LINE_NUMBER(45);
	sp[2].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, sp[2].o);
	LINE_NUMBER(43);
	sp[1].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(48);
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, (frame[0].o));
	LINE_NUMBER(50);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(51);
	((func_arc_struct_Queue_addFirst_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Queue_addFirst_java_lang_Object])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(52);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:canBuild", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(56);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_requirements;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_buildCostMultiplier));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ai_types_PrebuildAI_findNextPlan_R_mindustry_game_Teams$BlockPlan(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:findNextPlan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[1].o)))->F_buildingTree;
	if (sp[0].o == nullptr) goto label_3;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[1].o)))->F_plans;
	frame[3].o = sp[0].o;
	LINE_NUMBER(66);
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_PrebuildAI_tmpCopy;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(67);
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_PrebuildAI_tmpCopy;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(70);
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_PrebuildAI_tmpCopy;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_3);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_PrebuildAI_invoke_arc_func_Floatf_5(ctx);
		auto proxy = (mindustry_ai_types_PrebuildAI_invoke_arc_func_Floatf_5 *) gcAlloc(ctx, &class_mindustry_ai_types_PrebuildAI_invoke_arc_func_Floatf_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(75);
	if ((frame[4].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_9:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_arc_struct_Queue_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Queue_first_R_java_lang_Object])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_types_PrebuildAI_updateMovement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:updateMovement", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ai_types_PrebuildAI_shouldShoot_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_shouldShoot_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_target;
	((func_mindustry_gen_Unit_lookAt_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) != 0) goto label_3;
	}
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_prefRotation_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_prefRotation_R_float])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_lookAt_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_lookAt_float])(ctx, sp[0].o, temp0);
	}
label_3:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp += 1;
	if (((jint)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectingItems) != 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_updateBuilding = sp[1].i;
	LINE_NUMBER(111);
	frame[1].i = (jint(0));
	LINE_NUMBER(113);
	if (((jint)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectingItems) == 0) goto label_9;
	}
	{
	LINE_NUMBER(114);
	((func_mindustry_ai_types_PrebuildAI_doMining) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_doMining])(ctx, (frame[0].o));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_lastPlan;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_lastPlan;
	if (((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK(sp[0].o))->F_removed) != 0) goto label_16;
	}
label_15:;
	{
	sp[0].o = frame[2].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_18;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[5].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[4].o)))->F_current;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	if (sp[0].o == sp[1].o) goto label_20;
	}
label_18:;
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[0].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validBreak_mindustry_game_Team_int_int_R_boolean(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y));
	if (temp0 == 0) goto label_16;
	}
	goto label_20;
label_21:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	LINE_NUMBER(124);
	sp[1].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_rotation));
	if (temp0 == 0) goto label_16;
	}
label_20:;
	INST_ICONST(1);
	goto label_24;
label_16:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(126);
	if ((frame[3].i) == 0) goto label_26;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildRange) - (jfloat(20.0f))), (jfloat(100.0f)));
	frame[4].f = temp0;
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	((func_mindustry_ai_types_PrebuildAI_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_moveTo_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, ((frame[4].f) - (jfloat(10.0f))), (jfloat(20.0f)));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (frame[4].f));
	if (temp1 != 0) goto label_30;
	}
	INST_ICONST(1);
	goto label_31;
label_30:;
	INST_ICONST(0);
label_31:;
	{
	sp -= 1;
	frame[1].i = sp[0].i;
	LINE_NUMBER(131);
	goto label_33;
	}
label_26:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_removeFirst_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_removeFirst_R_java_lang_Object])(ctx, sp[0].o);
	LINE_NUMBER(134);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (jobject(nullptr));
	}
label_33:;
	LINE_NUMBER(136);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	jint temp0 = (jint)((func_arc_struct_Queue_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(2)), (jfloat(2)));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_mindustry_ai_types_PrebuildAI_findNextPlan_R_mindustry_game_Teams$BlockPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_findNextPlan_R_mindustry_game_Teams$BlockPlan])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(147);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_block;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_x), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_y), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_rotation));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_gen_Unit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_38;
	}
	{
	LINE_NUMBER(149);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectingItems = (jint(1));
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_block;
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK(sp[0].o))->F_collectBlock = (jref) sp[1].o;
	LINE_NUMBER(151);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_lastTargetItem = (jref) (jobject(nullptr));
	LINE_NUMBER(152);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (jobject(nullptr));
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	((func_arc_util_Interval_reset_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_reset_int_float])(ctx, sp[0].o, (jint(0)), (jfloat(0)));
	}
label_38:;
	{
	LINE_NUMBER(155);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_lastPlan = (jref) (frame[2].o);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_y;
	jint temp2 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_rotation;
	sp[2].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_block;
	sp[3].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[2].o)))->F_config;
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) != 0) goto label_45;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_boostWhenBuilding) != 0) goto label_47;
	}
	INST_ILOAD(1);
	if ((--sp)->i != 0) goto label_47;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_isDuct) != 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if ((floatCompare(((jfloat)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_damageTaken), (jfloat(0)), -1)) > 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_48;
	}
label_47:;
	INST_ICONST(1);
	goto label_49;
label_48:;
	INST_ICONST(0);
label_49:;
	POP_N(2); // Pop method args
	((func_mindustry_gen_Unit_updateBoosting_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_updateBoosting_boolean])(ctx, sp[0].o, sp[1].i);
label_45:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_types_PrebuildAI_doMining(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:doMining", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_closestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_canMine_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_canMine_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_2;
	{
	sp[0].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectBlock;
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_mineTile;
	jint temp0 = (jint)((func_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_mineTile_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_mineTile_mindustry_world_Tile])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_4:;
	{
	LINE_NUMBER(182);
	if (((jint)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_mining) == 0) goto label_6;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectBlock;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_4);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Structs_find_Array1_java_lang_Object_arc_func_Boolf_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[0].o));
	LINE_NUMBER(184);
	if ((frame[2].o) != nullptr) goto label_9;
	}
	INST_ACONST_NULL();
	goto label_10;
label_9:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((mindustry_type_ItemStack *) NULL_CHECK(sp[-1].o))->F_item;
label_10:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(186);
	if ((frame[3].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(187);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_lastTargetItem = (jref) (frame[3].o);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_lastTargetItem;
	frame[3].o = sp[0].o;
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_hasItem_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hasItem_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectBlock;
	jint temp0 = (jint)((func_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(192);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectingItems = (jint(0));
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}
label_14:;
	{
	LINE_NUMBER(198);
	if ((frame[3].o) == nullptr) goto label_18;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	jint temp0 = jint(1);
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	if (temp1 != 0) goto label_18;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_clearItem) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearItem])(ctx, sp[0].o);
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}
label_18:;
	{
	LINE_NUMBER(205);
	if ((frame[3].o) == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount;
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (temp0 >= ((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_itemCapacity)) goto label_22;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_23;
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_acceptsItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_acceptsItem_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp0 != 0) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(206);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_mining = (jint(0));
	goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(2)), (jfloat(60.0f)));
	if (temp0 == 0) goto label_25;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_25;
	{
	LINE_NUMBER(209);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (jobject(nullptr));
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineFloor) == 0) goto label_28;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_indexer;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_ai_BlockIndexer_findClosestOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findClosestOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile])(ctx, sp[1].o, sp[2].o, (frame[3].o));
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_28:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_ore;
	if (sp[0].o != nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineWalls) == 0) goto label_25;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_indexer;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((func_mindustry_ai_BlockIndexer_findClosestWallOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_findClosestWallOre_mindustry_gen_Unit_mindustry_type_Item_R_mindustry_world_Tile])(ctx, sp[1].o, sp[2].o, (frame[3].o));
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_25:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_ore;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_ore;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	((func_mindustry_ai_types_PrebuildAI_moveTo_arc_math_geom_Position_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_moveTo_arc_math_geom_Position_float_float])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_mineRange) / (jfloat(2))), (jfloat(20.0f)));
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_ore;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_mineRange));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_ore;
	jint temp0 = (jint)((func_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_ore;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) sp[1].o;
	}
label_24:;
	LINE_NUMBER(222);
	goto label_32;
label_6:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) != 0) goto label_34;
	}
	{
	LINE_NUMBER(226);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_mining = (jint(1));
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectBlock;
	jint temp0 = (jint)((func_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(229);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectingItems = (jint(0));
	}
label_37:;
	LINE_NUMBER(231);
	popStackFrame(ctx);
	INST_RETURN();
label_34:;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range));
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_stack;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp1 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	if (temp1 <= 0) goto label_41;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_stack;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_item;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_stack;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, temp0, temp1, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_y), (frame[1].o));
	}
label_41:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	((func_mindustry_gen_Unit_clearItem) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_clearItem])(ctx, sp[0].o);
	LINE_NUMBER(240);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_mining = (jint(1));
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectBlock;
	jint temp0 = (jint)((func_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(243);
	((mindustry_ai_types_PrebuildAI *) NULL_CHECK((frame[0].o)))->F_collectingItems = (jint(0));
	}
label_39:;
	{
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[2].o))->F_type;
	((func_mindustry_ai_types_PrebuildAI_circle_arc_math_geom_Position_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_circle_arc_math_geom_Position_float])(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_range) / (jfloat(1.8f))));
	}
label_32:;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_types_PrebuildAI_lambda$doMining$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:lambda$doMining$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_PrebuildAI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp0 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_buildCostMultiplier) * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_amount)))));
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_mindustry_type_Item_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_1;
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

jfloat M_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$2_mindustry_game_Teams$BlockPlan_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:lambda$findNextPlan$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_entities_units_AIController *) NULL_CHECK((frame[0].o)))->F_unit;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_dst_float_float_R_float])(ctx, sp[0].o, (jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[1].o)))->F_x) * (8)))), (jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[1].o)))->F_y) * (8)))));
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_PrebuildAI_priorities;
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_category;
	jint temp1 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, sp[1].o);
	popStackFrame(ctx);
	return (temp0 - (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp1)) * (jfloat(200.0f))));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_game_Teams$TeamData_mindustry_game_Teams$BlockPlan_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:lambda$findNextPlan$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_ai_types_PrebuildAI_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_category;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_production;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_buildingTree;
	jfloat temp0 = jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_x) * (8)));
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp2 = temp1 - (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) + (jfloat(1))) / (jfloat(2)));
	jfloat temp3 = jfloat((((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_y) * (8)));
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp4 = temp3 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp5 = temp4 - (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) + (jfloat(1))) / (jfloat(2)));
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp6 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) + (jfloat(1));
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp7 = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) + (jfloat(1));
	LINE_NUMBER(72);
	jint temp8 = (jint)((func_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, temp2, temp5, temp6, temp7);
	if (temp8 == 0) goto label_2;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_2:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$1_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:lambda$findNextPlan$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_PrebuildAI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(71);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jfloat SM_mindustry_ai_types_PrebuildAI_lambda$sortPlans$1_mindustry_game_Teams$BlockPlan_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:lambda$sortPlans$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_PrebuildAI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildTime);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_types_PrebuildAI_lambda$sortPlans$0_mindustry_game_Teams$BlockPlan_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:lambda$sortPlans$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_PrebuildAI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(44);
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_PrebuildAI_priorities;
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_category;
	jint temp0 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, sp[1].o);
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ai_types_PrebuildAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_units_AIController(ctx);
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/types/PrebuildAI:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_types_PrebuildAI(ctx);
	{
	LINE_NUMBER(18);
	clinit_mindustry_type_Category(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Category_all;
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	SF_mindustry_ai_types_PrebuildAI_priorities = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	SF_mindustry_ai_types_PrebuildAI_tmpCopy = sp[0].o;
	LINE_NUMBER(31);
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_PrebuildAI_priorities;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_production;
	jint temp0 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat(11.0f));
	LINE_NUMBER(32);
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_PrebuildAI_priorities;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_distribution;
	jint temp1 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = (jfloat(10.0f));
	LINE_NUMBER(33);
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_PrebuildAI_priorities;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_liquid;
	jint temp2 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = (jfloat(9.0f));
	LINE_NUMBER(34);
	clinit_mindustry_ai_types_PrebuildAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_types_PrebuildAI_priorities;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_crafting;
	jint temp3 = (jint)((func_mindustry_type_Category_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_ordinal_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (jfloat(8.0f));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_types_PrebuildAI;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastPlan
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field collectBlock
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastTargetItem
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field ore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method findNextPlan
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ai_types_PrebuildAI[] {
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
	(void *) M_mindustry_entities_units_AIController_unit_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_AIController_unit_R_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_UnitController_hit_mindustry_gen_Bullet,
	(void *) M_mindustry_entities_units_UnitController_isValidController_R_boolean,
	(void *) M_mindustry_entities_units_AIController_isLogicControllable_R_boolean,
	(void *) M_mindustry_entities_units_AIController_updateUnit,
	(void *) M_mindustry_entities_units_UnitController_removed_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_AIController_afterRead_mindustry_gen_Unit,
	(void *) M_mindustry_entities_units_AIController_resetTimers,
	(void *) M_mindustry_entities_units_AIController_hasStance_mindustry_ai_UnitStance_R_boolean,
	(void *) M_mindustry_entities_units_AIController_stanceChanged,
	(void *) M_mindustry_entities_units_AIController_keepState_R_boolean,
	(void *) M_mindustry_entities_units_AIController_stopShooting,
	(void *) M_mindustry_entities_units_AIController_fallback_R_mindustry_entities_units_AIController,
	(void *) M_mindustry_entities_units_AIController_useFallback_R_boolean,
	(void *) M_mindustry_entities_units_AIController_updateVisuals,
	(void *) M_mindustry_ai_types_PrebuildAI_updateMovement,
	(void *) M_mindustry_entities_units_AIController_updateTargeting,
	(void *) M_mindustry_entities_units_AIController_faceTarget,
	(void *) M_mindustry_entities_units_AIController_faceMovement,
	(void *) M_mindustry_entities_units_AIController_invalid_mindustry_gen_Teamc_R_boolean,
	(void *) M_mindustry_entities_units_AIController_pathfind_int,
	(void *) M_mindustry_entities_units_AIController_pathfind_int_boolean,
	(void *) M_mindustry_entities_units_AIController_pathfind_int_boolean_boolean,
	(void *) M_mindustry_entities_units_AIController_alterPathfind_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_units_AIController_targetInvalidated,
	(void *) M_mindustry_entities_units_AIController_updateWeapons,
	(void *) M_mindustry_entities_units_AIController_checkTarget_mindustry_gen_Teamc_float_float_float_R_boolean,
	(void *) M_mindustry_entities_units_AIController_shouldFire_R_boolean,
	(void *) M_mindustry_entities_units_AIController_shouldShoot_R_boolean,
	(void *) M_mindustry_entities_units_AIController_targetFlag_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_targetFlagActive_float_float_mindustry_world_meta_BlockFlag_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_target_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_retarget_R_boolean,
	(void *) M_mindustry_entities_units_AIController_findMainTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_findTarget_float_float_float_boolean_boolean_R_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_commandTarget_mindustry_gen_Teamc,
	(void *) M_mindustry_entities_units_AIController_commandPosition_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_units_AIController_init,
	(void *) M_mindustry_entities_units_AIController_getClosestSpawner_R_mindustry_world_Tile,
	(void *) M_mindustry_entities_units_AIController_unloadPayloads,
	(void *) M_mindustry_entities_units_AIController_circleAttack_float,
	(void *) M_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float,
	(void *) M_mindustry_entities_units_AIController_circle_arc_math_geom_Position_float_float,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2,
	(void *) M_mindustry_entities_units_AIController_moveTo_arc_math_geom_Position_float_float_boolean_arc_math_geom_Vec2_boolean,
	(void *) M_mindustry_entities_units_AIController_prefSpeed_R_float,
	(void *) M_mindustry_entities_units_AIController_lambda$target$1_boolean_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_ai_types_PrebuildAI_findNextPlan_R_mindustry_game_Teams$BlockPlan,
	(void *) M_mindustry_ai_types_PrebuildAI_doMining,
	(void *) M_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$2_mindustry_game_Teams$BlockPlan_R_float,
	(void *) M_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_game_Teams$TeamData_mindustry_game_Teams$BlockPlan_R_boolean,
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
	{ "unit", "(Lmindustry/gen/Unit;)V" },
	{ "unit", "()Lmindustry/gen/Unit;" },
	{ "hit", "(Lmindustry/gen/Bullet;)V" },
	{ "isValidController", "()Z" },
	{ "isLogicControllable", "()Z" },
	{ "updateUnit", "()V" },
	{ "removed", "(Lmindustry/gen/Unit;)V" },
	{ "afterRead", "(Lmindustry/gen/Unit;)V" },
	{ "resetTimers", "()V" },
	{ "hasStance", "(Lmindustry/ai/UnitStance;)Z" },
	{ "stanceChanged", "()V" },
	{ "keepState", "()Z" },
	{ "stopShooting", "()V" },
	{ "fallback", "()Lmindustry/entities/units/AIController;" },
	{ "useFallback", "()Z" },
	{ "updateVisuals", "()V" },
	{ "updateMovement", "()V" },
	{ "updateTargeting", "()V" },
	{ "faceTarget", "()V" },
	{ "faceMovement", "()V" },
	{ "invalid", "(Lmindustry/gen/Teamc;)Z" },
	{ "pathfind", "(I)V" },
	{ "pathfind", "(IZ)V" },
	{ "pathfind", "(IZZ)V" },
	{ "alterPathfind", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "targetInvalidated", "()V" },
	{ "updateWeapons", "()V" },
	{ "checkTarget", "(Lmindustry/gen/Teamc;FFF)Z" },
	{ "shouldFire", "()Z" },
	{ "shouldShoot", "()Z" },
	{ "targetFlag", "(FFLmindustry/world/meta/BlockFlag;Z)Lmindustry/gen/Teamc;" },
	{ "targetFlagActive", "(FFLmindustry/world/meta/BlockFlag;Z)Lmindustry/gen/Teamc;" },
	{ "target", "(FFFZZ)Lmindustry/gen/Teamc;" },
	{ "retarget", "()Z" },
	{ "findMainTarget", "(FFFZZ)Lmindustry/gen/Teamc;" },
	{ "findTarget", "(FFFZZ)Lmindustry/gen/Teamc;" },
	{ "commandTarget", "(Lmindustry/gen/Teamc;)V" },
	{ "commandPosition", "(Larc/math/geom/Vec2;)V" },
	{ "init", "()V" },
	{ "getClosestSpawner", "()Lmindustry/world/Tile;" },
	{ "unloadPayloads", "()V" },
	{ "circleAttack", "(F)V" },
	{ "circle", "(Larc/math/geom/Position;F)V" },
	{ "circle", "(Larc/math/geom/Position;FF)V" },
	{ "moveTo", "(Larc/math/geom/Position;F)V" },
	{ "moveTo", "(Larc/math/geom/Position;FF)V" },
	{ "moveTo", "(Larc/math/geom/Position;FFZLarc/math/geom/Vec2;)V" },
	{ "moveTo", "(Larc/math/geom/Position;FFZLarc/math/geom/Vec2;Z)V" },
	{ "prefSpeed", "()F" },
	{ "lambda$target$1", "(ZLmindustry/gen/Building;)Z" },
	{ "canBuild", "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/world/Block;)Z" },
	{ "findNextPlan", "()Lmindustry/game/Teams$BlockPlan;" },
	{ "doMining", "()V" },
	{ "lambda$findNextPlan$2", "(Lmindustry/game/Teams$BlockPlan;)F" },
	{ "lambda$findNextPlan$0", "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/game/Teams$TeamData;Lmindustry/game/Teams$BlockPlan;)Z" },
};

static FieldMetadata fields[] {
	{ "priorities", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_ai_types_PrebuildAI_priorities, "[F", 8 },
	{ "tmpCopy", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_types_PrebuildAI_tmpCopy, "Larc/struct/Seq;", 8 },
	{ "lastPlan", &class_mindustry_game_Teams$BlockPlan, offsetof(mindustry_ai_types_PrebuildAI, F_lastPlan), "Lmindustry/game/Teams$BlockPlan;", 0 },
	{ "collectBlock", &class_mindustry_world_Block, offsetof(mindustry_ai_types_PrebuildAI, F_collectBlock), "Lmindustry/world/Block;", 0 },
	{ "collectingItems", &class_boolean, offsetof(mindustry_ai_types_PrebuildAI, F_collectingItems), "Z", 0 },
	{ "mining", &class_boolean, offsetof(mindustry_ai_types_PrebuildAI, F_mining), "Z", 0 },
	{ "lastTargetItem", &class_mindustry_type_Item, offsetof(mindustry_ai_types_PrebuildAI, F_lastTargetItem), "Lmindustry/type/Item;", 0 },
	{ "ore", &class_mindustry_world_Tile, offsetof(mindustry_ai_types_PrebuildAI, F_ore), "Lmindustry/world/Tile;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_types_PrebuildAI, 0, "()V", 1 },
	{ "sortPlans", (intptr_t) SM_mindustry_ai_types_PrebuildAI_sortPlans_arc_struct_Queue, 0, "(Larc/struct/Queue;)V", 9 },
	{ "canBuild", (intptr_t) M_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean, VTABLE_mindustry_ai_types_PrebuildAI_canBuild_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_world_Block_R_boolean, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/world/Block;)Z", 2 },
	{ "findNextPlan", (intptr_t) M_mindustry_ai_types_PrebuildAI_findNextPlan_R_mindustry_game_Teams$BlockPlan, VTABLE_mindustry_ai_types_PrebuildAI_findNextPlan_R_mindustry_game_Teams$BlockPlan, "()Lmindustry/game/Teams$BlockPlan;", 2 },
	{ "updateMovement", (intptr_t) M_mindustry_ai_types_PrebuildAI_updateMovement, VTABLE_mindustry_ai_types_PrebuildAI_updateMovement, "()V", 1 },
	{ "doMining", (intptr_t) M_mindustry_ai_types_PrebuildAI_doMining, VTABLE_mindustry_ai_types_PrebuildAI_doMining, "()V", 0 },
	{ "lambda$doMining$0", (intptr_t) SM_mindustry_ai_types_PrebuildAI_lambda$doMining$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$findNextPlan$2", (intptr_t) M_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$2_mindustry_game_Teams$BlockPlan_R_float, VTABLE_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$2_mindustry_game_Teams$BlockPlan_R_float, "(Lmindustry/game/Teams$BlockPlan;)F", 4098 },
	{ "lambda$findNextPlan$0", (intptr_t) M_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_game_Teams$TeamData_mindustry_game_Teams$BlockPlan_R_boolean, VTABLE_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_mindustry_game_Teams$TeamData_mindustry_game_Teams$BlockPlan_R_boolean, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;Lmindustry/game/Teams$TeamData;Lmindustry/game/Teams$BlockPlan;)Z", 4098 },
	{ "lambda$findNextPlan$1", (intptr_t) SM_mindustry_ai_types_PrebuildAI_lambda$findNextPlan$1_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$sortPlans$1", (intptr_t) SM_mindustry_ai_types_PrebuildAI_lambda$sortPlans$1_mindustry_game_Teams$BlockPlan_R_float, 0, "(Lmindustry/game/Teams$BlockPlan;)F", 4106 },
	{ "lambda$sortPlans$0", (intptr_t) SM_mindustry_ai_types_PrebuildAI_lambda$sortPlans$0_mindustry_game_Teams$BlockPlan_R_float, 0, "(Lmindustry/game/Teams$BlockPlan;)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_types_PrebuildAI, 0, "()V", 8 },
};

Class class_mindustry_ai_types_PrebuildAI{
		.nativeName = (intptr_t) "mindustry/ai/types/PrebuildAI",
		.parentClass = (intptr_t) &class_mindustry_entities_units_AIController,
		.size = sizeof(mindustry_ai_types_PrebuildAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_types_PrebuildAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_types_PrebuildAI,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_types_PrebuildAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 66,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_types_PrebuildAI = registerClass(&class_mindustry_ai_types_PrebuildAI);

}
