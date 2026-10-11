#include "mindustry/ai/RtsAI.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/Events.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/logic/Ranged.h"
#include "mindustry/ai/RtsAI_invoke_arc_func_Cons_3.h"
#include "mindustry/ai/RtsAI_invoke_arc_func_Floatf_5.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ai/RtsAI_invoke_arc_func_Cons_5.h"
#include "mindustry/ai/RtsAI_invoke_arc_func_Cons_4.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/content/Fx.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/ai/RtsAI_invoke_arc_func_Floatf_3.h"
#include "mindustry/ai/RtsAI_invoke_arc_func_Floatf_4.h"
#include "arc/util/Tmp.h"
#include "arc/struct/ObjectFloatMap_Entries.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/OS.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "java/util/Iterator.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/util/Structs.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "arc/math/geom/Intersector.h"
#include "java/lang/Object.h"
#include "mindustry/entities/Units.h"
#include "arc/struct/ObjectFloatMap_Entry.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/defense/turrets/BaseTurret_BaseTurretBuild.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "java/lang/Float.h"
#include "java/lang/Iterable.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "mindustry/ai/RtsAI_invoke_arc_func_Boolf_2.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/gen/Teamc.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "mindustry/ai/RtsAI.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/ai/RtsAI_invoke_java_lang_Runnable_3.h"
#include "mindustry/ai/RtsAI_invoke_java_lang_Runnable_2.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/ai/RtsAI_invoke_arc_func_Boolf_3.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/Fonts.h"
#include "arc/util/Strings.h"
#include "mindustry/gen/WaterMovec.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/game/EventType_BuildDamageEvent.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jobject SF_mindustry_ai_RtsAI_targets;
jobject SF_mindustry_ai_RtsAI_squad;
jobject SF_mindustry_ai_RtsAI_stack;
jobject SF_mindustry_ai_RtsAI_used;
jobject SF_mindustry_ai_RtsAI_assignedTargets;
jobject SF_mindustry_ai_RtsAI_invalidTarget;
jfloat SF_mindustry_ai_RtsAI_squadRadius;
jint SF_mindustry_ai_RtsAI_timeUpdate;
jint SF_mindustry_ai_RtsAI_timerSpawn;
jint SF_mindustry_ai_RtsAI_maxTargetsChecked;
jobject SF_mindustry_ai_RtsAI_flags;
jobject SF_mindustry_ai_RtsAI_weights;
jbool SF_mindustry_ai_RtsAI_debug;

void mark_mindustry_ai_RtsAI(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_RtsAI_targets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_RtsAI_targets)->clazz)->markFunction)((jobject) SF_mindustry_ai_RtsAI_targets, mark, depth + 1);
		if (SF_mindustry_ai_RtsAI_squad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_RtsAI_squad)->clazz)->markFunction)((jobject) SF_mindustry_ai_RtsAI_squad, mark, depth + 1);
		if (SF_mindustry_ai_RtsAI_stack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_RtsAI_stack)->clazz)->markFunction)((jobject) SF_mindustry_ai_RtsAI_stack, mark, depth + 1);
		if (SF_mindustry_ai_RtsAI_used)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_RtsAI_used)->clazz)->markFunction)((jobject) SF_mindustry_ai_RtsAI_used, mark, depth + 1);
		if (SF_mindustry_ai_RtsAI_assignedTargets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_RtsAI_assignedTargets)->clazz)->markFunction)((jobject) SF_mindustry_ai_RtsAI_assignedTargets, mark, depth + 1);
		if (SF_mindustry_ai_RtsAI_invalidTarget)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_RtsAI_invalidTarget)->clazz)->markFunction)((jobject) SF_mindustry_ai_RtsAI_invalidTarget, mark, depth + 1);
		if (SF_mindustry_ai_RtsAI_flags)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_RtsAI_flags)->clazz)->markFunction)((jobject) SF_mindustry_ai_RtsAI_flags, mark, depth + 1);
		if (SF_mindustry_ai_RtsAI_weights)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_RtsAI_weights)->clazz)->markFunction)((jobject) SF_mindustry_ai_RtsAI_weights, mark, depth + 1);
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
	auto self = (mindustry_ai_RtsAI *) object;
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_damagedSet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_damagedSet)->clazz)->markFunction)((jobject) self->F_damagedSet, mark, depth + 1);
	if (self->F_damaged)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_damaged)->clazz)->markFunction)((jobject) self->F_damaged, mark, depth + 1);
}

