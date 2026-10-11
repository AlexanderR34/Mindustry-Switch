#include "mindustry/type/Planet.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/math/geom/Vector.h"
#include "arc/math/Angles.h"
#include "arc/math/geom/Mat3D.h"
#include "mindustry/gen/Musics.h"
#include "mindustry/type/Planet_invoke_arc_func_Prov_6.h"
#include "mindustry/type/Planet_invoke_arc_func_Prov_5.h"
#include "java/util/concurrent/Future.h"
#include "arc/graphics/g3d/PlaneBatch3D.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/type/Planet_invoke_arc_func_Prov_8.h"
#include "mindustry/type/Planet_invoke_arc_func_Prov_7.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "mindustry/content/TechTree.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/math/geom/Ray.h"
#include "mindustry/graphics/g3d/PlanetRenderer.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "arc/Settings.h"
#include "arc/func/Boolf.h"
#include "arc/graphics/Blending.h"
#include "arc/math/Mathf.h"
#include "mindustry/type/Planet_PlanetData.h"
#include "arc/func/Floatf.h"
#include "mindustry/graphics/g3d/PlanetGrid_Corner.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/util/Iterator.h"
#include "arc/graphics/g3d/Camera3D.h"
#include "mindustry/graphics/Shaders.h"
#include "mindustry/graphics/g3d/GenericMesh.h"
#include "mindustry/type/Planet_invoke_java_lang_Runnable_2.h"
#include "arc/util/Time.h"
#include "mindustry/graphics/Shaders_PlanetGridShader.h"
#include "mindustry/type/Planet_invoke_java_lang_Runnable_3.h"
#include "arc/util/Nullable.h"
#include "arc/math/geom/Plane.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/PlanetGrid.h"
#include "arc/audio/Music.h"
#include "mindustry/game/Universe.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/graphics/g3d/MeshBuilder.h"
#include "arc/struct/ObjectMap.h"
#include "arc/graphics/Mesh.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/game/CampaignStats.h"
#include "mindustry/game/Rules.h"
#include "mindustry/core/FileTree.h"
#include "arc/files/Fi.h"
#include "mindustry/type/Planet_invoke_arc_func_Floatf_1.h"
#include "arc/math/geom/Vec3.h"
#include "arc/Application.h"
#include "arc/func/Cons.h"
#include "arc/math/geom/Bezier.h"
#include "arc/math/geom/Intersector3D.h"
#include "java/lang/String.h"
#include "mindustry/graphics/g3d/ShaderSphereMesh.h"
#include "mindustry/type/Planet_invoke_arc_func_Cons_1.h"
#include "java/lang/Math.h"
#include "mindustry/graphics/Shaders_AtmosphereShader.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/type/Sector.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet_invoke_arc_func_Prov_9.h"
#include "arc/graphics/g3d/VertexBatch3D.h"
#include "mindustry/type/Planet.h"
#include "mindustry/type/Planet_invoke_arc_func_Boolf_1.h"
#include "mindustry/graphics/g3d/PlanetRenderer_PlanetInterfaceRenderer.h"
#include "arc/graphics/Gl.h"
#include "java/lang/Class.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"
#include "mindustry/graphics/g3d/PlanetParams.h"

extern "C" {

jobject SF_mindustry_type_Planet_intersectResult;
jobject SF_mindustry_type_Planet_mat;
jobject SF_mindustry_type_Planet_points;
jobject SF_mindustry_type_Planet_tmpNormal;

void mark_mindustry_type_Planet(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_type_Planet_intersectResult)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Planet_intersectResult)->clazz)->markFunction)((jobject) SF_mindustry_type_Planet_intersectResult, mark, depth + 1);
		if (SF_mindustry_type_Planet_mat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Planet_mat)->clazz)->markFunction)((jobject) SF_mindustry_type_Planet_mat, mark, depth + 1);
		if (SF_mindustry_type_Planet_points)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Planet_points)->clazz)->markFunction)((jobject) SF_mindustry_type_Planet_points, mark, depth + 1);
		if (SF_mindustry_type_Planet_tmpNormal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Planet_tmpNormal)->clazz)->markFunction)((jobject) SF_mindustry_type_Planet_tmpNormal, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_UnlockableContent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_Planet *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_cloudMesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cloudMesh)->clazz)->markFunction)((jobject) self->F_cloudMesh, mark, depth + 1);
	if (self->F_gridMesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_gridMesh)->clazz)->markFunction)((jobject) self->F_gridMesh, mark, depth + 1);
	if (self->F_position)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_position)->clazz)->markFunction)((jobject) self->F_position, mark, depth + 1);
	if (self->F_grid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_grid)->clazz)->markFunction)((jobject) self->F_grid, mark, depth + 1);
	if (self->F_generator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_generator)->clazz)->markFunction)((jobject) self->F_generator, mark, depth + 1);
	if (self->F_sectors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sectors)->clazz)->markFunction)((jobject) self->F_sectors, mark, depth + 1);
	if (self->F_defaultAttributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultAttributes)->clazz)->markFunction)((jobject) self->F_defaultAttributes, mark, depth + 1);
	if (self->F_landCloudColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_landCloudColor)->clazz)->markFunction)((jobject) self->F_landCloudColor, mark, depth + 1);
	if (self->F_lightColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightColor)->clazz)->markFunction)((jobject) self->F_lightColor, mark, depth + 1);
	if (self->F_atmosphereColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_atmosphereColor)->clazz)->markFunction)((jobject) self->F_atmosphereColor, mark, depth + 1);
	if (self->F_iconColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iconColor)->clazz)->markFunction)((jobject) self->F_iconColor, mark, depth + 1);
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
	if (self->F_launchMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_launchMusic)->clazz)->markFunction)((jobject) self->F_launchMusic, mark, depth + 1);
	if (self->F_ambientMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ambientMusic)->clazz)->markFunction)((jobject) self->F_ambientMusic, mark, depth + 1);
	if (self->F_darkMusic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_darkMusic)->clazz)->markFunction)((jobject) self->F_darkMusic, mark, depth + 1);
	if (self->F_defaultCore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultCore)->clazz)->markFunction)((jobject) self->F_defaultCore, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_solarSystem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_solarSystem)->clazz)->markFunction)((jobject) self->F_solarSystem, mark, depth + 1);
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
	if (self->F_techTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_techTree)->clazz)->markFunction)((jobject) self->F_techTree, mark, depth + 1);
	if (self->F_launchCandidates)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_launchCandidates)->clazz)->markFunction)((jobject) self->F_launchCandidates, mark, depth + 1);
	if (self->F_unlockedOnLand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unlockedOnLand)->clazz)->markFunction)((jobject) self->F_unlockedOnLand, mark, depth + 1);
	if (self->F_meshLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meshLoader)->clazz)->markFunction)((jobject) self->F_meshLoader, mark, depth + 1);
	if (self->F_cloudMeshLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cloudMeshLoader)->clazz)->markFunction)((jobject) self->F_cloudMeshLoader, mark, depth + 1);
	if (self->F_gridMeshLoader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_gridMeshLoader)->clazz)->markFunction)((jobject) self->F_gridMeshLoader, mark, depth + 1);
	if (self->F_statParent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_statParent)->clazz)->markFunction)((jobject) self->F_statParent, mark, depth + 1);
	if (self->F_updateGroup)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updateGroup)->clazz)->markFunction)((jobject) self->F_updateGroup, mark, depth + 1);
	if (self->F_campaignRules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_campaignRules)->clazz)->markFunction)((jobject) self->F_campaignRules, mark, depth + 1);
	if (self->F_campaignRuleDefaults)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_campaignRuleDefaults)->clazz)->markFunction)((jobject) self->F_campaignRuleDefaults, mark, depth + 1);
	if (self->F_ruleSetter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ruleSetter)->clazz)->markFunction)((jobject) self->F_ruleSetter, mark, depth + 1);
	if (self->F_sectorCaptureReplacements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sectorCaptureReplacements)->clazz)->markFunction)((jobject) self->F_sectorCaptureReplacements, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
	if (self->F_campaignStats)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_campaignStats)->clazz)->markFunction)((jobject) self->F_campaignStats, mark, depth + 1);
}

