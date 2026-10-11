#include "mindustry/ai/WaveSpawner.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "mindustry/ai/WaveSpawner_invoke_mindustry_ai_WaveSpawner_SpawnConsumer_3.h"
#include "mindustry/ai/WaveSpawner_invoke_mindustry_ai_WaveSpawner_SpawnConsumer_4.h"
#include "mindustry/ai/WaveSpawner_invoke_mindustry_ai_WaveSpawner_SpawnConsumer_5.h"
#include "mindustry/ai/WaveSpawner_invoke_arc_func_Cons_3.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Runnable.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/ai/WaveSpawner_SpawnConsumer.h"
#include "mindustry/ai/WaveSpawner_invoke_arc_func_Boolf_1.h"
#include "mindustry/content/Fx.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/ai/WaveSpawner_invoke_java_lang_Runnable_2.h"
#include "mindustry/ai/WaveSpawner_invoke_java_lang_Runnable_3.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/ai/WaveSpawner_invoke_arc_func_Intc2_5.h"
#include "mindustry/ai/WaveSpawner_invoke_arc_func_Intc2_4.h"
#include "mindustry/ai/WaveSpawner_invoke_arc_func_Intc2_3.h"
#include "arc/util/Time.h"
#include "mindustry/entities/Damage.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/ai/WaveSpawner_invoke_arc_func_Cons_4.h"
#include "mindustry/ai/WaveSpawner_invoke_arc_func_Cons_5.h"
#include "mindustry/ai/WaveSpawner.h"
#include "arc/func/Floatc2.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/game/EventType_TileOverlayChangeEvent.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "mindustry/game/EventType_UnitSpawnEvent.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/SpawnGroup.h"
#include "mindustry/ai/WaveSpawner_invoke_arc_func_Floatc2_3.h"
#include "mindustry/game/Difficulty.h"
#include "mindustry/ai/WaveSpawner_invoke_arc_func_Floatc2_2.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/game/Teams.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Planet.h"
#include "mindustry/gen/Statusc.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/gen/Call.h"

extern "C" {

jfloat SF_mindustry_ai_WaveSpawner_margin;
jfloat SF_mindustry_ai_WaveSpawner_coreMargin;
jfloat SF_mindustry_ai_WaveSpawner_maxSteps;

void mark_mindustry_ai_WaveSpawner(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_WaveSpawner *) object;
	if (self->F_spawns)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spawns)->clazz)->markFunction)((jobject) self->F_spawns, mark, depth + 1);
	if (self->F_firstSpawn)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_firstSpawn)->clazz)->markFunction)((jobject) self->F_firstSpawn, mark, depth + 1);
}

void clinit_mindustry_ai_WaveSpawner(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ai_WaveSpawner_margin = jfloat(0,000000e+00f);
	SF_mindustry_ai_WaveSpawner_coreMargin = jfloat(16.0f);
	SF_mindustry_ai_WaveSpawner_maxSteps = jfloat(30.0f);
}

void init_mindustry_ai_WaveSpawner(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_WaveSpawner(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_ai_WaveSpawner *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	LINE_NUMBER(27);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawning = (jint(0));
	LINE_NUMBER(28);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_any = (jint(0));
	LINE_NUMBER(29);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_firstSpawn = (jref) (jobject(nullptr));
	LINE_NUMBER(32);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(34);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TileOverlayChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_WaveSpawner_getFirstSpawn_R_mindustry_world_Tile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:getFirstSpawn", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_firstSpawn = (jref) (jobject(nullptr));
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_arc_func_Intc2_3(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_arc_func_Intc2_3 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_arc_func_Intc2_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_firstSpawn;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_WaveSpawner_countSpawns_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:countSpawns", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawns;
	popStackFrame(ctx);
	return ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:getSpawns", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawns;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_WaveSpawner_playerNear_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:playerNear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_hasSpawns_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_hasSpawns_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawns;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
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

void M_mindustry_ai_WaveSpawner_spawnEnemies(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:spawnEnemies", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawning = (jint(1));
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	jint temp0 = jint(-1);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_mindustry_ai_WaveSpawner$SpawnConsumer_3(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_mindustry_ai_WaveSpawner$SpawnConsumer_3 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_mindustry_ai_WaveSpawner$SpawnConsumer_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(71);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_SpawnGroup, sp[0].o));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_type;
	if (sp[0].o != nullptr) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(74);
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_game_SpawnGroup_getSpawned_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SpawnGroup_getSpawned_int_R_int])(ctx, sp[0].o, (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_wave) - (jint(1))));
	frame[3].i = temp0;
	LINE_NUMBER(75);
	if ((frame[3].i) != 0) goto label_8;
	}
	goto label_3;
