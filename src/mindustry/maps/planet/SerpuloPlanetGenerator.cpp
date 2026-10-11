#include "mindustry/maps/planet/SerpuloPlanetGenerator.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Intc2_8.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Intc2_7.h"
#include "arc/math/Angles.h"
#include "mindustry/ai/BaseRegistry_BasePart.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_1Room.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Intc2_9.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Func_1.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Intc2_13.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Intc2_12.h"
#include "mindustry/type/Sector_SectorRect.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Intc2_11.h"
#include "arc/util/I18NBundle.h"
#include "arc/util/Tmp.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Intc2_10.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/game/SectorInfo.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "arc/func/Func.h"
#include "java/util/Iterator.h"
#include "arc/math/Interp.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/type/Item.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/content/Planets.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/world/TileGen.h"
#include "mindustry/ai/WaveSpawner.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/content/Liquids.h"
#include "mindustry/type/SectorPreset.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "arc/math/Rand.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/game/Rules.h"
#include "mindustry/maps/generators/BaseGenerator.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Boolf_8.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Boolf_7.h"
#include "arc/struct/FloatSeq.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Boolf_9.h"
#include "arc/struct/IntSeq.h"
#include "arc/math/geom/Vec3.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Boolf_6.h"
#include "mindustry/world/Tiles.h"
#include "java/lang/String.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/game/Waves.h"
#include "arc/util/noise/Ridged.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/util/noise/Simplex.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Boolf_10.h"
#include "mindustry/maps/planet/SerpuloPlanetGenerator_invoke_arc_func_Boolf_11.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/type/Sector.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ai/BaseRegistry.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/maps/generators/BasicGenerator.h"

extern "C" {

jbool SF_mindustry_maps_planet_SerpuloPlanetGenerator_indirectPaths;
jbool SF_mindustry_maps_planet_SerpuloPlanetGenerator_genLakes;
jdouble SF_mindustry_maps_planet_SerpuloPlanetGenerator_metalDstScl;

void mark_mindustry_maps_planet_SerpuloPlanetGenerator(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_planet_SerpuloPlanetGenerator *) object;
	if (self->F_basegen)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_basegen)->clazz)->markFunction)((jobject) self->F_basegen, mark, depth + 1);
	if (self->F_arr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_arr)->clazz)->markFunction)((jobject) self->F_arr, mark, depth + 1);
	if (self->F_dec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dec)->clazz)->markFunction)((jobject) self->F_dec, mark, depth + 1);
	if (self->F_tars)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tars)->clazz)->markFunction)((jobject) self->F_tars, mark, depth + 1);
	if (self->F_basePos)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_basePos)->clazz)->markFunction)((jobject) self->F_basePos, mark, depth + 1);
}

