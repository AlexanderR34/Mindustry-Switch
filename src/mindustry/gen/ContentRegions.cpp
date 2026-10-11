#include "mindustry/gen/ContentRegions.h"
#include "mindustry/world/blocks/payloads/PayloadLoader.h"
#include "mindustry/world/blocks/distribution/ItemBridge.h"
#include "mindustry/world/blocks/units/RepairTurret.h"
#include "mindustry/world/blocks/units/RepairTower.h"
#include "mindustry/world/blocks/environment/RuneOverlay.h"
#include "mindustry/world/blocks/distribution/OverflowDuct.h"
#include "mindustry/world/blocks/defense/Thruster.h"
#include "mindustry/world/blocks/distribution/MassDriver.h"
#include "mindustry/world/blocks/defense/AutoDoor.h"
#include "mindustry/world/blocks/defense/MendProjector.h"
#include "mindustry/world/blocks/payloads/PayloadConveyor.h"
#include "mindustry/world/blocks/campaign/LaunchPad.h"
#include "mindustry/world/blocks/production/SolidPump.h"
#include "mindustry/world/blocks/defense/ForceProjector.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/blocks/defense/ShieldWall.h"
#include "mindustry/world/blocks/distribution/DuctJunction.h"
#include "mindustry/world/blocks/defense/ShockMine.h"
#include "mindustry/world/blocks/distribution/DirectionalUnloader.h"
#include "mindustry/world/blocks/defense/BuildTurret.h"
#include "mindustry/world/blocks/distribution/DirectionLiquidBridge.h"
#include "arc/Core.h"
#include "mindustry/world/blocks/sandbox/LiquidSource.h"
#include "mindustry/world/blocks/power/VariableReactor.h"
#include "mindustry/world/blocks/defense/Door.h"
#include "mindustry/world/blocks/campaign/LandingPad.h"
#include "mindustry/world/blocks/environment/TreeBlock.h"
#include "mindustry/world/blocks/payloads/PayloadRouter.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/world/blocks/liquid/LiquidBlock.h"
#include "mindustry/world/blocks/logic/CanvasBlock.h"
#include "mindustry/world/blocks/environment/SeaBush.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver.h"
#include "mindustry/world/blocks/defense/turrets/PointDefenseTurret.h"
#include "mindustry/world/blocks/environment/StaticWall.h"
#include "mindustry/world/blocks/production/ItemIncinerator.h"
#include "mindustry/world/blocks/storage/Unloader.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/world/blocks/distribution/Sorter.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/production/BeamDrill.h"
#include "mindustry/world/blocks/power/LongPowerNode.h"
#include "mindustry/world/blocks/defense/OverdriveProjector.h"
#include "mindustry/world/blocks/liquid/Conduit.h"
#include "mindustry/world/blocks/distribution/DirectionBridge.h"
#include "mindustry/world/blocks/power/LightBlock.h"
#include "mindustry/world/blocks/power/PowerDiode.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/production/WallCrafter.h"
#include "mindustry/world/blocks/production/BurstDrill.h"
#include "mindustry/world/blocks/units/UnitAssemblerModule.h"
#include "mindustry/world/blocks/distribution/Duct.h"
#include "mindustry/world/blocks/defense/Radar.h"
#include "mindustry/world/blocks/units/UnitCargoUnloadPoint.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/world/blocks/production/Drill.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/world/blocks/power/NuclearReactor.h"
#include "mindustry/world/blocks/units/UnitAssembler.h"
#include "mindustry/world/blocks/defense/ShockwaveTower.h"
#include "mindustry/world/blocks/distribution/DuctRouter.h"
#include "mindustry/world/blocks/distribution/StackRouter.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay.h"
#include "mindustry/world/blocks/distribution/Conveyor.h"
#include "mindustry/world/blocks/defense/TargetDummy.h"
#include "mindustry/world/blocks/logic/SwitchBlock.h"
#include "mindustry/world/blocks/defense/turrets/TractorBeamTurret.h"
#include "mindustry/world/blocks/distribution/StackConveyor.h"
#include "mindustry/world/blocks/environment/Cliff.h"
#include "mindustry/world/blocks/campaign/Accelerator.h"
#include "mindustry/world/blocks/power/BeamNode.h"
#include "mindustry/world/blocks/environment/CharacterOverlay.h"

extern "C" {


void mark_mindustry_gen_ContentRegions(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_gen_ContentRegions *) object;
}