label_8:;
	{
	LINE_NUMBER(77);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(79);
	jint temp0 = jint(1);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_effect;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_boss;
	jobject temp1 = sp[0].o;
	sp[0].i = temp0;
	sp += 1;
	if (temp1 != sp[0].o) goto label_11;
	}
	{
	LINE_NUMBER(80);
	jfloat temp0 = jfloat((frame[3].i));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	sp[0].o = (jobject)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_difficulty;
	jint temp1 = jint((temp0 * ((jfloat)((mindustry_game_Difficulty *) NULL_CHECK(sp[0].o))->F_enemySpawnMultiplier)));
	sp[0].i = temp1;
	sp += 1;
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(81);
	jfloat temp0 = jfloat((frame[3].i));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	sp[0].o = (jobject)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_difficulty;
	jint temp1 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (temp0 * ((jfloat)((mindustry_game_Difficulty *) NULL_CHECK(sp[0].o))->F_enemySpawnMultiplier)));
	sp[0].i = temp1;
	sp += 1;
	}
label_13:;
	{
	sp -= 2;
	LINE_NUMBER(79);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, sp[0].i, sp[1].i);
	frame[3].i = temp0;
	}
label_9:;
	{
	LINE_NUMBER(84);
	frame[4].i = (frame[3].i);
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) == 0) goto label_15;
	}
	{
	LINE_NUMBER(87);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_spawn;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_arc_func_Floatc2_2(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_arc_func_Floatc2_2 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_arc_func_Floatc2_2);
		proxy->F_field3 = (frame[5].f);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(94);
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(95);
	frame[5].f = (jfloat(16.0f));
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[2].o)))->F_spawn;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_mindustry_ai_WaveSpawner$SpawnConsumer_4(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_mindustry_ai_WaveSpawner$SpawnConsumer_4 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_mindustry_ai_WaveSpawner$SpawnConsumer_4);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (frame[5].f);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer])(ctx, sp[0].o, temp0, sp[1].o);
	}
label_19:;
	LINE_NUMBER(106);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(108);
	jfloat temp0 = jfloat(121.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:spawnUnit", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(112);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_SpawnGroup *) NULL_CHECK((frame[1].o)))->F_team;
	sp += 1;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_game_SpawnGroup *) NULL_CHECK(sp[-1].o))->F_team;
label_2:;
	{
	sp -= 2;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[2].f;
	jfloat temp3 = frame[3].f;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	LINE_NUMBER(113);
	jint temp4 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[2].o);
	jfloat temp5 = ((jfloat(temp4)) / (jfloat(2))) * (jfloat(8.0f));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp6 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[2].o);
	jfloat temp7 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, temp2, temp3, temp5, (((jfloat(temp6)) / (jfloat(2))) * (jfloat(8.0f))));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	jint temp8 = ((jint)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_wave) - (jint(1));
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp7, temp8, sp[2].o);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_doShockwave_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:doShockwave", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(117);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawnShockwave;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_dropZoneRadius));
	LINE_NUMBER(118);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	jfloat temp2 = frame[1].f;
	jfloat temp3 = frame[2].f;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	SM_mindustry_entities_Damage_damage_mindustry_game_Team_float_float_float_float_boolean(ctx, sp[0].o, temp2, temp3, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_dropZoneRadius), (jfloat(1.0E8f)), (jint(1)));
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:eachGroundSpawn", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	jint temp0 = jint(-1);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_mindustry_ai_WaveSpawner$SpawnConsumer_5(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_mindustry_ai_WaveSpawner$SpawnConsumer_5 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_mindustry_ai_WaveSpawner$SpawnConsumer_5);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:eachGroundSpawn", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(126);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_hasSpawns_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_hasSpawns_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawns;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(128);
	if ((frame[1].i) == (jint(-1))) goto label_5;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[4].o));
	if (temp0 == temp1) goto label_5;
	}
	goto label_3;
