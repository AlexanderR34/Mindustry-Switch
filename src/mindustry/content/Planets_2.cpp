#include "mindustry/content/Planets_2.h"
#include "arc/func/Prov.h"
#include "mindustry/content/Planets_2_invoke_arc_func_Cons_1.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/game/Rules.h"
#include "mindustry/graphics/g3d/MultiMesh.h"
#include "mindustry/world/meta/Attribute.h"
#include "mindustry/content/Planets_2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/maps/planet/ErekirPlanetGenerator.h"
#include "arc/graphics/Color.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/graphics/g3d/HexSkyMesh.h"
#include "mindustry/content/Planets_2_invoke_arc_func_Prov_2.h"
#include "mindustry/content/Planets_2_invoke_arc_func_Prov_3.h"
#include "mindustry/graphics/g3d/GenericMesh.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/HexMesh.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_content_Planets$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_type_Planet(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_Planets$2 *) object;
}

void clinit_mindustry_content_Planets$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Planet(ctx);
}

void init_mindustry_content_Planets$2_java_lang_String_mindustry_type_Planet_float_int(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets$2:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Planets$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(46);
	init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f), (frame[4].i));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_planet_ErekirPlanetGenerator);
	init_mindustry_maps_planet_ErekirPlanetGenerator(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator = (jref) sp[1].o;
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_Planets$2_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_content_Planets$2_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_content_Planets$2_invoke_arc_func_Prov_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_meshLoader = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_Planets$2_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_content_Planets$2_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_content_Planets$2_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_cloudMeshLoader = (jref) sp[1].o;
	LINE_NUMBER(53);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_alwaysUnlocked = (jint(1));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ed6542"_j))));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_landCloudColor = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f07218"_j))));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_atmosphereColor = (jref) sp[1].o;
	LINE_NUMBER(56);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_defaultEnv = (17);
	LINE_NUMBER(57);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_startSector = (10);
	LINE_NUMBER(58);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_atmosphereRadIn = (jfloat(0.02f));
	LINE_NUMBER(59);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_atmosphereRadOut = (jfloat(0.3f));
	LINE_NUMBER(60);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_tidalLock = (jint(1));
	LINE_NUMBER(61);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_orbitSpacing = (jfloat(2));
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_totalRadius = (((jfloat)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_totalRadius) + (jfloat(2.6f)));
	LINE_NUMBER(63);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_lightSrcTo = (jfloat(0.5f));
	LINE_NUMBER(64);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_lightDstFrom = (jfloat(0.2f));
	LINE_NUMBER(65);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_clearSectorOnLose = (jint(1));
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreBastion;
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_defaultCore = (jref) sp[1].o;
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff9266"_j))));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_iconColor = (jref) sp[1].o;
	LINE_NUMBER(68);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_enemyBuildSpeedMultiplier = (jfloat(0.4f));
	LINE_NUMBER(69);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_allowLaunchToNumbered = (jint(0));
	LINE_NUMBER(70);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_updateLighting = (jint(0));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_defaultAttributes;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_heat;
	((func_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float])(ctx, sp[0].o, sp[1].o, (jfloat(0.8f)));
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_Planets$2_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_content_Planets$2_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_content_Planets$2_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_ruleSetter = (jref) sp[1].o;
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_campaignRuleDefaults;
	((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_fog = (jint(1));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_campaignRuleDefaults;
	((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_hideSpawns = (jint(0));
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_campaignRuleDefaults;
	((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_rtsAI = (jint(1));
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_unlockedOnLand;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreBastion;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Planets$2_lambda$new$2_mindustry_game_Rules(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets$2:lambda$new$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Planets$2(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_malis;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam = (jref) sp[1].o;
	LINE_NUMBER(76);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_placeRangeCheck = (jint(0));
	LINE_NUMBER(77);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_hideSpawns = (jint(0));
	LINE_NUMBER(78);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_fog = (jint(1));
	LINE_NUMBER(79);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_staticFog = (jint(1));
	LINE_NUMBER(80);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_lighting = (jint(0));
	LINE_NUMBER(81);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_coreDestroyClear = (jint(1));
	LINE_NUMBER(82);
	((mindustry_game_Rules *) NULL_CHECK((frame[0].o)))->F_onlyDepositCore = (jint(1));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_content_Planets$2_lambda$new$1_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets$2:lambda$new$1", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	clinit_mindustry_graphics_g3d_MultiMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_MultiMesh);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_GenericMesh, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_graphics_g3d_HexSkyMesh(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_HexSkyMesh);
	sp[3].o = frame[0].o;
	jint temp1 = jint(2);
	jfloat temp2 = jfloat(0.15f);
	jfloat temp3 = jfloat(0.14f);
	jint temp4 = jint(5);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"eba768"_j));
	LINE_NUMBER(50);
	sp[4].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[4].o);
	sp[4].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[4].o, (jfloat(0.75f)));
	init_mindustry_graphics_g3d_HexSkyMesh_mindustry_type_Planet_int_float_float_int_arc_graphics_Color_int_float_float_float(ctx, sp[2].o, sp[3].o, temp1, temp2, temp3, temp4, sp[4].o, (jint(2)), (jfloat(0.42f)), (jfloat(1)), (jfloat(0.43f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp5 = jint(1);
	clinit_mindustry_graphics_g3d_HexSkyMesh(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_HexSkyMesh);
	sp[3].o = frame[0].o;
	jint temp6 = jint(3);
	jfloat temp7 = jfloat(0.6f);
	jfloat temp8 = jfloat(0.15f);
	jint temp9 = jint(5);
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"eea293"_j));
	LINE_NUMBER(51);
	sp[4].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[4].o);
	sp[4].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[4].o, (jfloat(0.75f)));
	init_mindustry_graphics_g3d_HexSkyMesh_mindustry_type_Planet_int_float_float_int_arc_graphics_Color_int_float_float_float(ctx, sp[2].o, sp[3].o, temp6, temp7, temp8, temp9, sp[4].o, (jint(2)), (jfloat(0.42f)), (jfloat(1.2f)), (jfloat(0.45f)));
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	init_mindustry_graphics_g3d_MultiMesh_Array1_mindustry_graphics_g3d_GenericMesh(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_content_Planets$2_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets$2:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	clinit_mindustry_graphics_g3d_HexMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_HexMesh);
	init_mindustry_graphics_g3d_HexMesh_mindustry_type_Planet_int(ctx, sp[0].o, (frame[0].o), (jint(5)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Planets$2[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_Planet_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_type_Planet_removeContent,
	(void *) M_mindustry_type_Planet_init,
	(void *) M_mindustry_ctype_UnlockableContent_postInit,
	(void *) M_mindustry_ctype_UnlockableContent_afterPatch,
	(void *) M_mindustry_type_Planet_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_ctype_UnlockableContent_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_type_Planet_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_type_Planet_saveRules,
	(void *) M_mindustry_type_Planet_loadRules,
	(void *) M_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats,
	(void *) M_mindustry_type_Planet_loadStats,
	(void *) M_mindustry_type_Planet_saveStats,
	(void *) M_mindustry_type_Planet_clearStats,
	(void *) M_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector,
	(void *) M_mindustry_type_Planet_applyRules_mindustry_game_Rules,
	(void *) M_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean,
	(void *) M_mindustry_type_Planet_applyDefaultRules_mindustry_game_CampaignRules,
	(void *) M_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector,
	(void *) M_mindustry_type_Planet_setLastSector_mindustry_type_Sector,
	(void *) M_mindustry_type_Planet_preset_int_mindustry_type_SectorPreset,
	(void *) M_mindustry_type_Planet_hasGrid_R_boolean,
	(void *) M_mindustry_type_Planet_isLandable_R_boolean,
	(void *) M_mindustry_type_Planet_updateTotalRadius,
	(void *) M_mindustry_type_Planet_getLightNormal_R_arc_math_geom_Vec3,
	(void *) M_mindustry_type_Planet_getOrbitAngle_R_float,
	(void *) M_mindustry_type_Planet_getRotation_R_float,
	(void *) M_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_mindustry_type_Planet_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_mindustry_type_Planet_updateBaseCoverage,
	(void *) M_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D,
	(void *) M_mindustry_type_Planet_reloadMesh,
	(void *) M_mindustry_type_Planet_reloadMeshAsync,
	(void *) M_mindustry_type_Planet_getData_R_mindustry_type_Planet$PlanetData,
	(void *) M_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector,
	(void *) M_mindustry_type_Planet_getSector_arc_math_geom_Ray_R_mindustry_type_Sector,
	(void *) M_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector,
	(void *) M_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3,
	(void *) M_mindustry_type_Planet_visible_R_boolean,
	(void *) M_mindustry_type_Planet_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D,
	(void *) M_mindustry_type_Planet_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D,
	(void *) M_mindustry_type_Planet_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D,
	(void *) M_mindustry_type_Planet_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float,
	(void *) M_mindustry_type_Planet_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float,
	(void *) M_mindustry_type_Planet_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float,
	(void *) M_mindustry_type_Planet_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams,
	(void *) M_mindustry_type_Planet_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int,
	(void *) M_mindustry_type_Planet_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float,
	(void *) M_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_mindustry_type_Planet_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_mindustry_type_Planet_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D,
	(void *) M_mindustry_type_Planet_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean,
	(void *) M_mindustry_type_Planet_lambda$reloadMeshAsync$0,
	(void *) M_mindustry_type_Planet_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_type_Planet_lambda$loadRules$0_R_mindustry_game_CampaignRules,
	(void *) M_mindustry_type_Planet_lambda$new$2_R_arc_graphics_Mesh,
	(void *) M_mindustry_content_Planets$2_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_content_Planets$2_lambda$new$1_R_mindustry_graphics_g3d_GenericMesh,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "saveRules", "()V" },
	{ "loadRules", "()V" },
	{ "stats", "()Lmindustry/game/CampaignStats;" },
	{ "loadStats", "()V" },
	{ "saveStats", "()V" },
	{ "clearStats", "()V" },
	{ "getStartSector", "()Lmindustry/type/Sector;" },
	{ "applyRules", "(Lmindustry/game/Rules;)V" },
	{ "applyRules", "(Lmindustry/game/Rules;Z)V" },
	{ "applyDefaultRules", "(Lmindustry/game/CampaignRules;)V" },
	{ "getLastSector", "()Lmindustry/type/Sector;" },
	{ "setLastSector", "(Lmindustry/type/Sector;)V" },
	{ "preset", "(ILmindustry/type/SectorPreset;)V" },
	{ "hasGrid", "()Z" },
	{ "isLandable", "()Z" },
	{ "updateTotalRadius", "()V" },
	{ "getLightNormal", "()Larc/math/geom/Vec3;" },
	{ "getOrbitAngle", "()F" },
	{ "getRotation", "()F" },
	{ "addParentOffset", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getWorldPosition", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "updateBaseCoverage", "()V" },
	{ "getTransform", "(Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;" },
	{ "reloadMesh", "()V" },
	{ "reloadMeshAsync", "()V" },
	{ "getData", "()Lmindustry/type/Planet$PlanetData;" },
	{ "getSector", "(Lmindustry/graphics/g3d/PlanetGrid$Ptile;)Lmindustry/type/Sector;" },
	{ "getSector", "(Larc/math/geom/Ray;)Lmindustry/type/Sector;" },
	{ "getSector", "(Larc/math/geom/Ray;F)Lmindustry/type/Sector;" },
	{ "intersect", "(Larc/math/geom/Ray;F)Larc/math/geom/Vec3;" },
	{ "visible", "()Z" },
	{ "draw", "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V" },
	{ "drawAtmosphere", "(Larc/graphics/Mesh;Larc/graphics/g3d/Camera3D;)V" },
	{ "drawClouds", "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V" },
	{ "drawBorders", "(Larc/graphics/g3d/VertexBatch3D;Lmindustry/type/Sector;Larc/graphics/Color;F)V" },
	{ "fill", "(Larc/graphics/g3d/VertexBatch3D;Lmindustry/type/Sector;Larc/graphics/Color;F)V" },
	{ "drawSelection", "(Larc/graphics/g3d/VertexBatch3D;Lmindustry/type/Sector;Larc/graphics/Color;FF)V" },
	{ "renderSectors", "(Larc/graphics/g3d/VertexBatch3D;Larc/graphics/g3d/Camera3D;Lmindustry/graphics/g3d/PlanetParams;)V" },
	{ "drawArc", "(Larc/graphics/g3d/VertexBatch3D;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;Larc/graphics/Color;FFI)V" },
	{ "drawArcLine", "(Larc/graphics/g3d/VertexBatch3D;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;Larc/graphics/Color;FFIF)V" },
	{ "lookAt", "(Lmindustry/type/Sector;Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "project", "(Lmindustry/type/Sector;Larc/graphics/g3d/Camera3D;Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "setPlane", "(Lmindustry/type/Sector;Larc/graphics/g3d/PlaneBatch3D;)V" },
	{ "lambda$init$0", "(Lmindustry/content/TechTree$TechNode;)Z" },
	{ "lambda$reloadMeshAsync$0", "()V" },
	{ "lambda$reloadMeshAsync$1", "(Lmindustry/graphics/g3d/GenericMesh;)V" },
	{ "lambda$loadRules$0", "()Lmindustry/game/CampaignRules;" },
	{ "lambda$new$2", "()Larc/graphics/Mesh;" },
	{ "lambda$new$0", "()Lmindustry/graphics/g3d/GenericMesh;" },
	{ "lambda$new$1", "()Lmindustry/graphics/g3d/GenericMesh;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Planets$2_java_lang_String_mindustry_type_Planet_float_int, 0, "(Ljava/lang/String;Lmindustry/type/Planet;FI)V", 0 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_content_Planets$2_lambda$new$2_mindustry_game_Rules, 0, "(Lmindustry/game/Rules;)V", 4106 },
	{ "lambda$new$1", (intptr_t) M_mindustry_content_Planets$2_lambda$new$1_R_mindustry_graphics_g3d_GenericMesh, VTABLE_mindustry_content_Planets$2_lambda$new$1_R_mindustry_graphics_g3d_GenericMesh, "()Lmindustry/graphics/g3d/GenericMesh;", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_content_Planets$2_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh, VTABLE_mindustry_content_Planets$2_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh, "()Lmindustry/graphics/g3d/GenericMesh;", 4098 },
};

Class class_mindustry_content_Planets$2{
		.nativeName = (intptr_t) "mindustry/content/Planets$2",
		.parentClass = (intptr_t) &class_mindustry_type_Planet,
		.size = sizeof(mindustry_content_Planets$2),
		.classVtable = (intptr_t) vtable_mindustry_content_Planets$2,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Planets$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Planets$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 104,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Planets$2 = registerClass(&class_mindustry_content_Planets$2);

}