void init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Planet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(198);
	init_mindustry_ctype_UnlockableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_position = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors = (jref) sp[1].o;
	LINE_NUMBER(55);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_orbitSpacing = (jfloat(12.0f));
	LINE_NUMBER(61);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_minZoom = (jfloat(0.5f));
	LINE_NUMBER(63);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_maxZoom = (jfloat(2));
	LINE_NUMBER(65);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_drawOrbit = (jint(1));
	LINE_NUMBER(67);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_atmosphereRadIn = (jfloat(0));
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_atmosphereRadOut = (jfloat(0.3f));
	LINE_NUMBER(69);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_clipRadius = (jfloat(-1.0f));
	LINE_NUMBER(77);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_rotateTime = (jfloat(1440.0f));
	LINE_NUMBER(83);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_tidalLock = (jint(0));
	LINE_NUMBER(85);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_accessible = (jint(1));
	LINE_NUMBER(87);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_defaultEnv = (233);
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_Attributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_Attributes);
	init_mindustry_world_blocks_Attributes(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_defaultAttributes = (jref) sp[1].o;
	LINE_NUMBER(91);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_updateLighting = (jint(1));
	LINE_NUMBER(93);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_lightSrcFrom = (jfloat(0));
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_lightSrcTo = (jfloat(0.8f));
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_lightDstFrom = (jfloat(0.2f));
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_lightDstTo = (jfloat(1));
	LINE_NUMBER(95);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_startSector = (jint(0));
	LINE_NUMBER(97);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectorSeed = (jint(-1));
	LINE_NUMBER(99);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_launchCapacityMultiplier = (jfloat(0.25f));
	LINE_NUMBER(101);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_bloom = (jint(0));
	LINE_NUMBER(103);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_visible = (jint(1));
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(0.5f)));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_landCloudColor = (jref) sp[1].o;
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float(ctx, sp[1].o, (jfloat(0.3f)), (jfloat(0.7f)), (jfloat(1)));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_atmosphereColor = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_iconColor = (jref) sp[1].o;
	LINE_NUMBER(113);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_hasAtmosphere = (jint(1));
	LINE_NUMBER(115);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_allowLaunchSchematics = (jint(0));
	LINE_NUMBER(117);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_allowLaunchLoadout = (jint(0));
	LINE_NUMBER(119);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_allowSectorInvasion = (jint(0));
	LINE_NUMBER(121);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_allowLegacyLaunchPads = (jint(0));
	LINE_NUMBER(123);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_clearSectorOnLose = (jint(0));
	LINE_NUMBER(125);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_enemyBuildSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(127);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_enemyFactoryActivationDelay = (jfloat(0));
	LINE_NUMBER(129);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_enemyInfiniteItems = (jint(1));
	LINE_NUMBER(131);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_enemyCoreSpawnReplace = (jint(0));
	LINE_NUMBER(133);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_prebuildBase = (jint(1));
	LINE_NUMBER(135);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_allowWaves = (jint(0));
	LINE_NUMBER(137);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_allowLaunchToNumbered = (jint(1));
	LINE_NUMBER(139);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_allowCampaignRules = (jint(0));
	LINE_NUMBER(141);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (((jobject) createStringLiteral(ctx, u8"planet"_j)));
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Musics(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Musics_launch;
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_launchMusic = (jref) sp[1].o;
	LINE_NUMBER(149);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_alwaysPlayMusic = (jint(0));
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreShard;
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_defaultCore = (jref) sp[1].o;
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_launchCandidates = (jref) sp[1].o;
	LINE_NUMBER(165);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_autoAssignPlanet = (jint(1));
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_unlockedOnLand = (jref) sp[1].o;
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Planet_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_type_Planet_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_type_Planet_invoke_arc_func_Prov_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_meshLoader = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Planet_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_type_Planet_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_type_Planet_invoke_arc_func_Prov_6);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_cloudMeshLoader = (jref) sp[1].o;
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Planet_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_type_Planet_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_type_Planet_invoke_arc_func_Prov_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_gridMeshLoader = (jref) sp[1].o;
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_updateGroup = (jref) sp[1].o;
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_CampaignRules(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_CampaignRules);
	init_mindustry_game_CampaignRules(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules = (jref) sp[1].o;
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_CampaignRules(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_CampaignRules);
	init_mindustry_game_CampaignRules(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRuleDefaults = (jref) sp[1].o;
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Planet_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_type_Planet_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_type_Planet_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_ruleSetter = (jref) sp[1].o;
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectorCaptureReplacements = (jref) sp[1].o;
	LINE_NUMBER(187);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_showRtsAIRule = (jint(0));
	LINE_NUMBER(190);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_loadPlanetData = (jint(0));
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_CampaignStats(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_CampaignStats);
	init_mindustry_game_CampaignStats(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignStats = (jref) sp[1].o;
	LINE_NUMBER(200);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius = (frame[3].f);
	LINE_NUMBER(201);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_parent = (jref) (frame[2].o);
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_randomSeed_long_float_R_float(ctx, (jlong((((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id) + (jint(1))))), (jfloat(360.0f)));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_orbitOffset = temp0;
	LINE_NUMBER(205);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_totalRadius = (frame[3].f);
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].o) != nullptr) goto label_62;
	}
	INST_FCONST(0);
	goto label_63;
label_62:;
	{
	jfloat temp0 = (((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[2].o)))->F_totalRadius) + ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[2].o)))->F_orbitSpacing)) + ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_totalRadius);
	sp[0].f = temp0;
	sp += 1;
	}
label_63:;
	{
	sp -= 2;
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_orbitRadius = sp[1].f;
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_orbitRadius), (jfloat(1.5f)));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_orbitTime = (temp0 * (jfloat(1000.0f)));
	LINE_NUMBER(214);
	if ((frame[2].o) == nullptr) goto label_66;
	}
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[2].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(216);
	((func_mindustry_type_Planet_updateTotalRadius) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Planet_updateTotalRadius])(ctx, (frame[2].o));
	}
label_66:;
	{
	LINE_NUMBER(220);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_solarSystem = (jref) (frame[0].o);
	}
label_69:;
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_solarSystem;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_parent;
	if (sp[0].o == nullptr) goto label_70;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_solarSystem;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_parent;
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_solarSystem = (jref) sp[1].o;
	goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_type_Planet_isVanilla_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_isVanilla_R_boolean])(ctx, (frame[0].o));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowCampaignRules = temp0;
	LINE_NUMBER(222);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float_int(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Planet(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(225);
	init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].f));
	LINE_NUMBER(227);
	if ((frame[4].i) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_mindustry_graphics_g3d_PlanetGrid_create_int_R_mindustry_graphics_g3d_PlanetGrid(ctx, (frame[4].i));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_grid = (jref) sp[1].o;
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_grid;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK(sp[1].o))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_ensureCapacity_int_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jarray) nullCheck(ctx, sp[1].o))->length));
	LINE_NUMBER(231);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_grid;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK(sp[0].o))->F_tiles;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	clinit_mindustry_type_Sector(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_Sector);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_grid;
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK(sp[3].o))->F_tiles;
	init_mindustry_type_Sector_mindustry_type_Planet_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx, sp[1].o, sp[2].o, ((jobject)ARRAY_ACCESS(jobject, sp[3].o, (frame[5].i))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(231);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Sector, sp[1].o))))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	sp[2].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Sector, sp[2].o))))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_corners;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (jint(0))))))->F_v;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectorApproxRadius = temp0;
	}
label_2:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_removeContent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:removeContent", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(241);
	M_mindustry_ctype_Content_removeContent(ctx, (frame[0].o));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_children;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_parent;
	((func_mindustry_type_Planet_updateTotalRadius) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_updateTotalRadius])(ctx, sp[0].o);
	LINE_NUMBER(246);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_mesh;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_util_Disposable_dispose) resolveInterfaceMethod(ctx, &class_arc_util_Disposable, INDEX_arc_util_Disposable_dispose, sp[0].o))(ctx, sp[0].o);
	}