label_5:;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[4].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[4].o));
	((func_mindustry_ai_WaveSpawner$SpawnConsumer_accept_float_float_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ai_WaveSpawner$SpawnConsumer, INDEX_mindustry_ai_WaveSpawner$SpawnConsumer_accept_float_float_boolean, sp[0].o))(ctx, sp[0].o, temp0, temp1, (jint(1)));
	LINE_NUMBER(131);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(134);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_wavesSpawnAtCores) == 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) == 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	jint temp0 = (jint)((func_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_playerCores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_playerCores_R_arc_struct_Seq])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Teams_playerCores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_playerCores_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(136);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, sp[0].o));
	LINE_NUMBER(137);
	if ((frame[1].i) == (jint(-1))) goto label_12;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_mindustry_world_blocks_storage_CoreBlock$CoreBuild_pos_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_blocks_storage_CoreBlock$CoreBuild_pos_R_int])(ctx, (frame[5].o));
	if (temp0 == temp1) goto label_12;
	}
	goto label_10;
label_12:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[5].o)))->F_commandPos;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[5].o)))->F_commandPos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK((frame[5].o)))->F_commandPos;
	((func_mindustry_ai_WaveSpawner$SpawnConsumer_accept_float_float_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ai_WaveSpawner$SpawnConsumer, INDEX_mindustry_ai_WaveSpawner$SpawnConsumer_accept_float_float_boolean, sp[0].o))(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (jint(0)));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(142);
	frame[6].i = (jint(0));
	LINE_NUMBER(144);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[5].o));
	jfloat temp0 = jfloat(16.0f);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 + (((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))) / (jfloat(2))) * (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt2))));
	LINE_NUMBER(146);
	frame[7].i = (jint(0));
	}
label_18:;
	{
	LINE_NUMBER(149);
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	if ((floatCompare((jfloat(temp0)), (jfloat(30.0f)), 1)) >= 0) goto label_19;
	}
	{
	LINE_NUMBER(150);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x)));
	frame[8].i = temp1;
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)));
	frame[9].i = temp3;
	LINE_NUMBER(151);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_any = (jint(0));
	LINE_NUMBER(152);
	jint temp4 = frame[8].i;
	jint temp5 = frame[9].i;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp6 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp8 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_arc_func_Intc2_4(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_arc_func_Intc2_4 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_arc_func_Intc2_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_geom_Geometry_circle_int_int_int_int_int_arc_func_Intc2(ctx, temp4, temp5, temp6, temp7, temp8, sp[0].o);
	LINE_NUMBER(159);
	if (((jint)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_any) != 0) goto label_25;
	}
	{
	LINE_NUMBER(160);
	frame[6].i = (jint(1));
	LINE_NUMBER(161);
	goto label_19;
	}
label_25:;
	{
	LINE_NUMBER(164);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (temp0 + (jfloat(8.8f))));
	LINE_NUMBER(166);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(168);
	if ((frame[6].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_ai_WaveSpawner$SpawnConsumer_accept_float_float_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ai_WaveSpawner$SpawnConsumer, INDEX_mindustry_ai_WaveSpawner$SpawnConsumer_accept_float_float_boolean, sp[0].o))(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), (jint(0)));
	}
label_15:;
	LINE_NUMBER(172);
	goto label_10;
label_7:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:eachFlyerSpawn", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawns;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(179);
	if ((frame[1].i) == (jint(-1))) goto label_4;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[4].o));
	if (temp0 == temp1) goto label_4;
	}
	goto label_1;