void init_mindustry_maps_planet_SerpuloPlanetGenerator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_mindustry_maps_generators_PlanetGenerator(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_mindustry_maps_generators_BaseGenerator(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_generators_BaseGenerator);
	init_mindustry_maps_generators_BaseGenerator(ctx, sp[1].o);
	((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK(sp[0].o))->F_basegen = (jref) sp[1].o;
	LINE_NUMBER(29);
	((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_heightYOffset = (jfloat(42.7f));
	LINE_NUMBER(30);
	((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_scl = (jfloat(5.0f));
	LINE_NUMBER(31);
	((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_waterOffset = (jfloat(0.04f));
	LINE_NUMBER(32);
	((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_heightScl = (jfloat(1.01f));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_mindustry_world_Block, 1), (13));
	jint temp0 = jint(0);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp1 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_water;
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	jint temp2 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	jint temp3 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	jint temp4 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp4) = sp[3].o;
	jint temp5 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp5) = sp[3].o;
	jint temp6 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp6) = sp[3].o;
	jint temp7 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp7) = sp[3].o;
	jint temp8 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp8) = sp[3].o;
	jint temp9 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp9) = sp[3].o;
	jint temp10 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp10) = sp[3].o;
	jint temp11 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandTaintedWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp11) = sp[3].o;
	jint temp12 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp12) = sp[3].o;
	jint temp13 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp13) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp14 = jint(1);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp15 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_water;
	ARRAY_ACCESS(jobject, sp[2].o, temp15) = sp[3].o;
	jint temp16 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp16) = sp[3].o;
	jint temp17 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp17) = sp[3].o;
	jint temp18 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp18) = sp[3].o;
	jint temp19 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp19) = sp[3].o;
	jint temp20 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp20) = sp[3].o;
	jint temp21 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp21) = sp[3].o;
	jint temp22 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp22) = sp[3].o;
	jint temp23 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp23) = sp[3].o;
	jint temp24 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandTaintedWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp24) = sp[3].o;
	jint temp25 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp25) = sp[3].o;
	jint temp26 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp26) = sp[3].o;
	jint temp27 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp27) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp14) = sp[2].o;
	jint temp28 = jint(2);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp29 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_water;
	ARRAY_ACCESS(jobject, sp[2].o, temp29) = sp[3].o;
	jint temp30 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp30) = sp[3].o;
	jint temp31 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp31) = sp[3].o;
	jint temp32 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp32) = sp[3].o;
	jint temp33 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_salt;
	ARRAY_ACCESS(jobject, sp[2].o, temp33) = sp[3].o;
	jint temp34 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp34) = sp[3].o;
	jint temp35 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp35) = sp[3].o;
	jint temp36 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp36) = sp[3].o;
	jint temp37 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp37) = sp[3].o;
	jint temp38 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandTaintedWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp38) = sp[3].o;
	jint temp39 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp39) = sp[3].o;
	jint temp40 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp40) = sp[3].o;
	jint temp41 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp41) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp28) = sp[2].o;
	jint temp42 = jint(3);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp43 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_water;
	ARRAY_ACCESS(jobject, sp[2].o, temp43) = sp[3].o;
	jint temp44 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sandWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp44) = sp[3].o;
	jint temp45 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp45) = sp[3].o;
	jint temp46 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_salt;
	ARRAY_ACCESS(jobject, sp[2].o, temp46) = sp[3].o;
	jint temp47 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_salt;
	ARRAY_ACCESS(jobject, sp[2].o, temp47) = sp[3].o;
	jint temp48 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_salt;
	ARRAY_ACCESS(jobject, sp[2].o, temp48) = sp[3].o;
	jint temp49 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp49) = sp[3].o;
	jint temp50 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp50) = sp[3].o;
	jint temp51 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp51) = sp[3].o;
	jint temp52 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_stone;
	ARRAY_ACCESS(jobject, sp[2].o, temp52) = sp[3].o;
	jint temp53 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp53) = sp[3].o;
	jint temp54 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_iceSnow;
	ARRAY_ACCESS(jobject, sp[2].o, temp54) = sp[3].o;
	jint temp55 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp55) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp42) = sp[2].o;
	jint temp56 = jint(4);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp57 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_deepwater;
	ARRAY_ACCESS(jobject, sp[2].o, temp57) = sp[3].o;
	jint temp58 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_water;
	ARRAY_ACCESS(jobject, sp[2].o, temp58) = sp[3].o;
	jint temp59 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sandWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp59) = sp[3].o;
	jint temp60 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp60) = sp[3].o;
	jint temp61 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_salt;
	ARRAY_ACCESS(jobject, sp[2].o, temp61) = sp[3].o;
	jint temp62 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp62) = sp[3].o;
	jint temp63 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp63) = sp[3].o;
	jint temp64 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[2].o, temp64) = sp[3].o;
	jint temp65 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp65) = sp[3].o;
	jint temp66 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp66) = sp[3].o;
	jint temp67 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp67) = sp[3].o;
	jint temp68 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp68) = sp[3].o;
	jint temp69 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp69) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp56) = sp[2].o;
	jint temp70 = jint(5);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp71 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_deepwater;
	ARRAY_ACCESS(jobject, sp[2].o, temp71) = sp[3].o;
	jint temp72 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_water;
	ARRAY_ACCESS(jobject, sp[2].o, temp72) = sp[3].o;
	jint temp73 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sandWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp73) = sp[3].o;
	jint temp74 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp74) = sp[3].o;
	jint temp75 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp75) = sp[3].o;
	jint temp76 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp76) = sp[3].o;
	jint temp77 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_moss;
	ARRAY_ACCESS(jobject, sp[2].o, temp77) = sp[3].o;
	jint temp78 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_iceSnow;
	ARRAY_ACCESS(jobject, sp[2].o, temp78) = sp[3].o;
	jint temp79 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp79) = sp[3].o;
	jint temp80 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp80) = sp[3].o;
	jint temp81 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp81) = sp[3].o;
	jint temp82 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp82) = sp[3].o;
	jint temp83 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp83) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp70) = sp[2].o;
	jint temp84 = 6;
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp85 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_deepwater;
	ARRAY_ACCESS(jobject, sp[2].o, temp85) = sp[3].o;
	jint temp86 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sandWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp86) = sp[3].o;
	jint temp87 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp87) = sp[3].o;
	jint temp88 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sand;
	ARRAY_ACCESS(jobject, sp[2].o, temp88) = sp[3].o;
	jint temp89 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_moss;
	ARRAY_ACCESS(jobject, sp[2].o, temp89) = sp[3].o;
	jint temp90 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_moss;
	ARRAY_ACCESS(jobject, sp[2].o, temp90) = sp[3].o;
	jint temp91 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp91) = sp[3].o;
	jint temp92 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[2].o, temp92) = sp[3].o;
	jint temp93 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[2].o, temp93) = sp[3].o;
	jint temp94 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[2].o, temp94) = sp[3].o;
	jint temp95 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp95) = sp[3].o;
	jint temp96 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp96) = sp[3].o;
	jint temp97 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp97) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp84) = sp[2].o;
	jint temp98 = 7;
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp99 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_deepTaintedWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp99) = sp[3].o;
	jint temp100 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandTaintedWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp100) = sp[3].o;
	jint temp101 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp101) = sp[3].o;
	jint temp102 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp102) = sp[3].o;
	jint temp103 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[2].o, temp103) = sp[3].o;
	jint temp104 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_moss;
	ARRAY_ACCESS(jobject, sp[2].o, temp104) = sp[3].o;
	jint temp105 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[2].o, temp105) = sp[3].o;
	jint temp106 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_hotrock;
	ARRAY_ACCESS(jobject, sp[2].o, temp106) = sp[3].o;
	jint temp107 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[2].o, temp107) = sp[3].o;
	jint temp108 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp108) = sp[3].o;
	jint temp109 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp109) = sp[3].o;
	jint temp110 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp110) = sp[3].o;
	jint temp111 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp111) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp98) = sp[2].o;
	jint temp112 = 8;
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp113 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp113) = sp[3].o;
	jint temp114 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp114) = sp[3].o;
	jint temp115 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp115) = sp[3].o;
	jint temp116 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp116) = sp[3].o;
	jint temp117 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_moss;
	ARRAY_ACCESS(jobject, sp[2].o, temp117) = sp[3].o;
	jint temp118 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sporeMoss;
	ARRAY_ACCESS(jobject, sp[2].o, temp118) = sp[3].o;
	jint temp119 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp119) = sp[3].o;
	jint temp120 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[2].o, temp120) = sp[3].o;
	jint temp121 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_basalt;
	ARRAY_ACCESS(jobject, sp[2].o, temp121) = sp[3].o;
	jint temp122 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp122) = sp[3].o;
	jint temp123 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp123) = sp[3].o;
	jint temp124 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp124) = sp[3].o;
	jint temp125 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp125) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp112) = sp[2].o;
	jint temp126 = 9;
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp127 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp127) = sp[3].o;
	jint temp128 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp128) = sp[3].o;
	jint temp129 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp129) = sp[3].o;
	jint temp130 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sporeMoss;
	ARRAY_ACCESS(jobject, sp[2].o, temp130) = sp[3].o;
	jint temp131 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp131) = sp[3].o;
	jint temp132 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp132) = sp[3].o;
	jint temp133 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp133) = sp[3].o;
	jint temp134 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp134) = sp[3].o;
	jint temp135 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp135) = sp[3].o;
	jint temp136 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp136) = sp[3].o;
	jint temp137 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp137) = sp[3].o;
	jint temp138 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp138) = sp[3].o;
	jint temp139 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp139) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp126) = sp[2].o;
	jint temp140 = 10;
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp141 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_deepTaintedWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp141) = sp[3].o;
	jint temp142 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandTaintedWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp142) = sp[3].o;
	jint temp143 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp143) = sp[3].o;
	jint temp144 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sporeMoss;
	ARRAY_ACCESS(jobject, sp[2].o, temp144) = sp[3].o;
	jint temp145 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sporeMoss;
	ARRAY_ACCESS(jobject, sp[2].o, temp145) = sp[3].o;
	jint temp146 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp146) = sp[3].o;
	jint temp147 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp147) = sp[3].o;
	jint temp148 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp148) = sp[3].o;
	jint temp149 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp149) = sp[3].o;
	jint temp150 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp150) = sp[3].o;
	jint temp151 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp151) = sp[3].o;
	jint temp152 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp152) = sp[3].o;
	jint temp153 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp153) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp140) = sp[2].o;
	jint temp154 = 11;
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp155 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_taintedWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp155) = sp[3].o;
	jint temp156 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandTaintedWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp156) = sp[3].o;
	jint temp157 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp157) = sp[3].o;
	jint temp158 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sporeMoss;
	ARRAY_ACCESS(jobject, sp[2].o, temp158) = sp[3].o;
	jint temp159 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_moss;
	ARRAY_ACCESS(jobject, sp[2].o, temp159) = sp[3].o;
	jint temp160 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_sporeMoss;
	ARRAY_ACCESS(jobject, sp[2].o, temp160) = sp[3].o;
	jint temp161 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_iceSnow;
	ARRAY_ACCESS(jobject, sp[2].o, temp161) = sp[3].o;
	jint temp162 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp162) = sp[3].o;
	jint temp163 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp163) = sp[3].o;
	jint temp164 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp164) = sp[3].o;
	jint temp165 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp165) = sp[3].o;
	jint temp166 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp166) = sp[3].o;
	jint temp167 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp167) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp154) = sp[2].o;
	jint temp168 = 12;
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (13));
	jint temp169 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksandWater;
	ARRAY_ACCESS(jobject, sp[2].o, temp169) = sp[3].o;
	jint temp170 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_darksand;
	ARRAY_ACCESS(jobject, sp[2].o, temp170) = sp[3].o;
	jint temp171 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp171) = sp[3].o;
	jint temp172 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp172) = sp[3].o;
	jint temp173 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_iceSnow;
	ARRAY_ACCESS(jobject, sp[2].o, temp173) = sp[3].o;
	jint temp174 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp174) = sp[3].o;
	jint temp175 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp175) = sp[3].o;
	jint temp176 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_snow;
	ARRAY_ACCESS(jobject, sp[2].o, temp176) = sp[3].o;
	jint temp177 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp177) = sp[3].o;
	jint temp178 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp178) = sp[3].o;
	jint temp179 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp179) = sp[3].o;
	jint temp180 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp180) = sp[3].o;
	jint temp181 = 12;
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ice;
	ARRAY_ACCESS(jobject, sp[2].o, temp181) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[1].o, temp168) = sp[2].o;
	((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK(sp[0].o))->F_arr = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (8));
	jint temp182 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sporeMoss;
	ARRAY_ACCESS(jobject, sp[1].o, temp182) = sp[2].o;
	jint temp183 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sporeCluster;
	ARRAY_ACCESS(jobject, sp[1].o, temp183) = sp[2].o;
	jint temp184 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_moss;
	ARRAY_ACCESS(jobject, sp[1].o, temp184) = sp[2].o;
	jint temp185 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sporeCluster;
	ARRAY_ACCESS(jobject, sp[1].o, temp185) = sp[2].o;
	jint temp186 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_taintedWater;
	ARRAY_ACCESS(jobject, sp[1].o, temp186) = sp[2].o;
	jint temp187 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_water;
	ARRAY_ACCESS(jobject, sp[1].o, temp187) = sp[2].o;
	jint temp188 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_darksandTaintedWater;
	ARRAY_ACCESS(jobject, sp[1].o, temp188) = sp[2].o;
	jint temp189 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_darksandWater;
	ARRAY_ACCESS(jobject, sp[1].o, temp189) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK(sp[0].o))->F_dec = (jref) sp[1].o;
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	jint temp190 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sporeMoss;
	ARRAY_ACCESS(jobject, sp[1].o, temp190) = sp[2].o;
	jint temp191 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_shale;
	ARRAY_ACCESS(jobject, sp[1].o, temp191) = sp[2].o;
	jint temp192 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_moss;
	ARRAY_ACCESS(jobject, sp[1].o, temp192) = sp[2].o;
	jint temp193 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_shale;
	ARRAY_ACCESS(jobject, sp[1].o, temp193) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK(sp[0].o))->F_tars = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	jfloat temp194 = jfloat(2);
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK(sp[0].o))->F_water = (temp194 / (jfloat((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->length))));
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_double_double_double(ctx, sp[1].o, (jdouble(0.9341721)), (jdouble(0)), (jdouble(0.3568221)));
	((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK(sp[0].o))->F_basePos = (jref) sp[1].o;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_SerpuloPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:rawHeight", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(7.0)), (jdouble(0.5)), (jdouble(0.3333333432674408)), (jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_scl)))), (jdouble(((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_scl)) + ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_heightYOffset)))), (jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_scl)))));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (temp0 * ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_heightScl)), (jfloat(2.3f)));
	popStackFrame(ctx);
	return ((temp1 + ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_waterOffset)) / ((jfloat(1)) + ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_waterOffset)));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_onSectorCaptured_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:onSectorCaptured", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	((func_mindustry_type_Planet_reloadMeshAsync) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_reloadMeshAsync])(ctx, sp[0].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_onSectorLost_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:onSectorLost", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	((func_mindustry_type_Planet_reloadMeshAsync) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_reloadMeshAsync])(ctx, sp[0].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_beforeSaveWrite_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:beforeSaveWrite", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	((func_mindustry_type_Planet_reloadMeshAsync) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_reloadMeshAsync])(ctx, sp[0].o);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_planet_SerpuloPlanetGenerator_isEmissive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:isEmissive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_planet_SerpuloPlanetGenerator_allowNumberedLaunch_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:allowNumberedLaunch", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isAttacked_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isAttacked_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_info;
	sp[0].o = (jobject)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_bestCoreType;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) >= (jint(4))) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isBeingPlayed_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isBeingPlayed_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_maps_planet_SerpuloPlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:allowLanding", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_planet;
	if (((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_allowLaunchToNumbered) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_type_Sector_near_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_planet_SerpuloPlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:findLaunchCandidate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(103);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isNear_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Sector_isNear_mindustry_type_Sector_R_boolean])(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_maps_planet_SerpuloPlanetGenerator_allowNumberedLaunch_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_allowNumberedLaunch_mindustry_type_Sector_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_3:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_mindustry_type_Sector_near_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)M_mindustry_maps_generators_PlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:getLockedText", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset;
	if (((jint)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_requireUnlock) != 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((func_mindustry_type_Sector_near_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_near_R_arc_struct_Seq])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_9);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(116);
	jint temp0 = (jint)((func_mindustry_type_Sector_isShielded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Sector_isShielded_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[red]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jint(59469)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sector.shielded"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"[red]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (jint(59413)));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreFoundation;
	sp[1].o = (jobject)((func_mindustry_world_Block_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_emoji_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sector.foundationrequired"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(122);
	M_mindustry_maps_generators_PlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_6:;
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_SerpuloPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:getHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(129);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[2].f), ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_water));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:getColor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_mindustry_maps_planet_SerpuloPlanetGenerator_getBlock_arc_math_geom_Vec3_boolean_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_getBlock_arc_math_geom_Vec3_boolean_R_mindustry_world_Block])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(136);
	sp[0].o = frame[3].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_salt;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_sand;
	INST_ASTORE(3);
label_2:;
	{
	LINE_NUMBER(137);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_mapColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, ((jfloat(1)) - ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_albedo)));
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:getEmissiveColor", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(142);
	frame[3].f = (jfloat(999.0f));
	frame[4].f = (jfloat(999.0f));
	frame[5].f = (jfloat(0));
	LINE_NUMBER(144);
	clinit_mindustry_content_Planets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[6].o = sp[0].o;
	LINE_NUMBER(145);
	clinit_mindustry_content_Planets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(147);
	frame[8].i = (jint(0));
	}
label_6:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_7;
	}
	{
	LINE_NUMBER(148);
	frame[9].o = (checkCast(ctx, &class_mindustry_type_Sector, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)))));
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(151);
	jfloat temp0 = frame[3].f;
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[9].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[9].o)))->F_preset;
	jobject temp2 = sp[0].o;
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if (temp2 == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[9].o)))->F_preset;
	jfloat temp0 = ((((jfloat)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_difficulty) / (jfloat(10.0f))) * (jfloat(0.03f))) - (jfloat(0.03f));
	sp[0].f = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_FCONST(0);
label_13:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, sp[0].f, (sp[1].f - sp[2].f));
	frame[3].f = temp0;
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasBase_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_type_Sector_hasBase_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[9].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	frame[10].f = temp0;
	LINE_NUMBER(154);
	if ((floatCompare((frame[10].f), (frame[4].f), 1)) >= 0) goto label_14;
	}
	{
	LINE_NUMBER(155);
	frame[4].f = (frame[10].f);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[9].o)))->F_info;
	frame[5].f = ((jfloat)((mindustry_game_SectorInfo *) NULL_CHECK(sp[0].o))->F_lightCoverage);
	}
label_14:;
	{
	LINE_NUMBER(147);
	INST_IINC(8, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(161);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[5].f) / (jfloat(50000.0f))), (jfloat(1.3f)));
	frame[5].f = temp0;
	LINE_NUMBER(162);
	if ((floatCompare((frame[5].f), (jfloat(1)), 1)) >= 0) goto label_20;
	}
	{
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow5Out;
	jfloat temp0 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (frame[5].f));
	frame[5].f = temp0;
	}
