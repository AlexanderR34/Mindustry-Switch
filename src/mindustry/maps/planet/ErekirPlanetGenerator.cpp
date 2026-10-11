#include "mindustry/maps/planet/ErekirPlanetGenerator.h"
#include "mindustry/world/meta/Attribute.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/maps/planet/ErekirPlanetGenerator_invoke_arc_func_Intc2_6.h"
#include "mindustry/maps/planet/ErekirPlanetGenerator.h"
#include "arc/graphics/Color.h"
#include "mindustry/maps/planet/ErekirPlanetGenerator_invoke_arc_func_Intc2_7.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "mindustry/ai/Astar_TileHeuristic.h"
#include "mindustry/maps/planet/ErekirPlanetGenerator_invoke_arc_func_Intc2_8.h"
#include "mindustry/maps/planet/ErekirPlanetGenerator_invoke_arc_func_Intc2_9.h"
#include "arc/util/Tmp.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/blocks/environment/SteamVent.h"
#include "mindustry/world/Tile.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/util/Iterator.h"
#include "mindustry/type/Item.h"
#include "java/lang/Object.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/world/TileGen.h"
#include "mindustry/ai/Astar_DistanceHeuristic.h"
#include "mindustry/maps/generators/WorldGenerator.h"
#include "arc/math/geom/Vec2.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/game/Rules.h"
#include "mindustry/maps/planet/ErekirPlanetGenerator_invoke_arc_func_Boolf_1.h"
#include "arc/math/geom/Vec3.h"
#include "mindustry/world/Tiles.h"
#include "mindustry/maps/planet/ErekirPlanetGenerator_invoke_mindustry_ai_Astar_TileHeuristic_1.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/world/blocks/environment/TallBlock.h"
#include "arc/util/noise/Ridged.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/util/noise/Simplex.h"
#include "mindustry/maps/planet/ErekirPlanetGenerator_invoke_arc_func_Intc2_11.h"
#include "mindustry/content/Loadouts.h"
#include "mindustry/maps/planet/ErekirPlanetGenerator_invoke_arc_func_Intc2_10.h"
#include "mindustry/type/Sector.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/ai/Astar.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/type/Planet.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"
#include "mindustry/maps/generators/BasicGenerator.h"

extern "C" {

jfloat SF_mindustry_maps_planet_ErekirPlanetGenerator_arkThresh;
jfloat SF_mindustry_maps_planet_ErekirPlanetGenerator_arkScl;
jint SF_mindustry_maps_planet_ErekirPlanetGenerator_arkSeed;
jint SF_mindustry_maps_planet_ErekirPlanetGenerator_arkOct;
jfloat SF_mindustry_maps_planet_ErekirPlanetGenerator_liqThresh;
jfloat SF_mindustry_maps_planet_ErekirPlanetGenerator_liqScl;
jfloat SF_mindustry_maps_planet_ErekirPlanetGenerator_redThresh;
jfloat SF_mindustry_maps_planet_ErekirPlanetGenerator_noArkThresh;
jint SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalSeed;
jint SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalOct;
jfloat SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalScl;
jfloat SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalMag;
jfloat SF_mindustry_maps_planet_ErekirPlanetGenerator_airThresh;
jfloat SF_mindustry_maps_planet_ErekirPlanetGenerator_airScl;

void mark_mindustry_maps_planet_ErekirPlanetGenerator(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_planet_ErekirPlanetGenerator *) object;
	if (self->F_terrain)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_terrain)->clazz)->markFunction)((jobject) self->F_terrain, mark, depth + 1);
}