label_6:;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_cloudMesh;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_cloudMesh;
	((func_arc_util_Disposable_dispose) resolveInterfaceMethod(ctx, &class_arc_util_Disposable, INDEX_arc_util_Disposable_dispose, sp[0].o))(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(249);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_saveRules(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:saveRules", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-campaign-rules"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_campaignRules;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_loadRules(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:loadRules", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-campaign-rules"_j.string, 1, sp[2].o);
	sp[3].o = ((jobject) &class_mindustry_game_CampaignRules);
	{ /* InvokeDynamic */
		clinit_mindustry_type_Planet_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_type_Planet_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_type_Planet_invoke_arc_func_Prov_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules = (jref) (checkCast(ctx, &class_mindustry_game_CampaignRules, sp[1].o));
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:stats", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_statParent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_statParent;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignStats;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_type_Planet *) NULL_CHECK(sp[-1].o))->F_campaignStats;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_loadStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:loadStats", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_statParent;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-campaign-stats"_j.string, 1, sp[2].o);
	sp[3].o = ((jobject) &class_mindustry_game_CampaignStats);
	{ /* InvokeDynamic */
		clinit_mindustry_type_Planet_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_type_Planet_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_type_Planet_invoke_arc_func_Prov_9);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignStats = (jref) (checkCast(ctx, &class_mindustry_game_CampaignStats, sp[1].o));
	}
label_1:;
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_saveStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:saveStats", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_statParent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_statParent;
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_statParent;
	((func_mindustry_type_Planet_saveStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_saveStats])(ctx, sp[0].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(274);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-campaign-stats"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_campaignStats;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	LINE_NUMBER(276);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_clearStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:clearStats", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_statParent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_statParent;
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_statParent;
	((func_mindustry_type_Planet_clearStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_clearStats])(ctx, sp[0].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_CampaignStats(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_CampaignStats);
	init_mindustry_game_CampaignStats(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignStats = (jref) sp[1].o;
	LINE_NUMBER(283);
	((func_mindustry_type_Planet_saveStats) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_saveStats])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(285);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getStartSector", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_startSector));
	sp[0].o = checkCast(ctx, &class_mindustry_type_Sector, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_applyRules_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:applyRules", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(292);
	((func_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(293);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:applyRules", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(296);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_ruleSetter;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_attributes;
	((func_mindustry_world_blocks_Attributes_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_clear])(ctx, sp[0].o);
	LINE_NUMBER(299);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_attributes;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_defaultAttributes;
	((func_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_add_mindustry_world_blocks_Attributes])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_env = ((jint)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_defaultEnv);
	LINE_NUMBER(301);
	((mindustry_game_Rules *) NULL_CHECK((frame[1].o)))->F_planet = (jref) (frame[0].o);
	LINE_NUMBER(303);
	if ((frame[2].i) != 0) goto label_6;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_campaignRules;
	((func_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_CampaignRules_apply_mindustry_type_Planet_mindustry_game_Rules])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	}
label_6:;
	LINE_NUMBER(306);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_applyDefaultRules_mindustry_game_CampaignRules(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:applyDefaultRules", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_campaignRuleDefaults;
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_copy_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getLastSector", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-last-sector"_j.string, 1, sp[2].o);
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[1].o, sp[2].o, ((jint)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_startSector));
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, temp1);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_setLastSector_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:setLastSector", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(320);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-last-sector"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_id));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_preset_int_mindustry_type_SectorPreset(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:preset", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((mindustry_type_Sector *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Sector, sp[0].o))))->F_preset = (jref) (frame[2].o);
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Planet_hasGrid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:hasGrid", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_grid;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_generator;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
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

jbool M_mindustry_type_Planet_isLandable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:isLandable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
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

void M_mindustry_type_Planet_updateTotalRadius(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:updateTotalRadius", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(338);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_totalRadius = ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius);
	LINE_NUMBER(339);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_totalRadius), (((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[2].o)))->F_orbitRadius) + ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[2].o)))->F_totalRadius)));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_totalRadius = temp0;
	LINE_NUMBER(342);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(343);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_getLightNormal_R_arc_math_geom_Vec3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getLightNormal", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(346);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_solarSystem;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_type_Planet_getOrbitAngle_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getOrbitAngle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(351);
	jfloat temp0 = (jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_orbitOffset;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	jfloat temp1 = (jfloat)((func_mindustry_game_Universe_secondsf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_secondsf_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (fmodf((temp0 + (temp1 / (((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_orbitTime) / (jfloat(360.0f))))), (jfloat(360.0f))));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_type_Planet_getRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getRotation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	if (((jint)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_tidalLock) == 0) goto label_1;
	}
	{
	LINE_NUMBER(358);
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getOrbitAngle_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_getOrbitAngle_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((-temp0) + (jfloat(90.0f)));
	}
label_1:;
	{
	LINE_NUMBER(361);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_randomSeed_long_float_R_float(ctx, (jlong((((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id) + (jint(1))))), (jfloat(360.0f)));
	frame[1].f = temp0;
	LINE_NUMBER(362);
	jfloat temp1 = frame[1].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	jfloat temp2 = (jfloat)((func_mindustry_game_Universe_secondsf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_secondsf_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (fmodf((temp1 + (temp2 / (((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_rotateTime) / (jfloat(360.0f))))), (jfloat(360.0f))));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:addParentOffset", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_orbitRadius));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(372);
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getOrbitAngle_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_getOrbitAngle_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(373);
	sp[0].o = frame[1].o;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[2].f), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_orbitRadius));
	jfloat temp2 = jfloat(0);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[2].f), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_orbitRadius));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp1, temp2, temp3);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getWorldPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec3_setZero_R_arc_math_geom_Vec3])(ctx, (frame[1].o));
	LINE_NUMBER(379);
	frame[2].o = (frame[0].o);
	}
label_2:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((func_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(379);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[2].o)))->F_parent;
	frame[2].o = sp[0].o;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_updateBaseCoverage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:updateBaseCoverage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(388);
	frame[3].f = (jfloat(1));
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_mindustry_type_Sector_near_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(390);
	if (((jint)((mindustry_type_Sector *) NULL_CHECK((frame[5].o)))->F_generateEnemyBase) == 0) goto label_8;
	}
	{
	LINE_NUMBER(391);
	frame[3].f = ((frame[3].f) + (jfloat(0.9f)));
	}
label_8:;
	LINE_NUMBER(393);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(395);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(396);
	frame[3].f = ((frame[3].f) + (jfloat(0.88f)));
	}
label_10:;
	{
	LINE_NUMBER(399);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_preset;
	sp += 1;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_preset;
	if ((floatCompare(((jfloat)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_difficulty), (jfloat(0)), -1)) != 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(400);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[3].f) / (jfloat(5.0f))), (jfloat(1.2f)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (jfloat(0.3f)));
	sp[0].f = temp1;
	sp += 1;
	goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_preset;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_difficulty) / (jfloat(10.0f))));
	sp[0].f = temp0;
	sp += 1;
	}
label_14:;
	{
	sp -= 2;
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_threat = sp[1].f;
	LINE_NUMBER(402);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(403);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getTransform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(407);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec3_Y;
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getRotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_getRotation_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_reloadMesh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:reloadMesh", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(414);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_mesh;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_util_Disposable_dispose) resolveInterfaceMethod(ctx, &class_arc_util_Disposable, INDEX_arc_util_Disposable_dispose, sp[0].o))(ctx, sp[0].o);
	}
label_2:;
	{
	LINE_NUMBER(417);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_meshLoader;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_mesh = (jref) (checkCast(ctx, &class_mindustry_graphics_g3d_GenericMesh, sp[1].o));
	LINE_NUMBER(418);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_reloadMeshAsync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:reloadMeshAsync", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(421);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(423);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mainExecutor;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Planet_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_type_Planet_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_type_Planet_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(437);
	M_mindustry_ctype_Content_load(ctx, (frame[0].o));
	LINE_NUMBER(439);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_2;
	}
	{
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_meshLoader;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_mesh = (jref) (checkCast(ctx, &class_mindustry_graphics_g3d_GenericMesh, sp[1].o));
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_cloudMeshLoader;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_cloudMesh = (jref) (checkCast(ctx, &class_mindustry_graphics_g3d_GenericMesh, sp[1].o));
	LINE_NUMBER(442);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_grid;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_gridMeshLoader;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_gridMesh = (jref) (checkCast(ctx, &class_arc_graphics_Mesh, sp[1].o));
	}
label_2:;
	LINE_NUMBER(444);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:init", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_campaignRules;
	((func_mindustry_type_Planet_applyDefaultRules_mindustry_game_CampaignRules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_applyDefaultRules_mindustry_game_CampaignRules])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(449);
	((func_mindustry_type_Planet_loadRules) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_loadRules])(ctx, (frame[0].o));
	LINE_NUMBER(450);
	((func_mindustry_type_Planet_loadStats) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_loadStats])(ctx, (frame[0].o));
	LINE_NUMBER(452);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_techTree;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_TechTree(ctx);
	sp[1].o = (jobject)SF_mindustry_content_TechTree_roots;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Planet_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_type_Planet_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_type_Planet_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_techTree = (jref) (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[1].o));
	}
label_4:;
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_techTree;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	if (((jint)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_autoAssignPlanet) == 0) goto label_6;
	}
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_techTree;
	((func_mindustry_content_TechTree$TechNode_addDatabaseTab_mindustry_ctype_UnlockableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_content_TechTree$TechNode_addDatabaseTab_mindustry_ctype_UnlockableContent])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(458);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_techTree;
	((func_mindustry_content_TechTree$TechNode_addPlanet_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_content_TechTree$TechNode_addPlanet_mindustry_type_Planet])(ctx, sp[0].o, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(461);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(462);
	((func_mindustry_type_Sector_loadInfo) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_loadInfo])(ctx, (frame[2].o));
	LINE_NUMBER(463);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_generator;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_generator;
	((func_mindustry_maps_generators_PlanetGenerator_generateSector_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_PlanetGenerator_generateSector_mindustry_type_Sector])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(469);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(471);
	((func_mindustry_type_Planet_updateBaseCoverage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_updateBaseCoverage])(ctx, (frame[0].o));
	}
