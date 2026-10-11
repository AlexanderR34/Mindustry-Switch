#include "mindustry/world/Block.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/world/Block_invoke_arc_func_Intf_1.h"
#include "mindustry/world/Block_1.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_18.h"
#include "arc/util/Eachable.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_17.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_16.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_15.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_19.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_21.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_20.h"
#include "mindustry/graphics/MultiPacker.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/content/Fx.h"
#include "mindustry/world/Block_invoke_arc_func_Floatf_2.h"
#include "arc/util/pooling/Pools.h"
#include "java/util/Arrays.h"
#include "arc/util/Tmp.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_11.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/Block_invoke_arc_func_Floatf_3.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_13.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_12.h"
#include "arc/func/Floatp.h"
#include "mindustry/world/consumers/ConsumeCoolant.h"
#include "arc/func/Boolf.h"
#include "mindustry/mod/NoPatch.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Log.h"
#include "arc/util/Time.h"
#include "mindustry/world/consumers/ConsumeLiquidBase.h"
#include "mindustry/graphics/BuildingCacheLayer.h"
#include "arc/util/Nullable.h"
#include "arc/struct/ObjectMap_Values.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "java/lang/IllegalStateException.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/struct/OrderedMap.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/game/Rules.h"
#include "mindustry/graphics/CacheLayer.h"
#include "java/lang/Iterable.h"
#include "arc/func/Cons.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "mindustry/world/consumers/ConsumePowerDynamic.h"
#include "mindustry/world/meta/Stat.h"
#include "arc/audio/RandomSound.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/type/UnitType.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/type/ItemStack.h"
#include "arc/audio/Sound.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/world/blocks/power/BeamNode.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/struct/ObjectIntMap.h"
#include "java/lang/Deprecated.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/world/Block_invoke_arc_func_Cons_3.h"
#include "mindustry/world/meta/Attribute.h"
#include "arc/math/geom/Point2.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/consumers/ConsumeLiquid.h"
#include "mindustry/logic/LAccess.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/input/InputHandler_QueryEachable.h"
#include "mindustry/world/modules/PowerModule.h"
#include "java/lang/Throwable.h"
#include "mindustry/gen/ContentRegions.h"
#include "java/lang/Exception.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/type/Liquid.h"
#include "arc/util/Structs.h"
#include "java/lang/Void.h"
#include "mindustry/type/Item.h"
#include "arc/func/Cons2.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/world/Block_invoke_arc_func_Cons_4.h"
#include "mindustry/world/Block_invoke_arc_func_Cons_5.h"
#include "java/lang/RuntimeException.h"
#include "arc/graphics/Pixmaps.h"
#include "arc/struct/EnumSet.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/StatUnit.h"
#include "mindustry/world/meta/StatValue.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/type/LiquidStack.h"
#include "mindustry/world/consumers/ConsumeLiquids.h"
#include "java/lang/Float.h"
#include "mindustry/graphics/BlockRenderer.h"
#include "java/lang/String.h"
#include "mindustry/world/Block_invoke_arc_func_Func_11.h"
#include "mindustry/world/Block_invoke_arc_func_Func_10.h"
#include "java/util/Comparator.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/graphics/MultiPacker_PageType.h"
#include "mindustry/world/meta/BlockGroup.h"
#include "arc/math/geom/Geometry.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "mindustry/world/consumers/ConsumePowerCondition.h"
#include "java/lang/Math.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_19.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_18.h"
#include "mindustry/world/Edges.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_15.h"
#include "mindustry/world/Block_invoke_arc_func_Floatp_7.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_14.h"
#include "mindustry/world/Block_invoke_arc_func_Floatp_8.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_17.h"
#include "mindustry/world/Block_invoke_arc_func_Floatp_5.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_16.h"
#include "mindustry/world/Block_invoke_arc_func_Floatp_6.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/world/Block_invoke_arc_func_Floatp_9.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_14.h"
#include "mindustry/gen/Player.h"
#include "mindustry/world/Block_invoke_arc_func_Func_9.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_13.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/world/Block_invoke_arc_func_Cons2_2.h"
#include "mindustry/type/Planet.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_12.h"
#include "mindustry/world/Block_invoke_arc_func_Prov_11.h"
#include "mindustry/world/Block_invoke_arc_func_Cons2_3.h"
#include "mindustry/world/Block_invoke_arc_func_Func_6.h"
#include "mindustry/type/Category.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_21.h"
#include "mindustry/world/Block_invoke_arc_func_Func_8.h"
#include "mindustry/world/Block_invoke_arc_func_Func_7.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/world/consumers/ConsumeItems.h"
#include "mindustry/ctype/ContentType.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/Block_invoke_arc_func_Boolf_20.h"

extern "C" {

jobject SF_mindustry_world_Block_tempTiles;
jobject SF_mindustry_world_Block_tempBuilds;

void mark_mindustry_world_Block(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_Block_tempTiles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Block_tempTiles)->clazz)->markFunction)((jobject) SF_mindustry_world_Block_tempTiles, mark, depth + 1);
		if (SF_mindustry_world_Block_tempBuilds)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Block_tempBuilds)->clazz)->markFunction)((jobject) SF_mindustry_world_Block_tempBuilds, mark, depth + 1);
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
	auto self = (mindustry_world_Block *) object;
	if (self->F_lastConfig)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastConfig)->clazz)->markFunction)((jobject) self->F_lastConfig, mark, depth + 1);
	if (self->F_itemDrop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemDrop)->clazz)->markFunction)((jobject) self->F_itemDrop, mark, depth + 1);
	if (self->F_attributes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attributes)->clazz)->markFunction)((jobject) self->F_attributes, mark, depth + 1);
	if (self->F_destroyBullet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_destroyBullet)->clazz)->markFunction)((jobject) self->F_destroyBullet, mark, depth + 1);
	if (self->F_lightLiquid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightLiquid)->clazz)->markFunction)((jobject) self->F_lightLiquid, mark, depth + 1);
	if (self->F_cacheLayer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cacheLayer)->clazz)->markFunction)((jobject) self->F_cacheLayer, mark, depth + 1);
	if (self->F_buildingCacheLayer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildingCacheLayer)->clazz)->markFunction)((jobject) self->F_buildingCacheLayer, mark, depth + 1);
	if (self->F_group)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_group)->clazz)->markFunction)((jobject) self->F_group, mark, depth + 1);
	if (self->F_flags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flags)->clazz)->markFunction)((jobject) self->F_flags, mark, depth + 1);
	if (self->F_configureSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_configureSound)->clazz)->markFunction)((jobject) self->F_configureSound, mark, depth + 1);
	if (self->F_mapColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mapColor)->clazz)->markFunction)((jobject) self->F_mapColor, mark, depth + 1);
	if (self->F_outlineColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outlineColor)->clazz)->markFunction)((jobject) self->F_outlineColor, mark, depth + 1);
	if (self->F_placeSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_placeSound)->clazz)->markFunction)((jobject) self->F_placeSound, mark, depth + 1);
	if (self->F_breakSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_breakSound)->clazz)->markFunction)((jobject) self->F_breakSound, mark, depth + 1);
	if (self->F_destroySound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_destroySound)->clazz)->markFunction)((jobject) self->F_destroySound, mark, depth + 1);
	if (self->F_lightColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightColor)->clazz)->markFunction)((jobject) self->F_lightColor, mark, depth + 1);
	if (self->F_ambientSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ambientSound)->clazz)->markFunction)((jobject) self->F_ambientSound, mark, depth + 1);
	if (self->F_requirements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requirements)->clazz)->markFunction)((jobject) self->F_requirements, mark, depth + 1);
	if (self->F_category)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_category)->clazz)->markFunction)((jobject) self->F_category, mark, depth + 1);
	if (self->F_buildVisibility)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildVisibility)->clazz)->markFunction)((jobject) self->F_buildVisibility, mark, depth + 1);
	if (self->F_placeEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_placeEffect)->clazz)->markFunction)((jobject) self->F_placeEffect, mark, depth + 1);
	if (self->F_breakEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_breakEffect)->clazz)->markFunction)((jobject) self->F_breakEffect, mark, depth + 1);
	if (self->F_destroyEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_destroyEffect)->clazz)->markFunction)((jobject) self->F_destroyEffect, mark, depth + 1);
	if (self->F_researchCostMultipliers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_researchCostMultipliers)->clazz)->markFunction)((jobject) self->F_researchCostMultipliers, mark, depth + 1);
	if (self->F_researchCost)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_researchCost)->clazz)->markFunction)((jobject) self->F_researchCost, mark, depth + 1);
	if (self->F_forceTeam)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_forceTeam)->clazz)->markFunction)((jobject) self->F_forceTeam, mark, depth + 1);
	if (self->F_subclass)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_subclass)->clazz)->markFunction)((jobject) self->F_subclass, mark, depth + 1);
	if (self->F_buildType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buildType)->clazz)->markFunction)((jobject) self->F_buildType, mark, depth + 1);
	if (self->F_configurations)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_configurations)->clazz)->markFunction)((jobject) self->F_configurations, mark, depth + 1);
	if (self->F_itemFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemFilter)->clazz)->markFunction)((jobject) self->F_itemFilter, mark, depth + 1);
	if (self->F_liquidFilter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_liquidFilter)->clazz)->markFunction)((jobject) self->F_liquidFilter, mark, depth + 1);
	if (self->F_consumers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_consumers)->clazz)->markFunction)((jobject) self->F_consumers, mark, depth + 1);
	if (self->F_optionalConsumers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_optionalConsumers)->clazz)->markFunction)((jobject) self->F_optionalConsumers, mark, depth + 1);
	if (self->F_nonOptionalConsumers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nonOptionalConsumers)->clazz)->markFunction)((jobject) self->F_nonOptionalConsumers, mark, depth + 1);
	if (self->F_updateConsumers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_updateConsumers)->clazz)->markFunction)((jobject) self->F_updateConsumers, mark, depth + 1);
	if (self->F_consPower)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_consPower)->clazz)->markFunction)((jobject) self->F_consPower, mark, depth + 1);
	if (self->F_barMap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_barMap)->clazz)->markFunction)((jobject) self->F_barMap, mark, depth + 1);
	if (self->F_consumeBuilder)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_consumeBuilder)->clazz)->markFunction)((jobject) self->F_consumeBuilder, mark, depth + 1);
	if (self->F_generatedIcons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_generatedIcons)->clazz)->markFunction)((jobject) self->F_generatedIcons, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_customShadowRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_customShadowRegion)->clazz)->markFunction)((jobject) self->F_customShadowRegion, mark, depth + 1);
	if (self->F_teamRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_teamRegion)->clazz)->markFunction)((jobject) self->F_teamRegion, mark, depth + 1);
	if (self->F_teamRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_teamRegions)->clazz)->markFunction)((jobject) self->F_teamRegions, mark, depth + 1);
	if (self->F_variantRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_variantRegions)->clazz)->markFunction)((jobject) self->F_variantRegions, mark, depth + 1);
	if (self->F_variantShadowRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_variantShadowRegions)->clazz)->markFunction)((jobject) self->F_variantShadowRegions, mark, depth + 1);
}