void clinit_mindustry_gen_ContentRegions(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_gen_ContentRegions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ContentRegions:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_ContentRegions(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_ContentRegions_loadRegions_mindustry_ctype_MappableContent(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/ContentRegions:loadRegions", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_ContentRegions(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(18);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_campaign_Accelerator)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(19);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_campaign_Accelerator, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-launch-arrow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"launch-arrow"_j))));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_arrowRegion = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_campaign_Accelerator, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"select-arrow-small"_j))));
	((mindustry_world_blocks_campaign_Accelerator *) NULL_CHECK(sp[0].o))->F_selectArrowRegion = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(22);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_AutoDoor)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(23);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_AutoDoor, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-open"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_AutoDoor *) NULL_CHECK(sp[0].o))->F_openRegion = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(25);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_production_BeamDrill)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(26);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BeamDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_glowRegion = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BeamDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-beam"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"drill-laser"_j))));
	((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laser = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BeamDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-beam-boost"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"drill-laser-boost"_j))));
	((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laserBoost = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BeamDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-beam-center"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"drill-laser-center"_j))));
	((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laserCenter = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BeamDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-beam-boost-center"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"drill-laser-boost-center"_j))));
	((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laserCenterBoost = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BeamDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-beam-end"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"drill-laser-end"_j))));
	((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laserEnd = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BeamDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-beam-boost-end"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"drill-laser-boost-end"_j))));
	((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_laserEndBoost = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BeamDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_BeamDrill *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(35);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_power_BeamNode)) == 0) goto label_15;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_power_BeamNode, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-beam"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"power-beam"_j))));
	((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_laser = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_power_BeamNode, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-beam-end"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"power-beam-end"_j))));
	((mindustry_world_blocks_power_BeamNode *) NULL_CHECK(sp[0].o))->F_laserEnd = (jref) sp[1].o;
	}
label_15:;
	{
	LINE_NUMBER(39);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_Block)) == 0) goto label_18;
	}
	{
	LINE_NUMBER(40);
	sp[0].o = checkCast(ctx, &class_mindustry_world_Block, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-shadow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_customShadowRegion = (jref) sp[1].o;
	LINE_NUMBER(41);
	sp[0].o = checkCast(ctx, &class_mindustry_world_Block, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-team"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegion = (jref) sp[1].o;
	}
label_18:;
	{
	LINE_NUMBER(43);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_BuildTurret)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_BuildTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-base"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"block-\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, (frame[0].o)))))->F_size)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[0].o))->F_baseRegion = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_BuildTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_BuildTurret *) NULL_CHECK(sp[0].o))->F_glowRegion = (jref) sp[1].o;
	}
label_21:;
	{
	LINE_NUMBER(47);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_production_BurstDrill)) == 0) goto label_24;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BurstDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-arrow-blur"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_BurstDrill *) NULL_CHECK(sp[0].o))->F_arrowBlurRegion = (jref) sp[1].o;
	LINE_NUMBER(49);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BurstDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-arrow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_BurstDrill *) NULL_CHECK(sp[0].o))->F_arrowRegion = (jref) sp[1].o;
	LINE_NUMBER(50);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BurstDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_BurstDrill *) NULL_CHECK(sp[0].o))->F_glowRegion = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_BurstDrill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top-invert"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_BurstDrill *) NULL_CHECK(sp[0].o))->F_topInvertRegion = (jref) sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(53);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_logic_CanvasBlock)) == 0) goto label_29;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_logic_CanvasBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-corner1"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_corner1 = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_logic_CanvasBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-corner2"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_corner2 = (jref) sp[1].o;
	LINE_NUMBER(56);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_logic_CanvasBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-side1"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_side1 = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_logic_CanvasBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-side2"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_logic_CanvasBlock *) NULL_CHECK(sp[0].o))->F_side2 = (jref) sp[1].o;
	}
label_29:;
	{
	LINE_NUMBER(59);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_CharacterOverlay)) == 0) goto label_34;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_CharacterOverlay, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (64));
	((mindustry_world_blocks_environment_CharacterOverlay *) NULL_CHECK(sp[0].o))->F_letterRegions = (jref) sp[1].o;
	LINE_NUMBER(61);
	frame[1].i = (jint(0));
	}
label_37:;
	{
	if ((frame[1].i) >= (64)) goto label_34;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_CharacterOverlay *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_environment_CharacterOverlay, (frame[0].o)))))->F_letterRegions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"character-overlay\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(61);
	INST_IINC(1, 1);
	goto label_37;
	}