label_13:;
	{
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_clipRadius), ((((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius) + ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_atmosphereRadOut)) + (jfloat(0.5f))));
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_clipRadius = temp0;
	LINE_NUMBER(475);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_getData_R_mindustry_type_Planet$PlanetData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getData", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(478);
	if (((jint)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_loadPlanetData) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_data;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(479);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"planets/\u0001.json"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(480);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_type_Planet$PlanetData);
	sp[2].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_data = (jref) (checkCast(ctx, &class_mindustry_type_Planet$PlanetData, sp[1].o));
	LINE_NUMBER(482);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((mindustry_type_Planet$PlanetData *) NULL_CHECK(sp[0].o))->F_attackSectors;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_1;
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(483);
	if ((frame[5].i) < 0) goto label_8;
	}
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	((mindustry_type_Sector *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Sector, sp[0].o))))->F_generateEnemyBase = (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(482);
	INST_IINC(4, 1);
	goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getSector", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[1].o)))->F_id));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_getSector_arc_math_geom_Ray_R_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getSector", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((func_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector])(ctx, (frame[0].o), (frame[1].o), ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getSector", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(505);
	sp[0].o = (jobject)((func_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	frame[3].o = sp[0].o;
	LINE_NUMBER(506);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(507);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec3_Y;
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getRotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_getRotation_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(508);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_sectors;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Planet_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_type_Planet_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_type_Planet_invoke_arc_func_Floatf_1);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (frame[2].f);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:intersect", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(513);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_position;
	jfloat temp0 = frame[2].f;
	clinit_mindustry_type_Planet(ctx);
	sp[2].o = (jobject)SF_mindustry_type_Planet_intersectResult;
	jint temp1 = (jint)SM_arc_math_geom_Intersector3D_intersectRaySphere_arc_math_geom_Ray_arc_math_geom_Vec3_float_arc_math_geom_Vec3_R_boolean(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	frame[3].i = temp1;
	LINE_NUMBER(514);
	if ((frame[3].i) != 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(515);
	clinit_mindustry_type_Planet(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Planet_intersectResult;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Planet_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:isHidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(526);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Planet_visible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:visible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_visible);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	static int pDrawCount = 0;
	if ((++pDrawCount) % 60 == 1) {
		auto planet = (mindustry_type_Planet*)frame[0].o;
		const char* pName = (planet && ((mindustry_ctype_MappableContent*)planet)->F_name) ? stringToNative(ctx, (jstring)((mindustry_ctype_MappableContent*)planet)->F_name) : "unknown";
		printf("[Planet:draw] Planet: %s, mesh=%p, meshLoader=%p\n", pName, (void*)planet->F_mesh, (void*)planet->F_meshLoader);
		fflush(stdout);
	}
	LINE_NUMBER(534);
	sp[0].o = (jobject)((mindustry_type_Planet *) (frame[0].o))->F_mesh;
	if (sp[0].o == nullptr && ((mindustry_type_Planet *) (frame[0].o))->F_meshLoader != 0) {
		jobject loader = (jobject)((mindustry_type_Planet *) (frame[0].o))->F_meshLoader;
		sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, loader))(ctx, loader);
		((mindustry_type_Planet *) (frame[0].o))->F_mesh = (jref) (checkCast(ctx, &class_mindustry_graphics_g3d_GenericMesh, sp[0].o));
	}
	if (sp[0].o != nullptr) {
		((func_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_GenericMesh, INDEX_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	}
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:drawAtmosphere", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(539);
	SM_arc_graphics_Gl_depthMask_boolean(ctx, (jint(0)));
	LINE_NUMBER(541);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	((func_arc_graphics_Blending_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Blending_apply])(ctx, sp[0].o);
	LINE_NUMBER(543);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_atmosphere;
	((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK(sp[0].o))->F_camera = (jref) (frame[2].o);
	LINE_NUMBER(544);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_atmosphere;
	((mindustry_graphics_Shaders$AtmosphereShader *) NULL_CHECK(sp[0].o))->F_planet = (jref) (frame[0].o);
	LINE_NUMBER(545);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_atmosphere;
	((func_mindustry_graphics_Shaders$AtmosphereShader_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_bind])(ctx, sp[0].o);
	LINE_NUMBER(546);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_atmosphere;
	((func_mindustry_graphics_Shaders$AtmosphereShader_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Shaders$AtmosphereShader_apply])(ctx, sp[0].o);
	LINE_NUMBER(548);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Shaders_atmosphere;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int])(ctx, sp[0].o, sp[1].o, (jint(4)));
	LINE_NUMBER(550);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_normal;
	((func_arc_graphics_Blending_apply) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Blending_apply])(ctx, sp[0].o);
	LINE_NUMBER(552);
	SM_arc_graphics_Gl_depthMask_boolean(ctx, (jint(1)));
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:drawClouds", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_cloudMesh;
	if (sp[0].o == nullptr && ((mindustry_type_Planet *) (frame[0].o))->F_cloudMeshLoader != 0) {
		jobject loader = (jobject)((mindustry_type_Planet *) (frame[0].o))->F_cloudMeshLoader;
		sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, loader))(ctx, loader);
		((mindustry_type_Planet *) (frame[0].o))->F_cloudMesh = (jref) (checkCast(ctx, &class_mindustry_graphics_g3d_GenericMesh, sp[0].o));
	}
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_cloudMesh;
	((func_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_GenericMesh, INDEX_mindustry_graphics_g3d_GenericMesh_render_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[3].o));
	}
label_1:;
	LINE_NUMBER(559);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:drawBorders", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(563);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[3].o));
	jfloat temp0 = ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a) + (jfloat(0.3f));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime), (jfloat(5.0f)), (jfloat(0.3f)));
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, ((temp0 + temp1) * (frame[4].f)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(565);
	frame[6].f = ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius);
	LINE_NUMBER(566);
	frame[7].f = (((jfloat(1.17f)) * ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius)) + (jfloat(1,000000e-03f)));
	LINE_NUMBER(568);
	frame[8].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[8].i)));
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	jint temp0 = (frame[8].i) + (jint(1));
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_corners;
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp0 % (((jarray) nullCheck(ctx, sp[1].o))->length))));
	LINE_NUMBER(571);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(572);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v32;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[10].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(573);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v33;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(575);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v31;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v32;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v33;
	((func_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[5].o));
	LINE_NUMBER(577);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[10].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[7].f));
	LINE_NUMBER(578);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v32;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[10].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(579);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v33;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(581);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v31;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v32;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v33;
	((func_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_tri2_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[5].o));
	LINE_NUMBER(568);
	INST_IINC(8, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(583);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:fill", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(587);
	frame[5].f = (((jfloat(1.17f)) * ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius)) + (frame[4].f));
	LINE_NUMBER(588);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)));
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	jint temp0 = (frame[6].i) + (jint(1));
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_corners;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp0 % (((jarray) nullCheck(ctx, sp[1].o))->length))));
	LINE_NUMBER(590);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v31;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[7].o)))->F_v;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[5].f));
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v32;
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_v;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, (frame[5].f));
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v33;
	sp[4].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[4].o))->F_v;
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[3].o, sp[4].o);
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[3].o, (frame[5].f));
	((func_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_tri_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[3].o));
	LINE_NUMBER(588);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(592);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:drawSelection", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(596);
	frame[6].f = (((jfloat(1.17f)) + (frame[5].f)) * ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius));
	LINE_NUMBER(598);
	frame[7].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(599);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	jint temp0 = (frame[7].i) + (jint(1));
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_corners;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (temp0 % (((jarray) nullCheck(ctx, sp[1].o))->length))));
	LINE_NUMBER(600);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)));
	LINE_NUMBER(602);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(603);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(604);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[6].f));
	LINE_NUMBER(606);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (temp1 - (frame[4].f)));
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(607);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v32;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_v;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (temp2 - (frame[4].f)));
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(609);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_v;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v32;
	clinit_arc_util_Tmp(ctx);
	sp[4].o = (jobject)SF_arc_util_Tmp_v31;
	((func_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_quad_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[3].o));
	LINE_NUMBER(611);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat(1)) / (frame[6].f)));
	LINE_NUMBER(612);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat(1)) / (frame[6].f)));
	LINE_NUMBER(613);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[9].o)))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, ((jfloat(1)) / (frame[6].f)));
	LINE_NUMBER(598);
	INST_IINC(7, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(615);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:renderSectors", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(620);
	sp[0].o = (jobject)((func_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_proj_R_arc_math_geom_Mat3D])(ctx, (frame[1].o));
	sp[1].o = frame[0].o;
	clinit_mindustry_type_Planet(ctx);
	sp[2].o = (jobject)SF_mindustry_type_Planet_mat;
	sp[1].o = (jobject)((func_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(622);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[3].o)))->F_renderer;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[3].o)))->F_renderer;
	((func_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderSectors_mindustry_type_Planet) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer, INDEX_mindustry_graphics_g3d_PlanetRenderer$PlanetInterfaceRenderer_renderSectors_mindustry_type_Planet, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(627);
	frame[4].f = ((jfloat(1.17f)) * ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius));
	LINE_NUMBER(628);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_gridMesh;
	frame[5].o = sp[0].o;
	LINE_NUMBER(629);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_planetGrid;
	frame[6].o = sp[0].o;
	LINE_NUMBER(630);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g3d_Camera3D_getMouseRay_R_arc_math_geom_Ray])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (frame[4].f));
	frame[7].o = sp[0].o;
	LINE_NUMBER(631);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_planetGrid;
	sp[0].o = (jobject)((mindustry_graphics_Shaders$PlanetGridShader *) NULL_CHECK(sp[0].o))->F_mouse;
	sp += 1;
	if ((frame[7].o) != nullptr) goto label_8;
	}
	clinit_arc_math_geom_Vec3(ctx);
	(sp++)->o = SF_arc_math_geom_Vec3_Zero;
	goto label_9;