void init_mindustry_world_Block_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(448);
	init_mindustry_ctype_UnlockableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(51);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outputsLiquid = (jint(0));
	LINE_NUMBER(53);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumesPower = (jint(1));
	LINE_NUMBER(55);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outputsPower = (jint(0));
	LINE_NUMBER(57);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_connectedPower = (jint(1));
	LINE_NUMBER(59);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_conductivePower = (jint(0));
	LINE_NUMBER(61);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outputsPayload = (jint(0));
	LINE_NUMBER(63);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_acceptsUnitPayloads = (jint(0));
	LINE_NUMBER(65);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_acceptsPayload = (jint(0));
	LINE_NUMBER(67);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_acceptsItems = (jint(0));
	LINE_NUMBER(69);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_alwaysAllowDeposit = (jint(0));
	LINE_NUMBER(71);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowedInPayloads = (jint(1));
	LINE_NUMBER(73);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_depositCooldown = (jfloat(-1.0f));
	LINE_NUMBER(75);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_separateItemCapacity = (jint(0));
	LINE_NUMBER(77);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity = (10);
	LINE_NUMBER(79);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidCapacity = (jfloat(-1.0f));
	LINE_NUMBER(81);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidPressure = (jfloat(1));
	LINE_NUMBER(84);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outputFacing = (jint(1));
	LINE_NUMBER(86);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_noSideBlend = (jint(0));
	LINE_NUMBER(88);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_displayFlow = (jint(1));
	LINE_NUMBER(90);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_inEditor = (jint(1));
	LINE_NUMBER(97);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_saveConfig = (jint(0));
	LINE_NUMBER(99);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_copyConfig = (jint(1));
	LINE_NUMBER(101);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_clearOnDoubleTap = (jint(0));
	LINE_NUMBER(108);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_unloadable = (jint(1));
	LINE_NUMBER(110);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_isDuct = (jint(0));
	LINE_NUMBER(112);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowResupply = (jint(0));
	LINE_NUMBER(124);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotateDraw = (jint(1));
	LINE_NUMBER(126);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotateDrawEditor = (jint(1));
	LINE_NUMBER(128);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_visualRotationOffset = (jfloat(0));
	LINE_NUMBER(130);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lockRotation = (jint(1));
	LINE_NUMBER(132);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ignoreLineRotation = (jint(0));
	LINE_NUMBER(134);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_invertFlip = (jint(0));
	LINE_NUMBER(136);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants = (jint(0));
	LINE_NUMBER(138);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawArrow = (jint(1));
	LINE_NUMBER(140);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawTeamOverlay = (jint(1));
	LINE_NUMBER(148);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rebuildable = (jint(1));
	LINE_NUMBER(150);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_privileged = (jint(0));
	LINE_NUMBER(152);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requiresWater = (jint(0));
	LINE_NUMBER(154);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placeableLiquid = (jint(0));
	LINE_NUMBER(156);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placeablePlayer = (jint(1));
	LINE_NUMBER(158);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placeableOn = (jint(1));
	LINE_NUMBER(160);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_insulated = (jint(0));
	LINE_NUMBER(162);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_squareSprite = (jint(1));
	LINE_NUMBER(164);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_absorbLasers = (jint(0));
	LINE_NUMBER(166);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_enableDrawStatus = (jint(1));
	LINE_NUMBER(168);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawDisabled = (jint(1));
	LINE_NUMBER(170);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_autoResetEnabled = (jint(1));
	LINE_NUMBER(172);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_noUpdateDisabled = (jint(0));
	LINE_NUMBER(174);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_updateInUnits = (jint(1));
	LINE_NUMBER(176);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_alwaysUpdateInUnits = (jint(0));
	LINE_NUMBER(178);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_canPickup = (jint(1));
	LINE_NUMBER(181);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_deconstructDropAllLiquid = (jint(0));
	LINE_NUMBER(183);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_useColor = (jint(1));
	LINE_NUMBER(185);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemDrop = (jref) (jobject(nullptr));
	LINE_NUMBER(187);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_playerUnmineable = (jint(0));
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_Attributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_Attributes);
	init_mindustry_world_blocks_Attributes(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_attributes = (jref) sp[1].o;
	LINE_NUMBER(191);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_scaledHealth = (jfloat(-1.0f));
	LINE_NUMBER(193);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_health = (jint(-1));
	LINE_NUMBER(195);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_armor = (jfloat(0));
	LINE_NUMBER(197);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_baseExplosiveness = (jfloat(0));
	LINE_NUMBER(199);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_explosivenessScale = (jfloat(1));
	LINE_NUMBER(201);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_flammabilityScale = (jfloat(1));
	LINE_NUMBER(203);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_baseShake = (jfloat(3.0f));
	LINE_NUMBER(205);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destroyBullet = (jref) (jobject(nullptr));
	LINE_NUMBER(207);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destroyBulletSameTeam = (jint(0));
	LINE_NUMBER(211);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawCracks = (jint(1));
	LINE_NUMBER(213);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_createRubble = (jint(1));
	LINE_NUMBER(215);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_floating = (jint(0));
	LINE_NUMBER(217);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size = (jint(1));
	LINE_NUMBER(220);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset = (jfloat(0));
	LINE_NUMBER(222);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_sizeOffset = (jint(0));
	LINE_NUMBER(224);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_clipSize = (jfloat(-1.0f));
	LINE_NUMBER(228);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placeOverlapRange = (jfloat(50.0f));
	LINE_NUMBER(230);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_crushDamageMultiplier = (jfloat(1));
	LINE_NUMBER(232);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_crushFragile = (jint(0));
	LINE_NUMBER(234);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_timers = (jint(0));
	LINE_NUMBER(236);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_normal;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_cacheLayer = (jref) sp[1].o;
	LINE_NUMBER(238);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawDynamic = (jint(1));
	LINE_NUMBER(240);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawCached = (jint(0));
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_BuildingCacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_BuildingCacheLayer_normal;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildingCacheLayer = (jref) sp[1].o;
	LINE_NUMBER(244);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_fillsTile = (jint(1));
	LINE_NUMBER(246);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_forceDark = (jint(0));
	LINE_NUMBER(248);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_alwaysReplace = (jint(0));
	LINE_NUMBER(250);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_replaceable = (jint(1));
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_none;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (jint(0)));
	sp[1].o = (jobject)SM_arc_struct_EnumSet_of_Array1_java_lang_Enum_R_arc_struct_EnumSet(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags = (jref) sp[1].o;
	LINE_NUMBER(256);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_priority = (jfloat(0));
	LINE_NUMBER(259);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_unitCapModifier = (jint(0));
	LINE_NUMBER(263);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_click;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configureSound = (jref) sp[1].o;
	LINE_NUMBER(269);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowConfigInventory = (jint(1));
	LINE_NUMBER(271);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_diagonalConfigInventory = (jint(0));
	LINE_NUMBER(273);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_selectionRows = (jint(5));
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_selectionColumns = (jint(4));
	LINE_NUMBER(275);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_logicConfigurable = (jint(0));
	LINE_NUMBER(281);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawLiquidLight = (jint(1));
	LINE_NUMBER(283);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envRequired = (jint(0));
	LINE_NUMBER(285);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envEnabled = (jint(1));
	LINE_NUMBER(287);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envDisabled = (jint(0));
	LINE_NUMBER(293);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowDiagonal = (jint(1));
	LINE_NUMBER(297);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowRectanglePlacement = (jint(0));
	LINE_NUMBER(299);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_schematicPriority = (jint(0));
	LINE_NUMBER(304);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_mapColor = (jref) sp[1].o;
	LINE_NUMBER(306);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasColor = (jint(0));
	LINE_NUMBER(308);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_targetable = (jint(1));
	LINE_NUMBER(310);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_attacks = (jint(0));
	LINE_NUMBER(312);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_suppressable = (jint(0));
	LINE_NUMBER(314);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_canOverdrive = (jint(1));
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"404049"_j))));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_outlineColor = (jref) sp[1].o;
	LINE_NUMBER(318);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlineIcon = (jint(0));
	LINE_NUMBER(320);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlineRadius = (jint(4));
	LINE_NUMBER(322);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlinedIcon = (jint(-1));
	LINE_NUMBER(324);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasShadow = (jint(1));
	LINE_NUMBER(326);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_customShadow = (jint(0));
	LINE_NUMBER(328);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placePitchChange = (jint(1));
	LINE_NUMBER(330);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_breakPitchChange = (jint(1));
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unset;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_placeSound = (jref) sp[1].o;
	LINE_NUMBER(334);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unset;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_breakSound = (jref) sp[1].o;
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unset;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroySound = (jref) sp[1].o;
	LINE_NUMBER(338);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destroySoundVolume = (jfloat(1));
	LINE_NUMBER(340);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destroyPitchMin = (jfloat(1));
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destroyPitchMax = (jfloat(1));
	LINE_NUMBER(342);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_albedo = (jfloat(0));
	LINE_NUMBER(344);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(346);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_emitLight = (jint(0));
	LINE_NUMBER(348);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_obstructsLight = (jint(1));
	LINE_NUMBER(350);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightRadius = (jfloat(60.0f));
	LINE_NUMBER(353);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_fogRadius = (jint(-1));
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound = (jref) sp[1].o;
	LINE_NUMBER(358);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ambientSoundVolume = (jfloat(0.05f));
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (jint(0)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements = (jref) sp[1].o;
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_distribution;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_category = (jref) sp[1].o;
	LINE_NUMBER(365);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildTime = (jfloat(-1.0f));
	LINE_NUMBER(367);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_hidden;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildVisibility = (jref) sp[1].o;
	LINE_NUMBER(369);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildCostMultiplier = (jfloat(1));
	LINE_NUMBER(371);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_deconstructThreshold = (jfloat(0));
	LINE_NUMBER(373);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_instantDeconstruct = (jint(0));
	LINE_NUMBER(375);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_instantBuild = (jint(0));
	LINE_NUMBER(377);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_ignoreBuildDarkness = (jint(0));
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_placeBlock;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_placeEffect = (jref) sp[1].o;
	LINE_NUMBER(381);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_breakBlock;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_breakEffect = (jref) sp[1].o;
	LINE_NUMBER(383);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_dynamicExplosion;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroyEffect = (jref) sp[1].o;
	LINE_NUMBER(385);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_researchCostMultiplier = (jfloat(1));
	LINE_NUMBER(387);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_researchCostMultipliers = (jref) sp[1].o;
	LINE_NUMBER(393);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_instantTransfer = (jint(0));
	LINE_NUMBER(395);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_maxConsecutive = (jint(2));
	LINE_NUMBER(397);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_quickRotate = (jint(1));
	LINE_NUMBER(399);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_allowDerelictRepair = (jint(1));
	LINE_NUMBER(405);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildType = (jref) (jobject(nullptr));
	LINE_NUMBER(408);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurations = (jref) sp[1].o;
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (jint(0)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemFilter = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_boolean, (jint(0)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidFilter = (jref) sp[1].o;
	LINE_NUMBER(414);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_consumers_Consume, (jint(0)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumers = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_consumers_Consume, (jint(0)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_optionalConsumers = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_consumers_Consume, (jint(0)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_nonOptionalConsumers = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_consumers_Consume, (jint(0)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_updateConsumers = (jref) sp[1].o;
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_barMap = (jref) sp[1].o;
	LINE_NUMBER(427);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumeBuilder = (jref) sp[1].o;
	LINE_NUMBER(433);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_regionRotated1 = (jint(-1));
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_regionRotated2 = (jint(-1));
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers;
	((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_timers = (temp0 + (jint(1)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_timerDump = temp0;
	LINE_NUMBER(445);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_dumpTime = (jint(5));
	LINE_NUMBER(449);
	((func_mindustry_world_Block_initBuilding) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_initBuilding])(ctx, (frame[0].o));
	LINE_NUMBER(450);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_selectionSize = (jfloat(28.0f));
	LINE_NUMBER(451);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawBase_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawBase", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	((func_mindustry_gen_Building_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_draw])(ctx, sp[0].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(459);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[1].o));
	jlong temp1 = jlong(temp0);
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp3, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	jint temp5 = (jint)SM_arc_math_Mathf_randomSeed_long_int_int_R_int(ctx, temp1, temp2, temp4);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp5);
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	sp[1].o = frame[1].o;
	LINE_NUMBER(461);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(458);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	}
label_3:;
	LINE_NUMBER(463);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawBaseCached", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	((func_mindustry_gen_Building_drawCached) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_drawCached])(ctx, sp[0].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(471);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_region;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[1].o));
	jlong temp1 = jlong(temp0);
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp3, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	jint temp5 = (jint)SM_arc_math_Mathf_randomSeed_long_int_int_R_int(ctx, temp1, temp2, temp4);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp5);
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	sp[1].o = frame[1].o;
	LINE_NUMBER(473);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(470);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	}
label_3:;
	LINE_NUMBER(475);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawShadow_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawShadow", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(478);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = jfloat(0);
	clinit_mindustry_graphics_BlockRenderer(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_BlockRenderer_shadowColor;
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, temp0, temp1, temp2, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a));
	LINE_NUMBER(480);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_customShadowRegion;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantShadowRegions;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[1].o));
	jlong temp1 = jlong(temp0);
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantShadowRegions;
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp3, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	jint temp5 = (jint)SM_arc_math_Mathf_randomSeed_long_int_int_R_int(ctx, temp1, temp2, temp4);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp5);
	sp += 1;
	}
label_3:;
	{
	sp -= 1;
	sp[1].o = frame[1].o;
	LINE_NUMBER(482);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_drawx_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_drawx_R_float])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_drawy_R_float])(ctx, (frame[1].o));
	LINE_NUMBER(479);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(483);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Block_percentSolid_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:percentSolid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(487);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(488);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(489);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_world_Block(ctx);
	sp[2].o = (jobject)SF_mindustry_world_Block_tempTiles;
	sp[0].o = (jobject)((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Floatf_2(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Floatf_2 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Floatf_2);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(490);
	jfloat temp0 = (jfloat)((func_arc_struct_Seq_sumf_arc_func_Floatf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (temp0 / (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) / (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)));
	LINE_NUMBER(489);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawEnvironmentLight", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(494);
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightRadius;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightColor;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightColor;
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp2, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a));
	LINE_NUMBER(495);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPlace", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(499);
	((func_mindustry_world_Block_drawPotentialLinks_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_drawPotentialLinks_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(500);
	((func_mindustry_world_Block_drawOverlay_float_float_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_drawOverlay_float_float_int])(ctx, (frame[0].o), ((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), (frame[3].i));
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawSideRegion", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(505);
	clinit_arc_math_geom_Geometry(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Geometry_d4;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (frame[4].i), (jint(4)));
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	LINE_NUMBER(506);
	frame[6].f = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))) / (jfloat(2)));
	LINE_NUMBER(508);
	sp[0].o = frame[1].o;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x));
	jfloat temp3 = frame[6].f;
	jfloat temp4 = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width))) / (jfloat(2));
	sp[1].o = frame[1].o;
	LINE_NUMBER(509);
	jfloat temp5 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	jfloat temp6 = temp1 + (temp2 * (temp3 - (temp4 * temp5)));
	jfloat temp7 = frame[3].f;
	jfloat temp8 = jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y));
	jfloat temp9 = frame[6].f;
	jfloat temp10 = (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_width))) / (jfloat(2));
	sp[1].o = frame[1].o;
	LINE_NUMBER(510);
	jfloat temp11 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	jfloat temp12 = temp7 + (temp8 * (temp9 - (temp10 * temp11)));
	jfloat temp13 = (jfloat((frame[4].i))) * (jfloat(90.0f));
	LINE_NUMBER(508);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp6, temp12, temp13);
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawPotentialLinks_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPotentialLinks", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(516);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumesPower) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outputsPower) == 0) goto label_2;
	}
label_1:;
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasPower) == 0) goto label_2;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_connectedPower) == 0) goto label_2;
	}
	{
	LINE_NUMBER(517);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(518);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(519);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Cons_3);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	SM_mindustry_world_blocks_power_PowerNode_getNodeLinks_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(527);
	sp[0].o = frame[3].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Cons_4);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	SM_mindustry_world_blocks_power_BeamNode_getNodeLinks_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_arc_func_Cons(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_2:;
	LINE_NUMBER(536);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPlaceText", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(539);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp += 4;
	if ((frame[4].i) == 0) goto label_1;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
	goto label_2;
label_1:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
label_2:;
	{
	sp -= 5;
	jfloat temp0 = (jfloat)((func_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].o, (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPlaceText", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(543);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_pixelate) == 0) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(545);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	frame[6].o = sp[0].o;
	LINE_NUMBER(546);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_11(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_11);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[7].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(547);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[6].o));
	frame[8].i = temp0;
	LINE_NUMBER(548);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(549);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[6].o));
	jfloat temp1 = jfloat(0.25f);
	jfloat temp2 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (temp1 / temp2));
	LINE_NUMBER(550);
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, (frame[7].o), (frame[6].o), (frame[1].o));
	LINE_NUMBER(552);
	frame[9].f = ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[7].o)))->F_width);
	LINE_NUMBER(554);
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, (frame[6].o), (frame[4].o));
	LINE_NUMBER(555);
	frame[10].f = ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset));
	frame[11].f = ((((jfloat(((frame[3].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)) + ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))) / (jfloat(2)))) + (jfloat(3.0f)));
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_int_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[6].o), (frame[1].o), (frame[10].f), (((frame[11].f) + ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[7].o)))->F_height)) + (jfloat(1))), (jint(1)));
	LINE_NUMBER(557);
	frame[11].f = ((frame[11].f) - (jfloat(1)));
	LINE_NUMBER(558);
	if ((frame[5].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(559);
	jfloat temp0 = jfloat(2);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_darkGray;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(560);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (((frame[10].f) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[7].o)))->F_width) / (jfloat(2)))) - (jfloat(2))), (frame[11].f), (((frame[10].f) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[7].o)))->F_width) / (jfloat(2)))) + (jfloat(1.5f))), (frame[11].f));
	LINE_NUMBER(561);
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, (jfloat(1)), (frame[4].o));
	LINE_NUMBER(562);
	SM_arc_graphics_g2d_Lines_line_float_float_float_float(ctx, (((frame[10].f) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[7].o)))->F_width) / (jfloat(2)))) - (jfloat(2))), (frame[11].f), (((frame[10].f) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[7].o)))->F_width) / (jfloat(2)))) + (jfloat(1.5f))), (frame[11].f));
	}
label_14:;
	{
	LINE_NUMBER(565);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[6].o), (frame[8].i));
	LINE_NUMBER(566);
	sp[0].o = frame[6].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[6].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(568);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(569);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[7].o));
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return (frame[9].f);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawOverlay_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawOverlay", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	LINE_NUMBER(576);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:displayShadow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(579);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasShadow);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:sumAttribute", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(583);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(584);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(585);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_3:;
	{
	LINE_NUMBER(586);
	sp[0].o = frame[4].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_world_Block(ctx);
	sp[2].o = (jobject)SF_mindustry_world_Block_tempTiles;
	sp[0].o = (jobject)((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Floatf_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(587);
	jfloat temp0 = (jfloat)((func_arc_struct_Seq_sumf_arc_func_Floatf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(586);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getDisplayIcon", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((func_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getDisplayIcon_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getDisplayName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((func_mindustry_gen_Building_getDisplayName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_getDisplayName_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:minimapColor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(600);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(604);
	jint temp0 = (jint)((func_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(605);
	if ((frame[2].i) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_mapColor;
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c3;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[0].o, (frame[2].i));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_outputsItems_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:outputsItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:canPlaceOn", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:canBreak", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(619);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_rotatedOutput_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:rotatedOutput", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(623);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:rotatedOutput", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(627);
	jint temp0 = (jint)((func_mindustry_world_Block_rotatedOutput_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_rotatedOutput_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_synthetic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:synthetic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(631);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destructible) == 0) goto label_2;
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

jbool M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:checkForceDark", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(635);
	popStackFrame(ctx);
	return ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_forceDark);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:isDarkened", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(640);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_fillsTile) != 0) goto label_3;
	}
label_2:;
	{
	jint temp0 = (jint)((func_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:setStats", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(645);
	M_mindustry_ctype_UnlockableContent_setStats(ctx, (frame[0].o));
	LINE_NUMBER(647);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	((mindustry_world_meta_Stats *) NULL_CHECK(sp[0].o))->F_useCategories = (jint(1));
	LINE_NUMBER(649);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_size;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@x@"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	sp[4].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(651);
	jint temp2 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	if (temp2 == 0) goto label_4;
	}
	{
	LINE_NUMBER(652);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_health;
	jfloat temp0 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_health));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_none;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(653);
	if ((floatCompare(((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_armor), (jfloat(0)), -1)) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(654);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_armor;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_armor;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_none;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_4:;
	{
	LINE_NUMBER(658);
	jint temp0 = (jint)((func_mindustry_world_Block_canBeBuilt_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_canBeBuilt_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_buildTime;
	jfloat temp0 = ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildTime) / (jfloat(60.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_seconds;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(660);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_buildCost;
	jint temp1 = jint(0);
	sp[2].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_items_boolean_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(ctx, temp1, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_8:;
	{
	LINE_NUMBER(663);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_instantTransfer) == 0) goto label_11;
	}
	{
	LINE_NUMBER(664);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_itemsMoved;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_instant;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(665);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_maxConsecutive;
	jfloat temp0 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_maxConsecutive));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_none;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_11:;
	{
	LINE_NUMBER(668);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumers;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_14:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_15;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(669);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	((func_mindustry_world_consumers_Consume_display_mindustry_world_meta_Stats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_Consume_display_mindustry_world_meta_Stats])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(668);
	INST_IINC(3, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(673);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasLiquids) == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_liquidCapacity;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidCapacity;
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_liquidUnits;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_18:;
	{
	LINE_NUMBER(674);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems) == 0) goto label_19;
	}
	{
	LINE_NUMBER(675);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity) <= 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_itemCapacity;
	jfloat temp0 = jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_items;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	goto label_19;
	}
label_21:;
	{
	LINE_NUMBER(676);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_instantTransfer) != 0) goto label_22;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity) != 0) goto label_19;
	}
label_22:;
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_itemCapacity;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"none"_j));
	sp[4].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[2].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_bundle;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"unabletoclog"_j));
	sp[5].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[3].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001. \u0001"_j.string, 2, sp[2].o, sp[3].o);
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_19:;
	LINE_NUMBER(678);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:addBar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(681);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_barMap;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(682);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_removeBar_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:removeBar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_barMap;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(686);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_listBars_R_java_lang_Iterable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:listBars", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_barMap;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:addLiquidBar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(693);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"liquid-\u0001"_j.string, 1, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Func_6(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Func_6 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Func_6);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_Block_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(698);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_addLiquidBar_arc_func_Func(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:addLiquidBar", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(702);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"liquid"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Func_7(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Func_7 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Func_7);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_Block_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(707);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:setBars", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(710);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"health"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Func_8(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Func_8 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Func_8);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_Block_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(712);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	frame[1].i = ((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered);
	LINE_NUMBER(714);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	frame[2].f = ((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_capacity);
	LINE_NUMBER(716);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"power"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Func_9(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Func_9 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Func_9);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (frame[1].i);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_Block_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	{
	LINE_NUMBER(724);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems) == 0) goto label_6;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurable) == 0) goto label_6;
	}
	{
	LINE_NUMBER(725);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"items"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Func_10(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Func_10 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Func_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_Block_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	{
	LINE_NUMBER(732);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_unitCapModifier) == 0) goto label_8;
	}
	{
	LINE_NUMBER(733);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_maxUnits;
	sp += 2;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_unitCapModifier) >= 0) goto label_10;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-"_j));
	goto label_11;
label_10:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"+"_j));
label_11:;
	{
	sp -= 3;
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_unitCapModifier));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, temp0));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_8:;
	{
	LINE_NUMBER(737);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasLiquids) == 0) goto label_12;
	}
	{
	LINE_NUMBER(746);
	frame[1].i = (jint(0));
	LINE_NUMBER(750);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumers;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_15:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_16;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(751);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_consumers_ConsumeLiquid)) == 0) goto label_18;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquid, (frame[5].o)));
	LINE_NUMBER(752);
	frame[1].i = (jint(1));
	LINE_NUMBER(753);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_consumers_ConsumeLiquid *) NULL_CHECK((frame[6].o)))->F_liquid;
	((func_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid])(ctx, sp[0].o, sp[1].o);
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(754);
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_consumers_ConsumeLiquids)) == 0) goto label_21;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquids, (frame[5].o)));
	LINE_NUMBER(755);
	frame[1].i = (jint(1));
	LINE_NUMBER(756);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeLiquids *) NULL_CHECK((frame[7].o)))->F_liquids;
	frame[8].o = sp[0].o;
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_24:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_21;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(757);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[11].o)))->F_liquid;
	((func_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(756);
	INST_IINC(10, 1);
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(750);
	INST_IINC(4, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(763);
	if ((frame[1].i) != 0) goto label_12;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidCapacity), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(764);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Func_11(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Func_11 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Func_11);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Block_addLiquidBar_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_addLiquidBar_arc_func_Func])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	LINE_NUMBER(767);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_afterPatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:afterPatch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(771);
	M_mindustry_ctype_UnlockableContent_afterPatch(ctx, (frame[0].o));
	LINE_NUMBER(772);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_barMap;
	((func_arc_struct_OrderedMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(773);
	((func_mindustry_world_Block_setBars) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_setBars])(ctx, (frame[0].o));
	LINE_NUMBER(774);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset = ((jfloat((((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) % (jint(2))) * (8)))) / (jfloat(2)));
	LINE_NUMBER(775);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_sizeOffset = (-((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))) / (jint(2))));
	LINE_NUMBER(777);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemFilter = (jref) sp[1].o;
	LINE_NUMBER(778);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidFilter = (jref) sp[1].o;
	LINE_NUMBER(780);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) == 0) goto label_8;
	}
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[0].o));
	LINE_NUMBER(782);
	((func_mindustry_world_consumers_Consume_apply_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_apply_mindustry_world_Block])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(783);
	goto label_10;
	}