void init_mindustry_ai_RtsAI_mindustry_game_Teams$TeamData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval_int(ctx, sp[1].o, (10));
	((mindustry_ai_RtsAI *) NULL_CHECK(sp[0].o))->F_timer = (jref) sp[1].o;
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_ai_RtsAI *) NULL_CHECK(sp[0].o))->F_damagedSet = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_ai_RtsAI *) NULL_CHECK(sp[0].o))->F_damaged = (jref) sp[1].o;
	LINE_NUMBER(58);
	((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_random_float_R_float(ctx, (jfloat(120.0f)));
	((func_arc_util_Interval_reset_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_reset_int_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(63);
	if ((clinit_mindustry_ai_RtsAI(ctx), (jint)SF_mindustry_ai_RtsAI_debug) == 0) goto label_7;
	}
	{
	LINE_NUMBER(64);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_draw;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_RtsAI_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_ai_RtsAI_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_ai_RtsAI_invoke_java_lang_Runnable_2);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_RtsAI_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(0)), (jfloat(120.0f)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(83);
	((func_mindustry_ai_RtsAI_assignSquads) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_RtsAI_assignSquads])(ctx, (frame[0].o));
	LINE_NUMBER(84);
	((func_mindustry_ai_RtsAI_checkBuilding) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_RtsAI_checkBuilding])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_RtsAI_checkBuilding(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:checkBuilding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_aiCoreSpawn) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_timer;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(1)), (jfloat(420.0f)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_hasCore_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o));
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[1].o)))->F_unitType;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[0].o, sp[1].o);
	frame[2].i = temp0;
	LINE_NUMBER(95);
	jint temp1 = frame[2].i;
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_cores;
	if (temp1 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((frame[1].o)))->F_unitType;
	sp[1].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_cores;
	sp[1].o = (jobject)((func_arc_struct_Seq_random_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_random_R_java_lang_Object])(ctx, sp[1].o);
	((func_mindustry_gen_Unit_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_arc_math_geom_Position])(ctx, sp[0].o, (checkCast(ctx, &class_arc_math_geom_Position, sp[1].o)));
	LINE_NUMBER(98);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[3].o));
	LINE_NUMBER(99);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[3].o));
	}
label_1:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_RtsAI_assignSquads(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:assignSquads", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_assignedTargets;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(106);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_used;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_damaged;
	sp[1].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_damagedSet;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_java_lang_Iterable_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_damagedSet;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(110);
	frame[1].i = (jint(0));
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(113);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_used;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_id));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_9;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[5].o)));
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasCommand_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasCommand_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_isAttacking_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_isAttacking_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(114);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_squad;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(115);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_squad;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(117);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(118);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(120);
	frame[5].f = ((jfloat(60.0f)) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_hitSize) * (jfloat(1.5f))));
	}
label_16:;
	{
	LINE_NUMBER(122);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_stack;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(123);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, sp[0].o);
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_x) - ((frame[5].f) / (jfloat(2)));
	jfloat temp1 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_y) - ((frame[5].f) / (jfloat(2)));
	jfloat temp2 = frame[5].f;
	jfloat temp3 = frame[5].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_RtsAI_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ai_RtsAI_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ai_RtsAI_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(131);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_RtsAI(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_RtsAI_squad;
	sp += 2;
	if ((frame[1].i) != 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_mindustry_ai_RtsAI_handleSquad_arc_struct_Seq_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_RtsAI_handleSquad_arc_struct_Seq_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i);
	sp++;
	if ((--sp)->i == 0) goto label_9;
	{
	LINE_NUMBER(134);
	frame[1].i = (jint(1));
	}
label_9:;
	LINE_NUMBER(137);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_damaged;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_RtsAI_handleSquad_arc_struct_Seq_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[33];
	auto stack = &frame[23];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:handleSquad", 33 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(143);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[1].o));
	frame[3].i = (isInstance(ctx, sp[0].o, &class_mindustry_gen_WaterMovec));
	LINE_NUMBER(147);
	frame[4].f = (jfloat(0));
	frame[5].f = (jfloat(0));
	LINE_NUMBER(148);
	frame[6].f = (jfloat(0));
	frame[7].f = (jfloat(0));
	LINE_NUMBER(149);
	frame[8].i = (jint(1));
	frame[9].i = (jint(1));
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[10].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetAir) != 0) goto label_12;
	}
	INST_ICONST(0);
	INST_ISTORE(8);
label_12:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetGround) != 0) goto label_13;
	}
	INST_ICONST(0);
	INST_ISTORE(9);
label_13:;
	{
	LINE_NUMBER(155);
	frame[6].f = ((frame[6].f) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_x));
	LINE_NUMBER(156);
	frame[7].f = ((frame[7].f) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_y));
	LINE_NUMBER(157);
	frame[4].f = ((frame[4].f) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_health));
	LINE_NUMBER(158);
	jfloat temp0 = frame[5].f;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[11].o)))->F_type;
	frame[5].f = (temp0 + ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_dpsEstimate));
	LINE_NUMBER(159);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(160);
	frame[6].f = ((frame[6].f) / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size))));
	LINE_NUMBER(161);
	frame[7].f = ((frame[7].f) / (jfloat(((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size))));
	LINE_NUMBER(163);
	if ((clinit_mindustry_ai_RtsAI(ctx), (jint)SF_mindustry_ai_RtsAI_debug) == 0) goto label_20;
	}
	{
	LINE_NUMBER(164);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Squad: \u0001"_j.string, 1, boxInteger(ctx, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size)));
	((func_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int])(ctx, sp[0].o, sp[1].o, (jint(-1)), (jfloat(2)), (frame[6].f), (frame[7].f), (17));
	}