label_20:;
	{
	LINE_NUMBER(164);
	frame[8].f = (jfloat(0.05f));
	LINE_NUMBER(166);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_basePos;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0.3f)), 1)) >= 0) goto label_22;
	}
	{
	jdouble temp0 = (jdouble((frame[3].f))) * (clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx), (jdouble)SF_mindustry_maps_planet_SerpuloPlanetGenerator_metalDstScl);
	jint temp1 = ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed) + (jint(1));
	jdouble temp2 = jdouble(3.0);
	jdouble temp3 = jdouble(0.4);
	jdouble temp4 = jdouble(5.5);
	jdouble temp5 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	jdouble temp6 = jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(200.0f))));
	jdouble temp7 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(168);
	jfloat temp8 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
	jdouble temp9 = temp0 + (jdouble((temp8 * (jfloat(0.08f)))));
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_basePos;
	jfloat temp10 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, (frame[1].o));
	sp[0].d = temp9;
	sp += 1;
	if ((floatCompare((fmodf((temp10 + (jfloat(0))), (frame[8].f))), ((frame[8].f) / (jfloat(2))), 1)) >= 0) goto label_24;
	}
	INST_FCONST(1);
	goto label_25;
label_24:;
	INST_FCONST(0);
label_25:;
	{
	sp -= 2;
	if ((doubleCompare((sp[0].d + (jdouble((sp[1].f * (jfloat(0.07f)))))), (jdouble(0.07999999821186066)), 1)) >= 0) goto label_26;
	}
	goto label_27;
label_22:;
	{
	jdouble temp0 = (jdouble((frame[3].f))) * (clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx), (jdouble)SF_mindustry_maps_planet_SerpuloPlanetGenerator_metalDstScl);
	jint temp1 = (jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed;
	jdouble temp2 = jdouble(3.0);
	jdouble temp3 = jdouble(0.4);
	jdouble temp4 = jdouble(9.0);
	jdouble temp5 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	jdouble temp6 = jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(370.0f))));
	jdouble temp7 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(169);
	jfloat temp8 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
	if ((doubleCompare((temp0 + (jdouble((temp8 * (jfloat(0.06f)))))), (jdouble(0.045)), 1)) >= 0) goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[2].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_crux;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(0.8f);
	jint temp1 = (jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed;
	jdouble temp2 = jdouble(1);
	jdouble temp3 = jdouble(1);
	jdouble temp4 = jdouble(9.0);
	jdouble temp5 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	jdouble temp6 = jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(99.0f))));
	jdouble temp7 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(172);
	jfloat temp8 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (temp0 + (temp8 * (jfloat(0.4f)))));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	jfloat temp9 = jfloat(0.2f);
	jint temp10 = (jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed;
	jdouble temp11 = jdouble(1);
	jdouble temp12 = jdouble(1);
	jdouble temp13 = jdouble(9.0);
	jdouble temp14 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	jdouble temp15 = jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(999.0f))));
	jdouble temp16 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(173);
	jfloat temp17 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, temp10, temp11, temp12, temp13, temp14, temp15, temp16);
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, (temp9 * temp17));
	jfloat temp18 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	goto label_31;
	}
label_26:;
	{
	LINE_NUMBER(174);
	jdouble temp0 = (jdouble((frame[4].f))) * (clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx), (jdouble)SF_mindustry_maps_planet_SerpuloPlanetGenerator_metalDstScl);
	jfloat temp1 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(3.0)), (jdouble(0.4)), (jdouble(9.0)), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))), (jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(600.0f))))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))));
	if ((doubleCompare((temp0 + (jdouble((temp1 * (jfloat(0.07f)))))), ((jdouble(0.05)) * (jdouble((frame[5].f)))), 1)) >= 0) goto label_31;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = frame[2].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_sharded;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(0.7f);
	jfloat temp1 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(1)), (jdouble(1)), (jdouble(9.0)), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))), (jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(99.0f))))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))));
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (temp0 + (temp1 * (jfloat(0.4f)))));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_crux;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	jfloat temp2 = jfloat(0.3f);
	jint temp3 = (jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed;
	jdouble temp4 = jdouble(1);
	jdouble temp5 = jdouble(1);
	jdouble temp6 = jdouble(9.0);
	jdouble temp7 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	jdouble temp8 = jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(999.0f))));
	jdouble temp9 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	LINE_NUMBER(176);
	jfloat temp10 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, (temp2 * temp10));
	jfloat temp11 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	}
label_31:;
	LINE_NUMBER(179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:genTile", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(183);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_maps_planet_SerpuloPlanetGenerator_getBlock_arc_math_geom_Vec3_boolean_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_getBlock_arc_math_geom_Vec3_boolean_R_mindustry_world_Block])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_world_TileGen *) NULL_CHECK((frame[2].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darkPanel6;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darkPanel3;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(185);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_TileGen *) NULL_CHECK((frame[2].o)))->F_floor;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_wall;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(187);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise3d_int_double_double_double_int_float_R_float(ctx, (((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed) + (jint(1))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))), (jint(2)), (jfloat(22.0f)));
	if ((doubleCompare((jdouble(temp0)), (jdouble(0.31)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_world_TileGen *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	}
label_4:;
	LINE_NUMBER(190);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_planet_SerpuloPlanetGenerator_getBlock_arc_math_geom_Vec3_boolean_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[31];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:getBlock", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(195);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[3].f = temp0;
	LINE_NUMBER(196);
	frame[4].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) * ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_scl));
	frame[5].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) * ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_scl));
	frame[6].f = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) * ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_scl));
	LINE_NUMBER(198);
	frame[7].f = ((jfloat)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_scl);
	LINE_NUMBER(199);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[5].f) * (jfloat(2))));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp1 / (frame[7].f)));
	frame[8].f = temp2;
	LINE_NUMBER(200);
	jfloat temp3 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(7.0)), (jdouble(0.56)), (jdouble(0.3333333432674408)), (jdouble((frame[4].f))), (jdouble((((frame[5].f) + (jfloat(999.0f))) - (jfloat(0.1f))))), (jdouble((frame[6].f))));
	frame[9].f = temp3;
	LINE_NUMBER(201);
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (frame[8].f), (frame[9].f), (jfloat(0.5f)));
	frame[8].f = temp4;
	LINE_NUMBER(202);
	frame[3].f = ((frame[3].f) * (jfloat(1.2f)));
	LINE_NUMBER(203);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[3].f));
	frame[3].f = temp5;
	LINE_NUMBER(205);
	jfloat temp6 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(4.0)), (jdouble(0.550000011920929)), (jdouble(0.5)), (jdouble((frame[4].f))), (jdouble(((frame[5].f) + (jfloat(999.0f))))), (jdouble((frame[6].f))));
	jfloat temp7 = temp6 * (jfloat(0.3f));
	jfloat temp8 = (jfloat)((func_arc_math_geom_Vec3_dst_float_float_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Vec3_dst_float_float_float_R_float])(ctx, (frame[1].o), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	frame[10].f = (temp7 + (temp8 * (jfloat(0.2f))));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	jfloat temp9 = frame[8].f;
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp10 = jint((temp9 * (jfloat((((jarray) nullCheck(ctx, sp[1].o))->length)))));
	jint temp11 = jint(0);
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp12 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp10, temp11, ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->length) - (jint(1))));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp12);
	jfloat temp13 = frame[3].f;
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp14 = jint((temp13 * (jfloat((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->length)))));
	jint temp15 = jint(0);
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_arr;
	jint temp16 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp14, temp15, ((((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->length) - (jint(1))));
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp16));
	LINE_NUMBER(208);
	if ((floatCompare((frame[10].f), (jfloat(0.5f)), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_tars;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[11].o), (frame[11].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	}
label_13:;
	{
	LINE_NUMBER(211);
	if ((frame[2].i) == 0) goto label_15;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_basePos;
	jint temp0 = (jint)((func_arc_math_geom_Vec3_within_arc_math_geom_Vec3_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_within_arc_math_geom_Vec3_float_R_boolean])(ctx, sp[0].o, sp[1].o, (jfloat(0.65f)));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(213);
	frame[12].f = (jfloat(999.0f));
	LINE_NUMBER(215);
	clinit_mindustry_content_Planets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[13].o = sp[0].o;
	LINE_NUMBER(216);
	clinit_mindustry_content_Planets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Planets_serpulo;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	frame[14].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(218);
	frame[15].i = (jint(0));
	}
label_20:;
	{
	if ((frame[15].i) >= (frame[14].i)) goto label_21;
	}
	{
	LINE_NUMBER(219);
	frame[16].o = (checkCast(ctx, &class_mindustry_type_Sector, ((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[15].i)))));
	LINE_NUMBER(221);
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, (frame[16].o));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(222);
	jfloat temp0 = frame[12].f;
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[16].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[1].o))->F_v;
	jfloat temp1 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	frame[12].f = temp2;
	}
label_24:;
	{
	LINE_NUMBER(218);
	INST_IINC(15, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(226);
	frame[15].f = (jfloat(0.05f));
	frame[16].f = (jfloat(0.07f));
	LINE_NUMBER(228);
	jfloat temp0 = (frame[12].f) * (jfloat(0.85f));
	jfloat temp1 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(3.0)), (jdouble(0.4)), (jdouble(5.5)), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x))), (jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (jfloat(200.0f))))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z))));
	jfloat temp2 = temp0 + (temp1 * (jfloat(0.015f)));
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_basePos;
	jfloat temp3 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, (frame[1].o));
	sp[0].f = temp2;
	sp += 1;
	if ((floatCompare((fmodf((temp3 + (jfloat(0))), (frame[15].f))), ((frame[15].f) / (jfloat(2))), 1)) >= 0) goto label_28;
	}
	INST_FCONST(1);
	goto label_29;
label_28:;
	INST_FCONST(0);
label_29:;
	{
	sp -= 2;
	if ((floatCompare((sp[0].f + (sp[1].f * (jfloat(0.07f)))), (jfloat(0.15f)), 1)) >= 0) goto label_15;
	}
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_basePos;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_dst_arc_math_geom_Vec3_R_float])(ctx, sp[0].o, (frame[1].o));
	if ((floatCompare((fmodf((temp0 + (jfloat(1,000000e-02f))), (frame[16].f))), ((frame[16].f) * (jfloat(0.65f))), 1)) >= 0) goto label_31;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_metalFloor;
	goto label_32;
label_31:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_darkPanel6;
label_32:;
	popStackFrame(ctx);
	INST_ARETURN();
