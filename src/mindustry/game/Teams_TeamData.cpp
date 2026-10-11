#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/game/Teams_TeamData_invoke_arc_func_Intc2_1.h"
#include "arc/func/Prov.h"
#include "arc/math/geom/Rect.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/core/ContentLoader.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Healthc.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/util/Time.h"
#include "arc/struct/Queue.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/game/Teams_TeamData_invoke_java_lang_Runnable_3.h"
#include "mindustry/game/Teams_TeamData_invoke_java_lang_Runnable_2.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/game/Teams_TeamData_invoke_arc_func_Prov_1.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/game/Teams_TeamData_invoke_arc_func_Cons_5.h"
#include "mindustry/game/Teams_TeamData_invoke_arc_func_Cons_4.h"
#include "mindustry/game/Teams_TeamData_invoke_arc_func_Cons_3.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/struct/IntIntMap.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/RtsAI.h"
#include "mindustry/game/Teams_TeamData.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "mindustry/type/Sector.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/game/Teams.h"
#include "mindustry/type/Planet.h"
#include "mindustry/game/Teams_TeamData_invoke_arc_func_Boolf_2.h"
#include "mindustry/game/Teams_TeamData_invoke_arc_func_Boolf_3.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "java/util/Objects.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Call.h"
#include "mindustry/ai/BaseBuilderAI.h"

extern "C" {

jobject SF_mindustry_game_Teams$TeamData_derelictBuffer;
jfloat SF_mindustry_game_Teams$TeamData_clusterChunkSize;

void mark_mindustry_game_Teams$TeamData(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_game_Teams$TeamData_derelictBuffer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Teams$TeamData_derelictBuffer)->clazz)->markFunction)((jobject) SF_mindustry_game_Teams$TeamData_derelictBuffer, mark, depth + 1);
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
	auto self = (mindustry_game_Teams$TeamData *) object;
	if (self->F_team)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_team)->clazz)->markFunction)((jobject) self->F_team, mark, depth + 1);
	if (self->F_buildAi)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildAi)->clazz)->markFunction)((jobject) self->F_buildAi, mark, depth + 1);
	if (self->F_rtsAi)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rtsAi)->clazz)->markFunction)((jobject) self->F_rtsAi, mark, depth + 1);
	if (self->F_clusteredCounts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clusteredCounts)->clazz)->markFunction)((jobject) self->F_clusteredCounts, mark, depth + 1);
	if (self->F_coreEnemies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_coreEnemies)->clazz)->markFunction)((jobject) self->F_coreEnemies, mark, depth + 1);
	if (self->F_plans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plans)->clazz)->markFunction)((jobject) self->F_plans, mark, depth + 1);
	if (self->F_cores)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cores)->clazz)->markFunction)((jobject) self->F_cores, mark, depth + 1);
	if (self->F_lastCore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastCore)->clazz)->markFunction)((jobject) self->F_lastCore, mark, depth + 1);
	if (self->F_buildingTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildingTree)->clazz)->markFunction)((jobject) self->F_buildingTree, mark, depth + 1);
	if (self->F_turretTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_turretTree)->clazz)->markFunction)((jobject) self->F_turretTree, mark, depth + 1);
	if (self->F_unitTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitTree)->clazz)->markFunction)((jobject) self->F_unitTree, mark, depth + 1);
	if (self->F_typeCounts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_typeCounts)->clazz)->markFunction)((jobject) self->F_typeCounts, mark, depth + 1);
	if (self->F_buildingTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildingTypes)->clazz)->markFunction)((jobject) self->F_buildingTypes, mark, depth + 1);
	if (self->F_units)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_units)->clazz)->markFunction)((jobject) self->F_units, mark, depth + 1);
	if (self->F_players)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_players)->clazz)->markFunction)((jobject) self->F_players, mark, depth + 1);
	if (self->F_buildings)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildings)->clazz)->markFunction)((jobject) self->F_buildings, mark, depth + 1);
	if (self->F_unitsByType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitsByType)->clazz)->markFunction)((jobject) self->F_unitsByType, mark, depth + 1);
}

