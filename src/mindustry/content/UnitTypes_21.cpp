#include "mindustry/content/UnitTypes_21.h"
#include "mindustry/content/UnitTypes_21.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/type/UnitType.h"

extern "C" {


void mark_mindustry_content_UnitTypes$21(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_type_UnitType(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$21 *) object;
}

void clinit_mindustry_content_UnitTypes$21(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_UnitType(ctx);
}

void init_mindustry_content_UnitTypes$21_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$21:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$21(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1345);
	init_mindustry_type_UnitType_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1346);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_mineCommand;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_defaultCommand = (jref) sp[1].o;
	LINE_NUMBER(1348);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying = (jint(1));
	LINE_NUMBER(1349);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(0.06f));
	LINE_NUMBER(1350);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_accel = (jfloat(0.12f));
	LINE_NUMBER(1351);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(1.5f));
	LINE_NUMBER(1352);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(100.0f));
	LINE_NUMBER(1353);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineSize = (jfloat(1.8f));
	LINE_NUMBER(1354);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineOffset = (jfloat(5.7f));
	LINE_NUMBER(1355);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(50.0f));
	LINE_NUMBER(1356);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_isEnemy = (jint(0));
	LINE_NUMBER(1357);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_controlSelectGlobal = (jint(0));
	LINE_NUMBER(1358);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = jfloat(0.7f);
	((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_deathSoundVolume = temp0;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckSoundVolume = temp0;
	LINE_NUMBER(1360);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineTier = (jint(1));
	LINE_NUMBER(1361);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineSpeed = (jfloat(2.5f));
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$21[] {
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
	(void *) M_mindustry_type_UnitType_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_type_UnitType_init,
	(void *) M_mindustry_type_UnitType_postInit,
	(void *) M_mindustry_type_UnitType_afterPatch,
	(void *) M_mindustry_type_UnitType_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_type_UnitType_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_type_UnitType_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_UnitType_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_type_UnitType_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_type_UnitType_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_type_UnitType_isHidden_R_boolean,
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
	(void *) M_mindustry_type_UnitType_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_type_UnitType_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController,
	(void *) M_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_arc_math_geom_Position_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_hasWeapons_R_boolean,
	(void *) M_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq,
	(void *) M_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean,
	(void *) M_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean,
	(void *) M_mindustry_type_UnitType_update_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_type_UnitType_killed_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_landed_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_UnitType_supportsEnv_int_R_boolean,
	(void *) M_mindustry_type_UnitType_checkEntityMapping_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_initPathType,
	(void *) M_mindustry_type_UnitType_estimateDps_R_float,
	(void *) M_mindustry_type_UnitType_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_type_UnitType_needsBodyOutline_R_boolean,
	(void *) M_mindustry_type_UnitType_beforeParse,
	(void *) M_mindustry_type_UnitType_getBuildTime_R_float,
	(void *) M_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_type_UnitType_getFirstRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_type_UnitType_setEnginesMirror_Array1_mindustry_type_UnitType$UnitEngine,
	(void *) M_mindustry_type_UnitType_draw_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color,
	(void *) M_mindustry_type_UnitType_drawMining_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float,
	(void *) M_mindustry_type_UnitType_drawPayload_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawShield_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float,
	(void *) M_mindustry_type_UnitType_drawSoftShadow_float_float_float_float,
	(void *) M_mindustry_type_UnitType_drawItems_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawTrail_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawEngines_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawWeapons_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawWeaponOutlines_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawOutline_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawBody_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawCell_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color,
	(void *) M_mindustry_type_UnitType_drawLight_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawTank_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawLegs_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawCrawl_mindustry_gen_Crawlc,
	(void *) M_mindustry_type_UnitType_drawMech_mindustry_gen_Mechc,
	(void *) M_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_applyColor_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$9_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$7_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$8_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$6_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$4_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$5_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$3_Array1_mindustry_type_UnitType_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$0_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$1_Array1_mindustry_type_UnitType_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$init$2_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_type_UnitType_lambda$setStats$2_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$setStats$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_UnitType_lambda$display$1_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_UnitType_lambda$display$2_mindustry_gen_Payloadc_R_float,
	(void *) M_mindustry_type_UnitType_lambda$display$0_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_UnitType_lambda$new$1_mindustry_gen_Unit_R_mindustry_entities_units_UnitController,
	(void *) M_mindustry_type_UnitType_lambda$new$0_R_mindustry_entities_units_UnitController,
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
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "createController", "(Lmindustry/gen/Unit;)Lmindustry/entities/units/UnitController;" },
	{ "create", "(Lmindustry/game/Team;)Lmindustry/gen/Unit;" },
	{ "spawn", "(Lmindustry/game/Team;FFFLarc/func/Cons;)Lmindustry/gen/Unit;" },
	{ "spawn", "(Lmindustry/game/Team;FFF)Lmindustry/gen/Unit;" },
	{ "spawn", "(Lmindustry/game/Team;FF)Lmindustry/gen/Unit;" },
	{ "spawn", "(FF)Lmindustry/gen/Unit;" },
	{ "spawn", "(Lmindustry/game/Team;Larc/math/geom/Position;)Lmindustry/gen/Unit;" },
	{ "spawn", "(Larc/math/geom/Position;)Lmindustry/gen/Unit;" },
	{ "spawn", "(Larc/math/geom/Position;Lmindustry/game/Team;)Lmindustry/gen/Unit;" },
	{ "hasWeapons", "()Z" },
	{ "targetable", "(Lmindustry/gen/Unit;Lmindustry/game/Team;)Z" },
	{ "killable", "(Lmindustry/gen/Unit;)Z" },
	{ "hittable", "(Lmindustry/gen/Unit;)Z" },
	{ "getUnitStances", "(Lmindustry/gen/Unit;Larc/struct/Seq;)V" },
	{ "allowStance", "(Lmindustry/gen/Unit;Lmindustry/ai/UnitStance;)Z" },
	{ "allowCommand", "(Lmindustry/gen/Unit;Lmindustry/ai/UnitCommand;)Z" },
	{ "update", "(Lmindustry/gen/Unit;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "killed", "(Lmindustry/gen/Unit;)V" },
	{ "landed", "(Lmindustry/gen/Unit;)V" },
	{ "display", "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V" },
	{ "supportsEnv", "(I)Z" },
	{ "checkEntityMapping", "(Lmindustry/gen/Unit;)V" },
	{ "initPathType", "()V" },
	{ "estimateDps", "()F" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "needsBodyOutline", "()Z" },
	{ "beforeParse", "()V" },
	{ "getBuildTime", "()F" },
	{ "getTotalRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "getRequirements", "([Lmindustry/type/UnitType;[F)[Lmindustry/type/ItemStack;" },
	{ "getFirstRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "setEnginesMirror", "([Lmindustry/type/UnitType$UnitEngine;)V" },
	{ "draw", "(Lmindustry/gen/Unit;)V" },
	{ "shieldColor", "(Lmindustry/gen/Unit;)Larc/graphics/Color;" },
	{ "drawMining", "(Lmindustry/gen/Unit;)V" },
	{ "drawMiningBeam", "(Lmindustry/gen/Unit;FF)V" },
	{ "drawPayload", "(Lmindustry/gen/Unit;)V" },
	{ "drawShield", "(Lmindustry/gen/Unit;)V" },
	{ "drawShadow", "(Lmindustry/gen/Unit;)V" },
	{ "drawSoftShadow", "(Lmindustry/gen/Unit;)V" },
	{ "drawSoftShadow", "(Lmindustry/gen/Unit;F)V" },
	{ "drawSoftShadow", "(FFFF)V" },
	{ "drawItems", "(Lmindustry/gen/Unit;)V" },
	{ "drawTrail", "(Lmindustry/gen/Unit;)V" },
	{ "drawEngines", "(Lmindustry/gen/Unit;)V" },
	{ "drawWeapons", "(Lmindustry/gen/Unit;)V" },
	{ "drawWeaponOutlines", "(Lmindustry/gen/Unit;)V" },
	{ "drawOutline", "(Lmindustry/gen/Unit;)V" },
	{ "drawBody", "(Lmindustry/gen/Unit;)V" },
	{ "drawCell", "(Lmindustry/gen/Unit;)V" },
	{ "cellColor", "(Lmindustry/gen/Unit;)Larc/graphics/Color;" },
	{ "drawLight", "(Lmindustry/gen/Unit;)V" },
	{ "drawTank", "(Lmindustry/gen/Unit;)V" },
	{ "drawLegs", "(Lmindustry/gen/Unit;)V" },
	{ "drawCrawl", "(Lmindustry/gen/Crawlc;)V" },
	{ "drawMech", "(Lmindustry/gen/Mechc;)V" },
	{ "applyOutlineColor", "(Lmindustry/gen/Unit;)V" },
	{ "applyColor", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$getRequirements$9", "(Lmindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan;)Z" },
	{ "lambda$getRequirements$7", "(Lmindustry/world/Block;)Z" },
	{ "lambda$getRequirements$8", "(Lmindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan;)Z" },
	{ "lambda$getRequirements$6", "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)Z" },
	{ "lambda$getRequirements$4", "(Lmindustry/world/Block;)Z" },
	{ "lambda$getRequirements$5", "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)Z" },
	{ "lambda$getRequirements$3", "([Lmindustry/type/UnitType;)Z" },
	{ "lambda$getRequirements$0", "(Lmindustry/world/Block;)Z" },
	{ "lambda$getRequirements$1", "([Lmindustry/type/UnitType;)Z" },
	{ "lambda$init$2", "(Lmindustry/entities/Effect$EffectContainer;)V" },
	{ "lambda$setStats$2", "(Lmindustry/world/Block;)Z" },
	{ "lambda$setStats$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$1", "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$2", "(Lmindustry/gen/Payloadc;)F" },
	{ "lambda$display$0", "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$1", "(Lmindustry/gen/Unit;)Lmindustry/entities/units/UnitController;" },
	{ "lambda$new$0", "()Lmindustry/entities/units/UnitController;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$21_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
};

Class class_mindustry_content_UnitTypes$21{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$21",
		.parentClass = (intptr_t) &class_mindustry_type_UnitType,
		.size = sizeof(mindustry_content_UnitTypes$21),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$21,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$21,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$21,
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
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 133,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$21 = registerClass(&class_mindustry_content_UnitTypes$21);

}