label_34:;
	{
	LINE_NUMBER(65);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_Cliff)) == 0) goto label_40;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_Cliff, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (256));
	((mindustry_world_blocks_environment_Cliff *) NULL_CHECK(sp[0].o))->F_cliffs = (jref) sp[1].o;
	LINE_NUMBER(67);
	frame[1].i = (jint(0));
	}
label_43:;
	{
	if ((frame[1].i) >= (256)) goto label_40;
	}
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Cliff *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_environment_Cliff, (frame[0].o)))))->F_cliffs;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"cliffmask\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(67);
	INST_IINC(1, 1);
	goto label_43;
	}
label_40:;
	{
	LINE_NUMBER(71);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_liquid_Conduit)) == 0) goto label_46;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_liquid_Conduit, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(5)));
	((mindustry_world_blocks_liquid_Conduit *) NULL_CHECK(sp[0].o))->F_botRegions = (jref) sp[1].o;
	LINE_NUMBER(73);
	frame[1].i = (jint(0));
	}
label_49:;
	{
	if ((frame[1].i) >= (jint(5))) goto label_50;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_world_blocks_liquid_Conduit *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_liquid_Conduit, (frame[0].o)))))->F_botRegions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-bottom-\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"conduit-bottom-\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(73);
	INST_IINC(1, 1);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(76);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_liquid_Conduit, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-cap"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_liquid_Conduit *) NULL_CHECK(sp[0].o))->F_capRegion = (jref) sp[1].o;
	LINE_NUMBER(77);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_liquid_Conduit, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(5)));
	((mindustry_world_blocks_liquid_Conduit *) NULL_CHECK(sp[0].o))->F_topRegions = (jref) sp[1].o;
	LINE_NUMBER(78);
	frame[1].i = (jint(0));
	}
label_55:;
	{
	if ((frame[1].i) >= (jint(5))) goto label_46;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_world_blocks_liquid_Conduit *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_liquid_Conduit, (frame[0].o)))))->F_topRegions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top-\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(78);
	INST_IINC(1, 1);
	goto label_55;
	}
label_46:;
	{
	LINE_NUMBER(82);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_Conveyor)) == 0) goto label_58;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_Conveyor, (frame[0].o));
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_graphics_g2d_TextureRegion, {(7), (jint(4))});
	((mindustry_world_blocks_distribution_Conveyor *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(84);
	frame[1].i = (jint(0));
	}
label_61:;
	{
	if ((frame[1].i) >= (7)) goto label_58;
	}
	{
	LINE_NUMBER(85);
	frame[2].i = (jint(0));
	}
label_63:;
	{
	if ((frame[2].i) >= (jint(4))) goto label_64;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Conveyor *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_distribution_Conveyor, (frame[0].o)))))->F_regions;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	jint temp0 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001-\u0001"_j.string, 3, sp[2].o, boxInteger(ctx, (frame[1].i)), boxInteger(ctx, (frame[2].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(85);
	INST_IINC(2, 1);
	goto label_63;
	}
label_64:;
	{
	LINE_NUMBER(84);
	INST_IINC(1, 1);
	goto label_61;
	}
label_58:;
	{
	LINE_NUMBER(90);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_67;
	}
	{
	LINE_NUMBER(91);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-thruster1"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"clear-effect"_j))));
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_thruster1 = (jref) sp[1].o;
	LINE_NUMBER(92);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-thruster2"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"clear-effect"_j))));
	((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK(sp[0].o))->F_thruster2 = (jref) sp[1].o;
	}
label_67:;
	{
	LINE_NUMBER(94);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_DirectionBridge)) == 0) goto label_70;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionBridge, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-arrow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK(sp[0].o))->F_arrowRegion = (jref) sp[1].o;
	LINE_NUMBER(96);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionBridge, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-bridge-bottom"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK(sp[0].o))->F_bridgeBotRegion = (jref) sp[1].o;
	LINE_NUMBER(97);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionBridge, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-bridge-liquid"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK(sp[0].o))->F_bridgeLiquidRegion = (jref) sp[1].o;
	LINE_NUMBER(98);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionBridge, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-bridge"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK(sp[0].o))->F_bridgeRegion = (jref) sp[1].o;
	LINE_NUMBER(99);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionBridge, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-dir"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DirectionBridge *) NULL_CHECK(sp[0].o))->F_dirRegion = (jref) sp[1].o;
	}
label_70:;
	{
	LINE_NUMBER(101);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_DirectionLiquidBridge)) == 0) goto label_76;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionLiquidBridge, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-bottom"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DirectionLiquidBridge *) NULL_CHECK(sp[0].o))->F_bottomRegion = (jref) sp[1].o;
	}