label_15:;
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return (frame[11].o);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_double_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jdouble param2, jdouble param3, jdouble param4, jdouble param5) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:noise", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].d = param2;
	frame[5].d = param3;
	frame[7].d = param4;
	frame[9].d = param5;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_rect;
	sp[0].o = (jobject)((func_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(5.0f)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(239);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed), (frame[3].d), (frame[5].d), ((jdouble(1)) / (frame[7].d)), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[11].o)))->F_x))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[11].o)))->F_y))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[11].o)))->F_z))));
	popStackFrame(ctx);
	return (temp0 * (jfloat((frame[9].d))));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_generate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[51];
	auto stack = &frame[38];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:generate", 51 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_cells_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_cells_int])(ctx, (frame[0].o), (jint(4)));
	LINE_NUMBER(329);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_distort_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_distort_float_float])(ctx, (frame[0].o), (jfloat(10.0f)), (jfloat(12.0f)));
	LINE_NUMBER(331);
	frame[1].f = (jfloat(1.3f));
	LINE_NUMBER(332);
	frame[2].f = (((jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(2))) / (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt3));
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, (jint(2)), (jint(5)));
	frame[3].i = temp0;
	LINE_NUMBER(334);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(336);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(337);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (jfloat(360.0f)));
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, ((frame[2].f) / (frame[1].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(338);
	jfloat temp2 = (jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(2));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[6].f = (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(339);
	jfloat temp3 = (jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height))) / (jfloat(2));
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[7].f = (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(340);
	jfloat temp4 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	frame[8].f = (temp4 - temp5);
	LINE_NUMBER(341);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp6 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(9.0f)), ((frame[8].f) / (jfloat(2))));
	jfloat temp7 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp6, (jfloat(30.0f)));
	frame[9].f = temp7;
	LINE_NUMBER(342);
	sp[0].o = frame[4].o;
	clinit_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room);
	init_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_mindustry_maps_planet_SerpuloPlanetGenerator_int_int_int(ctx, sp[1].o, (frame[0].o), (jint((frame[6].f))), (jint((frame[7].f))), (jint((frame[9].f))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(336);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(346);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(347);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(348);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint((((jfloat)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_threat) * (jfloat(4.0f))))), (jint(1)));
	jint temp2 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, temp0, temp1);
	frame[7].i = temp2;
	LINE_NUMBER(349);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp3 = (jint)((func_arc_math_Rand_nextInt_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_nextInt_int_R_int])(ctx, sp[0].o, (360));
	frame[8].i = temp3;
	LINE_NUMBER(350);
	jfloat temp4 = (jfloat(((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width))) / (jfloat(2.55f));
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp5 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, (13), (23));
	frame[9].f = (temp4 - (jfloat(temp5)));
	LINE_NUMBER(351);
	frame[10].i = (jint(5));
	LINE_NUMBER(352);
	frame[11].i = (jint(5));
	LINE_NUMBER(353);
	frame[12].i = (jint(0));
	}
label_23:;
	{
	if ((frame[12].i) >= (360)) goto label_24;
	}
	{
	LINE_NUMBER(354);
	frame[13].i = ((frame[8].i) + (frame[12].i));
	LINE_NUMBER(355);
	jfloat temp0 = jfloat((((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2))));
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (jfloat((frame[13].i))), (frame[9].f));
	frame[14].i = (jint((temp0 + temp1)));
	LINE_NUMBER(356);
	jfloat temp2 = jfloat((((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2))));
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (jfloat((frame[13].i))), (frame[9].f));
	frame[15].i = (jint((temp2 + temp3)));
	LINE_NUMBER(358);
	frame[16].i = (jint(0));
	LINE_NUMBER(361);
	frame[17].i = (-(frame[11].i));
	}
label_30:;
	{
	if ((frame[17].i) > (frame[11].i)) goto label_31;
	}
	{
	LINE_NUMBER(362);
	frame[18].i = (-(frame[11].i));
	}
label_33:;
	{
	if ((frame[18].i) > (frame[11].i)) goto label_34;
	}
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[14].i) + (frame[17].i)), ((frame[15].i) + (frame[18].i)));
	frame[19].o = sp[0].o;
	LINE_NUMBER(364);
	if ((frame[19].o) == nullptr) goto label_37;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[19].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	if (sp[0].o == nullptr) goto label_38;
	}
label_37:;
	LINE_NUMBER(365);
	INST_IINC(16, 1);
label_38:;
	{
	LINE_NUMBER(362);
	INST_IINC(18, 1);
	goto label_33;
	}
label_34:;
	{
	LINE_NUMBER(361);
	INST_IINC(17, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(370);
	if ((frame[16].i) <= (jint(4))) goto label_39;
	}
	{
	if (((frame[12].i) + (frame[10].i)) < (360)) goto label_40;
	}
label_39:;
	{
	LINE_NUMBER(371);
	sp[0].o = frame[4].o;
	clinit_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room);
	sp[2].o = frame[0].o;
	jint temp0 = frame[14].i;
	jint temp1 = frame[15].i;
	sp[3].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp2 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[3].o, (8), (15));
	init_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_mindustry_maps_planet_SerpuloPlanetGenerator_int_int_int(ctx, sp[1].o, sp[2].o, temp0, temp1, temp2);
	frame[5].o = sp[1].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(373);
	frame[17].i = (jint(0));
	}
label_42:;
	{
	if ((frame[17].i) >= (frame[7].i)) goto label_43;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, (jfloat(60.0f)));
	frame[18].f = temp0;
	LINE_NUMBER(375);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(((frame[14].i) - (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2)))))), (jfloat(((frame[15].i) - (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2)))))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat(180.0f)) + (frame[18].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2))))), (jfloat((((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2))))));
	LINE_NUMBER(376);
	clinit_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room);
	sp[1].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp1 = jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x));
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_v1;
	jint temp2 = jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y));
	sp[2].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp3 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[2].o, (8), (16));
	init_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_mindustry_maps_planet_SerpuloPlanetGenerator_int_int_int(ctx, sp[0].o, sp[1].o, temp1, temp2, temp3);
	frame[19].o = sp[0].o;
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[4].o), (frame[19].o));
	LINE_NUMBER(378);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[6].o), (frame[19].o));
	LINE_NUMBER(373);
	INST_IINC(17, 1);
	goto label_42;
	}
label_43:;
	LINE_NUMBER(381);
	goto label_24;
label_40:;
	{
	LINE_NUMBER(353);
	frame[12].i = ((frame[12].i) + (frame[10].i));
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[12].o = sp[0].o;
	}
label_50:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[12].o)))(ctx, (frame[12].o));
	if (temp0 == 0) goto label_51;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[12].o)))(ctx, (frame[12].o));
	frame[13].o = (checkCast(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room, sp[0].o));
	LINE_NUMBER(387);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_erase_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_erase_int_int_int])(ctx, (frame[0].o), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[13].o)))->F_x), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[13].o)))->F_y), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[13].o)))->F_radius));
	LINE_NUMBER(388);
	goto label_50;
	}
label_51:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((frame[3].i) - (jint(1))), (jint(1)));
	jint temp1 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, temp0, ((frame[3].i) + (jint(3))));
	frame[12].i = temp1;
	LINE_NUMBER(392);
	frame[13].i = (jint(0));
	}
label_55:;
	{
	if ((frame[13].i) >= (frame[12].i)) goto label_56;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	sp[0].o = (jobject)((func_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room, sp[0].o);
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	sp[1].o = (jobject)((func_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_random_arc_math_Rand_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room, sp[1].o)));
	LINE_NUMBER(392);
	INST_IINC(13, 1);
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[13].o = sp[0].o;
	}
label_59:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_60;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room, sp[0].o));
	LINE_NUMBER(397);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room])(ctx, (frame[5].o), (frame[14].o));
	LINE_NUMBER(398);
	goto label_59;
	}
label_60:;
	{
	LINE_NUMBER(400);
	frame[13].o = (frame[5].o);
	LINE_NUMBER(402);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_cells_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_cells_int])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = (jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	frame[14].i = (temp0 * ((jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height));
	LINE_NUMBER(405);
	frame[15].i = (jint(0));
	frame[16].i = (jint(0));
	LINE_NUMBER(407);
	frame[17].i = (jint(0));
	}
label_68:;
	{
	if ((frame[17].i) >= (frame[14].i)) goto label_69;
	}
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[17].i));
	frame[18].o = sp[0].o;
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[18].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_72;
	}
	{
	LINE_NUMBER(410);
	INST_IINC(15, 1);
	LINE_NUMBER(411);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[18].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_water;
	if (sp[0].o != sp[1].o) goto label_72;
	}
	LINE_NUMBER(412);
	INST_IINC(16, 1);
label_72:;
	{
	LINE_NUMBER(407);
	INST_IINC(17, 1);
	goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(417);
	if ((floatCompare(((jfloat((frame[16].i))) / (jfloat((frame[15].i)))), (jfloat(0.19f)), -1)) < 0) goto label_76;
	}
	INST_ICONST(1);
	goto label_77;
label_76:;
	INST_ICONST(0);
label_77:;
	{
	sp -= 1;
	frame[17].i = sp[0].i;
	LINE_NUMBER(420);
	if ((frame[17].i) == 0) goto label_79;
	}
	{
	LINE_NUMBER(421);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[18].o = sp[0].o;
	}
label_81:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[18].o)))(ctx, (frame[18].o));
	if (temp0 == 0) goto label_79;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[18].o)))(ctx, (frame[18].o));
	frame[19].o = (checkCast(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room, sp[0].o));
	LINE_NUMBER(422);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connectLiquid_mindustry_maps_planet_SerpuloPlanetGenerator$1Room) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connectLiquid_mindustry_maps_planet_SerpuloPlanetGenerator$1Room])(ctx, (frame[19].o), (frame[5].o));
	LINE_NUMBER(423);
	goto label_81;
	}
label_79:;
	{
	LINE_NUMBER(426);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_distort_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_distort_float_float])(ctx, (frame[0].o), (jfloat(10.0f)), (jfloat(6.0f)));
	LINE_NUMBER(429);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_7(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_7 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_7);
		proxy->F_field1 = (jref) (frame[13].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_8(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_8 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(476);
	if ((frame[17].i) == 0) goto label_87;
	}
	{
	LINE_NUMBER(477);
	frame[18].i = (jint(2));
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_9(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_9 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_9);
		proxy->F_field1 = (frame[18].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	}
label_87:;
	{
	LINE_NUMBER(502);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreCopper;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreLead;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	frame[18].o = sp[0].o;
	LINE_NUMBER(503);
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y));
	frame[19].f = temp2;
	LINE_NUMBER(504);
	frame[20].f = (jfloat(0.5f));
	LINE_NUMBER(505);
	frame[21].f = (jfloat(1));
	LINE_NUMBER(506);
	frame[22].f = (jfloat(1.3f));
	LINE_NUMBER(508);
	jint temp3 = (jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed;
	jdouble temp4 = jdouble(2.0);
	jdouble temp5 = jdouble(0.5);
	jdouble temp6 = jdouble((frame[21].f));
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	jdouble temp7 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x));
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	jdouble temp8 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	jfloat temp9 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, temp3, temp4, temp5, temp6, temp7, temp8, (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z))));
	if ((floatCompare(((temp9 * (frame[20].f)) + (frame[19].f)), ((jfloat(0.25f)) * (frame[22].f)), -1)) <= 0) goto label_95;
	}
	{
	LINE_NUMBER(509);
	sp[0].o = frame[18].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreCoal;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_95:;
	{
	LINE_NUMBER(512);
	jint temp0 = (jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed;
	jdouble temp1 = jdouble(2.0);
	jdouble temp2 = jdouble(0.5);
	jdouble temp3 = jdouble((frame[21].f));
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	jdouble temp4 = jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) + (jfloat(1))));
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	jdouble temp5 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	jfloat temp6 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, temp0, temp1, temp2, temp3, temp4, temp5, (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z))));
	if ((floatCompare(((temp6 * (frame[20].f)) + (frame[19].f)), ((jfloat(0.5f)) * (frame[22].f)), -1)) <= 0) goto label_97;
	}
	{
	LINE_NUMBER(513);
	sp[0].o = frame[18].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreTitanium;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_97:;
	{
	LINE_NUMBER(517);
	jint temp0 = (jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_seed;
	jdouble temp1 = jdouble(2.0);
	jdouble temp2 = jdouble(0.5);
	jdouble temp3 = jdouble((frame[21].f));
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	jdouble temp4 = jdouble((((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) + (jfloat(2))));
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	jdouble temp5 = jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y));
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_tile;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v;
	jfloat temp6 = (jfloat)SM_arc_util_noise_Simplex_noise3d_int_double_double_double_double_double_double_R_float(ctx, temp0, temp1, temp2, temp3, temp4, temp5, (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z))));
	if ((floatCompare(((temp6 * (frame[20].f)) + (frame[19].f)), ((jfloat(0.7f)) * (frame[22].f)), -1)) <= 0) goto label_99;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	if (((jint)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_id) == (218)) goto label_99;
	}
	{
	LINE_NUMBER(518);
	sp[0].o = frame[18].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreThorium;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_99:;
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.25)));
	if (temp0 == 0) goto label_101;
	}
	{
	LINE_NUMBER(522);
	sp[0].o = frame[18].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreScrap;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_101:;
	{
	LINE_NUMBER(525);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[0].o);
	frame[23].o = sp[0].o;
	LINE_NUMBER(526);
	frame[24].i = (jint(0));
	}