label_8:;
	{
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec3_Y;
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getRotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_getRotation_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, temp0);
	sp += 1;
	}
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_lerp_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (jfloat(0.2f)));
	LINE_NUMBER(633);
	((func_arc_graphics_gl_Shader_bind) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_gl_Shader_bind])(ctx, (frame[6].o));
	LINE_NUMBER(634);
	sp[0].o = frame[6].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_proj"_j));
	sp[2].o = (jobject)((arc_graphics_g3d_Camera3D *) NULL_CHECK((frame[2].o)))->F_combined;
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK(sp[2].o))->F_val;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(635);
	sp[0].o = frame[6].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"u_trans"_j));
	sp[2].o = frame[0].o;
	clinit_mindustry_type_Planet(ctx);
	sp[3].o = (jobject)SF_mindustry_type_Planet_mat;
	sp[2].o = (jobject)((func_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((arc_math_geom_Mat3D *) NULL_CHECK(sp[2].o))->F_val;
	((func_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_Shader_setUniformMatrix4_java_lang_String_Array1_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(636);
	((func_arc_graphics_gl_Shader_apply) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_gl_Shader_apply])(ctx, (frame[6].o));
	LINE_NUMBER(637);
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int])(ctx, (frame[5].o), (frame[6].o), (jint(1)));
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:drawArc", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(643);
	frame[9].f = ((jfloat(1.17f)) * ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius));
	LINE_NUMBER(644);
	jfloat temp0 = jfloat(1);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v32;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v33;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[10].f = (temp0 - ((temp1 + (jfloat(1))) / (jfloat(2))));
	LINE_NUMBER(646);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(0.5f)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(647);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, (frame[11].o), ((((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius) * ((jfloat(1)) + (frame[6].f))) + ((frame[10].f) * (jfloat(1.35f)))));
	LINE_NUMBER(649);
	clinit_mindustry_type_Planet(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Planet_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(650);
	clinit_mindustry_type_Planet(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Planet_points;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec3, (jint(3)));
	jint temp2 = jint(0);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v33;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, (frame[3].o));
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, (frame[9].f));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(1);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v31;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(2);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v34;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, (frame[2].o));
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, (frame[9].f));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(651);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_bz3;
	clinit_mindustry_type_Planet(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Planet_points;
	sp[0].o = (jobject)((func_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(653);
	frame[12].i = (jint(0));
	}
label_8:;
	{
	if ((frame[12].i) >= ((frame[8].i) + (jint(1)))) goto label_9;
	}
	{
	LINE_NUMBER(654);
	frame[13].f = ((jfloat((frame[12].i))) / (jfloat((frame[8].i))));
	LINE_NUMBER(655);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[5].o), (fmodf(((frame[13].f) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime) / (frame[7].f))), (jfloat(1)))));
	LINE_NUMBER(656);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	((func_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(657);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_bz3;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v32;
	sp[1].o = (jobject)((func_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector])(ctx, sp[1].o, sp[2].o, (frame[13].f));
	((func_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3])(ctx, sp[0].o, (checkCast(ctx, &class_arc_math_geom_Vec3, sp[1].o)));
	LINE_NUMBER(653);
	INST_IINC(12, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(659);
	((func_arc_graphics_g3d_VertexBatch3D_flush_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int])(ctx, (frame[1].o), (jint(3)));
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jint param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:drawArcLine", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].i = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(665);
	frame[10].f = ((jfloat(1.17f)) * ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius));
	LINE_NUMBER(666);
	jfloat temp0 = jfloat(1);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v32;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v33;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dot_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[11].f = (temp0 - ((temp1 + (jfloat(1))) / (jfloat(2))));
	LINE_NUMBER(668);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(0.5f)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(669);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, (frame[12].o), ((((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius) * ((jfloat(1)) + (frame[6].f))) + ((frame[11].f) * (jfloat(1.35f)))));
	LINE_NUMBER(671);
	clinit_mindustry_type_Planet(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Planet_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(672);
	clinit_mindustry_type_Planet(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Planet_points;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec3, (jint(3)));
	jint temp2 = jint(0);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v33;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, (frame[3].o));
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, (frame[10].f));
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(1);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v31;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(2);
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v34;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, (frame[2].o));
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, (frame[10].f));
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(673);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_bz3;
	clinit_mindustry_type_Planet(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Planet_points;
	sp[0].o = (jobject)((func_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Bezier_set_arc_struct_Seq_R_arc_math_geom_Bezier])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(675);
	clinit_mindustry_type_Planet(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Planet_tmpNormal;
	frame[13].o = sp[0].o;
	LINE_NUMBER(676);
	clinit_mindustry_type_Planet(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Planet_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	frame[14].o = (checkCast(ctx, &class_arc_math_geom_Vec3, sp[0].o));
	clinit_mindustry_type_Planet(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Planet_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	frame[15].o = (checkCast(ctx, &class_arc_math_geom_Vec3, sp[0].o));
	clinit_mindustry_type_Planet(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Planet_points;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(2)));
	frame[16].o = (checkCast(ctx, &class_arc_math_geom_Vec3, sp[0].o));
	LINE_NUMBER(677);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[13].o), (frame[14].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[15].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[15].o)))->F_x) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[16].o)))->F_x)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[15].o)))->F_y) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[16].o)))->F_y)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[15].o)))->F_z) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[16].o)))->F_z)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(679);
	frame[17].i = (jint(0));
	}