label_76:;
	{
	LINE_NUMBER(104);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_DirectionalUnloader)) == 0) goto label_78;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionalUnloader, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-arrow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DirectionalUnloader *) NULL_CHECK(sp[0].o))->F_arrowRegion = (jref) sp[1].o;
	LINE_NUMBER(106);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionalUnloader, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-center"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"unloader-center"_j))));
	((mindustry_world_blocks_distribution_DirectionalUnloader *) NULL_CHECK(sp[0].o))->F_centerRegion = (jref) sp[1].o;
	LINE_NUMBER(107);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DirectionalUnloader, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DirectionalUnloader *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_78:;
	{
	LINE_NUMBER(109);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_Door)) == 0) goto label_82;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_Door, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-open"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_Door *) NULL_CHECK(sp[0].o))->F_openRegion = (jref) sp[1].o;
	}
label_82:;
	{
	LINE_NUMBER(112);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_production_Drill)) == 0) goto label_84;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_Drill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-item"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"drill-item-\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, (frame[0].o)))))->F_size)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_itemRegion = (jref) sp[1].o;
	LINE_NUMBER(114);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_Drill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-rim"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_rimRegion = (jref) sp[1].o;
	LINE_NUMBER(115);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_Drill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-rotator"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_rotatorRegion = (jref) sp[1].o;
	LINE_NUMBER(116);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_Drill, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_Drill *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_84:;
	{
	LINE_NUMBER(118);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_Duct)) == 0) goto label_89;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_Duct, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(5)));
	((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[0].o))->F_botRegions = (jref) sp[1].o;
	LINE_NUMBER(120);
	frame[1].i = (jint(0));
	}
label_92:;
	{
	if ((frame[1].i) >= (jint(5))) goto label_93;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_distribution_Duct, (frame[0].o)))))->F_botRegions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-bottom-\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"duct-bottom-\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(120);
	INST_IINC(1, 1);
	goto label_92;
	}
label_93:;
	{
	LINE_NUMBER(123);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_Duct, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-cap"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[0].o))->F_capRegion = (jref) sp[1].o;
	LINE_NUMBER(124);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_Duct, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(5)));
	((mindustry_world_blocks_distribution_Duct *) NULL_CHECK(sp[0].o))->F_topRegions = (jref) sp[1].o;
	LINE_NUMBER(125);
	frame[1].i = (jint(0));
	}
label_98:;
	{
	if ((frame[1].i) >= (jint(5))) goto label_89;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_Duct *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_distribution_Duct, (frame[0].o)))))->F_topRegions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top-\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(125);
	INST_IINC(1, 1);
	goto label_98;
	}
label_89:;
	{
	LINE_NUMBER(129);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_DuctJunction)) == 0) goto label_101;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DuctJunction, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-bottom"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DuctJunction *) NULL_CHECK(sp[0].o))->F_bottomRegion = (jref) sp[1].o;
	LINE_NUMBER(131);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DuctJunction, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DuctJunction *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_101:;
	{
	LINE_NUMBER(133);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_DuctRouter)) == 0) goto label_104;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_DuctRouter, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_DuctRouter *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_104:;
	{
	LINE_NUMBER(136);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_ForceProjector)) == 0) goto label_106;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_ForceProjector, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_ForceProjector *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_106:;
	{
	LINE_NUMBER(139);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_ItemBridge)) == 0) goto label_108;
	}
	{
	LINE_NUMBER(140);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-arrow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_arrowRegion = (jref) sp[1].o;
	LINE_NUMBER(141);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-bridge"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_bridgeRegion = (jref) sp[1].o;
	LINE_NUMBER(142);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_ItemBridge, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-end"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_ItemBridge *) NULL_CHECK(sp[0].o))->F_endRegion = (jref) sp[1].o;
	}
label_108:;
	{
	LINE_NUMBER(144);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_production_ItemIncinerator)) == 0) goto label_112;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_ItemIncinerator, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-liquid"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_ItemIncinerator *) NULL_CHECK(sp[0].o))->F_liquidRegion = (jref) sp[1].o;
	LINE_NUMBER(146);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_ItemIncinerator, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_ItemIncinerator *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_112:;
	{
	LINE_NUMBER(148);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_campaign_LandingPad)) == 0) goto label_115;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_campaign_LandingPad, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-pod"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"advanced-launch-pad-pod"_j))));
	((mindustry_world_blocks_campaign_LandingPad *) NULL_CHECK(sp[0].o))->F_podRegion = (jref) sp[1].o;
	}