label_104:;
	{
	if ((frame[24].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[18].o)))->F_size)) goto label_105;
	}
	{
	LINE_NUMBER(527);
	sp[0].o = frame[23].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[1].o, (jfloat(-0.1f)), (jfloat(1,000000e-02f)));
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, ((temp0 - ((jfloat((frame[24].i))) * (jfloat(1,000000e-02f)))) + ((frame[19].f) * (jfloat(0.04f)))));
	LINE_NUMBER(526);
	INST_IINC(24, 1);
	goto label_104;
	}
label_105:;
	{
	LINE_NUMBER(530);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_10(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_10 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_10);
		proxy->F_field2 = (jref) (frame[23].o);
		proxy->F_field1 = (jref) (frame[18].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(549);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_trimDark) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_trimDark])(ctx, (frame[0].o));
	LINE_NUMBER(551);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_median_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_median_int])(ctx, (frame[0].o), (jint(2)));
	LINE_NUMBER(553);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[1].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[1].o, ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[5].o)))->F_y));
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_inverseFloodFill_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_inverseFloodFill_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(555);
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_tech) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_tech])(ctx, (frame[0].o));
	LINE_NUMBER(557);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_11(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_11 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_11);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_maps_planet_SerpuloPlanetGenerator_pass_arc_func_Intc2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_pass_arc_func_Intc2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(633);
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	frame[24].f = ((jfloat)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_threat);
	LINE_NUMBER(634);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[0].o, (-2), (jint(4)));
	frame[25].i = temp0;
	LINE_NUMBER(636);
	if ((frame[25].i) <= 0) goto label_116;
	}
	{
	LINE_NUMBER(637);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[0].o, ((((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width) * ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height)) / (jint(4))));
	frame[26].o = sp[0].o;
	LINE_NUMBER(639);
	frame[27].i = (25);
	LINE_NUMBER(642);
	frame[28].i = (frame[27].i);
	}
label_120:;
	{
	if ((frame[28].i) >= (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width) - (frame[27].i))) goto label_121;
	}
	{
	LINE_NUMBER(643);
	frame[29].i = (frame[27].i);
	}
label_123:;
	{
	if ((frame[29].i) >= (((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height) - (frame[27].i))) goto label_124;
	}
	{
	LINE_NUMBER(644);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[28].i), (frame[29].i));
	frame[30].o = sp[0].o;
	LINE_NUMBER(645);
	jint temp0 = (jint)((func_mindustry_world_Tile_solid_R_boolean) ((void **) nullCheck(ctx, (frame[30].o))->vtable)[VTABLE_mindustry_world_Tile_solid_R_boolean])(ctx, (frame[30].o));
	if (temp0 != 0) goto label_127;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[30].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[30].o));
	if (sp[0].o != nullptr) goto label_128;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[30].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[30].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	if (sp[0].o == nullptr) goto label_127;
	}
label_128:;
	{
	LINE_NUMBER(646);
	sp[0].o = frame[26].o;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[30].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[30].o));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_127:;
	{
	LINE_NUMBER(643);
	INST_IINC(29, 1);
	goto label_123;
	}
label_124:;
	{
	LINE_NUMBER(642);
	INST_IINC(28, 1);
	goto label_120;
	}
label_121:;
	{
	LINE_NUMBER(651);
	sp[0].o = frame[26].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	((func_arc_struct_IntSeq_shuffle_arc_math_Rand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_shuffle_arc_math_Rand])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(653);
	frame[28].i = (jint(0));
	LINE_NUMBER(654);
	frame[29].f = (jfloat(0.4f));
	LINE_NUMBER(656);
	frame[30].i = (jint(0));
	}
label_132:;
	{
	if ((frame[30].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[26].o)))->F_size)) goto label_116;
	}
	{
	if ((frame[28].i) >= (frame[25].i)) goto label_116;
	}
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[26].o)))->F_items;
	frame[31].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[30].i)));
	LINE_NUMBER(658);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[31].i));
	frame[32].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[31].i));
	frame[33].i = temp1;
	LINE_NUMBER(661);
	jint temp2 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, (jfloat((frame[32].i))), (jfloat((frame[33].i))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[5].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[5].o)))->F_y))), (jfloat(18.0f)));
	if (temp2 == 0) goto label_137;
	}
	LINE_NUMBER(662);
	goto label_139;
label_137:;
	{
	LINE_NUMBER(665);
	jfloat temp0 = frame[24].f;
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (frame[29].f));
	frame[34].f = (temp0 + temp1);
	LINE_NUMBER(667);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[32].i), (frame[33].i));
	frame[35].o = sp[0].o;
	LINE_NUMBER(668);
	frame[36].o = (jobject(nullptr));
	LINE_NUMBER(669);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[35].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[35].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_143;
	}
	{
	LINE_NUMBER(670);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[1].o = (jobject)((func_mindustry_world_Tile_drop_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[35].o))->vtable)[VTABLE_mindustry_world_Tile_drop_R_mindustry_type_Item])(ctx, (frame[35].o));
	sp[0].o = (jobject)((func_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_getFrac_float_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_getFrac_float_R_java_lang_Object])(ctx, sp[0].o, (frame[34].f));
	frame[36].o = (checkCast(ctx, &class_mindustry_ai_BaseRegistry$BasePart, sp[0].o));
	goto label_145;
	}
label_143:;
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[35].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[35].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	if (sp[0].o == nullptr) goto label_146;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.05)));
	if (temp0 == 0) goto label_146;
	}
	{
	LINE_NUMBER(672);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[35].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[35].o));
	sp[1].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[1].o))->F_liquidDrop;
	sp[0].o = (jobject)((func_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_getFrac_float_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_getFrac_float_R_java_lang_Object])(ctx, sp[0].o, (frame[34].f));
	frame[36].o = (checkCast(ctx, &class_mindustry_ai_BaseRegistry$BasePart, sp[0].o));
	goto label_145;
	}
label_146:;
	{
	LINE_NUMBER(673);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.05)));
	if (temp0 == 0) goto label_145;
	}
	{
	LINE_NUMBER(674);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_bases;
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_getFrac_float_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_getFrac_float_R_java_lang_Object])(ctx, sp[0].o, (frame[34].f));
	frame[36].o = (checkCast(ctx, &class_mindustry_ai_BaseRegistry$BasePart, sp[0].o));
	}
label_145:;
	{
	LINE_NUMBER(678);
	if ((frame[36].o) == nullptr) goto label_139;
	}
	{
	sp[0].o = frame[36].o;
	jint temp0 = frame[32].i;
	jint temp1 = frame[33].i;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	sp[2].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_12(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_12 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp2 = (jint)SM_mindustry_maps_generators_BaseGenerator_tryPlace_mindustry_ai_BaseRegistry$BasePart_int_int_mindustry_game_Team_arc_math_Rand_arc_func_Intc2_R_boolean(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o, sp[3].o);
	if (temp2 == 0) goto label_139;
	}
	{
	LINE_NUMBER(692);
	INST_IINC(28, 1);
	LINE_NUMBER(694);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[36].o)))->F_schematic;
	jint temp0 = (jint)((mindustry_game_Schematic *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[36].o)))->F_schematic;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, ((jint)((mindustry_game_Schematic *) NULL_CHECK(sp[0].o))->F_height));
	frame[37].i = ((temp1 / (jint(2))) + (jint(3)));
	LINE_NUMBER(695);
	jint temp2 = frame[32].i;
	jint temp3 = frame[33].i;
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp4 = (jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp5 = (jint)((mindustry_world_Tiles *) NULL_CHECK(sp[0].o))->F_height;
	jint temp6 = frame[37].i;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_13(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_13 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Intc2_13);
		proxy->F_field3 = (frame[37].i);
		proxy->F_field2 = (frame[33].i);
		proxy->F_field1 = (frame[32].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_geom_Geometry_circle_int_int_int_int_int_arc_func_Intc2(ctx, temp2, temp3, temp4, temp5, temp6, sp[0].o);
	}
label_139:;
	{
	LINE_NUMBER(656);
	INST_IINC(30, 1);
	goto label_132;
	}
label_116:;
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[26].o = sp[0].o;
	}
label_152:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[26].o)))(ctx, (frame[26].o));
	if (temp0 == 0) goto label_153;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[26].o)))(ctx, (frame[26].o));
	frame[27].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(714);
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[27].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_needsSurface) == 0) goto label_155;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[27].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[27].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_155;
	}
	{
	LINE_NUMBER(715);
	sp[0].o = frame[27].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_155:;
	LINE_NUMBER(717);
	goto label_152;
label_153:;
	{
	LINE_NUMBER(719);
	SM_mindustry_game_Schematics_placeLaunchLoadout_int_int(ctx, ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[5].o)))->F_y));
	LINE_NUMBER(721);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[26].o = sp[0].o;
	}
label_158:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[26].o)))(ctx, (frame[26].o));
	if (temp0 == 0) goto label_159;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[26].o)))(ctx, (frame[26].o));
	frame[27].o = (checkCast(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room, sp[0].o));
	LINE_NUMBER(722);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[27].o)))->F_x), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[27].o)))->F_y));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_spawn;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(723);
	goto label_158;
	}
label_159:;
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_162;
	}
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_basegen;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[2].o = frame[6].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[2].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[3].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[3].o, ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[5].o)))->F_y));
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_state;
	sp[4].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[4].o))->F_rules;
	sp[4].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[4].o))->F_waveTeam;
	sp[5].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	((func_mindustry_maps_generators_BaseGenerator_generate_mindustry_world_Tiles_arc_struct_Seq_mindustry_world_Tile_mindustry_game_Team_mindustry_type_Sector_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BaseGenerator_generate_mindustry_world_Tiles_arc_struct_Seq_mindustry_world_Tile_mindustry_game_Team_mindustry_type_Sector_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, (frame[24].f));
	LINE_NUMBER(728);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_info;
	jint temp0 = jint(1);
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[1].o))->F_attack = temp0;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode = temp0;
	goto label_165;
	}