label_13:;
	{
	if ((frame[17].i) >= ((frame[8].i) + (jint(1)))) goto label_14;
	}
	{
	LINE_NUMBER(680);
	frame[18].f = ((jfloat((frame[17].i))) / (jfloat((frame[8].i))));
	LINE_NUMBER(681);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[5].o), (fmodf(((frame[18].f) + ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime) / (frame[7].f))), (jfloat(1)))));
	LINE_NUMBER(682);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	((func_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(683);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_bz3;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v32;
	sp[1].o = (jobject)((func_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector])(ctx, sp[1].o, sp[2].o, (frame[18].f));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_math_geom_Vec3, sp[1].o)))->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, (checkCast(ctx, &class_arc_math_geom_Vec3, sp[1].o)), (frame[13].o), (frame[9].f));
	((func_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(684);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	((func_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_color_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(685);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_bz3;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v32;
	sp[1].o = (jobject)((func_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Bezier_valueAt_arc_math_geom_Vector_float_R_arc_math_geom_Vector])(ctx, sp[1].o, sp[2].o, (frame[18].f));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_math_geom_Vec3, sp[1].o)))->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, (checkCast(ctx, &class_arc_math_geom_Vec3, sp[1].o)), (frame[13].o), (-(frame[9].f)));
	((func_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(679);
	INST_IINC(17, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(687);
	SM_arc_graphics_Gl_disable_int(ctx, (2884));
	LINE_NUMBER(688);
	((func_arc_graphics_g3d_VertexBatch3D_flush_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int])(ctx, (frame[1].o), (jint(5)));
	LINE_NUMBER(689);
	SM_arc_graphics_Gl_enable_int(ctx, (2884));
	LINE_NUMBER(690);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:lookAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(693);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Vec3_Y;
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getRotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_getRotation_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, (-temp0));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:project", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(697);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, ((jfloat(1.17f)) * ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius)));
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Vec3_Y;
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getRotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_getRotation_R_float])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o, (-temp0));
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_position;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_Camera3D_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:setPlane", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(701);
	jfloat temp0 = (jfloat)((func_mindustry_type_Planet_getRotation_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_getRotation_R_float])(ctx, (frame[0].o));
	frame[3].f = (-temp0);
	LINE_NUMBER(702);
	frame[4].f = (jfloat(1,000000e-02f));
	LINE_NUMBER(704);
	sp[0].o = frame[2].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v33;
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[2].o))->F_v;
	LINE_NUMBER(706);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (((jfloat(1.17f)) + (frame[4].f)) * ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius)));
	clinit_arc_math_geom_Vec3(ctx);
	sp[2].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o, (frame[3].f));
	sp[2].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_position;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_plane;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v32;
	sp[4].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[4].o))->F_v;
	LINE_NUMBER(708);
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[3].o, sp[4].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[3].o, sp[4].o);
	sp[2].o = (jobject)((func_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Plane_project_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[3].o))->F_v;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, sp[3].o, ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius));
	clinit_arc_math_geom_Vec3(ctx);
	sp[3].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, sp[3].o, (frame[3].f));
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[2].o);
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_v31;
	clinit_arc_util_Tmp(ctx);
	sp[4].o = (jobject)SF_arc_util_Tmp_v32;
	LINE_NUMBER(710);
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[3].o, sp[4].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[3].o, sp[4].o, (-(frame[3].f)));
	sp[4].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[4].o))->F_v;
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[3].o, sp[4].o);
	sp[4].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[4].o))->F_v;
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[3].o, sp[4].o, (jfloat(90.0f)));
	sp[4].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[4].o))->F_v;
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[3].o, sp[4].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[4].o = (jobject)SF_arc_math_geom_Vec3_Y;
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[3].o, sp[4].o, (frame[3].f));
	sp[3].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[3].o);
	LINE_NUMBER(704);
	((func_arc_graphics_g3d_PlaneBatch3D_setPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_PlaneBatch3D_setPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_type_Planet_lambda$getSector$0_float_arc_math_geom_Vec3_mindustry_type_Sector_R_float(jcontext ctx, jfloat param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:lambda$getSector$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Planet(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(508);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_setLength_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[0].f));
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst2_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Planet_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:lambda$init$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_planet;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void M_mindustry_type_Planet_lambda$reloadMeshAsync$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:lambda$reloadMeshAsync$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_meshLoader;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_graphics_g3d_GenericMesh, sp[0].o));
	LINE_NUMBER(426);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Planet_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_type_Planet_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_type_Planet_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Planet_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:lambda$reloadMeshAsync$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_mesh;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_util_Disposable_dispose) resolveInterfaceMethod(ctx, &class_arc_util_Disposable, INDEX_arc_util_Disposable_dispose, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(430);
	((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_mesh = (jref) (frame[1].o);
	LINE_NUMBER(431);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_lambda$loadRules$0_R_mindustry_game_CampaignRules(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:lambda$loadRules$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_campaignRules;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_type_Planet_lambda$new$3_mindustry_game_Rules(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:lambda$new$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Planet(ctx);
	frame[0].o = param0;
	LINE_NUMBER(183);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_lambda$new$2_R_arc_graphics_Mesh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:lambda$new$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_grid;
	clinit_mindustry_graphics_g3d_PlanetRenderer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_g3d_PlanetRenderer_outlineColor;
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_buildPlanetGrid_mindustry_graphics_g3d_PlanetGrid_arc_graphics_Color_float_R_arc_graphics_Mesh(ctx, sp[0].o, sp[1].o, ((jfloat(1.17f)) * ((jfloat)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_radius)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_Planet_lambda$new$1_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:lambda$new$1", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Planet(ctx);
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Planet_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	clinit_mindustry_graphics_g3d_ShaderSphereMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_ShaderSphereMesh);
	sp[1].o = frame[0].o;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Shaders_unlitWhite;
	init_mindustry_graphics_g3d_ShaderSphereMesh_mindustry_type_Planet_arc_graphics_gl_Shader_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(2)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_type_Planet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_UnlockableContent(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Planet:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Planet(ctx);
	{
	LINE_NUMBER(33);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_mindustry_type_Planet(ctx);
	SF_mindustry_type_Planet_intersectResult = sp[0].o;
	LINE_NUMBER(35);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[0].o);
	clinit_mindustry_type_Planet(ctx);
	SF_mindustry_type_Planet_mat = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_type_Planet(ctx);
	SF_mindustry_type_Planet_points = sp[0].o;
	LINE_NUMBER(38);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	clinit_mindustry_type_Planet(ctx);
	SF_mindustry_type_Planet_tmpNormal = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_Planet;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field mesh
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field cloudMesh
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field gridMesh
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field grid
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field generator
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[9]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Field ambientMusic
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[60]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field darkMusic
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[61]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field parent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[64]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field techTree
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[67]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field statParent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[75]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field data
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[83]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getStartSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getLastSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Method getData
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[28]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[30]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getSector
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[31]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method intersect
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[32]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_type_Planet[] {
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

static jclass innerClasses[] {
	&class_mindustry_type_Planet$PlanetData,
};

static FieldMetadata fields[] {
	{ "intersectResult", &class_arc_math_geom_Vec3, (intptr_t) &SF_mindustry_type_Planet_intersectResult, "Larc/math/geom/Vec3;", 26 },
	{ "mat", &class_arc_math_geom_Mat3D, (intptr_t) &SF_mindustry_type_Planet_mat, "Larc/math/geom/Mat3D;", 26 },
	{ "points", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_type_Planet_points, "Larc/struct/Seq;", 26 },
	{ "tmpNormal", &class_arc_math_geom_Vec3, (intptr_t) &SF_mindustry_type_Planet_tmpNormal, "Larc/math/geom/Vec3;", 26 },
	{ "mesh", &class_mindustry_graphics_g3d_GenericMesh, offsetof(mindustry_type_Planet, F_mesh), "Lmindustry/graphics/g3d/GenericMesh;", 1 },
	{ "cloudMesh", &class_mindustry_graphics_g3d_GenericMesh, offsetof(mindustry_type_Planet, F_cloudMesh), "Lmindustry/graphics/g3d/GenericMesh;", 1 },
	{ "gridMesh", &class_arc_graphics_Mesh, offsetof(mindustry_type_Planet, F_gridMesh), "Larc/graphics/Mesh;", 1 },
	{ "position", &class_arc_math_geom_Vec3, offsetof(mindustry_type_Planet, F_position), "Larc/math/geom/Vec3;", 1 },
	{ "grid", &class_mindustry_graphics_g3d_PlanetGrid, offsetof(mindustry_type_Planet, F_grid), "Lmindustry/graphics/g3d/PlanetGrid;", 1 },
	{ "generator", &class_mindustry_maps_generators_PlanetGenerator, offsetof(mindustry_type_Planet, F_generator), "Lmindustry/maps/generators/PlanetGenerator;", 1 },
	{ "sectors", &class_arc_struct_Seq, offsetof(mindustry_type_Planet, F_sectors), "Larc/struct/Seq;", 1 },
	{ "orbitSpacing", &class_float, offsetof(mindustry_type_Planet, F_orbitSpacing), "F", 1 },
	{ "radius", &class_float, offsetof(mindustry_type_Planet, F_radius), "F", 1 },
	{ "camRadius", &class_float, offsetof(mindustry_type_Planet, F_camRadius), "F", 1 },
	{ "minZoom", &class_float, offsetof(mindustry_type_Planet, F_minZoom), "F", 1 },
	{ "maxZoom", &class_float, offsetof(mindustry_type_Planet, F_maxZoom), "F", 1 },
	{ "drawOrbit", &class_boolean, offsetof(mindustry_type_Planet, F_drawOrbit), "Z", 1 },
	{ "atmosphereRadIn", &class_float, offsetof(mindustry_type_Planet, F_atmosphereRadIn), "F", 1 },
	{ "atmosphereRadOut", &class_float, offsetof(mindustry_type_Planet, F_atmosphereRadOut), "F", 1 },
	{ "clipRadius", &class_float, offsetof(mindustry_type_Planet, F_clipRadius), "F", 1 },
	{ "orbitRadius", &class_float, offsetof(mindustry_type_Planet, F_orbitRadius), "F", 1 },
	{ "totalRadius", &class_float, offsetof(mindustry_type_Planet, F_totalRadius), "F", 1 },
	{ "orbitTime", &class_float, offsetof(mindustry_type_Planet, F_orbitTime), "F", 1 },
	{ "rotateTime", &class_float, offsetof(mindustry_type_Planet, F_rotateTime), "F", 1 },
	{ "orbitOffset", &class_float, offsetof(mindustry_type_Planet, F_orbitOffset), "F", 1 },
	{ "sectorApproxRadius", &class_float, offsetof(mindustry_type_Planet, F_sectorApproxRadius), "F", 1 },
	{ "tidalLock", &class_boolean, offsetof(mindustry_type_Planet, F_tidalLock), "Z", 1 },
	{ "accessible", &class_boolean, offsetof(mindustry_type_Planet, F_accessible), "Z", 1 },
	{ "defaultEnv", &class_int, offsetof(mindustry_type_Planet, F_defaultEnv), "I", 1 },
	{ "defaultAttributes", &class_mindustry_world_blocks_Attributes, offsetof(mindustry_type_Planet, F_defaultAttributes), "Lmindustry/world/blocks/Attributes;", 1 },
	{ "updateLighting", &class_boolean, offsetof(mindustry_type_Planet, F_updateLighting), "Z", 1 },
	{ "lightSrcFrom", &class_float, offsetof(mindustry_type_Planet, F_lightSrcFrom), "F", 1 },
	{ "lightSrcTo", &class_float, offsetof(mindustry_type_Planet, F_lightSrcTo), "F", 1 },
	{ "lightDstFrom", &class_float, offsetof(mindustry_type_Planet, F_lightDstFrom), "F", 1 },
	{ "lightDstTo", &class_float, offsetof(mindustry_type_Planet, F_lightDstTo), "F", 1 },
	{ "startSector", &class_int, offsetof(mindustry_type_Planet, F_startSector), "I", 1 },
	{ "sectorSeed", &class_int, offsetof(mindustry_type_Planet, F_sectorSeed), "I", 1 },
	{ "launchCapacityMultiplier", &class_float, offsetof(mindustry_type_Planet, F_launchCapacityMultiplier), "F", 1 },
	{ "bloom", &class_boolean, offsetof(mindustry_type_Planet, F_bloom), "Z", 1 },
	{ "visible", &class_boolean, offsetof(mindustry_type_Planet, F_visible), "Z", 1 },
	{ "landCloudColor", &class_arc_graphics_Color, offsetof(mindustry_type_Planet, F_landCloudColor), "Larc/graphics/Color;", 1 },
	{ "lightColor", &class_arc_graphics_Color, offsetof(mindustry_type_Planet, F_lightColor), "Larc/graphics/Color;", 1 },
	{ "atmosphereColor", &class_arc_graphics_Color, offsetof(mindustry_type_Planet, F_atmosphereColor), "Larc/graphics/Color;", 1 },
	{ "iconColor", &class_arc_graphics_Color, offsetof(mindustry_type_Planet, F_iconColor), "Larc/graphics/Color;", 1 },
	{ "hasAtmosphere", &class_boolean, offsetof(mindustry_type_Planet, F_hasAtmosphere), "Z", 1 },
	{ "allowLaunchSchematics", &class_boolean, offsetof(mindustry_type_Planet, F_allowLaunchSchematics), "Z", 1 },
	{ "allowLaunchLoadout", &class_boolean, offsetof(mindustry_type_Planet, F_allowLaunchLoadout), "Z", 1 },
	{ "allowSectorInvasion", &class_boolean, offsetof(mindustry_type_Planet, F_allowSectorInvasion), "Z", 1 },
	{ "allowLegacyLaunchPads", &class_boolean, offsetof(mindustry_type_Planet, F_allowLegacyLaunchPads), "Z", 1 },
	{ "clearSectorOnLose", &class_boolean, offsetof(mindustry_type_Planet, F_clearSectorOnLose), "Z", 1 },
	{ "enemyBuildSpeedMultiplier", &class_float, offsetof(mindustry_type_Planet, F_enemyBuildSpeedMultiplier), "F", 1 },
	{ "enemyFactoryActivationDelay", &class_float, offsetof(mindustry_type_Planet, F_enemyFactoryActivationDelay), "F", 1 },
	{ "enemyInfiniteItems", &class_boolean, offsetof(mindustry_type_Planet, F_enemyInfiniteItems), "Z", 1 },
	{ "enemyCoreSpawnReplace", &class_boolean, offsetof(mindustry_type_Planet, F_enemyCoreSpawnReplace), "Z", 1 },
	{ "prebuildBase", &class_boolean, offsetof(mindustry_type_Planet, F_prebuildBase), "Z", 1 },
	{ "allowWaves", &class_boolean, offsetof(mindustry_type_Planet, F_allowWaves), "Z", 1 },
	{ "allowLaunchToNumbered", &class_boolean, offsetof(mindustry_type_Planet, F_allowLaunchToNumbered), "Z", 1 },
	{ "allowCampaignRules", &class_boolean, offsetof(mindustry_type_Planet, F_allowCampaignRules), "Z", 1 },
	{ "icon", &class_java_lang_String, offsetof(mindustry_type_Planet, F_icon), "Ljava/lang/String;", 1 },
	{ "launchMusic", &class_arc_audio_Music, offsetof(mindustry_type_Planet, F_launchMusic), "Larc/audio/Music;", 1 },
	{ "ambientMusic", &class_arc_struct_Seq, offsetof(mindustry_type_Planet, F_ambientMusic), "Larc/struct/Seq;", 1 },
	{ "darkMusic", &class_arc_struct_Seq, offsetof(mindustry_type_Planet, F_darkMusic), "Larc/struct/Seq;", 1 },
	{ "alwaysPlayMusic", &class_boolean, offsetof(mindustry_type_Planet, F_alwaysPlayMusic), "Z", 1 },
	{ "defaultCore", &class_mindustry_world_Block, offsetof(mindustry_type_Planet, F_defaultCore), "Lmindustry/world/Block;", 1 },
	{ "parent", &class_mindustry_type_Planet, offsetof(mindustry_type_Planet, F_parent), "Lmindustry/type/Planet;", 1 },
	{ "solarSystem", &class_mindustry_type_Planet, offsetof(mindustry_type_Planet, F_solarSystem), "Lmindustry/type/Planet;", 1 },
	{ "children", &class_arc_struct_Seq, offsetof(mindustry_type_Planet, F_children), "Larc/struct/Seq;", 1 },
	{ "techTree", &class_mindustry_content_TechTree$TechNode, offsetof(mindustry_type_Planet, F_techTree), "Lmindustry/content/TechTree$TechNode;", 1 },
	{ "launchCandidates", &class_arc_struct_Seq, offsetof(mindustry_type_Planet, F_launchCandidates), "Larc/struct/Seq;", 1 },
	{ "allowSelfSectorLaunch", &class_boolean, offsetof(mindustry_type_Planet, F_allowSelfSectorLaunch), "Z", 1 },
	{ "autoAssignPlanet", &class_boolean, offsetof(mindustry_type_Planet, F_autoAssignPlanet), "Z", 1 },
	{ "unlockedOnLand", &class_arc_struct_Seq, offsetof(mindustry_type_Planet, F_unlockedOnLand), "Larc/struct/Seq;", 1 },
	{ "meshLoader", &class_arc_func_Prov, offsetof(mindustry_type_Planet, F_meshLoader), "Larc/func/Prov;", 1 },
	{ "cloudMeshLoader", &class_arc_func_Prov, offsetof(mindustry_type_Planet, F_cloudMeshLoader), "Larc/func/Prov;", 1 },
	{ "gridMeshLoader", &class_arc_func_Prov, offsetof(mindustry_type_Planet, F_gridMeshLoader), "Larc/func/Prov;", 1 },
	{ "statParent", &class_mindustry_type_Planet, offsetof(mindustry_type_Planet, F_statParent), "Lmindustry/type/Planet;", 1 },
	{ "updateGroup", &class_arc_struct_ObjectSet, offsetof(mindustry_type_Planet, F_updateGroup), "Larc/struct/ObjectSet;", 1 },
	{ "campaignRules", &class_mindustry_game_CampaignRules, offsetof(mindustry_type_Planet, F_campaignRules), "Lmindustry/game/CampaignRules;", 1 },
	{ "campaignRuleDefaults", &class_mindustry_game_CampaignRules, offsetof(mindustry_type_Planet, F_campaignRuleDefaults), "Lmindustry/game/CampaignRules;", 1 },
	{ "ruleSetter", &class_arc_func_Cons, offsetof(mindustry_type_Planet, F_ruleSetter), "Larc/func/Cons;", 1 },
	{ "sectorCaptureReplacements", &class_arc_struct_ObjectMap, offsetof(mindustry_type_Planet, F_sectorCaptureReplacements), "Larc/struct/ObjectMap;", 1 },
	{ "showRtsAIRule", &class_boolean, offsetof(mindustry_type_Planet, F_showRtsAIRule), "Z", 1 },
	{ "loadPlanetData", &class_boolean, offsetof(mindustry_type_Planet, F_loadPlanetData), "Z", 1 },
	{ "data", &class_mindustry_type_Planet$PlanetData, offsetof(mindustry_type_Planet, F_data), "Lmindustry/type/Planet$PlanetData;", 1 },
	{ "campaignStats", &class_mindustry_game_CampaignStats, offsetof(mindustry_type_Planet, F_campaignStats), "Lmindustry/game/CampaignStats;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float, 0, "(Ljava/lang/String;Lmindustry/type/Planet;F)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float_int, 0, "(Ljava/lang/String;Lmindustry/type/Planet;FI)V", 1 },
	{ "removeContent", (intptr_t) M_mindustry_type_Planet_removeContent, VTABLE_mindustry_type_Planet_removeContent, "()V", 1 },
	{ "saveRules", (intptr_t) M_mindustry_type_Planet_saveRules, VTABLE_mindustry_type_Planet_saveRules, "()V", 1 },
	{ "loadRules", (intptr_t) M_mindustry_type_Planet_loadRules, VTABLE_mindustry_type_Planet_loadRules, "()V", 1 },
	{ "stats", (intptr_t) M_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats, VTABLE_mindustry_type_Planet_stats_R_mindustry_game_CampaignStats, "()Lmindustry/game/CampaignStats;", 1 },
	{ "loadStats", (intptr_t) M_mindustry_type_Planet_loadStats, VTABLE_mindustry_type_Planet_loadStats, "()V", 1 },
	{ "saveStats", (intptr_t) M_mindustry_type_Planet_saveStats, VTABLE_mindustry_type_Planet_saveStats, "()V", 1 },
	{ "clearStats", (intptr_t) M_mindustry_type_Planet_clearStats, VTABLE_mindustry_type_Planet_clearStats, "()V", 1 },
	{ "getStartSector", (intptr_t) M_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector, VTABLE_mindustry_type_Planet_getStartSector_R_mindustry_type_Sector, "()Lmindustry/type/Sector;", 1 },
	{ "applyRules", (intptr_t) M_mindustry_type_Planet_applyRules_mindustry_game_Rules, VTABLE_mindustry_type_Planet_applyRules_mindustry_game_Rules, "(Lmindustry/game/Rules;)V", 1 },
	{ "applyRules", (intptr_t) M_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean, VTABLE_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean, "(Lmindustry/game/Rules;Z)V", 1 },
	{ "applyDefaultRules", (intptr_t) M_mindustry_type_Planet_applyDefaultRules_mindustry_game_CampaignRules, VTABLE_mindustry_type_Planet_applyDefaultRules_mindustry_game_CampaignRules, "(Lmindustry/game/CampaignRules;)V", 1 },
	{ "getLastSector", (intptr_t) M_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector, VTABLE_mindustry_type_Planet_getLastSector_R_mindustry_type_Sector, "()Lmindustry/type/Sector;", 1 },
	{ "setLastSector", (intptr_t) M_mindustry_type_Planet_setLastSector_mindustry_type_Sector, VTABLE_mindustry_type_Planet_setLastSector_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "preset", (intptr_t) M_mindustry_type_Planet_preset_int_mindustry_type_SectorPreset, VTABLE_mindustry_type_Planet_preset_int_mindustry_type_SectorPreset, "(ILmindustry/type/SectorPreset;)V", 1 },
	{ "hasGrid", (intptr_t) M_mindustry_type_Planet_hasGrid_R_boolean, VTABLE_mindustry_type_Planet_hasGrid_R_boolean, "()Z", 1 },
	{ "isLandable", (intptr_t) M_mindustry_type_Planet_isLandable_R_boolean, VTABLE_mindustry_type_Planet_isLandable_R_boolean, "()Z", 1 },
	{ "updateTotalRadius", (intptr_t) M_mindustry_type_Planet_updateTotalRadius, VTABLE_mindustry_type_Planet_updateTotalRadius, "()V", 1 },
	{ "getLightNormal", (intptr_t) M_mindustry_type_Planet_getLightNormal_R_arc_math_geom_Vec3, VTABLE_mindustry_type_Planet_getLightNormal_R_arc_math_geom_Vec3, "()Larc/math/geom/Vec3;", 1 },
	{ "getOrbitAngle", (intptr_t) M_mindustry_type_Planet_getOrbitAngle_R_float, VTABLE_mindustry_type_Planet_getOrbitAngle_R_float, "()F", 1 },
	{ "getRotation", (intptr_t) M_mindustry_type_Planet_getRotation_R_float, VTABLE_mindustry_type_Planet_getRotation_R_float, "()F", 1 },
	{ "addParentOffset", (intptr_t) M_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_mindustry_type_Planet_addParentOffset_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getWorldPosition", (intptr_t) M_mindustry_type_Planet_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_mindustry_type_Planet_getWorldPosition_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "updateBaseCoverage", (intptr_t) M_mindustry_type_Planet_updateBaseCoverage, VTABLE_mindustry_type_Planet_updateBaseCoverage, "()V", 1 },
	{ "getTransform", (intptr_t) M_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, VTABLE_mindustry_type_Planet_getTransform_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;)Larc/math/geom/Mat3D;", 1 },
	{ "reloadMesh", (intptr_t) M_mindustry_type_Planet_reloadMesh, VTABLE_mindustry_type_Planet_reloadMesh, "()V", 1 },
	{ "reloadMeshAsync", (intptr_t) M_mindustry_type_Planet_reloadMeshAsync, VTABLE_mindustry_type_Planet_reloadMeshAsync, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_type_Planet_load, VTABLE_mindustry_type_Planet_load, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_type_Planet_init, VTABLE_mindustry_type_Planet_init, "()V", 1 },
	{ "getData", (intptr_t) M_mindustry_type_Planet_getData_R_mindustry_type_Planet$PlanetData, VTABLE_mindustry_type_Planet_getData_R_mindustry_type_Planet$PlanetData, "()Lmindustry/type/Planet$PlanetData;", 1 },
	{ "getSector", (intptr_t) M_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector, VTABLE_mindustry_type_Planet_getSector_mindustry_graphics_g3d_PlanetGrid$Ptile_R_mindustry_type_Sector, "(Lmindustry/graphics/g3d/PlanetGrid$Ptile;)Lmindustry/type/Sector;", 1 },
	{ "getSector", (intptr_t) M_mindustry_type_Planet_getSector_arc_math_geom_Ray_R_mindustry_type_Sector, VTABLE_mindustry_type_Planet_getSector_arc_math_geom_Ray_R_mindustry_type_Sector, "(Larc/math/geom/Ray;)Lmindustry/type/Sector;", 1 },
	{ "getSector", (intptr_t) M_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector, VTABLE_mindustry_type_Planet_getSector_arc_math_geom_Ray_float_R_mindustry_type_Sector, "(Larc/math/geom/Ray;F)Lmindustry/type/Sector;", 1 },
	{ "intersect", (intptr_t) M_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3, VTABLE_mindustry_type_Planet_intersect_arc_math_geom_Ray_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Ray;F)Larc/math/geom/Vec3;", 1 },
	{ "isHidden", (intptr_t) M_mindustry_type_Planet_isHidden_R_boolean, VTABLE_mindustry_type_Planet_isHidden_R_boolean, "()Z", 1 },
	{ "getContentType", (intptr_t) M_mindustry_type_Planet_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_type_Planet_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "visible", (intptr_t) M_mindustry_type_Planet_visible_R_boolean, VTABLE_mindustry_type_Planet_visible_R_boolean, "()Z", 1 },
	{ "draw", (intptr_t) M_mindustry_type_Planet_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, VTABLE_mindustry_type_Planet_draw_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V", 1 },
	{ "drawAtmosphere", (intptr_t) M_mindustry_type_Planet_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D, VTABLE_mindustry_type_Planet_drawAtmosphere_arc_graphics_Mesh_arc_graphics_g3d_Camera3D, "(Larc/graphics/Mesh;Larc/graphics/g3d/Camera3D;)V", 1 },
	{ "drawClouds", (intptr_t) M_mindustry_type_Planet_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, VTABLE_mindustry_type_Planet_drawClouds_mindustry_graphics_g3d_PlanetParams_arc_math_geom_Mat3D_arc_math_geom_Mat3D, "(Lmindustry/graphics/g3d/PlanetParams;Larc/math/geom/Mat3D;Larc/math/geom/Mat3D;)V", 1 },
	{ "drawBorders", (intptr_t) M_mindustry_type_Planet_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float, VTABLE_mindustry_type_Planet_drawBorders_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float, "(Larc/graphics/g3d/VertexBatch3D;Lmindustry/type/Sector;Larc/graphics/Color;F)V", 1 },
	{ "fill", (intptr_t) M_mindustry_type_Planet_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float, VTABLE_mindustry_type_Planet_fill_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float, "(Larc/graphics/g3d/VertexBatch3D;Lmindustry/type/Sector;Larc/graphics/Color;F)V", 1 },
	{ "drawSelection", (intptr_t) M_mindustry_type_Planet_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float, VTABLE_mindustry_type_Planet_drawSelection_arc_graphics_g3d_VertexBatch3D_mindustry_type_Sector_arc_graphics_Color_float_float, "(Larc/graphics/g3d/VertexBatch3D;Lmindustry/type/Sector;Larc/graphics/Color;FF)V", 1 },
	{ "renderSectors", (intptr_t) M_mindustry_type_Planet_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams, VTABLE_mindustry_type_Planet_renderSectors_arc_graphics_g3d_VertexBatch3D_arc_graphics_g3d_Camera3D_mindustry_graphics_g3d_PlanetParams, "(Larc/graphics/g3d/VertexBatch3D;Larc/graphics/g3d/Camera3D;Lmindustry/graphics/g3d/PlanetParams;)V", 1 },
	{ "drawArc", (intptr_t) M_mindustry_type_Planet_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int, VTABLE_mindustry_type_Planet_drawArc_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int, "(Larc/graphics/g3d/VertexBatch3D;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;Larc/graphics/Color;FFI)V", 1 },
	{ "drawArcLine", (intptr_t) M_mindustry_type_Planet_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float, VTABLE_mindustry_type_Planet_drawArcLine_arc_graphics_g3d_VertexBatch3D_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_graphics_Color_arc_graphics_Color_float_float_int_float, "(Larc/graphics/g3d/VertexBatch3D;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/graphics/Color;Larc/graphics/Color;FFIF)V", 1 },
	{ "lookAt", (intptr_t) M_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_mindustry_type_Planet_lookAt_mindustry_type_Sector_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Lmindustry/type/Sector;Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "project", (intptr_t) M_mindustry_type_Planet_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_mindustry_type_Planet_project_mindustry_type_Sector_arc_graphics_g3d_Camera3D_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Lmindustry/type/Sector;Larc/graphics/g3d/Camera3D;Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "setPlane", (intptr_t) M_mindustry_type_Planet_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D, VTABLE_mindustry_type_Planet_setPlane_mindustry_type_Sector_arc_graphics_g3d_PlaneBatch3D, "(Lmindustry/type/Sector;Larc/graphics/g3d/PlaneBatch3D;)V", 1 },
	{ "lambda$getSector$0", (intptr_t) SM_mindustry_type_Planet_lambda$getSector$0_float_arc_math_geom_Vec3_mindustry_type_Sector_R_float, 0, "(FLarc/math/geom/Vec3;Lmindustry/type/Sector;)F", 4106 },
	{ "lambda$init$0", (intptr_t) M_mindustry_type_Planet_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean, VTABLE_mindustry_type_Planet_lambda$init$0_mindustry_content_TechTree$TechNode_R_boolean, "(Lmindustry/content/TechTree$TechNode;)Z", 4098 },
	{ "lambda$reloadMeshAsync$0", (intptr_t) M_mindustry_type_Planet_lambda$reloadMeshAsync$0, VTABLE_mindustry_type_Planet_lambda$reloadMeshAsync$0, "()V", 4098 },
	{ "lambda$reloadMeshAsync$1", (intptr_t) M_mindustry_type_Planet_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh, VTABLE_mindustry_type_Planet_lambda$reloadMeshAsync$1_mindustry_graphics_g3d_GenericMesh, "(Lmindustry/graphics/g3d/GenericMesh;)V", 4098 },
	{ "lambda$loadRules$0", (intptr_t) M_mindustry_type_Planet_lambda$loadRules$0_R_mindustry_game_CampaignRules, VTABLE_mindustry_type_Planet_lambda$loadRules$0_R_mindustry_game_CampaignRules, "()Lmindustry/game/CampaignRules;", 4098 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_type_Planet_lambda$new$3_mindustry_game_Rules, 0, "(Lmindustry/game/Rules;)V", 4106 },
	{ "lambda$new$2", (intptr_t) M_mindustry_type_Planet_lambda$new$2_R_arc_graphics_Mesh, VTABLE_mindustry_type_Planet_lambda$new$2_R_arc_graphics_Mesh, "()Larc/graphics/Mesh;", 4098 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_type_Planet_lambda$new$1_R_mindustry_graphics_g3d_GenericMesh, 0, "()Lmindustry/graphics/g3d/GenericMesh;", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_type_Planet_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh, VTABLE_mindustry_type_Planet_lambda$new$0_R_mindustry_graphics_g3d_GenericMesh, "()Lmindustry/graphics/g3d/GenericMesh;", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_type_Planet, 0, "()V", 8 },
};

Class class_mindustry_type_Planet{
		.nativeName = (intptr_t) "mindustry/type/Planet",
		.parentClass = (intptr_t) &class_mindustry_ctype_UnlockableContent,
		.size = sizeof(mindustry_type_Planet),
		.classVtable = (intptr_t) vtable_mindustry_type_Planet,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Planet,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_Planet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 85,
		.nativeFields = (intptr_t) fields,
		.methodCount = 60,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 103,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Planet = registerClass(&class_mindustry_type_Planet);

}