label_115:;
	{
	LINE_NUMBER(151);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_campaign_LaunchPad)) == 0) goto label_117;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_campaign_LaunchPad, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-light"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_lightRegion = (jref) sp[1].o;
	LINE_NUMBER(153);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_campaign_LaunchPad, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-pod"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"launchpod"_j))));
	((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_podRegion = (jref) sp[1].o;
	LINE_NUMBER(154);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_campaign_LaunchPad, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-preview"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_campaign_LaunchPad *) NULL_CHECK(sp[0].o))->F_previewRegion = (jref) sp[1].o;
	}
label_117:;
	{
	LINE_NUMBER(156);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_power_LightBlock)) == 0) goto label_121;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_power_LightBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_power_LightBlock *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_121:;
	{
	LINE_NUMBER(159);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_liquid_LiquidBlock)) == 0) goto label_123;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_liquid_LiquidBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-bottom"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_liquid_LiquidBlock *) NULL_CHECK(sp[0].o))->F_bottomRegion = (jref) sp[1].o;
	LINE_NUMBER(161);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_liquid_LiquidBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-liquid"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_liquid_LiquidBlock *) NULL_CHECK(sp[0].o))->F_liquidRegion = (jref) sp[1].o;
	LINE_NUMBER(162);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_liquid_LiquidBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_liquid_LiquidBlock *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_123:;
	{
	LINE_NUMBER(164);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_sandbox_LiquidSource)) == 0) goto label_127;
	}
	{
	LINE_NUMBER(165);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_sandbox_LiquidSource, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"source-bottom"_j))));
	((mindustry_world_blocks_sandbox_LiquidSource *) NULL_CHECK(sp[0].o))->F_bottomRegion = (jref) sp[1].o;
	LINE_NUMBER(166);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_sandbox_LiquidSource, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"cross"_j))));
	((mindustry_world_blocks_sandbox_LiquidSource *) NULL_CHECK(sp[0].o))->F_crossRegion = (jref) sp[1].o;
	}
label_127:;
	{
	LINE_NUMBER(168);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_power_LongPowerNode)) == 0) goto label_130;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_power_LongPowerNode, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_power_LongPowerNode *) NULL_CHECK(sp[0].o))->F_glow = (jref) sp[1].o;
	}
label_130:;
	{
	LINE_NUMBER(171);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_MassDriver)) == 0) goto label_132;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_MassDriver, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-base"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_MassDriver *) NULL_CHECK(sp[0].o))->F_baseRegion = (jref) sp[1].o;
	}
label_132:;
	{
	LINE_NUMBER(174);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_MendProjector)) == 0) goto label_134;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_MendProjector, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_MendProjector *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_134:;
	{
	LINE_NUMBER(177);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_power_NuclearReactor)) == 0) goto label_136;
	}
	{
	LINE_NUMBER(178);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_power_NuclearReactor, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-lights"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_lightsRegion = (jref) sp[1].o;
	LINE_NUMBER(179);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_power_NuclearReactor, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_power_NuclearReactor *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_136:;
	{
	LINE_NUMBER(181);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_OverdriveProjector)) == 0) goto label_139;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_OverdriveProjector, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_OverdriveProjector *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_139:;
	{
	LINE_NUMBER(184);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_OverflowDuct)) == 0) goto label_141;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_OverflowDuct, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_OverflowDuct *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_141:;
	{
	LINE_NUMBER(187);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_payloads_PayloadConveyor)) == 0) goto label_143;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadConveyor, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-edge"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[0].o))->F_edgeRegion = (jref) sp[1].o;
	LINE_NUMBER(189);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadConveyor, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadConveyor *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_143:;
	{
	LINE_NUMBER(191);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_payloads_PayloadLoader)) == 0) goto label_146;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadLoader, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-over"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadLoader *) NULL_CHECK(sp[0].o))->F_overRegion = (jref) sp[1].o;
	}
label_146:;
	{
	LINE_NUMBER(194);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_payloads_PayloadMassDriver)) == 0) goto label_148;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bridge-arrow"_j))));
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_arrow = (jref) sp[1].o;
	LINE_NUMBER(196);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-base"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_baseRegion = (jref) sp[1].o;
	LINE_NUMBER(197);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-cap-outline"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_capOutlineRegion = (jref) sp[1].o;
	LINE_NUMBER(198);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-cap"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_capRegion = (jref) sp[1].o;
	LINE_NUMBER(199);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-left-outline"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_leftOutlineRegion = (jref) sp[1].o;
	LINE_NUMBER(200);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-left"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_leftRegion = (jref) sp[1].o;
	LINE_NUMBER(201);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-right-outline"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_rightOutlineRegion = (jref) sp[1].o;
	LINE_NUMBER(202);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadMassDriver, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-right"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadMassDriver *) NULL_CHECK(sp[0].o))->F_rightRegion = (jref) sp[1].o;
	}
