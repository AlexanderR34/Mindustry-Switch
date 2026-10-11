#include "mindustry/world/blocks/distribution/StackConveyor.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "arc/util/Eachable.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/world/blocks/distribution/StackConveyor_StackConveyorBuild.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/world/meta/Stat.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/graphics/BuildingCacheLayer.h"
#include "mindustry/gen/Building.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/Autotiler.h"
#include "mindustry/world/blocks/distribution/StackConveyor.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"

extern "C" {

jint SF_mindustry_world_blocks_distribution_StackConveyor_stateMove;
jint SF_mindustry_world_blocks_distribution_StackConveyor_stateLoad;
jint SF_mindustry_world_blocks_distribution_StackConveyor_stateUnload;

void mark_mindustry_world_blocks_distribution_StackConveyor(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_distribution_StackConveyor *) object;
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
	if (self->F_edgeRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_edgeRegion)->clazz)->markFunction)((jobject) self->F_edgeRegion, mark, depth + 1);
	if (self->F_stackRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stackRegion)->clazz)->markFunction)((jobject) self->F_stackRegion, mark, depth + 1);
	if (self->F_glowRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glowRegion)->clazz)->markFunction)((jobject) self->F_glowRegion, mark, depth + 1);
	if (self->F_edgeGlowRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_edgeGlowRegion)->clazz)->markFunction)((jobject) self->F_edgeGlowRegion, mark, depth + 1);
	if (self->F_glowColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glowColor)->clazz)->markFunction)((jobject) self->F_glowColor, mark, depth + 1);
	if (self->F_loadEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadEffect)->clazz)->markFunction)((jobject) self->F_loadEffect, mark, depth + 1);
	if (self->F_unloadEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unloadEffect)->clazz)->markFunction)((jobject) self->F_unloadEffect, mark, depth + 1);
}

void clinit_mindustry_world_blocks_distribution_StackConveyor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
	SF_mindustry_world_blocks_distribution_StackConveyor_stateMove = jint(0);
	SF_mindustry_world_blocks_distribution_StackConveyor_stateLoad = jint(1);
	SF_mindustry_world_blocks_distribution_StackConveyor_stateUnload = jint(2);
}

void init_mindustry_world_blocks_distribution_StackConveyor_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_distribution_StackConveyor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(34);
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK((frame[0].o)))->F_glowAlpha = (jfloat(1));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_redLight;
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_glowColor = (jref) sp[1].o;
	LINE_NUMBER(37);
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK((frame[0].o)))->F_baseEfficiency = (jfloat(0));
	LINE_NUMBER(38);
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(0));
	LINE_NUMBER(39);
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK((frame[0].o)))->F_outputRouter = (jint(1));
	LINE_NUMBER(41);
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK((frame[0].o)))->F_recharge = (jfloat(2));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_conveyorPoof;
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_loadEffect = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_conveyorPoof;
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_unloadEffect = (jref) sp[1].o;
	LINE_NUMBER(48);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate = (jint(1));
	LINE_NUMBER(49);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_transportation;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(51);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(52);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity = (10);
	LINE_NUMBER(53);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_conveyorPlacement = (jint(1));
	LINE_NUMBER(54);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_underBullets = (jint(1));
	LINE_NUMBER(55);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_priority = (jfloat(-1.0f));
	LINE_NUMBER(56);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawCached = (jint(1));
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_under;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildingCacheLayer = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopConveyor;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound = (jref) sp[1].o;
	LINE_NUMBER(60);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ambientSoundVolume = (jfloat(4,000000e-03f));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor:setStats", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	M_mindustry_world_Block_setStats(ctx, (frame[0].o));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_itemsMoved;
	jint temp0 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, (((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity))) * ((jfloat)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK((frame[0].o)))->F_speed)) * (jfloat(60.0f))));
	jfloat temp1 = jfloat(temp0);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_itemsSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor:blends", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)) == 0) goto label_1;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, (frame[8].o)));
	LINE_NUMBER(73);
	frame[8].i = ((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[7].o)))->F_state);
	LINE_NUMBER(74);
	if ((frame[8].i) != (jint(1))) goto label_4;
	}
	{
	LINE_NUMBER(75);
	jint temp0 = (jint)((func_mindustry_world_Block_outputsItems_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Block_outputsItems_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o));
	if (temp0 == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(76);
	if ((frame[8].i) != (jint(2))) goto label_1;
	}
	{
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK((frame[0].o)))->F_outputRouter) != 0) goto label_1;
	}
	{
	LINE_NUMBER(81);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[6].o)))->F_acceptsItems) == 0) goto label_9;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[6].o)))->F_noSideBlend) == 0) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	jint temp3 = frame[5].i;
	sp[2].o = frame[6].o;
	LINE_NUMBER(78);
	jint temp4 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	if (temp4 == 0) goto label_9;
	}
label_10:;
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	jint temp3 = frame[5].i;
	sp[2].o = frame[6].o;
	LINE_NUMBER(79);
	jint temp4 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_notLookingAt_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_notLookingAt_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	if (temp4 != 0) goto label_13;
	}
	{
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_distribution_StackConveyor)) == 0) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	jint temp2 = frame[5].i;
	jint temp3 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp4 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	LINE_NUMBER(80);
	jint temp5 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_facing_int_int_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_facing_int_int_int_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4);
	if (temp5 == 0) goto label_9;
	}