void init_mindustry_maps_planet_ErekirPlanetGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_mindustry_maps_generators_PlanetGenerator(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_heightScl = (jfloat(0.9f));
	((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_octaves = (jfloat(8.0f));
	((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_persistence = (jfloat(0.7f));
	((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_heightPow = (jfloat(3.0f));
	((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_heightMult = (jfloat(1.6f));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (8));
	jint temp0 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_regolith;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_regolith;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_regolith;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_regolith;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_yellowStone;
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_rhyolite;
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_rhyolite;
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_carbonStone;
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK(sp[0].o))->F_terrain = (jref) sp[1].o;
	LINE_NUMBER(32);
	((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_baseSeed = (jint(2));
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Loadouts(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Loadouts_basicBastion;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_defaultLoadout = (jref) sp[1].o;
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_ErekirPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:getHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, temp0, ((jfloat)((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_heightPow));
	popStackFrame(ctx);
	return (temp1 * ((jfloat)((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_heightMult));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_ErekirPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:getColor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_mindustry_maps_planet_ErekirPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = frame[3].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystallineStone;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_crystalFloor;
	INST_ASTORE(3);
label_2:;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_mapColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, ((jfloat(1)) - ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_albedo)));
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_ErekirPlanetGenerator_getSizeScl_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:getSizeScl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return (jfloat(2568.0f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_ErekirPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:rawHeight", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(57);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(((jfloat)((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_octaves))), (jdouble(((jfloat)((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_persistence))), (jdouble(((jfloat(1)) / ((jfloat)((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_heightScl)))), (jdouble(((jfloat(10.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)))), (jdouble(((jfloat(10.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)))), (jdouble(((jfloat(10.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_ErekirPlanetGenerator_rawTemp_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:rawTemp", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_float_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec3_dst_float_float_float_R_float])(ctx, (frame[1].o), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	jfloat temp1 = temp0 * (jfloat(2.2f));
	jfloat temp2 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(8.0)), (jdouble(0.5400000214576721)), (jdouble(1.399999976158142)), (jdouble(((jfloat(10.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x)))), (jdouble(((jfloat(10.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y)))), (jdouble(((jfloat(10.0f)) + ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z)))));
	popStackFrame(ctx);
	return (temp1 - (temp2 * (jfloat(2.9f))));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_planet_ErekirPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:getBlock", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	frame[2].f = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[3].f = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y);
	frame[4].f = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z);
	LINE_NUMBER(67);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_rawTemp_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_rawTemp_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[5].f = temp0;
	LINE_NUMBER(68);
	jfloat temp1 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[6].f = temp1;
	LINE_NUMBER(70);
	frame[6].f = ((frame[6].f) * (jfloat(1.2f)));
	LINE_NUMBER(71);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[6].f));
	frame[6].f = temp2;
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_terrain;
	jfloat temp3 = frame[6].f;
	sp[1].o = (jobject)((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_terrain;
	jint temp4 = jint((temp3 * (jfloat((((jarray) nullCheck(ctx, sp[1].o))->length)))));
	jint temp5 = jint(0);
	sp[1].o = (jobject)((mindustry_maps_planet_ErekirPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_terrain;
	jint temp6 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp4, temp5, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp6));
	LINE_NUMBER(75);
	jdouble temp7 = jdouble((frame[5].f));
	jdouble temp8 = jdouble(0.3);
	jfloat temp9 = (jfloat)SM_arc_util_noise_Ridged_noise3d_int_double_double_double_int_float_R_float(ctx, (((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed) + (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jint)SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalSeed)), (jdouble(((frame[2].f) + (jfloat(4.0f))))), (jdouble(((frame[3].f) + (jfloat(8.0f))))), (jdouble(((frame[4].f) + (jfloat(1))))), (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jint)SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalOct), (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalScl));
	jfloat temp10 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, temp9);
	if ((doubleCompare(temp7, (temp8 + (jdouble((temp10 * (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalMag))))), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(76);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_crystallineStone;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(79);
	if ((doubleCompare((jdouble((frame[5].f))), (jdouble(0.6)), 1)) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[7].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_rhyolite;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	{
	sp[0].o = frame[7].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_yellowStone;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	{
	sp[0].o = frame[7].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_regolith;
	if (sp[0].o != sp[1].o) goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(82);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_carbonStone;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(88);
	if ((floatCompare((frame[5].f), ((clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_redThresh) - (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_noArkThresh)), 1)) >= 0) goto label_14;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise3d_int_double_double_double_int_float_R_float(ctx, (((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed) + (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jint)SF_mindustry_maps_planet_ErekirPlanetGenerator_arkSeed)), (jdouble(((frame[2].f) + (jfloat(2))))), (jdouble(((frame[3].f) + (jfloat(8.0f))))), (jdouble(((frame[4].f) + (jfloat(1))))), (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jint)SF_mindustry_maps_planet_ErekirPlanetGenerator_arkOct), (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_arkScl));
	if ((floatCompare(temp0, (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_arkThresh), -1)) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(90);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_beryllicStone;
	frame[7].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(93);
	if ((floatCompare((frame[5].f), (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_redThresh), -1)) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(94);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_redStone;
	frame[7].o = sp[0].o;
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(95);
	if ((floatCompare((frame[5].f), ((clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_redThresh) - (jfloat(0.4f))), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(97);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_regolith;
	frame[7].o = sp[0].o;
	}
label_18:;
	{
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_ErekirPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:genTile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(105);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_maps_planet_ErekirPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block])(ctx, (frame[0].o), (frame[1].o));
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_world_TileGen *) NULL_CHECK((frame[2].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_rhyolite;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.01)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_rhyoliteCrater;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_TileGen *) NULL_CHECK((frame[2].o)))->F_floor;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_wall;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(113);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise3d_int_double_double_double_int_float_R_float(ctx, (((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed) + (jint(1))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))), (jint(2)), (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_airScl));
	if ((floatCompare(temp0, (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_airThresh), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(118);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise3d_int_double_double_double_int_float_R_float(ctx, (((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed) + (jint(2))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))), (jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(4.0f))))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))), (jint(3)), (jfloat(6.0f)));
	if ((doubleCompare((jdouble(temp0)), (jdouble(0.6)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_carbonStone;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_7:;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_ErekirPlanetGenerator_generate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[41];
	auto stack = &frame[28];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:generate", 41 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_rawTemp_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_rawTemp_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[1].f = temp0;
	LINE_NUMBER(127);
	if ((doubleCompare((jdouble((frame[1].f))), (jdouble(0.7)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_6(ctx);
		auto proxy = (mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_6 *) gcAlloc(ctx, &class_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(149);
	((func_mindustry_maps_planet_ErekirPlanetGenerator_cells_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_cells_int])(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_7(ctx);
		auto proxy = (mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_7 *) gcAlloc(ctx, &class_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	frame[2].f = ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(2.6f)));
	LINE_NUMBER(162);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (jfloat(360.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, (frame[2].f));
	frame[3].o = sp[0].o;
	LINE_NUMBER(164);
	frame[4].i = (jint((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x) + ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(2))))));
	frame[5].i = (jint((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y) + ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height))) / (jfloat(2))))));
	LINE_NUMBER(165);
	frame[6].i = (jint(((-((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x)) + ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(2))))));
	frame[7].i = (jint(((-((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y)) + ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height))) / (jfloat(2))))));
	LINE_NUMBER(166);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_dst_float_float_R_float(ctx, ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(2))), ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height))) / (jfloat(2))));
	frame[8].f = temp1;
	LINE_NUMBER(168);
	((func_mindustry_maps_planet_ErekirPlanetGenerator_erase_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_erase_int_int_int])(ctx, (frame[0].o), (frame[4].i), (frame[5].i), (15));
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp2 = frame[4].i;
	jint temp3 = frame[5].i;
	jint temp4 = frame[6].i;
	jint temp5 = frame[7].i;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_ErekirPlanetGenerator_invoke_mindustry_ai_Astar$TileHeuristic_1(ctx);
		auto proxy = (mindustry_maps_planet_ErekirPlanetGenerator_invoke_mindustry_ai_Astar$TileHeuristic_1 *) gcAlloc(ctx, &class_mindustry_maps_planet_ErekirPlanetGenerator_invoke_mindustry_ai_Astar$TileHeuristic_1);
		proxy->F_field1 = (frame[8].f);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	clinit_mindustry_ai_Astar(ctx);
	sp[3].o = (jobject)SF_mindustry_ai_Astar_manhattan;
	sp[1].o = (jobject)((func_mindustry_maps_planet_ErekirPlanetGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_pathfind_int_int_int_int_mindustry_ai_Astar$TileHeuristic_mindustry_ai_Astar$DistanceHeuristic_R_arc_struct_Seq])(ctx, sp[1].o, temp2, temp3, temp4, temp5, sp[2].o, sp[3].o);
	((func_mindustry_maps_planet_ErekirPlanetGenerator_brush_arc_struct_Seq_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_brush_arc_struct_Seq_int])(ctx, sp[0].o, sp[1].o, (9));
	LINE_NUMBER(170);
	((func_mindustry_maps_planet_ErekirPlanetGenerator_erase_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_erase_int_int_int])(ctx, (frame[0].o), (frame[6].i), (frame[7].i), (15));
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_8(ctx);
		auto proxy = (mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_8 *) gcAlloc(ctx, &class_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	jint temp6 = jint(2);
	jdouble temp7 = jdouble(0.6);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyciteFloor;
	((func_mindustry_maps_planet_ErekirPlanetGenerator_median_int_double_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_median_int_double_mindustry_world_Block])(ctx, sp[0].o, temp6, temp7, sp[1].o);
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyciteFloor;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_arkyicStone;
	((func_mindustry_maps_planet_ErekirPlanetGenerator_blend_mindustry_world_Block_mindustry_world_Block_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_blend_mindustry_world_Block_mindustry_world_Block_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(4.0f)));
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_slag;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_yellowStonePlates;
	((func_mindustry_maps_planet_ErekirPlanetGenerator_blend_mindustry_world_Block_mindustry_world_Block_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_blend_mindustry_world_Block_mindustry_world_Block_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(4.0f)));
	LINE_NUMBER(197);
	((func_mindustry_maps_planet_ErekirPlanetGenerator_distort_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_distort_float_float])(ctx, (frame[0].o), (jfloat(10.0f)), (jfloat(12.0f)));
	LINE_NUMBER(198);
	((func_mindustry_maps_planet_ErekirPlanetGenerator_distort_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_distort_float_float])(ctx, (frame[0].o), (jfloat(5.0f)), (jfloat(7.0f)));
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	jint temp8 = jint(2);
	jdouble temp9 = jdouble(0.6);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyciteFloor;
	((func_mindustry_maps_planet_ErekirPlanetGenerator_median_int_double_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_median_int_double_mindustry_world_Block])(ctx, sp[0].o, temp8, temp9, sp[1].o);
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	jint temp10 = jint(3);
	jdouble temp11 = jdouble(0.6);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_slag;
	((func_mindustry_maps_planet_ErekirPlanetGenerator_median_int_double_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_median_int_double_mindustry_world_Block])(ctx, sp[0].o, temp10, temp11, sp[1].o);
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_9(ctx);
		auto proxy = (mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_9 *) gcAlloc(ctx, &class_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_9);
		proxy->F_field2 = (frame[5].i);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[1].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, (frame[4].i), (frame[5].i));
	((func_mindustry_maps_planet_ErekirPlanetGenerator_inverseFloodFill_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_inverseFloodFill_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_redStoneWall;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_denseRedStone;
	((func_mindustry_maps_planet_ErekirPlanetGenerator_blend_mindustry_world_Block_mindustry_world_Block_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_blend_mindustry_world_Block_mindustry_world_Block_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(4.0f)));
	LINE_NUMBER(245);
	((func_mindustry_maps_planet_ErekirPlanetGenerator_erase_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_erase_int_int_int])(ctx, (frame[0].o), (frame[6].i), (frame[7].i), (6));
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_10(ctx);
		auto proxy = (mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_10 *) gcAlloc(ctx, &class_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_11(ctx);
		auto proxy = (mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_11 *) gcAlloc(ctx, &class_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Intc2_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(306);
	((func_mindustry_maps_planet_ErekirPlanetGenerator_trimDark) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_trimDark])(ctx, (frame[0].o));
	LINE_NUMBER(308);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp12 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, (6), (9));
	frame[9].i = temp12;
	LINE_NUMBER(309);
	frame[10].i = (jint(0));
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_34:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[12].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = frame[13].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_rhyolite;
	if (sp[0].o == sp[1].o) goto label_38;
	}
	{
	sp[0].o = frame[13].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_roughRhyolite;
	if (sp[0].o != sp[1].o) goto label_39;
	}
label_38:;
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(2,000000e-03)));
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(316);
	frame[14].i = (jint(2));
	LINE_NUMBER(317);
	frame[15].i = (-(frame[14].i));
	}
