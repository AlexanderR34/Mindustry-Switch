#include "mindustry/world/blocks/distribution/Duct.h"
#include "mindustry/world/blocks/distribution/ItemBridge.h"
#include "mindustry/world/Block.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/meta/StatUnit.h"
#include "arc/util/Eachable.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/blocks/distribution/DirectionBridge.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/blocks/distribution/Duct_DuctBuild.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/distribution/Duct.h"
#include "mindustry/world/blocks/distribution/DuctJunction.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/Edges.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/world/blocks/distribution/Duct_invoke_arc_func_Boolf_4.h"
#include "mindustry/world/blocks/distribution/Duct_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/blocks/distribution/Duct_invoke_arc_func_Boolf_6.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/world/blocks/distribution/Duct_invoke_arc_func_Boolf_7.h"
#include "mindustry/input/Placement.h"
#include "mindustry/graphics/BuildingCacheLayer.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "mindustry/world/blocks/distribution/Conveyor.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/Autotiler.h"
#include "mindustry/world/blocks/distribution/DuctBridge.h"
#include "mindustry/world/blocks/distribution/StackConveyor.h"
#include "mindustry/ctype/Content.h"

extern "C" {


void mark_mindustry_world_blocks_distribution_Duct(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Block(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_distribution_Duct *) object;
	if (self->F_topRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_topRegions)->clazz)->markFunction)((jobject) self->F_topRegions, mark, depth + 1);
	if (self->F_botRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_botRegions)->clazz)->markFunction)((jobject) self->F_botRegions, mark, depth + 1);
	if (self->F_capRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_capRegion)->clazz)->markFunction)((jobject) self->F_capRegion, mark, depth + 1);
	if (self->F_bridgeReplacement)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bridgeReplacement)->clazz)->markFunction)((jobject) self->F_bridgeReplacement, mark, depth + 1);
	if (self->F_junctionReplacement)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_junctionReplacement)->clazz)->markFunction)((jobject) self->F_junctionReplacement, mark, depth + 1);
}

void clinit_mindustry_world_blocks_distribution_Duct(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
}

void init_mindustry_world_blocks_distribution_Duct_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_Duct(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(27);
	((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(5.0f));
	LINE_NUMBER(28);
	((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_armored = (jint(0));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_transportation;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(41);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(0));
	LINE_NUMBER(42);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(43);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_conveyorPlacement = (jint(1));
	LINE_NUMBER(44);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_unloadable = (jint(0));
	LINE_NUMBER(45);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity = (jint(1));
	LINE_NUMBER(46);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_noUpdateDisabled = (jint(1));
	LINE_NUMBER(47);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_underBullets = (jint(1));
	LINE_NUMBER(48);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(49);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_noSideBlend = (jint(1));
	LINE_NUMBER(50);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_isDuct = (jint(1));
	LINE_NUMBER(51);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_priority = (jfloat(-1.0f));
	LINE_NUMBER(52);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envEnabled = (7);
	LINE_NUMBER(54);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawCached = (jint(1));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_under;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildingCacheLayer = (jref) sp[1].o;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:setStats", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_itemsMoved;
	jfloat temp0 = (jfloat(60.0f)) / ((jfloat)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_speed);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_itemsSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:init", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	M_mindustry_world_Block_init(ctx, (frame[0].o));
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_bridgeReplacement;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_bridgeReplacement;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_DuctBridge)) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_bridgeReplacement;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_ItemBridge)) != 0) goto label_3;
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_ductBridge;
	((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[0].o))->F_bridgeReplacement = (jref) sp[1].o;
	}
