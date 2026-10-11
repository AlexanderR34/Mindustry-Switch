#include "mindustry/maps/planet/TantrosPlanetGenerator.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/game/Rules.h"
#include "arc/math/geom/Point2.h"
#include "arc/graphics/Color.h"
#include "arc/math/geom/Vec3.h"
#include "java/lang/String.h"
#include "arc/util/Tmp.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/util/noise/Simplex.h"
#include "mindustry/type/Sector.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/maps/planet/TantrosPlanetGenerator.h"
#include "mindustry/maps/planet/TantrosPlanetGenerator_invoke_arc_func_Intc2_1.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/world/TileGen.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/maps/generators/WorldGenerator.h"
#include "mindustry/maps/generators/BasicGenerator.h"

extern "C" {


void mark_mindustry_maps_planet_TantrosPlanetGenerator(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_planet_TantrosPlanetGenerator *) object;
	if (self->F_c1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c1)->clazz)->markFunction)((jobject) self->F_c1, mark, depth + 1);
	if (self->F_c2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c2)->clazz)->markFunction)((jobject) self->F_c2, mark, depth + 1);
	if (self->F_arr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arr)->clazz)->markFunction)((jobject) self->F_arr, mark, depth + 1);
}

void clinit_mindustry_maps_planet_TantrosPlanetGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
}

void init_mindustry_maps_planet_TantrosPlanetGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/TantrosPlanetGenerator:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_TantrosPlanetGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_mindustry_maps_generators_PlanetGenerator(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"5057a6"_j))));
	((mindustry_maps_planet_TantrosPlanetGenerator *) NULL_CHECK(sp[0].o))->F_c1 = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"272766"_j))));
	((mindustry_maps_planet_TantrosPlanetGenerator *) NULL_CHECK(sp[0].o))->F_c2 = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_mindustry_world_Block, 1), (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(5)));
	jint temp1 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_redmat;
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	jint temp2 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_redmat;
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	jint temp3 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	jint temp4 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_bluemat;
	ARRAY_ACCESS(jobject, sp[2].o, temp4) = sp[3].o;
	jint temp5 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_bluemat;
	ARRAY_ACCESS(jobject, sp[2].o, temp5) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((mindustry_maps_planet_TantrosPlanetGenerator *) NULL_CHECK(sp[0].o))->F_arr = (jref) sp[1].o;
	LINE_NUMBER(24);
	((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_baseSeed = (jint(1));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_TantrosPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/TantrosPlanetGenerator:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_TantrosPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/TantrosPlanetGenerator:getColor", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(34);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(2.0)), (jdouble(0.56)), (jdouble(1.7000000476837158)), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))));
	frame[3].f = (temp0 / (jfloat(2)));
	LINE_NUMBER(35);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_maps_planet_TantrosPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_maps_planet_TantrosPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_c2;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_round_float_float_R_float(ctx, (frame[3].f), (jfloat(0.15f)));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp1);
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp2);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.8f)));
	jfloat temp3 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_TantrosPlanetGenerator_getSizeScl_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/TantrosPlanetGenerator:getSizeScl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (jfloat(2000.0f));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_TantrosPlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/TantrosPlanetGenerator:addWeather", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_TantrosPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/TantrosPlanetGenerator:genTile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(50);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_maps_planet_TantrosPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block])(ctx, (frame[0].o), (frame[1].o));
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_world_TileGen *) NULL_CHECK((frame[2].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_redmat;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.1)));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_redweed;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((mindustry_world_TileGen *) NULL_CHECK((frame[2].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_bluemat;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.03)));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_purbush;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_world_TileGen *) NULL_CHECK((frame[2].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_bluemat;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(2,000000e-03)));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_yellowCoral;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_6:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_TantrosPlanetGenerator_generate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/TantrosPlanetGenerator:generate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_TantrosPlanetGenerator_invoke_arc_func_Intc2_1(ctx);
		auto proxy = (mindustry_maps_planet_TantrosPlanetGenerator_invoke_arc_func_Intc2_1 *) gcAlloc(ctx, &class_mindustry_maps_planet_TantrosPlanetGenerator_invoke_arc_func_Intc2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_TantrosPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	SM_mindustry_game_Schematics_placeLaunchLoadout_int_int(ctx, (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2))), (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2))));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_TantrosPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/TantrosPlanetGenerator:rawHeight", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(85);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(8.0)), (jdouble(0.699999988079071)), (jdouble(1)), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_planet_TantrosPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/TantrosPlanetGenerator:getBlock", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_TantrosPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(90);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v31;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(91);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v33;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(2)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(92);
	jfloat temp1 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(8.0)), (jdouble(0.6)), (jdouble(0.5)), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))), (jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(99.0f))))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))));
	frame[3].f = temp1;
	LINE_NUMBER(93);
	frame[2].f = ((frame[2].f) * (jfloat(1.2f)));
	LINE_NUMBER(94);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[2].f));
	frame[2].f = temp2;
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_maps_planet_TantrosPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	jfloat temp3 = frame[3].f;
	sp[1].o = (jobject)((mindustry_maps_planet_TantrosPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp4 = jint((temp3 * (jfloat((((jarray) nullCheck(ctx, sp[1].o))->length)))));
	jint temp5 = jint(0);
	sp[1].o = (jobject)((mindustry_maps_planet_TantrosPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp6 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp4, temp5, ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->length) - (jint(1))));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp6);
	jfloat temp7 = frame[2].f;
	sp[1].o = (jobject)((mindustry_maps_planet_TantrosPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp8 = jint((temp7 * (jfloat((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->length)))));
	jint temp9 = jint(0);
	sp[1].o = (jobject)((mindustry_maps_planet_TantrosPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp10 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp8, temp9, ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->length) - (jint(1))));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp10));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_TantrosPlanetGenerator_lambda$generate$0_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/TantrosPlanetGenerator:lambda$generate$0", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(68);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(69);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_5;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(70);
	jfloat temp0 = frame[3].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp1 = (jfloat)((func_mindustry_core_World_getDarkness_int_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_getDarkness_int_int_R_float])(ctx, sp[0].o, ((frame[1].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_x)), ((frame[2].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[7].o)))->F_y)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[3].f = temp2;
	LINE_NUMBER(69);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(72);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_wall;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(76);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_TantrosPlanetGenerator_noise_float_float_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_noise_float_float_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jdouble(40.0)), (jdouble(1)));
	if ((doubleCompare((jdouble(temp0)), (jdouble(0.9)), -1)) <= 0) goto label_10;
	}
