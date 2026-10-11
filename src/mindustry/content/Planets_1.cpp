#include "mindustry/content/Planets_1.h"
#include "arc/func/Prov.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Planets_1_invoke_arc_func_Prov_1.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/content/Planets_1.h"
#include "mindustry/graphics/g3d/SunMesh.h"
#include "mindustry/graphics/g3d/GenericMesh.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_content_Planets$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Planets$1 *) object;
}

void clinit_mindustry_content_Planets$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Planet(ctx);
}

void init_mindustry_content_Planets$1_java_lang_String_mindustry_type_Planet_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets$1:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Planets$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(29);
	init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f));
	LINE_NUMBER(30);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_bloom = (jint(1));
	LINE_NUMBER(31);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_accessible = (jint(0));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_Planets$1_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_content_Planets$1_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_content_Planets$1_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_meshLoader = (jref) sp[1].o;
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_content_Planets$1_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets$1:lambda$new$0", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	clinit_mindustry_graphics_g3d_SunMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_SunMesh);
	sp[1].o = frame[0].o;
	jint temp0 = jint(4);
	jdouble temp1 = jdouble(5.0);
	jdouble temp2 = jdouble(0.3);
	jdouble temp3 = jdouble(1.7);
	jdouble temp4 = jdouble(1.2);
	jdouble temp5 = jdouble(1);
	jfloat temp6 = jfloat(1.1f);
	sp[2].o = (jobject)createArray(ctx, &class_arc_graphics_Color, (6));
	jint temp7 = jint(0);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"ff7a38"_j));
	LINE_NUMBER(37);
	sp[3].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp7) = sp[3].o;
	jint temp8 = jint(1);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"ff9638"_j));
	LINE_NUMBER(38);
	sp[3].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp8) = sp[3].o;
	jint temp9 = jint(2);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"ffc64c"_j));
	LINE_NUMBER(39);
	sp[3].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp9) = sp[3].o;
	jint temp10 = jint(3);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"ffc64c"_j));
	LINE_NUMBER(40);
	sp[3].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp10) = sp[3].o;
	jint temp11 = jint(4);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"ffe371"_j));
	LINE_NUMBER(41);
	sp[3].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp11) = sp[3].o;
	jint temp12 = jint(5);
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"f4ee8e"_j));
	LINE_NUMBER(42);
	sp[3].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp12) = sp[3].o;
	init_mindustry_graphics_g3d_SunMesh_mindustry_type_Planet_int_double_double_double_double_double_float_Array1_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, temp4, temp5, temp6, sp[2].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Planets$1[] {
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
	(void *) M_mindustry_content_Planets$1_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh,
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Planets$1_java_lang_String_mindustry_type_Planet_float, 0, "(Ljava/lang/String;Lmindustry/type/Planet;F)V", 0 },
	{ "lambda$new$0", (intptr_t) M_mindustry_content_Planets$1_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh, VTABLE_mindustry_content_Planets$1_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh, "()Lmindustry/graphics/g3d/GenericMesh;", 4098 },
};

Class class_mindustry_content_Planets$1{
		.nativeName = (intptr_t) "mindustry/content/Planets$1",
		.parentClass = (intptr_t) &class_mindustry_type_Planet,
		.size = sizeof(mindustry_content_Planets$1),
		.classVtable = (intptr_t) vtable_mindustry_content_Planets$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Planets$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Planets$1,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 103,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Planets$1 = registerClass(&class_mindustry_content_Planets$1);

}

