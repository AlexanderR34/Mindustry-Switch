#include "mindustry/maps/planet/AsteroidGenerator.h"
#include "mindustry/maps/planet/AsteroidGenerator_invoke_arc_func_Intc2_5.h"
#include "mindustry/maps/planet/AsteroidGenerator_invoke_arc_func_Intc2_4.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "mindustry/maps/planet/AsteroidGenerator_invoke_arc_func_Cons_1.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/maps/planet/AsteroidGenerator_invoke_arc_func_Intc2_7.h"
#include "mindustry/game/Rules.h"
#include "mindustry/maps/planet/AsteroidGenerator_invoke_arc_func_Intc2_6.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/maps/generators/BlankPlanetGenerator.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/game/Waves.h"
#include "arc/struct/Seq.h"
#include "arc/util/noise/Ridged.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/maps/planet/AsteroidGenerator.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/noise/Simplex.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/content/Loadouts.h"
#include "mindustry/type/Sector.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/util/Nullable.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/type/Planet.h"
#include "mindustry/maps/planet/AsteroidGenerator_1.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/maps/generators/WorldGenerator.h"
#include "mindustry/graphics/g3d/PlanetParams.h"
#include "mindustry/maps/generators/BasicGenerator.h"

extern "C" {


void mark_mindustry_maps_planet_AsteroidGenerator(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_maps_generators_BlankPlanetGenerator(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_planet_AsteroidGenerator *) object;
	if (self->F_rand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rand)->clazz)->markFunction)((jobject) self->F_rand, mark, depth + 1);
}

void clinit_mindustry_maps_planet_AsteroidGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_generators_BlankPlanetGenerator(ctx);
}

void init_mindustry_maps_planet_AsteroidGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_AsteroidGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_mindustry_maps_generators_BlankPlanetGenerator(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_min = (20);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_max = (30);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_octaves = (jint(2));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_foct = (jint(3));
	LINE_NUMBER(18);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_radMin = (jfloat(12.0f));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_radMax = (jfloat(60.0f));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_persistence = (jfloat(0.4f));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(30.0f));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_mag = (jfloat(0.46f));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_thresh = (jfloat(1));
	LINE_NUMBER(19);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_fmag = (jfloat(0.5f));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_fscl = (jfloat(50.0f));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_fper = (jfloat(0.6f));
	LINE_NUMBER(20);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_stoneChance = (jfloat(0));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_iceChance = (jfloat(0));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_carbonChance = (jfloat(0));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_berylChance = (jfloat(0));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_ferricChance = (jfloat(1));
	LINE_NUMBER(22);
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_thoriumScl = (jfloat(1));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_copperScale = (jfloat(1));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_leadScale = (jfloat(1));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_graphiteScale = (jfloat(1));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_berylliumScale = (jfloat(1));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Loadouts(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Loadouts_basicNucleus;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_defaultLoadout = (jref) sp[1].o;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_AsteroidGenerator_asteroid_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator:asteroid", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_iceChance))));
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_ice;
	goto label_2;
label_1:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_carbonChance))));
	if (temp0 == 0) goto label_3;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_carbonStone;
	goto label_2;
label_3:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_berylChance))));
	if (temp0 == 0) goto label_4;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_beryllicStone;
	goto label_2;
label_4:;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_ferricChance))));
	if (temp0 == 0) goto label_5;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_ferricStone;
	goto label_2;
label_5:;
	LINE_NUMBER(37);
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_stone;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(40);
	frame[5].i = ((frame[1].i) - (frame[3].i));
	}
label_7:;
	{
	if ((frame[5].i) > ((frame[1].i) + (frame[3].i))) goto label_8;
	}
	{
	LINE_NUMBER(41);
	frame[6].i = ((frame[2].i) - (frame[3].i));
	}
label_10:;
	{
	if ((frame[6].i) > ((frame[2].i) + (frame[3].i))) goto label_11;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, sp[0].o, (frame[5].i), (frame[6].i));
	if (temp0 == 0) goto label_13;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (jfloat((frame[5].i))), (jfloat((frame[6].i))), (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	jfloat temp1 = temp0 / (jfloat((frame[3].i)));
	jfloat temp2 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_octaves))), (jdouble(((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_persistence))), (jdouble(((jfloat(1)) / ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_scale)))), (jdouble((frame[5].i))), (jdouble((frame[6].i))));
	if ((floatCompare((temp1 + (temp2 * ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_mag))), ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_thresh), 1)) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[5].i), (frame[6].i));
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, (frame[4].o));
	}