label_42:;
	{
	if ((frame[15].i) > (frame[14].i)) goto label_43;
	}
	{
	LINE_NUMBER(318);
	frame[16].i = (-(frame[14].i));
	}
label_45:;
	{
	if ((frame[16].i) > (frame[14].i)) goto label_46;
	}
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[15].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_x)), ((frame[16].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_y)));
	frame[17].o = sp[0].o;
	LINE_NUMBER(320);
	if ((frame[17].o) == nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[17].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_rhyolite;
	if (sp[0].o == sp[1].o) goto label_49;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[17].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_roughRhyolite;
	if (sp[0].o != sp[1].o) goto label_34;
	}
label_49:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[17].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_50;
	}
	LINE_NUMBER(321);
	goto label_34;
label_50:;
	{
	LINE_NUMBER(318);
	INST_IINC(16, 1);
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(317);
	INST_IINC(15, 1);
	goto label_42;
	}
label_43:;
	{
	LINE_NUMBER(326);
	INST_IINC(10, 1);
	LINE_NUMBER(327);
	clinit_mindustry_world_blocks_environment_SteamVent(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_environment_SteamVent_offsets;
	frame[15].o = sp[0].o;
	frame[16].i = (((jarray) nullCheck(ctx, (frame[15].o)))->length);
	frame[17].i = (jint(0));
	}
label_53:;
	{
	if ((frame[17].i) >= (frame[16].i)) goto label_39;
	}
	{
	frame[18].o = ((jobject)ARRAY_ACCESS(jobject, (frame[15].o), (frame[17].i)));
	LINE_NUMBER(328);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[18].o)))->F_x) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_x)) + (jint(1))), ((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[18].o)))->F_y) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_y)) + (jint(1))));
	frame[19].o = sp[0].o;
	LINE_NUMBER(329);
	sp[0].o = frame[19].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_rhyoliteVent;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(327);
	INST_IINC(17, 1);
	goto label_53;
	}