label_162:;
	{
	LINE_NUMBER(730);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_info;
	jint temp0 = 10;
	jint temp1 = jint(5);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((frame[24].f) * (jfloat(10.0f))), (jfloat(1)));
	jint temp3 = temp0 + (temp1 * (jint(temp2)));
	((mindustry_game_SectorInfo *) NULL_CHECK(sp[1].o))->F_winWave = temp3;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave = temp3;
	}
label_165:;
	{
	LINE_NUMBER(733);
	frame[26].f = (jfloat(0.4f));
	LINE_NUMBER(735);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp0 = jfloat(7800.0f);
	jfloat temp1 = jfloat(3600.0f);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((frame[24].f) - (frame[26].f)), (jfloat(0)));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp0, temp1, temp2);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveSpacing = temp3;
	LINE_NUMBER(736);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves = (jint(1));
	LINE_NUMBER(737);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_env = ((jint)((mindustry_type_Planet *) NULL_CHECK(sp[1].o))->F_defaultEnv);
	LINE_NUMBER(738);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_enemyCoreBuildRadius = (jfloat(600.0f));
	LINE_NUMBER(741);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp4 = frame[24].f;
	clinit_arc_math_Rand(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Rand);
	sp[2].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	init_arc_math_Rand_long(ctx, sp[1].o, (jlong(((jint)((mindustry_type_Sector *) NULL_CHECK(sp[2].o))->F_id))));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jint temp5 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_attackMode;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	jobject temp6 = sp[1].o;
	sp[1].f = temp4;
	jobject temp7 = sp[2].o;
	sp[2].o = temp6;
	sp[3].i = temp5;
	sp += 4;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(temp7))->F_attackMode) == 0) goto label_171;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	jint temp0 = (jint)((func_mindustry_ai_WaveSpawner_countGroundSpawns_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_countGroundSpawns_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_171;
	}
	INST_ICONST(1);
	goto label_172;
label_171:;
	INST_ICONST(0);
label_172:;
	{
	sp -= 5;
	sp[1].o = (jobject)SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_boolean_R_arc_struct_Seq(ctx, sp[1].f, sp[2].o, sp[3].i, sp[4].i, (frame[17].i));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_postGenerate_mindustry_world_Tiles(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:postGenerate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(746);
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_hasEnemyBase_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_hasEnemyBase_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_basegen;
	((func_mindustry_maps_generators_BaseGenerator_postGenerate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_generators_BaseGenerator_postGenerate])(ctx, sp[0].o);
	LINE_NUMBER(750);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_spawner;
	jint temp0 = (jint)((func_mindustry_ai_WaveSpawner_countGroundSpawns_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_WaveSpawner_countGroundSpawns_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(751);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[1].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	jfloat temp0 = (jfloat)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_threat;
	clinit_arc_math_Rand(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Rand);
	sp[2].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	init_arc_math_Rand_long(ctx, sp[1].o, (jlong(((jint)((mindustry_type_Sector *) NULL_CHECK(sp[2].o))->F_id))));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_state;
	sp[2].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[2].o))->F_rules;
	sp[1].o = (jobject)SM_mindustry_game_Waves_generate_float_arc_math_Rand_boolean_boolean_boolean_R_arc_struct_Seq(ctx, temp0, sp[1].o, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_attackMode), (jint(1)), (jint(0)));
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(754);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$000_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$100_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$200_mindustry_maps_planet_SerpuloPlanetGenerator_float_float_double_double_double_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jdouble param3, jdouble param4, jdouble param5) {
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$200", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].d = param3;
	frame[5].d = param4;
	frame[7].d = param5;
	{
	LINE_NUMBER(22);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].d), (frame[5].d), (frame[7].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$300_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$400_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$500_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$600_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$600", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$700_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$700", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$800_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$800", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$900_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$900", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1000_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$1000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1100_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$1100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1200_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$1200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1300_mindustry_maps_planet_SerpuloPlanetGenerator_float_float_double_double_double_R_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jdouble param3, jdouble param4, jdouble param5) {
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$1300", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].d = param3;
	frame[5].d = param4;
	frame[7].d = param5;
	{
	LINE_NUMBER(22);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].d), (frame[5].d), (frame[7].d));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1400_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$1400", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1500_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$1500", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1600_mindustry_maps_planet_SerpuloPlanetGenerator_R_mindustry_world_Tiles(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$1600", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1700_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$1700", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1800_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$1800", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1900_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$1900", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2000_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$2000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2100_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$2100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2200_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$2200", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2300_mindustry_maps_planet_SerpuloPlanetGenerator_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:access$2300", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return ((jint)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$9_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_R_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$generate$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_y));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$8_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$generate$8", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(696);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_dst_float_float_float_float_R_float(ctx, (jfloat((frame[4].i))), (jfloat((frame[5].i))), (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	frame[6].f = temp0;
	LINE_NUMBER(697);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (jfloat(0.05f)), (jfloat(0.5f)), ((frame[6].f) / (jfloat((frame[3].i)))));
	frame[7].f = temp1;
	LINE_NUMBER(699);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[4].i), (frame[5].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(700);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(701);
	sp[0].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, (frame[8].o));
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble((frame[7].f))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(702);
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, (frame[8].o));
	goto label_4;
	}
label_6:;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.5)));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_health;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[8].o)))->F_build;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (((jfloat)((mindustry_gen_Building *) NULL_CHECK(sp[2].o))->F_health) * (jfloat(0.9f))));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_health = (temp0 - temp1);
	}
label_4:;
	LINE_NUMBER(707);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$7_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$generate$7", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_getn_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(680);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[3].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(681);
	sp[0].o = frame[3].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreScrap;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(682);
	frame[4].i = (jint(1));
	}
label_5:;
	{
	if ((frame[4].i) > (jint(2))) goto label_2;
	}
	{
	LINE_NUMBER(683);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d8;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_9:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_10;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(684);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[1].i) + (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_x) * (frame[4].i))), ((frame[2].i) + (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_y) * (frame[4].i))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(685);
	if ((frame[9].o) == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	sp += 1;
	if ((frame[4].i) != (jint(1))) goto label_14;
	}
	(sp++)->d = jdouble(0.4);
	goto label_15;
label_14:;
	(sp++)->d = jdouble(0.2);
label_15:;
	POP_N(2); // Pop method args
	sp->i = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, sp[1].d);
	sp++;
	if ((--sp)->i == 0) goto label_13;
	{
	LINE_NUMBER(686);
	sp[0].o = frame[9].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreScrap;
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_13:;
	{
	LINE_NUMBER(683);
	INST_IINC(7, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(682);
	INST_IINC(4, 1);
	goto label_5;
	}
label_2:;
	LINE_NUMBER(691);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$4_arc_struct_Seq_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$generate$4", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_sporeMoss;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(560);
	jfloat temp0 = jfloat(0.5f);
	jfloat temp1 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[2].i) - (90)))), (jfloat((frame[3].i))), (jdouble(4.0)), (jdouble(0.8)), (jdouble(65.0)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp1));
	if ((doubleCompare((jdouble(temp2)), (jdouble(0.02)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_moss;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(566);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darksand;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(567);
	jfloat temp0 = jfloat(0.5f);
	jfloat temp1 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[2].i) - (40)))), (jfloat((frame[3].i))), (jdouble(2.0)), (jdouble(0.7)), (jdouble(80.0)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp1));
	if ((floatCompare(temp2, (jfloat(0.25f)), -1)) <= 0) goto label_4;
	}
	{
	jfloat temp0 = jfloat(0.5f);
	sp[0].o = frame[0].o;
	jfloat temp1 = jfloat((frame[2].i));
	jint temp2 = frame[3].i;
	sp[1].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	jfloat temp3 = jfloat((temp2 + (((jint)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_id) * (10))));
	jdouble temp4 = jdouble(1);
	jdouble temp5 = jdouble(1);
	jdouble temp6 = jdouble(60.0);
	LINE_NUMBER(568);
	jfloat temp7 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float])(ctx, sp[0].o, temp1, temp3, temp4, temp5, temp6);
	jfloat temp8 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp7));
	if ((floatCompare(temp8, (jfloat(0.41f)), -1)) <= 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_10);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (frame[2].i);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(569);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_tar;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_hotrock;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(575);
	jfloat temp0 = jfloat(0.5f);
	jfloat temp1 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[2].i) - (90)))), (jfloat((frame[3].i))), (jdouble(4.0)), (jdouble(0.8)), (jdouble(80.0)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp1));
	if ((doubleCompare((jdouble(temp2)), (jdouble(0.035)), -1)) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(576);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_basalt;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(578);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_ore = (jref) sp[1].o;
	LINE_NUMBER(579);
	frame[4].i = (jint(1));
	LINE_NUMBER(580);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_17:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_18;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(581);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[2].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_x)), ((frame[3].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[8].o)))->F_y)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(582);
	if ((frame[9].o) == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[9].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_hotrock;
	if (sp[0].o == sp[1].o) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[9].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_magmarock;
	if (sp[0].o == sp[1].o) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(583);
	frame[4].i = (jint(0));
	}
label_22:;
	{
	LINE_NUMBER(580);
	INST_IINC(7, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(586);
	if ((frame[4].i) == 0) goto label_23;
	}
	{
	LINE_NUMBER(587);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_magmarock;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_23:;
	LINE_NUMBER(589);
	goto label_12;
label_8:;
	{
	LINE_NUMBER(590);
	if ((clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx), (jint)SF_mindustry_maps_planet_SerpuloPlanetGenerator_genLakes) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_basalt;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_ice;
	if (sp[0].o == sp[1].o) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(591);
	jfloat temp0 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_double_R_float])(ctx, (frame[0].o), (jfloat(((frame[2].i) + (782)))), (jfloat((frame[3].i))), (jdouble(5.0)), (jdouble(0.75)), (jdouble(260.0)), (jdouble(1)));
	frame[4].f = temp0;
	LINE_NUMBER(592);
	if ((floatCompare((frame[4].f), (jfloat(0.67f)), -1)) <= 0) goto label_12;
	}
	{
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_maps_planet_SerpuloPlanetGenerator_invoke_arc_func_Boolf_11);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (frame[2].i);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(593);
	if ((floatCompare((frame[4].f), (jfloat(0.72f)), -1)) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(594);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((floatCompare((frame[4].f), (jfloat(0.78f)), -1)) <= 0) goto label_30;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_taintedWater;
	goto label_31;
label_30:;
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_sand;
	if (sp[0].o != sp[1].o) goto label_32;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_sandWater;
	goto label_31;
label_32:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_darksandTaintedWater;
label_31:;
	sp -= 2;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	goto label_12;
label_28:;
	{
	LINE_NUMBER(596);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sand;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_33;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp += 1;
	goto label_34;
	}
label_33:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_darksand;
label_34:;
	sp -= 2;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
label_12:;
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(7,500000e-03)));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(603);
	frame[4].i = (jint(0));
	LINE_NUMBER(604);
	frame[5].i = (jint(1));
	LINE_NUMBER(605);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_41:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_42;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(606);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((frame[2].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[9].o)))->F_x)), ((frame[3].i) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[9].o)))->F_y)));
	frame[10].o = sp[0].o;
	LINE_NUMBER(607);
	if ((frame[10].o) == nullptr) goto label_45;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[10].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_45;
	}
	{
	LINE_NUMBER(608);
	frame[4].i = (jint(1));
	goto label_47;
	}