label_8:;
	LINE_NUMBER(785);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumesItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(788);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemFilter;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumesLiquid", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(792);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidFilter;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_id)));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:canReplace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(796);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_alwaysReplace) == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(797);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_privileged) == 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(798);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_replaceable) == 0) goto label_3;
	}
	{
	if ((frame[1].o) != (frame[0].o)) goto label_4;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_quickRotate) == 0) goto label_3;
	}
label_4:;
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_group;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_none;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_group;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_group;
	if (sp[0].o == sp[1].o) goto label_6;
	}
label_5:;
	{
	if ((frame[1].o) != (frame[0].o)) goto label_3;
	}
label_6:;
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) == ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size)) goto label_7;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) < ((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size)) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_subclass;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_subclass;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_subclass;
	if (sp[0].o == sp[1].o) goto label_7;
	}
label_8:;
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_group;
	if (((jint)((mindustry_world_meta_BlockGroup *) NULL_CHECK(sp[0].o))->F_anyReplace) == 0) goto label_3;
	}
label_7:;
	INST_ICONST(1);
	goto label_9;
label_3:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getReplacement", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(804);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:changePlacementPath", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(809);
	((func_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int])(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(810);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:changePlacementPath", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	LINE_NUMBER(815);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:handlePlacementLine", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(820);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_configSenseable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:configSenseable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) &class_mindustry_type_Item)));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) &class_mindustry_type_Liquid)));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) &class_mindustry_ctype_UnlockableContent)));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	sp[1].o = ((jobject) &class_mindustry_world_Block);
	LINE_NUMBER(824);
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) &class_mindustry_type_UnitType)));
	if (temp0 == 0) goto label_3;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(823);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_nextConfig_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:nextConfig", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(828);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_saveConfig) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lastConfig;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lastConfig;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:onNewPlan", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(837);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPlan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(840);
	((func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (jfloat(1)));
	LINE_NUMBER(841);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPlan", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(844);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(845);
	if ((frame[3].i) != 0) goto label_2;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_breakInvalid;
	goto label_3;
label_2:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_3:;
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_4;
	(sp++)->f = jfloat(0.4f);
	goto label_5;
label_4:;
	(sp++)->f = jfloat(0.24f);
label_5:;
	{
	sp -= 2;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime), (jfloat(6.0f)), (jfloat(0.28f)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (sp[1].f + temp0));
	LINE_NUMBER(846);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[4].f));
	LINE_NUMBER(847);
	frame[5].f = (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl);
	LINE_NUMBER(848);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_scl = ((clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl) * ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_animScale));
	LINE_NUMBER(849);
	((func_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(850);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_scl = (frame[5].f);
	LINE_NUMBER(851);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(852);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawOtherPlayerPlan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(855);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime), (jfloat(6.0f)), (jfloat(0.15f)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, temp0);
	LINE_NUMBER(856);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[3].f));
	LINE_NUMBER(857);
	frame[4].f = (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl);
	LINE_NUMBER(858);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_scl = ((clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_scl) * ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_animScale));
	LINE_NUMBER(859);
	((func_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(860);
	clinit_arc_graphics_g2d_Draw(ctx);
	SF_arc_graphics_g2d_Draw_scl = (frame[4].f);
	LINE_NUMBER(861);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(862);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPlanRegion", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(865);
	((func_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(866);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawDefaultPlanRegion", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject)((func_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(871);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	frame[4].f = temp0;
	LINE_NUMBER(872);
	sp[0].o = frame[3].o;
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	sp[1].f = temp1;
	sp[2].f = temp2;
	sp += 3;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotateDraw) != 0) goto label_4;
	}
label_3:;
	INST_FCONST(0);
	goto label_5;
label_4:;
	{
	jfloat temp0 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) * (90)));
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 4;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
	LINE_NUMBER(874);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_worldContext) == 0) goto label_7;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
	if ((--sp)->o == nullptr) goto label_7;
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegions;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (frame[4].f));
	}
label_9:;
	{
	LINE_NUMBER(876);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegions;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(877);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(1)), (jfloat(1)), (jfloat(1)), (frame[4].f));
	}
label_7:;
	{
	LINE_NUMBER(880);
	((func_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(881);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:findPlan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(884);
	sp[0].o = (jobject)SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(1)), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:findPlan", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(888);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_input_InputHandler$QueryEachable)) == 0) goto label_1;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_input_InputHandler$QueryEachable, (frame[0].o)));
	LINE_NUMBER(889);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler$QueryEachable_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_input_InputHandler$QueryEachable_find_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan])(ctx, (frame[5].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(891);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getPlanRegion", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(895);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPlanConfig", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(900);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPlanConfigCenter", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(903);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(904);
	if ((frame[4].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(905);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"cross"_j));
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float(ctx, sp[0].o, temp0, temp1);
	}
label_3:;
	LINE_NUMBER(907);
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(909);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_Item)) == 0) goto label_5;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_type_Item *) NULL_CHECK((frame[7].o)))->F_color;
	sp += 1;
	goto label_7;
	}
label_5:;
	{
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_type_Liquid)) == 0) goto label_8;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Liquid, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_type_Liquid *) NULL_CHECK((frame[6].o)))->F_color;
	sp += 1;
	goto label_7;
	}
label_8:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(910);
	if ((frame[5].o) != nullptr) goto label_11;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_11:;
	{
	LINE_NUMBER(912);
	sp[0].o = frame[5].o;
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, temp0);
	LINE_NUMBER(913);
	sp[0].o = frame[3].o;
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_java_lang_String_float_float(ctx, sp[0].o, temp1, temp2);
	LINE_NUMBER(914);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(915);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPlanConfigCenter", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(918);
	((func_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jint(0)));
	LINE_NUMBER(919);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:drawPlanConfigTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(923);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Block_planConfigClipSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:planConfigClipSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(926);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_clipSize);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:pointConfig", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(931);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_configClear_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:configClear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(936);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Cons2_2(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Cons2_2 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Cons2_2);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(937);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:config", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(941);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(942);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_isAccessible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:isAccessible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(945);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity) <= 0) goto label_1;
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

void M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:nearbySide", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(950);
	frame[6].i = ((frame[1].i) - ((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))) / (jint(2))));
	frame[7].i = ((frame[2].i) - ((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))) / (jint(2))));
	frame[8].i = ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(951);
	switch((frame[3].i)) {
		case 0: goto label_4;
		case 1: goto label_5;
		case 2: goto label_6;
		case 3: goto label_7;
		default: goto label_8;
	}
	}
label_4:;
	{
	LINE_NUMBER(952);
	sp[0].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (frame[5].o), ((frame[6].i) + (frame[8].i)), ((frame[7].i) + (frame[4].i)));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(953);
	sp[0].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (frame[5].o), ((frame[6].i) + (frame[4].i)), ((frame[7].i) + (frame[8].i)));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(954);
	sp[0].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (frame[5].o), ((frame[6].i) - (jint(1))), ((frame[7].i) + (frame[4].i)));
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(955);
	sp[0].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (frame[5].o), ((frame[6].i) + (frame[4].i)), ((frame[7].i) - (jint(1))));
	}
label_8:;
	LINE_NUMBER(957);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getEdges", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(960);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getInsideEdges", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)SM_mindustry_world_Edges_getInsideEdges_int_R_Array1_arc_math_geom_Point2(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:iterateTaken", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(969);
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(970);
	frame[4].i = ((-(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(971);
	frame[5].i = ((-(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(973);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(974);
	frame[7].i = (jint(0));
	}
label_8:;
	{
	if ((frame[7].i) >= ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)) goto label_9;
	}
	{
	LINE_NUMBER(975);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[3].o)))(ctx, (frame[3].o), (((frame[6].i) + (frame[4].i)) + (frame[1].i)), (((frame[7].i) + (frame[5].i)) + (frame[2].i)));
	LINE_NUMBER(974);
	INST_IINC(7, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(973);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(979);
	goto label_12;
label_1:;
	{
	LINE_NUMBER(980);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[3].o)))(ctx, (frame[3].o), (frame[1].i), (frame[2].i));
	}
label_12:;
	LINE_NUMBER(982);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:makeIconRegions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(986);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:icons", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(991);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants) <= 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u00011"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_Block *) NULL_CHECK(sp[-1].o))->F_region;
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(992);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	jint temp0 = jint(1);
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegions;
	clinit_mindustry_game_Team(ctx);
	sp[2].o = (jobject)SF_mindustry_game_Team_sharded;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[2].o))->F_id)));
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	sp += 1;
	}
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getRegionsToOutline", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(997);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getGeneratedIcons", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1000);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_generatedIcons;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_generatedIcons = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_Block *) NULL_CHECK(sp[-1].o))->F_generatedIcons;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_resetGeneratedIcons(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:resetGeneratedIcons", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1004);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_generatedIcons = (jref) (jobject(nullptr));
	LINE_NUMBER(1005);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:variantRegions", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variantRegions = (jref) sp[1].o;
	sp[0].o = sp[1].o;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_Block *) NULL_CHECK(sp[-1].o))->F_variantRegions;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_hasBuilding_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:hasBuilding", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1012);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destructible) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update) == 0) goto label_2;
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

jobject M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:newBuilding", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1016);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildType;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	jobject res = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	if (res) {
		syncBuildingOuterBlock(res, (frame[0].o));
	}
	popStackFrame(ctx);
	return res;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_updateClipRadius_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:updateClipRadius", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1020);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_clipSize), ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))) + ((frame[1].f) * (jfloat(2)))));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_clipSize = temp0;
	LINE_NUMBER(1021);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:bounds", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1024);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, (frame[3].o), (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_isMultiblock_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:isMultiblock", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1028);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) <= (jint(1))) goto label_1;
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

jbool M_mindustry_world_Block_isVisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jint temp0 = (jint)((func_mindustry_world_Block_isHidden_R_boolean) ((void **) nullCheck(ctx, self)->vtable)[VTABLE_mindustry_world_Block_isHidden_R_boolean])(ctx, self);
	if (temp0 != 0) return 0;

	clinit_mindustry_Vars(ctx);
	if (SF_mindustry_Vars_state && ((mindustry_core_GameState *) SF_mindustry_Vars_state)->F_rules) {
		auto rules = (mindustry_game_Rules *) ((mindustry_core_GameState *) SF_mindustry_Vars_state)->F_rules;
		if (rules->F_editor != 0) return 1;
		if (rules->F_hideBannedBlocks == 0) return 1;
	} else {
		return 1;
	}

	jint banned = (jint)((func_mindustry_world_Block_isBanned_R_boolean) ((void **) nullCheck(ctx, self)->vtable)[VTABLE_mindustry_world_Block_isBanned_R_boolean])(ctx, self);
	return banned == 0;
}

jbool M_mindustry_world_Block_isPlaceable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:isPlaceable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1036);
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isBanned_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isBanned_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) == 0) goto label_1;
	}
label_2:;
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((func_mindustry_world_Block_supportsEnv_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_supportsEnv_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_env));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_isBanned_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	clinit_mindustry_Vars(ctx);
	if (!SF_mindustry_Vars_state) return 0;
	auto stateRules = ((mindustry_core_GameState *) SF_mindustry_Vars_state)->F_rules;
	if (!stateRules) return 0;

	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:isBanned", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1041);
	sp[0].o = (jobject)stateRules;
	jint temp0 = (jint)((func_mindustry_game_Rules_isBanned_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_isBanned_mindustry_world_Block_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	clinit_mindustry_Vars(ctx);
	if (!SF_mindustry_Vars_state) return 0;
	auto stateRules = ((mindustry_core_GameState *) SF_mindustry_Vars_state)->F_rules;
	if (!stateRules) return 0;

	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:isOverPlacementLimit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1045);
	sp[0].o = (jobject)stateRules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1046);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_blockLimits;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, (frame[0].o), (jint(0)));
	frame[2].i = temp0;
	LINE_NUMBER(1047);
	if ((frame[2].i) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) < (frame[2].i)) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1049);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_supportsEnv_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:supportsEnv", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1054);
	if ((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envEnabled) & (frame[1].i)) == 0) goto label_1;
	}
	{
	if ((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envDisabled) & (frame[1].i)) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envRequired) == 0) goto label_2;
	}
	{
	if ((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envRequired) & (frame[1].i)) != ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_envRequired)) goto label_1;
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

void M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:buildEditorConfig", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1059);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_onPicked_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:onPicked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1062);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getConfig", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1066);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_blockChanged_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:blockChanged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1070);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:placeBegan", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(1075);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:placeBegan", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1079);
	((func_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(1080);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:placeEnded", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	LINE_NUMBER(1085);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:beforePlaceBegan", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(1090);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_editorPicked_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:editorPicked", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1095);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_isFloor_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:isFloor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1098);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_Floor));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_isOverlay_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:isOverlay", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1102);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_environment_OverlayFloor));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:asFloor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1106);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[0].o)));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_isAir_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:isAir", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1110);
	if (((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id) != 0) goto label_1;
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

jbool M_mindustry_world_Block_canBeBuilt_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:canBeBuilt", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1114);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_hidden;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_debugOnly;
	if (sp[0].o == sp[1].o) goto label_1;
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

jbool M_mindustry_world_Block_environmentBuildable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:environmentBuildable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1118);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_isStatic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:isStatic", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1122);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_cacheLayer;
	clinit_mindustry_graphics_CacheLayer(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_CacheLayer_walls;
	if (sp[0].o != sp[1].o) goto label_1;
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

jobject M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:findConsumer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1126);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumers;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp[0].o = (jobject)SM_arc_util_Structs_find_Array1_java_lang_Object_arc_func_Boolf_R_java_lang_Object(ctx, sp[0].o, (frame[1].o));
	sp[0].o = checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:hasConsumer", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1130);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:removeConsumer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1134);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumers;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1135);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You can only remove consumers before init(). After init(), all consumers have already been initialized."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(1137);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_removeConsumers_arc_func_Boolf(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:removeConsumers", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1141);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1143);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_11);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1144);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower = (jref) (jobject(nullptr));
	}
label_2:;
	LINE_NUMBER(1146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumeLiquid", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1149);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumeLiquid(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquid);
	init_mindustry_world_consumers_ConsumeLiquid_mindustry_type_Liquid_float(ctx, sp[1].o, (frame[1].o), (frame[2].f));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquid, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumeLiquids", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1153);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumeLiquids(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquids);
	init_mindustry_world_consumers_ConsumeLiquids_Array1_mindustry_type_LiquidStack(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquids, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumePower", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1162);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumePower(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePower);
	init_mindustry_world_consumers_ConsumePower_float_float_boolean(ctx, sp[1].o, (frame[1].f), (jfloat(0)), (jint(0)));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumePower, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumePowerCond", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1167);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumePowerCondition(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePowerCondition);
	init_mindustry_world_consumers_ConsumePowerCondition_float_arc_func_Boolf(ctx, sp[1].o, (frame[1].f), (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumePower, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumePowerDynamic", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1172);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumePowerDynamic(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePowerDynamic);
	init_mindustry_world_consumers_ConsumePowerDynamic_arc_func_Floatf(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumePower, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self, jfloat param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumePowerDynamic", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1177);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumePowerDynamic(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePowerDynamic);
	init_mindustry_world_consumers_ConsumePowerDynamic_float_arc_func_Floatf(ctx, sp[1].o, (frame[1].f), (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumePower, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumePowerBuffered", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1185);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumePower(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumePower);
	init_mindustry_world_consumers_ConsumePower_float_float_boolean(ctx, sp[1].o, (jfloat(0)), (frame[1].f), (jint(1)));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumePower, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumeItem", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1189);
	sp[0].o = (jobject)((func_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumeItem", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1193);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumeItems(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItems);
	sp[2].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_type_ItemStack(ctx);
	sp[3].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[3].o, (frame[1].o), (frame[2].i));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	init_mindustry_world_consumers_ConsumeItems_Array1_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumeItems, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumeItems", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1197);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumeItems(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItems);
	init_mindustry_world_consumers_ConsumeItems_Array1_mindustry_type_ItemStack(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumeItems, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumeCoolant", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1201);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumeCoolant(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeCoolant);
	init_mindustry_world_consumers_ConsumeCoolant_float(ctx, sp[1].o, (frame[1].f));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumeCoolant, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant(jcontext ctx, jobject self, jfloat param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consumeCoolant", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1205);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_consumers_ConsumeCoolant(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeCoolant);
	init_mindustry_world_consumers_ConsumeCoolant_float_boolean_boolean(ctx, sp[1].o, (frame[1].f), (frame[2].i), (frame[3].i));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_consumers_ConsumeCoolant, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:consume", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1209);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_consumers_ConsumePower)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1211);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_12(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_12 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_12);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1212);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower = (jref) (checkCast(ctx, &class_mindustry_world_consumers_ConsumePower, (frame[1].o)));
	}
label_1:;
	{
	LINE_NUMBER(1214);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1215);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:setupRequirements", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1219);
	((func_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(1220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:setupRequirements", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1223);
	((func_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	LINE_NUMBER(1224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:requirements", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1227);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BuildVisibility_shown;
	((func_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	LINE_NUMBER(1228);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_alwaysUnlocked = (frame[3].i);
	LINE_NUMBER(1229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:requirements", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1232);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BuildVisibility_shown;
	((func_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].o));
	LINE_NUMBER(1233);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:requirements", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1237);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_category = (jref) (frame[1].o);
	LINE_NUMBER(1238);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements = (jref) (frame[3].o);
	LINE_NUMBER(1239);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildVisibility = (jref) (frame[2].o);
	LINE_NUMBER(1241);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Intf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(ctx, sp[1].o);
	SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_initBuilding(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:initBuilding", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1247);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1249);
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1250);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1253);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_subclass = (jref) (frame[1].o);
	}
label_7:;
	{
	LINE_NUMBER(1255);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildType;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_mindustry_world_Block)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_mindustry_world_Block)), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1257);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredClasses_R_Array1_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getDeclaredClasses_R_Array1_java_lang_Class])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_13(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_13 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_13);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Structs_find_Array1_java_lang_Object_arc_func_Boolf_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(1258);
	if ((frame[2].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(1260);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_java_lang_Class_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getDeclaringClass_R_java_lang_Class])(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1261);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_12(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_12 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_12);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildType = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(1271);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1272);
	goto label_7;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1275);
	goto label_14;
label_2:;
	LINE_NUMBER(1274);
	INST_ASTORE(1);
label_14:;
	{
	LINE_NUMBER(1277);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildType;
	if (sp[0].o != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(1279);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_13(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_13 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_13);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildType = (jref) sp[1].o;
	}
label_15:;
	LINE_NUMBER(1281);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:researchRequirements", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1285);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_researchCost;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_researchCost;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1286);
	if ((floatCompare(((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_researchCostMultiplier), (jfloat(0)), 1)) > 0) goto label_2;
	}
	clinit_mindustry_type_ItemStack(ctx);
	(sp++)->o = SF_mindustry_type_ItemStack_empty;
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(1287);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (((jarray) nullCheck(ctx, sp[0].o))->length));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1288);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	if ((frame[2].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	LINE_NUMBER(1289);
	jfloat temp0 = (jfloat(60.0f)) * ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_researchCostMultiplier);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)))))->F_amount))), (jfloat(1.11f)));
	jfloat temp2 = (temp1 * (jfloat(20.0f))) * ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_researchCostMultiplier);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_researchCostMultipliers;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_item;
	jfloat temp3 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[0].o, sp[1].o, (jfloat(1)));
	jint temp4 = (jint)SM_arc_math_Mathf_round_float_int_R_int(ctx, (temp0 + (temp2 * temp3)), (10));
	frame[3].i = temp4;
	LINE_NUMBER(1291);
	sp[0].o = frame[1].o;
	jint temp5 = frame[2].i;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	sp[2].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	sp[2].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[2].i)))))->F_item;
	jint temp6 = (jint)SM_mindustry_core_UI_roundAmount_int_R_int(ctx, (frame[3].i));
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[1].o, sp[2].o, temp6);
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	LINE_NUMBER(1288);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1294);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_getDependencies_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getDependencies", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1300);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1301);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1300);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1305);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[0].o));
	LINE_NUMBER(1306);
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[3].o)))->F_optional) == 0) goto label_8;
	}
	goto label_5;