void init_mindustry_game_Teams$TeamData_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams$TeamData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap);
	init_arc_struct_IntIntMap(ctx, sp[1].o);
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_clusteredCounts = (jref) sp[1].o;
	LINE_NUMBER(283);
	((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_lastClusterUpdateTimer = (jfloat(-100.0f));
	LINE_NUMBER(286);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Team, (jint(0)));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_coreEnemies = (jref) sp[1].o;
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Queue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue_int_java_lang_Class(ctx, sp[1].o, (16), (((jobject) &class_mindustry_game_Teams$BlockPlan)));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans = (jref) sp[1].o;
	LINE_NUMBER(291);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_cores = (jref) sp[1].o;
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTypes = (jref) sp[1].o;
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_units = (jref) sp[1].o;
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_players = (jref) sp[1].o;
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildings = (jref) sp[1].o;
	LINE_NUMBER(318);
	((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:getBuildings", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_buildingTypes;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Teams$TeamData_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_game_Teams$TeamData_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_game_Teams$TeamData_invoke_arc_func_Prov_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:getCount", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_buildingTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(327);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	INST_ALOAD(2);
	sp[-1].i = ((arc_struct_Seq *) NULL_CHECK(sp[-1].o))->F_size;
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Teams$TeamData_destroyToDerelict(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:destroyToDerelict", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(334);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_buildingTree;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_buildingTree;
	((func_arc_math_geom_QuadTree_getObjects_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_getObjects_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_plans;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(344);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) == 0) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(346);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(347);
	((func_mindustry_gen_Building_kill) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Building_kill])(ctx, (frame[3].o));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(349);
	((func_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building])(ctx, (frame[0].o), (frame[3].o));
	}
label_11:;
	LINE_NUMBER(351);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(353);
	((func_mindustry_game_Teams$TeamData_finishScheduleDerelict) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_finishScheduleDerelict])(ctx, (frame[0].o));
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_units;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Teams$TeamData_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_game_Teams$TeamData_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_game_Teams$TeamData_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Teams$TeamData_timeDestroy_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:timeDestroy", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(366);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_buildingTree;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_buildingTree;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, ((frame[1].f) - (frame[3].f)), ((frame[2].f) - (frame[3].f)), ((frame[3].f) * (jfloat(2))), ((frame[3].f) * (jfloat(2))), (frame[4].o));
	}
label_2:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(372);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[6].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_privileged) != 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Building_within_float_float_float_R_boolean])(ctx, (frame[6].o), (frame[1].f), (frame[2].f), (frame[3].f));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_cores;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Teams$TeamData_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_game_Teams$TeamData_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_game_Teams$TeamData_invoke_arc_func_Boolf_2);
		proxy->F_field1 = (frame[3].f);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(373);
	((func_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building])(ctx, (frame[0].o), (frame[6].o));
	}
label_7:;
	LINE_NUMBER(375);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(376);
	((func_mindustry_game_Teams$TeamData_finishScheduleDerelict) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_finishScheduleDerelict])(ctx, (frame[0].o));
	LINE_NUMBER(379);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(380);
	if ((frame[5].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(381);
	frame[6].i = (jint(0));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectorCaptureReplacements;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(383);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[8].o)))->F_key;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_Block, sp[1].o)));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(384);
	frame[6].i = (jint(1));
	}
label_17:;
	LINE_NUMBER(386);
	goto label_14;
label_15:;
	{
	LINE_NUMBER(387);
	if ((frame[6].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(388);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[1].f));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[2].f));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp4 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, ((frame[3].f) / (jfloat(8.0f))));
	{ /* InvokeDynamic */
		clinit_mindustry_game_Teams$TeamData_invoke_arc_func_Intc2_1(ctx);
		auto proxy = (mindustry_game_Teams$TeamData_invoke_arc_func_Intc2_1 *) gcAlloc(ctx, &class_mindustry_game_Teams$TeamData_invoke_arc_func_Intc2_1);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_geom_Geometry_circle_int_int_int_int_int_arc_func_Intc2(ctx, temp0, temp1, temp2, temp3, temp4, sp[0].o);
	}