label_39:;
	LINE_NUMBER(332);
	goto label_34;
label_35:;
	{
	LINE_NUMBER(334);
	frame[11].i = (jint(0));
	LINE_NUMBER(335);
	frame[12].i = (jint(5));
	}
label_58:;
	{
	LINE_NUMBER(338);
	if ((frame[10].i) >= (frame[9].i)) goto label_59;
	}
	{
	jint temp0 = frame[11].i;
	INST_IINC(11, 1);
	if (temp0 >= (frame[12].i)) goto label_59;
	}
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	}
label_61:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_62;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(341);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, ((jdouble(1,800000e-04)) * (jdouble(((jint(1)) + (frame[11].i))))));
	if (temp0 == 0) goto label_64;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_x))), (jfloat(((jint)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_y))), (jfloat((frame[4].i))), (jfloat((frame[5].i))), (jfloat(5.0f)));
	if (temp0 != 0) goto label_64;
	}
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystallineStone;
	if (sp[0].o == sp[1].o) goto label_61;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystalFloor;
	if (sp[0].o != sp[1].o) goto label_66;
	}
	LINE_NUMBER(344);
	goto label_61;
label_66:;
	{
	LINE_NUMBER(347);
	frame[15].i = (jint(1));
	LINE_NUMBER(348);
	frame[16].i = (-(frame[15].i));
	}
label_69:;
	{
	if ((frame[16].i) > (frame[15].i)) goto label_70;
	}
	{
	LINE_NUMBER(349);
	frame[17].i = (-(frame[15].i));
	}
label_72:;
	{
	if ((frame[17].i) > (frame[15].i)) goto label_73;
	}
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[16].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_x)), ((frame[17].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_y)));
	frame[18].o = sp[0].o;
	LINE_NUMBER(352);
	if ((frame[18].o) == nullptr) goto label_61;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[18].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_61;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[18].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_attributes;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_steam;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) != 0) goto label_61;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[18].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_slag;
	if (sp[0].o == sp[1].o) goto label_61;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[18].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyciteFloor;
	if (sp[0].o != sp[1].o) goto label_76;
	}
	LINE_NUMBER(353);
	goto label_61;
label_76:;
	{
	LINE_NUMBER(349);
	INST_IINC(17, 1);
	goto label_72;
	}
label_73:;
	{
	LINE_NUMBER(348);
	INST_IINC(16, 1);
	goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(359);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_rhyolite;
	frame[16].o = sp[0].o;
	LINE_NUMBER(360);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_rhyoliteCrater;
	frame[17].o = sp[0].o;
	LINE_NUMBER(361);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_rhyoliteVent;
	frame[18].o = sp[0].o;
	LINE_NUMBER(363);
	frame[19].i = (jint(1));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_beryllicStone;
	if (sp[0].o == sp[1].o) goto label_82;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyicStone;
	if (sp[0].o != sp[1].o) goto label_83;
	}
label_82:;
	{
	LINE_NUMBER(366);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_arkyicStone;
	frame[17].o = sp[0].o;
	frame[16].o = sp[0].o;
	LINE_NUMBER(367);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_arkyicVent;
	frame[18].o = sp[0].o;
	goto label_85;
	}