label_8:;
	{
	LINE_NUMBER(1308);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_consumers_ConsumeItems)) == 0) goto label_9;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeItems, (frame[3].o)));
	LINE_NUMBER(1309);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[4].o)))->F_items;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_9;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(1310);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[8].o)))->F_item;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1309);
	INST_IINC(7, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(1321);
	goto label_5;
label_6:;
	LINE_NUMBER(1322);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1326);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_block;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_logicVisible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:logicVisible", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1331);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_hidden;
	if (sp[0].o == sp[1].o) goto label_1;
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

void M_mindustry_world_Block_postInit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:postInit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1337);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_shownPlanets;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1338);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(1339);
	jint temp0 = (jint)((func_mindustry_type_Planet_isLandable_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_type_Planet_isLandable_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1340);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_14(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_14 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_14);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1341);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_shownPlanets;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	}
label_5:;
	LINE_NUMBER(1344);
	goto label_3;
label_1:;
	{
	LINE_NUMBER(1347);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTag;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTag;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(1348);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_category;
	sp[1].o = (jobject)((func_mindustry_type_Category_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_type_Category_name_R_java_lang_String])(ctx, sp[1].o);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_databaseTag = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(1351);
	M_mindustry_ctype_UnlockableContent_postInit(ctx, (frame[0].o));
	LINE_NUMBER(1352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:init", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1358);
	M_mindustry_ctype_Content_init(ctx, (frame[0].o));
	LINE_NUMBER(1360);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_destroySound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unset;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(1361);
	sp[0].o = frame[0].o;
	LINE_NUMBER(1362);
	sp += 1;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) < (jint(3))) goto label_5;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_blockExplode3;
	goto label_6;
label_5:;
	{
	LINE_NUMBER(1363);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) < (jint(2))) goto label_7;
	}
	{
	clinit_arc_audio_RandomSound(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_RandomSound);
	sp[1].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Sounds_blockExplode2;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Sounds_blockExplode2Alt;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	init_arc_audio_RandomSound_Array1_arc_audio_Sound(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1364);
	clinit_arc_audio_RandomSound(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_RandomSound);
	sp[1].o = (jobject)createArray(ctx, &class_arc_audio_Sound, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_gen_Sounds(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Sounds_blockExplode1;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_gen_Sounds(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Sounds_blockExplode1Alt;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	init_arc_audio_RandomSound_Array1_arc_audio_Sound(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_6:;
	sp -= 2;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_destroySound = (jref) sp[1].o;
label_2:;
	{
	LINE_NUMBER(1367);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placeSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unset;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	LINE_NUMBER(1368);
	sp[0].o = frame[0].o;
	LINE_NUMBER(1369);
	sp += 1;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) < (jint(3))) goto label_11;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_blockPlace3;
	goto label_12;
label_11:;
	{
	LINE_NUMBER(1370);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) < (jint(2))) goto label_13;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_blockPlace2;
	goto label_12;
label_13:;
	LINE_NUMBER(1371);
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_blockPlace1;
label_12:;
	sp -= 2;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_placeSound = (jref) sp[1].o;
label_8:;
	{
	LINE_NUMBER(1374);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_breakSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unset;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	LINE_NUMBER(1375);
	sp[0].o = frame[0].o;
	LINE_NUMBER(1376);
	sp += 1;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) < (jint(3))) goto label_17;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_blockBreak3;
	goto label_18;
label_17:;
	{
	LINE_NUMBER(1377);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) < (jint(2))) goto label_19;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_blockBreak2;
	goto label_18;
label_19:;
	LINE_NUMBER(1378);
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_blockBreak1;
label_18:;
	sp -= 2;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_breakSound = (jref) sp[1].o;
label_14:;
	{
	LINE_NUMBER(1382);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_customShadow) == 0) goto label_20;
	}
	{
	LINE_NUMBER(1383);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasShadow = (jint(0));
	}
label_20:;
	{
	LINE_NUMBER(1386);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_underBullets) == 0) goto label_22;
	}
	{
	LINE_NUMBER(1387);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_priority = (jfloat(-2.0f));
	}
label_22:;
	{
	LINE_NUMBER(1390);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_fogRadius) <= 0) goto label_24;
	}
	{
	LINE_NUMBER(1391);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_flags;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_hasFogRadius;
	sp[1].o = (jobject)((func_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags = (jref) sp[1].o;
	}
label_24:;
	{
	LINE_NUMBER(1394);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_sync) == 0) goto label_26;
	}
	{
	LINE_NUMBER(1395);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_flags;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_synced;
	sp[1].o = (jobject)((func_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_EnumSet_with_java_lang_Enum_R_arc_struct_EnumSet])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags = (jref) sp[1].o;
	}
label_26:;
	{
	LINE_NUMBER(1399);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_health) != (jint(-1))) goto label_28;
	}
	{
	LINE_NUMBER(1400);
	frame[1].i = (jint(0));
	LINE_NUMBER(1401);
	if ((floatCompare(((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_scaledHealth), (jfloat(0)), 1)) >= 0) goto label_31;
	}
	{
	LINE_NUMBER(1402);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_scaledHealth = (jfloat(40.0f));
	LINE_NUMBER(1404);
	frame[2].f = (jfloat(1));
	LINE_NUMBER(1405);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_35:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_36;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1406);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	frame[2].f = (temp0 + ((jfloat)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_healthScaling));
	LINE_NUMBER(1405);
	INST_IINC(5, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(1409);
	sp[0].o = frame[0].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_scaledHealth = (((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_scaledHealth) * (frame[2].f));
	LINE_NUMBER(1410);
	frame[1].i = (jint(1));
	}
label_31:;
	{
	LINE_NUMBER(1413);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_40;
	}
	{
	LINE_NUMBER(1414);
	jint temp0 = (jint)SM_arc_math_Mathf_round_float_int_R_int(ctx, ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) * ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_scaledHealth)), (jint(5)));
	sp[0].i = temp0;
	sp += 1;
	goto label_42;
	}
label_40:;
	{
	LINE_NUMBER(1415);
	jint temp0 = jint(((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size)))) * ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_scaledHealth)));
	sp[0].i = temp0;
	sp += 1;
	}
label_42:;
	sp -= 2;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_health = sp[1].i;
label_28:;
	{
	LINE_NUMBER(1418);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_clipSize), (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) * (8)))));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_clipSize = temp0;
	LINE_NUMBER(1420);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightClipSize), ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_clipSize));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightClipSize = temp1;
	LINE_NUMBER(1422);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasLiquids) == 0) goto label_45;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_drawLiquidLight) == 0) goto label_45;
	}
	{
	LINE_NUMBER(1423);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_emitLight = (jint(1));
	LINE_NUMBER(1424);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightClipSize), (((jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size))) * (jfloat(30.0f))) * (jfloat(2))));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightClipSize = temp0;
	}
label_45:;
	{
	LINE_NUMBER(1428);
	if ((floatCompare(((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidCapacity), (jfloat(0)), 1)) >= 0) goto label_48;
	}
	{
	LINE_NUMBER(1429);
	frame[1].f = (jfloat(1));
	LINE_NUMBER(1430);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_51:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_52;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[0].o));
	LINE_NUMBER(1431);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_consumers_ConsumeLiquidBase)) == 0) goto label_54;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquidBase, (frame[3].o)));
	LINE_NUMBER(1432);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[1].f), (((jfloat)((mindustry_world_consumers_ConsumeLiquidBase *) NULL_CHECK((frame[4].o)))->F_amount) * (jfloat(60.0f))));
	frame[1].f = temp0;
	goto label_56;
	}
label_54:;
	{
	LINE_NUMBER(1433);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_consumers_ConsumeLiquids)) == 0) goto label_56;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquids, (frame[3].o)));
	LINE_NUMBER(1434);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeLiquids *) NULL_CHECK((frame[5].o)))->F_liquids;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_58:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_56;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(1435);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[1].f), (((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[9].o)))->F_amount) * (jfloat(60.0f))));
	frame[1].f = temp0;
	LINE_NUMBER(1434);
	INST_IINC(8, 1);
	goto label_58;
	}
label_56:;
	LINE_NUMBER(1438);
	goto label_51;
label_52:;
	{
	LINE_NUMBER(1439);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, ((jfloat(10.0f)) * (frame[1].f)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidCapacity = (jfloat(temp0));
	}
label_48:;
	{
	LINE_NUMBER(1442);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_emitLight) == 0) goto label_61;
	}
	{
	LINE_NUMBER(1443);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightClipSize), (((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lightRadius) * (jfloat(2))));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_lightClipSize = temp0;
	}
label_61:;
	{
	LINE_NUMBER(1446);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_group;
	clinit_mindustry_world_meta_BlockGroup(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockGroup_transportation;
	if (sp[0].o == sp[1].o) goto label_63;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_category;
	clinit_mindustry_type_Category(ctx);
	sp[1].o = (jobject)SF_mindustry_type_Category_distribution;
	if (sp[0].o != sp[1].o) goto label_64;
	}
label_63:;
	{
	LINE_NUMBER(1447);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_acceptsItems = (jint(1));
	}
label_64:;
	{
	LINE_NUMBER(1450);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset = ((jfloat((((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))) % (jint(2))) * (8)))) / (jfloat(2)));
	LINE_NUMBER(1451);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_sizeOffset = (-((((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size) - (jint(1))) / (jint(2))));
	LINE_NUMBER(1453);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_67;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildTime), (jfloat(0)), 1)) >= 0) goto label_67;
	}
	{
	LINE_NUMBER(1454);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildTime = (jfloat(0));
	LINE_NUMBER(1455);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_70:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_67;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(1456);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildTime;
	jfloat temp1 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_amount));
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_item;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildTime = (temp0 + (temp1 * ((jfloat)((mindustry_type_Item *) NULL_CHECK(sp[1].o))->F_cost)));
	LINE_NUMBER(1455);
	INST_IINC(3, 1);
	goto label_70;
	}
label_67:;
	{
	LINE_NUMBER(1460);
	if ((floatCompare(((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildTime), (jfloat(0)), 1)) >= 0) goto label_73;
	}
	{
	LINE_NUMBER(1461);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildTime = (jfloat(20.0f));
	}
label_73:;
	{
	LINE_NUMBER(1464);
	sp[0].o = frame[0].o;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildTime = (((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildTime) * ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildCostMultiplier));
	LINE_NUMBER(1466);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_Consume)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumers = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_consumers_Consume, 1), sp[1].o));
	LINE_NUMBER(1467);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_15);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_Consume)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_optionalConsumers = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_consumers_Consume, 1), sp[1].o));
	LINE_NUMBER(1468);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_16(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_16 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_16);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_Consume)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_nonOptionalConsumers = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_consumers_Consume, 1), sp[1].o));
	LINE_NUMBER(1469);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_17(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_17 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_17);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_Consume)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_updateConsumers = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_consumers_Consume, 1), sp[1].o));
	LINE_NUMBER(1470);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp += 1;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_80;
	}
	INST_ICONST(1);
	goto label_81;
label_80:;
	INST_ICONST(0);
label_81:;
	{
	sp -= 2;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasConsumers = sp[1].i;
	LINE_NUMBER(1471);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemFilter = (jref) sp[1].o;
	LINE_NUMBER(1472);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidFilter = (jref) sp[1].o;
	LINE_NUMBER(1474);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumers;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_85:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_86;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(1475);
	((func_mindustry_world_consumers_Consume_apply_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_apply_mindustry_world_Block])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(1474);
	INST_IINC(3, 1);
	goto label_85;
	}
label_86:;
	{
	LINE_NUMBER(1478);
	((func_mindustry_world_Block_setBars) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_setBars])(ctx, (frame[0].o));
	LINE_NUMBER(1482);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_logicConfigurable) != 0) goto label_90;
	}
	{
	LINE_NUMBER(1483);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Cons2_3(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Cons2_3 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Cons2_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	}
label_90:;
	{
	LINE_NUMBER(1490);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outputsPower) != 0) goto label_92;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	if (sp[0].o == nullptr) goto label_92;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered) == 0) goto label_92;
	}
	{
	LINE_NUMBER(1491);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Consumer using buffered power: @. Disabling buffered power."_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1492);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered = (jint(0));
	}
label_92:;
	{
	LINE_NUMBER(1495);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_sandboxOnly;
	if (sp[0].o != sp[1].o) goto label_95;
	}
	{
	LINE_NUMBER(1496);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_hideDetails = (jint(0));
	}
label_95:;
	LINE_NUMBER(1498);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_reinitializeConsumers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:reinitializeConsumers", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1501);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_Consume)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumers = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_consumers_Consume, 1), sp[1].o));
	LINE_NUMBER(1502);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumers;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_18(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_18 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_18);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_find_Array1_java_lang_Object_arc_func_Boolf_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower = (jref) (checkCast(ctx, &class_mindustry_world_consumers_ConsumePower, sp[1].o));
	LINE_NUMBER(1503);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_19(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_19 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_19);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_Consume)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_optionalConsumers = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_consumers_Consume, 1), sp[1].o));
	LINE_NUMBER(1504);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_20(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_20 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_20);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_Consume)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_nonOptionalConsumers = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_consumers_Consume, 1), sp[1].o));
	LINE_NUMBER(1505);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumeBuilder;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Boolf_21(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Boolf_21 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Boolf_21);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_Consume)));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_updateConsumers = (jref) (checkCast(ctx, getArrayClass(&class_mindustry_world_consumers_Consume, 1), sp[1].o));
	LINE_NUMBER(1506);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumers;
	sp += 1;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasConsumers = sp[1].i;
	LINE_NUMBER(1507);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemFilter = (jref) sp[1].o;
	LINE_NUMBER(1508);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[1].o = (jobject) createArray(ctx, &class_boolean, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidFilter = (jref) sp[1].o;
	LINE_NUMBER(1509);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outputsPower) == 0) goto label_11;
	}
	{
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasPower = (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(1511);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consumers;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_12:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_13;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(1512);
	((func_mindustry_world_consumers_Consume_apply_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_apply_mindustry_world_Block])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(1511);
	INST_IINC(3, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(1514);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_checkContentArrayCapacity_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:checkContentArrayCapacity", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1517);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidFilter;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (frame[2].i)) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidFilter;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_boolean_int_R_Array1_boolean(ctx, sp[1].o, (frame[2].i));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_liquidFilter = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(1518);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemFilter;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (frame[1].i)) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemFilter;
	sp[1].o = (jobject)SM_java_util_Arrays_copyOf_Array1_boolean_int_R_Array1_boolean(ctx, sp[1].o, (frame[1].i));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemFilter = (jref) sp[1].o;
	}
label_2:;
	LINE_NUMBER(1519);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:load", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1523);
	M_mindustry_ctype_Content_load(ctx, (frame[0].o));
	LINE_NUMBER(1525);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(1527);
	SM_mindustry_gen_ContentRegions_loadRegions_mindustry_ctype_MappableContent(ctx, (frame[0].o));
	LINE_NUMBER(1530);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_all;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegions = (jref) sp[1].o;
	LINE_NUMBER(1531);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_6;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(1532);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegions;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK((frame[4].o)))->F_id;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[1].o);
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == 0) goto label_8;
	}
	{
	if (((jint)((mindustry_game_Team *) NULL_CHECK((frame[4].o)))->F_hasPalette) == 0) goto label_8;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[4].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-team-\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_Block *) NULL_CHECK(sp[-1].o))->F_teamRegion;
label_9:;
	{
	sp -= 3;
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(1531);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1535);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1536);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variantRegions = (jref) sp[1].o;
	LINE_NUMBER(1538);
	frame[1].i = (jint(0));
	}
label_14:;
	{
	if ((frame[1].i) >= ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants)) goto label_15;
	}
	{
	LINE_NUMBER(1539);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, ((frame[1].i) + (jint(1)))));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1538);
	INST_IINC(1, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(1541);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantRegions;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_region = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))));
	LINE_NUMBER(1543);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_customShadow) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1544);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_variantShadowRegions = (jref) sp[1].o;
	LINE_NUMBER(1545);
	frame[1].i = (jint(0));
	}
label_21:;
	{
	if ((frame[1].i) >= ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variants)) goto label_11;
	}
	{
	LINE_NUMBER(1546);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_variantShadowRegions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-shadow\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, ((frame[1].i) + (jint(1)))));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1545);
	INST_IINC(1, 1);
	goto label_21;
	}