label_13:;
	{
	LINE_NUMBER(41);
	INST_IINC(6, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(40);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_AsteroidGenerator_generate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator:generate", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK(sp[0].o))->F_seed = ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id);
	LINE_NUMBER(52);
	frame[1].i = (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2)));
	frame[2].i = (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2)));
	LINE_NUMBER(53);
	sp[0].o = frame[0].o;
	clinit_arc_math_Rand(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand_long(ctx, sp[1].o, (jlong(((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_seed))));
	((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK(sp[0].o))->F_rand = (jref) sp[1].o;
	LINE_NUMBER(55);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_empty;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(57);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Tiles_eachTile_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_eachTile_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp2 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[1].o, (30), (50));
	((func_mindustry_maps_planet_AsteroidGenerator_asteroid_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_asteroid_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp3 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, ((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_min), ((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_max));
	frame[4].i = temp3;
	LINE_NUMBER(63);
	frame[5].i = (jint(0));
	}
label_9:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_10;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_radMin), ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_radMax));
	frame[6].f = temp0;
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (frame[6].f), ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))) - (frame[6].f)));
	frame[7].f = temp1;
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp2 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (frame[6].f), ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height))) - (frame[6].f)));
	frame[8].f = temp2;
	LINE_NUMBER(66);
	((func_mindustry_maps_planet_AsteroidGenerator_asteroid_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_asteroid_int_int_int])(ctx, (frame[0].o), (jint((frame[7].f))), (jint((frame[8].f))), (jint((frame[6].f))));
	LINE_NUMBER(63);
	INST_IINC(5, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, ((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_min), ((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_max));
	frame[5].i = (temp0 * (jint(3)));
	LINE_NUMBER(71);
	frame[6].i = (jint(0));
	}
label_17:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_18;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, (jint(1)), (8));
	frame[7].f = (jfloat(temp0));
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (frame[7].f), ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))) - (frame[7].f)));
	frame[8].f = temp1;
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp2 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (frame[7].f), ((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height))) - (frame[7].f)));
	frame[9].f = temp2;
	LINE_NUMBER(74);
	((func_mindustry_maps_planet_AsteroidGenerator_asteroid_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_asteroid_int_int_int])(ctx, (frame[0].o), (jint((frame[8].f))), (jint((frame[9].f))), (jint((frame[7].f))));
	LINE_NUMBER(71);
	INST_IINC(6, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_4(ctx);
		auto proxy = (mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_4 *) gcAlloc(ctx, &class_mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_4);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_AsteroidGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_5(ctx);
		auto proxy = (mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_5 *) gcAlloc(ctx, &class_mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_5);
		proxy->F_field3 = (frame[2].i);
		proxy->F_field2 = (frame[1].i);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_AsteroidGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_6(ctx);
		auto proxy = (mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_6 *) gcAlloc(ctx, &class_mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_AsteroidGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(108);
	((func_mindustry_maps_planet_AsteroidGenerator_decoration_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_decoration_float])(ctx, (frame[0].o), (jfloat(0.017f)));
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreLead;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_stoneWall;
	((func_mindustry_maps_planet_AsteroidGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_oreAround_mindustry_world_Block_mindustry_world_Block_int_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(3)), (jfloat(70.0f)), ((jfloat(0.6f)) * ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_leadScale)));
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreCopper;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_ferricStone;
	((func_mindustry_maps_planet_AsteroidGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(5.0f)), ((jfloat(0.8f)) * ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_copperScale)));
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreThorium;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_beryllicStone;
	((func_mindustry_maps_planet_AsteroidGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(4.0f)), ((jfloat(0.9f)) * ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_thoriumScl)));
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreThorium;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_carbonStone;
	((func_mindustry_maps_planet_AsteroidGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_ore_mindustry_world_Block_mindustry_world_Block_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(4.0f)), ((jfloat(0.9f)) * ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_thoriumScl)));
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_carbonWall;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_graphiticWall;
	((func_mindustry_maps_planet_AsteroidGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(35.0f)), ((jfloat(0.57f)) * ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_graphiteScale)));
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_beryllicStoneWall;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_wallOreBeryllium;
	((func_mindustry_maps_planet_AsteroidGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_wallOre_mindustry_world_Block_mindustry_world_Block_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (jfloat(50.0f)), ((jfloat(0.62f)) * ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_berylliumScale)));
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_7(ctx);
		auto proxy = (mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_7 *) gcAlloc(ctx, &class_mindustry_maps_planet_AsteroidGenerator_invoke_arc_func_Intc2_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_AsteroidGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_random_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_R_int])(ctx, sp[0].o, (jint(3)));
	frame[6].i = temp0;
	LINE_NUMBER(135);
	frame[7].i = ((((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2))) - (jint(1)));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp1 = frame[7].i;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8edge;
	jint temp2 = (temp1 * ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_x)) + (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2)));
	jint temp3 = frame[7].i;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d8edge;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp2, ((temp3 * ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[6].i)))))->F_y)) + (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2)))));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(138);
	SM_mindustry_game_Schematics_placeLaunchLoadout_int_int(ctx, (frame[1].i), (frame[2].i));
	LINE_NUMBER(140);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	clinit_mindustry_maps_planet_AsteroidGenerator$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_planet_AsteroidGenerator$1);
	init_mindustry_maps_planet_AsteroidGenerator$1_mindustry_maps_planet_AsteroidGenerator(ctx, sp[1].o, (frame[0].o));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planetBackground = (jref) sp[1].o;
	LINE_NUMBER(146);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dragMultiplier = (jfloat(0.7f));
	LINE_NUMBER(147);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_borderDarkness = (jint(0));
	LINE_NUMBER(148);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves = (jint(1));
	LINE_NUMBER(151);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_hideSpawns = (jint(0));
	LINE_NUMBER(153);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp4 = jfloat(0.5f);
	sp[1].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	sp[1].o = (jobject)SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_boolean_R_arc_struct_Seq(ctx, temp4, sp[1].o, (jint(0)), (jint(1)), (jint(0)));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_maps_planet_AsteroidGenerator_getSectorSize_mindustry_type_Sector_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator:getSectorSize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (500);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_AsteroidGenerator_access$000_mindustry_maps_planet_AsteroidGenerator_R_mindustry_type_Sector(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_AsteroidGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$4_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator:lambda$generate$4", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_stone;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(127);
	frame[3].i = (jint(4));
	LINE_NUMBER(129);
	jfloat temp0 = jfloat(0.5f);
	jfloat temp1 = (jfloat)((func_mindustry_maps_planet_AsteroidGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_AsteroidGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[1].i))), ((jfloat(((frame[2].i) + ((frame[3].i) * (999))))) - ((jfloat((frame[1].i))) * (jfloat(1.5f)))), (jdouble(2.0)), (jdouble(0.65)), (jdouble(((60) + ((frame[3].i) * (jint(2)))))));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp1));
	if ((floatCompare(temp2, (jfloat(0.26f)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreTitanium;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$3_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator:lambda$generate$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_ferricStone;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.02)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_ferricCraters;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_stone;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.02)));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_craters;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_2:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$2_mindustry_world_blocks_environment_Floor_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator:lambda$generate$2", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_double_R_float(ctx, (((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_seed) + (jint(1))), (jdouble((frame[4].i))), (jdouble((frame[5].i))), (jint(4)), (jdouble(0.699999988079071)), (jdouble(0.01666666753590107)));
	if ((floatCompare(temp0, (jfloat(0.45f)), -1)) > 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat((frame[4].i));
	jfloat temp1 = jfloat((frame[5].i));
	jfloat temp2 = jfloat((frame[2].i));
	jfloat temp3 = jfloat((frame[3].i));
	jfloat temp4 = jfloat(20.0f);
	jfloat temp5 = (jfloat)SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_double_R_float(ctx, ((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble((frame[4].i))), (jdouble((frame[5].i))), (jint(3)), (jdouble(0.5)), (jdouble(0.03333333507180214)));
	jint temp6 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, temp0, temp1, temp2, temp3, (temp4 + (temp5 * (jfloat(6.0f)))));
	if (temp6 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(90);
	frame[6].i = (6);
	LINE_NUMBER(91);
	frame[7].i = ((frame[4].i) - (frame[6].i));
	}
label_4:;
	{
	if ((frame[7].i) > ((frame[4].i) + (frame[6].i))) goto label_5;
	}
	{
	LINE_NUMBER(92);
	frame[8].i = ((frame[5].i) - (frame[6].i));
	}
label_7:;
	{
	if ((frame[8].i) > ((frame[5].i) + (frame[6].i))) goto label_8;
	}
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, (jfloat((frame[7].i))), (jfloat((frame[8].i))), (jfloat((frame[4].i))), (jfloat((frame[5].i))), ((jfloat((frame[6].i))) + (jfloat(1,000000e-04f))));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((func_mindustry_world_Tiles_in_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_in_int_int_R_boolean])(ctx, sp[0].o, (frame[7].i), (frame[8].i));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[7].i), (frame[8].i));
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (sp[0].o != (frame[1].o)) goto label_10;
	}
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(92);
	INST_IINC(8, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(91);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_wall;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$1_mindustry_world_blocks_environment_Floor_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator:lambda$generate$1", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(80);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_double_R_float(ctx, ((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble((frame[2].i))), (jdouble((frame[3].i))), ((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_foct), (jdouble(((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_fper))), (jdouble(((jfloat(1)) / ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_fscl)))));
	jfloat temp1 = (jfloat)SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_double_R_float(ctx, ((jint)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble((frame[2].i))), (jdouble((frame[3].i))), (jint(1)), (jdouble(1)), (jdouble(5.0)));
	if ((floatCompare((temp0 - (temp1 / (jfloat(2.7f)))), ((jfloat)((mindustry_maps_planet_AsteroidGenerator *) NULL_CHECK((frame[0].o)))->F_fmag), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_stone;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_maps_planet_AsteroidGenerator_lambda$generate$0_mindustry_world_blocks_environment_Floor_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator:lambda$generate$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_AsteroidGenerator(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(57);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_maps_planet_AsteroidGenerator;
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

	{ // Field rand
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[23]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_maps_planet_AsteroidGenerator[] {
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
	(void *) M_mindustry_maps_planet_AsteroidGenerator_generate,
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
	(void *) M_mindustry_maps_planet_AsteroidGenerator_getSectorSize_mindustry_type_Sector_R_int,
	(void *) M_mindustry_maps_generators_BlankPlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams,
	(void *) M_mindustry_maps_planet_AsteroidGenerator_asteroid_int_int_int,
	(void *) M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$4_int_int,
	(void *) M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$3_int_int,
	(void *) M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$2_mindustry_world_blocks_environment_Floor_int_int_int_int,
	(void *) M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$1_mindustry_world_blocks_environment_Floor_int_int,
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
	{ "asteroid", "(III)V" },
	{ "lambda$generate$4", "(II)V" },
	{ "lambda$generate$3", "(II)V" },
	{ "lambda$generate$2", "(Lmindustry/world/blocks/environment/Floor;IIII)V" },
	{ "lambda$generate$1", "(Lmindustry/world/blocks/environment/Floor;II)V" },
};

static FieldMetadata fields[] {
	{ "min", &class_int, offsetof(mindustry_maps_planet_AsteroidGenerator, F_min), "I", 1 },
	{ "max", &class_int, offsetof(mindustry_maps_planet_AsteroidGenerator, F_max), "I", 1 },
	{ "octaves", &class_int, offsetof(mindustry_maps_planet_AsteroidGenerator, F_octaves), "I", 1 },
	{ "foct", &class_int, offsetof(mindustry_maps_planet_AsteroidGenerator, F_foct), "I", 1 },
	{ "radMin", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_radMin), "F", 1 },
	{ "radMax", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_radMax), "F", 1 },
	{ "persistence", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_persistence), "F", 1 },
	{ "scale", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_scale), "F", 1 },
	{ "mag", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_mag), "F", 1 },
	{ "thresh", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_thresh), "F", 1 },
	{ "fmag", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_fmag), "F", 1 },
	{ "fscl", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_fscl), "F", 1 },
	{ "fper", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_fper), "F", 1 },
	{ "stoneChance", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_stoneChance), "F", 1 },
	{ "iceChance", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_iceChance), "F", 1 },
	{ "carbonChance", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_carbonChance), "F", 1 },
	{ "berylChance", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_berylChance), "F", 1 },
	{ "ferricChance", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_ferricChance), "F", 1 },
	{ "thoriumScl", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_thoriumScl), "F", 1 },
	{ "copperScale", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_copperScale), "F", 1 },
	{ "leadScale", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_leadScale), "F", 1 },
	{ "graphiteScale", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_graphiteScale), "F", 1 },
	{ "berylliumScale", &class_float, offsetof(mindustry_maps_planet_AsteroidGenerator, F_berylliumScale), "F", 1 },
	{ "rand", &class_arc_math_Rand, offsetof(mindustry_maps_planet_AsteroidGenerator, F_rand), "Larc/math/Rand;", 0 },
	{ "seed", &class_int, offsetof(mindustry_maps_planet_AsteroidGenerator, F_seed), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_planet_AsteroidGenerator, 0, "()V", 1 },
	{ "asteroid", (intptr_t) M_mindustry_maps_planet_AsteroidGenerator_asteroid_int_int_int, VTABLE_mindustry_maps_planet_AsteroidGenerator_asteroid_int_int_int, "(III)V", 0 },
	{ "generate", (intptr_t) M_mindustry_maps_planet_AsteroidGenerator_generate, VTABLE_mindustry_maps_planet_AsteroidGenerator_generate, "()V", 1 },
	{ "getSectorSize", (intptr_t) M_mindustry_maps_planet_AsteroidGenerator_getSectorSize_mindustry_type_Sector_R_int, VTABLE_mindustry_maps_planet_AsteroidGenerator_getSectorSize_mindustry_type_Sector_R_int, "(Lmindustry/type/Sector;)I", 1 },
	{ "access$000", (intptr_t) SM_mindustry_maps_planet_AsteroidGenerator_access$000_mindustry_maps_planet_AsteroidGenerator_R_mindustry_type_Sector, 0, "(Lmindustry/maps/planet/AsteroidGenerator;)Lmindustry/type/Sector;", 4104 },
	{ "lambda$generate$4", (intptr_t) M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$4_int_int, VTABLE_mindustry_maps_planet_AsteroidGenerator_lambda$generate$4_int_int, "(II)V", 4098 },
	{ "lambda$generate$3", (intptr_t) M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$3_int_int, VTABLE_mindustry_maps_planet_AsteroidGenerator_lambda$generate$3_int_int, "(II)V", 4098 },
	{ "lambda$generate$2", (intptr_t) M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$2_mindustry_world_blocks_environment_Floor_int_int_int_int, VTABLE_mindustry_maps_planet_AsteroidGenerator_lambda$generate$2_mindustry_world_blocks_environment_Floor_int_int_int_int, "(Lmindustry/world/blocks/environment/Floor;IIII)V", 4098 },
	{ "lambda$generate$1", (intptr_t) M_mindustry_maps_planet_AsteroidGenerator_lambda$generate$1_mindustry_world_blocks_environment_Floor_int_int, VTABLE_mindustry_maps_planet_AsteroidGenerator_lambda$generate$1_mindustry_world_blocks_environment_Floor_int_int, "(Lmindustry/world/blocks/environment/Floor;II)V", 4098 },
	{ "lambda$generate$0", (intptr_t) SM_mindustry_maps_planet_AsteroidGenerator_lambda$generate$0_mindustry_world_blocks_environment_Floor_mindustry_world_Tile, 0, "(Lmindustry/world/blocks/environment/Floor;Lmindustry/world/Tile;)V", 4106 },
};

Class class_mindustry_maps_planet_AsteroidGenerator{
		.nativeName = (intptr_t) "mindustry/maps/planet/AsteroidGenerator",
		.parentClass = (intptr_t) &class_mindustry_maps_generators_BlankPlanetGenerator,
		.size = sizeof(mindustry_maps_planet_AsteroidGenerator),
		.classVtable = (intptr_t) vtable_mindustry_maps_planet_AsteroidGenerator,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_planet_AsteroidGenerator,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_maps_planet_AsteroidGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 25,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 87,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_planet_AsteroidGenerator = registerClass(&class_mindustry_maps_planet_AsteroidGenerator);

}