label_11:;
	LINE_NUMBER(397);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:scheduleDerelict", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(401);
	clinit_mindustry_game_Teams$TeamData(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Teams$TeamData_derelictBuffer;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[1].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(403);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[1].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_payloads_UnitPayload)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(404);
	SM_mindustry_gen_Call_destroyPayload_mindustry_gen_Building(ctx, (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(407);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.2)));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(408);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0)), (jfloat(360.0f)));
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Teams$TeamData_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_game_Teams$TeamData_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_game_Teams$TeamData_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(411);
	((func_mindustry_gen_Building_addPlan_boolean_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_addPlan_boolean_boolean])(ctx, (frame[1].o), (jint(0)), (jint(1)));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Teams$TeamData_finishScheduleDerelict(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:finishScheduleDerelict", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(415);
	clinit_mindustry_game_Teams$TeamData(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Teams$TeamData_derelictBuffer;
	jint temp0 = 1000;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Teams$TeamData_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_game_Teams$TeamData_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_game_Teams$TeamData_invoke_arc_func_Cons_4);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_chunked_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_chunked_int_arc_func_Cons])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(416);
	clinit_mindustry_game_Teams$TeamData(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Teams$TeamData_derelictBuffer;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:getUnits", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:unitCache", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_unitsByType;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_unitsByType;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_unitsByType;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id))) != nullptr) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_unitsByType;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)));
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:updateCount", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(432);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((frame[2].i) + ((jint)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_unitCount)), (jint(0)));
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_unitCount = temp0;
	LINE_NUMBER(434);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_typeCounts;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_typeCounts;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(435);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_typeCounts;
	sp += 1;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_typeCounts;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_util_Arrays_copyOf_Array1_int_int_R_Array1_int(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	sp += 1;
	}
label_6:;
	sp -= 2;
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_typeCounts = (jref) sp[1].o;
label_4:;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_typeCounts;
	jint temp0 = (jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_typeCounts;
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (temp1 + ((jint)ARRAY_ACCESS(jint, sp[1].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)))), (jint(0)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp2;
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:tree", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_unitTree;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_QuadTree(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	clinit_arc_math_geom_Rect(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[3].o);
	sp[2].o = (jobject)((func_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_getQuadBounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[2].o, sp[3].o);
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_unitTree = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_unitTree;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:countType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_typeCounts;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_typeCounts;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_typeCounts;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id));
	sp[0].i = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_game_Teams$TeamData_active_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:active", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) != 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_cores;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_buildings;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_neoplastic;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_units;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_3;
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

jbool M_mindustry_game_Teams$TeamData_hasCore_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:hasCore", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(454);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_cores;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
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

jbool M_mindustry_game_Teams$TeamData_isAlive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:isAlive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(459);
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_hasCore_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Teams$TeamData_noCores_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:noCores", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_cores;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:core", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_cores;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_game_Teams$TeamData_hasAI_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:hasAI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsAi) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_buildAi) == 0) goto label_2;
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