label_83:;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_yellowStone;
	if (sp[0].o == sp[1].o) goto label_86;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_yellowStonePlates;
	if (sp[0].o == sp[1].o) goto label_86;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_regolith;
	if (sp[0].o != sp[1].o) goto label_87;
	}
label_86:;
	{
	LINE_NUMBER(369);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_yellowStone;
	frame[16].o = sp[0].o;
	LINE_NUMBER(370);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_yellowStonePlates;
	frame[17].o = sp[0].o;
	LINE_NUMBER(371);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_yellowStoneVent;
	frame[18].o = sp[0].o;
	goto label_85;
	}
label_87:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_redStone;
	if (sp[0].o == sp[1].o) goto label_90;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_denseRedStone;
	if (sp[0].o != sp[1].o) goto label_91;
	}
label_90:;
	{
	LINE_NUMBER(373);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_denseRedStone;
	frame[16].o = sp[0].o;
	LINE_NUMBER(374);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_redStone;
	frame[17].o = sp[0].o;
	LINE_NUMBER(375);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_redStoneVent;
	frame[18].o = sp[0].o;
	LINE_NUMBER(376);
	frame[19].i = (jint(-1));
	goto label_85;
	}
label_91:;
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_carbonStone;
	if (sp[0].o != sp[1].o) goto label_85;
	}
	{
	LINE_NUMBER(378);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_carbonStone;
	frame[17].o = sp[0].o;
	frame[16].o = sp[0].o;
	LINE_NUMBER(379);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_carbonVent;
	frame[18].o = sp[0].o;
	}
label_85:;
	{
	LINE_NUMBER(383);
	INST_IINC(10, 1);
	LINE_NUMBER(384);
	clinit_mindustry_world_blocks_environment_SteamVent(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_environment_SteamVent_offsets;
	frame[20].o = sp[0].o;
	frame[21].i = (((jarray) nullCheck(ctx, (frame[20].o)))->length);
	frame[22].i = (jint(0));
	}
label_98:;
	{
	if ((frame[22].i) >= (frame[21].i)) goto label_99;
	}
	{
	frame[23].o = ((jobject)ARRAY_ACCESS(jobject, (frame[20].o), (frame[22].i)));
	LINE_NUMBER(385);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[23].o)))->F_x) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_x)) + (jint(1))), ((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[23].o)))->F_y) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_y)) + (jint(1))));
	frame[24].o = sp[0].o;
	LINE_NUMBER(386);
	sp[0].o = frame[24].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[18].o));
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(384);
	INST_IINC(22, 1);
	goto label_98;
	}
label_99:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, (6), (14));
	frame[20].i = temp0;
	frame[21].i = ((frame[20].i) * (frame[20].i));
	LINE_NUMBER(392);
	frame[22].i = (-(frame[20].i));
	}
label_105:;
	{
	if ((frame[22].i) > (frame[20].i)) goto label_64;
	}
	{
	LINE_NUMBER(393);
	frame[23].i = (-(frame[20].i));
	}
label_107:;
	{
	if ((frame[23].i) > (frame[20].i)) goto label_108;
	}
	{
	LINE_NUMBER(394);
	frame[24].i = ((frame[22].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_x));
	frame[25].i = ((frame[23].i) + ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[14].o)))->F_y));
	LINE_NUMBER(396);
	frame[26].f = ((jfloat((frame[23].i))) + ((jfloat((frame[22].i))) * (jfloat(0.9f))));
	LINE_NUMBER(397);
	jfloat temp0 = (jfloat(((frame[22].i) * (frame[22].i)))) + ((frame[26].f) * (frame[26].f));
	jfloat temp1 = jfloat((frame[21].i));
	jfloat temp2 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[24].i))), ((jfloat((frame[25].i))) + (((jfloat((frame[24].i))) * (jfloat(2))) * (jfloat((frame[19].i))))), (jdouble(2.0)), (jdouble(0.699999988079071)), (jdouble(8.0)), (jdouble(((jfloat((frame[21].i))) * (jfloat(1.1f))))));
	if ((floatCompare(temp0, (temp1 - temp2), 1)) > 0) goto label_113;
	}
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[24].i), (frame[25].i));
	frame[27].o = sp[0].o;
	LINE_NUMBER(399);
	if ((frame[27].o) == nullptr) goto label_113;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[27].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_attributes;
	clinit_mindustry_world_meta_Attribute(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Attribute_steam;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) != 0) goto label_113;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[27].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_roughRhyolite;
	if (sp[0].o == sp[1].o) goto label_113;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[27].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyciteFloor;
	if (sp[0].o == sp[1].o) goto label_113;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[27].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_slag;
	if (sp[0].o == sp[1].o) goto label_113;
	}
	{
	LINE_NUMBER(401);
	sp[0].o = frame[27].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[1].o, (jdouble(0.08)));
	sp += 1;
	if (temp0 == 0) goto label_117;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[17].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[17].o));
	sp += 1;
	goto label_118;
	}
label_117:;
	INST_ALOAD(16);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_118:;
	{
	sp -= 2;
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(403);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[27].o));
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_113;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = frame[27].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[16].o));
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_wall;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_113:;
	{
	LINE_NUMBER(393);
	INST_IINC(23, 1);
	goto label_107;
	}