label_45:;
	{
	LINE_NUMBER(610);
	frame[5].i = (jint(0));
	}
label_47:;
	{
	LINE_NUMBER(605);
	INST_IINC(8, 1);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(613);
	if ((frame[4].i) == 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_snowWall;
	if (sp[0].o == sp[1].o) goto label_48;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_iceWall;
	if (sp[0].o == sp[1].o) goto label_48;
	}
	INST_ILOAD(5);
	if ((--sp)->i == 0) goto label_35;
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_snow;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.03)));
	if (temp0 == 0) goto label_35;
	}
label_48:;
	{
	LINE_NUMBER(614);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[1].o, (jdouble(0.5)));
	sp += 1;
	if (temp0 == 0) goto label_49;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_whiteTree;
	goto label_50;
label_49:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_whiteTreeDead;
label_50:;
	sp -= 2;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
label_35:;
	{
	LINE_NUMBER(620);
	frame[4].i = (jint(0));
	}
label_51:;
	{
	if ((frame[4].i) >= (jint(4))) goto label_52;
	}
	{
	LINE_NUMBER(621);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = frame[2].i;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_x);
	jint temp2 = frame[3].i;
	clinit_arc_math_geom_Geometry(ctx);
	sp[1].o = (jobject)SF_arc_math_geom_Geometry_d4;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_y)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(622);
	if ((frame[5].o) == nullptr) goto label_55;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_55;
	}
	LINE_NUMBER(623);
	goto label_57;
label_55:;
	{
	LINE_NUMBER(620);
	INST_IINC(4, 1);
	goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.01)));
	if (temp0 == 0) goto label_57;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_57;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o != sp[1].o) goto label_57;
	}
	{
	LINE_NUMBER(628);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_planet_SerpuloPlanetGenerator *) NULL_CHECK((frame[0].o)))->F_dec;
	sp[2].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[3].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[3].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[3].o);
	sp[3].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[3].o))->F_decoration;
	sp[1].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_block = (jref) (checkCast(ctx, &class_mindustry_world_Block, sp[1].o));
	}
label_57:;
	LINE_NUMBER(631);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$6_int_int_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$generate$6", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(592);
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, (jfloat((frame[0].i))), (jfloat((frame[1].i))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[2].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[2].o)))->F_y))), (jfloat(14.0f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$5_int_int_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$generate$5", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(568);
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, (jfloat((frame[0].i))), (jfloat((frame[1].i))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[2].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[2].o)))->F_y))), (jfloat(30.0f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$3_arc_struct_Seq_arc_struct_FloatSeq_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$generate$3", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(533);
	frame[5].i = ((frame[3].i) - (jint(4)));
	frame[6].i = ((frame[4].i) + (23));
	LINE_NUMBER(534);
	frame[7].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1)));
	}
label_4:;
	INST_ILOAD(7);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(536);
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, (frame[2].o), (frame[7].i));
	frame[9].f = temp0;
	LINE_NUMBER(537);
	jfloat temp1 = jfloat(0.5f);
	jfloat temp2 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float])(ctx, (frame[0].o), (jfloat((frame[5].i))), (jfloat(((frame[6].i) + ((frame[7].i) * (999))))), (jdouble(2.0)), (jdouble(0.7)), (jdouble(((40) + ((frame[7].i) * (jint(2)))))));
	jfloat temp3 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp1 - temp2));
	if ((doubleCompare((jdouble(temp3)), ((jdouble(0.2199999988079071)) + ((jdouble((frame[7].i))) * (jdouble(0.01)))), -1)) <= 0) goto label_9;
	}
	{
	jfloat temp0 = jfloat(0.5f);
	sp[0].o = frame[0].o;
	jfloat temp1 = jfloat((frame[5].i));
	jfloat temp2 = jfloat(((frame[6].i) - ((frame[7].i) * (999))));
	jdouble temp3 = jdouble(1);
	jdouble temp4 = jdouble(1);
	jdouble temp5 = jdouble(((30) + ((frame[7].i) * (jint(4)))));
	LINE_NUMBER(538);
	jfloat temp6 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_R_float])(ctx, sp[0].o, temp1, temp2, temp3, temp4, temp5);
	jfloat temp7 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - temp6));
	if ((floatCompare(temp7, ((jfloat(0.37f)) + (frame[9].f)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(539);
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_ore = (jref) (frame[8].o);
	LINE_NUMBER(540);
	goto label_5;
	}
label_9:;
	{
	LINE_NUMBER(534);
	INST_IINC(7, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_ore;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_oreScrap;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_rand;
	jint temp0 = (jint)((func_arc_math_Rand_chance_double_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_chance_double_R_boolean])(ctx, sp[0].o, (jdouble(0.33)));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_metalFloorDamaged;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
	}
label_13:;
	LINE_NUMBER(547);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$2_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$generate$2", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_shallow) != 0) goto label_1;
	}
	{
	LINE_NUMBER(483);
	frame[4].i = (-(frame[1].i));
	}
label_3:;
	{
	if ((frame[4].i) > (frame[1].i)) goto label_4;
	}
	{
	LINE_NUMBER(484);
	frame[5].i = (-(frame[1].i));
	}
label_6:;
	{
	if ((frame[5].i) > (frame[1].i)) goto label_7;
	}
	{
	LINE_NUMBER(485);
	if ((((frame[4].i) * (frame[4].i)) + ((frame[5].i) * (frame[5].i))) > ((frame[1].i) * (frame[1].i))) goto label_9;
	}
	{
	LINE_NUMBER(486);
	frame[6].i = ((frame[4].i) + (frame[2].i));
	frame[7].i = ((frame[5].i) + (frame[3].i));
	LINE_NUMBER(488);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(489);
	if ((frame[8].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[8].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_shallow) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[8].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_9;
	}
label_14:;
	LINE_NUMBER(491);
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(484);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(483);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_water;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_15;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_deepwater;
	goto label_16;
label_15:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_taintedWater;
label_16:;
	sp -= 2;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
label_1:;
	LINE_NUMBER(499);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$1_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$generate$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(454);
	frame[3].i = (jint(3));
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_shallow) == 0) goto label_2;
	}
	{
	LINE_NUMBER(458);
	frame[4].i = (-(frame[3].i));
	}
label_4:;
	{
	if ((frame[4].i) > (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(459);
	frame[5].i = (-(frame[3].i));
	}
label_7:;
	{
	if ((frame[5].i) > (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(460);
	if ((((frame[4].i) * (frame[4].i)) + ((frame[5].i) * (frame[5].i))) > ((frame[3].i) * (frame[3].i))) goto label_10;
	}
	{
	LINE_NUMBER(461);
	frame[6].i = ((frame[4].i) + (frame[1].i));
	frame[7].i = ((frame[5].i) + (frame[2].i));
	LINE_NUMBER(463);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tiles_get_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(464);
	if ((frame[8].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[8].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_10;
	}
label_15:;
	LINE_NUMBER(466);
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(459);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(458);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_darksandTaintedWater;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_16;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_taintedWater;
	goto label_17;
label_16:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_water;
label_17:;
	sp -= 2;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
label_2:;
	LINE_NUMBER(474);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$0_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$generate$0", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(432);
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_rect;
	sp[0].o = (jobject)((func_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector$SectorRect_project_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(434);
	sp[0].o = (jobject)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[0].o)))->F_sector;
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_id), (jdouble(2.0)), (jdouble(0.6000000238418579)), (jdouble(0.1428571492433548)), (jdouble((frame[2].i))), (jdouble((frame[3].i))));
	frame[5].f = (temp0 * (jfloat(0.1f)));
	LINE_NUMBER(435);
	jfloat temp1 = (jfloat)SM_arc_util_noise_Ridged_noise3d_int_double_double_double_int_float_R_float(ctx, (jint(2)), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_x))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_y))), (jdouble(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_z))), (jint(1)), (jfloat(0.018181818f)));
	jfloat temp2 = temp1 + (frame[5].f);
	jfloat temp3 = (jfloat)((func_mindustry_maps_planet_SerpuloPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float])(ctx, (frame[0].o), (frame[4].o));
	frame[6].f = (temp2 - (temp3 * (jfloat(0))));
	LINE_NUMBER(436);
	frame[7].f = (((frame[5].f) * (jfloat(44.0f))) - (jfloat(2)));
	LINE_NUMBER(438);
	if ((floatCompare((frame[6].f), (jfloat(0.17f)), -1)) <= 0) goto label_6;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, (jfloat((frame[2].i))), (jfloat((frame[3].i))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_y))), ((jfloat(12.0f)) + (frame[7].f)));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(439);
	if ((floatCompare((frame[6].f), (jfloat(0.27f)), -1)) <= 0) goto label_8;
	}
	{
	jint temp0 = (jint)SM_arc_math_Mathf_within_float_float_float_float_float_R_boolean(ctx, (jfloat((frame[2].i))), (jfloat((frame[3].i))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_x))), (jfloat(((jint)((mindustry_maps_planet_SerpuloPlanetGenerator$1Room *) NULL_CHECK((frame[1].o)))->F_y))), ((jfloat(15.0f)) + (frame[7].f)));
	if (temp0 != 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(440);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_sand;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_salt;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(443);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_ice;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_iceSnow;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_snow;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_6;
	}
	{
	LINE_NUMBER(444);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[9].i) == 0) goto label_15;
	}
	{
	LINE_NUMBER(445);
	if ((frame[8].i) == 0) goto label_17;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_taintedWater;
	goto label_18;
label_17:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_darksandTaintedWater;
	goto label_18;
label_15:;
	{
	LINE_NUMBER(446);
	if ((frame[8].i) == 0) goto label_19;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_water;
	goto label_18;
label_19:;
	{
	LINE_NUMBER(447);
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_sand;
	if (sp[0].o == sp[1].o) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_generators_BasicGenerator *) NULL_CHECK((frame[0].o)))->F_floor;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_salt;
	if (sp[0].o != sp[1].o) goto label_21;
	}
label_20:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_sandWater;
	goto label_18;
label_21:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_darksandWater;
label_18:;
	sp -= 2;
	((mindustry_maps_generators_BasicGenerator *) NULL_CHECK(sp[0].o))->F_floor = (jref) sp[1].o;
label_6:;
	LINE_NUMBER(450);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$allowNumberedLaunch$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:lambda$allowNumberedLaunch$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) < (jint(4))) goto label_1;
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