label_148:;
	{
	LINE_NUMBER(204);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_payloads_PayloadRouter)) == 0) goto label_157;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_payloads_PayloadRouter, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-over"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_payloads_PayloadRouter *) NULL_CHECK(sp[0].o))->F_overRegion = (jref) sp[1].o;
	}
label_157:;
	{
	LINE_NUMBER(207);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_turrets_PointDefenseTurret)) == 0) goto label_159;
	}
	{
	LINE_NUMBER(208);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_PointDefenseTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-base"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"block-\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, (frame[0].o)))))->F_size)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_defense_turrets_PointDefenseTurret *) NULL_CHECK(sp[0].o))->F_baseRegion = (jref) sp[1].o;
	}
label_159:;
	{
	LINE_NUMBER(210);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_power_PowerDiode)) == 0) goto label_161;
	}
	{
	LINE_NUMBER(211);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_power_PowerDiode, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-arrow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_power_PowerDiode *) NULL_CHECK(sp[0].o))->F_arrow = (jref) sp[1].o;
	}
label_161:;
	{
	LINE_NUMBER(213);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_power_PowerNode)) == 0) goto label_163;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_power_PowerNode, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-laser"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"laser"_j))));
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laser = (jref) sp[1].o;
	LINE_NUMBER(215);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_power_PowerNode, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-laser-end"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"laser-end"_j))));
	((mindustry_world_blocks_power_PowerNode *) NULL_CHECK(sp[0].o))->F_laserEnd = (jref) sp[1].o;
	}
label_163:;
	{
	LINE_NUMBER(217);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_Radar)) == 0) goto label_166;
	}
	{
	LINE_NUMBER(218);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_Radar, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-base"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_Radar *) NULL_CHECK(sp[0].o))->F_baseRegion = (jref) sp[1].o;
	LINE_NUMBER(219);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_Radar, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_Radar *) NULL_CHECK(sp[0].o))->F_glowRegion = (jref) sp[1].o;
	}
label_166:;
	{
	LINE_NUMBER(221);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_units_RepairTower)) == 0) goto label_169;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_RepairTower, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_RepairTower *) NULL_CHECK(sp[0].o))->F_glow = (jref) sp[1].o;
	}
label_169:;
	{
	LINE_NUMBER(224);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_units_RepairTurret)) == 0) goto label_171;
	}
	{
	LINE_NUMBER(225);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_RepairTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-base"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"block-\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, (frame[0].o)))))->F_size)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK(sp[0].o))->F_baseRegion = (jref) sp[1].o;
	LINE_NUMBER(226);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_RepairTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"laser-white"_j))));
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK(sp[0].o))->F_laser = (jref) sp[1].o;
	LINE_NUMBER(227);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_RepairTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"laser-white-end"_j))));
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK(sp[0].o))->F_laserEnd = (jref) sp[1].o;
	LINE_NUMBER(228);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_RepairTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"laser-top"_j))));
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK(sp[0].o))->F_laserTop = (jref) sp[1].o;
	LINE_NUMBER(229);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_RepairTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"laser-top-end"_j))));
	((mindustry_world_blocks_units_RepairTurret *) NULL_CHECK(sp[0].o))->F_laserTopEnd = (jref) sp[1].o;
	}
label_171:;
	{
	LINE_NUMBER(231);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_RuneOverlay)) == 0) goto label_177;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_RuneOverlay, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (109));
	((mindustry_world_blocks_environment_RuneOverlay *) NULL_CHECK(sp[0].o))->F_letterRegions = (jref) sp[1].o;
	LINE_NUMBER(233);
	frame[1].i = (jint(0));
	}
label_180:;
	{
	if ((frame[1].i) >= (109)) goto label_177;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_world_blocks_environment_RuneOverlay *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_environment_RuneOverlay, (frame[0].o)))))->F_letterRegions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"rune-overlay\u0001"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(233);
	INST_IINC(1, 1);
	goto label_180;
	}
label_177:;
	{
	LINE_NUMBER(237);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_SeaBush)) == 0) goto label_183;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_SeaBush, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-bot"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK(sp[0].o))->F_botRegion = (jref) sp[1].o;
	LINE_NUMBER(239);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_SeaBush, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-center"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_environment_SeaBush *) NULL_CHECK(sp[0].o))->F_centerRegion = (jref) sp[1].o;
	}
