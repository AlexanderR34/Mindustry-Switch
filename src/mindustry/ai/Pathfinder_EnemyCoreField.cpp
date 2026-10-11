#include "mindustry/ai/Pathfinder_EnemyCoreField.h"
#include "java/util/Iterator.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/meta/BlockStatus.h"
#include "mindustry/ai/Pathfinder.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/gen/Building.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/ai/Pathfinder_EnemyCoreField.h"
#include "java/lang/Object.h"
#include "mindustry/ai/Pathfinder_Flowfield.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/meta/BlockFlag.h"

extern "C" {

jobject SF_mindustry_ai_Pathfinder$EnemyCoreField_randomTargets;

void mark_mindustry_ai_Pathfinder$EnemyCoreField(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_Pathfinder$EnemyCoreField_randomTargets)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_Pathfinder$EnemyCoreField_randomTargets)->clazz)->markFunction)((jobject) SF_mindustry_ai_Pathfinder$EnemyCoreField_randomTargets, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ai_Pathfinder$Flowfield(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_Pathfinder$EnemyCoreField *) object;
	if (self->F_rand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rand)->clazz)->markFunction)((jobject) self->F_rand, mark, depth + 1);
}

void init_mindustry_ai_Pathfinder$EnemyCoreField(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$EnemyCoreField:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder$EnemyCoreField(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(550);
	init_mindustry_ai_Pathfinder$Flowfield(ctx, (frame[0].o));
	LINE_NUMBER(552);
	sp[0].o = frame[0].o;
	clinit_arc_math_Rand(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[1].o);
	((mindustry_ai_Pathfinder$EnemyCoreField *) NULL_CHECK(sp[0].o))->F_rand = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_Pathfinder$EnemyCoreField_getPositions_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$EnemyCoreField:getPositions", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(556);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_randomWaveAI) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$EnemyCoreField *) NULL_CHECK((frame[0].o)))->F_rand;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp += 1;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jlong temp0 = jlong(((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave));
	sp[0].l = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = jint((((jdouble)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_tick) / (jdouble(5400.0))));
	jint temp1 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[0].o));
	jlong temp2 = jlong((temp0 + temp1));
	sp[0].l = temp2;
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, sp[1].l);
	LINE_NUMBER(560);
	frame[2].i = (jint(1));
	LINE_NUMBER(562);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	if ((frame[3].i) >= (jint(5))) goto label_1;
	}
	INST_ILOAD(2);
	if ((--sp)->i <= 0) goto label_1;
	{
	LINE_NUMBER(563);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_ai_Pathfinder$EnemyCoreField(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_Pathfinder$EnemyCoreField_randomTargets;
	sp[3].o = (jobject)((mindustry_ai_Pathfinder$EnemyCoreField *) NULL_CHECK((frame[0].o)))->F_rand;
	clinit_mindustry_ai_Pathfinder$EnemyCoreField(ctx);
	sp[4].o = (jobject)SF_mindustry_ai_Pathfinder$EnemyCoreField_randomTargets;
	jint temp0 = (jint)((func_arc_math_Rand_random_int_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_Rand_random_int_R_int])(ctx, sp[3].o, ((((jarray) nullCheck(ctx, sp[4].o))->length) - (jint(1))));
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, temp0)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(564);
	jint temp1 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[4].o));
	if (temp1 != 0) goto label_10;
	}
	{
	LINE_NUMBER(565);
	frame[5].i = (jint(0));
	LINE_NUMBER(566);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[6].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(567);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_items;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_any_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_17;
	}
label_16:;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_status_R_mindustry_world_meta_BlockStatus])(ctx, (frame[7].o));
	clinit_mindustry_world_meta_BlockStatus(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockStatus_noInput;
	if (sp[0].o == sp[1].o) goto label_18;
	}
label_17:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_targetable) == 0) goto label_18;
	}
	{
	LINE_NUMBER(568);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, sp[1].o);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(569);
	frame[5].i = (jint(1));
	}
label_18:;
	LINE_NUMBER(571);
	goto label_13;