label_3:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:drawPlanRegion", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_Duct_getTiling_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct_getTiling_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_Array1_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(77);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(79);
	SM_arc_graphics_g2d_Draw_scl_float_float(ctx, (jfloat(((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(1)))))), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(2)))))));
	LINE_NUMBER(80);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(0.5f)));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_botRegions;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))));
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, (jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) * (90)))));
	LINE_NUMBER(82);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_topRegions;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(0)))));
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, temp3, (jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) * (90)))));
	LINE_NUMBER(84);
	SM_arc_graphics_g2d_Draw_scl(ctx);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_Duct_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:blendsArmored", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[2].i));
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x);
	jint temp2 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[2].i));
	jint temp3 = (jint)SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(ctx, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y)), (frame[3].i), (frame[4].i));
	if (temp3 != 0) goto label_1;
	}
	{
	sp[0].o = frame[6].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	sp[1].o = frame[1].o;
	LINE_NUMBER(90);
	jint temp2 = (jint)((func_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	if (temp2 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Block_int_int_mindustry_world_Tile_R_mindustry_world_Tile(ctx, (frame[6].o), (frame[3].i), (frame[4].i), (frame[1].o));
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[6].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	sp[1].o = frame[1].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Block_int_int_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[0].o, temp0, temp1, sp[1].o);
	jint temp2 = (jint)((func_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_relativeTo_mindustry_world_Tile_R_byte])(ctx, sp[0].o, (frame[1].o));
	if (temp2 == (frame[2].i)) goto label_1;
	}
label_3:;
	{
	sp[0].o = frame[6].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	sp[1].o = frame[1].o;
	LINE_NUMBER(93);
	jint temp2 = (jint)((func_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	if (temp2 == 0) goto label_6;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[6].o)))->F_isDuct) == 0) goto label_6;
	}
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[5].i));
	jint temp1 = temp0 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x);
	jint temp2 = frame[4].i;
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[5].i));
	jint temp3 = (jint)SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(ctx, temp1, (temp2 + ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y)), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y));
	if (temp3 == 0) goto label_6;
	}
label_1:;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_Duct_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:blends", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(98);
	if (((jint)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_armored) != 0) goto label_1;
	}
	{
	LINE_NUMBER(99);
	jint temp0 = (jint)((func_mindustry_world_Block_outputsItems_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Block_outputsItems_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_Duct_lookingAt_mindustry_world_Tile_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct_lookingAt_mindustry_world_Tile_int_int_int_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[6].o));
	if (temp0 == 0) goto label_4;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[6].o)))->F_hasItems) == 0) goto label_4;
	}
label_3:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	jint temp3 = frame[5].i;
	sp[2].o = frame[6].o;
	LINE_NUMBER(100);
	jint temp4 = (jint)((func_mindustry_world_blocks_distribution_Duct_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	if (temp4 == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_6;
label_4:;
	INST_ICONST(0);
label_6:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_mindustry_world_Block_outputsItems_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Block_outputsItems_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_Duct_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o));
	if (temp0 != 0) goto label_8;
	}
label_7:;
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_Duct_lookingAt_mindustry_world_Tile_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_Duct_lookingAt_mindustry_world_Tile_int_int_int_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[6].o));
	if (temp0 == 0) goto label_9;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[6].o)))->F_hasItems) == 0) goto label_9;
	}
label_8:;
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_distribution_Duct_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:icons", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"duct-bottom"_j))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_topRegions;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_distribution_Duct_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:getReplacement", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_junctionReplacement;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_junctionReplacement;
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNow_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlockedNow_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_junctionReplacement;
	jint temp0 = (jint)((func_mindustry_world_Block_isHidden_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isHidden_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(115);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_4);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	frame[3].o = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation;
	LINE_NUMBER(116);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, temp0);
	jint temp1 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp1 == 0) goto label_5;
	}
	{
	sp[0].o = frame[3].o;
	jint temp0 = ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) - (jint(2));
	LINE_NUMBER(117);
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, temp0);
	jint temp1 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp1 == 0) goto label_5;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_Duct)) == 0) goto label_5;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation) - ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation)), (jint(2)));
	if (temp0 != (jint(1))) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_junctionReplacement;
	sp += 1;
	goto label_10;
	}
label_5:;
	INST_ALOAD(0);