label_20:;
	{
	LINE_NUMBER(167);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(168);
	frame[11].i = (jint(0));
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_damaged;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_24;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_24;
	{
	LINE_NUMBER(179);
	frame[12].f = (frame[6].f);
	frame[13].f = (frame[7].f);
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_damaged;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_RtsAI_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_ai_RtsAI_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_ai_RtsAI_invoke_arc_func_Floatf_3);
		proxy->F_field1 = (frame[13].f);
		proxy->F_field0 = (frame[12].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[14].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(192);
	if ((frame[14].o) == nullptr) goto label_24;
	}
	{
	if ((isInstance(ctx, (frame[14].o), &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) != 0) goto label_29;
	}
	{
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size;
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (temp0 >= ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsMinSquad)) goto label_29;
	}
	{
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) <= 0) goto label_30;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[1].o));
	if ((doubleCompare(((jdouble)((mindustry_gen_Unit *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o))))->F_flag), (jdouble(0)), -1)) != 0) goto label_29;
	}
label_30:;
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_gen_Building_within_float_float_float_R_boolean])(ctx, (frame[14].o), (frame[6].f), (frame[7].f), (jfloat(1000.0f)));
	if (temp0 == 0) goto label_24;
	}
label_29:;
	{
	LINE_NUMBER(193);
	frame[10].o = (frame[14].o);
	LINE_NUMBER(195);
	if ((clinit_mindustry_ai_RtsAI(ctx), (jint)SF_mindustry_ai_RtsAI_debug) == 0) goto label_32;
	}
	{
	LINE_NUMBER(196);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_gen_Building_dst_float_float_R_float])(ctx, (frame[14].o), (frame[6].f), (frame[7].f));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Defend, dst = \u0001"_j.string, 1, boxInteger(ctx, (jint(temp0))));
	((func_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showLabel_java_lang_String_int_float_float_float_int])(ctx, sp[0].o, sp[1].o, (jint(-1)), (jfloat(8.0f)), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[14].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[14].o)))->F_y), (17));
	}
label_32:;
	{
	LINE_NUMBER(199);
	if ((isInstance(ctx, (frame[14].o), &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) == 0) goto label_24;
	}
	{
	LINE_NUMBER(200);
	frame[11].i = (jint(1));
	}
label_24:;
	{
	LINE_NUMBER(205);
	frame[12].i = (frame[8].i);
	frame[13].i = (frame[9].i);
	LINE_NUMBER(208);
	frame[14].o = (jobject(nullptr));
	LINE_NUMBER(209);
	frame[15].o = (jobject(nullptr));
	LINE_NUMBER(210);
	if ((frame[10].o) == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(211);
	frame[16].f = (jfloat(350.0f));
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_y;
	jfloat temp2 = frame[16].f;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_RtsAI_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_ai_RtsAI_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_ai_RtsAI_invoke_arc_func_Boolf_2);
		proxy->F_field1 = (frame[13].i);
		proxy->F_field0 = (frame[12].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closestEnemy_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	frame[17].o = sp[0].o;
	LINE_NUMBER(215);
	if ((frame[17].o) == nullptr) goto label_43;
	}
	{
	LINE_NUMBER(218);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[17].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[17].o)))->F_y));
	frame[14].o = sp[0].o;
	LINE_NUMBER(219);
	frame[15].o = (frame[17].o);
	goto label_39;
	}
label_43:;
	{
	LINE_NUMBER(227);
	frame[18].f = (jfloat(3,402823e+38f));
	LINE_NUMBER(228);
	frame[19].o = (jobject(nullptr));
	LINE_NUMBER(231);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_turret;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[20].o = sp[0].o;
	}
label_48:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[20].o)))(ctx, (frame[20].o));
	if (temp0 == 0) goto label_49;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[20].o)))(ctx, (frame[20].o));
	frame[21].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(232);
	sp[0].o = frame[21].o;
	sp[1].o = frame[10].o;
	jfloat temp0 = (jfloat)((func_mindustry_logic_Ranged_range_R_float) resolveInterfaceMethod(ctx, &class_mindustry_logic_Ranged, INDEX_mindustry_logic_Ranged_range_R_float, (checkCast(ctx, &class_mindustry_logic_Ranged, (frame[21].o)))))(ctx, (checkCast(ctx, &class_mindustry_logic_Ranged, (frame[21].o))));
	jint temp1 = (jint)((func_mindustry_gen_Building_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 == 0) goto label_51;
	}
	{
	LINE_NUMBER(233);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, (frame[21].o))->vtable)[VTABLE_mindustry_gen_Building_dst2_arc_math_geom_Position_R_float])(ctx, (frame[21].o), (frame[10].o));
	frame[22].f = temp0;
	LINE_NUMBER(234);
	if ((floatCompare((frame[22].f), (frame[18].f), 1)) >= 0) goto label_51;
	}
	{
	LINE_NUMBER(235);
	frame[18].f = (frame[22].f);
	LINE_NUMBER(236);
	frame[19].o = (frame[21].o);
	}
label_51:;
	LINE_NUMBER(239);
	goto label_48;