label_4:;
	{
	LINE_NUMBER(181);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_airUseSpawns) != 0) goto label_5;
	}
	{
	LINE_NUMBER(182);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jfloat temp1 = (jfloat(temp0)) / (jfloat(2));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, temp1, ((jfloat(temp2)) / (jfloat(2))), (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_x))), (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[4].o)))->F_y))));
	frame[5].f = temp3;
	LINE_NUMBER(183);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp5 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jint temp6 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp4, temp5);
	frame[6].f = (((jfloat(temp6)) * (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt2)) * (jfloat(8.0f)));
	LINE_NUMBER(184);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jfloat temp8 = (jfloat((temp7 * (8)))) / (jfloat(2));
	jfloat temp9 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[5].f), (frame[6].f));
	jfloat temp10 = temp8 + temp9;
	jfloat temp11 = jfloat(-0,000000e+00f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp12 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	jfloat temp13 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp10, temp11, ((jfloat((temp12 * (8)))) + (jfloat(0))));
	frame[7].f = temp13;
	LINE_NUMBER(185);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp14 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jfloat temp15 = (jfloat((temp14 * (8)))) / (jfloat(2));
	jfloat temp16 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[5].f), (frame[6].f));
	jfloat temp17 = temp15 + temp16;
	jfloat temp18 = jfloat(-0,000000e+00f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp19 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	jfloat temp20 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, temp17, temp18, ((jfloat((temp19 * (8)))) + (jfloat(0))));
	frame[8].f = temp20;
	LINE_NUMBER(186);
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, (frame[2].o)))(ctx, (frame[2].o), (frame[7].f), (frame[8].f));
	LINE_NUMBER(187);
	goto label_12;
	}
label_5:;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[4].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[4].o));
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	}
label_12:;
	LINE_NUMBER(190);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(192);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_wavesSpawnAtCores) == 0) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) == 0) goto label_13;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	jint temp0 = (jint)((func_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_isActive_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(193);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(194);
	if ((frame[1].i) == (jint(-1))) goto label_17;
	}
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[4].o));
	if (temp0 == temp1) goto label_17;
	}
	goto label_15;
label_17:;
	{
	LINE_NUMBER(196);
	((func_arc_func_Floatc2_get_float_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc2, INDEX_arc_func_Floatc2_get_float_float, (frame[2].o)))(ctx, (frame[2].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_y));
	LINE_NUMBER(197);
	goto label_15;
	}
label_13:;
	LINE_NUMBER(199);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ai_WaveSpawner_countGroundSpawns_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:countGroundSpawns", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_tmpCount = (jint(0));
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_arc_func_Intc2_5(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_arc_func_Intc2_5 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_arc_func_Intc2_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(204);
	popStackFrame(ctx);
	return ((jint)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_tmpCount);
	}

	popStackFrame(ctx);
}

