#include "mindustry/game/Rules.h"
#include "java/lang/Integer.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Rules.h"
#include "arc/graphics/Color.h"
#include "java/lang/Iterable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/struct/StringMap.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/Rules_invoke_arc_func_Boolf_4.h"
#include "mindustry/game/Rules_invoke_arc_func_Boolf_3.h"
#include "mindustry/game/Rules_TeamRules.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/func/Boolf.h"
#include "mindustry/game/Rules_invoke_arc_func_Boolf_5.h"
#include "mindustry/game/Gamemode.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/Item.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/type/Sector.h"
#include "arc/util/Nullable.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/content/Items.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/content/Planets.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/game/Team.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/graphics/g3d/PlanetParams.h"

extern "C" {


void mark_mindustry_game_Rules(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Rules *) object;
	if (self->F_teams)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_teams)->clazz)->markFunction)((jobject) self->F_teams, mark, depth + 1);
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_sector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sector)->clazz)->markFunction)((jobject) self->F_sector, mark, depth + 1);
	if (self->F_ambientMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ambientMusic)->clazz)->markFunction)((jobject) self->F_ambientMusic, mark, depth + 1);
	if (self->F_darkMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_darkMusic)->clazz)->markFunction)((jobject) self->F_darkMusic, mark, depth + 1);
	if (self->F_spawns)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spawns)->clazz)->markFunction)((jobject) self->F_spawns, mark, depth + 1);
	if (self->F_loadout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadout)->clazz)->markFunction)((jobject) self->F_loadout, mark, depth + 1);
	if (self->F_weather)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weather)->clazz)->markFunction)((jobject) self->F_weather, mark, depth + 1);
	if (self->F_blockLimits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blockLimits)->clazz)->markFunction)((jobject) self->F_blockLimits, mark, depth + 1);
	if (self->F_bannedBlocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bannedBlocks)->clazz)->markFunction)((jobject) self->F_bannedBlocks, mark, depth + 1);
	if (self->F_bannedUnits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bannedUnits)->clazz)->markFunction)((jobject) self->F_bannedUnits, mark, depth + 1);
	if (self->F_revealedBlocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_revealedBlocks)->clazz)->markFunction)((jobject) self->F_revealedBlocks, mark, depth + 1);
	if (self->F_researched)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_researched)->clazz)->markFunction)((jobject) self->F_researched, mark, depth + 1);
	if (self->F_objectives)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_objectives)->clazz)->markFunction)((jobject) self->F_objectives, mark, depth + 1);
	if (self->F_objectiveFlags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_objectiveFlags)->clazz)->markFunction)((jobject) self->F_objectiveFlags, mark, depth + 1);
	if (self->F_staticColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_staticColor)->clazz)->markFunction)((jobject) self->F_staticColor, mark, depth + 1);
	if (self->F_dynamicColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dynamicColor)->clazz)->markFunction)((jobject) self->F_dynamicColor, mark, depth + 1);
	if (self->F_ambientLight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ambientLight)->clazz)->markFunction)((jobject) self->F_ambientLight, mark, depth + 1);
	if (self->F_defaultTeam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultTeam)->clazz)->markFunction)((jobject) self->F_defaultTeam, mark, depth + 1);
	if (self->F_waveTeam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_waveTeam)->clazz)->markFunction)((jobject) self->F_waveTeam, mark, depth + 1);
	if (self->F_cloudColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cloudColor)->clazz)->markFunction)((jobject) self->F_cloudColor, mark, depth + 1);
	if (self->F_modeName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_modeName)->clazz)->markFunction)((jobject) self->F_modeName, mark, depth + 1);
	if (self->F_mission)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mission)->clazz)->markFunction)((jobject) self->F_mission, mark, depth + 1);
	if (self->F_tags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tags)->clazz)->markFunction)((jobject) self->F_tags, mark, depth + 1);
	if (self->F_customBackgroundCallback)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customBackgroundCallback)->clazz)->markFunction)((jobject) self->F_customBackgroundCallback, mark, depth + 1);
	if (self->F_backgroundTexture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_backgroundTexture)->clazz)->markFunction)((jobject) self->F_backgroundTexture, mark, depth + 1);
	if (self->F_planetBackground)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planetBackground)->clazz)->markFunction)((jobject) self->F_planetBackground, mark, depth + 1);
	if (self->F_planet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planet)->clazz)->markFunction)((jobject) self->F_planet, mark, depth + 1);
}