label_49:;
	{
	LINE_NUMBER(241);
	if ((frame[19].o) == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(242);
	frame[15].o = (frame[19].o);
	}
label_39:;
	{
	LINE_NUMBER(247);
	if ((frame[14].o) != nullptr) goto label_57;
	}
	INST_ALOAD(15);
	if ((--sp)->o == nullptr) goto label_58;
label_57:;
	INST_ICONST(1);
	goto label_59;
label_58:;
	INST_ICONST(0);
label_59:;
	{
	sp -= 1;
	frame[16].i = sp[0].i;
	LINE_NUMBER(249);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_invalidTarget;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(251);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_squad;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[17].o = sp[0].o;
	}
label_62:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[17].o)))(ctx, (frame[17].o));
	if (temp0 == 0) goto label_63;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[17].o)))(ctx, (frame[17].o));
	frame[18].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[18].o));
	frame[20].o = sp[0].o;
	if ((isInstance(ctx, (frame[20].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_65;
	}
	{
	frame[19].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[20].o)));
	LINE_NUMBER(253);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_invalidTarget;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[19].o)))->F_unreachableBuildings;
	((func_arc_struct_IntSet_addAll_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_addAll_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	}
label_65:;
	LINE_NUMBER(255);
	goto label_62;
label_63:;
	{
	LINE_NUMBER(257);
	if ((frame[16].i) == 0) goto label_67;
	}
	INST_ACONST_NULL();
	goto label_68;
label_67:;
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[6].f;
	jfloat temp1 = frame[7].f;
	jint temp2 = (jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size;
	jfloat temp3 = frame[5].f;
	jfloat temp4 = frame[4].f;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[1].o));
	jobject temp5 = sp[1].o;
	sp[1].f = temp0;
	sp[2].f = temp1;
	sp[3].i = temp2;
	sp[4].f = temp3;
	sp[5].f = temp4;
	sp += 6;
	if ((doubleCompare(((jdouble)((mindustry_gen_Unit *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Unit, temp5))))->F_flag), (jdouble(0)), -1)) != 0) goto label_69;
	}
	INST_ICONST(1);
	goto label_70;
label_69:;
	INST_ICONST(0);
label_70:;
	{
	sp -= 7;
	sp[7].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[7].o)))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[7].o)));
	sp[0].o = (jobject)((func_mindustry_ai_RtsAI_findTarget_float_float_int_float_float_boolean_boolean_boolean_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_RtsAI_findTarget_float_float_int_float_float_boolean_boolean_boolean_R_mindustry_gen_Building])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].i, sp[4].f, sp[5].f, sp[6].i, temp0, (frame[3].i));
	sp += 1;
	}
label_68:;
	{
	sp -= 1;
	frame[17].o = sp[0].o;
	LINE_NUMBER(259);
	if ((frame[17].o) != nullptr) goto label_72;
	}
	INST_ILOAD(16);
	if ((--sp)->i == 0) goto label_73;
label_72:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[18].o = sp[0].o;
	}
label_74:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[18].o)))(ctx, (frame[18].o));
	if (temp0 == 0) goto label_73;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[18].o)))(ctx, (frame[18].o));
	frame[19].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(261);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_gen_Unit_isCommandable_R_boolean])(ctx, (frame[19].o));
	if (temp0 == 0) goto label_76;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI])(ctx, (frame[19].o));
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasCommand_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasCommand_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_76;
	}
	{
	LINE_NUMBER(262);
	if ((frame[14].o) == nullptr) goto label_78;
	}
	{
	sp[0].o = frame[19].o;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[14].o)))->F_x));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[14].o)))->F_y));
	jint temp2 = (jint)((func_mindustry_gen_Unit_isPathImpassable_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isPathImpassable_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1);
	if (temp2 != 0) goto label_78;
	}
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI])(ctx, (frame[19].o));
	((func_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2_boolean])(ctx, sp[0].o, (frame[14].o), (jint(1)));
	goto label_80;
	}
label_78:;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_gen_Unit_command_R_mindustry_ai_types_CommandAI])(ctx, (frame[19].o));
	sp += 1;
	if ((frame[15].o) != nullptr) goto label_81;
	}
	INST_ALOAD(17);
	goto label_82;
label_81:;
	INST_ALOAD(15);
label_82:;
	INST_ALOAD(15);
	if ((--sp)->o == nullptr) goto label_83;
	INST_ICONST(1);
	goto label_84;
label_83:;
	INST_ICONST(0);