jint M_mindustry_game_Teams$TeamData_getClustered_float_float_R_int(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:getClustered", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(479);
	if ((floatCompare((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (((jfloat)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_lastClusterUpdateTimer) + (jfloat(10.0f))), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(480);
	((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_lastClusterUpdateTimer = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time);
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_clusteredCounts;
	((func_arc_struct_IntIntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(482);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_units;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Teams$TeamData_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_game_Teams$TeamData_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_game_Teams$TeamData_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(489);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_clusteredCounts;
	jint temp0 = (jint)SM_mindustry_game_Teams$TeamData_clusterKey_float_float_R_int(ctx, (frame[1].f), (frame[2].f));
	jint temp1 = (jint)((func_arc_struct_IntIntMap_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_get_int_R_int])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_game_Teams$TeamData_clusterKey_float_float_R_int(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:clusterKey", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams$TeamData(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(493);
	jint temp0 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, ((frame[0].f) / (jfloat(70.0f))));
	jint temp1 = (temp0 & (4095)) << (12);
	jint temp2 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, ((frame[1].f) / (jfloat(70.0f))));
	popStackFrame(ctx);
	return (temp1 | (temp2 & (4095)));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams$TeamData_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(498);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_cores;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"TeamData{cores=\u0001, team=\u0001}"_j.string, 2, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Teams$TeamData_lambda$getClustered$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:lambda$getClustered$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(484);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(485);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_clusteredCounts;
	jint temp0 = (jint)SM_mindustry_game_Teams$TeamData_clusterKey_float_float_R_int(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y));
	jint temp1 = (jint)((func_arc_struct_IntIntMap_increment_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_increment_int_R_int])(ctx, sp[0].o, temp0);
	}
label_1:;
	LINE_NUMBER(487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_game_Teams$TeamData_lambda$finishScheduleDerelict$0_Array1_int(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:lambda$finishScheduleDerelict$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams$TeamData(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(415);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	SM_mindustry_gen_Call_setTeams_Array1_int_mindustry_game_Team(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Teams$TeamData_lambda$timeDestroy$1_mindustry_type_Sector_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:lambda$timeDestroy$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(389);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_rawTile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(390);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectorCaptureReplacements;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(391);
	if ((frame[6].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_cores;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Teams$TeamData_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_game_Teams$TeamData_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_game_Teams$TeamData_invoke_arc_func_Boolf_3);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(392);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[6].o));
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(394);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Teams$TeamData_lambda$timeDestroy$2_mindustry_world_Tile_float_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:lambda$timeDestroy$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams$TeamData(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(391);
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[2].o), (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Teams$TeamData_lambda$timeDestroy$0_mindustry_gen_Building_float_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:lambda$timeDestroy$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams$TeamData(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(372);
	jint temp0 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[2].o), (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:lambda$destroyToDerelict$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(356);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0)), (jfloat(300.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_game_Teams$TeamData_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_game_Teams$TeamData_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_game_Teams$TeamData_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$1_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:lambda$destroyToDerelict$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[0].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(359);
	((func_mindustry_gen_Unit_kill) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_kill])(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(361);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Teams$TeamData_lambda$getBuildings$0_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:lambda$getBuildings$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams$TeamData(ctx);
	{
	LINE_NUMBER(322);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[0].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_game_Teams$TeamData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_game_Teams$TeamData_clusterChunkSize = jfloat(70.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$TeamData:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams$TeamData(ctx);
	{
	LINE_NUMBER(271);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	clinit_mindustry_game_Teams$TeamData(ctx);
	SF_mindustry_game_Teams$TeamData_derelictBuffer = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_Teams$TeamData;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field buildAi
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field rtsAi
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastCore
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field buildingTree
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field turretTree
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field unitTree
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field typeCounts
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field unitsByType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[22]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getUnits
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method unitCache
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method core
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_game_Teams$TeamData[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_Teams$TeamData_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq,
	(void *) M_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int,
	(void *) M_mindustry_game_Teams$TeamData_destroyToDerelict,
	(void *) M_mindustry_game_Teams$TeamData_timeDestroy_float_float_float,
	(void *) M_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building,
	(void *) M_mindustry_game_Teams$TeamData_finishScheduleDerelict,
	(void *) M_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq,
	(void *) M_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq,
	(void *) M_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int,
	(void *) M_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree,
	(void *) M_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int,
	(void *) M_mindustry_game_Teams$TeamData_active_R_boolean,
	(void *) M_mindustry_game_Teams$TeamData_hasCore_R_boolean,
	(void *) M_mindustry_game_Teams$TeamData_isAlive_R_boolean,
	(void *) M_mindustry_game_Teams$TeamData_noCores_R_boolean,
	(void *) M_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild,
	(void *) M_mindustry_game_Teams$TeamData_hasAI_R_boolean,
	(void *) M_mindustry_game_Teams$TeamData_getClustered_float_float_R_int,
	(void *) M_mindustry_game_Teams$TeamData_lambda$getClustered$0_mindustry_gen_Unit,
	(void *) M_mindustry_game_Teams$TeamData_lambda$timeDestroy$1_mindustry_type_Sector_float_int_int,
	(void *) M_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$0_mindustry_gen_Unit,
	(void *) M_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$1_mindustry_gen_Unit,
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
	{ "getBuildings", "(Lmindustry/world/Block;)Larc/struct/Seq;" },
	{ "getCount", "(Lmindustry/world/Block;)I" },
	{ "destroyToDerelict", "()V" },
	{ "timeDestroy", "(FFF)V" },
	{ "scheduleDerelict", "(Lmindustry/gen/Building;)V" },
	{ "finishScheduleDerelict", "()V" },
	{ "getUnits", "(Lmindustry/type/UnitType;)Larc/struct/Seq;" },
	{ "unitCache", "(Lmindustry/type/UnitType;)Larc/struct/Seq;" },
	{ "updateCount", "(Lmindustry/type/UnitType;I)V" },
	{ "tree", "()Larc/math/geom/QuadTree;" },
	{ "countType", "(Lmindustry/type/UnitType;)I" },
	{ "active", "()Z" },
	{ "hasCore", "()Z" },
	{ "isAlive", "()Z" },
	{ "noCores", "()Z" },
	{ "core", "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;" },
	{ "hasAI", "()Z" },
	{ "getClustered", "(FF)I" },
	{ "lambda$getClustered$0", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$timeDestroy$1", "(Lmindustry/type/Sector;FII)V" },
	{ "lambda$destroyToDerelict$0", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$destroyToDerelict$1", "(Lmindustry/gen/Unit;)V" },
};

static FieldMetadata fields[] {
	{ "derelictBuffer", &class_arc_struct_IntSeq, (intptr_t) &SF_mindustry_game_Teams$TeamData_derelictBuffer, "Larc/struct/IntSeq;", 26 },
	{ "clusterChunkSize", &class_float, (intptr_t) &SF_mindustry_game_Teams$TeamData_clusterChunkSize, "F", 26 },
	{ "team", &class_mindustry_game_Team, offsetof(mindustry_game_Teams$TeamData, F_team), "Lmindustry/game/Team;", 17 },
	{ "buildAi", &class_mindustry_ai_BaseBuilderAI, offsetof(mindustry_game_Teams$TeamData, F_buildAi), "Lmindustry/ai/BaseBuilderAI;", 1 },
	{ "rtsAi", &class_mindustry_ai_RtsAI, offsetof(mindustry_game_Teams$TeamData, F_rtsAi), "Lmindustry/ai/RtsAI;", 1 },
	{ "presentFlag", &class_boolean, offsetof(mindustry_game_Teams$TeamData, F_presentFlag), "Z", 2 },
	{ "clusteredCounts", &class_arc_struct_IntIntMap, offsetof(mindustry_game_Teams$TeamData, F_clusteredCounts), "Larc/struct/IntIntMap;", 2 },
	{ "lastClusterUpdateTimer", &class_float, offsetof(mindustry_game_Teams$TeamData, F_lastClusterUpdateTimer), "F", 2 },
	{ "coreEnemies", getArrayClass(&class_mindustry_game_Team, 1), offsetof(mindustry_game_Teams$TeamData, F_coreEnemies), "[Lmindustry/game/Team;", 1 },
	{ "plans", &class_arc_struct_Queue, offsetof(mindustry_game_Teams$TeamData, F_plans), "Larc/struct/Queue;", 1 },
	{ "cores", &class_arc_struct_Seq, offsetof(mindustry_game_Teams$TeamData, F_cores), "Larc/struct/Seq;", 17 },
	{ "lastCore", &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, offsetof(mindustry_game_Teams$TeamData, F_lastCore), "Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "buildingTree", &class_arc_math_geom_QuadTree, offsetof(mindustry_game_Teams$TeamData, F_buildingTree), "Larc/math/geom/QuadTree;", 1 },
	{ "turretTree", &class_arc_math_geom_QuadTree, offsetof(mindustry_game_Teams$TeamData, F_turretTree), "Larc/math/geom/QuadTree;", 1 },
	{ "unitTree", &class_arc_math_geom_QuadTree, offsetof(mindustry_game_Teams$TeamData, F_unitTree), "Larc/math/geom/QuadTree;", 1 },
	{ "unitCap", &class_int, offsetof(mindustry_game_Teams$TeamData, F_unitCap), "I", 1 },
	{ "unitCount", &class_int, offsetof(mindustry_game_Teams$TeamData, F_unitCount), "I", 1 },
	{ "typeCounts", getArrayClass(&class_int, 1), offsetof(mindustry_game_Teams$TeamData, F_typeCounts), "[I", 1 },
	{ "buildingTypes", &class_arc_struct_ObjectMap, offsetof(mindustry_game_Teams$TeamData, F_buildingTypes), "Larc/struct/ObjectMap;", 1 },
	{ "units", &class_arc_struct_Seq, offsetof(mindustry_game_Teams$TeamData, F_units), "Larc/struct/Seq;", 1 },
	{ "players", &class_arc_struct_Seq, offsetof(mindustry_game_Teams$TeamData, F_players), "Larc/struct/Seq;", 1 },
	{ "buildings", &class_arc_struct_Seq, offsetof(mindustry_game_Teams$TeamData, F_buildings), "Larc/struct/Seq;", 1 },
	{ "unitsByType", getArrayClass(&class_arc_struct_Seq, 1), offsetof(mindustry_game_Teams$TeamData, F_unitsByType), "[Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Teams$TeamData_mindustry_game_Team, 0, "(Lmindustry/game/Team;)V", 1 },
	{ "getBuildings", (intptr_t) M_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq, VTABLE_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq, "(Lmindustry/world/Block;)Larc/struct/Seq;", 1 },
	{ "getCount", (intptr_t) M_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int, VTABLE_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int, "(Lmindustry/world/Block;)I", 1 },
	{ "destroyToDerelict", (intptr_t) M_mindustry_game_Teams$TeamData_destroyToDerelict, VTABLE_mindustry_game_Teams$TeamData_destroyToDerelict, "()V", 1 },
	{ "timeDestroy", (intptr_t) M_mindustry_game_Teams$TeamData_timeDestroy_float_float_float, VTABLE_mindustry_game_Teams$TeamData_timeDestroy_float_float_float, "(FFF)V", 1 },
	{ "scheduleDerelict", (intptr_t) M_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building, VTABLE_mindustry_game_Teams$TeamData_scheduleDerelict_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 2 },
	{ "finishScheduleDerelict", (intptr_t) M_mindustry_game_Teams$TeamData_finishScheduleDerelict, VTABLE_mindustry_game_Teams$TeamData_finishScheduleDerelict, "()V", 2 },
	{ "getUnits", (intptr_t) M_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq, VTABLE_mindustry_game_Teams$TeamData_getUnits_mindustry_type_UnitType_R_arc_struct_Seq, "(Lmindustry/type/UnitType;)Larc/struct/Seq;", 1 },
	{ "unitCache", (intptr_t) M_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq, VTABLE_mindustry_game_Teams$TeamData_unitCache_mindustry_type_UnitType_R_arc_struct_Seq, "(Lmindustry/type/UnitType;)Larc/struct/Seq;", 1 },
	{ "updateCount", (intptr_t) M_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int, VTABLE_mindustry_game_Teams$TeamData_updateCount_mindustry_type_UnitType_int, "(Lmindustry/type/UnitType;I)V", 1 },
	{ "tree", (intptr_t) M_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree, VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree, "()Larc/math/geom/QuadTree;", 1 },
	{ "countType", (intptr_t) M_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int, VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int, "(Lmindustry/type/UnitType;)I", 1 },
	{ "active", (intptr_t) M_mindustry_game_Teams$TeamData_active_R_boolean, VTABLE_mindustry_game_Teams$TeamData_active_R_boolean, "()Z", 1 },
	{ "hasCore", (intptr_t) M_mindustry_game_Teams$TeamData_hasCore_R_boolean, VTABLE_mindustry_game_Teams$TeamData_hasCore_R_boolean, "()Z", 1 },
	{ "isAlive", (intptr_t) M_mindustry_game_Teams$TeamData_isAlive_R_boolean, VTABLE_mindustry_game_Teams$TeamData_isAlive_R_boolean, "()Z", 1 },
	{ "noCores", (intptr_t) M_mindustry_game_Teams$TeamData_noCores_R_boolean, VTABLE_mindustry_game_Teams$TeamData_noCores_R_boolean, "()Z", 1 },
	{ "core", (intptr_t) M_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, VTABLE_mindustry_game_Teams$TeamData_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild, "()Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;", 1 },
	{ "hasAI", (intptr_t) M_mindustry_game_Teams$TeamData_hasAI_R_boolean, VTABLE_mindustry_game_Teams$TeamData_hasAI_R_boolean, "()Z", 1 },
	{ "getClustered", (intptr_t) M_mindustry_game_Teams$TeamData_getClustered_float_float_R_int, VTABLE_mindustry_game_Teams$TeamData_getClustered_float_float_R_int, "(FF)I", 1 },
	{ "clusterKey", (intptr_t) SM_mindustry_game_Teams$TeamData_clusterKey_float_float_R_int, 0, "(FF)I", 10 },
	{ "toString", (intptr_t) M_mindustry_game_Teams$TeamData_toString_R_java_lang_String, VTABLE_mindustry_game_Teams$TeamData_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$getClustered$0", (intptr_t) M_mindustry_game_Teams$TeamData_lambda$getClustered$0_mindustry_gen_Unit, VTABLE_mindustry_game_Teams$TeamData_lambda$getClustered$0_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4098 },
	{ "lambda$finishScheduleDerelict$0", (intptr_t) SM_mindustry_game_Teams$TeamData_lambda$finishScheduleDerelict$0_Array1_int, 0, "([I)V", 4106 },
	{ "lambda$timeDestroy$1", (intptr_t) M_mindustry_game_Teams$TeamData_lambda$timeDestroy$1_mindustry_type_Sector_float_int_int, VTABLE_mindustry_game_Teams$TeamData_lambda$timeDestroy$1_mindustry_type_Sector_float_int_int, "(Lmindustry/type/Sector;FII)V", 4098 },
	{ "lambda$timeDestroy$2", (intptr_t) SM_mindustry_game_Teams$TeamData_lambda$timeDestroy$2_mindustry_world_Tile_float_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean, 0, "(Lmindustry/world/Tile;FLmindustry/world/blocks/storage/CoreBlock$CoreBuild;)Z", 4106 },
	{ "lambda$timeDestroy$0", (intptr_t) SM_mindustry_game_Teams$TeamData_lambda$timeDestroy$0_mindustry_gen_Building_float_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean, 0, "(Lmindustry/gen/Building;FLmindustry/world/blocks/storage/CoreBlock$CoreBuild;)Z", 4106 },
	{ "lambda$destroyToDerelict$0", (intptr_t) M_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$0_mindustry_gen_Unit, VTABLE_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$0_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4098 },
	{ "lambda$destroyToDerelict$1", (intptr_t) M_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$1_mindustry_gen_Unit, VTABLE_mindustry_game_Teams$TeamData_lambda$destroyToDerelict$1_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4098 },
	{ "lambda$getBuildings$0", (intptr_t) SM_mindustry_game_Teams$TeamData_lambda$getBuildings$0_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_game_Teams$TeamData, 0, "()V", 8 },
};

Class class_mindustry_game_Teams$TeamData{
		.nativeName = (intptr_t) "mindustry/game/Teams$TeamData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Teams$TeamData),
		.classVtable = (intptr_t) vtable_mindustry_game_Teams$TeamData,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Teams$TeamData,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_Teams$TeamData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_Teams,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 23,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 33,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Teams$TeamData = registerClass(&class_mindustry_game_Teams$TeamData);

}

