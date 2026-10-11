#include "mindustry/maps/generators/BlankPlanetGenerator.h"
#include "java/lang/Object.h"
#include "arc/math/Rand.h"
#include "mindustry/world/WorldParams.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/maps/generators/BlankPlanetGenerator.h"
#include "mindustry/game/Rules.h"
#include "mindustry/type/Sector.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "mindustry/maps/generators/WorldGenerator.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/maps/generators/BasicGenerator.h"

extern "C" {


void mark_mindustry_maps_generators_BlankPlanetGenerator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_maps_generators_PlanetGenerator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_generators_BlankPlanetGenerator *) object;
}

void clinit_mindustry_maps_generators_BlankPlanetGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
}

void init_mindustry_maps_generators_BlankPlanetGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BlankPlanetGenerator:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_generators_BlankPlanetGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_mindustry_maps_generators_PlanetGenerator(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BlankPlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BlankPlanetGenerator:addWeather", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(13);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_generators_BlankPlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/generators/BlankPlanetGenerator:generate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(17);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles = (jref) (frame[1].o);
	LINE_NUMBER(18);
	((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector = (jref) (frame[2].o);
	LINE_NUMBER(19);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((((jint)((mindustry_type_Sector *) NULL_CHECK((frame[2].o)))->F_id) + ((jint)((mindustry_world_WorldParams *) NULL_CHECK((frame[3].o)))->F_seedOffset)) + ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_baseSeed)))));
	LINE_NUMBER(21);
	((func_mindustry_world_Tiles_fill) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_fill])(ctx, (frame[1].o));
	LINE_NUMBER(23);
	((func_mindustry_maps_generators_BlankPlanetGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_generators_BlankPlanetGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_generators_BlankPlanetGenerator[] {
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
	(void *) M_mindustry_maps_generators_BasicGenerator_generate_mindustry_world_Tiles_mindustry_world_WorldParams,
	(void *) M_mindustry_maps_generators_WorldGenerator_postGenerate_mindustry_world_Tiles,
	(void *) M_mindustry_maps_generators_BasicGenerator_generate,
	(void *) M_mindustry_maps_generators_BasicGenerator_median_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_median_int_double,
	(void *) M_mindustry_maps_generators_BasicGenerator_median_int_double_mindustry_world_Block,
	(void *) M_mindustry_maps_generators_BasicGenerator_ores_arc_struct_Seq,
	(void *) M_mindustry_maps_generators_BasicGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_cliffs,
	(void *) M_mindustry_maps_generators_BasicGenerator_terrain_mindustry_world_Block_float_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_noise_mindustry_world_Block_mindustry_world_Block_int_float_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_overlay_mindustry_world_Block_mindustry_world_Block_float_int_float_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_tech,
	(void *) M_mindustry_maps_generators_BasicGenerator_tech_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block,
	(void *) M_mindustry_maps_generators_BasicGenerator_distort_float_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_scatter_mindustry_world_Block_mindustry_world_Block_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_each_arc_func_Intc2,
	(void *) M_mindustry_maps_generators_BasicGenerator_cells_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_cells_int_int_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_R_float,
	(void *) M_mindustry_maps_generators_PlanetGenerator_noise_float_float_double_double_double_double_R_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_noise_float_float_double_double_double_R_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_pass_arc_func_Intc2,
	(void *) M_mindustry_maps_generators_BasicGenerator_nearWall_int_int_R_boolean,
	(void *) M_mindustry_maps_generators_BasicGenerator_nearAir_int_int_R_boolean,
	(void *) M_mindustry_maps_generators_BasicGenerator_removeWall_int_int_int_arc_func_Boolf,
	(void *) M_mindustry_maps_generators_BasicGenerator_near_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_maps_generators_BasicGenerator_decoration_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_blend_mindustry_world_Block_mindustry_world_Block_float,
	(void *) M_mindustry_maps_generators_BasicGenerator_brush_arc_struct_Seq_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_erase_int_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq,
	(void *) M_mindustry_maps_generators_BasicGenerator_trimDark,
	(void *) M_mindustry_maps_generators_BasicGenerator_inverseFloodFill_mindustry_world_Tile,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$brush$0_int_mindustry_world_Tile,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$decoration$0_float_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$cells$1_int_arc_struct_GridBits_arc_struct_GridBits_int_int_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$cells$0_arc_struct_GridBits_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$scatter$0_float_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$distort$0_float_float_Array1_short_Array1_short_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$tech$0_int_mindustry_world_Block_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$overlay$0_int_float_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$noise$0_int_float_float_float_mindustry_world_Block_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$terrain$0_float_float_float_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$wallOre$0_float_float_mindustry_world_Block_boolean_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$ores$0_arc_struct_Seq_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$median$2_mindustry_world_Block_Array1_short_Array1_short_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$median$0_mindustry_world_Block_int_Array1_short_double_Array1_short_int_int,
	(void *) M_mindustry_maps_generators_BasicGenerator_lambda$median$1_int_int,
	(void *) M_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean,
	(void *) M_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean,
	(void *) M_mindustry_maps_generators_PlanetGenerator_generateSector_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_onSectorCaptured_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_onSectorLost_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_beforeSaveWrite_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getLockedIcon_mindustry_type_Sector_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_maps_generators_PlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_maps_generators_PlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_allowAcceleratorLanding_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_maps_generators_BlankPlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules,
	(void *) M_mindustry_maps_generators_PlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getSizeScl_R_float,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getSectorSize_mindustry_type_Sector_R_int,
	(void *) M_mindustry_maps_generators_BlankPlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams,
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
	{ "generate", "(Lmindustry/world/Tiles;Lmindustry/world/WorldParams;)V" },
	{ "postGenerate", "(Lmindustry/world/Tiles;)V" },
	{ "generate", "()V" },
	{ "median", "(I)V" },
	{ "median", "(ID)V" },
	{ "median", "(IDLmindustry/world/Block;)V" },
	{ "ores", "(Larc/struct/Seq;)V" },
	{ "ore", "(Lmindustry/world/Block;Lmindustry/world/Block;FF)V" },
	{ "oreAround", "(Lmindustry/world/Block;Lmindustry/world/Block;IFF)V" },
	{ "wallOre", "(Lmindustry/world/Block;Lmindustry/world/Block;FF)V" },
	{ "cliffs", "()V" },
	{ "terrain", "(Lmindustry/world/Block;FFF)V" },
	{ "noise", "(Lmindustry/world/Block;Lmindustry/world/Block;IFFF)V" },
	{ "overlay", "(Lmindustry/world/Block;Lmindustry/world/Block;FIFFF)V" },
	{ "tech", "()V" },
	{ "tech", "(Lmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;)V" },
	{ "distort", "(FF)V" },
	{ "scatter", "(Lmindustry/world/Block;Lmindustry/world/Block;F)V" },
	{ "each", "(Larc/func/Intc2;)V" },
	{ "cells", "(I)V" },
	{ "cells", "(IIII)V" },
	{ "noise", "(FFDD)F" },
	{ "noise", "(FFDDDD)F" },
	{ "noise", "(FFDDD)F" },
	{ "pass", "(Larc/func/Intc2;)V" },
	{ "nearWall", "(II)Z" },
	{ "nearAir", "(II)Z" },
	{ "removeWall", "(IIILarc/func/Boolf;)V" },
	{ "near", "(IIILmindustry/world/Block;)Z" },
	{ "decoration", "(F)V" },
	{ "blend", "(Lmindustry/world/Block;Lmindustry/world/Block;F)V" },
	{ "brush", "(Larc/struct/Seq;I)V" },
	{ "erase", "(III)V" },
	{ "pathfind", "(IIIILmindustry/ai/Astar$TileHeuristic;Lmindustry/ai/Astar$DistanceHeuristic;)Larc/struct/Seq;" },
	{ "trimDark", "()V" },
	{ "inverseFloodFill", "(Lmindustry/world/Tile;)V" },
	{ "lambda$brush$0", "(ILmindustry/world/Tile;)V" },
	{ "lambda$decoration$0", "(FII)V" },
	{ "lambda$cells$1", "(ILarc/struct/GridBits;Larc/struct/GridBits;IIII)V" },
	{ "lambda$cells$0", "(Larc/struct/GridBits;II)V" },
	{ "lambda$scatter$0", "(FLmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$distort$0", "(FF[S[SII)V" },
	{ "lambda$tech$0", "(ILmindustry/world/Block;Lmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$overlay$0", "(IFFFFLmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$noise$0", "(IFFFLmindustry/world/Block;Lmindustry/world/Block;II)V" },
	{ "lambda$terrain$0", "(FFFLmindustry/world/Block;II)V" },
	{ "lambda$wallOre$0", "(FFLmindustry/world/Block;ZLmindustry/world/Block;II)V" },
	{ "lambda$ore$0", "(Lmindustry/world/Block;FFLmindustry/world/Block;II)V" },
	{ "lambda$ores$0", "(Larc/struct/Seq;II)V" },
	{ "lambda$median$2", "(Lmindustry/world/Block;[S[SII)V" },
	{ "lambda$median$0", "(Lmindustry/world/Block;I[SD[SII)V" },
	{ "lambda$median$1", "(II)V" },
	{ "getHeight", "(Larc/math/geom/Vec3;)F" },
	{ "getColor", "(Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "getEmissiveColor", "(Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "isEmissive", "()Z" },
	{ "skip", "(Larc/math/geom/Vec3;)Z" },
	{ "generateSector", "(Lmindustry/type/Sector;)V" },
	{ "onSectorCaptured", "(Lmindustry/type/Sector;)V" },
	{ "onSectorLost", "(Lmindustry/type/Sector;)V" },
	{ "beforeSaveWrite", "(Lmindustry/type/Sector;)V" },
	{ "getLockedText", "(Lmindustry/type/Sector;Ljava/lang/StringBuilder;)V" },
	{ "getLockedIcon", "(Lmindustry/type/Sector;)Larc/graphics/g2d/TextureRegion;" },
	{ "allowLanding", "(Lmindustry/type/Sector;)Z" },
	{ "findLaunchCandidate", "(Lmindustry/type/Sector;Lmindustry/type/Sector;)Lmindustry/type/Sector;" },
	{ "allowAcceleratorLanding", "(Lmindustry/type/Sector;)Z" },
	{ "addWeather", "(Lmindustry/type/Sector;Lmindustry/game/Rules;)V" },
	{ "genTile", "(Larc/math/geom/Vec3;Lmindustry/world/TileGen;)V" },
	{ "getSizeScl", "()F" },
	{ "getSectorSize", "(Lmindustry/type/Sector;)I" },
	{ "generate", "(Lmindustry/world/Tiles;Lmindustry/type/Sector;Lmindustry/world/WorldParams;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_generators_BlankPlanetGenerator, 0, "()V", 1 },
	{ "addWeather", (intptr_t) M_mindustry_maps_generators_BlankPlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules, VTABLE_mindustry_maps_generators_BlankPlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules, "(Lmindustry/type/Sector;Lmindustry/game/Rules;)V", 1 },
	{ "generate", (intptr_t) M_mindustry_maps_generators_BlankPlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams, VTABLE_mindustry_maps_generators_BlankPlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams, "(Lmindustry/world/Tiles;Lmindustry/type/Sector;Lmindustry/world/WorldParams;)V", 1 },
};

Class class_mindustry_maps_generators_BlankPlanetGenerator{
		.nativeName = (intptr_t) "mindustry/maps/generators/BlankPlanetGenerator",
		.parentClass = (intptr_t) &class_mindustry_maps_generators_PlanetGenerator,
		.size = sizeof(mindustry_maps_generators_BlankPlanetGenerator),
		.classVtable = (intptr_t) vtable_mindustry_maps_generators_BlankPlanetGenerator,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_generators_BlankPlanetGenerator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_generators_BlankPlanetGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 82,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_generators_BlankPlanetGenerator = registerClass(&class_mindustry_maps_generators_BlankPlanetGenerator);

}