label_84:;
	POP_N(3); // Pop method args
	((func_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i);
label_80:;
	{
	LINE_NUMBER(270);
	if ((frame[11].i) != 0) goto label_76;
	}
	{
	LINE_NUMBER(271);
	((mindustry_gen_Unit *) NULL_CHECK((frame[19].o)))->F_flag = (jdouble(1));
	}
label_76:;
	LINE_NUMBER(274);
	goto label_74;
label_73:;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (frame[16].i);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_RtsAI_findTarget_float_float_int_float_float_boolean_boolean_boolean_R_mindustry_gen_Building(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:findTarget", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(281);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (temp0 >= ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsMinSquad)) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(287);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(288);
	if ((frame[8].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(290);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_targets;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_indexer;
	sp[2].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[2].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[2].o))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[3].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	sp[1].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(292);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_flags;
	frame[9].o = sp[0].o;
	frame[10].i = (((jarray) nullCheck(ctx, (frame[9].o)))->length);
	frame[11].i = (jint(0));
	}
label_6:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_5;
	}
	{
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[9].o), (frame[11].i)));
	LINE_NUMBER(293);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_targets;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_indexer;
	sp[2].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[2].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[2].o))->F_team;
	sp[1].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o, (frame[12].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(292);
	INST_IINC(11, 1);
	goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(296);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_targets;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_RtsAI_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_ai_RtsAI_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_ai_RtsAI_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(298);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_targets;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_10;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
	{
	LINE_NUMBER(300);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_weights;
	((func_arc_struct_ObjectFloatMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(303);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_shuffle_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_shuffle_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(304);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_targets;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (15));
	LINE_NUMBER(306);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_targets;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(307);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_weights;
	sp[1].o = frame[10].o;
	jfloat temp0 = (jfloat)((func_mindustry_ai_RtsAI_estimateStats_float_float_float_float_float_float_boolean_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_RtsAI_estimateStats_float_float_float_float_float_float_boolean_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_y), (frame[4].f), (frame[5].f), (frame[7].i));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(308);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(310);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_targets;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_RtsAI_invoke_arc_func_Floatf_4(ctx);
		auto proxy = (mindustry_ai_RtsAI_invoke_arc_func_Floatf_4 *) gcAlloc(ctx, &class_mindustry_ai_RtsAI_invoke_arc_func_Floatf_4);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(313);
	sp[1].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_RtsAI_invoke_arc_func_Floatf_5(ctx);
		auto proxy = (mindustry_ai_RtsAI_invoke_arc_func_Floatf_5 *) gcAlloc(ctx, &class_mindustry_ai_RtsAI_invoke_arc_func_Floatf_5);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[2].o = (jobject) proxy;
	}
	LINE_NUMBER(315);
	sp[2].o = (jobject)SM_arc_util_Structs_comparingFloat_arc_func_Floatf_R_java_util_Comparator(ctx, sp[2].o);
	LINE_NUMBER(311);
	sp[1].o = (jobject)SM_arc_util_Structs_comps_java_util_Comparator_java_util_Comparator_R_java_util_Comparator(ctx, sp[1].o, sp[2].o);
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_java_util_Comparator_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[9].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(319);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_weights;
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[0].o, (frame[9].o), (jfloat(0)));
	frame[10].f = temp0;
	LINE_NUMBER(320);
	if ((frame[6].i) == 0) goto label_24;
	}
	{
	jfloat temp0 = frame[10].f;
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if ((floatCompare(temp0, ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsMinWeight), 1)) >= 0) goto label_24;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (temp0 >= ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsMaxSquad)) goto label_24;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	jint temp1 = (jint)SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_24;
	}
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_24:;
	{
	LINE_NUMBER(324);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_assignedTargets;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_id));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ai_RtsAI_estimateStats_float_float_float_float_float_float_boolean_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:estimateStats", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0));
	frame[8].o = sp[0].o;
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0));
	frame[9].o = sp[0].o;
	LINE_NUMBER(331);
	frame[10].f = (jfloat(50.0f));
	LINE_NUMBER(333);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[1].o))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_turret;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(334);
	if ((isInstance(ctx, (frame[12].o), &class_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild)) == 0) goto label_7;
	}
	{
	frame[13].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild, (frame[12].o)));
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_block;
	frame[15].o = sp[0].o;
	if ((isInstance(ctx, (frame[15].o), &class_mindustry_world_blocks_defense_turrets_Turret)) == 0) goto label_7;
	}
	{
	frame[14].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret, (frame[15].o)));
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[14].o)))->F_targetAir) == 0) goto label_10;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_11;
label_10:;
	{
	if (((jint)((mindustry_world_blocks_defense_turrets_Turret *) NULL_CHECK((frame[14].o)))->F_targetGround) == 0) goto label_7;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_7;
label_11:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_geom_Intersector_distanceSegmentPoint_float_float_float_float_float_float_R_float(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_y));
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_range_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_range_R_float])(ctx, (frame[13].o));
	if ((floatCompare(temp0, (temp1 + (frame[10].f)), 1)) > 0) goto label_7;
	}
	{
	LINE_NUMBER(335);
	sp[0].o = frame[8].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[13].o)))->F_health));
	LINE_NUMBER(336);
	sp[0].o = frame[9].o;
	jint temp3 = jint(0);
	jfloat temp6 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3);
	jfloat temp7 = (jfloat)((func_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_estimateDps_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild_estimateDps_R_float])(ctx, (frame[13].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (temp6 + temp7);
	}
label_7:;
	LINE_NUMBER(338);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(340);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[1].f), (frame[2].f), ((frame[3].f) - (frame[1].f)), ((frame[4].f) - (frame[2].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(280.0f)));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_team;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_RtsAI_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_ai_RtsAI_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_ai_RtsAI_invoke_arc_func_Cons_4);
		proxy->F_field6 = (jref) (frame[9].o);
		proxy->F_field5 = (jref) (frame[8].o);
		proxy->F_field4 = (frame[10].f);
		proxy->F_field3 = (frame[4].f);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_entities_Units_nearbyEnemies_mindustry_game_Team_arc_math_geom_Rect_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(350);
	frame[11].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), (jint(0))));
	frame[12].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[9].o), (jint(0))));
	LINE_NUMBER(352);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_float_R_boolean(ctx, (frame[5].f), (jfloat(1,000000e-03f)));
	if (temp0 == 0) goto label_18;
	}
	(sp++)->f = jfloat(std::numeric_limits<float>::infinity());
	goto label_19;