label_13:;
	{
	LINE_NUMBER(81);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[11].o = sp[0].o;
	if ((isInstance(ctx, (frame[11].o), &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)) == 0) goto label_15;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, (frame[11].o)));
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[10].o)))->F_state) == (jint(2))) goto label_9;
	}
label_15:;
	{
	LINE_NUMBER(82);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[11].o = sp[0].o;
	if ((isInstance(ctx, (frame[11].o), &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)) == 0) goto label_17;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, (frame[11].o)));
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[9].o)))->F_state) != 0) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	jint temp1 = frame[4].i;
	jint temp2 = frame[5].i;
	jint temp3 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp4 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_y;
	LINE_NUMBER(83);
	jint temp5 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_facing_int_int_int_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_facing_int_int_int_int_int_R_boolean])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4);
	if (temp5 == 0) goto label_9;
	}
label_17:;
	INST_ICONST(1);
	goto label_20;
label_9:;
	INST_ICONST(0);
label_20:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_mindustry_world_Block_outputsItems_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_world_Block_outputsItems_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_21;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_blocks_distribution_StackConveyor_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o));
	if (temp0 == 0) goto label_21;
	}
	{
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_distribution_StackConveyor)) == 0) goto label_21;
	}
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_distribution_StackConveyor_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor:drawPlanRegion", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((func_mindustry_world_blocks_distribution_StackConveyor_getTiling_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_Array1_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_blocks_distribution_StackConveyor_getTiling_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_Array1_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(93);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK((frame[0].o)))->F_regions;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(96);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, (jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) * (90)))));
	LINE_NUMBER(98);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (jint(4))) goto label_6;
	}
	{
	LINE_NUMBER(99);
	if ((((jint)ARRAY_ACCESS(jint, (frame[3].o), (jint(3)))) & ((jint(1)) << (frame[5].i))) != 0) goto label_8;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK((frame[0].o)))->F_edgeRegion;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, (jfloat(((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) - (frame[5].i)) * (90)))));
	}
label_8:;
	{
	LINE_NUMBER(98);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(103);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_distribution_StackConveyor_rotatedOutput_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/distribution/StackConveyor:rotatedOutput", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(107);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(108);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)) == 0) goto label_2;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild, (frame[3].o)));
	LINE_NUMBER(109);
	if (((jint)((mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild *) NULL_CHECK((frame[4].o)))->F_state) == (jint(2))) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)M_mindustry_world_Block_rotatedOutput_int_int_R_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_distribution_StackConveyor[] {
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
	(void *) M_mindustry_world_Block_init,
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor_setStats,
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
	(void *) M_mindustry_world_blocks_distribution_StackConveyor_rotatedOutput_int_int_R_boolean,
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
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
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
	(void *) M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion,
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
	(void *) M_mindustry_world_blocks_Autotiler_blendsArmored_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_notLookingAt_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_lookingAtEither_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_Autotiler_lookingAt_mindustry_world_Tile_int_int_int_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean,
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
	&class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild,
};

static FieldMetadata fields[] {
	{ "stateMove", &class_int, (intptr_t) &SF_mindustry_world_blocks_distribution_StackConveyor_stateMove, "I", 28 },
	{ "stateLoad", &class_int, (intptr_t) &SF_mindustry_world_blocks_distribution_StackConveyor_stateLoad, "I", 28 },
	{ "stateUnload", &class_int, (intptr_t) &SF_mindustry_world_blocks_distribution_StackConveyor_stateUnload, "I", 28 },
	{ "regions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_blocks_distribution_StackConveyor, F_regions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "edgeRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_edgeRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "stackRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_stackRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "glowRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_glowRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "edgeGlowRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_edgeGlowRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "glowAlpha", &class_float, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_glowAlpha), "F", 1 },
	{ "glowColor", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_glowColor), "Larc/graphics/Color;", 1 },
	{ "baseEfficiency", &class_float, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_baseEfficiency), "F", 1 },
	{ "speed", &class_float, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_speed), "F", 1 },
	{ "outputRouter", &class_boolean, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_outputRouter), "Z", 1 },
	{ "recharge", &class_float, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_recharge), "F", 1 },
	{ "loadEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_loadEffect), "Lmindustry/entities/Effect;", 1 },
	{ "unloadEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_blocks_distribution_StackConveyor, F_unloadEffect), "Lmindustry/entities/Effect;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_distribution_StackConveyor_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor_setStats, VTABLE_mindustry_world_blocks_distribution_StackConveyor_setStats, "()V", 1 },
	{ "blends", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, VTABLE_mindustry_world_blocks_distribution_StackConveyor_blends_mindustry_world_Tile_int_int_int_int_mindustry_world_Block_R_boolean, "(Lmindustry/world/Tile;IIIILmindustry/world/Block;)Z", 1 },
	{ "drawPlanRegion", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_blocks_distribution_StackConveyor_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "rotatedOutput", (intptr_t) M_mindustry_world_blocks_distribution_StackConveyor_rotatedOutput_int_int_R_boolean, VTABLE_mindustry_world_blocks_distribution_StackConveyor_rotatedOutput_int_int_R_boolean, "(II)Z", 1 },
};

Class class_mindustry_world_blocks_distribution_StackConveyor{
		.nativeName = (intptr_t) "mindustry/world/blocks/distribution/StackConveyor",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_distribution_StackConveyor),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_distribution_StackConveyor,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_distribution_StackConveyor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_distribution_StackConveyor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 203,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_distribution_StackConveyor = registerClass(&class_mindustry_world_blocks_distribution_StackConveyor);

}