void clinit_mindustry_maps_planet_SerpuloPlanetGenerator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_maps_generators_PlanetGenerator(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/SerpuloPlanetGenerator:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	{
	LINE_NUMBER(24);
	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	SF_mindustry_maps_planet_SerpuloPlanetGenerator_indirectPaths = (jint(0));
	LINE_NUMBER(26);
	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	SF_mindustry_maps_planet_SerpuloPlanetGenerator_genLakes = (jint(0));
	LINE_NUMBER(192);
	clinit_mindustry_maps_planet_SerpuloPlanetGenerator(ctx);
	SF_mindustry_maps_planet_SerpuloPlanetGenerator_metalDstScl = (jdouble(0.25));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_maps_planet_SerpuloPlanetGenerator;
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

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method findLaunchCandidate
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_maps_planet_SerpuloPlanetGenerator[] {
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
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_postGenerate_mindustry_world_Tiles,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_generate,
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
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_double_R_float,
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
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_isEmissive_R_boolean,
	(void *) M_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean,
	(void *) M_mindustry_maps_generators_PlanetGenerator_generateSector_mindustry_type_Sector,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_onSectorCaptured_mindustry_type_Sector,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_onSectorLost_mindustry_type_Sector,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_beforeSaveWrite_mindustry_type_Sector,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getLockedIcon_mindustry_type_Sector_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector,
	(void *) M_mindustry_maps_generators_PlanetGenerator_allowAcceleratorLanding_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_maps_generators_PlanetGenerator_addWeather_mindustry_type_Sector_mindustry_game_Rules,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getSizeScl_R_float,
	(void *) M_mindustry_maps_generators_PlanetGenerator_getSectorSize_mindustry_type_Sector_R_int,
	(void *) M_mindustry_maps_generators_PlanetGenerator_generate_mindustry_world_Tiles_mindustry_type_Sector_mindustry_world_WorldParams,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_allowNumberedLaunch_mindustry_type_Sector_R_boolean,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_getBlock_arc_math_geom_Vec3_boolean_R_mindustry_world_Block,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$9_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_R_mindustry_world_Tile,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$8_int_int_int_int_int,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$7_int_int,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$4_arc_struct_Seq_int_int,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$3_arc_struct_Seq_arc_struct_FloatSeq_int_int,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$2_int_int_int,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$1_int_int,
	(void *) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$0_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_int_int,
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
	{ "allowNumberedLaunch", "(Lmindustry/type/Sector;)Z" },
	{ "getBlock", "(Larc/math/geom/Vec3;Z)Lmindustry/world/Block;" },
	{ "lambda$generate$9", "(Lmindustry/maps/planet/SerpuloPlanetGenerator$1Room;)Lmindustry/world/Tile;" },
	{ "lambda$generate$8", "(IIIII)V" },
	{ "lambda$generate$7", "(II)V" },
	{ "lambda$generate$4", "(Larc/struct/Seq;II)V" },
	{ "lambda$generate$3", "(Larc/struct/Seq;Larc/struct/FloatSeq;II)V" },
	{ "lambda$generate$2", "(III)V" },
	{ "lambda$generate$1", "(II)V" },
	{ "lambda$generate$0", "(Lmindustry/maps/planet/SerpuloPlanetGenerator$1Room;II)V" },
};

static FieldMetadata fields[] {
	{ "indirectPaths", &class_boolean, (intptr_t) &SF_mindustry_maps_planet_SerpuloPlanetGenerator_indirectPaths, "Z", 9 },
	{ "genLakes", &class_boolean, (intptr_t) &SF_mindustry_maps_planet_SerpuloPlanetGenerator_genLakes, "Z", 9 },
	{ "basegen", &class_mindustry_maps_generators_BaseGenerator, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator, F_basegen), "Lmindustry/maps/generators/BaseGenerator;", 0 },
	{ "heightYOffset", &class_float, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator, F_heightYOffset), "F", 0 },
	{ "scl", &class_float, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator, F_scl), "F", 0 },
	{ "waterOffset", &class_float, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator, F_waterOffset), "F", 0 },
	{ "heightScl", &class_float, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator, F_heightScl), "F", 0 },
	{ "arr", getArrayClass(&class_mindustry_world_Block, 2), offsetof(mindustry_maps_planet_SerpuloPlanetGenerator, F_arr), "[[Lmindustry/world/Block;", 0 },
	{ "dec", &class_arc_struct_ObjectMap, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator, F_dec), "Larc/struct/ObjectMap;", 0 },
	{ "tars", &class_arc_struct_ObjectMap, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator, F_tars), "Larc/struct/ObjectMap;", 0 },
	{ "water", &class_float, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator, F_water), "F", 0 },
	{ "basePos", &class_arc_math_geom_Vec3, offsetof(mindustry_maps_planet_SerpuloPlanetGenerator, F_basePos), "Larc/math/geom/Vec3;", 0 },
	{ "metalDstScl", &class_double, (intptr_t) &SF_mindustry_maps_planet_SerpuloPlanetGenerator_metalDstScl, "D", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_planet_SerpuloPlanetGenerator, 0, "()V", 1 },
	{ "rawHeight", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_rawHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 0 },
	{ "onSectorCaptured", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_onSectorCaptured_mindustry_type_Sector, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_onSectorCaptured_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "onSectorLost", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_onSectorLost_mindustry_type_Sector, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_onSectorLost_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "beforeSaveWrite", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_beforeSaveWrite_mindustry_type_Sector, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_beforeSaveWrite_mindustry_type_Sector, "(Lmindustry/type/Sector;)V", 1 },
	{ "isEmissive", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_isEmissive_R_boolean, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_isEmissive_R_boolean, "()Z", 1 },
	{ "allowNumberedLaunch", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_allowNumberedLaunch_mindustry_type_Sector_R_boolean, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_allowNumberedLaunch_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 1 },
	{ "allowLanding", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_allowLanding_mindustry_type_Sector_R_boolean, "(Lmindustry/type/Sector;)Z", 1 },
	{ "findLaunchCandidate", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_findLaunchCandidate_mindustry_type_Sector_mindustry_type_Sector_R_mindustry_type_Sector, "(Lmindustry/type/Sector;Lmindustry/type/Sector;)Lmindustry/type/Sector;", 1 },
	{ "getLockedText", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_getLockedText_mindustry_type_Sector_java_lang_StringBuilder, "(Lmindustry/type/Sector;Ljava/lang/StringBuilder;)V", 1 },
	{ "getHeight", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_getHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getColor", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_getColor_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
	{ "getEmissiveColor", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
	{ "genTile", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_genTile_arc_math_geom_Vec3_mindustry_world_TileGen, "(Larc/math/geom/Vec3;Lmindustry/world/TileGen;)V", 1 },
	{ "getBlock", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_getBlock_arc_math_geom_Vec3_boolean_R_mindustry_world_Block, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_getBlock_arc_math_geom_Vec3_boolean_R_mindustry_world_Block, "(Larc/math/geom/Vec3;Z)Lmindustry/world/Block;", 0 },
	{ "noise", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_double_R_float, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_noise_float_float_double_double_double_double_R_float, "(FFDDDD)F", 4 },
	{ "generate", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_generate, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_generate, "()V", 4 },
	{ "postGenerate", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_postGenerate_mindustry_world_Tiles, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_postGenerate_mindustry_world_Tiles, "(Lmindustry/world/Tiles;)V", 1 },
	{ "access$000", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$000_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)Larc/math/Rand;", 4104 },
	{ "access$100", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$100_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)Larc/math/Rand;", 4104 },
	{ "access$200", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$200_mindustry_maps_planet_SerpuloPlanetGenerator_float_float_double_double_double_R_float, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;FFDDD)F", 4104 },
	{ "access$300", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$300_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)Larc/math/Rand;", 4104 },
	{ "access$400", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$400_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)Larc/math/Rand;", 4104 },
	{ "access$500", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$500_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)Larc/math/Rand;", 4104 },
	{ "access$600", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$600_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$700", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$700_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$800", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$800_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$900", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$900_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$1000", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1000_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$1100", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1100_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)Larc/math/Rand;", 4104 },
	{ "access$1200", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1200_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)Larc/math/Rand;", 4104 },
	{ "access$1300", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1300_mindustry_maps_planet_SerpuloPlanetGenerator_float_float_double_double_double_R_float, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;FFDDD)F", 4104 },
	{ "access$1400", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1400_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$1500", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1500_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$1600", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1600_mindustry_maps_planet_SerpuloPlanetGenerator_R_mindustry_world_Tiles, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)Lmindustry/world/Tiles;", 4104 },
	{ "access$1700", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1700_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)Larc/math/Rand;", 4104 },
	{ "access$1800", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1800_mindustry_maps_planet_SerpuloPlanetGenerator_R_arc_math_Rand, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)Larc/math/Rand;", 4104 },
	{ "access$1900", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$1900_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$2000", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2000_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$2100", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2100_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$2200", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2200_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "access$2300", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_access$2300_mindustry_maps_planet_SerpuloPlanetGenerator_R_int, 0, "(Lmindustry/maps/planet/SerpuloPlanetGenerator;)I", 4104 },
	{ "lambda$generate$9", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$9_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_R_mindustry_world_Tile, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$9_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_R_mindustry_world_Tile, "(Lmindustry/maps/planet/SerpuloPlanetGenerator$1Room;)Lmindustry/world/Tile;", 4098 },
	{ "lambda$generate$8", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$8_int_int_int_int_int, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$8_int_int_int_int_int, "(IIIII)V", 4098 },
	{ "lambda$generate$7", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$7_int_int, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$7_int_int, "(II)V", 4098 },
	{ "lambda$generate$4", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$4_arc_struct_Seq_int_int, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$4_arc_struct_Seq_int_int, "(Larc/struct/Seq;II)V", 4098 },
	{ "lambda$generate$6", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$6_int_int_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_R_boolean, 0, "(IILmindustry/maps/planet/SerpuloPlanetGenerator$1Room;)Z", 4106 },
	{ "lambda$generate$5", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$5_int_int_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_R_boolean, 0, "(IILmindustry/maps/planet/SerpuloPlanetGenerator$1Room;)Z", 4106 },
	{ "lambda$generate$3", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$3_arc_struct_Seq_arc_struct_FloatSeq_int_int, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$3_arc_struct_Seq_arc_struct_FloatSeq_int_int, "(Larc/struct/Seq;Larc/struct/FloatSeq;II)V", 4098 },
	{ "lambda$generate$2", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$2_int_int_int, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$2_int_int_int, "(III)V", 4098 },
	{ "lambda$generate$1", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$1_int_int, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$1_int_int, "(II)V", 4098 },
	{ "lambda$generate$0", (intptr_t) M_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$0_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_int_int, VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$generate$0_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_int_int, "(Lmindustry/maps/planet/SerpuloPlanetGenerator$1Room;II)V", 4098 },
	{ "lambda$allowNumberedLaunch$0", (intptr_t) SM_mindustry_maps_planet_SerpuloPlanetGenerator_lambda$allowNumberedLaunch$0_mindustry_world_blocks_storage_CoreBlock$CoreBuild_R_boolean, 0, "(Lmindustry/world/blocks/storage/CoreBlock$CoreBuild;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_planet_SerpuloPlanetGenerator, 0, "()V", 8 },
};

Class class_mindustry_maps_planet_SerpuloPlanetGenerator{
		.nativeName = (intptr_t) "mindustry/maps/planet/SerpuloPlanetGenerator",
		.parentClass = (intptr_t) &class_mindustry_maps_generators_PlanetGenerator,
		.size = sizeof(mindustry_maps_planet_SerpuloPlanetGenerator),
		.classVtable = (intptr_t) vtable_mindustry_maps_planet_SerpuloPlanetGenerator,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_planet_SerpuloPlanetGenerator,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_maps_planet_SerpuloPlanetGenerator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 54,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 93,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_planet_SerpuloPlanetGenerator = registerClass(&class_mindustry_maps_planet_SerpuloPlanetGenerator);

}