label_18:;
	{
	jfloat temp0 = (frame[11].f) / (frame[5].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	frame[13].f = sp[0].f;
	LINE_NUMBER(353);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (frame[12].f));
	if (temp0 == 0) goto label_21;
	}
	(sp++)->f = jfloat(std::numeric_limits<float>::infinity());
	goto label_22;
label_21:;
	{
	jfloat temp0 = (frame[6].f) / (frame[12].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_22:;
	{
	sp -= 1;
	frame[14].f = sp[0].f;
	LINE_NUMBER(356);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[13].f));
	if (temp0 != 0) goto label_24;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (frame[14].f));
	if (temp0 == 0) goto label_25;
	}
label_24:;
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_25:;
	{
	LINE_NUMBER(358);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[14].f));
	if (temp0 != 0) goto label_26;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (frame[13].f));
	if (temp0 == 0) goto label_27;
	}
label_26:;
	(sp++)->f = jfloat(100000.0f);
	popStackFrame(ctx);
	INST_FRETURN();
label_27:;
	{
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return ((frame[14].f) / (frame[13].f));
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_RtsAI_lambda$estimateStats$0_float_float_float_float_float_Array1_float_Array1_float_mindustry_gen_Unit(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:lambda$estimateStats$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(344);
	jfloat temp0 = (jfloat)SM_arc_math_geom_Intersector_distanceSegmentPoint_float_float_float_float_float_float_R_float(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].f), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[7].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[7].o)))->F_y));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_range_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Unit_range_R_float])(ctx, (frame[7].o));
	if ((floatCompare(temp0, (temp1 + (frame[4].f)), 1)) > 0) goto label_1;
	}
	{
	LINE_NUMBER(345);
	sp[0].o = frame[5].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[7].o)))->F_health));
	LINE_NUMBER(346);
	sp[0].o = frame[6].o;
	jint temp3 = jint(0);
	jfloat temp6 = (jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[7].o)))->F_type;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (temp6 + ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_dpsEstimate));
	}
label_1:;
	LINE_NUMBER(348);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_RtsAI_lambda$findTarget$2_float_float_mindustry_gen_Building_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:lambda$findTarget$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(315);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst2_float_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_dst2_float_float_R_float])(ctx, (frame[2].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_RtsAI_lambda$findTarget$1_float_float_mindustry_gen_Building_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:lambda$findTarget$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(313);
	jfloat temp0 = jfloat(1);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_weights;
	jfloat temp1 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[0].o, (frame[2].o), (jfloat(0)));
	jfloat temp2 = temp0 - temp1;
	jfloat temp3 = (jfloat)((func_mindustry_gen_Building_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_dst_float_float_R_float])(ctx, (frame[2].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return (temp2 + (temp3 / (jfloat(10000.0f))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_RtsAI_lambda$findTarget$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:lambda$findTarget$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(296);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_assignedTargets;
	jint temp0 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_id));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_invalidTarget;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_2;
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

jbool SM_mindustry_ai_RtsAI_lambda$handleSquad$1_boolean_boolean_mindustry_gen_Unit_R_boolean(jcontext ctx, jbool param0, jbool param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:lambda$handleSquad$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(214);
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[2].o), (frame[0].i), (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_RtsAI_lambda$handleSquad$0_float_float_mindustry_gen_Building_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:lambda$handleSquad$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(183);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (jfloat(-999999.0f));
	}
label_1:;
	{
	LINE_NUMBER(187);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_dst_float_float_R_float])(ctx, (frame[2].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_RtsAI_lambda$assignSquads$0_mindustry_gen_Unit_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:lambda$assignSquads$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasCommand_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasCommand_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_2;
	}
	{
	if ((doubleCompare(((jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_flag), (jdouble(0)), -1)) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	if ((doubleCompare(((jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag), (jdouble(0)), -1)) != 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_2;
	{
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_used;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_id));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(127);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_squad;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(128);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(130);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ai_RtsAI_lambda$new$0(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	{
	LINE_NUMBER(66);
	jfloat temp0 = jfloat(120.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_RtsAI_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ai_RtsAI_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ai_RtsAI_invoke_java_lang_Runnable_3);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_RtsAI_lambda$new$1(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:lambda$new$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	{
	LINE_NUMBER(68);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Font_getScaleX_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getScaleX_R_float])(ctx, sp[0].o);
	frame[0].f = temp0;
	LINE_NUMBER(69);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(0.5f)));
	LINE_NUMBER(70);
	clinit_mindustry_ai_RtsAI(ctx);
	sp[0].o = (jobject)SF_mindustry_ai_RtsAI_weights;
	sp[0].o = (jobject)((func_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_iterator_R_arc_struct_ObjectFloatMap$Entries])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_ObjectFloatMap$Entry, sp[0].o));
	LINE_NUMBER(71);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[1].o = (jobject)SM_arc_util_Strings_fixed_float_int_R_java_lang_String(ctx, ((jfloat)((arc_struct_ObjectFloatMap$Entry *) NULL_CHECK((frame[2].o)))->F_value), (jint(2)));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[sky]\u0001"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((arc_struct_ObjectFloatMap$Entry *) NULL_CHECK((frame[2].o)))->F_key;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Building, sp[2].o))))->F_x;
	sp[2].o = (jobject)((arc_struct_ObjectFloatMap$Entry *) NULL_CHECK((frame[2].o)))->F_key;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp0, ((jfloat)((mindustry_gen_Building *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Building, sp[2].o))))->F_y), (jint(1)));
	LINE_NUMBER(72);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(73);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (frame[0].f));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_RtsAI_lambda$static$0_mindustry_game_EventType$BuildDamageEvent(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:lambda$static$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_game_EventType$BuildDamageEvent *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsAi) == 0) goto label_1;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_game_EventType$BuildDamageEvent *) NULL_CHECK((frame[0].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_rtsAi;
	frame[1].o = sp[0].o;
	LINE_NUMBER(50);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_ai_RtsAI *) NULL_CHECK((frame[1].o)))->F_damagedSet;
	sp[1].o = (jobject)((mindustry_game_EventType$BuildDamageEvent *) NULL_CHECK((frame[0].o)))->F_build;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_ai_RtsAI(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ai_RtsAI_squadRadius = jfloat(60.0f);
	SF_mindustry_ai_RtsAI_timeUpdate = jint(0);
	SF_mindustry_ai_RtsAI_timerSpawn = jint(1);
	SF_mindustry_ai_RtsAI_maxTargetsChecked = jint(15);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/RtsAI:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_RtsAI(ctx);
	{
	LINE_NUMBER(28);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_RtsAI(ctx);
	SF_mindustry_ai_RtsAI_targets = sp[0].o;
	LINE_NUMBER(29);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[0].o, (jint(0)));
	clinit_mindustry_ai_RtsAI(ctx);
	SF_mindustry_ai_RtsAI_squad = sp[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_ai_RtsAI(ctx);
	SF_mindustry_ai_RtsAI_stack = sp[0].o;
	LINE_NUMBER(30);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_ai_RtsAI(ctx);
	SF_mindustry_ai_RtsAI_used = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_ai_RtsAI(ctx);
	SF_mindustry_ai_RtsAI_assignedTargets = sp[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_ai_RtsAI(ctx);
	SF_mindustry_ai_RtsAI_invalidTarget = sp[0].o;
	LINE_NUMBER(36);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (jint(5)));
	jint temp0 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_generator;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_factory;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_battery;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_drill;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	clinit_mindustry_ai_RtsAI(ctx);
	SF_mindustry_ai_RtsAI_flags = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[0].o);
	clinit_mindustry_ai_RtsAI(ctx);
	SF_mindustry_ai_RtsAI_weights = sp[0].o;
	LINE_NUMBER(38);
	jint temp5 = (jint)SM_arc_util_OS_hasProp_java_lang_String_R_boolean(ctx, (((jobject) createStringLiteral(ctx, u8"mindustry.debug"_j))));
	clinit_mindustry_ai_RtsAI(ctx);
	SF_mindustry_ai_RtsAI_debug = temp5;
	LINE_NUMBER(47);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$BuildDamageEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_RtsAI_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ai_RtsAI_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ai_RtsAI_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_RtsAI;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method findTarget
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
}