void clinit_mindustry_game_Rules(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Rules(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Rules(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_allowEditRules = (jint(0));
	LINE_NUMBER(29);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_coreBuildAndConfig = (jint(0));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Rules$TeamRules(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Rules$TeamRules);
	init_mindustry_game_Rules$TeamRules(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_teams = (jref) sp[1].o;
	LINE_NUMBER(33);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waveTimer = (jint(1));
	LINE_NUMBER(35);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waveSending = (jint(1));
	LINE_NUMBER(39);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_airUseSpawns = (jint(0));
	LINE_NUMBER(41);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_wavesSpawnAtCores = (jint(1));
	LINE_NUMBER(45);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_pvpAutoPause = (jint(1));
	LINE_NUMBER(47);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_pauseDisabled = (jint(0));
	LINE_NUMBER(49);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waitEnemies = (jint(0));
	LINE_NUMBER(51);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_attackMode = (jint(0));
	LINE_NUMBER(53);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_editor = (jint(0));
	LINE_NUMBER(55);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_derelictRepair = (jint(1));
	LINE_NUMBER(57);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_canGameOver = (jint(1));
	LINE_NUMBER(59);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_coreCapture = (jint(0));
	LINE_NUMBER(61);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_reactorExplosions = (jint(1));
	LINE_NUMBER(63);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_possessionAllowed = (jint(1));
	LINE_NUMBER(65);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_schematicsAllowed = (jint(1));
	LINE_NUMBER(67);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_damageExplosions = (jint(1));
	LINE_NUMBER(69);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_fire = (jint(1));
	LINE_NUMBER(71);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_randomWaveAI = (jint(0));
	LINE_NUMBER(73);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitPayloadUpdate = (jint(0));
	LINE_NUMBER(75);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitPayloadsExplode = (jint(0));
	LINE_NUMBER(77);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitCapVariable = (jint(1));
	LINE_NUMBER(79);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_hideSpawns = (jint(1));
	LINE_NUMBER(81);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_solarMultiplier = (jfloat(1));
	LINE_NUMBER(83);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitBuildSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(85);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitCostMultiplier = (jfloat(1));
	LINE_NUMBER(87);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitDamageMultiplier = (jfloat(1));
	LINE_NUMBER(89);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitHealthMultiplier = (jfloat(1));
	LINE_NUMBER(91);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitCrashDamageMultiplier = (jfloat(1));
	LINE_NUMBER(93);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitMineSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(95);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitFactoryActivationDelay = (jfloat(0));
	LINE_NUMBER(97);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_ghostBlocks = (jint(1));
	LINE_NUMBER(99);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_showOtherTeamPings = (jint(0));
	LINE_NUMBER(101);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_logicUnitControl = (jint(1));
	LINE_NUMBER(103);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_logicUnitBuild = (jint(1));
	LINE_NUMBER(105);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_logicUnitDeconstruct = (jint(0));
	LINE_NUMBER(107);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_worldProcessorPlayerLink = (jint(1));
	LINE_NUMBER(109);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_allowEditWorldProcessors = (jint(0));
	LINE_NUMBER(111);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_disableWorldProcessors = (jint(0));
	LINE_NUMBER(113);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_blockHealthMultiplier = (jfloat(1));
	LINE_NUMBER(115);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_blockDamageMultiplier = (jfloat(1));
	LINE_NUMBER(117);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_buildCostMultiplier = (jfloat(1));
	LINE_NUMBER(119);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(121);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_deconstructRefundMultiplier = (jfloat(0.5f));
	LINE_NUMBER(123);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_objectiveTimerMultiplier = (jfloat(1));
	LINE_NUMBER(125);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_enemyCoreBuildRadius = (jfloat(400.0f));
	LINE_NUMBER(127);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_polygonCoreProtection = (jint(0));
	LINE_NUMBER(129);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_placeRangeCheck = (jint(0));
	LINE_NUMBER(131);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_cleanupDeadTeams = (jint(1));
	LINE_NUMBER(133);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_onlyDepositCore = (jint(0));
	LINE_NUMBER(135);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_allowCoreUnloaders = (jint(1));
	LINE_NUMBER(137);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_itemDepositCooldown = (jfloat(0.5f));
	LINE_NUMBER(139);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_coreDestroyClear = (jint(0));
	LINE_NUMBER(141);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_hideBannedBlocks = (jint(0));
	LINE_NUMBER(143);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_allowEnvironmentDeconstruct = (jint(0));
	LINE_NUMBER(145);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_instantBuild = (jint(0));
	LINE_NUMBER(147);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_blockWhitelist = (jint(0));
	LINE_NUMBER(149);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitWhitelist = (jint(0));
	LINE_NUMBER(151);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_dropZoneRadius = (jfloat(300.0f));
	LINE_NUMBER(153);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_waveSpacing = (jfloat(7200.0f));
	LINE_NUMBER(155);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_initialWaveSpacing = (jfloat(0));
	LINE_NUMBER(157);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_winWave = (jint(0));
	LINE_NUMBER(159);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitCap = (jint(0));
	LINE_NUMBER(163);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_dragMultiplier = (jfloat(1));
	LINE_NUMBER(165);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_env = (233);
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_Attributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_Attributes);
	init_mindustry_world_blocks_Attributes(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attributes = (jref) sp[1].o;
	LINE_NUMBER(175);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_alwaysPlayMusic = (jint(0));
	LINE_NUMBER(177);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_disableMusic = (jint(0));
	LINE_NUMBER(179);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_musicVolume = (jfloat(1));
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_copper;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (100));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_mindustry_type_ItemStack_list_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_loadout = (jref) sp[1].o;
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(1)));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_weather = (jref) sp[1].o;
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
	init_arc_struct_ObjectIntMap(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_blockLimits = (jref) sp[1].o;
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_bannedBlocks = (jref) sp[1].o;
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_bannedUnits = (jref) sp[1].o;
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_revealedBlocks = (jref) sp[1].o;
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_researched = (jref) sp[1].o;
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_MapObjectives(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_MapObjectives);
	init_mindustry_game_MapObjectives(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives = (jref) sp[1].o;
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectiveFlags = (jref) sp[1].o;
	LINE_NUMBER(201);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_fog = (jint(0));
	LINE_NUMBER(203);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_staticFog = (jint(1));
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticColor = (jref) sp[1].o;
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.5f)));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dynamicColor = (jref) sp[1].o;
	LINE_NUMBER(209);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_lighting = (jint(0));
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1,000000e-02f)), (jfloat(1,000000e-02f)), (jfloat(0.04f)), (jfloat(0.99f)));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_ambientLight = (jref) sp[1].o;
	LINE_NUMBER(213);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitLight = (jint(1));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam = (jref) sp[1].o;
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_crux;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam = (jref) sp[1].o;
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_cloudColor = (jref) sp[1].o;
	LINE_NUMBER(225);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_coreIncinerates = (jint(1));
	LINE_NUMBER(227);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_borderDarkness = (jint(1));
	LINE_NUMBER(229);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_limitMapArea = (jint(0));
	LINE_NUMBER(231);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_limitWidth = (jint(1));
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_limitHeight = (jint(1));
	LINE_NUMBER(233);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_disableOutsideArea = (jint(1));
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	clinit_arc_struct_StringMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_tags = (jref) sp[1].o;
	LINE_NUMBER(241);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_backgroundSpeed = (jfloat(27000.0f));
	LINE_NUMBER(243);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_backgroundScl = (jfloat(1));
	LINE_NUMBER(245);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_backgroundOffsetX = (jfloat(0.1f));
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_backgroundOffsetY = (jfloat(0.1f));
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(251);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_allowLogicData = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Rules_copy_R_mindustry_game_Rules(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:copy", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_copy_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	auto copyRules = (mindustry_game_Rules*)checkCast(ctx, &class_mindustry_game_Rules, sp[0].o);
	if (copyRules) {
		if (!copyRules->F_objectiveFlags) {
			clinit_arc_struct_ObjectSet(ctx);
			copyRules->F_objectiveFlags = (jref)gcAlloc(ctx, &class_arc_struct_ObjectSet);
			init_arc_struct_ObjectSet(ctx, (jobject)copyRules->F_objectiveFlags);
		}
		if (!copyRules->F_objectives) {
			clinit_mindustry_game_MapObjectives(ctx);
			copyRules->F_objectives = (jref)gcAlloc(ctx, &class_mindustry_game_MapObjectives);
			init_mindustry_game_MapObjectives(ctx, (jobject)copyRules->F_objectives);
		}
	}
	popStackFrame(ctx);
	return (jobject)copyRules;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Rules_retainContentFields_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:retainContentFields", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_spawns;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	if (((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_objectives) {
		((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives = ((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_objectives;
	}
	if (((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_objectiveFlags) {
		((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectiveFlags = ((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_objectiveFlags;
	}
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_weather;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_weather = (jref) sp[1].o;
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_bannedBlocks;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_java_lang_Iterable_R_arc_struct_Seq(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Rules_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_game_Rules_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_game_Rules_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_bannedBlocks;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_bannedBlocks = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_bannedUnits;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_java_lang_Iterable_R_arc_struct_Seq(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Rules_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_game_Rules_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_game_Rules_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_bannedUnits;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_bannedUnits = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_loadout;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Rules_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_game_Rules_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_game_Rules_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_loadout;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_loadout = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(273);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_Rules_mode_R_mindustry_game_Gamemode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:mode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(277);
	if (((jint)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_pvp) == 0) goto label_1;
	}
	{
	LINE_NUMBER(278);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_pvp;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(279);
	if (((jint)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_editor) == 0) goto label_3;
	}
	{
	LINE_NUMBER(280);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_editor;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(281);
	if (((jint)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_attackMode) == 0) goto label_5;
	}
	{
	LINE_NUMBER(282);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_attack;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(283);
	if (((jint)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_infiniteResources) == 0) goto label_7;
	}
	{
	LINE_NUMBER(284);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_sandbox;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(286);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_survival;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Rules_hasEnv_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:hasEnv", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(291);
	if ((((jint)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_env) & (frame[1].i)) == 0) goto label_1;
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

jfloat M_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:buildRadius", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_protectCores) != 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_enemyCoreBuildRadius;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_extraCoreBuildRadius);
	sp[0].f = temp1;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:unitBuildSpeed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(299);
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitBuildSpeedMultiplier;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitBuildSpeedMultiplier));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:unitCost", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(303);
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitCostMultiplier;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitCostMultiplier));
	}

	popStackFrame(ctx);
}

static void ensureRulesFields(jcontext ctx, mindustry_game_Rules *rules) {
	if (!rules) return;
	if (std::isnan(rules->F_unitHealthMultiplier) || rules->F_unitHealthMultiplier <= 0.0001f) rules->F_unitHealthMultiplier = 1.0f;
	if (std::isnan(rules->F_unitDamageMultiplier) || rules->F_unitDamageMultiplier <= 0.0001f) rules->F_unitDamageMultiplier = 1.0f;
	if (std::isnan(rules->F_blockHealthMultiplier) || rules->F_blockHealthMultiplier <= 0.0001f) rules->F_blockHealthMultiplier = 1.0f;
	if (std::isnan(rules->F_blockDamageMultiplier) || rules->F_blockDamageMultiplier <= 0.0001f) rules->F_blockDamageMultiplier = 1.0f;
	if (std::isnan(rules->F_buildSpeedMultiplier) || rules->F_buildSpeedMultiplier <= 0.0001f) rules->F_buildSpeedMultiplier = 1.0f;
	if (std::isnan(rules->F_unitCrashDamageMultiplier) || rules->F_unitCrashDamageMultiplier <= 0.0001f) rules->F_unitCrashDamageMultiplier = 1.0f;
	if (std::isnan(rules->F_unitMineSpeedMultiplier) || rules->F_unitMineSpeedMultiplier <= 0.0001f) rules->F_unitMineSpeedMultiplier = 1.0f;
	if (!rules->F_bannedBlocks) {
		clinit_arc_struct_ObjectSet(ctx);
		rules->F_bannedBlocks = (jref) gcAlloc(ctx, &class_arc_struct_ObjectSet);
		init_arc_struct_ObjectSet(ctx, (jobject) rules->F_bannedBlocks);
	}
	if (!rules->F_bannedUnits) {
		clinit_arc_struct_ObjectSet(ctx);
		rules->F_bannedUnits = (jref) gcAlloc(ctx, &class_arc_struct_ObjectSet);
		init_arc_struct_ObjectSet(ctx, (jobject) rules->F_bannedUnits);
	}
	if (!rules->F_revealedBlocks) {
		clinit_arc_struct_ObjectSet(ctx);
		rules->F_revealedBlocks = (jref) gcAlloc(ctx, &class_arc_struct_ObjectSet);
		init_arc_struct_ObjectSet(ctx, (jobject) rules->F_revealedBlocks);
	}
	if (!rules->F_researched) {
		clinit_arc_struct_ObjectSet(ctx);
		rules->F_researched = (jref) gcAlloc(ctx, &class_arc_struct_ObjectSet);
		init_arc_struct_ObjectSet(ctx, (jobject) rules->F_researched);
	}
	if (!rules->F_objectiveFlags) {
		clinit_arc_struct_ObjectSet(ctx);
		rules->F_objectiveFlags = (jref) gcAlloc(ctx, &class_arc_struct_ObjectSet);
		init_arc_struct_ObjectSet(ctx, (jobject) rules->F_objectiveFlags);
	}
	if (!rules->F_blockLimits) {
		clinit_arc_struct_ObjectIntMap(ctx);
		rules->F_blockLimits = (jref) gcAlloc(ctx, &class_arc_struct_ObjectIntMap);
		init_arc_struct_ObjectIntMap(ctx, (jobject) rules->F_blockLimits);
	}
	if (!rules->F_spawns) {
		clinit_arc_struct_Seq(ctx);
		rules->F_spawns = (jref) gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq(ctx, (jobject) rules->F_spawns);
	}
	if (!rules->F_weather) {
		clinit_arc_struct_Seq(ctx);
		rules->F_weather = (jref) gcAlloc(ctx, &class_arc_struct_Seq);
		init_arc_struct_Seq(ctx, (jobject) rules->F_weather);
	}
	if (!rules->F_teams) {
		clinit_mindustry_game_Rules$TeamRules(ctx);
		rules->F_teams = (jref) gcAlloc(ctx, &class_mindustry_game_Rules$TeamRules);
		init_mindustry_game_Rules$TeamRules(ctx, (jobject) rules->F_teams);
	}
	if (!rules->F_objectives) {
		clinit_mindustry_game_MapObjectives(ctx);
		rules->F_objectives = (jref) gcAlloc(ctx, &class_mindustry_game_MapObjectives);
		init_mindustry_game_MapObjectives(ctx, (jobject) rules->F_objectives);
	}
	if (!rules->F_defaultTeam) {
		clinit_mindustry_game_Team(ctx);
		rules->F_defaultTeam = (jref) SF_mindustry_game_Team_sharded;
	}
	if (!rules->F_waveTeam) {
		clinit_mindustry_game_Team(ctx);
		rules->F_waveTeam = (jref) SF_mindustry_game_Team_crux;
	}
}

jfloat M_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:unitDamage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(307);
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitDamageMultiplier;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	jfloat teamMult = ((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitDamageMultiplier;
	if (std::isnan(teamMult) || teamMult <= 0.0001f) teamMult = 1.0f;
	jfloat res = temp0 * teamMult;
	if (std::isnan(res) || res <= 0.0001f) res = 1.0f;
	popStackFrame(ctx);
	return res;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:unitHealth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(312);
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitHealthMultiplier;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	jfloat teamMult = ((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitHealthMultiplier;
	if (std::isnan(teamMult) || teamMult <= 0.0001f) teamMult = 1.0f;
	jfloat res = temp0 * teamMult;
	if (std::isnan(res) || res <= 0.0001f) res = 1.0f;
	popStackFrame(ctx);
	return res;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:unitCrashDamage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	jfloat temp0 = (jfloat)((func_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float])(ctx, (frame[0].o), (frame[1].o));
	jfloat crashMult = ((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitCrashDamageMultiplier;
	if (std::isnan(crashMult) || crashMult <= 0.0001f) crashMult = 1.0f;
	jfloat temp1 = temp0 * crashMult;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	jfloat teamCrashMult = ((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitCrashDamageMultiplier;
	if (std::isnan(teamCrashMult) || teamCrashMult <= 0.0001f) teamCrashMult = 1.0f;
	jfloat res = temp1 * teamCrashMult;
	if (std::isnan(res) || res <= 0.0001f) res = 1.0f;
	popStackFrame(ctx);
	return res;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:unitMineSpeed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(320);
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitMineSpeedMultiplier;
	if (std::isnan(temp0) || temp0 <= 0.0001f) temp0 = 1.0f;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	jfloat teamMineMult = ((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitMineSpeedMultiplier;
	if (std::isnan(teamMineMult) || teamMineMult <= 0.0001f) teamMineMult = 1.0f;
	jfloat res = temp0 * teamMineMult;
	if (std::isnan(res) || res <= 0.0001f) res = 1.0f;
	popStackFrame(ctx);
	return res;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:blockHealth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(324);
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_blockHealthMultiplier;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	jfloat teamMult = ((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_blockHealthMultiplier;
	if (std::isnan(teamMult) || teamMult <= 0.0001f) teamMult = 1.0f;
	jfloat res = temp0 * teamMult;
	if (std::isnan(res) || res <= 0.0001f) res = 1.0f;
	popStackFrame(ctx);
	return res;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:blockDamage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(327);
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_blockDamageMultiplier;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	jfloat teamMult = ((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_blockDamageMultiplier;
	if (std::isnan(teamMult) || teamMult <= 0.0001f) teamMult = 1.0f;
	jfloat res = temp0 * teamMult;
	if (std::isnan(res) || res <= 0.0001f) res = 1.0f;
	popStackFrame(ctx);
	return res;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:buildSpeed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(331);
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	jfloat teamMult = ((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier;
	if (std::isnan(teamMult) || teamMult <= 0.0001f) teamMult = 1.0f;
	jfloat res = temp0 * teamMult;
	if (std::isnan(res) || res <= 0.0001f) res = 1.0f;
	popStackFrame(ctx);
	return res;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Rules_isBanned_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	if (!param0) return 0;
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:isBanned", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(335);
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_blockWhitelist;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_bannedBlocks;
	jint temp1 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == temp1) goto label_1;
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

jbool M_mindustry_game_Rules_isBanned_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	if (!param0) return 0;
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:isBanned", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(339);
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitWhitelist;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_bannedUnits;
	jint temp1 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == temp1) goto label_1;
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

jfloat M_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:unitActivationDelay", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(343);
	jfloat temp0 = (jfloat)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_unitFactoryActivationDelay;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_unitFactoryActivationDelay));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	ensureRulesFields(ctx, (mindustry_game_Rules *) self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:isInfiniteResources", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(347);
	if (((jint)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_infiniteResources) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_2;
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

jbool SM_mindustry_game_Rules_lambda$retainContentFields$0_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules:lambda$retainContentFields$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Rules(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_type_Item_isPatchContent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_isPatchContent_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_Rules;
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

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field sector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[72]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field ambientMusic
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[73]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field darkMusic
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[74]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field modeName
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[98]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field mission
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[99]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field customBackgroundCallback
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[109]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field backgroundTexture
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[110]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field planetBackground
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[115]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_game_Rules[] {
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
	(void *) M_mindustry_game_Rules_copy_R_mindustry_game_Rules,
	(void *) M_mindustry_game_Rules_retainContentFields_mindustry_game_Rules,
	(void *) M_mindustry_game_Rules_mode_R_mindustry_game_Gamemode,
	(void *) M_mindustry_game_Rules_hasEnv_int_R_boolean,
	(void *) M_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_isBanned_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_game_Rules_isBanned_mindustry_type_UnitType_R_boolean,
	(void *) M_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float,
	(void *) M_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean,
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
	{ "copy", "()Lmindustry/game/Rules;" },
	{ "retainContentFields", "(Lmindustry/game/Rules;)V" },
	{ "mode", "()Lmindustry/game/Gamemode;" },
	{ "hasEnv", "(I)Z" },
	{ "buildRadius", "(Lmindustry/game/Team;)F" },
	{ "unitBuildSpeed", "(Lmindustry/game/Team;)F" },
	{ "unitCost", "(Lmindustry/game/Team;)F" },
	{ "unitDamage", "(Lmindustry/game/Team;)F" },
	{ "unitHealth", "(Lmindustry/game/Team;)F" },
	{ "unitCrashDamage", "(Lmindustry/game/Team;)F" },
	{ "unitMineSpeed", "(Lmindustry/game/Team;)F" },
	{ "blockHealth", "(Lmindustry/game/Team;)F" },
	{ "blockDamage", "(Lmindustry/game/Team;)F" },
	{ "buildSpeed", "(Lmindustry/game/Team;)F" },
	{ "isBanned", "(Lmindustry/world/Block;)Z" },
	{ "isBanned", "(Lmindustry/type/UnitType;)Z" },
	{ "unitActivationDelay", "(Lmindustry/game/Team;)F" },
	{ "isInfiniteResources", "(Lmindustry/game/Team;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_game_Rules$TeamRules,
	&class_mindustry_game_Rules$TeamRule,
};

static FieldMetadata fields[] {
	{ "allowEditRules", &class_boolean, offsetof(mindustry_game_Rules, F_allowEditRules), "Z", 1 },
	{ "infiniteResources", &class_boolean, offsetof(mindustry_game_Rules, F_infiniteResources), "Z", 1 },
	{ "coreBuildAndConfig", &class_boolean, offsetof(mindustry_game_Rules, F_coreBuildAndConfig), "Z", 1 },
	{ "teams", &class_mindustry_game_Rules$TeamRules, offsetof(mindustry_game_Rules, F_teams), "Lmindustry/game/Rules$TeamRules;", 1 },
	{ "waveTimer", &class_boolean, offsetof(mindustry_game_Rules, F_waveTimer), "Z", 1 },
	{ "waveSending", &class_boolean, offsetof(mindustry_game_Rules, F_waveSending), "Z", 1 },
	{ "waves", &class_boolean, offsetof(mindustry_game_Rules, F_waves), "Z", 1 },
	{ "airUseSpawns", &class_boolean, offsetof(mindustry_game_Rules, F_airUseSpawns), "Z", 1 },
	{ "wavesSpawnAtCores", &class_boolean, offsetof(mindustry_game_Rules, F_wavesSpawnAtCores), "Z", 1 },
	{ "pvp", &class_boolean, offsetof(mindustry_game_Rules, F_pvp), "Z", 1 },
	{ "pvpAutoPause", &class_boolean, offsetof(mindustry_game_Rules, F_pvpAutoPause), "Z", 1 },
	{ "pauseDisabled", &class_boolean, offsetof(mindustry_game_Rules, F_pauseDisabled), "Z", 1 },
	{ "waitEnemies", &class_boolean, offsetof(mindustry_game_Rules, F_waitEnemies), "Z", 1 },
	{ "attackMode", &class_boolean, offsetof(mindustry_game_Rules, F_attackMode), "Z", 1 },
	{ "editor", &class_boolean, offsetof(mindustry_game_Rules, F_editor), "Z", 1 },
	{ "derelictRepair", &class_boolean, offsetof(mindustry_game_Rules, F_derelictRepair), "Z", 1 },
	{ "canGameOver", &class_boolean, offsetof(mindustry_game_Rules, F_canGameOver), "Z", 1 },
	{ "coreCapture", &class_boolean, offsetof(mindustry_game_Rules, F_coreCapture), "Z", 1 },
	{ "reactorExplosions", &class_boolean, offsetof(mindustry_game_Rules, F_reactorExplosions), "Z", 1 },
	{ "possessionAllowed", &class_boolean, offsetof(mindustry_game_Rules, F_possessionAllowed), "Z", 1 },
	{ "schematicsAllowed", &class_boolean, offsetof(mindustry_game_Rules, F_schematicsAllowed), "Z", 1 },
	{ "damageExplosions", &class_boolean, offsetof(mindustry_game_Rules, F_damageExplosions), "Z", 1 },
	{ "fire", &class_boolean, offsetof(mindustry_game_Rules, F_fire), "Z", 1 },
	{ "randomWaveAI", &class_boolean, offsetof(mindustry_game_Rules, F_randomWaveAI), "Z", 1 },
	{ "unitPayloadUpdate", &class_boolean, offsetof(mindustry_game_Rules, F_unitPayloadUpdate), "Z", 1 },
	{ "unitPayloadsExplode", &class_boolean, offsetof(mindustry_game_Rules, F_unitPayloadsExplode), "Z", 1 },
	{ "unitCapVariable", &class_boolean, offsetof(mindustry_game_Rules, F_unitCapVariable), "Z", 1 },
	{ "hideSpawns", &class_boolean, offsetof(mindustry_game_Rules, F_hideSpawns), "Z", 1 },
	{ "solarMultiplier", &class_float, offsetof(mindustry_game_Rules, F_solarMultiplier), "F", 1 },
	{ "unitBuildSpeedMultiplier", &class_float, offsetof(mindustry_game_Rules, F_unitBuildSpeedMultiplier), "F", 1 },
	{ "unitCostMultiplier", &class_float, offsetof(mindustry_game_Rules, F_unitCostMultiplier), "F", 1 },
	{ "unitDamageMultiplier", &class_float, offsetof(mindustry_game_Rules, F_unitDamageMultiplier), "F", 1 },
	{ "unitHealthMultiplier", &class_float, offsetof(mindustry_game_Rules, F_unitHealthMultiplier), "F", 1 },
	{ "unitCrashDamageMultiplier", &class_float, offsetof(mindustry_game_Rules, F_unitCrashDamageMultiplier), "F", 1 },
	{ "unitMineSpeedMultiplier", &class_float, offsetof(mindustry_game_Rules, F_unitMineSpeedMultiplier), "F", 1 },
	{ "unitFactoryActivationDelay", &class_float, offsetof(mindustry_game_Rules, F_unitFactoryActivationDelay), "F", 1 },
	{ "ghostBlocks", &class_boolean, offsetof(mindustry_game_Rules, F_ghostBlocks), "Z", 1 },
	{ "showOtherTeamPings", &class_boolean, offsetof(mindustry_game_Rules, F_showOtherTeamPings), "Z", 1 },
	{ "logicUnitControl", &class_boolean, offsetof(mindustry_game_Rules, F_logicUnitControl), "Z", 1 },
	{ "logicUnitBuild", &class_boolean, offsetof(mindustry_game_Rules, F_logicUnitBuild), "Z", 1 },
	{ "logicUnitDeconstruct", &class_boolean, offsetof(mindustry_game_Rules, F_logicUnitDeconstruct), "Z", 1 },
	{ "worldProcessorPlayerLink", &class_boolean, offsetof(mindustry_game_Rules, F_worldProcessorPlayerLink), "Z", 1 },
	{ "allowEditWorldProcessors", &class_boolean, offsetof(mindustry_game_Rules, F_allowEditWorldProcessors), "Z", 1 },
	{ "disableWorldProcessors", &class_boolean, offsetof(mindustry_game_Rules, F_disableWorldProcessors), "Z", 1 },
	{ "blockHealthMultiplier", &class_float, offsetof(mindustry_game_Rules, F_blockHealthMultiplier), "F", 1 },
	{ "blockDamageMultiplier", &class_float, offsetof(mindustry_game_Rules, F_blockDamageMultiplier), "F", 1 },
	{ "buildCostMultiplier", &class_float, offsetof(mindustry_game_Rules, F_buildCostMultiplier), "F", 1 },
	{ "buildSpeedMultiplier", &class_float, offsetof(mindustry_game_Rules, F_buildSpeedMultiplier), "F", 1 },
	{ "deconstructRefundMultiplier", &class_float, offsetof(mindustry_game_Rules, F_deconstructRefundMultiplier), "F", 1 },
	{ "objectiveTimerMultiplier", &class_float, offsetof(mindustry_game_Rules, F_objectiveTimerMultiplier), "F", 1 },
	{ "enemyCoreBuildRadius", &class_float, offsetof(mindustry_game_Rules, F_enemyCoreBuildRadius), "F", 1 },
	{ "polygonCoreProtection", &class_boolean, offsetof(mindustry_game_Rules, F_polygonCoreProtection), "Z", 1 },
	{ "placeRangeCheck", &class_boolean, offsetof(mindustry_game_Rules, F_placeRangeCheck), "Z", 1 },
	{ "cleanupDeadTeams", &class_boolean, offsetof(mindustry_game_Rules, F_cleanupDeadTeams), "Z", 1 },
	{ "onlyDepositCore", &class_boolean, offsetof(mindustry_game_Rules, F_onlyDepositCore), "Z", 1 },
	{ "allowCoreUnloaders", &class_boolean, offsetof(mindustry_game_Rules, F_allowCoreUnloaders), "Z", 1 },
	{ "itemDepositCooldown", &class_float, offsetof(mindustry_game_Rules, F_itemDepositCooldown), "F", 1 },
	{ "coreDestroyClear", &class_boolean, offsetof(mindustry_game_Rules, F_coreDestroyClear), "Z", 1 },
	{ "hideBannedBlocks", &class_boolean, offsetof(mindustry_game_Rules, F_hideBannedBlocks), "Z", 1 },
	{ "allowEnvironmentDeconstruct", &class_boolean, offsetof(mindustry_game_Rules, F_allowEnvironmentDeconstruct), "Z", 1 },
	{ "instantBuild", &class_boolean, offsetof(mindustry_game_Rules, F_instantBuild), "Z", 1 },
	{ "blockWhitelist", &class_boolean, offsetof(mindustry_game_Rules, F_blockWhitelist), "Z", 1 },
	{ "unitWhitelist", &class_boolean, offsetof(mindustry_game_Rules, F_unitWhitelist), "Z", 1 },
	{ "dropZoneRadius", &class_float, offsetof(mindustry_game_Rules, F_dropZoneRadius), "F", 1 },
	{ "waveSpacing", &class_float, offsetof(mindustry_game_Rules, F_waveSpacing), "F", 1 },
	{ "initialWaveSpacing", &class_float, offsetof(mindustry_game_Rules, F_initialWaveSpacing), "F", 1 },
	{ "winWave", &class_int, offsetof(mindustry_game_Rules, F_winWave), "I", 1 },
	{ "unitCap", &class_int, offsetof(mindustry_game_Rules, F_unitCap), "I", 1 },
	{ "disableUnitCap", &class_boolean, offsetof(mindustry_game_Rules, F_disableUnitCap), "Z", 1 },
	{ "dragMultiplier", &class_float, offsetof(mindustry_game_Rules, F_dragMultiplier), "F", 1 },
	{ "env", &class_int, offsetof(mindustry_game_Rules, F_env), "I", 1 },
	{ "attributes", &class_mindustry_world_blocks_Attributes, offsetof(mindustry_game_Rules, F_attributes), "Lmindustry/world/blocks/Attributes;", 1 },
	{ "sector", &class_mindustry_type_Sector, offsetof(mindustry_game_Rules, F_sector), "Lmindustry/type/Sector;", 1 },
	{ "ambientMusic", &class_arc_struct_Seq, offsetof(mindustry_game_Rules, F_ambientMusic), "Larc/struct/Seq;", 1 },
	{ "darkMusic", &class_arc_struct_Seq, offsetof(mindustry_game_Rules, F_darkMusic), "Larc/struct/Seq;", 1 },
	{ "alwaysPlayMusic", &class_boolean, offsetof(mindustry_game_Rules, F_alwaysPlayMusic), "Z", 1 },
	{ "disableMusic", &class_boolean, offsetof(mindustry_game_Rules, F_disableMusic), "Z", 1 },
	{ "musicVolume", &class_float, offsetof(mindustry_game_Rules, F_musicVolume), "F", 1 },
	{ "spawns", &class_arc_struct_Seq, offsetof(mindustry_game_Rules, F_spawns), "Larc/struct/Seq;", 1 },
	{ "loadout", &class_arc_struct_Seq, offsetof(mindustry_game_Rules, F_loadout), "Larc/struct/Seq;", 1 },
	{ "weather", &class_arc_struct_Seq, offsetof(mindustry_game_Rules, F_weather), "Larc/struct/Seq;", 1 },
	{ "blockLimits", &class_arc_struct_ObjectIntMap, offsetof(mindustry_game_Rules, F_blockLimits), "Larc/struct/ObjectIntMap;", 1 },
	{ "bannedBlocks", &class_arc_struct_ObjectSet, offsetof(mindustry_game_Rules, F_bannedBlocks), "Larc/struct/ObjectSet;", 1 },
	{ "bannedUnits", &class_arc_struct_ObjectSet, offsetof(mindustry_game_Rules, F_bannedUnits), "Larc/struct/ObjectSet;", 1 },
	{ "revealedBlocks", &class_arc_struct_ObjectSet, offsetof(mindustry_game_Rules, F_revealedBlocks), "Larc/struct/ObjectSet;", 1 },
	{ "researched", &class_arc_struct_ObjectSet, offsetof(mindustry_game_Rules, F_researched), "Larc/struct/ObjectSet;", 1 },
	{ "objectives", &class_mindustry_game_MapObjectives, offsetof(mindustry_game_Rules, F_objectives), "Lmindustry/game/MapObjectives;", 1 },
	{ "objectiveFlags", &class_arc_struct_ObjectSet, offsetof(mindustry_game_Rules, F_objectiveFlags), "Larc/struct/ObjectSet;", 1 },
	{ "fog", &class_boolean, offsetof(mindustry_game_Rules, F_fog), "Z", 1 },
	{ "staticFog", &class_boolean, offsetof(mindustry_game_Rules, F_staticFog), "Z", 1 },
	{ "staticColor", &class_arc_graphics_Color, offsetof(mindustry_game_Rules, F_staticColor), "Larc/graphics/Color;", 1 },
	{ "dynamicColor", &class_arc_graphics_Color, offsetof(mindustry_game_Rules, F_dynamicColor), "Larc/graphics/Color;", 1 },
	{ "lighting", &class_boolean, offsetof(mindustry_game_Rules, F_lighting), "Z", 1 },
	{ "ambientLight", &class_arc_graphics_Color, offsetof(mindustry_game_Rules, F_ambientLight), "Larc/graphics/Color;", 1 },
	{ "unitLight", &class_boolean, offsetof(mindustry_game_Rules, F_unitLight), "Z", 1 },
	{ "defaultTeam", &class_mindustry_game_Team, offsetof(mindustry_game_Rules, F_defaultTeam), "Lmindustry/game/Team;", 1 },
	{ "waveTeam", &class_mindustry_game_Team, offsetof(mindustry_game_Rules, F_waveTeam), "Lmindustry/game/Team;", 1 },
	{ "cloudColor", &class_arc_graphics_Color, offsetof(mindustry_game_Rules, F_cloudColor), "Larc/graphics/Color;", 1 },
	{ "modeName", &class_java_lang_String, offsetof(mindustry_game_Rules, F_modeName), "Ljava/lang/String;", 1 },
	{ "mission", &class_java_lang_String, offsetof(mindustry_game_Rules, F_mission), "Ljava/lang/String;", 1 },
	{ "coreIncinerates", &class_boolean, offsetof(mindustry_game_Rules, F_coreIncinerates), "Z", 1 },
	{ "borderDarkness", &class_boolean, offsetof(mindustry_game_Rules, F_borderDarkness), "Z", 1 },
	{ "limitMapArea", &class_boolean, offsetof(mindustry_game_Rules, F_limitMapArea), "Z", 1 },
	{ "limitX", &class_int, offsetof(mindustry_game_Rules, F_limitX), "I", 1 },
	{ "limitY", &class_int, offsetof(mindustry_game_Rules, F_limitY), "I", 1 },
	{ "limitWidth", &class_int, offsetof(mindustry_game_Rules, F_limitWidth), "I", 1 },
	{ "limitHeight", &class_int, offsetof(mindustry_game_Rules, F_limitHeight), "I", 1 },
	{ "disableOutsideArea", &class_boolean, offsetof(mindustry_game_Rules, F_disableOutsideArea), "Z", 1 },
	{ "tags", &class_arc_struct_StringMap, offsetof(mindustry_game_Rules, F_tags), "Larc/struct/StringMap;", 1 },
	{ "customBackgroundCallback", &class_java_lang_String, offsetof(mindustry_game_Rules, F_customBackgroundCallback), "Ljava/lang/String;", 1 },
	{ "backgroundTexture", &class_java_lang_String, offsetof(mindustry_game_Rules, F_backgroundTexture), "Ljava/lang/String;", 1 },
	{ "backgroundSpeed", &class_float, offsetof(mindustry_game_Rules, F_backgroundSpeed), "F", 1 },
	{ "backgroundScl", &class_float, offsetof(mindustry_game_Rules, F_backgroundScl), "F", 1 },
	{ "backgroundOffsetX", &class_float, offsetof(mindustry_game_Rules, F_backgroundOffsetX), "F", 1 },
	{ "backgroundOffsetY", &class_float, offsetof(mindustry_game_Rules, F_backgroundOffsetY), "F", 1 },
	{ "planetBackground", &class_mindustry_graphics_g3d_PlanetParams, offsetof(mindustry_game_Rules, F_planetBackground), "Lmindustry/graphics/g3d/PlanetParams;", 1 },
	{ "planet", &class_mindustry_type_Planet, offsetof(mindustry_game_Rules, F_planet), "Lmindustry/type/Planet;", 1 },
	{ "allowLogicData", &class_boolean, offsetof(mindustry_game_Rules, F_allowLogicData), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Rules, 0, "()V", 1 },
	{ "copy", (intptr_t) M_mindustry_game_Rules_copy_R_mindustry_game_Rules, VTABLE_mindustry_game_Rules_copy_R_mindustry_game_Rules, "()Lmindustry/game/Rules;", 1 },
	{ "retainContentFields", (intptr_t) M_mindustry_game_Rules_retainContentFields_mindustry_game_Rules, VTABLE_mindustry_game_Rules_retainContentFields_mindustry_game_Rules, "(Lmindustry/game/Rules;)V", 1 },
	{ "mode", (intptr_t) M_mindustry_game_Rules_mode_R_mindustry_game_Gamemode, VTABLE_mindustry_game_Rules_mode_R_mindustry_game_Gamemode, "()Lmindustry/game/Gamemode;", 1 },
	{ "hasEnv", (intptr_t) M_mindustry_game_Rules_hasEnv_int_R_boolean, VTABLE_mindustry_game_Rules_hasEnv_int_R_boolean, "(I)Z", 1 },
	{ "buildRadius", (intptr_t) M_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_buildRadius_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "unitBuildSpeed", (intptr_t) M_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_unitBuildSpeed_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "unitCost", (intptr_t) M_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_unitCost_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "unitDamage", (intptr_t) M_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_unitDamage_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "unitHealth", (intptr_t) M_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_unitHealth_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "unitCrashDamage", (intptr_t) M_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_unitCrashDamage_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "unitMineSpeed", (intptr_t) M_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_unitMineSpeed_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "blockHealth", (intptr_t) M_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_blockHealth_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "blockDamage", (intptr_t) M_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_blockDamage_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "buildSpeed", (intptr_t) M_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_buildSpeed_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "isBanned", (intptr_t) M_mindustry_game_Rules_isBanned_mindustry_world_Block_R_boolean, VTABLE_mindustry_game_Rules_isBanned_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 1 },
	{ "isBanned", (intptr_t) M_mindustry_game_Rules_isBanned_mindustry_type_UnitType_R_boolean, VTABLE_mindustry_game_Rules_isBanned_mindustry_type_UnitType_R_boolean, "(Lmindustry/type/UnitType;)Z", 1 },
	{ "unitActivationDelay", (intptr_t) M_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float, VTABLE_mindustry_game_Rules_unitActivationDelay_mindustry_game_Team_R_float, "(Lmindustry/game/Team;)F", 1 },
	{ "isInfiniteResources", (intptr_t) M_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean, VTABLE_mindustry_game_Rules_isInfiniteResources_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "lambda$retainContentFields$0", (intptr_t) SM_mindustry_game_Rules_lambda$retainContentFields$0_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/type/ItemStack;)Z", 4106 },
};

Class class_mindustry_game_Rules{
		.nativeName = (intptr_t) "mindustry/game/Rules",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Rules),
		.classVtable = (intptr_t) vtable_mindustry_game_Rules,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Rules,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_Rules,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 118,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Rules = registerClass(&class_mindustry_game_Rules);

}