label_11:;
	LINE_NUMBER(1550);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_world_Block_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	auto block = (mindustry_world_Block *) self;
	if (block->F_buildVisibility) {
		jint temp0 = (jint)((func_mindustry_world_meta_BuildVisibility_visible_R_boolean) ((void **) nullCheck(ctx, (jobject)block->F_buildVisibility)->vtable)[VTABLE_mindustry_world_meta_BuildVisibility_visible_R_boolean])(ctx, (jobject)block->F_buildVisibility);
		if (temp0 != 0) return 0;
	}

	clinit_mindustry_Vars(ctx);
	if (SF_mindustry_Vars_state && ((mindustry_core_GameState *) SF_mindustry_Vars_state)->F_rules) {
		auto rules = (mindustry_game_Rules *) ((mindustry_core_GameState *) SF_mindustry_Vars_state)->F_rules;
		if (rules->F_revealedBlocks) {
			jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (jobject)rules->F_revealedBlocks)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, (jobject)rules->F_revealedBlocks, self);
			if (temp0 != 0) return 0;
		}
	}
	return 1;
}

void M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:createIcons", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1559);
	M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1561);
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1562);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1563);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_mapColor;
	jint temp0 = (jint)((func_arc_graphics_g2d_PixmapRegion_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_get_int_int_R_int])(ctx, (frame[2].o), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_width) / (jint(2))), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[2].o)))->F_height) / (jint(2))));
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(1566);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1569);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1570);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_9;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1572);
	if (((jint)((mindustry_game_Team *) NULL_CHECK((frame[6].o)))->F_hasPalette) == 0) goto label_11;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[6].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-team-\u0001"_j.string, 2, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(1573);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1574);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[7].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[7].o)))->F_height));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1576);
	frame[9].i = (jint(0));
	}
label_15:;
	{
	if ((frame[9].i) >= ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[7].o)))->F_width)) goto label_16;
	}
	{
	LINE_NUMBER(1577);
	frame[10].i = (jint(0));
	}
label_18:;
	{
	if ((frame[10].i) >= ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[7].o)))->F_height)) goto label_19;
	}
	{
	LINE_NUMBER(1578);
	jint temp0 = (jint)((func_arc_graphics_g2d_PixmapRegion_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_get_int_int_R_int])(ctx, (frame[7].o), (frame[9].i), (frame[10].i));
	frame[11].i = temp0;
	LINE_NUMBER(1579);
	switch((frame[11].i)) {
		case -1652588545: goto label_22;
		case -1635745537: goto label_22;
		case -607795713: goto label_23;
		case -590952705: goto label_23;
		case -1: goto label_24;
		default: goto label_25;
	}
	}
label_24:;
	{
	LINE_NUMBER(1580);
	jint temp0 = jint(0);
	sp[0].i = temp0;
	sp += 1;
	goto label_26;
	}
label_23:;
	{
	LINE_NUMBER(1581);
	jint temp0 = jint(1);
	sp[0].i = temp0;
	sp += 1;
	goto label_26;
	}
label_22:;
	{
	LINE_NUMBER(1582);
	jint temp0 = jint(2);
	sp[0].i = temp0;
	sp += 1;
	goto label_26;
	}
label_25:;
	LINE_NUMBER(1583);
	INST_ICONST(-1);
label_26:;
	{
	sp -= 1;
	LINE_NUMBER(1584);
	frame[12].i = sp[0].i;
	LINE_NUMBER(1585);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	jint temp1 = frame[10].i;
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if ((frame[12].i) != (jint(-1))) goto label_28;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_g2d_PixmapRegion_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_get_int_int_R_int])(ctx, (frame[7].o), (frame[9].i), (frame[10].i));
	sp[0].i = temp0;
	sp += 1;
	goto label_29;
	}
label_28:;
	{
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[6].o)))->F_palettei;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (frame[12].i));
	sp[0].i = temp0;
	sp += 1;
	}
label_29:;
	{
	sp -= 4;
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, sp[1].i, sp[2].i, sp[3].i);
	LINE_NUMBER(1577);
	INST_IINC(10, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(1576);
	INST_IINC(9, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1589);
	SM_mindustry_graphics_Drawf_checkBleed_arc_graphics_Pixmap(ctx, (frame[8].o));
	LINE_NUMBER(1591);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[6].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-team-\u0001"_j.string, 2, sp[2].o, sp[3].o);
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[8].o));
	LINE_NUMBER(1592);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[8].o));
	}
label_11:;
	{
	LINE_NUMBER(1570);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(1596);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_all;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_teamRegions = (jref) sp[1].o;
	LINE_NUMBER(1597);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_34:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1598);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegions;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK((frame[6].o)))->F_id;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[1].o);
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == 0) goto label_36;
	}
	{
	if (((jint)((mindustry_game_Team *) NULL_CHECK((frame[6].o)))->F_hasPalette) == 0) goto label_36;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[6].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-team-\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_teamRegion;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	goto label_37;
	}
label_36:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_world_Block *) NULL_CHECK(sp[-1].o))->F_teamRegion;
label_37:;
	{
	sp -= 3;
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(1597);
	INST_IINC(5, 1);
	goto label_34;
	}
label_6:;
	{
	LINE_NUMBER(1602);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(1604);
	sp[0].o = (jobject)((func_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1606);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlineIcon) == 0) goto label_41;
	}
	{
	LINE_NUMBER(1607);
	sp[0].o = frame[4].o;
	sp += 1;
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlinedIcon) < 0) goto label_43;
	}
	{
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlinedIcon), ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1))));
	sp[0].i = temp0;
	sp += 1;
	goto label_44;
	}
label_43:;
	{
	jint temp0 = (((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1));
	sp[0].i = temp0;
	sp += 1;
	}
label_44:;
	{
	sp -= 2;
	frame[5].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, sp[1].i))));
	LINE_NUMBER(1608);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_found_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_found_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(1609);
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[1].o), (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1610);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_R_arc_graphics_Pixmap(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlineRadius));
	frame[3].o = sp[0].o;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1611);
	SM_mindustry_graphics_Drawf_checkBleed_arc_graphics_Pixmap(ctx, (frame[7].o));
	LINE_NUMBER(1612);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[2].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_name;
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[7].o));
	LINE_NUMBER(1613);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[7].o));
	}
label_41:;
	{
	LINE_NUMBER(1617);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1618);
	((func_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(1620);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_53:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_54;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o));
	LINE_NUMBER(1621);
	if ((isInstance(ctx, (frame[7].o), &class_arc_graphics_g2d_TextureAtlas$AtlasRegion)) == 0) goto label_56;
	}
	{
	frame[8].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, (frame[7].o)));
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_found_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_found_R_boolean])(ctx, (frame[8].o));
	if (temp0 == 0) goto label_56;
	}
	{
	LINE_NUMBER(1622);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[8].o)))->F_name;
	frame[9].o = sp[0].o;
	LINE_NUMBER(1623);
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[1].o), (frame[7].o));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_R_arc_graphics_Pixmap(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_outlineRadius));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1625);
	SM_mindustry_graphics_Drawf_checkBleed_arc_graphics_Pixmap(ctx, (frame[10].o));
	LINE_NUMBER(1627);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-outline"_j.string, 1, (frame[9].o));
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[10].o));
	LINE_NUMBER(1628);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[10].o));
	}
label_56:;
	LINE_NUMBER(1630);
	goto label_53;
label_54:;
	{
	LINE_NUMBER(1632);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= 0) goto label_63;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))) == nullptr) goto label_63;
	}
	{
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	if (temp0 == 0) goto label_63;
	}
	{
	LINE_NUMBER(1633);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) <= (jint(1))) goto label_65;
	}
	{
	LINE_NUMBER(1634);
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapRegion_crop_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_crop_R_arc_graphics_Pixmap])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1635);
	frame[7].i = (jint(1));
	}
label_68:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_69;
	}
	{
	LINE_NUMBER(1636);
	if ((frame[7].i) != ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1)))) goto label_71;
	}
	INST_ALOAD(3);
	if ((--sp)->o == nullptr) goto label_71;
	{
	LINE_NUMBER(1637);
	((func_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_Pixmap_int_int_boolean])(ctx, (frame[6].o), (frame[3].o), (jint(0)), (jint(0)), (jint(1)));
	goto label_73;
	}
label_71:;
	{
	LINE_NUMBER(1639);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[7].i))));
	((func_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_draw_arc_graphics_g2d_PixmapRegion_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	}
label_73:;
	{
	LINE_NUMBER(1635);
	INST_IINC(7, 1);
	goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(1642);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"block-\u0001-full"_j.string, 1, sp[2].o);
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[6].o));
	LINE_NUMBER(1644);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[6].o));
	LINE_NUMBER(1645);
	goto label_63;
	}
label_65:;
	{
	LINE_NUMBER(1646);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))) == nullptr) goto label_63;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"block-\u0001-full"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_63:;
	{
	LINE_NUMBER(1650);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Cons_5);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1651);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_Block_planRotation_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:planRotation", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1654);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_rotate) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_lockRotation) == 0) goto label_1;
	}
	INST_ICONST(0);
	goto label_2;
label_1:;
	INST_ILOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:flipRotation", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1658);
	jint temp0 = frame[2].i;
	sp[0].i = temp0;
	sp += 1;
	if ((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) % (jint(2))) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	sp -= 2; if (sp[0].i != sp[1].i) goto label_3;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	if (sp[0].i == ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_invertFlip)) goto label_5;
	}
	{
	LINE_NUMBER(1659);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation) + (jint(2))), (jint(4)));
	jint temp1 = (jint)((func_mindustry_world_Block_planRotation_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_planRotation_int_R_int])(ctx, sp[1].o, temp0);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_rotation = temp1;
	}
label_5:;
	LINE_NUMBER(1661);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:getPlanConfigs", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1665);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) &class_mindustry_type_Item)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1666);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(1668);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_configurations;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) &class_mindustry_type_Liquid)));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1669);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquids_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(1671);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1675);
	clinit_mindustry_world_Block$1(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Block$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_2;
		case 4: goto label_3;
		case 5: goto label_4;
		case 6: goto label_5;
		case 7: goto label_6;
		case 8: goto label_7;
		case 9: goto label_8;
		case 10: goto label_9;
		default: goto label_10;
	}
	}
label_1:;
	{
	LINE_NUMBER(1676);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_mapColor;
	jdouble temp0 = (jdouble)((func_arc_graphics_Color_toDoubleBits_R_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toDoubleBits_R_double])(ctx, sp[0].o);
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_2:;
	{
	LINE_NUMBER(1677);
	jdouble temp0 = jdouble(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_health));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_3:;
	{
	LINE_NUMBER(1678);
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_armor));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_4:;
	{
	LINE_NUMBER(1679);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid) == 0) goto label_12;
	}
	INST_DCONST(1);
	goto label_11;
label_12:;
	INST_DCONST(0);
	goto label_11;
label_5:;
	{
	LINE_NUMBER(1680);
	jdouble temp0 = jdouble(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(1681);
	jdouble temp0 = jdouble(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(1682);
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidCapacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(1683);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	if (((jint)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_buffered) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	jdouble temp0 = jdouble(((jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_capacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_13:;
	INST_DCONST(0);
	goto label_11;
label_9:;
	{
	LINE_NUMBER(1684);
	jint temp0 = (jint)((func_mindustry_world_Block_getLogicId_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_getLogicId_R_int])(ctx, (frame[0].o));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_11;
	}
label_10:;
	LINE_NUMBER(1685);
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_11:;
	LINE_NUMBER(1675);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:sense", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1691);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Item)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_type_Item, (frame[1].o)));
	LINE_NUMBER(1692);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_3;
	}
	INST_DCONST(0);
	popStackFrame(ctx);
	INST_DRETURN();
label_3:;
	{
	LINE_NUMBER(1694);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_requirements;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_5;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(1695);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_item;
	if (sp[0].o != (frame[2].o)) goto label_7;
	}
	{
	LINE_NUMBER(1696);
	jfloat temp0 = jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[6].o)))->F_amount));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jint temp1 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 * ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier)));
	popStackFrame(ctx);
	return (jdouble(temp1));
	}
label_7:;
	{
	LINE_NUMBER(1694);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1699);
	popStackFrame(ctx);
	return (jdouble(0));
	}
label_1:;
	{
	LINE_NUMBER(1701);
	popStackFrame(ctx);
	return (jdouble(std::numeric_limits<double>::quiet_NaN()));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:senseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1706);
	sp[0].o = frame[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_name;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1707);
	clinit_mindustry_world_Block(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_Senseable_noSensed;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Block_lambda$reinitializeConsumers$3_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$reinitializeConsumers$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1505);
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_update) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_consumers_Consume_ignore_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_ignore_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool SM_mindustry_world_Block_lambda$reinitializeConsumers$2_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$reinitializeConsumers$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1504);
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_optional) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_consumers_Consume_ignore_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_ignore_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool SM_mindustry_world_Block_lambda$reinitializeConsumers$1_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$reinitializeConsumers$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1503);
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_optional) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_consumers_Consume_ignore_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_ignore_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool SM_mindustry_world_Block_lambda$reinitializeConsumers$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$reinitializeConsumers$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1502);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_world_consumers_ConsumePower));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$init$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1484);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_mindustry_ctype_UnlockableContent)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_mindustry_ctype_UnlockableContent)), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1485);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_logicConfigurable = (jint(1));
	}
label_1:;
	LINE_NUMBER(1487);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Block_lambda$init$2_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$init$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1469);
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_update) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_consumers_Consume_ignore_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_ignore_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool SM_mindustry_world_Block_lambda$init$1_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$init$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1468);
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_optional) != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_consumers_Consume_ignore_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_ignore_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool SM_mindustry_world_Block_lambda$init$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$init$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1467);
	if (((jint)((mindustry_world_consumers_Consume *) NULL_CHECK((frame[0].o)))->F_optional) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_consumers_Consume_ignore_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_consumers_Consume_ignore_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jbool SM_mindustry_world_Block_lambda$postInit$0_mindustry_type_Planet_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$postInit$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1340);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[1].o)))->F_item;
	jint temp0 = (jint)((func_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Item_isOnPlanet_mindustry_type_Planet_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jobject M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$initBuilding$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1263);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[0].o);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_mindustry_gen_Building, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1264);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1265);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Block_lambda$initBuilding$0_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$initBuilding$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1257);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_mindustry_gen_Building)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_mindustry_gen_Building)), (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_Class_isInterface_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_isInterface_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
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

jint SM_mindustry_world_Block_lambda$requirements$0_mindustry_type_ItemStack_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$requirements$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1241);
	sp[0].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	popStackFrame(ctx);
	return ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_id);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Block_lambda$consume$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$consume$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1211);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_world_consumers_ConsumePower));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_Block_lambda$removeConsumers$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$removeConsumers$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1143);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_world_consumers_ConsumePower));
	}

	popStackFrame(ctx);
}

void SM_mindustry_world_Block_lambda$configClear$0_arc_func_Cons_java_lang_Object_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$configClear$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(936);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_gen_Building, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_lambda$setBars$9_mindustry_gen_Building_R_mindustry_type_Liquid(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$setBars$9", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(764);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[0].o = (jobject)((func_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_current_R_mindustry_type_Liquid])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$setBars$5", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(725);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_14(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_14 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_14);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_15(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_15 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_15);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Floatp_5(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Floatp_5 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Floatp_5);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$setBars$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(728);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return ((jfloat(temp0)) / (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity))));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_lambda$setBars$7_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$setBars$7", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	{
	LINE_NUMBER(727);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_items;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_lambda$setBars$6_mindustry_gen_Building_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$setBars$6", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(726);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.items"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	jint temp1 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[3].o);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject self, jbool param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$setBars$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(716);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_16(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_16 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_16);
		proxy->F_field2 = (frame[2].f);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (frame[1].i);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_17(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_17 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_17);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Floatp_6(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Floatp_6 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Floatp_6);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$setBars$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(720);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_consPower;
	jfloat temp0 = (jfloat)((func_mindustry_world_consumers_ConsumePower_requestedPower_mindustry_gen_Building_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_ConsumePower_requestedPower_mindustry_gen_Building_R_float])(ctx, sp[0].o, (frame[1].o));
	jint temp1 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getPowerProduced_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getPowerProduced_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_graph;
	jfloat temp1 = (jfloat)((func_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerGraph_getBatteryStored_R_float])(ctx, sp[0].o);
	if ((floatCompare((temp0 + temp1), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	jfloat temp0 = (jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status;
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_lambda$setBars$3_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$setBars$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	{
	LINE_NUMBER(719);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_powerBar;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_lambda$setBars$2_boolean_mindustry_gen_Building_float_R_java_lang_CharSequence(jcontext ctx, jbool param0, jobject param1, jfloat param2) {
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$setBars$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(717);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.poweramount"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[3].o))->F_status) * (frame[2].f)));
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp += 5;
	if (temp1 == 0) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"<ERROR>"_j));
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_power;
	sp[0].o = (jobject)SM_mindustry_core_UI_formatAmount_long_R_java_lang_String(ctx, (jlong((jint((((jfloat)((mindustry_world_modules_PowerModule *) NULL_CHECK(sp[0].o))->F_status) * (frame[2].f)))))));
	sp += 1;
	}
label_3:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp += 1;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(718);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bar.power"_j))));
	sp += 1;
	}
label_4:;
	LINE_NUMBER(717);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$setBars$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(710);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stat.health"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_health;
	sp[3].o = frame[0].o;
	sp[4].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Floatp_7(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Floatp_7 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Floatp_7);
		proxy->F_field0 = (jref) sp[3].o;
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_java_lang_String_arc_graphics_Color_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$addLiquidBar$3", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(702);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_18(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_18 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_18);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_19(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_19 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_19);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Floatp_8(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Floatp_8 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Floatp_8);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$addLiquidBar$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(705);
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_liquids;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_type_Liquid, sp[1].o)));
	jfloat temp1 = temp0 / ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidCapacity);
	sp[0].f = temp1;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_lambda$addLiquidBar$5_arc_func_Func_mindustry_gen_Building_R_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$addLiquidBar$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_clear;
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_type_Liquid_barColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o)))->vtable)[VTABLE_mindustry_type_Liquid_barColor_R_arc_graphics_Color])(ctx, (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o)));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_lambda$addLiquidBar$4_arc_func_Func_mindustry_gen_Building_R_java_lang_CharSequence(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$addLiquidBar$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	sp[1].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_type_Liquid, sp[1].o)));
	if ((floatCompare(temp0, (jfloat(1,000000e-03f)), 1)) > 0) goto label_2;
	}