label_108:;
	{
	LINE_NUMBER(392);
	INST_IINC(22, 1);
	goto label_105;
	}
label_64:;
	LINE_NUMBER(412);
	goto label_61;
label_62:;
	goto label_58;
label_59:;
	{
	LINE_NUMBER(415);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	}
label_121:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_122;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(416);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_needsSurface) == 0) goto label_124;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[14].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_124;
	}
	{
	LINE_NUMBER(417);
	sp[0].o = frame[14].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_124:;
	LINE_NUMBER(419);
	goto label_121;
label_122:;
	{
	LINE_NUMBER(421);
	((func_mindustry_maps_planet_ErekirPlanetGenerator_decoration_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_decoration_float])(ctx, (frame[0].o), (jfloat(0.017f)));
	LINE_NUMBER(424);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_env = ((jint)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_defaultEnv);
	LINE_NUMBER(425);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_placeRangeCheck = (jint(1));
	LINE_NUMBER(428);
	SM_mindustry_game_Schematics_placeLaunchLoadout_int_int(ctx, (frame[4].i), (frame[5].i));
	LINE_NUMBER(431);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves = (jint(0));
	LINE_NUMBER(432);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_hideSpawns = (jint(0));
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$6_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:lambda$generate$6", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_ore;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_wallOre) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_ore;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_maps_planet_ErekirPlanetGenerator_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_ErekirPlanetGenerator_removeWall_int_int_int_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_removeWall_int_int_int_arc_func_Boolf])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	}
label_2:;
	LINE_NUMBER(304);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$7_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:lambda$generate$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(302);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_TallBlock));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$5_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:lambda$generate$5", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(255);
	jint temp0 = (jint)((func_mindustry_maps_planet_ErekirPlanetGenerator_nearAir_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_nearAir_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_carbonWall;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[1].i) + (78)))), (jfloat((frame[2].i))), (jdouble(4.0)), (jdouble(0.699999988079071)), (jdouble(33.0)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.52f)), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_graphiticWall;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_carbonWall;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[1].i) + (782)))), (jfloat((frame[2].i))), (jdouble(4.0)), (jdouble(0.800000011920929)), (jdouble(38.0)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.665f)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(259);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_wallOreBeryllium;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(263);
	jint temp0 = (jint)((func_mindustry_maps_planet_ErekirPlanetGenerator_nearWall_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_nearWall_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(265);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[1].i) + (150)))), (jfloat((((frame[2].i) + ((frame[1].i) * (jint(2)))) + (100)))), (jdouble(4.0)), (jdouble(0.800000011920929)), (jdouble(55.0)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.76f)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreTungsten;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(270);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[1].i) + (999)))), (jfloat((((frame[2].i) + (600)) - (frame[1].i)))), (jdouble(4.0)), (jdouble(0.6299999952316284)), (jdouble(45.0)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.27f)), 1)) >= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystallineStone;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreCrystalThorium;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(276);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[1].i) + (999)))), (jfloat((((frame[2].i) + (600)) - (frame[1].i)))), (jdouble(5.0)), (jdouble(0.800000011920929)), (jdouble(45.0)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.44f)), 1)) >= 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystallineStone;
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystalFloor;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystallineStone;
	if (sp[0].o == sp[1].o) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystalFloor;
	if (sp[0].o != sp[1].o) goto label_14;
	}