label_10:;
	LINE_NUMBER(116);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_Duct_handlePlacementLine_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:handlePlacementLine", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_bridgeReplacement;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_junctionReplacement;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_junctionReplacement;
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNow_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlockedNow_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_junctionReplacement;
	jint temp0 = (jint)((func_mindustry_world_Block_isHidden_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isHidden_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_bridgeReplacement;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_distribution_ItemBridge)) == 0) goto label_5;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge, (frame[4].o)));
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	jint temp0 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_5);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_ItemBridge_boolean_arc_func_Boolf(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_5:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((frame[0].o)))->F_bridgeReplacement;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_distribution_DuctBridge)) == 0) goto label_7;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_DuctBridge, (frame[4].o)));
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	jint temp0 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_6);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_input_Placement_calculateBridges_arc_struct_Seq_mindustry_world_blocks_distribution_DirectionBridge_boolean_arc_func_Boolf(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_7:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_distribution_Duct_lambda$handlePlacementLine$1_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:lambda$handlePlacementLine$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_Duct(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(128);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_Duct)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_StackConveyor)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_Conveyor)) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_distribution_Duct_lambda$handlePlacementLine$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:lambda$handlePlacementLine$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_Duct(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(127);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_Duct)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_StackConveyor)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_Conveyor)) == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_distribution_Duct_lambda$getReplacement$0_arc_struct_Seq_mindustry_entities_units_BuildPlan_arc_math_geom_Point2_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:lambda$getReplacement$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_Duct(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_world_blocks_distribution_Duct_invoke_arc_func_Boolf_7);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_blocks_distribution_Duct_lambda$getReplacement$1_mindustry_entities_units_BuildPlan_arc_math_geom_Point2_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/Duct:lambda$getReplacement$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_Duct(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(115);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x) != (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x))) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_y) != (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_Duct)) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_DuctJunction)) == 0) goto label_1;
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

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_distribution_Duct;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field bridgeReplacement
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field junctionReplacement
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_distribution_Duct[] {
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
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_blocks_distribution_Duct_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_Block_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_blocks_distribution_Duct_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_Block_outputsItems_R_boolean,
	(void *) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_Block_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_Duct_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_blocks_distribution_Duct_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_blocks_distribution_Duct_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_distribution_Duct_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_Autotiler_sliced_arc_graphics_g2d_TextureRegion_mindustry_world_blocks_Autotiler$SliceMode_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_Autotiler_topHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_Autotiler_botHalf_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_blocks_Autotiler_getTiling_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_Array1_int,
	(void *) M_mindustry_world_blocks_Autotiler_buildBlending_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_boolean_R_Array1_int,
	(void *) M_mindustry_world_blocks_Autotiler_transformCase_int_Array1_int,
	(void *) M_mindustry_world_blocks_Autotiler_facing_int_int_int_int_int_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_Array1_mindustry_entities_units_BuildPlan_int_boolean_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_blends_mindustry_world_Tile_int_int_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_Duct_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_notLookingAt_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_lookingAt_mindustry_world_Tile_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_Duct_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
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
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
	{ "sliced", "(Larc/graphics/g2d/TextureRegion;Lmindustry/world/blocks/Autotiler$SliceMode;)Larc/graphics/g2d/TextureRegion;" },
	{ "topHalf", "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;" },
	{ "botHalf", "(Larc/graphics/g2d/TextureRegion;)Larc/graphics/g2d/TextureRegion;" },
	{ "getTiling", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)[I" },
	{ "buildBlending", "(Lmindustry/world/Tile;I[Lmindustry/entities/units/BuildPlan;Z)[I" },
	{ "transformCase", "(I[I)V" },
	{ "facing", "(IIIII)Z" },
	{ "blends", "(Lmindustry/world/Tile;I[Lmindustry/entities/units/BuildPlan;IZ)Z" },
	{ "blends", "(Lmindustry/world/Tile;II)Z" },
	{ "blendsArmored", "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z" },
	{ "notLookingAt", "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z" },
	{ "lookingAtEither", "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z" },
	{ "lookingAt", "(Lmindustry/world/Tile;IIILmindustry/world/Block;)Z" },
	{ "blends", "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z" },
};

static jclass interfaces[] { &class_mindustry_world_blocks_Autotiler, };

static jclass innerClasses[] {
	&class_mindustry_world_blocks_distribution_Duct$DuctBuild,
};

static FieldMetadata fields[] {
	{ "speed", &class_float, offsetof(mindustry_world_blocks_distribution_Duct, F_speed), "F", 1 },
	{ "armored", &class_boolean, offsetof(mindustry_world_blocks_distribution_Duct, F_armored), "Z", 1 },
	{ "topRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_blocks_distribution_Duct, F_topRegions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "botRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_blocks_distribution_Duct, F_botRegions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "capRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_Duct, F_capRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "bridgeReplacement", &class_mindustry_world_Block, offsetof(mindustry_world_blocks_distribution_Duct, F_bridgeReplacement), "Lmindustry/world/Block;", 1 },
	{ "junctionReplacement", &class_mindustry_world_Block, offsetof(mindustry_world_blocks_distribution_Duct, F_junctionReplacement), "Lmindustry/world/Block;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_distribution_Duct_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_distribution_Duct_setStats, VTABLE_mindustry_world_blocks_distribution_Duct_setStats, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_world_blocks_distribution_Duct_init, VTABLE_mindustry_world_blocks_distribution_Duct_init, "()V", 1 },
	{ "drawPlanRegion", (intptr_t) M_mindustry_world_blocks_distribution_Duct_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_distribution_Duct_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "blendsArmored", (intptr_t) M_mindustry_world_blocks_distribution_Duct_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, VTABLE_mindustry_world_blocks_distribution_Duct_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z", 1 },
	{ "blends", (intptr_t) M_mindustry_world_blocks_distribution_Duct_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, VTABLE_mindustry_world_blocks_distribution_Duct_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z", 1 },
	{ "icons", (intptr_t) M_mindustry_world_blocks_distribution_Duct_icons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_blocks_distribution_Duct_icons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "getReplacement", (intptr_t) M_mindustry_world_blocks_distribution_Duct_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block, VTABLE_mindustry_world_blocks_distribution_Duct_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block, "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;", 1 },
	{ "handlePlacementLine", (intptr_t) M_mindustry_world_blocks_distribution_Duct_handlePlacementLine_arc_struct_Seq, VTABLE_mindustry_world_blocks_distribution_Duct_handlePlacementLine_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "lambda$handlePlacementLine$1", (intptr_t) SM_mindustry_world_blocks_distribution_Duct_lambda$handlePlacementLine$1_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$handlePlacementLine$0", (intptr_t) SM_mindustry_world_blocks_distribution_Duct_lambda$handlePlacementLine$0_mindustry_world_Block_R_boolean, 0, "(Lmindustry/world/Block;)Z", 4106 },
	{ "lambda$getReplacement$0", (intptr_t) SM_mindustry_world_blocks_distribution_Duct_lambda$getReplacement$0_arc_struct_Seq_mindustry_entities_units_BuildPlan_arc_math_geom_Point2_R_boolean, 0, "(Larc/struct/Seq;Lmindustry/entities/units/BuildPlan;Larc/math/geom/Point2;)Z", 4106 },
	{ "lambda$getReplacement$1", (intptr_t) SM_mindustry_world_blocks_distribution_Duct_lambda$getReplacement$1_mindustry_entities_units_BuildPlan_arc_math_geom_Point2_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;Larc/math/geom/Point2;Lmindustry/entities/units/BuildPlan;)Z", 4106 },
};

Class class_mindustry_world_blocks_distribution_Duct{
		.nativeName = (intptr_t) "mindustry/world/blocks/distribution/Duct",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_distribution_Duct),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_distribution_Duct,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_distribution_Duct,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_distribution_Duct,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 203,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_distribution_Duct = registerClass(&class_mindustry_world_blocks_distribution_Duct);

}
