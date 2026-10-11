#include "mindustry/game/CampaignRules.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/game/Difficulty.h"
#include "mindustry/entities/EntityGroup.h"
#include "java/lang/Object.h"
#include "mindustry/type/Planet.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/game/Rules_TeamRules.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/game/CampaignRules_invoke_arc_func_Cons_1.h"

extern "C" {


void mark_mindustry_game_CampaignRules(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_CampaignRules *) object;
	if (self->F_difficulty)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_difficulty)->clazz)->markFunction)((jobject) self->F_difficulty, mark, depth + 1);
}

void clinit_mindustry_game_CampaignRules(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_CampaignRules(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/CampaignRules:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_CampaignRules(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Difficulty(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Difficulty_normal;
	((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_difficulty = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/CampaignRules:apply", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[2].o;
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_fog;
	((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_fog = temp0;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog = temp0;
	LINE_NUMBER(20);
	((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_hideSpawns = ((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_hideSpawns);
	LINE_NUMBER(21);
	((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_randomWaveAI = ((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_randomWaveAI);
	LINE_NUMBER(22);
	((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_pauseDisabled = ((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_pauseDisabled);
	LINE_NUMBER(23);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_difficulty;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectiveTimerMultiplier = ((jfloat)((mindustry_game_Difficulty *) NULL_CHECK(sp[1].o))->F_waveTimeMultiplier);
	LINE_NUMBER(24);
	if (((jint)((mindustry_type_Planet *) NULL_CHECK((frame[1].o)))->F_showRtsAIRule) == 0) goto label_6;
	}
	{
	LINE_NUMBER(25);
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_rtsAI) == 0) goto label_8;
	}
	{
	if (((jint)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_attackMode) == 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_teams;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, sp[1].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsAi) == (frame[3].i)) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_teams;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, sp[1].o);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsAi = (frame[3].i);
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_teams;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, sp[1].o);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsMaxSquad = (15);
	LINE_NUMBER(31);
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(32);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_game_CampaignRules_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_game_CampaignRules_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_game_CampaignRules_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_teams;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_difficulty;
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_blockHealthMultiplier = ((jfloat)((mindustry_game_Difficulty *) NULL_CHECK(sp[1].o))->F_enemyHealthMultiplier);
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_teams;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_difficulty;
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitHealthMultiplier = ((jfloat)((mindustry_game_Difficulty *) NULL_CHECK(sp[1].o))->F_enemyHealthMultiplier);
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_teams;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(1);
	sp[1].o = (jobject)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_difficulty;
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitCostMultiplier = (temp0 / ((jfloat)((mindustry_game_Difficulty *) NULL_CHECK(sp[1].o))->F_enemySpawnMultiplier));
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_teams;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_waveTeam;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_game_CampaignRules *) NULL_CHECK((frame[0].o)))->F_difficulty;
	((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitBuildSpeedMultiplier = ((jfloat)((mindustry_game_Difficulty *) NULL_CHECK(sp[1].o))->F_enemySpawnMultiplier);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_CampaignRules_lambda$apply$0_mindustry_game_Rules_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/CampaignRules:lambda$apply$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_CampaignRules(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waveTeam;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(34);
	((func_mindustry_gen_Unit_resetController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_resetController])(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_game_CampaignRules[] {
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
	(void *) M_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules,
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
	{ "apply", "(Lmindustry/type/Planet;Lmindustry/game/Rules;)V" },
};

static FieldMetadata fields[] {
	{ "difficulty", &class_mindustry_game_Difficulty, offsetof(mindustry_game_CampaignRules, F_difficulty), "Lmindustry/game/Difficulty;", 1 },
	{ "fog", &class_boolean, offsetof(mindustry_game_CampaignRules, F_fog), "Z", 1 },
	{ "hideSpawns", &class_boolean, offsetof(mindustry_game_CampaignRules, F_hideSpawns), "Z", 1 },
	{ "sectorInvasion", &class_boolean, offsetof(mindustry_game_CampaignRules, F_sectorInvasion), "Z", 1 },
	{ "randomWaveAI", &class_boolean, offsetof(mindustry_game_CampaignRules, F_randomWaveAI), "Z", 1 },
	{ "legacyLaunchPads", &class_boolean, offsetof(mindustry_game_CampaignRules, F_legacyLaunchPads), "Z", 1 },
	{ "rtsAI", &class_boolean, offsetof(mindustry_game_CampaignRules, F_rtsAI), "Z", 1 },
	{ "clearSectorOnLose", &class_boolean, offsetof(mindustry_game_CampaignRules, F_clearSectorOnLose), "Z", 1 },
	{ "pauseDisabled", &class_boolean, offsetof(mindustry_game_CampaignRules, F_pauseDisabled), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_CampaignRules, 0, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules, VTABLE_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules, "(Lmindustry/type/Planet;Lmindustry/game/Rules;)V", 1 },
	{ "lambda$apply$0", (intptr_t) SM_mindustry_game_CampaignRules_lambda$apply$0_mindustry_game_Rules_mindustry_gen_Unit, 0, "(Lmindustry/game/Rules;Lmindustry/gen/Unit;)V", 4106 },
};

Class class_mindustry_game_CampaignRules{
		.nativeName = (intptr_t) "mindustry/game/CampaignRules",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_CampaignRules),
		.classVtable = (intptr_t) vtable_mindustry_game_CampaignRules,
		.staticInitializer = (intptr_t) clinit_mindustry_game_CampaignRules,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_CampaignRules,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_CampaignRules = registerClass(&class_mindustry_game_CampaignRules);

}