label_183:;
	{
	LINE_NUMBER(241);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_ShieldWall)) == 0) goto label_186;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_ShieldWall, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_ShieldWall *) NULL_CHECK(sp[0].o))->F_glowRegion = (jref) sp[1].o;
	}
label_186:;
	{
	LINE_NUMBER(244);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_ShockMine)) == 0) goto label_188;
	}
	{
	LINE_NUMBER(245);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_ShockMine, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-team-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_ShockMine *) NULL_CHECK(sp[0].o))->F_teamRegion = (jref) sp[1].o;
	}
label_188:;
	{
	LINE_NUMBER(247);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_ShockwaveTower)) == 0) goto label_190;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_ShockwaveTower, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-heat"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_ShockwaveTower *) NULL_CHECK(sp[0].o))->F_heatRegion = (jref) sp[1].o;
	}
label_190:;
	{
	LINE_NUMBER(250);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_production_SolidPump)) == 0) goto label_192;
	}
	{
	LINE_NUMBER(251);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_SolidPump, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-rotator"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_SolidPump *) NULL_CHECK(sp[0].o))->F_rotatorRegion = (jref) sp[1].o;
	}
label_192:;
	{
	LINE_NUMBER(253);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_Sorter)) == 0) goto label_194;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_Sorter, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-cross"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"cross-full"_j))));
	((mindustry_world_blocks_distribution_Sorter *) NULL_CHECK(sp[0].o))->F_cross = (jref) sp[1].o;
	}
label_194:;
	{
	LINE_NUMBER(256);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_StackConveyor)) == 0) goto label_196;
	}
	{
	LINE_NUMBER(257);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-edge-glow"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_edgeGlowRegion = (jref) sp[1].o;
	LINE_NUMBER(258);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-edge"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_edgeRegion = (jref) sp[1].o;
	LINE_NUMBER(259);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_glowRegion = (jref) sp[1].o;
	LINE_NUMBER(260);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(3)));
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(261);
	frame[1].i = (jint(0));
	}
label_202:;
	{
	if ((frame[1].i) >= (jint(3))) goto label_203;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor, (frame[0].o)))))->F_regions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(261);
	INST_IINC(1, 1);
	goto label_202;
	}
label_203:;
	{
	LINE_NUMBER(264);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_StackConveyor, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-stack"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_distribution_StackConveyor *) NULL_CHECK(sp[0].o))->F_stackRegion = (jref) sp[1].o;
	}
label_196:;
	{
	LINE_NUMBER(266);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_StackRouter)) == 0) goto label_206;
	}
	{
	LINE_NUMBER(267);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_distribution_StackRouter, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-glow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"arrow-glow"_j))));
	((mindustry_world_blocks_distribution_StackRouter *) NULL_CHECK(sp[0].o))->F_glowRegion = (jref) sp[1].o;
	}
label_206:;
	{
	LINE_NUMBER(269);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_StaticWall)) == 0) goto label_208;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_StaticWall, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-large"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_environment_StaticWall *) NULL_CHECK(sp[0].o))->F_large = (jref) sp[1].o;
	}
label_208:;
	{
	LINE_NUMBER(272);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_logic_SwitchBlock)) == 0) goto label_210;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_logic_SwitchBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-on"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_logic_SwitchBlock *) NULL_CHECK(sp[0].o))->F_onRegion = (jref) sp[1].o;
	}
label_210:;
	{
	LINE_NUMBER(275);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_TargetDummy)) == 0) goto label_212;
	}
	{
	LINE_NUMBER(276);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_TargetDummy, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-preview"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[0].o))->F_previewRegion = (jref) sp[1].o;
	LINE_NUMBER(277);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_TargetDummy, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-tether"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[0].o))->F_tether = (jref) sp[1].o;
	LINE_NUMBER(278);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_TargetDummy, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-tether-end"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_defense_TargetDummy *) NULL_CHECK(sp[0].o))->F_tetherEnd = (jref) sp[1].o;
	}
label_212:;
	{
	LINE_NUMBER(280);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_Thruster)) == 0) goto label_216;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_Thruster, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_Thruster *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_216:;
	{
	LINE_NUMBER(283);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_logic_TileableLogicDisplay)) == 0) goto label_218;
	}
	{
	LINE_NUMBER(284);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-back"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_backRegion = (jref) sp[1].o;
	LINE_NUMBER(285);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay, (frame[0].o));
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (47));
	((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK(sp[0].o))->F_tileRegion = (jref) sp[1].o;
	LINE_NUMBER(286);
	frame[1].i = (jint(0));
	}