label_15:;
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.09)));
	if (temp0 == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_mindustry_maps_planet_ErekirPlanetGenerator_nearWall_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_nearWall_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystalCluster;
	LINE_NUMBER(281);
	jint temp3 = (jint)((func_mindustry_maps_planet_ErekirPlanetGenerator_near_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_near_int_int_int_mindustry_world_Block_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	if (temp3 != 0) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_vibrantCrystalCluster;
	jint temp3 = (jint)((func_mindustry_maps_planet_ErekirPlanetGenerator_near_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_near_int_int_int_mindustry_world_Block_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	if (temp3 != 0) goto label_14;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_crystalFloor;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_18;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_vibrantCrystalCluster;
	goto label_19;
label_18:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_crystalCluster;
label_19:;
	{
	sp -= 2;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyicWall;
	if (sp[0].o != sp[1].o) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.23)));
	if (temp0 == 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_mindustry_maps_planet_ErekirPlanetGenerator_nearAir_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_nearAir_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystalOrbs;
	jint temp3 = (jint)((func_mindustry_maps_planet_ErekirPlanetGenerator_near_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_near_int_int_int_mindustry_world_Block_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	if (temp3 != 0) goto label_21;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystalOrbs;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_21:;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_regolithWall;
	if (sp[0].o != sp[1].o) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.3)));
	if (temp0 == 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_mindustry_maps_planet_ErekirPlanetGenerator_nearAir_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_nearAir_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystalBlocks;
	jint temp3 = (jint)((func_mindustry_maps_planet_ErekirPlanetGenerator_near_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_near_int_int_int_mindustry_world_Block_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	if (temp3 != 0) goto label_24;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_crystalBlocks;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_24:;
	LINE_NUMBER(297);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$4_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:lambda$generate$4", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(208);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[3].i))), (jfloat((((frame[4].i) + (600)) + (frame[3].i)))), (jdouble(5.0)), (jdouble(0.8600000143051147)), (jdouble(60.0)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.41f)), 1)) >= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_rhyolite;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_roughRhyolite;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_slag;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	jfloat temp0 = jfloat((frame[3].i));
	jfloat temp1 = jfloat((frame[4].i));
	jfloat temp2 = jfloat((frame[1].i));
	jfloat temp3 = jfloat((frame[2].i));
	jfloat temp4 = jfloat(30.0f);
	jfloat temp5 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[3].i))), (jfloat((frame[4].i))), (jdouble(2.0)), (jdouble(0.800000011920929)), (jdouble(9.0)), (jdouble(15.0)));
	jint temp6 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, temp3, (temp4 + temp5));
	if (temp6 == 0) goto label_3;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_yellowStonePlates;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyciteFloor;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyicStone;
	if (sp[0].o != sp[1].o) goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isStatic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isStatic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyicWall;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(220);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(221);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_11:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_12;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(223);
	jfloat temp0 = frame[5].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp1 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, ((frame[3].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[9].o)))->F_x)), ((frame[4].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[9].o)))->F_y)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[5].f = temp2;
	LINE_NUMBER(221);
	INST_IINC(8, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(225);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_wall;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_yellowStoneWall;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_15:;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_yellowStonePlates;
	if (sp[0].o != sp[1].o) goto label_18;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((((frame[3].i) + (78)) + (frame[4].i)))), (jfloat((frame[4].i))), (jdouble(3.0)), (jdouble(0.800000011920929)), (jdouble(6.0)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.44f)), -1)) <= 0) goto label_18;
	}
	{
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_yellowStone;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_18:;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_redStone;
	if (sp[0].o != sp[1].o) goto label_20;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((((frame[3].i) + (78)) - (frame[4].i)))), (jfloat((frame[4].i))), (jdouble(4.0)), (jdouble(0.7300000190734863)), (jdouble(19.0)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.63f)), -1)) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_denseRedStone;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_20:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$3_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:lambda$generate$3", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_beryllicStone;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(177);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[1].i))), ((jfloat((frame[2].i))) + (jfloat(500.0f))), (jdouble(5.0)), (jdouble(0.6000000238418579)), (jdouble(40.0)), (jdouble(1)));
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - (jfloat(0.5f))));
	if ((floatCompare(temp1, (jfloat(0.09f)), 1)) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyicStone;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)((func_mindustry_maps_planet_ErekirPlanetGenerator_nearWall_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_nearWall_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(183);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[1].i) + (300)))), (((jfloat((frame[2].i))) - ((jfloat((frame[1].i))) * (jfloat(1.6f)))) + (jfloat(100.0f))), (jdouble(4.0)), (jdouble(0.800000011920929)), (jdouble((clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_liqScl))), (jdouble(1)));
	frame[3].f = temp0;
	LINE_NUMBER(185);
	if ((floatCompare((frame[3].f), (clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx), (jfloat)SF_mindustry_maps_planet_ErekirPlanetGenerator_liqThresh), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_arkyciteFloor;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(188);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$2_float_mindustry_world_Tile_R_float(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:lambda$generate$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(169);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->f = jfloat(300.0f);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	{
	sp -= 1;
	jfloat temp0 = sp[0].f + (frame[1].f);
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_dst_float_float_R_float])(ctx, (frame[2].o), ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(2))), ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height))) / (jfloat(2))));
	popStackFrame(ctx);
	return (temp0 - (temp1 / (jfloat(10.0f))));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$1_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:lambda$generate$1", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_regolith;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jdouble(3.0)), (jdouble(0.4000000059604645)), (jdouble(13.0)), (jdouble(1)));
	if ((floatCompare(temp0, (jfloat(0.59f)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_regolithWall;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(156);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$0_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:lambda$generate$0", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_redIce;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(131);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[1].i) + (782)))), (jfloat((frame[2].i))), (jdouble(7.0)), (jdouble(0.800000011920929)), (jdouble(280.0)), (jdouble(1)));
	frame[3].f = temp0;
	LINE_NUMBER(132);
	if ((floatCompare((frame[3].f), (jfloat(0.62f)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(133);
	if ((floatCompare((frame[3].f), (jfloat(0.635f)), -1)) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_slag;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_yellowStone;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(142);
	if ((floatCompare((frame[3].f), (jfloat(0.55f)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_beryllicStone;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_yellowStone;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_maps_planet_ErekirPlanetGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/ErekirPlanetGenerator:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	{
	LINE_NUMBER(22);
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_arkThresh = (jfloat(0.28f));
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_arkScl = (jfloat(0.83f));
	LINE_NUMBER(23);
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_arkSeed = (7);
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_arkOct = (jint(2));
	LINE_NUMBER(24);
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_liqThresh = (jfloat(0.64f));
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_liqScl = (jfloat(87.0f));
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_redThresh = (jfloat(3.1f));
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_noArkThresh = (jfloat(0.3f));
	LINE_NUMBER(25);
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalSeed = (8);
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalOct = (jint(2));
	LINE_NUMBER(26);
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalScl = (jfloat(0.9f));
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalMag = (jfloat(0.3f));
	LINE_NUMBER(27);
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_airThresh = (jfloat(0.13f));
	clinit_mindustry_maps_planet_ErekirPlanetGenerator(ctx);
	SF_mindustry_maps_planet_ErekirPlanetGenerator_airScl = (jfloat(14.0f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_planet_ErekirPlanetGenerator[] {
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
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_generate,
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
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color,
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
	(void *) M_mindustry_maps_generators_PlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_getSizeScl_R_float,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getSectorSize_mindustry_type_Sector_R_int,
	(void *) M_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_rawTemp_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$6_int_int,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$5_int_int,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$4_int_int_int_int,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$3_int_int,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$2_float_mindustry_world_Tile_R_float,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$1_int_int,
	(void *) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$0_int_int,
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
	{ "rawHeight", "(Larc/math/geom/Vec3;)F" },
	{ "rawTemp", "(Larc/math/geom/Vec3;)F" },
	{ "getBlock", "(Larc/math/geom/Vec3;)Lmindustry/world/Block;" },
	{ "lambda$generate$6", "(II)V" },
	{ "lambda$generate$5", "(II)V" },
	{ "lambda$generate$4", "(IIII)V" },
	{ "lambda$generate$3", "(II)V" },
	{ "lambda$generate$2", "(FLmindustry/world/Tile;)F" },
	{ "lambda$generate$1", "(II)V" },
	{ "lambda$generate$0", "(II)V" },
};

static FieldMetadata fields[] {
	{ "heightScl", &class_float, offsetof(mindustry_maps_planet_ErekirPlanetGenerator, F_heightScl), "F", 1 },
	{ "octaves", &class_float, offsetof(mindustry_maps_planet_ErekirPlanetGenerator, F_octaves), "F", 1 },
	{ "persistence", &class_float, offsetof(mindustry_maps_planet_ErekirPlanetGenerator, F_persistence), "F", 1 },
	{ "heightPow", &class_float, offsetof(mindustry_maps_planet_ErekirPlanetGenerator, F_heightPow), "F", 1 },
	{ "heightMult", &class_float, offsetof(mindustry_maps_planet_ErekirPlanetGenerator, F_heightMult), "F", 1 },
	{ "arkThresh", &class_float, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_arkThresh, "F", 9 },
	{ "arkScl", &class_float, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_arkScl, "F", 9 },
	{ "arkSeed", &class_int, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_arkSeed, "I", 9 },
	{ "arkOct", &class_int, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_arkOct, "I", 9 },
	{ "liqThresh", &class_float, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_liqThresh, "F", 9 },
	{ "liqScl", &class_float, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_liqScl, "F", 9 },
	{ "redThresh", &class_float, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_redThresh, "F", 9 },
	{ "noArkThresh", &class_float, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_noArkThresh, "F", 9 },
	{ "crystalSeed", &class_int, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalSeed, "I", 9 },
	{ "crystalOct", &class_int, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalOct, "I", 9 },
	{ "crystalScl", &class_float, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalScl, "F", 9 },
	{ "crystalMag", &class_float, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_crystalMag, "F", 9 },
	{ "airThresh", &class_float, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_airThresh, "F", 9 },
	{ "airScl", &class_float, (intptr_t) &SF_mindustry_maps_planet_ErekirPlanetGenerator_airScl, "F", 9 },
	{ "terrain", getArrayClass(&class_mindustry_world_Block, 1), offsetof(mindustry_maps_planet_ErekirPlanetGenerator, F_terrain), "[Lmindustry/world/Block;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_planet_ErekirPlanetGenerator, 0, "()V", 1 },
	{ "getHeight", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getColor", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
	{ "getSizeScl", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_getSizeScl_R_float, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_getSizeScl_R_float, "()F", 1 },
	{ "rawHeight", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 0 },
	{ "rawTemp", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_rawTemp_arc_math_geom_Vec3_R_float, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_rawTemp_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 0 },
	{ "getBlock", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block, "(Larc/math/geom/Vec3;)Lmindustry/world/Block;", 0 },
	{ "genTile", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen, "(Larc/math/geom/Vec3;Lmindustry/world/TileGen;)V", 1 },
	{ "generate", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_generate, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_generate, "()V", 4 },
	{ "lambda$generate$6", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$6_int_int, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$6_int_int, "(II)V", 4098 },
	{ "lambda$generate$7", (intptr_t) SM_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$7_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$generate$5", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$5_int_int, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$5_int_int, "(II)V", 4098 },
	{ "lambda$generate$4", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$4_int_int_int_int, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$4_int_int_int_int, "(IIII)V", 4098 },
	{ "lambda$generate$3", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$3_int_int, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$3_int_int, "(II)V", 4098 },
	{ "lambda$generate$2", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$2_float_mindustry_world_Tile_R_float, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$2_float_mindustry_world_Tile_R_float, "(FLmindustry/world/Tile;)F", 4098 },
	{ "lambda$generate$1", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$1_int_int, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$1_int_int, "(II)V", 4098 },
	{ "lambda$generate$0", (intptr_t) M_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$0_int_int, VTABLE_mindustry_maps_planet_ErekirPlanetGenerator_lambda$generate$0_int_int, "(II)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_planet_ErekirPlanetGenerator, 0, "()V", 8 },
};

Class class_mindustry_maps_planet_ErekirPlanetGenerator{
		.nativeName = (intptr_t) "mindustry/maps/planet/ErekirPlanetGenerator",
		.parentClass = (intptr_t) &class_mindustry_maps_generators_PlanetGenerator,
		.size = sizeof(mindustry_maps_planet_ErekirPlanetGenerator),
		.classVtable = (intptr_t) vtable_mindustry_maps_planet_ErekirPlanetGenerator,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_planet_ErekirPlanetGenerator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_planet_ErekirPlanetGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 92,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_planet_ErekirPlanetGenerator = registerClass(&class_mindustry_maps_planet_ErekirPlanetGenerator);

}
