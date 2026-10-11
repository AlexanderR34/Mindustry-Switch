#include "mindustry/content/Planets_5.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "arc/math/geom/Mat3D.h"
#include "mindustry/graphics/g3d/MultiMesh.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "arc/math/geom/Vec3.h"
#include "mindustry/graphics/g3d/MatMesh.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/content/Planets_5.h"
#include "mindustry/graphics/g3d/NoiseMesh.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/content/Planets_5_invoke_arc_func_Prov_1.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/maps/planet/AsteroidGenerator.h"
#include "mindustry/graphics/g3d/GenericMesh.h"
#include "mindustry/type/Sector.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "java/lang/Class.h"

extern "C" {


void mark_mindustry_content_Planets$5(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_Planets$5 *) object;
	if (self->F_val$cgen)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$cgen)->clazz)->markFunction)((jobject) self->F_val$cgen, mark, depth + 1);
	if (self->F_val$tint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$tint)->clazz)->markFunction)((jobject) self->F_val$tint, mark, depth + 1);
	if (self->F_val$base)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$base)->clazz)->markFunction)((jobject) self->F_val$base, mark, depth + 1);
}

void clinit_mindustry_content_Planets$5(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_Planet(ctx);
}

void init_mindustry_content_Planets$5_java_lang_String_mindustry_type_Planet_float_float_arc_func_Cons_mindustry_world_Block_mindustry_world_Block_int_float_int(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jfloat param3, jobject param4, jobject param5, jobject param6, jint param7, jfloat param8, jint param9) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets$5:<init>", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Planets$5(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].i = param7;
	frame[9].f = param8;
	frame[10].i = param9;
	{
	LINE_NUMBER(173);
	((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$scale = (frame[4].f);
	((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$cgen = (jref) (frame[5].o);
	((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$tint = (jref) (frame[6].o);
	((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$base = (jref) (frame[7].o);
	((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$seed = (frame[8].i);
	((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$tintThresh = (frame[9].f);
	((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$pieces = (frame[10].i);
	init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f));
	LINE_NUMBER(174);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_hasAtmosphere = (jint(0));
	LINE_NUMBER(175);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_updateLighting = (jint(0));
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	clinit_mindustry_type_Sector(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_Sector);
	sp[2].o = frame[0].o;
	clinit_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid$Ptile_empty;
	init_mindustry_type_Sector_mindustry_type_Planet_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(177);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_camRadius = ((jfloat(0.68f)) * ((jfloat)((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$scale));
	LINE_NUMBER(178);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_minZoom = (jfloat(0.6f));
	LINE_NUMBER(179);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_drawOrbit = (jint(0));
	LINE_NUMBER(180);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_accessible = (jint(0));
	LINE_NUMBER(181);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_clipRadius = (jfloat(2));
	LINE_NUMBER(182);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_defaultEnv = (jint(2));
	LINE_NUMBER(183);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (((jobject) createStringLiteral(ctx, u8"commandRally"_j)));
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	clinit_mindustry_maps_planet_AsteroidGenerator(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_planet_AsteroidGenerator);
	init_mindustry_maps_planet_AsteroidGenerator(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_generator = (jref) sp[1].o;
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$cgen;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_generator;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_maps_planet_AsteroidGenerator, sp[1].o)));
	LINE_NUMBER(187);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$tint;
	sp[3].o = (jobject)((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$base;
	{ /* InvokeDynamic */
		clinit_mindustry_content_Planets$5_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_content_Planets$5_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_content_Planets$5_invoke_arc_func_Prov_1);
		proxy->F_field6 = ((jfloat)((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$scale);
		proxy->F_field5 = ((jint)((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$pieces);
		proxy->F_field4 = ((jfloat)((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$tintThresh);
		proxy->F_field3 = ((jint)((mindustry_content_Planets$5 *) NULL_CHECK((frame[0].o)))->F_val$seed);
		proxy->F_field2 = (jref) sp[3].o;
		proxy->F_field1 = (jref) sp[2].o;
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_meshLoader = (jref) sp[1].o;
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_content_Planets$5_lambda$new$0_mindustry_world_Block_mindustry_world_Block_int_float_int_float_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jfloat param3, jint param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[31];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Planets$5:lambda$new$0", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].i = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_mapColor;
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_iconColor = (jref) sp[1].o;
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_mapColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	jfloat temp0 = jfloat(1);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_mapColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (temp0 - ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(190);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_mapColor;
	frame[9].o = sp[0].o;
	LINE_NUMBER(192);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand_long(ctx, sp[0].o, (jlong((((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id) + (jint(2))))));
	frame[10].o = sp[0].o;
	LINE_NUMBER(194);
	sp[0].o = frame[8].o;
	clinit_mindustry_graphics_g3d_NoiseMesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_NoiseMesh);
	init_mindustry_graphics_g3d_NoiseMesh_mindustry_type_Planet_int_int_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color_int_float_float_float(ctx, sp[1].o, (frame[0].o), (frame[3].i), (jint(2)), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius), (jint(2)), (jfloat(0.55f)), (jfloat(0.45f)), (jfloat(14.0f)), (frame[9].o), (frame[7].o), (jint(3)), (jfloat(0.6f)), (jfloat(0.38f)), (frame[4].f));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(199);
	frame[11].i = (jint(0));
	}
label_7:;
	{
	if ((frame[11].i) >= (frame[5].i)) goto label_8;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = frame[8].o;
	clinit_mindustry_graphics_g3d_MatMesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_MatMesh);
	clinit_mindustry_graphics_g3d_NoiseMesh(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_NoiseMesh);
	sp[3].o = frame[0].o;
	jint temp0 = ((frame[3].i) + (frame[11].i)) + (jint(1));
	jint temp1 = jint(1);
	jfloat temp2 = jfloat(0.022f);
	sp[4].o = frame[10].o;
	jfloat temp3 = jfloat(0.039f);
	LINE_NUMBER(201);
	jfloat temp4 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[4].o, temp3);
	init_mindustry_graphics_g3d_NoiseMesh_mindustry_type_Planet_int_int_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color_int_float_float_float(ctx, sp[2].o, sp[3].o, temp0, temp1, (temp2 + (temp4 * (frame[6].f))), (jint(2)), (jfloat(0.6f)), (jfloat(0.38f)), (jfloat(20.0f)), (frame[9].o), (frame[7].o), (jint(3)), (jfloat(0.6f)), (jfloat(0.38f)), (frame[4].f));
	clinit_arc_math_geom_Mat3D(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[3].o);
	clinit_arc_util_Tmp(ctx);
	sp[4].o = (jobject)SF_arc_util_Tmp_v31;
	sp[5].o = frame[10].o;
	LINE_NUMBER(203);
	sp[4].o = (jobject)((func_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_math_geom_Vec3_setToRandomDirection_arc_math_Rand_R_arc_math_geom_Vec3])(ctx, sp[4].o, sp[5].o);
	jfloat temp5 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, (frame[10].o), (jfloat(0.44f)), (jfloat(1.4f)));
	sp[4].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[4].o, (temp5 * (frame[6].f)));
	sp[3].o = (jobject)((func_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[3].o, sp[4].o);
	init_mindustry_graphics_g3d_MatMesh_mindustry_graphics_g3d_GenericMesh_arc_math_geom_Mat3D(ctx, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(199);
	INST_IINC(11, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(207);
	clinit_mindustry_graphics_g3d_MultiMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_MultiMesh);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, (frame[8].o), (((jobject) &class_mindustry_graphics_g3d_GenericMesh)));
	init_mindustry_graphics_g3d_MultiMesh_Array1_mindustry_graphics_g3d_GenericMesh(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_graphics_g3d_GenericMesh, 1), sp[1].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Planets$5[] {
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
	(void *) M_mindustry_type_Planet_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_content_Planets$5_lambda$new$0_mindustry_world_Block_mindustry_world_Block_int_float_int_float_R_mindustry_graphics_g3d_GenericMesh,
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
	{ "lambda$new$0", "(Lmindustry/world/Block;Lmindustry/world/Block;IFIF)Lmindustry/graphics/g3d/GenericMesh;" },
};

static FieldMetadata fields[] {
	{ "val$scale", &class_float, offsetof(mindustry_content_Planets$5, F_val$scale), "F", 4112 },
	{ "val$cgen", &class_arc_func_Cons, offsetof(mindustry_content_Planets$5, F_val$cgen), "Larc/func/Cons;", 4112 },
	{ "val$tint", &class_mindustry_world_Block, offsetof(mindustry_content_Planets$5, F_val$tint), "Lmindustry/world/Block;", 4112 },
	{ "val$base", &class_mindustry_world_Block, offsetof(mindustry_content_Planets$5, F_val$base), "Lmindustry/world/Block;", 4112 },
	{ "val$seed", &class_int, offsetof(mindustry_content_Planets$5, F_val$seed), "I", 4112 },
	{ "val$tintThresh", &class_float, offsetof(mindustry_content_Planets$5, F_val$tintThresh), "F", 4112 },
	{ "val$pieces", &class_int, offsetof(mindustry_content_Planets$5, F_val$pieces), "I", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Planets$5_java_lang_String_mindustry_type_Planet_float_float_arc_func_Cons_mindustry_world_Block_mindustry_world_Block_int_float_int, 0, "(Ljava/lang/String;Lmindustry/type/Planet;FFLarc/func/Cons;Lmindustry/world/Block;Lmindustry/world/Block;IFI)V", 0 },
	{ "lambda$new$0", (intptr_t) M_mindustry_content_Planets$5_lambda$new$0_mindustry_world_Block_mindustry_world_Block_int_float_int_float_R_mindustry_graphics_g3d_GenericMesh, VTABLE_mindustry_content_Planets$5_lambda$new$0_mindustry_world_Block_mindustry_world_Block_int_float_int_float_R_mindustry_graphics_g3d_GenericMesh, "(Lmindustry/world/Block;Lmindustry/world/Block;IFIF)Lmindustry/graphics/g3d/GenericMesh;", 4098 },
};

Class class_mindustry_content_Planets$5{
		.nativeName = (intptr_t) "mindustry/content/Planets$5",
		.parentClass = (intptr_t) &class_mindustry_type_Planet,
		.size = sizeof(mindustry_content_Planets$5),
		.classVtable = (intptr_t) vtable_mindustry_content_Planets$5,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Planets$5,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Planets$5,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 104,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Planets$5 = registerClass(&class_mindustry_content_Planets$5);

}