label_222:;
	{
	if ((frame[1].i) >= (47)) goto label_218;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_world_blocks_logic_TileableLogicDisplay *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_logic_TileableLogicDisplay, (frame[0].o)))))->F_tileRegion;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(286);
	INST_IINC(1, 1);
	goto label_222;
	}
label_218:;
	{
	LINE_NUMBER(290);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_defense_turrets_TractorBeamTurret)) == 0) goto label_225;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_TractorBeamTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-base"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"block-\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, (frame[0].o)))))->F_size)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_baseRegion = (jref) sp[1].o;
	LINE_NUMBER(292);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_TractorBeamTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-laser"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_laser = (jref) sp[1].o;
	LINE_NUMBER(293);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_TractorBeamTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-laser-end"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_laserEnd = (jref) sp[1].o;
	LINE_NUMBER(294);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_TractorBeamTurret, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-laser-start"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-laser-end"_j.string, 1, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_world_blocks_defense_turrets_TractorBeamTurret *) NULL_CHECK(sp[0].o))->F_laserStart = (jref) sp[1].o;
	}
label_225:;
	{
	LINE_NUMBER(296);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_TreeBlock)) == 0) goto label_230;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_TreeBlock, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-shadow"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_environment_TreeBlock *) NULL_CHECK(sp[0].o))->F_shadow = (jref) sp[1].o;
	}
label_230:;
	{
	LINE_NUMBER(299);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_units_UnitAssembler)) == 0) goto label_232;
	}
	{
	LINE_NUMBER(300);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssembler, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-side1"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_sideRegion1 = (jref) sp[1].o;
	LINE_NUMBER(301);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssembler, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-side2"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK(sp[0].o))->F_sideRegion2 = (jref) sp[1].o;
	}
label_232:;
	{
	LINE_NUMBER(303);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_units_UnitAssemblerModule)) == 0) goto label_235;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssemblerModule, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-side1"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_UnitAssemblerModule *) NULL_CHECK(sp[0].o))->F_sideRegion1 = (jref) sp[1].o;
	LINE_NUMBER(305);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssemblerModule, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-side2"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_UnitAssemblerModule *) NULL_CHECK(sp[0].o))->F_sideRegion2 = (jref) sp[1].o;
	}
label_235:;
	{
	LINE_NUMBER(307);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_units_UnitCargoUnloadPoint)) == 0) goto label_238;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_units_UnitCargoUnloadPoint, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_units_UnitCargoUnloadPoint *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_238:;
	{
	LINE_NUMBER(310);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_storage_Unloader)) == 0) goto label_240;
	}
	{
	LINE_NUMBER(311);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_storage_Unloader, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-center"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8"unloader-center"_j))));
	((mindustry_world_blocks_storage_Unloader *) NULL_CHECK(sp[0].o))->F_centerRegion = (jref) sp[1].o;
	}
label_240:;
	{
	LINE_NUMBER(313);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_power_VariableReactor)) == 0) goto label_242;
	}
	{
	LINE_NUMBER(314);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_power_VariableReactor, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-lights"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_power_VariableReactor *) NULL_CHECK(sp[0].o))->F_lightsRegion = (jref) sp[1].o;
	}
label_242:;
	{
	LINE_NUMBER(316);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_production_WallCrafter)) == 0) goto label_244;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_WallCrafter, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-rotator-bottom"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK(sp[0].o))->F_rotatorBottomRegion = (jref) sp[1].o;
	LINE_NUMBER(318);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_WallCrafter, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-rotator"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK(sp[0].o))->F_rotatorRegion = (jref) sp[1].o;
	LINE_NUMBER(319);
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_production_WallCrafter, (frame[0].o));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-top"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_blocks_production_WallCrafter *) NULL_CHECK(sp[0].o))->F_topRegion = (jref) sp[1].o;
	}
label_244:;
	LINE_NUMBER(321);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_ContentRegions[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_ContentRegions, 0, "()V", 1 },
	{ "loadRegions", (intptr_t) SM_mindustry_gen_ContentRegions_loadRegions_mindustry_ctype_MappableContent, 0, "(Lmindustry/ctype/MappableContent;)V", 9 },
};

Class class_mindustry_gen_ContentRegions{
		.nativeName = (intptr_t) "mindustry/gen/ContentRegions",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_ContentRegions),
		.classVtable = (intptr_t) vtable_mindustry_gen_ContentRegions,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_ContentRegions,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_ContentRegions,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_ContentRegions = registerClass(&class_mindustry_gen_ContentRegions);

}