label_10:;
	LINE_NUMBER(79);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_planet_TantrosPlanetGenerator[] {
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
	(void *) M_mindustry_maps_planet_TantrosPlanetGenerator_generate,
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
	(void *) M_mindustry_maps_planet_TantrosPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_maps_planet_TantrosPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color,
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
	(void *) M_mindustry_maps_planet_TantrosPlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules,
	(void *) M_mindustry_maps_planet_TantrosPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen,
	(void *) M_mindustry_maps_planet_TantrosPlanetGenerator_getSizeScl_R_float,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getSectorSize_mindustry_type_Sector_R_int,
	(void *) M_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams,
	(void *) M_mindustry_maps_planet_TantrosPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_maps_planet_TantrosPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block,
	(void *) M_mindustry_maps_planet_TantrosPlanetGenerator_lambda$generate$0_int_int,
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
	{ "getBlock", "(Larc/math/geom/Vec3;)Lmindustry/world/Block;" },
	{ "lambda$generate$0", "(II)V" },
};

static FieldMetadata fields[] {
	{ "c1", &class_arc_graphics_Color, offsetof(mindustry_maps_planet_TantrosPlanetGenerator, F_c1), "Larc/graphics/Color;", 0 },
	{ "c2", &class_arc_graphics_Color, offsetof(mindustry_maps_planet_TantrosPlanetGenerator, F_c2), "Larc/graphics/Color;", 0 },
	{ "arr", getArrayClass(&class_mindustry_world_Block, 2), offsetof(mindustry_maps_planet_TantrosPlanetGenerator, F_arr), "[[Lmindustry/world/Block;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_planet_TantrosPlanetGenerator, 0, "()V", 1 },
	{ "getHeight", (intptr_t) M_mindustry_maps_planet_TantrosPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float, VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getColor", (intptr_t) M_mindustry_maps_planet_TantrosPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
	{ "getSizeScl", (intptr_t) M_mindustry_maps_planet_TantrosPlanetGenerator_getSizeScl_R_float, VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_getSizeScl_R_float, "()F", 1 },
	{ "addWeather", (intptr_t) M_mindustry_maps_planet_TantrosPlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules, VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules, "(Lmindustry/type/Sector;Lmindustry/game/Rules;)V", 1 },
	{ "genTile", (intptr_t) M_mindustry_maps_planet_TantrosPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen, VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen, "(Larc/math/geom/Vec3;Lmindustry/world/TileGen;)V", 1 },
	{ "generate", (intptr_t) M_mindustry_maps_planet_TantrosPlanetGenerator_generate, VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_generate, "()V", 4 },
	{ "rawHeight", (intptr_t) M_mindustry_maps_planet_TantrosPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float, VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 0 },
	{ "getBlock", (intptr_t) M_mindustry_maps_planet_TantrosPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block, VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_getBlock_arc_math_geom_Vec3_R_mindustry_world_Block, "(Larc/math/geom/Vec3;)Lmindustry/world/Block;", 0 },
	{ "lambda$generate$0", (intptr_t) M_mindustry_maps_planet_TantrosPlanetGenerator_lambda$generate$0_int_int, VTABLE_mindustry_maps_planet_TantrosPlanetGenerator_lambda$generate$0_int_int, "(II)V", 4098 },
};

Class class_mindustry_maps_planet_TantrosPlanetGenerator{
		.nativeName = (intptr_t) "mindustry/maps/planet/TantrosPlanetGenerator",
		.parentClass = (intptr_t) &class_mindustry_maps_generators_PlanetGenerator,
		.size = sizeof(mindustry_maps_planet_TantrosPlanetGenerator),
		.classVtable = (intptr_t) vtable_mindustry_maps_planet_TantrosPlanetGenerator,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_planet_TantrosPlanetGenerator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_planet_TantrosPlanetGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 85,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_planet_TantrosPlanetGenerator = registerClass(&class_mindustry_maps_planet_TantrosPlanetGenerator);

}