jint M_mindustry_ai_WaveSpawner_countFlyerSpawns_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:countFlyerSpawns", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_tmpCount = (jint(0));
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	jint temp0 = jint(-1);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_arc_func_Floatc2_3(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_arc_func_Floatc2_3 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_arc_func_Floatc2_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return ((jint)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_tmpCount);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ai_WaveSpawner_isSpawning_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:isSpawning", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	if (((jint)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawning) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_ai_WaveSpawner_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:reset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawning = (jint(0));
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawns;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(221);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((mindustry_core_World *) NULL_CHECK(sp[0].o))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawns;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_6:;
	LINE_NUMBER(225);
	goto label_3;
label_4:;
	LINE_NUMBER(226);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_spawnEffect_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:spawnEffect", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(230);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_unmoving;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, (jfloat(30.0f)));
	LINE_NUMBER(231);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_invincible;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, (jfloat(60.0f)));
	LINE_NUMBER(232);
	((func_mindustry_gen_Unit_unloaded) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_unloaded])(ctx, (frame[1].o));
	LINE_NUMBER(234);
	clinit_mindustry_game_EventType$UnitSpawnEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitSpawnEvent);
	init_mindustry_game_EventType$UnitSpawnEvent_mindustry_gen_Unit(ctx, sp[0].o, (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(235);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	SM_mindustry_gen_Call_spawnEffect_float_float_float_mindustry_type_UnitType(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_WaveSpawner_spawnEffect_float_float_float_mindustry_type_UnitType(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:spawnEffect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_WaveSpawner(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(245);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitSpawn;
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].o));
	LINE_NUMBER(247);
	jfloat temp0 = jfloat(30.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ai_WaveSpawner_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ai_WaveSpawner_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ai_WaveSpawner_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (frame[1].f);
		proxy->F_field0 = (frame[0].f);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_WaveSpawner_lambda$spawnEffect$0_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$spawnEffect$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_WaveSpawner(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(247);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_lambda$countFlyerSpawns$0_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$countFlyerSpawns$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	((mindustry_ai_WaveSpawner *) NULL_CHECK(sp[0].o))->F_tmpCount = (((jint)((mindustry_ai_WaveSpawner *) NULL_CHECK(sp[0].o))->F_tmpCount) + (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_lambda$countGroundSpawns$0_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$countGroundSpawns$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	((mindustry_ai_WaveSpawner *) NULL_CHECK(sp[0].o))->F_tmpCount = (((jint)((mindustry_ai_WaveSpawner *) NULL_CHECK(sp[0].o))->F_tmpCount) + (jint(1)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_lambda$eachGroundSpawn$1_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$eachGroundSpawn$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(153);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_solid_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_solid_int_int_R_boolean])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(154);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_any = (jint(1));
	}
label_1:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ai_WaveSpawner_lambda$eachGroundSpawn$0_arc_func_Intc2_float_float_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jbool param3) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$eachGroundSpawn$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_WaveSpawner(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[1].f));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[2].f));
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$spawnEnemies$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawning = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$2_int_float_mindustry_game_SpawnGroup_float_float_boolean(jcontext ctx, jobject self, jint param0, jfloat param1, jobject param2, jfloat param3, jfloat param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$spawnEnemies$2", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(99);
	frame[7].i = (jint(0));
	}
label_1:;
	{
	if ((frame[7].i) >= (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(100);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rnd_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	jfloat temp0 = frame[4].f;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x);
	jfloat temp2 = frame[5].f;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float])(ctx, sp[0].o, sp[1].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y)));
	LINE_NUMBER(99);
	INST_IINC(7, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$1_int_mindustry_game_SpawnGroup_float_float_float(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$spawnEnemies$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(90);
	frame[6].i = (jint(0));
	}
label_1:;
	{
	if ((frame[6].i) >= (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jfloat temp0 = frame[4].f;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[3].f));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = frame[5].f;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (frame[3].f));
	((func_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float])(ctx, sp[0].o, sp[1].o, temp2, (temp3 + temp4));
	LINE_NUMBER(90);
	INST_IINC(6, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$0_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$spawnEnemies$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(66);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(67);
	((func_mindustry_ai_WaveSpawner_doShockwave_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_WaveSpawner_doShockwave_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	}
label_1:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_WaveSpawner_lambda$playerNear$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$playerNear$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_WaveSpawner(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(59);
	jfloat temp0 = jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x) * (8)));
	jfloat temp1 = jfloat((((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y) * (8)));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp2 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, temp0, temp1, temp2, ((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if ((floatCompare(temp3, ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dropZoneRadius), 1)) >= 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_waveTeam;
	if (sp[0].o == sp[1].o) goto label_1;
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

void M_mindustry_ai_WaveSpawner_lambda$getFirstSpawn$0_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$getFirstSpawn$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	sp[1].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[1].i), (frame[2].i));
	((mindustry_ai_WaveSpawner *) NULL_CHECK(sp[0].o))->F_firstSpawn = (jref) sp[1].o;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_lambda$new$1_mindustry_game_EventType$TileOverlayChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_game_EventType$TileOverlayChangeEvent *) NULL_CHECK((frame[1].o)))->F_previous;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawns;
	sp[1].o = (jobject)((mindustry_game_EventType$TileOverlayChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_game_EventType$TileOverlayChangeEvent *) NULL_CHECK((frame[1].o)))->F_overlay;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_WaveSpawner *) NULL_CHECK((frame[0].o)))->F_spawns;
	sp[1].o = (jobject)((mindustry_game_EventType$TileOverlayChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(37);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ai_WaveSpawner_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/WaveSpawner:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	((func_mindustry_ai_WaveSpawner_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ai_WaveSpawner_reset])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_WaveSpawner;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getFirstSpawn
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_ai_WaveSpawner[] {
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
	(void *) M_mindustry_ai_WaveSpawner_getFirstSpawn_R_mindustry_world_Tile,
	(void *) M_mindustry_ai_WaveSpawner_countSpawns_R_int,
	(void *) M_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq,
	(void *) M_mindustry_ai_WaveSpawner_playerNear_R_boolean,
	(void *) M_mindustry_ai_WaveSpawner_spawnEnemies,
	(void *) M_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float,
	(void *) M_mindustry_ai_WaveSpawner_doShockwave_float_float,
	(void *) M_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2,
	(void *) M_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer,
	(void *) M_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2,
	(void *) M_mindustry_ai_WaveSpawner_countGroundSpawns_R_int,
	(void *) M_mindustry_ai_WaveSpawner_countFlyerSpawns_R_int,
	(void *) M_mindustry_ai_WaveSpawner_isSpawning_R_boolean,
	(void *) M_mindustry_ai_WaveSpawner_reset,
	(void *) M_mindustry_ai_WaveSpawner_spawnEffect_mindustry_gen_Unit,
	(void *) M_mindustry_ai_WaveSpawner_lambda$countFlyerSpawns$0_float_float,
	(void *) M_mindustry_ai_WaveSpawner_lambda$countGroundSpawns$0_int_int,
	(void *) M_mindustry_ai_WaveSpawner_lambda$eachGroundSpawn$1_int_int,
	(void *) M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$3,
	(void *) M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$2_int_float_mindustry_game_SpawnGroup_float_float_boolean,
	(void *) M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$1_int_mindustry_game_SpawnGroup_float_float_float,
	(void *) M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$0_float_float_boolean,
	(void *) M_mindustry_ai_WaveSpawner_lambda$getFirstSpawn$0_int_int,
	(void *) M_mindustry_ai_WaveSpawner_lambda$new$1_mindustry_game_EventType$TileOverlayChangeEvent,
	(void *) M_mindustry_ai_WaveSpawner_lambda$new$0_mindustry_game_EventType$WorldLoadEvent,
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
	{ "getFirstSpawn", "()Lmindustry/world/Tile;" },
	{ "countSpawns", "()I" },
	{ "getSpawns", "()Larc/struct/Seq;" },
	{ "playerNear", "()Z" },
	{ "spawnEnemies", "()V" },
	{ "spawnUnit", "(Lmindustry/game/SpawnGroup;FF)V" },
	{ "doShockwave", "(FF)V" },
	{ "eachGroundSpawn", "(Larc/func/Intc2;)V" },
	{ "eachGroundSpawn", "(ILmindustry/ai/WaveSpawner$SpawnConsumer;)V" },
	{ "eachFlyerSpawn", "(ILarc/func/Floatc2;)V" },
	{ "countGroundSpawns", "()I" },
	{ "countFlyerSpawns", "()I" },
	{ "isSpawning", "()Z" },
	{ "reset", "()V" },
	{ "spawnEffect", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$countFlyerSpawns$0", "(FF)V" },
	{ "lambda$countGroundSpawns$0", "(II)V" },
	{ "lambda$eachGroundSpawn$1", "(II)V" },
	{ "lambda$spawnEnemies$3", "()V" },
	{ "lambda$spawnEnemies$2", "(IFLmindustry/game/SpawnGroup;FFZ)V" },
	{ "lambda$spawnEnemies$1", "(ILmindustry/game/SpawnGroup;FFF)V" },
	{ "lambda$spawnEnemies$0", "(FFZ)V" },
	{ "lambda$getFirstSpawn$0", "(II)V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$TileOverlayChangeEvent;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_ai_WaveSpawner$SpawnConsumer,
};

static FieldMetadata fields[] {
	{ "margin", &class_float, (intptr_t) &SF_mindustry_ai_WaveSpawner_margin, "F", 26 },
	{ "coreMargin", &class_float, (intptr_t) &SF_mindustry_ai_WaveSpawner_coreMargin, "F", 26 },
	{ "maxSteps", &class_float, (intptr_t) &SF_mindustry_ai_WaveSpawner_maxSteps, "F", 26 },
	{ "tmpCount", &class_int, offsetof(mindustry_ai_WaveSpawner, F_tmpCount), "I", 2 },
	{ "spawns", &class_arc_struct_Seq, offsetof(mindustry_ai_WaveSpawner, F_spawns), "Larc/struct/Seq;", 2 },
	{ "spawning", &class_boolean, offsetof(mindustry_ai_WaveSpawner, F_spawning), "Z", 2 },
	{ "any", &class_boolean, offsetof(mindustry_ai_WaveSpawner, F_any), "Z", 2 },
	{ "firstSpawn", &class_mindustry_world_Tile, offsetof(mindustry_ai_WaveSpawner, F_firstSpawn), "Lmindustry/world/Tile;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_WaveSpawner, 0, "()V", 1 },
	{ "getFirstSpawn", (intptr_t) M_mindustry_ai_WaveSpawner_getFirstSpawn_R_mindustry_world_Tile, VTABLE_mindustry_ai_WaveSpawner_getFirstSpawn_R_mindustry_world_Tile, "()Lmindustry/world/Tile;", 1 },
	{ "countSpawns", (intptr_t) M_mindustry_ai_WaveSpawner_countSpawns_R_int, VTABLE_mindustry_ai_WaveSpawner_countSpawns_R_int, "()I", 1 },
	{ "getSpawns", (intptr_t) M_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq, VTABLE_mindustry_ai_WaveSpawner_getSpawns_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "playerNear", (intptr_t) M_mindustry_ai_WaveSpawner_playerNear_R_boolean, VTABLE_mindustry_ai_WaveSpawner_playerNear_R_boolean, "()Z", 1 },
	{ "spawnEnemies", (intptr_t) M_mindustry_ai_WaveSpawner_spawnEnemies, VTABLE_mindustry_ai_WaveSpawner_spawnEnemies, "()V", 1 },
	{ "spawnUnit", (intptr_t) M_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float, VTABLE_mindustry_ai_WaveSpawner_spawnUnit_mindustry_game_SpawnGroup_float_float, "(Lmindustry/game/SpawnGroup;FF)V", 1 },
	{ "doShockwave", (intptr_t) M_mindustry_ai_WaveSpawner_doShockwave_float_float, VTABLE_mindustry_ai_WaveSpawner_doShockwave_float_float, "(FF)V", 1 },
	{ "eachGroundSpawn", (intptr_t) M_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2, VTABLE_mindustry_ai_WaveSpawner_eachGroundSpawn_arc_func_Intc2, "(Larc/func/Intc2;)V", 1 },
	{ "eachGroundSpawn", (intptr_t) M_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer, VTABLE_mindustry_ai_WaveSpawner_eachGroundSpawn_int_mindustry_ai_WaveSpawner$SpawnConsumer, "(ILmindustry/ai/WaveSpawner$SpawnConsumer;)V", 2 },
	{ "eachFlyerSpawn", (intptr_t) M_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2, VTABLE_mindustry_ai_WaveSpawner_eachFlyerSpawn_int_arc_func_Floatc2, "(ILarc/func/Floatc2;)V", 2 },
	{ "countGroundSpawns", (intptr_t) M_mindustry_ai_WaveSpawner_countGroundSpawns_R_int, VTABLE_mindustry_ai_WaveSpawner_countGroundSpawns_R_int, "()I", 1 },
	{ "countFlyerSpawns", (intptr_t) M_mindustry_ai_WaveSpawner_countFlyerSpawns_R_int, VTABLE_mindustry_ai_WaveSpawner_countFlyerSpawns_R_int, "()I", 1 },
	{ "isSpawning", (intptr_t) M_mindustry_ai_WaveSpawner_isSpawning_R_boolean, VTABLE_mindustry_ai_WaveSpawner_isSpawning_R_boolean, "()Z", 1 },
	{ "reset", (intptr_t) M_mindustry_ai_WaveSpawner_reset, VTABLE_mindustry_ai_WaveSpawner_reset, "()V", 1 },
	{ "spawnEffect", (intptr_t) M_mindustry_ai_WaveSpawner_spawnEffect_mindustry_gen_Unit, VTABLE_mindustry_ai_WaveSpawner_spawnEffect_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "spawnEffect", (intptr_t) SM_mindustry_ai_WaveSpawner_spawnEffect_float_float_float_mindustry_type_UnitType, 0, "(FFFLmindustry/type/UnitType;)V", 9 },
	{ "lambda$spawnEffect$0", (intptr_t) SM_mindustry_ai_WaveSpawner_lambda$spawnEffect$0_float_float, 0, "(FF)V", 4106 },
	{ "lambda$countFlyerSpawns$0", (intptr_t) M_mindustry_ai_WaveSpawner_lambda$countFlyerSpawns$0_float_float, VTABLE_mindustry_ai_WaveSpawner_lambda$countFlyerSpawns$0_float_float, "(FF)V", 4098 },
	{ "lambda$countGroundSpawns$0", (intptr_t) M_mindustry_ai_WaveSpawner_lambda$countGroundSpawns$0_int_int, VTABLE_mindustry_ai_WaveSpawner_lambda$countGroundSpawns$0_int_int, "(II)V", 4098 },
	{ "lambda$eachGroundSpawn$1", (intptr_t) M_mindustry_ai_WaveSpawner_lambda$eachGroundSpawn$1_int_int, VTABLE_mindustry_ai_WaveSpawner_lambda$eachGroundSpawn$1_int_int, "(II)V", 4098 },
	{ "lambda$eachGroundSpawn$0", (intptr_t) SM_mindustry_ai_WaveSpawner_lambda$eachGroundSpawn$0_arc_func_Intc2_float_float_boolean, 0, "(Larc/func/Intc2;FFZ)V", 4106 },
	{ "lambda$spawnEnemies$3", (intptr_t) M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$3, VTABLE_mindustry_ai_WaveSpawner_lambda$spawnEnemies$3, "()V", 4098 },
	{ "lambda$spawnEnemies$2", (intptr_t) M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$2_int_float_mindustry_game_SpawnGroup_float_float_boolean, VTABLE_mindustry_ai_WaveSpawner_lambda$spawnEnemies$2_int_float_mindustry_game_SpawnGroup_float_float_boolean, "(IFLmindustry/game/SpawnGroup;FFZ)V", 4098 },
	{ "lambda$spawnEnemies$1", (intptr_t) M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$1_int_mindustry_game_SpawnGroup_float_float_float, VTABLE_mindustry_ai_WaveSpawner_lambda$spawnEnemies$1_int_mindustry_game_SpawnGroup_float_float_float, "(ILmindustry/game/SpawnGroup;FFF)V", 4098 },
	{ "lambda$spawnEnemies$0", (intptr_t) M_mindustry_ai_WaveSpawner_lambda$spawnEnemies$0_float_float_boolean, VTABLE_mindustry_ai_WaveSpawner_lambda$spawnEnemies$0_float_float_boolean, "(FFZ)V", 4098 },
	{ "lambda$playerNear$0", (intptr_t) SM_mindustry_ai_WaveSpawner_lambda$playerNear$0_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$getFirstSpawn$0", (intptr_t) M_mindustry_ai_WaveSpawner_lambda$getFirstSpawn$0_int_int, VTABLE_mindustry_ai_WaveSpawner_lambda$getFirstSpawn$0_int_int, "(II)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ai_WaveSpawner_lambda$new$1_mindustry_game_EventType$TileOverlayChangeEvent, VTABLE_mindustry_ai_WaveSpawner_lambda$new$1_mindustry_game_EventType$TileOverlayChangeEvent, "(Lmindustry/game/EventType$TileOverlayChangeEvent;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ai_WaveSpawner_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_ai_WaveSpawner_lambda$new$0_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
};

Class class_mindustry_ai_WaveSpawner{
		.nativeName = (intptr_t) "mindustry/ai/WaveSpawner",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_WaveSpawner),
		.classVtable = (intptr_t) vtable_mindustry_ai_WaveSpawner,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_WaveSpawner,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_WaveSpawner,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 30,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_WaveSpawner = registerClass(&class_mindustry_ai_WaveSpawner);

}