void *vtable_mindustry_ai_RtsAI[] {
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
	(void *) M_mindustry_ai_RtsAI_update,
	(void *) M_mindustry_ai_RtsAI_checkBuilding,
	(void *) M_mindustry_ai_RtsAI_assignSquads,
	(void *) M_mindustry_ai_RtsAI_handleSquad_arc_struct_Seq_boolean_R_boolean,
	(void *) M_mindustry_ai_RtsAI_findTarget_float_float_int_float_float_boolean_boolean_boolean_R_mindustry_gen_Building,
	(void *) M_mindustry_ai_RtsAI_estimateStats_float_float_float_float_float_float_boolean_R_float,
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
	{ "checkBuilding", "()V" },
	{ "assignSquads", "()V" },
	{ "handleSquad", "(Larc/struct/Seq;Z)Z" },
	{ "findTarget", "(FFIFFZZZ)Lmindustry/gen/Building;" },
	{ "estimateStats", "(FFFFFFZ)F" },
};

static FieldMetadata fields[] {
	{ "targets", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_RtsAI_targets, "Larc/struct/Seq;", 24 },
	{ "squad", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_RtsAI_squad, "Larc/struct/Seq;", 24 },
	{ "stack", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_ai_RtsAI_stack, "Larc/struct/Seq;", 24 },
	{ "used", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_ai_RtsAI_used, "Larc/struct/IntSet;", 24 },
	{ "assignedTargets", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_ai_RtsAI_assignedTargets, "Larc/struct/IntSet;", 24 },
	{ "invalidTarget", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_ai_RtsAI_invalidTarget, "Larc/struct/IntSet;", 24 },
	{ "squadRadius", &class_float, (intptr_t) &SF_mindustry_ai_RtsAI_squadRadius, "F", 24 },
	{ "timeUpdate", &class_int, (intptr_t) &SF_mindustry_ai_RtsAI_timeUpdate, "I", 24 },
	{ "timerSpawn", &class_int, (intptr_t) &SF_mindustry_ai_RtsAI_timerSpawn, "I", 24 },
	{ "maxTargetsChecked", &class_int, (intptr_t) &SF_mindustry_ai_RtsAI_maxTargetsChecked, "I", 24 },
	{ "flags", getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), (intptr_t) &SF_mindustry_ai_RtsAI_flags, "[Lmindustry/world/meta/BlockFlag;", 24 },
	{ "weights", &class_arc_struct_ObjectFloatMap, (intptr_t) &SF_mindustry_ai_RtsAI_weights, "Larc/struct/ObjectFloatMap;", 24 },
	{ "debug", &class_boolean, (intptr_t) &SF_mindustry_ai_RtsAI_debug, "Z", 24 },
	{ "timer", &class_arc_util_Interval, offsetof(mindustry_ai_RtsAI, F_timer), "Larc/util/Interval;", 16 },
	{ "data", &class_mindustry_game_Teams$TeamData, offsetof(mindustry_ai_RtsAI, F_data), "Lmindustry/game/Teams$TeamData;", 16 },
	{ "damagedSet", &class_arc_struct_ObjectSet, offsetof(mindustry_ai_RtsAI, F_damagedSet), "Larc/struct/ObjectSet;", 16 },
	{ "damaged", &class_arc_struct_Seq, offsetof(mindustry_ai_RtsAI, F_damaged), "Larc/struct/Seq;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_RtsAI_mindustry_game_Teams$TeamData, 0, "(Lmindustry/game/Teams$TeamData;)V", 1 },
	{ "update", (intptr_t) M_mindustry_ai_RtsAI_update, VTABLE_mindustry_ai_RtsAI_update, "()V", 1 },
	{ "checkBuilding", (intptr_t) M_mindustry_ai_RtsAI_checkBuilding, VTABLE_mindustry_ai_RtsAI_checkBuilding, "()V", 0 },
	{ "assignSquads", (intptr_t) M_mindustry_ai_RtsAI_assignSquads, VTABLE_mindustry_ai_RtsAI_assignSquads, "()V", 0 },
	{ "handleSquad", (intptr_t) M_mindustry_ai_RtsAI_handleSquad_arc_struct_Seq_boolean_R_boolean, VTABLE_mindustry_ai_RtsAI_handleSquad_arc_struct_Seq_boolean_R_boolean, "(Larc/struct/Seq;Z)Z", 0 },
	{ "findTarget", (intptr_t) M_mindustry_ai_RtsAI_findTarget_float_float_int_float_float_boolean_boolean_boolean_R_mindustry_gen_Building, VTABLE_mindustry_ai_RtsAI_findTarget_float_float_int_float_float_boolean_boolean_boolean_R_mindustry_gen_Building, "(FFIFFZZZ)Lmindustry/gen/Building;", 0 },
	{ "estimateStats", (intptr_t) M_mindustry_ai_RtsAI_estimateStats_float_float_float_float_float_float_boolean_R_float, VTABLE_mindustry_ai_RtsAI_estimateStats_float_float_float_float_float_float_boolean_R_float, "(FFFFFFZ)F", 0 },
	{ "lambda$estimateStats$0", (intptr_t) SM_mindustry_ai_RtsAI_lambda$estimateStats$0_float_float_float_float_float_Array1_float_Array1_float_mindustry_gen_Unit, 0, "(FFFFF[F[FLmindustry/gen/Unit;)V", 4106 },
	{ "lambda$findTarget$2", (intptr_t) SM_mindustry_ai_RtsAI_lambda$findTarget$2_float_float_mindustry_gen_Building_R_float, 0, "(FFLmindustry/gen/Building;)F", 4106 },
	{ "lambda$findTarget$1", (intptr_t) SM_mindustry_ai_RtsAI_lambda$findTarget$1_float_float_mindustry_gen_Building_R_float, 0, "(FFLmindustry/gen/Building;)F", 4106 },
	{ "lambda$findTarget$0", (intptr_t) SM_mindustry_ai_RtsAI_lambda$findTarget$0_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$handleSquad$1", (intptr_t) SM_mindustry_ai_RtsAI_lambda$handleSquad$1_boolean_boolean_mindustry_gen_Unit_R_boolean, 0, "(ZZLmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$handleSquad$0", (intptr_t) SM_mindustry_ai_RtsAI_lambda$handleSquad$0_float_float_mindustry_gen_Building_R_float, 0, "(FFLmindustry/gen/Building;)F", 4106 },
	{ "lambda$assignSquads$0", (intptr_t) SM_mindustry_ai_RtsAI_lambda$assignSquads$0_mindustry_gen_Unit_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_ai_RtsAI_lambda$new$0, 0, "()V", 4106 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_ai_RtsAI_lambda$new$1, 0, "()V", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_ai_RtsAI_lambda$static$0_mindustry_game_EventType$BuildDamageEvent, 0, "(Lmindustry/game/EventType$BuildDamageEvent;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_RtsAI, 0, "()V", 8 },
};

Class class_mindustry_ai_RtsAI{
		.nativeName = (intptr_t) "mindustry/ai/RtsAI",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_RtsAI),
		.classVtable = (intptr_t) vtable_mindustry_ai_RtsAI,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_RtsAI,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_RtsAI,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_RtsAI = registerClass(&class_mindustry_ai_RtsAI);

}