label_14:;
	{
	LINE_NUMBER(572);
	if ((frame[5].i) == 0) goto label_10;
	}
	LINE_NUMBER(573);
	INST_IINC(2, -1);
label_10:;
	{
	LINE_NUMBER(562);
	INST_IINC(3, 1);
	goto label_7;
	}
label_1:;
	{
	LINE_NUMBER(579);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_core;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getEnemy_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_22:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(580);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, sp[1].o);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(581);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(584);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_Pathfinder$Flowfield *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o != sp[1].o) goto label_26;
	}
	{
	LINE_NUMBER(585);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	sp[0].o = (jobject)((func_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_28:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(586);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_world_Tile_array_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_array_R_int])(ctx, (frame[3].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(587);
	goto label_28;
	}
label_26:;
	LINE_NUMBER(589);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_ai_Pathfinder$EnemyCoreField(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ai_Pathfinder$Flowfield(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$EnemyCoreField:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder$EnemyCoreField(ctx);
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (8));
	jint temp0 = jint(0);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_storage;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_generator;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_launchPad;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_factory;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_repair;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_battery;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_reactor;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_drill;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	clinit_mindustry_ai_Pathfinder$EnemyCoreField(ctx);
	SF_mindustry_ai_Pathfinder$EnemyCoreField_randomTargets = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_Pathfinder$EnemyCoreField[] {
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
	(void *) M_mindustry_ai_Pathfinder$Flowfield_setup,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getCost_Array1_int_int_R_int,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_hasTargets_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_boolean_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_getNextTile_mindustry_world_Tile_int_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_hasCompleteWeights_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_updateTargetPositions,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_needsRefresh_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$Flowfield_passable_int_R_boolean,
	(void *) M_mindustry_ai_Pathfinder$EnemyCoreField_getPositions_arc_struct_IntSeq,
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
	{ "setup", "()V" },
	{ "getCost", "([II)I" },
	{ "hasTargets", "()Z" },
	{ "getNextTile", "(Lmindustry/world/Tile;Z)Lmindustry/world/Tile;" },
	{ "getNextTile", "(Lmindustry/world/Tile;)Lmindustry/world/Tile;" },
	{ "getNextTile", "(Lmindustry/world/Tile;I)Lmindustry/world/Tile;" },
	{ "hasCompleteWeights", "()Z" },
	{ "updateTargetPositions", "()V" },
	{ "needsRefresh", "()Z" },
	{ "passable", "(I)Z" },
	{ "getPositions", "(Larc/struct/IntSeq;)V" },
};

static FieldMetadata fields[] {
	{ "randomTargets", getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), (intptr_t) &SF_mindustry_ai_Pathfinder$EnemyCoreField_randomTargets, "[Lmindustry/world/meta/BlockFlag;", 26 },
	{ "rand", &class_arc_math_Rand, offsetof(mindustry_ai_Pathfinder$EnemyCoreField, F_rand), "Larc/math/Rand;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_Pathfinder$EnemyCoreField, 0, "()V", 1 },
	{ "getPositions", (intptr_t) M_mindustry_ai_Pathfinder$EnemyCoreField_getPositions_arc_struct_IntSeq, VTABLE_mindustry_ai_Pathfinder$EnemyCoreField_getPositions_arc_struct_IntSeq, "(Larc/struct/IntSeq;)V", 4 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ai_Pathfinder$EnemyCoreField, 0, "()V", 8 },
};

Class class_mindustry_ai_Pathfinder$EnemyCoreField{
		.nativeName = (intptr_t) "mindustry/ai/Pathfinder$EnemyCoreField",
		.parentClass = (intptr_t) &class_mindustry_ai_Pathfinder$Flowfield,
		.size = sizeof(mindustry_ai_Pathfinder$EnemyCoreField),
		.classVtable = (intptr_t) vtable_mindustry_ai_Pathfinder$EnemyCoreField,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_Pathfinder$EnemyCoreField,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_Pathfinder$EnemyCoreField,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ai_Pathfinder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_Pathfinder$EnemyCoreField = registerClass(&class_mindustry_ai_Pathfinder$EnemyCoreField);

}