label_1:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bar.liquid"_j))));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o))))->F_localizedName;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$addLiquidBar$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(693);
	jint temp0 = (jint)((func_mindustry_type_Liquid_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_Liquid_unlockedNow_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_20(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_20 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_20);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[2].o = frame[1].o;
	LINE_NUMBER(695);
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Prov_21(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Prov_21 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Prov_21);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_Block_invoke_arc_func_Floatp_9(ctx);
		auto proxy = (mindustry_world_Block_invoke_arc_func_Floatp_9 *) gcAlloc(ctx, &class_mindustry_world_Block_invoke_arc_func_Floatp_9);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp += 1;
	}
label_2:;
	LINE_NUMBER(693);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$addLiquidBar$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_liquids;
	jfloat temp0 = (jfloat)((func_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_get_mindustry_type_Liquid_R_float])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return (temp0 / ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_liquidCapacity));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Block_lambda$addLiquidBar$1_mindustry_type_Liquid_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$addLiquidBar$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(694);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$sumAttribute$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(587);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_floating) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_placeableLiquid) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_isDeep_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_isDeep_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_attributes;
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_get_mindustry_world_meta_Attribute_R_float])(ctx, sp[0].o, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$drawPotentialLinks$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_power_BeamNode, sp[0].o));
	LINE_NUMBER(529);
	sp[0].o = (jobject)((mindustry_world_blocks_power_BeamNode *) NULL_CHECK((frame[4].o)))->F_laserColor1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_laserOpacity) * (jfloat(0.5f))));
	LINE_NUMBER(530);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	jfloat temp2 = (jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp3 = (jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jint temp4 = (jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	((func_mindustry_world_blocks_power_BeamNode_drawLaser_float_float_float_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_BeamNode_drawLaser_float_float_float_float_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(532);
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp7 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(2));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(ctx, temp5, temp6, temp7, sp[0].o);
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$drawPotentialLinks$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_power_PowerNode, sp[0].o));
	LINE_NUMBER(521);
	sp[0].o = (jobject)((mindustry_world_blocks_power_PowerNode *) NULL_CHECK((frame[4].o)))->F_laserColor1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, ((clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_laserOpacity) * (jfloat(0.5f))));
	LINE_NUMBER(522);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp1 = (jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_offset);
	jfloat temp2 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	jint temp4 = (jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	((func_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_power_PowerNode_drawLaser_float_float_float_float_int_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(524);
	jfloat temp5 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_x;
	jfloat temp6 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_y;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[3].o)))->F_block;
	jfloat temp7 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) / (jfloat(2))) + (jfloat(2));
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_place;
	SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(ctx, temp5, temp6, temp7, sp[0].o);
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_world_Block_lambda$percentSolid$0_mindustry_world_Tile_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:lambda$percentSolid$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid) != 0) goto label_1;
	}
	INST_FCONST(1);
	goto label_2;
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_world_Block(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_UnlockableContent(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Block:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Block(ctx);
	{
	LINE_NUMBER(439);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_world_Block(ctx);
	SF_mindustry_world_Block_tempTiles = sp[0].o;
	LINE_NUMBER(440);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_world_Block(ctx);
	SF_mindustry_world_Block_tempBuilds = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_Block;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field hasItems
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field hasLiquids
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field hasPower
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

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

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastConfig
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 2);
		fields[24]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
		annotations[1] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field update
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[28]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

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

	fields[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field canPickup
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[65]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	fields[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field itemDrop
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[68]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field destroyBullet
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[78]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lightLiquid
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[80]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field size
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[84]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	fields[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[115]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[118]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[119]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[120]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[121]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[122]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[123]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[124]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[125]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[126]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[127]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[128]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[129]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[130]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[131]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[132]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[133]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[134]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[135]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[136]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[137]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[138]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[139]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[140]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[141]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[142]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[143]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[144]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[145]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[146]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[147]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[148]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[149]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[150]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[151]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[152]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[153]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[154]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[155]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[156]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[157]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[158]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[159]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[160]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[161]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[162]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[163]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[164]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[165]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[166]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[167]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field researchCost
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[168]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field forceTeam
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[169]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[170]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[171]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[172]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[173]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field subclass
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[174]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[175]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field buildType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[176]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field configurations
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[177]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field itemFilter
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[178]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field liquidFilter
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[179]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field consumers
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[180]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field optionalConsumers
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[181]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field nonOptionalConsumers
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[182]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field updateConsumers
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[183]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field hasConsumers
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[184]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field consPower
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 2);
		fields[185]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
		annotations[1] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field barMap
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[186]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	{ // Field consumeBuilder
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[187]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	fields[188]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[189]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[190]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[191]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[192]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[193]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[194]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[195]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[196]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[197]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[198]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[199]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[200]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[85]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[86]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[87]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[88]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[89]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[90]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[91]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[92]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[93]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[94]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[95]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[96]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[97]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[98]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[99]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[100]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[101]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[102]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[103]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[104]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[105]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[106]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[107]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[108]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[109]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[110]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[111]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[112]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[113]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[114]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[115]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[116]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[117]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[118]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[119]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[120]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[121]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[122]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[123]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[124]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[125]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[126]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[127]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[128]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[129]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[130]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[131]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[132]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[133]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[134]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[135]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[136]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[137]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[138]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[139]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[140]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[141]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[142]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[143]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[144]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[145]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[146]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[147]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[148]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[149]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[150]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[151]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[152]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[153]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[154]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[155]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[156]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[157]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[158]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[159]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[160]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[161]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[162]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[163]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[164]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[165]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[166]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[167]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[168]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[169]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[170]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[171]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[172]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_Block[] {
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
	(void *) M_mindustry_world_Block_setStats,
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
	(void *) M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
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
};

static jclass interfaces[] { &class_mindustry_logic_Senseable, };

static FieldMetadata fields[] {
	{ "hasItems", &class_boolean, offsetof(mindustry_world_Block, F_hasItems), "Z", 1 },
	{ "hasLiquids", &class_boolean, offsetof(mindustry_world_Block, F_hasLiquids), "Z", 1 },
	{ "hasPower", &class_boolean, offsetof(mindustry_world_Block, F_hasPower), "Z", 1 },
	{ "outputsLiquid", &class_boolean, offsetof(mindustry_world_Block, F_outputsLiquid), "Z", 1 },
	{ "consumesPower", &class_boolean, offsetof(mindustry_world_Block, F_consumesPower), "Z", 1 },
	{ "outputsPower", &class_boolean, offsetof(mindustry_world_Block, F_outputsPower), "Z", 1 },
	{ "connectedPower", &class_boolean, offsetof(mindustry_world_Block, F_connectedPower), "Z", 1 },
	{ "conductivePower", &class_boolean, offsetof(mindustry_world_Block, F_conductivePower), "Z", 1 },
	{ "outputsPayload", &class_boolean, offsetof(mindustry_world_Block, F_outputsPayload), "Z", 1 },
	{ "acceptsUnitPayloads", &class_boolean, offsetof(mindustry_world_Block, F_acceptsUnitPayloads), "Z", 1 },
	{ "acceptsPayload", &class_boolean, offsetof(mindustry_world_Block, F_acceptsPayload), "Z", 1 },
	{ "acceptsItems", &class_boolean, offsetof(mindustry_world_Block, F_acceptsItems), "Z", 1 },
	{ "alwaysAllowDeposit", &class_boolean, offsetof(mindustry_world_Block, F_alwaysAllowDeposit), "Z", 1 },
	{ "allowedInPayloads", &class_boolean, offsetof(mindustry_world_Block, F_allowedInPayloads), "Z", 1 },
	{ "depositCooldown", &class_float, offsetof(mindustry_world_Block, F_depositCooldown), "F", 1 },
	{ "separateItemCapacity", &class_boolean, offsetof(mindustry_world_Block, F_separateItemCapacity), "Z", 1 },
	{ "itemCapacity", &class_int, offsetof(mindustry_world_Block, F_itemCapacity), "I", 1 },
	{ "liquidCapacity", &class_float, offsetof(mindustry_world_Block, F_liquidCapacity), "F", 1 },
	{ "liquidPressure", &class_float, offsetof(mindustry_world_Block, F_liquidPressure), "F", 1 },
	{ "outputFacing", &class_boolean, offsetof(mindustry_world_Block, F_outputFacing), "Z", 1 },
	{ "noSideBlend", &class_boolean, offsetof(mindustry_world_Block, F_noSideBlend), "Z", 1 },
	{ "displayFlow", &class_boolean, offsetof(mindustry_world_Block, F_displayFlow), "Z", 1 },
	{ "inEditor", &class_boolean, offsetof(mindustry_world_Block, F_inEditor), "Z", 1 },
	{ "editorConfigurable", &class_boolean, offsetof(mindustry_world_Block, F_editorConfigurable), "Z", 1 },
	{ "lastConfig", &class_java_lang_Object, offsetof(mindustry_world_Block, F_lastConfig), "Ljava/lang/Object;", 1 },
	{ "saveConfig", &class_boolean, offsetof(mindustry_world_Block, F_saveConfig), "Z", 1 },
	{ "copyConfig", &class_boolean, offsetof(mindustry_world_Block, F_copyConfig), "Z", 1 },
	{ "clearOnDoubleTap", &class_boolean, offsetof(mindustry_world_Block, F_clearOnDoubleTap), "Z", 1 },
	{ "update", &class_boolean, offsetof(mindustry_world_Block, F_update), "Z", 1 },
	{ "destructible", &class_boolean, offsetof(mindustry_world_Block, F_destructible), "Z", 1 },
	{ "unloadable", &class_boolean, offsetof(mindustry_world_Block, F_unloadable), "Z", 1 },
	{ "isDuct", &class_boolean, offsetof(mindustry_world_Block, F_isDuct), "Z", 1 },
	{ "allowResupply", &class_boolean, offsetof(mindustry_world_Block, F_allowResupply), "Z", 1 },
	{ "solid", &class_boolean, offsetof(mindustry_world_Block, F_solid), "Z", 1 },
	{ "solidifes", &class_boolean, offsetof(mindustry_world_Block, F_solidifes), "Z", 1 },
	{ "teamPassable", &class_boolean, offsetof(mindustry_world_Block, F_teamPassable), "Z", 1 },
	{ "underBullets", &class_boolean, offsetof(mindustry_world_Block, F_underBullets), "Z", 1 },
	{ "rotate", &class_boolean, offsetof(mindustry_world_Block, F_rotate), "Z", 1 },
	{ "rotateDraw", &class_boolean, offsetof(mindustry_world_Block, F_rotateDraw), "Z", 1 },
	{ "rotateDrawEditor", &class_boolean, offsetof(mindustry_world_Block, F_rotateDrawEditor), "Z", 1 },
	{ "visualRotationOffset", &class_float, offsetof(mindustry_world_Block, F_visualRotationOffset), "F", 1 },
	{ "lockRotation", &class_boolean, offsetof(mindustry_world_Block, F_lockRotation), "Z", 1 },
	{ "ignoreLineRotation", &class_boolean, offsetof(mindustry_world_Block, F_ignoreLineRotation), "Z", 1 },
	{ "invertFlip", &class_boolean, offsetof(mindustry_world_Block, F_invertFlip), "Z", 1 },
	{ "variants", &class_int, offsetof(mindustry_world_Block, F_variants), "I", 1 },
	{ "drawArrow", &class_boolean, offsetof(mindustry_world_Block, F_drawArrow), "Z", 1 },
	{ "drawTeamOverlay", &class_boolean, offsetof(mindustry_world_Block, F_drawTeamOverlay), "Z", 1 },
	{ "saveData", &class_boolean, offsetof(mindustry_world_Block, F_saveData), "Z", 1 },
	{ "breakable", &class_boolean, offsetof(mindustry_world_Block, F_breakable), "Z", 1 },
	{ "unitMoveBreakable", &class_boolean, offsetof(mindustry_world_Block, F_unitMoveBreakable), "Z", 1 },
	{ "rebuildable", &class_boolean, offsetof(mindustry_world_Block, F_rebuildable), "Z", 1 },
	{ "privileged", &class_boolean, offsetof(mindustry_world_Block, F_privileged), "Z", 1 },
	{ "requiresWater", &class_boolean, offsetof(mindustry_world_Block, F_requiresWater), "Z", 1 },
	{ "placeableLiquid", &class_boolean, offsetof(mindustry_world_Block, F_placeableLiquid), "Z", 1 },
	{ "placeablePlayer", &class_boolean, offsetof(mindustry_world_Block, F_placeablePlayer), "Z", 1 },
	{ "placeableOn", &class_boolean, offsetof(mindustry_world_Block, F_placeableOn), "Z", 1 },
	{ "insulated", &class_boolean, offsetof(mindustry_world_Block, F_insulated), "Z", 1 },
	{ "squareSprite", &class_boolean, offsetof(mindustry_world_Block, F_squareSprite), "Z", 1 },
	{ "absorbLasers", &class_boolean, offsetof(mindustry_world_Block, F_absorbLasers), "Z", 1 },
	{ "enableDrawStatus", &class_boolean, offsetof(mindustry_world_Block, F_enableDrawStatus), "Z", 1 },
	{ "drawDisabled", &class_boolean, offsetof(mindustry_world_Block, F_drawDisabled), "Z", 1 },
	{ "autoResetEnabled", &class_boolean, offsetof(mindustry_world_Block, F_autoResetEnabled), "Z", 1 },
	{ "noUpdateDisabled", &class_boolean, offsetof(mindustry_world_Block, F_noUpdateDisabled), "Z", 1 },
	{ "updateInUnits", &class_boolean, offsetof(mindustry_world_Block, F_updateInUnits), "Z", 1 },
	{ "alwaysUpdateInUnits", &class_boolean, offsetof(mindustry_world_Block, F_alwaysUpdateInUnits), "Z", 1 },
	{ "canPickup", &class_boolean, offsetof(mindustry_world_Block, F_canPickup), "Z", 131073 },
	{ "deconstructDropAllLiquid", &class_boolean, offsetof(mindustry_world_Block, F_deconstructDropAllLiquid), "Z", 1 },
	{ "useColor", &class_boolean, offsetof(mindustry_world_Block, F_useColor), "Z", 1 },
	{ "itemDrop", &class_mindustry_type_Item, offsetof(mindustry_world_Block, F_itemDrop), "Lmindustry/type/Item;", 1 },
	{ "playerUnmineable", &class_boolean, offsetof(mindustry_world_Block, F_playerUnmineable), "Z", 1 },
	{ "attributes", &class_mindustry_world_blocks_Attributes, offsetof(mindustry_world_Block, F_attributes), "Lmindustry/world/blocks/Attributes;", 1 },
	{ "scaledHealth", &class_float, offsetof(mindustry_world_Block, F_scaledHealth), "F", 1 },
	{ "health", &class_int, offsetof(mindustry_world_Block, F_health), "I", 1 },
	{ "armor", &class_float, offsetof(mindustry_world_Block, F_armor), "F", 1 },
	{ "baseExplosiveness", &class_float, offsetof(mindustry_world_Block, F_baseExplosiveness), "F", 1 },
	{ "explosivenessScale", &class_float, offsetof(mindustry_world_Block, F_explosivenessScale), "F", 1 },
	{ "flammabilityScale", &class_float, offsetof(mindustry_world_Block, F_flammabilityScale), "F", 1 },
	{ "baseShake", &class_float, offsetof(mindustry_world_Block, F_baseShake), "F", 1 },
	{ "destroyBullet", &class_mindustry_entities_bullet_BulletType, offsetof(mindustry_world_Block, F_destroyBullet), "Lmindustry/entities/bullet/BulletType;", 1 },
	{ "destroyBulletSameTeam", &class_boolean, offsetof(mindustry_world_Block, F_destroyBulletSameTeam), "Z", 1 },
	{ "lightLiquid", &class_mindustry_type_Liquid, offsetof(mindustry_world_Block, F_lightLiquid), "Lmindustry/type/Liquid;", 1 },
	{ "drawCracks", &class_boolean, offsetof(mindustry_world_Block, F_drawCracks), "Z", 1 },
	{ "createRubble", &class_boolean, offsetof(mindustry_world_Block, F_createRubble), "Z", 1 },
	{ "floating", &class_boolean, offsetof(mindustry_world_Block, F_floating), "Z", 1 },
	{ "size", &class_int, offsetof(mindustry_world_Block, F_size), "I", 1 },
	{ "offset", &class_float, offsetof(mindustry_world_Block, F_offset), "F", 1 },
	{ "sizeOffset", &class_int, offsetof(mindustry_world_Block, F_sizeOffset), "I", 1 },
	{ "clipSize", &class_float, offsetof(mindustry_world_Block, F_clipSize), "F", 1 },
	{ "lightClipSize", &class_float, offsetof(mindustry_world_Block, F_lightClipSize), "F", 1 },
	{ "placeOverlapRange", &class_float, offsetof(mindustry_world_Block, F_placeOverlapRange), "F", 1 },
	{ "crushDamageMultiplier", &class_float, offsetof(mindustry_world_Block, F_crushDamageMultiplier), "F", 1 },
	{ "crushFragile", &class_boolean, offsetof(mindustry_world_Block, F_crushFragile), "Z", 1 },
	{ "timers", &class_int, offsetof(mindustry_world_Block, F_timers), "I", 1 },
	{ "cacheLayer", &class_mindustry_graphics_CacheLayer, offsetof(mindustry_world_Block, F_cacheLayer), "Lmindustry/graphics/CacheLayer;", 1 },
	{ "drawDynamic", &class_boolean, offsetof(mindustry_world_Block, F_drawDynamic), "Z", 1 },
	{ "drawCached", &class_boolean, offsetof(mindustry_world_Block, F_drawCached), "Z", 1 },
	{ "buildingCacheLayer", &class_mindustry_graphics_BuildingCacheLayer, offsetof(mindustry_world_Block, F_buildingCacheLayer), "Lmindustry/graphics/BuildingCacheLayer;", 1 },
	{ "fillsTile", &class_boolean, offsetof(mindustry_world_Block, F_fillsTile), "Z", 1 },
	{ "forceDark", &class_boolean, offsetof(mindustry_world_Block, F_forceDark), "Z", 1 },
	{ "alwaysReplace", &class_boolean, offsetof(mindustry_world_Block, F_alwaysReplace), "Z", 1 },
	{ "replaceable", &class_boolean, offsetof(mindustry_world_Block, F_replaceable), "Z", 1 },
	{ "group", &class_mindustry_world_meta_BlockGroup, offsetof(mindustry_world_Block, F_group), "Lmindustry/world/meta/BlockGroup;", 1 },
	{ "flags", &class_arc_struct_EnumSet, offsetof(mindustry_world_Block, F_flags), "Larc/struct/EnumSet;", 1 },
	{ "priority", &class_float, offsetof(mindustry_world_Block, F_priority), "F", 1 },
	{ "unitCapModifier", &class_int, offsetof(mindustry_world_Block, F_unitCapModifier), "I", 1 },
	{ "configurable", &class_boolean, offsetof(mindustry_world_Block, F_configurable), "Z", 1 },
	{ "configureSound", &class_arc_audio_Sound, offsetof(mindustry_world_Block, F_configureSound), "Larc/audio/Sound;", 1 },
	{ "ignoreResizeConfig", &class_boolean, offsetof(mindustry_world_Block, F_ignoreResizeConfig), "Z", 1 },
	{ "commandable", &class_boolean, offsetof(mindustry_world_Block, F_commandable), "Z", 1 },
	{ "allowConfigInventory", &class_boolean, offsetof(mindustry_world_Block, F_allowConfigInventory), "Z", 1 },
	{ "diagonalConfigInventory", &class_boolean, offsetof(mindustry_world_Block, F_diagonalConfigInventory), "Z", 1 },
	{ "selectionRows", &class_int, offsetof(mindustry_world_Block, F_selectionRows), "I", 1 },
	{ "selectionColumns", &class_int, offsetof(mindustry_world_Block, F_selectionColumns), "I", 1 },
	{ "logicConfigurable", &class_boolean, offsetof(mindustry_world_Block, F_logicConfigurable), "Z", 1 },
	{ "delayLandingConfig", &class_boolean, offsetof(mindustry_world_Block, F_delayLandingConfig), "Z", 1 },
	{ "consumesTap", &class_boolean, offsetof(mindustry_world_Block, F_consumesTap), "Z", 1 },
	{ "drawLiquidLight", &class_boolean, offsetof(mindustry_world_Block, F_drawLiquidLight), "Z", 1 },
	{ "envRequired", &class_int, offsetof(mindustry_world_Block, F_envRequired), "I", 1 },
	{ "envEnabled", &class_int, offsetof(mindustry_world_Block, F_envEnabled), "I", 1 },
	{ "envDisabled", &class_int, offsetof(mindustry_world_Block, F_envDisabled), "I", 1 },
	{ "sync", &class_boolean, offsetof(mindustry_world_Block, F_sync), "Z", 1 },
	{ "conveyorPlacement", &class_boolean, offsetof(mindustry_world_Block, F_conveyorPlacement), "Z", 1 },
	{ "allowDiagonal", &class_boolean, offsetof(mindustry_world_Block, F_allowDiagonal), "Z", 1 },
	{ "swapDiagonalPlacement", &class_boolean, offsetof(mindustry_world_Block, F_swapDiagonalPlacement), "Z", 1 },
	{ "allowRectanglePlacement", &class_boolean, offsetof(mindustry_world_Block, F_allowRectanglePlacement), "Z", 1 },
	{ "schematicPriority", &class_int, offsetof(mindustry_world_Block, F_schematicPriority), "I", 1 },
	{ "mapColor", &class_arc_graphics_Color, offsetof(mindustry_world_Block, F_mapColor), "Larc/graphics/Color;", 1 },
	{ "hasColor", &class_boolean, offsetof(mindustry_world_Block, F_hasColor), "Z", 1 },
	{ "targetable", &class_boolean, offsetof(mindustry_world_Block, F_targetable), "Z", 1 },
	{ "attacks", &class_boolean, offsetof(mindustry_world_Block, F_attacks), "Z", 1 },
	{ "suppressable", &class_boolean, offsetof(mindustry_world_Block, F_suppressable), "Z", 1 },
	{ "canOverdrive", &class_boolean, offsetof(mindustry_world_Block, F_canOverdrive), "Z", 1 },
	{ "outlineColor", &class_arc_graphics_Color, offsetof(mindustry_world_Block, F_outlineColor), "Larc/graphics/Color;", 1 },
	{ "outlineIcon", &class_boolean, offsetof(mindustry_world_Block, F_outlineIcon), "Z", 1 },
	{ "outlineRadius", &class_int, offsetof(mindustry_world_Block, F_outlineRadius), "I", 1 },
	{ "outlinedIcon", &class_int, offsetof(mindustry_world_Block, F_outlinedIcon), "I", 1 },
	{ "hasShadow", &class_boolean, offsetof(mindustry_world_Block, F_hasShadow), "Z", 1 },
	{ "customShadow", &class_boolean, offsetof(mindustry_world_Block, F_customShadow), "Z", 1 },
	{ "placePitchChange", &class_boolean, offsetof(mindustry_world_Block, F_placePitchChange), "Z", 1 },
	{ "breakPitchChange", &class_boolean, offsetof(mindustry_world_Block, F_breakPitchChange), "Z", 1 },
	{ "placeSound", &class_arc_audio_Sound, offsetof(mindustry_world_Block, F_placeSound), "Larc/audio/Sound;", 1 },
	{ "breakSound", &class_arc_audio_Sound, offsetof(mindustry_world_Block, F_breakSound), "Larc/audio/Sound;", 1 },
	{ "destroySound", &class_arc_audio_Sound, offsetof(mindustry_world_Block, F_destroySound), "Larc/audio/Sound;", 1 },
	{ "destroySoundVolume", &class_float, offsetof(mindustry_world_Block, F_destroySoundVolume), "F", 1 },
	{ "destroyPitchMin", &class_float, offsetof(mindustry_world_Block, F_destroyPitchMin), "F", 1 },
	{ "destroyPitchMax", &class_float, offsetof(mindustry_world_Block, F_destroyPitchMax), "F", 1 },
	{ "albedo", &class_float, offsetof(mindustry_world_Block, F_albedo), "F", 1 },
	{ "lightColor", &class_arc_graphics_Color, offsetof(mindustry_world_Block, F_lightColor), "Larc/graphics/Color;", 1 },
	{ "emitLight", &class_boolean, offsetof(mindustry_world_Block, F_emitLight), "Z", 1 },
	{ "obstructsLight", &class_boolean, offsetof(mindustry_world_Block, F_obstructsLight), "Z", 1 },
	{ "lightRadius", &class_float, offsetof(mindustry_world_Block, F_lightRadius), "F", 1 },
	{ "fogRadius", &class_int, offsetof(mindustry_world_Block, F_fogRadius), "I", 1 },
	{ "ambientSound", &class_arc_audio_Sound, offsetof(mindustry_world_Block, F_ambientSound), "Larc/audio/Sound;", 1 },
	{ "ambientSoundVolume", &class_float, offsetof(mindustry_world_Block, F_ambientSoundVolume), "F", 1 },
	{ "requirements", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_world_Block, F_requirements), "[Lmindustry/type/ItemStack;", 1 },
	{ "category", &class_mindustry_type_Category, offsetof(mindustry_world_Block, F_category), "Lmindustry/type/Category;", 1 },
	{ "buildTime", &class_float, offsetof(mindustry_world_Block, F_buildTime), "F", 1 },
	{ "buildVisibility", &class_mindustry_world_meta_BuildVisibility, offsetof(mindustry_world_Block, F_buildVisibility), "Lmindustry/world/meta/BuildVisibility;", 1 },
	{ "buildCostMultiplier", &class_float, offsetof(mindustry_world_Block, F_buildCostMultiplier), "F", 1 },
	{ "deconstructThreshold", &class_float, offsetof(mindustry_world_Block, F_deconstructThreshold), "F", 1 },
	{ "instantDeconstruct", &class_boolean, offsetof(mindustry_world_Block, F_instantDeconstruct), "Z", 1 },
	{ "instantBuild", &class_boolean, offsetof(mindustry_world_Block, F_instantBuild), "Z", 1 },
	{ "ignoreBuildDarkness", &class_boolean, offsetof(mindustry_world_Block, F_ignoreBuildDarkness), "Z", 1 },
	{ "placeEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_Block, F_placeEffect), "Lmindustry/entities/Effect;", 1 },
	{ "breakEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_Block, F_breakEffect), "Lmindustry/entities/Effect;", 1 },
	{ "destroyEffect", &class_mindustry_entities_Effect, offsetof(mindustry_world_Block, F_destroyEffect), "Lmindustry/entities/Effect;", 1 },
	{ "researchCostMultiplier", &class_float, offsetof(mindustry_world_Block, F_researchCostMultiplier), "F", 1 },
	{ "researchCostMultipliers", &class_arc_struct_ObjectFloatMap, offsetof(mindustry_world_Block, F_researchCostMultipliers), "Larc/struct/ObjectFloatMap;", 1 },
	{ "researchCost", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_world_Block, F_researchCost), "[Lmindustry/type/ItemStack;", 1 },
	{ "forceTeam", &class_mindustry_game_Team, offsetof(mindustry_world_Block, F_forceTeam), "Lmindustry/game/Team;", 1 },
	{ "instantTransfer", &class_boolean, offsetof(mindustry_world_Block, F_instantTransfer), "Z", 1 },
	{ "maxConsecutive", &class_int, offsetof(mindustry_world_Block, F_maxConsecutive), "I", 1 },
	{ "quickRotate", &class_boolean, offsetof(mindustry_world_Block, F_quickRotate), "Z", 1 },
	{ "allowDerelictRepair", &class_boolean, offsetof(mindustry_world_Block, F_allowDerelictRepair), "Z", 1 },
	{ "subclass", &class_java_lang_Class, offsetof(mindustry_world_Block, F_subclass), "Ljava/lang/Class;", 1 },
	{ "selectScroll", &class_float, offsetof(mindustry_world_Block, F_selectScroll), "F", 1 },
	{ "buildType", &class_arc_func_Prov, offsetof(mindustry_world_Block, F_buildType), "Larc/func/Prov;", 1 },
	{ "configurations", &class_arc_struct_ObjectMap, offsetof(mindustry_world_Block, F_configurations), "Larc/struct/ObjectMap;", 1 },
	{ "itemFilter", getArrayClass(&class_boolean, 1), offsetof(mindustry_world_Block, F_itemFilter), "[Z", 1 },
	{ "liquidFilter", getArrayClass(&class_boolean, 1), offsetof(mindustry_world_Block, F_liquidFilter), "[Z", 1 },
	{ "consumers", getArrayClass(&class_mindustry_world_consumers_Consume, 1), offsetof(mindustry_world_Block, F_consumers), "[Lmindustry/world/consumers/Consume;", 1 },
	{ "optionalConsumers", getArrayClass(&class_mindustry_world_consumers_Consume, 1), offsetof(mindustry_world_Block, F_optionalConsumers), "[Lmindustry/world/consumers/Consume;", 1 },
	{ "nonOptionalConsumers", getArrayClass(&class_mindustry_world_consumers_Consume, 1), offsetof(mindustry_world_Block, F_nonOptionalConsumers), "[Lmindustry/world/consumers/Consume;", 1 },
	{ "updateConsumers", getArrayClass(&class_mindustry_world_consumers_Consume, 1), offsetof(mindustry_world_Block, F_updateConsumers), "[Lmindustry/world/consumers/Consume;", 1 },
	{ "hasConsumers", &class_boolean, offsetof(mindustry_world_Block, F_hasConsumers), "Z", 1 },
	{ "consPower", &class_mindustry_world_consumers_ConsumePower, offsetof(mindustry_world_Block, F_consPower), "Lmindustry/world/consumers/ConsumePower;", 1 },
	{ "barMap", &class_arc_struct_OrderedMap, offsetof(mindustry_world_Block, F_barMap), "Larc/struct/OrderedMap;", 4 },
	{ "consumeBuilder", &class_arc_struct_Seq, offsetof(mindustry_world_Block, F_consumeBuilder), "Larc/struct/Seq;", 4 },
	{ "generatedIcons", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_Block, F_generatedIcons), "[Larc/graphics/g2d/TextureRegion;", 4 },
	{ "regionRotated1", &class_int, offsetof(mindustry_world_Block, F_regionRotated1), "I", 1 },
	{ "regionRotated2", &class_int, offsetof(mindustry_world_Block, F_regionRotated2), "I", 1 },
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_Block, F_region), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "customShadowRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_Block, F_customShadowRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "teamRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_world_Block, F_teamRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "teamRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_Block, F_teamRegions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "variantRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_Block, F_variantRegions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "variantShadowRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_world_Block, F_variantShadowRegions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "tempTiles", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_world_Block_tempTiles, "Larc/struct/Seq;", 28 },
	{ "tempBuilds", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_world_Block_tempBuilds, "Larc/struct/Seq;", 28 },
	{ "timerDump", &class_int, offsetof(mindustry_world_Block, F_timerDump), "I", 20 },
	{ "dumpTime", &class_int, offsetof(mindustry_world_Block, F_dumpTime), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_Block_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "drawBase", (intptr_t) M_mindustry_world_Block_drawBase_mindustry_world_Tile, VTABLE_mindustry_world_Block_drawBase_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "drawBaseCached", (intptr_t) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile, VTABLE_mindustry_world_Block_drawBaseCached_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "drawShadow", (intptr_t) M_mindustry_world_Block_drawShadow_mindustry_world_Tile, VTABLE_mindustry_world_Block_drawShadow_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "percentSolid", (intptr_t) M_mindustry_world_Block_percentSolid_int_int_R_float, VTABLE_mindustry_world_Block_percentSolid_int_int_R_float, "(II)F", 1 },
	{ "drawEnvironmentLight", (intptr_t) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile, VTABLE_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_Block_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_Block_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "drawSideRegion", (intptr_t) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int, VTABLE_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int, "(Larc/graphics/g2d/TextureRegion;FFI)V", 1 },
	{ "drawPotentialLinks", (intptr_t) M_mindustry_world_Block_drawPotentialLinks_int_int, VTABLE_mindustry_world_Block_drawPotentialLinks_int_int, "(II)V", 1 },
	{ "drawPlaceText", (intptr_t) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float, VTABLE_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float, "(Ljava/lang/String;IIZ)F", 1 },
	{ "drawPlaceText", (intptr_t) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float, VTABLE_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float, "(Ljava/lang/String;IILarc/graphics/Color;Z)F", 1 },
	{ "drawOverlay", (intptr_t) M_mindustry_world_Block_drawOverlay_float_float_int, VTABLE_mindustry_world_Block_drawOverlay_float_float_int, "(FFI)V", 1 },
	{ "displayShadow", (intptr_t) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "sumAttribute", (intptr_t) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float, VTABLE_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float, "(Lmindustry/world/meta/Attribute;II)F", 1 },
	{ "getDisplayIcon", (intptr_t) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion, "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "getDisplayName", (intptr_t) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String, VTABLE_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String, "(Lmindustry/world/Tile;)Ljava/lang/String;", 1 },
	{ "minimapColor", (intptr_t) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int, VTABLE_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int, "(Lmindustry/world/Tile;)I", 1 },
	{ "getColor", (intptr_t) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color, VTABLE_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color, "(Lmindustry/world/Tile;)Larc/graphics/Color;", 1 },
	{ "outputsItems", (intptr_t) M_mindustry_world_Block_outputsItems_R_boolean, VTABLE_mindustry_world_Block_outputsItems_R_boolean, "()Z", 1 },
	{ "canPlaceOn", (intptr_t) M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean, VTABLE_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean, "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z", 1 },
	{ "canBreak", (intptr_t) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "rotatedOutput", (intptr_t) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean, VTABLE_mindustry_world_Block_rotatedOutput_int_int_R_boolean, "(II)Z", 1 },
	{ "rotatedOutput", (intptr_t) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean, "(IILmindustry/world/Tile;)Z", 1 },
	{ "synthetic", (intptr_t) M_mindustry_world_Block_synthetic_R_boolean, VTABLE_mindustry_world_Block_synthetic_R_boolean, "()Z", 1 },
	{ "checkForceDark", (intptr_t) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "isDarkened", (intptr_t) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean, VTABLE_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 1 },
	{ "setStats", (intptr_t) M_mindustry_world_Block_setStats, VTABLE_mindustry_world_Block_setStats, "()V", 1 },
	{ "addBar", (intptr_t) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func, VTABLE_mindustry_world_Block_addBar_java_lang_String_arc_func_Func, "(Ljava/lang/String;Larc/func/Func;)V", 1 },
	{ "removeBar", (intptr_t) M_mindustry_world_Block_removeBar_java_lang_String, VTABLE_mindustry_world_Block_removeBar_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "listBars", (intptr_t) M_mindustry_world_Block_listBars_R_java_lang_Iterable, VTABLE_mindustry_world_Block_listBars_R_java_lang_Iterable, "()Ljava/lang/Iterable;", 1 },
	{ "addLiquidBar", (intptr_t) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid, VTABLE_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid, "(Lmindustry/type/Liquid;)V", 1 },
	{ "addLiquidBar", (intptr_t) M_mindustry_world_Block_addLiquidBar_arc_func_Func, VTABLE_mindustry_world_Block_addLiquidBar_arc_func_Func, "(Larc/func/Func;)V", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_Block_setBars, VTABLE_mindustry_world_Block_setBars, "()V", 1 },
	{ "afterPatch", (intptr_t) M_mindustry_world_Block_afterPatch, VTABLE_mindustry_world_Block_afterPatch, "()V", 1 },
	{ "consumesItem", (intptr_t) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean, VTABLE_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean, "(Lmindustry/type/Item;)Z", 1 },
	{ "consumesLiquid", (intptr_t) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean, VTABLE_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean, "(Lmindustry/type/Liquid;)Z", 1 },
	{ "canReplace", (intptr_t) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean, VTABLE_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 1 },
	{ "getReplacement", (intptr_t) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block, VTABLE_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block, "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;", 1 },
	{ "changePlacementPath", (intptr_t) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean, VTABLE_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean, "(Larc/struct/Seq;IZ)V", 1 },
	{ "changePlacementPath", (intptr_t) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int, VTABLE_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int, "(Larc/struct/Seq;I)V", 1 },
	{ "handlePlacementLine", (intptr_t) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq, VTABLE_mindustry_world_Block_handlePlacementLine_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "configSenseable", (intptr_t) M_mindustry_world_Block_configSenseable_R_boolean, VTABLE_mindustry_world_Block_configSenseable_R_boolean, "()Z", 1 },
	{ "nextConfig", (intptr_t) M_mindustry_world_Block_nextConfig_R_java_lang_Object, VTABLE_mindustry_world_Block_nextConfig_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "onNewPlan", (intptr_t) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan, VTABLE_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;)V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean, VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V", 1 },
	{ "drawPlan", (intptr_t) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float, VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V", 1 },
	{ "drawOtherPlayerPlan", (intptr_t) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float, VTABLE_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V", 1 },
	{ "drawPlanRegion", (intptr_t) M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "drawDefaultPlanRegion", (intptr_t) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "findPlan", (intptr_t) SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan, 0, "(Larc/util/Eachable;IILarc/func/Boolf;)Lmindustry/entities/units/BuildPlan;", 9 },
	{ "findPlan", (intptr_t) SM_mindustry_world_Block_findPlan_arc_util_Eachable_int_int_int_arc_func_Boolf_R_mindustry_entities_units_BuildPlan, 0, "(Larc/util/Eachable;IIILarc/func/Boolf;)Lmindustry/entities/units/BuildPlan;", 9 },
	{ "getPlanRegion", (intptr_t) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;", 1 },
	{ "drawPlanConfig", (intptr_t) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "drawPlanConfigCenter", (intptr_t) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean, VTABLE_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean, "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V", 1 },
	{ "drawPlanConfigCenter", (intptr_t) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String, VTABLE_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String, "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V", 1 },
	{ "drawPlanConfigTop", (intptr_t) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable, VTABLE_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable, "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V", 1 },
	{ "planConfigClipSize", (intptr_t) M_mindustry_world_Block_planConfigClipSize_R_float, VTABLE_mindustry_world_Block_planConfigClipSize_R_float, "()F", 1 },
	{ "pointConfig", (intptr_t) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object, VTABLE_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object, "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;", 1 },
	{ "configClear", (intptr_t) M_mindustry_world_Block_configClear_arc_func_Cons, VTABLE_mindustry_world_Block_configClear_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "config", (intptr_t) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2, VTABLE_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2, "(Ljava/lang/Class;Larc/func/Cons2;)V", 1 },
	{ "isAccessible", (intptr_t) M_mindustry_world_Block_isAccessible_R_boolean, VTABLE_mindustry_world_Block_isAccessible_R_boolean, "()Z", 1 },
	{ "nearbySide", (intptr_t) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2, VTABLE_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2, "(IIIILarc/math/geom/Point2;)V", 1 },
	{ "getEdges", (intptr_t) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2, VTABLE_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2, "()[Larc/math/geom/Point2;", 1 },
	{ "getInsideEdges", (intptr_t) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2, VTABLE_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2, "()[Larc/math/geom/Point2;", 1 },
	{ "iterateTaken", (intptr_t) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2, VTABLE_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2, "(IILarc/func/Intc2;)V", 1 },
	{ "makeIconRegions", (intptr_t) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "icons", (intptr_t) M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 4 },
	{ "getRegionsToOutline", (intptr_t) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq, VTABLE_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "getGeneratedIcons", (intptr_t) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "resetGeneratedIcons", (intptr_t) M_mindustry_world_Block_resetGeneratedIcons, VTABLE_mindustry_world_Block_resetGeneratedIcons, "()V", 1 },
	{ "variantRegions", (intptr_t) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion, VTABLE_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion, "()[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "hasBuilding", (intptr_t) M_mindustry_world_Block_hasBuilding_R_boolean, VTABLE_mindustry_world_Block_hasBuilding_R_boolean, "()Z", 1 },
	{ "newBuilding", (intptr_t) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building, VTABLE_mindustry_world_Block_newBuilding_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 17 },
	{ "updateClipRadius", (intptr_t) M_mindustry_world_Block_updateClipRadius_float, VTABLE_mindustry_world_Block_updateClipRadius_float, "(F)V", 1 },
	{ "bounds", (intptr_t) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect, VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect, "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;", 1 },
	{ "isMultiblock", (intptr_t) M_mindustry_world_Block_isMultiblock_R_boolean, VTABLE_mindustry_world_Block_isMultiblock_R_boolean, "()Z", 1 },
	{ "isVisible", (intptr_t) M_mindustry_world_Block_isVisible_R_boolean, VTABLE_mindustry_world_Block_isVisible_R_boolean, "()Z", 1 },
	{ "isPlaceable", (intptr_t) M_mindustry_world_Block_isPlaceable_R_boolean, VTABLE_mindustry_world_Block_isPlaceable_R_boolean, "()Z", 1 },
	{ "isBanned", (intptr_t) M_mindustry_world_Block_isBanned_R_boolean, VTABLE_mindustry_world_Block_isBanned_R_boolean, "()Z", 1 },
	{ "isOverPlacementLimit", (intptr_t) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean, VTABLE_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1 },
	{ "supportsEnv", (intptr_t) M_mindustry_world_Block_supportsEnv_int_R_boolean, VTABLE_mindustry_world_Block_supportsEnv_int_R_boolean, "(I)Z", 1 },
	{ "buildEditorConfig", (intptr_t) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table, VTABLE_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "onPicked", (intptr_t) M_mindustry_world_Block_onPicked_mindustry_world_Tile, VTABLE_mindustry_world_Block_onPicked_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "getConfig", (intptr_t) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object, VTABLE_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object, "(Lmindustry/world/Tile;)Ljava/lang/Object;", 1 },
	{ "blockChanged", (intptr_t) M_mindustry_world_Block_blockChanged_mindustry_world_Tile, VTABLE_mindustry_world_Block_blockChanged_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "placeBegan", (intptr_t) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block, VTABLE_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block, "(Lmindustry/world/Tile;Lmindustry/world/Block;)V", 1 },
	{ "placeBegan", (intptr_t) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit, VTABLE_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V", 1 },
	{ "placeEnded", (intptr_t) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object, VTABLE_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object, "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V", 1 },
	{ "beforePlaceBegan", (intptr_t) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block, VTABLE_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block, "(Lmindustry/world/Tile;Lmindustry/world/Block;)V", 1 },
	{ "editorPicked", (intptr_t) M_mindustry_world_Block_editorPicked_mindustry_world_Tile, VTABLE_mindustry_world_Block_editorPicked_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 1 },
	{ "isFloor", (intptr_t) M_mindustry_world_Block_isFloor_R_boolean, VTABLE_mindustry_world_Block_isFloor_R_boolean, "()Z", 1 },
	{ "isOverlay", (intptr_t) M_mindustry_world_Block_isOverlay_R_boolean, VTABLE_mindustry_world_Block_isOverlay_R_boolean, "()Z", 1 },
	{ "asFloor", (intptr_t) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor, VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor, "()Lmindustry/world/blocks/environment/Floor;", 1 },
	{ "isAir", (intptr_t) M_mindustry_world_Block_isAir_R_boolean, VTABLE_mindustry_world_Block_isAir_R_boolean, "()Z", 1 },
	{ "canBeBuilt", (intptr_t) M_mindustry_world_Block_canBeBuilt_R_boolean, VTABLE_mindustry_world_Block_canBeBuilt_R_boolean, "()Z", 1 },
	{ "environmentBuildable", (intptr_t) M_mindustry_world_Block_environmentBuildable_R_boolean, VTABLE_mindustry_world_Block_environmentBuildable_R_boolean, "()Z", 1 },
	{ "isStatic", (intptr_t) M_mindustry_world_Block_isStatic_R_boolean, VTABLE_mindustry_world_Block_isStatic_R_boolean, "()Z", 1 },
	{ "findConsumer", (intptr_t) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume, VTABLE_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume, "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;", 1 },
	{ "hasConsumer", (intptr_t) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean, VTABLE_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean, "(Lmindustry/world/consumers/Consume;)Z", 1 },
	{ "removeConsumer", (intptr_t) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume, VTABLE_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume, "(Lmindustry/world/consumers/Consume;)V", 1 },
	{ "removeConsumers", (intptr_t) M_mindustry_world_Block_removeConsumers_arc_func_Boolf, VTABLE_mindustry_world_Block_removeConsumers_arc_func_Boolf, "(Larc/func/Boolf;)V", 1 },
	{ "consumeLiquid", (intptr_t) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid, VTABLE_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid, "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;", 1 },
	{ "consumeLiquids", (intptr_t) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids, VTABLE_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids, "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;", 129 },
	{ "consumePower", (intptr_t) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower, VTABLE_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower, "(F)Lmindustry/world/consumers/ConsumePower;", 1 },
	{ "consumePowerCond", (intptr_t) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower, VTABLE_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower, "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;", 1 },
	{ "consumePowerDynamic", (intptr_t) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower, VTABLE_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower, "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;", 1 },
	{ "consumePowerDynamic", (intptr_t) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower, VTABLE_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower, "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;", 1 },
	{ "consumePowerBuffered", (intptr_t) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower, VTABLE_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower, "(F)Lmindustry/world/consumers/ConsumePower;", 1 },
	{ "consumeItem", (intptr_t) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems, VTABLE_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems, "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;", 1 },
	{ "consumeItem", (intptr_t) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems, VTABLE_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems, "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;", 1 },
	{ "consumeItems", (intptr_t) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems, VTABLE_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems, "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;", 129 },
	{ "consumeCoolant", (intptr_t) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant, VTABLE_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant, "(F)Lmindustry/world/consumers/ConsumeCoolant;", 1 },
	{ "consumeCoolant", (intptr_t) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant, VTABLE_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant, "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;", 1 },
	{ "consume", (intptr_t) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume, VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume, "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;", 1 },
	{ "setupRequirements", (intptr_t) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack, VTABLE_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack, "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V", 1 },
	{ "setupRequirements", (intptr_t) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack, VTABLE_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack, "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V", 1 },
	{ "requirements", (intptr_t) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean, VTABLE_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean, "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V", 1 },
	{ "requirements", (intptr_t) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack, VTABLE_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack, "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V", 1 },
	{ "requirements", (intptr_t) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack, VTABLE_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack, "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V", 1 },
	{ "initBuilding", (intptr_t) M_mindustry_world_Block_initBuilding, VTABLE_mindustry_world_Block_initBuilding, "()V", 4 },
	{ "researchRequirements", (intptr_t) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack, VTABLE_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack, "()[Lmindustry/type/ItemStack;", 1 },
	{ "getDependencies", (intptr_t) M_mindustry_world_Block_getDependencies_arc_func_Cons, VTABLE_mindustry_world_Block_getDependencies_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "getContentType", (intptr_t) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "logicVisible", (intptr_t) M_mindustry_world_Block_logicVisible_R_boolean, VTABLE_mindustry_world_Block_logicVisible_R_boolean, "()Z", 1 },
	{ "postInit", (intptr_t) M_mindustry_world_Block_postInit, VTABLE_mindustry_world_Block_postInit, "()V", 1 },
	{ "init", (intptr_t) M_mindustry_world_Block_init, VTABLE_mindustry_world_Block_init, "()V", 1 },
	{ "reinitializeConsumers", (intptr_t) M_mindustry_world_Block_reinitializeConsumers, VTABLE_mindustry_world_Block_reinitializeConsumers, "()V", 1 },
	{ "checkContentArrayCapacity", (intptr_t) M_mindustry_world_Block_checkContentArrayCapacity_int_int, VTABLE_mindustry_world_Block_checkContentArrayCapacity_int_int, "(II)V", 1 },
	{ "load", (intptr_t) M_mindustry_world_Block_load, VTABLE_mindustry_world_Block_load, "()V", 1 },
	{ "isHidden", (intptr_t) M_mindustry_world_Block_isHidden_R_boolean, VTABLE_mindustry_world_Block_isHidden_R_boolean, "()Z", 1 },
	{ "createIcons", (intptr_t) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker, VTABLE_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker, "(Lmindustry/graphics/MultiPacker;)V", 1 },
	{ "planRotation", (intptr_t) M_mindustry_world_Block_planRotation_int_R_int, VTABLE_mindustry_world_Block_planRotation_int_R_int, "(I)I", 1 },
	{ "flipRotation", (intptr_t) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean, VTABLE_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean, "(Lmindustry/entities/units/BuildPlan;Z)V", 1 },
	{ "getPlanConfigs", (intptr_t) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq, VTABLE_mindustry_world_Block_getPlanConfigs_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "sense", (intptr_t) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "sense", (intptr_t) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double, VTABLE_mindustry_world_Block_sense_mindustry_ctype_Content_R_double, "(Lmindustry/ctype/Content;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "lambda$reinitializeConsumers$3", (intptr_t) SM_mindustry_world_Block_lambda$reinitializeConsumers$3_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$reinitializeConsumers$2", (intptr_t) SM_mindustry_world_Block_lambda$reinitializeConsumers$2_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$reinitializeConsumers$1", (intptr_t) SM_mindustry_world_Block_lambda$reinitializeConsumers$1_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$reinitializeConsumers$0", (intptr_t) SM_mindustry_world_Block_lambda$reinitializeConsumers$0_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$init$3", (intptr_t) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2, VTABLE_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2, "(Ljava/lang/Class;Larc/func/Cons2;)V", 4098 },
	{ "lambda$init$2", (intptr_t) SM_mindustry_world_Block_lambda$init$2_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$init$1", (intptr_t) SM_mindustry_world_Block_lambda$init$1_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$init$0", (intptr_t) SM_mindustry_world_Block_lambda$init$0_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$postInit$0", (intptr_t) SM_mindustry_world_Block_lambda$postInit$0_mindustry_type_Planet_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/type/Planet;Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$initBuilding$1", (intptr_t) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building, VTABLE_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building, "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;", 4098 },
	{ "lambda$initBuilding$0", (intptr_t) SM_mindustry_world_Block_lambda$initBuilding$0_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 4106 },
	{ "lambda$requirements$0", (intptr_t) SM_mindustry_world_Block_lambda$requirements$0_mindustry_type_ItemStack_R_int, 0, "(Lmindustry/type/ItemStack;)I", 4106 },
	{ "lambda$consume$0", (intptr_t) SM_mindustry_world_Block_lambda$consume$0_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$removeConsumers$0", (intptr_t) SM_mindustry_world_Block_lambda$removeConsumers$0_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$configClear$0", (intptr_t) SM_mindustry_world_Block_lambda$configClear$0_arc_func_Cons_java_lang_Object_java_lang_Object, 0, "(Larc/func/Cons;Ljava/lang/Object;Ljava/lang/Object;)V", 4106 },
	{ "lambda$setBars$9", (intptr_t) SM_mindustry_world_Block_lambda$setBars$9_mindustry_gen_Building_R_mindustry_type_Liquid, 0, "(Lmindustry/gen/Building;)Lmindustry/type/Liquid;", 4106 },
	{ "lambda$setBars$5", (intptr_t) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar, VTABLE_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar, "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$setBars$8", (intptr_t) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float, VTABLE_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 4098 },
	{ "lambda$setBars$7", (intptr_t) SM_mindustry_world_Block_lambda$setBars$7_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$6", (intptr_t) SM_mindustry_world_Block_lambda$setBars$6_mindustry_gen_Building_R_java_lang_CharSequence, 0, "(Lmindustry/gen/Building;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$setBars$1", (intptr_t) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar, VTABLE_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar, "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$setBars$4", (intptr_t) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float, VTABLE_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float, "(Lmindustry/gen/Building;)F", 4098 },
	{ "lambda$setBars$3", (intptr_t) SM_mindustry_world_Block_lambda$setBars$3_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$2", (intptr_t) SM_mindustry_world_Block_lambda$setBars$2_boolean_mindustry_gen_Building_float_R_java_lang_CharSequence, 0, "(ZLmindustry/gen/Building;F)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$setBars$0", (intptr_t) SM_mindustry_world_Block_lambda$setBars$0_mindustry_gen_Building_R_mindustry_ui_Bar, 0, "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;", 4106 },
	{ "lambda$addLiquidBar$3", (intptr_t) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar, VTABLE_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar, "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$addLiquidBar$6", (intptr_t) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float, VTABLE_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float, "(Larc/func/Func;Lmindustry/gen/Building;)F", 4098 },
	{ "lambda$addLiquidBar$5", (intptr_t) SM_mindustry_world_Block_lambda$addLiquidBar$5_arc_func_Func_mindustry_gen_Building_R_arc_graphics_Color, 0, "(Larc/func/Func;Lmindustry/gen/Building;)Larc/graphics/Color;", 4106 },
	{ "lambda$addLiquidBar$4", (intptr_t) SM_mindustry_world_Block_lambda$addLiquidBar$4_arc_func_Func_mindustry_gen_Building_R_java_lang_CharSequence, 0, "(Larc/func/Func;Lmindustry/gen/Building;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$addLiquidBar$0", (intptr_t) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar, VTABLE_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar, "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$addLiquidBar$2", (intptr_t) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float, VTABLE_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F", 4098 },
	{ "lambda$addLiquidBar$1", (intptr_t) SM_mindustry_world_Block_lambda$addLiquidBar$1_mindustry_type_Liquid_R_java_lang_CharSequence, 0, "(Lmindustry/type/Liquid;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$sumAttribute$0", (intptr_t) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float, VTABLE_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float, "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F", 4098 },
	{ "lambda$drawPotentialLinks$1", (intptr_t) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building, VTABLE_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building, "(IILmindustry/gen/Building;)V", 4098 },
	{ "lambda$drawPotentialLinks$0", (intptr_t) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building, VTABLE_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building, "(IILmindustry/gen/Building;)V", 4098 },
	{ "lambda$percentSolid$0", (intptr_t) SM_mindustry_world_Block_lambda$percentSolid$0_mindustry_world_Tile_R_float, 0, "(Lmindustry/world/Tile;)F", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_Block, 0, "()V", 8 },
};

Class class_mindustry_world_Block{
		.nativeName = (intptr_t) "mindustry/world/Block",
		.parentClass = (intptr_t) &class_mindustry_ctype_UnlockableContent,
		.size = sizeof(mindustry_world_Block),
		.classVtable = (intptr_t) vtable_mindustry_world_Block,
		.staticInitializer = (intptr_t) clinit_mindustry_world_Block,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_Block,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 201,
		.nativeFields = (intptr_t) fields,
		.methodCount = 174,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 189,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_Block = registerClass(&class_mindustry_world_Block);

}
