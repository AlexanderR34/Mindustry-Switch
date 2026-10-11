#include "mindustry/type/UnitType.h"
#include "arc/func/Prov.h"
#include "mindustry/ai/types/GroundAI.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/entities/Effect_EffectContainer.h"
#include "mindustry/graphics/MultiPacker.h"
#include "arc/graphics/Pixmap.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Floatp.h"
#include "mindustry/type/UnitType_invoke_arc_func_Cons_9.h"
#include "mindustry/type/UnitType_invoke_arc_func_Cons_7.h"
#include "arc/func/Boolf.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "mindustry/type/UnitType_invoke_arc_func_Floatp_3.h"
#include "mindustry/type/UnitType_invoke_arc_func_Cons_8.h"
#include "mindustry/type/UnitType_invoke_arc_func_Floatp_2.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "mindustry/type/UnitType_UnitEngine.h"
#include "mindustry/gen/Sounds.h"
#include "arc/util/Time.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Itemsc.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/gen/UnderwaterMovec.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "mindustry/type/UnitType_invoke_arc_func_Cons_11.h"
#include "mindustry/gen/EntityMapping.h"
#include "mindustry/type/UnitType_invoke_arc_func_Cons_10.h"
#include "mindustry/entities/units/WeaponMount.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/type/UnitType_invoke_arc_func_Cons_6.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/ai/ControlPathfinder.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/ai/Pathfinder_PathCost.h"
#include "mindustry/logic/Senseable.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/Vars.h"
#include "arc/math/Angles.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitPlan.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/type/UnitType_invoke_arc_func_Floatf_1.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/gen/Mechc.h"
#include "mindustry/ai/UnitStance.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/Item.h"
#include "mindustry/content/Items.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/entities/Leg.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/graphics/OverlayRenderer.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/world/meta/StatValue.h"
#include "mindustry/type/UnitType_invoke_arc_func_Prov_3.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/type/UnitType_invoke_arc_func_Prov_4.h"
#include "mindustry/type/UnitType_invoke_arc_func_Prov_5.h"
#include "mindustry/world/blocks/units/Reconstructor.h"
#include "mindustry/type/UnitType_1.h"
#include "java/lang/String.h"
#include "mindustry/type/UnitType_invoke_arc_func_Func_1.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "mindustry/world/blocks/units/UnitAssembler.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Player.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/world/consumers/ConsumeItems.h"
#include "mindustry/ctype/ContentType.h"
#include "java/util/Objects.h"
#include "mindustry/core/GameState.h"
#include "java/lang/Integer.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/gen/Minerc.h"
#include "arc/scene/ui/Image.h"
#include "mindustry/content/Fx.h"
#include "mindustry/type/UnitType_invoke_mindustry_world_meta_StatValue_1.h"
#include "arc/struct/Seq.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "mindustry/gen/Healthc.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Crawlc.h"
#include "arc/util/Nullable.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/gen/Building.h"
#include "mindustry/world/consumers/Consume.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_29.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_28.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Legsc.h"
#include "arc/math/Scaled.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/world/meta/Stat.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_30.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_34.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_33.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_32.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_31.h"
#include "mindustry/type/PayloadStack.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_38.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_37.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_36.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_35.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_39.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/ai/UnitCommand.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/type/ItemStack.h"
#include "arc/audio/Sound.h"
#include "mindustry/core/World.h"
#include "java/lang/Deprecated.h"
#include "arc/struct/ObjectFloatMap.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/logic/LAccess.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/gen/TimedKillc.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/math/geom/Position.h"
#include "arc/func/Func.h"
#include "mindustry/world/meta/Stats.h"
#include "mindustry/gen/Payloadc.h"
#include "arc/util/Structs.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/graphics/Trail.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_23.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_22.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_21.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_20.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_27.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_26.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_25.h"
#include "mindustry/type/UnitType_invoke_arc_func_Boolf_24.h"
#include "arc/graphics/Pixmaps.h"
#include "mindustry/ai/ItemUnitStance.h"
#include "arc/math/Rand.h"
#include "mindustry/world/meta/StatUnit.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/gen/Tankc.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/graphics/MultiPacker_PageType.h"
#include "mindustry/gen/Segmentc.h"
#include "mindustry/world/blocks/units/UnitAssembler_AssemblerUnitPlan.h"
#include "arc/util/Scaling.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/world/meta/StatValues.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/gen/WaterCrawlc.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/gen/WaterMovec.h"
#include "mindustry/world/blocks/units/UnitFactory.h"
#include "arc/scene/Element.h"
#include "mindustry/ai/types/FlyingAI.h"
#include "mindustry/mod/Mods_LoadedMod.h"

extern "C" {

jfloat SF_mindustry_type_UnitType_shadowTX;
jfloat SF_mindustry_type_UnitType_shadowTY;
jobject SF_mindustry_type_UnitType_legOffset;
jobject SF_mindustry_type_UnitType_tmpStances;

void mark_mindustry_type_UnitType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_type_UnitType_legOffset)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_UnitType_legOffset)->clazz)->markFunction)((jobject) SF_mindustry_type_UnitType_legOffset, mark, depth + 1);
		if (SF_mindustry_type_UnitType_tmpStances)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_UnitType_tmpStances)->clazz)->markFunction)((jobject) SF_mindustry_type_UnitType_tmpStances, mark, depth + 1);
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
	auto self = (mindustry_type_UnitType *) object;
	if (self->F_aiController)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_aiController)->clazz)->markFunction)((jobject) self->F_aiController, mark, depth + 1);
	if (self->F_controller)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controller)->clazz)->markFunction)((jobject) self->F_controller, mark, depth + 1);
	if (self->F_constructor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_constructor)->clazz)->markFunction)((jobject) self->F_constructor, mark, depth + 1);
	if (self->F_abilities)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_abilities)->clazz)->markFunction)((jobject) self->F_abilities, mark, depth + 1);
	if (self->F_weapons)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weapons)->clazz)->markFunction)((jobject) self->F_weapons, mark, depth + 1);
	if (self->F_immunities)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_immunities)->clazz)->markFunction)((jobject) self->F_immunities, mark, depth + 1);
	if (self->F_healColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_healColor)->clazz)->markFunction)((jobject) self->F_healColor, mark, depth + 1);
	if (self->F_lightColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lightColor)->clazz)->markFunction)((jobject) self->F_lightColor, mark, depth + 1);
	if (self->F_shieldColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shieldColor)->clazz)->markFunction)((jobject) self->F_shieldColor, mark, depth + 1);
	if (self->F_deathSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_deathSound)->clazz)->markFunction)((jobject) self->F_deathSound, mark, depth + 1);
	if (self->F_wreckSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wreckSound)->clazz)->markFunction)((jobject) self->F_wreckSound, mark, depth + 1);
	if (self->F_loopSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loopSound)->clazz)->markFunction)((jobject) self->F_loopSound, mark, depth + 1);
	if (self->F_stepSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stepSound)->clazz)->markFunction)((jobject) self->F_stepSound, mark, depth + 1);
	if (self->F_tankMoveSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tankMoveSound)->clazz)->markFunction)((jobject) self->F_tankMoveSound, mark, depth + 1);
	if (self->F_moveSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_moveSound)->clazz)->markFunction)((jobject) self->F_moveSound, mark, depth + 1);
	if (self->F_fallEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fallEffect)->clazz)->markFunction)((jobject) self->F_fallEffect, mark, depth + 1);
	if (self->F_fallEngineEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fallEngineEffect)->clazz)->markFunction)((jobject) self->F_fallEngineEffect, mark, depth + 1);
	if (self->F_deathExplosionEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_deathExplosionEffect)->clazz)->markFunction)((jobject) self->F_deathExplosionEffect, mark, depth + 1);
	if (self->F_treadEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_treadEffect)->clazz)->markFunction)((jobject) self->F_treadEffect, mark, depth + 1);
	if (self->F_parts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parts)->clazz)->markFunction)((jobject) self->F_parts, mark, depth + 1);
	if (self->F_engines)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_engines)->clazz)->markFunction)((jobject) self->F_engines, mark, depth + 1);
	if (self->F_engineColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_engineColor)->clazz)->markFunction)((jobject) self->F_engineColor, mark, depth + 1);
	if (self->F_engineColorInner)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_engineColorInner)->clazz)->markFunction)((jobject) self->F_engineColorInner, mark, depth + 1);
	if (self->F_trailColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_trailColor)->clazz)->markFunction)((jobject) self->F_trailColor, mark, depth + 1);
	if (self->F_pathCost)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pathCost)->clazz)->markFunction)((jobject) self->F_pathCost, mark, depth + 1);
	if (self->F_sample)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sample)->clazz)->markFunction)((jobject) self->F_sample, mark, depth + 1);
	if (self->F_targetFlags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_targetFlags)->clazz)->markFunction)((jobject) self->F_targetFlags, mark, depth + 1);
	if (self->F_commands)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commands)->clazz)->markFunction)((jobject) self->F_commands, mark, depth + 1);
	if (self->F_defaultCommand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultCommand)->clazz)->markFunction)((jobject) self->F_defaultCommand, mark, depth + 1);
	if (self->F_stances)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stances)->clazz)->markFunction)((jobject) self->F_stances, mark, depth + 1);
	if (self->F_outlineColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outlineColor)->clazz)->markFunction)((jobject) self->F_outlineColor, mark, depth + 1);
	if (self->F_mineSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mineSound)->clazz)->markFunction)((jobject) self->F_mineSound, mark, depth + 1);
	if (self->F_mineItems)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mineItems)->clazz)->markFunction)((jobject) self->F_mineItems, mark, depth + 1);
	if (self->F_mechLegColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mechLegColor)->clazz)->markFunction)((jobject) self->F_mechLegColor, mark, depth + 1);
	if (self->F_treadRects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_treadRects)->clazz)->markFunction)((jobject) self->F_treadRects, mark, depth + 1);
	if (self->F_segmentUnit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_segmentUnit)->clazz)->markFunction)((jobject) self->F_segmentUnit, mark, depth + 1);
	if (self->F_segmentEndUnit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_segmentEndUnit)->clazz)->markFunction)((jobject) self->F_segmentEndUnit, mark, depth + 1);
	if (self->F_baseRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_baseRegion)->clazz)->markFunction)((jobject) self->F_baseRegion, mark, depth + 1);
	if (self->F_legRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_legRegion)->clazz)->markFunction)((jobject) self->F_legRegion, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_previewRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previewRegion)->clazz)->markFunction)((jobject) self->F_previewRegion, mark, depth + 1);
	if (self->F_shadowRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shadowRegion)->clazz)->markFunction)((jobject) self->F_shadowRegion, mark, depth + 1);
	if (self->F_cellRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cellRegion)->clazz)->markFunction)((jobject) self->F_cellRegion, mark, depth + 1);
	if (self->F_itemCircleRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemCircleRegion)->clazz)->markFunction)((jobject) self->F_itemCircleRegion, mark, depth + 1);
	if (self->F_softShadowRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_softShadowRegion)->clazz)->markFunction)((jobject) self->F_softShadowRegion, mark, depth + 1);
	if (self->F_jointRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_jointRegion)->clazz)->markFunction)((jobject) self->F_jointRegion, mark, depth + 1);
	if (self->F_footRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_footRegion)->clazz)->markFunction)((jobject) self->F_footRegion, mark, depth + 1);
	if (self->F_legBaseRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_legBaseRegion)->clazz)->markFunction)((jobject) self->F_legBaseRegion, mark, depth + 1);
	if (self->F_baseJointRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_baseJointRegion)->clazz)->markFunction)((jobject) self->F_baseJointRegion, mark, depth + 1);
	if (self->F_outlineRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outlineRegion)->clazz)->markFunction)((jobject) self->F_outlineRegion, mark, depth + 1);
	if (self->F_treadRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_treadRegion)->clazz)->markFunction)((jobject) self->F_treadRegion, mark, depth + 1);
	if (self->F_mineLaserRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mineLaserRegion)->clazz)->markFunction)((jobject) self->F_mineLaserRegion, mark, depth + 1);
	if (self->F_mineLaserEndRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mineLaserEndRegion)->clazz)->markFunction)((jobject) self->F_mineLaserEndRegion, mark, depth + 1);
	if (self->F_wreckRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_wreckRegions)->clazz)->markFunction)((jobject) self->F_wreckRegions, mark, depth + 1);
	if (self->F_segmentRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_segmentRegions)->clazz)->markFunction)((jobject) self->F_segmentRegions, mark, depth + 1);
	if (self->F_segmentCellRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_segmentCellRegions)->clazz)->markFunction)((jobject) self->F_segmentCellRegions, mark, depth + 1);
	if (self->F_segmentOutlineRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_segmentOutlineRegions)->clazz)->markFunction)((jobject) self->F_segmentOutlineRegions, mark, depth + 1);
	if (self->F_treadRegions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_treadRegions)->clazz)->markFunction)((jobject) self->F_treadRegions, mark, depth + 1);
	if (self->F_totalRequirements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_totalRequirements)->clazz)->markFunction)((jobject) self->F_totalRequirements, mark, depth + 1);
	if (self->F_cachedRequirements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cachedRequirements)->clazz)->markFunction)((jobject) self->F_cachedRequirements, mark, depth + 1);
	if (self->F_firstRequirements)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_firstRequirements)->clazz)->markFunction)((jobject) self->F_firstRequirements, mark, depth + 1);
}

void init_mindustry_type_UnitType_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(528);
	init_mindustry_ctype_UnlockableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(49);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_envRequired = (jint(0));
	LINE_NUMBER(51);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_envEnabled = (jint(1));
	LINE_NUMBER(53);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_envDisabled = (16);
	LINE_NUMBER(56);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_speed = (jfloat(1.1f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_boostMultiplier = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_floorMultiplier = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_rotateSpeed = (jfloat(5.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_baseRotateSpeed = (jfloat(5.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drag = (jfloat(0.3f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_accel = (jfloat(0.5f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize = (jfloat(6.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_deathShake = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stepShake = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_rippleScale = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_riseSpeed = (jfloat(0.08f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_descentSpeed = (jfloat(0.08f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_fallSpeed = (jfloat(0.018f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_missileAccelTime = (jfloat(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_health = (jfloat(200.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_armor = (jfloat(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_maxRange = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineRange = (jfloat(70.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_buildRange = (jfloat(220.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_circleTargetRadius = (jfloat(80.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_crashDamageMultiplier = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_wreckHealthMultiplier = (jfloat(0.25f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_dpsEstimate = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_clipSize = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drownTimeMultiplier = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_strafePenalty = (jfloat(0.5f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_researchCostMultiplier = (jfloat(50.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_knockbackMultiplier = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_groundLayer = (jfloat(60.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flyingLayer = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_payloadCapacity = (jfloat(8.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_buildSpeed = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_aimDst = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_buildBeamOffset = (jfloat(3.8f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineBeamOffset = (jfloat(-std::numeric_limits<float>::infinity()));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetPriority = (jfloat(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shadowElevation = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shadowElevationScl = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineOffset = (jfloat(5.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineSize = (jfloat(2.5f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineLayer = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemOffsetY = (jfloat(3.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lightRadius = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lightOpacity = (jfloat(0.6f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_softShadowScl = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_fogRadius = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_waveTrailX = (jfloat(4.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_waveTrailY = (jfloat(-3.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_trailScl = (jfloat(1));
	LINE_NUMBER(161);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_isEnemy = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_wobble = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetAir = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetGround = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_faceTarget = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_circleTarget = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_autoDropBombs = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetBuildingsMobile = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canBoost = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_boostWhenBuilding = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_boostWhenMining = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_logicControllable = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_playerControllable = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_controlSelectGlobal = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_allowedInPayloads = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hittable = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_killable = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetable = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_vulnerableWithPayloads = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_pickupUnits = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_physics = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canDrown = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_useUnitCap = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_coreUnitDock = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_createWreck = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_createScorch = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lowAltitude = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_rotateToBuilding = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_allowLegStep = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legPhysicsLayer = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hovering = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_omniMovement = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_rotateMoveFirst = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_healFlash = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canHeal = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_singleTarget = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_forceMultiTarget = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canAttack = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hidden = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_internal = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_internalGenerateSprites = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_bounded = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_naval = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_autoFindTarget = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetUnderBlocks = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_alwaysShootWhenMoving = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hoverable = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_alwaysCreateOutline = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_generateFullIcon = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_squareShape = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawBuildBeam = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawMineBeam = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawCell = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawItems = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawShields = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawBody = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawSoftShadow = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawMinimap = (jint(1));
	LINE_NUMBER(281);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Prov_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_aiController = (jref) sp[1].o;
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_abilities = (jref) sp[1].o;
	LINE_NUMBER(290);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_weapons = (jref) sp[1].o;
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_immunities = (jref) sp[1].o;
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_healColor = (jref) sp[1].o;
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_powerLight;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_lightColor = (jref) sp[1].o;
	LINE_NUMBER(301);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unset;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathSound = (jref) sp[1].o;
	LINE_NUMBER(303);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_deathSoundVolume = (jfloat(1));
	LINE_NUMBER(305);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unset;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckSound = (jref) sp[1].o;
	LINE_NUMBER(307);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_wreckSoundVolume = (jfloat(1));
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_loopSound = (jref) sp[1].o;
	LINE_NUMBER(311);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_loopSoundVolume = (jfloat(0.5f));
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_mechStepSmall;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stepSound = (jref) sp[1].o;
	LINE_NUMBER(315);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stepSoundVolume = (jfloat(0.5f));
	LINE_NUMBER(317);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stepSoundPitch = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stepSoundPitchRange = (jfloat(0.1f));
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_tankMove;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_tankMoveSound = (jref) sp[1].o;
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_moveSound = (jref) sp[1].o;
	LINE_NUMBER(323);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_moveSoundVolume = (jfloat(1));
	LINE_NUMBER(325);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_moveSoundPitchMin = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_moveSoundPitchMax = (jfloat(1));
	LINE_NUMBER(327);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_tankMoveVolume = (jfloat(0.5f));
	LINE_NUMBER(329);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_fallSmoke;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_fallEffect = (jref) sp[1].o;
	LINE_NUMBER(331);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_fallSmoke;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_fallEngineEffect = (jref) sp[1].o;
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_dynamicExplosion;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathExplosionEffect = (jref) sp[1].o;
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_entities_part_DrawPart)));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(339);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engines = (jref) sp[1].o;
	LINE_NUMBER(341);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_useEngineElevation = (jint(1));
	LINE_NUMBER(343);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineColor = (jref) (jobject(nullptr));
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_engineColorInner = (jref) sp[1].o;
	LINE_NUMBER(347);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_trailLength = (jint(0));
	LINE_NUMBER(352);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flowfieldPathType = (jint(-1));
	LINE_NUMBER(361);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_world_meta_BlockFlag, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (jobject(nullptr));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetFlags = (jref) sp[1].o;
	LINE_NUMBER(364);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_allowChangeCommands = (jint(1));
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_commands = (jref) sp[1].o;
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stances = (jref) sp[1].o;
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkerMetal;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_outlineColor = (jref) sp[1].o;
	LINE_NUMBER(375);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineRadius = (jint(3));
	LINE_NUMBER(377);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlines = (jint(1));
	LINE_NUMBER(380);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemCapacity = (jint(-1));
	LINE_NUMBER(382);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_ammoCapacity = (jint(1));
	LINE_NUMBER(386);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineTier = (jint(-1));
	LINE_NUMBER(388);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineSpeed = (jfloat(1));
	LINE_NUMBER(390);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineWalls = (jint(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineFloor = (jint(1));
	LINE_NUMBER(392);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineHardnessScaling = (jint(1));
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopMineBeam;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineSound = (jref) sp[1].o;
	LINE_NUMBER(396);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineSoundVolume = (jfloat(0.6f));
	LINE_NUMBER(398);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_Item, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_copper;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_lead;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_titanium;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_thorium;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineItems = (jref) sp[1].o;
	LINE_NUMBER(403);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legCount = (jint(4));
	LINE_NUMBER(405);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legGroupSize = (jint(2));
	LINE_NUMBER(408);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legLength = (jfloat(10.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legSpeed = (jfloat(0.1f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legForwardScl = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legBaseOffset = (jfloat(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legMoveSpace = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legExtension = (jfloat(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legPairOffset = (jfloat(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legLengthScl = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legStraightLength = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legMaxLength = (jfloat(1.75f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legMinLength = (jfloat(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legSplashDamage = (jfloat(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legSplashRange = (jfloat(5.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_baseLegStraightness = (jfloat(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legStraightness = (jfloat(0));
	LINE_NUMBER(439);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legBaseUnder = (jint(0));
	LINE_NUMBER(441);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lockLegBase = (jint(0));
	LINE_NUMBER(445);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flipBackLegs = (jint(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flipLegSide = (jint(0));
	LINE_NUMBER(447);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_emitWalkSound = (jint(1));
	LINE_NUMBER(449);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_emitWalkEffect = (jint(1));
	LINE_NUMBER(454);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechLandShake = (jfloat(0));
	LINE_NUMBER(456);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechSideSway = (jfloat(0.54f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechFrontSway = (jfloat(0.1f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechStride = (jfloat(-1.0f));
	LINE_NUMBER(458);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechStepParticles = (jint(0));
	LINE_NUMBER(460);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkMetal;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechLegColor = (jref) sp[1].o;
	LINE_NUMBER(465);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Rect, (jint(0)));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_treadRects = (jref) sp[1].o;
	LINE_NUMBER(467);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadFrames = (18);
	LINE_NUMBER(469);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadPullOffset = (jint(0));
	LINE_NUMBER(471);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_crushFragile = (jint(0));
	LINE_NUMBER(476);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segments = (jint(0));
	LINE_NUMBER(478);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentUnits = (jint(1));
	LINE_NUMBER(484);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentLayerOrder = (jint(1));
	LINE_NUMBER(486);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentMag = (jfloat(2));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentScl = (jfloat(4.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentPhase = (jfloat(5.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentRotSpeed = (jfloat(1));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentMaxRot = (jfloat(30.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentSpacing = (jfloat(-1.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentRotationRange = (jfloat(80.0f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_crawlSlowdown = (jfloat(0.5f));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_crushDamage = (jfloat(0));
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_crawlSlowdownFrac = (jfloat(0.55f));
	LINE_NUMBER(509);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lifetime = (jfloat(300.0f));
	LINE_NUMBER(511);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_homingDelay = (jfloat(10.0f));
	LINE_NUMBER(524);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_buildTime = (jfloat(-1.0f));
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)SM_mindustry_gen_EntityMapping_map_java_lang_String_R_arc_func_Prov(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_constructor = (jref) sp[1].o;
	LINE_NUMBER(533);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_constructor;
	if (sp[0].o != nullptr) goto label_78;
	}
	{
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Prov_4);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_constructor = (jref) sp[1].o;
	}
label_78:;
	{
	LINE_NUMBER(534);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_selectionSize = (jfloat(30.0f));
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_postInit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:postInit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTag;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTag;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(540);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying) == 0) goto label_3;
	}
	{
	LINE_NUMBER(541);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTag = (jref) (((jobject) createStringLiteral(ctx, u8"unit-air"_j)));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(542);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_naval) == 0) goto label_5;
	}
	{
	LINE_NUMBER(543);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTag = (jref) (((jobject) createStringLiteral(ctx, u8"unit-naval"_j)));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(545);
	((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_databaseTag = (jref) (((jobject) createStringLiteral(ctx, u8"unit-ground"_j)));
	}
label_2:;
	{
	LINE_NUMBER(549);
	M_mindustry_ctype_UnlockableContent_postInit(ctx, (frame[0].o));
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:createController", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_controller;
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_entities_units_UnitController, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:create", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(558);
	((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(559);
	((func_mindustry_gen_Unit_setType_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_setType_mindustry_type_UnitType])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(560);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_4;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[4].o)));
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_defaultCommand;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_defaultCommand;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(563);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_abilities;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_8;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(564);
	((func_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit])(ctx, (frame[6].o), (frame[2].o));
	LINE_NUMBER(563);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(566);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying) == 0) goto label_11;
	}
	INST_FCONST(1);
	goto label_12;
label_11:;
	INST_FCONST(0);
label_12:;
	{
	sp -= 2;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_elevation = sp[1].f;
	LINE_NUMBER(567);
	((func_mindustry_gen_Unit_heal) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_heal])(ctx, (frame[2].o));
	LINE_NUMBER(568);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_TimedKillc)) == 0) goto label_15;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_TimedKillc, (frame[2].o)));
	LINE_NUMBER(569);
	((func_mindustry_gen_TimedKillc_lifetime_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_TimedKillc, INDEX_mindustry_gen_TimedKillc_lifetime_float, (frame[3].o)))(ctx, (frame[3].o), ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lifetime));
	}
label_15:;
	{
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:spawn", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(576);
	frame[6].f = (jfloat(0));
	frame[7].f = (jfloat(0));
	LINE_NUMBER(577);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentUnits) <= (jint(1))) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_sample;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Segmentc)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(578);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[4].f), ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentSpacing) * (jfloat(((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentUnits)))) / (jfloat(2))));
	LINE_NUMBER(579);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[6].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(580);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[7].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	}
label_3:;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(584);
	((mindustry_gen_Unit *) NULL_CHECK((frame[8].o)))->F_rotation = (frame[4].f);
	LINE_NUMBER(585);
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, (frame[8].o), ((frame[2].f) + (frame[6].f)), ((frame[3].f) + (frame[7].f)));
	LINE_NUMBER(586);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[8].o));
	LINE_NUMBER(587);
	if ((frame[5].o) == nullptr) goto label_11;
	}
	{
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[8].o));
	}
label_11:;
	{
	LINE_NUMBER(589);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentUnits) <= (jint(1))) goto label_12;
	}
	{
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_gen_Segmentc)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(590);
	frame[9].o = (frame[8].o);
	LINE_NUMBER(591);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentUnit;
	if (sp[0].o != nullptr) goto label_15;
	}
	INST_ALOAD(0);
	goto label_16;
label_15:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_type_UnitType *) NULL_CHECK(sp[-1].o))->F_segmentUnit;
label_16:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(592);
	frame[11].i = (jint(0));
	}
label_18:;
	{
	if ((frame[11].i) >= ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentUnits)) goto label_12;
	}
	{
	LINE_NUMBER(593);
	if ((frame[11].i) != (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentUnits) - (jint(1)))) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentEndUnit;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentEndUnit;
	sp += 1;
	goto label_21;
	}
label_20:;
	INST_ALOAD(10);
label_21:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(595);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, (frame[12].o), (frame[1].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(596);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[4].f), (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentSpacing) * (jfloat(((frame[11].i) + (jint(1)))))));
	LINE_NUMBER(597);
	sp[0].o = frame[13].o;
	jfloat temp0 = frame[2].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = (temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x)) + (frame[6].f);
	jfloat temp2 = frame[3].f;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((func_mindustry_gen_Unit_set_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_float_float])(ctx, sp[0].o, temp1, ((temp2 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)) + (frame[7].f)));
	LINE_NUMBER(598);
	((mindustry_gen_Unit *) NULL_CHECK((frame[13].o)))->F_rotation = (frame[4].f);
	LINE_NUMBER(599);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[13].o));
	LINE_NUMBER(600);
	((func_mindustry_gen_Segmentc_addChild_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_addChild_mindustry_gen_Unit, (checkCast(ctx, &class_mindustry_gen_Segmentc, (frame[9].o)))))(ctx, (checkCast(ctx, &class_mindustry_gen_Segmentc, (frame[9].o))), (frame[13].o));
	LINE_NUMBER(602);
	if ((frame[5].o) == nullptr) goto label_29;
	}
	{
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[13].o));
	}
label_29:;
	{
	LINE_NUMBER(603);
	frame[9].o = (frame[13].o);
	LINE_NUMBER(592);
	INST_IINC(11, 1);
	goto label_18;
	}
label_12:;
	{
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return (frame[8].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:spawn", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:spawn", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(614);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jfloat(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_spawn_float_float_R_mindustry_gen_Unit(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:spawn", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(618);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:spawn", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(622);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_spawn_arc_math_geom_Position_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:spawn", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(626);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:spawn", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[2].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_UnitType_hasWeapons_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:hasWeapons", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
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

jbool M_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:targetable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(638);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetable) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_vulnerableWithPayloads) == 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:killable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_killable);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:hittable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(646);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hittable) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_vulnerableWithPayloads) == 0) goto label_2;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:getUnitStances", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[4].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(653);
	sp[0].o = (jobject)((func_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(656);
	sp[0].o = frame[4].o;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_mineCommand;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(657);
	sp[0].o = frame[2].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_mineAuto;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(658);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getAllPresentOres_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getAllPresentOres_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(659);
	jint temp0 = (jint)((func_mindustry_gen_Unit_canMine_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_canMine_mindustry_type_Item_R_boolean])(ctx, (frame[1].o), (frame[6].o));
	if (temp0 == 0) goto label_11;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineFloor) == 0) goto label_12;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_hasOre_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 != 0) goto label_13;
	}
label_12:;
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineWalls) == 0) goto label_11;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_hasWallOre_mindustry_type_Item_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 == 0) goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(660);
	sp[0].o = (jobject)SM_mindustry_ai_ItemUnitStance_getByItem_mindustry_type_Item_R_mindustry_ai_ItemUnitStance(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(661);
	if ((frame[7].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[7].o));
	}
label_11:;
	LINE_NUMBER(665);
	goto label_8;
label_9:;
	goto label_16;
label_5:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stances;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_ai_UnitStance, sp[0].o));
	LINE_NUMBER(668);
	jint temp0 = (jint)((func_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_ai_UnitStance_isCompatible_mindustry_ai_UnitCommand_R_boolean])(ctx, (frame[6].o), (frame[4].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[6].o));
	}
label_19:;
	LINE_NUMBER(671);
	goto label_17;
label_16:;
	{
	LINE_NUMBER(675);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[4].o)))->F_extraStances;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(676);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:allowStance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(679);
	sp[0].o = frame[2].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_stop;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(680);
	clinit_mindustry_type_UnitType(ctx);
	sp[0].o = (jobject)SF_mindustry_type_UnitType_tmpStances;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(681);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_type_UnitType(ctx);
	sp[2].o = (jobject)SF_mindustry_type_UnitType_tmpStances;
	((func_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(682);
	clinit_mindustry_type_UnitType(ctx);
	sp[0].o = (jobject)SF_mindustry_type_UnitType_tmpStances;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:allowCommand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(686);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(691);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:updatePayload", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	LINE_NUMBER(695);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_killed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:killed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(697);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_landed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:landed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(699);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:display", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(702);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Cons_6);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(706);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(707);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(709);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Cons_7);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(732);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(734);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_ai_types_LogicAI)) == 0) goto label_6;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ai_types_LogicAI, (frame[4].o)));
	LINE_NUMBER(735);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(736);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_microProcessor;
	sp[1].o = (jobject)((func_mindustry_world_Block_emoji_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_emoji_R_java_lang_String])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"units.processorcontrol"_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(737);
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[3].o)))->F_controller;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mouseposition"_j))));
	if (temp0 != 0) goto label_11;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"position"_j))));
	if (temp0 == 0) goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(738);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(739);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[3].o)))->F_controller;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[3].o)))->F_controller;
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[lightgray](\u0001, \u0001)"_j.string, 2, boxInteger(ctx, temp0), boxInteger(ctx, temp1));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(741);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(742);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Prov_5);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_lightGray;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(743);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[3].o)))->F_controller;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[3].o)))->F_controller;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_lastAccessed;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(744);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(745);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"lastaccessed"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_ai_types_LogicAI *) NULL_CHECK((frame[3].o)))->F_controller;
	sp[4].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[4].o))->F_lastAccessed;
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(260.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	goto label_15;
	}
label_6:;
	{
	LINE_NUMBER(747);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_lastCommanded;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(748);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(749);
	sp[0].o = frame[2].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"lastcommanded"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_lastCommanded;
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(260.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_wrap_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(752);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(753);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_UnitType_supportsEnv_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:supportsEnv", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(757);
	if ((((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_envEnabled) & (frame[1].i)) == 0) goto label_1;
	}
	{
	if ((((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_envDisabled) & (frame[1].i)) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_envRequired) == 0) goto label_2;
	}
	{
	if ((((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_envRequired) & (frame[1].i)) != ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_envRequired)) goto label_1;
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

jbool M_mindustry_type_UnitType_isBanned_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	clinit_mindustry_Vars(ctx);
	if (!SF_mindustry_Vars_state) return 0;
	auto stateRules = ((mindustry_core_GameState *) SF_mindustry_Vars_state)->F_rules;
	if (!stateRules) return 0;

	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:isBanned", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)stateRules;
	jint temp0 = (jint)((func_mindustry_game_Rules_isBanned_mindustry_type_UnitType_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules_isBanned_mindustry_type_UnitType_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_getDependencies_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:getDependencies", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(768);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(769);
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_units_Reconstructor)) == 0) goto label_4;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_units_Reconstructor, (frame[3].o)));
	LINE_NUMBER(770);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK((frame[4].o)))->F_upgrades;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 1), sp[0].o));
	LINE_NUMBER(772);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(1)))) != (frame[0].o)) goto label_8;
	}
	{
	LINE_NUMBER(773);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	}
label_8:;
	LINE_NUMBER(775);
	goto label_6;
label_4:;
	LINE_NUMBER(777);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(779);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_researchRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_researchRequirements_R_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_11;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(780);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(779);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(782);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_UnitType_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:isHidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(786);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hidden);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_setStats(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:setStats", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(791);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_health;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_health));
	LINE_NUMBER(792);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_armor;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_armor));
	LINE_NUMBER(793);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_speed;
	jfloat temp0 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_speed) * (jfloat(60.0f))) / (jfloat(8.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_tilesSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(794);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_size;
	jfloat temp1 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(8.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_squared_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(ctx, temp1, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(795);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_itemCapacity;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, (jfloat(((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemCapacity))));
	LINE_NUMBER(796);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_range;
	sp[2].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_maxRange) / (jfloat(8.0f))), (jint(1)));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp2 = jint(0);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[4].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	ARRAY_ACCESS(jobject, sp[3].o, temp2) = sp[4].o;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(798);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_crushDamage), (jfloat(0)), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(799);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_crushDamage;
	jfloat temp0 = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_crushDamage) * (jfloat(60.0f))) * (jfloat(5.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_7:;
	{
	LINE_NUMBER(802);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legSplashDamage), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legSplashRange), (jfloat(0)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_legSplashDamage;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_mindustry_world_meta_StatValue_1(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_mindustry_world_meta_StatValue_1 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_mindustry_world_meta_StatValue_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(809);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_targetsAir;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetAir));
	LINE_NUMBER(810);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_targetsGround;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_targetGround));
	LINE_NUMBER(812);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_abilities;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_20(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_20 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_20);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(813);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_abilities;
	sp[2].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_abilities_arc_struct_Seq_R_mindustry_world_meta_StatValue(ctx, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_13:;
	{
	LINE_NUMBER(816);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_flying;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying));
	LINE_NUMBER(818);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying) != 0) goto label_16;
	}
	{
	LINE_NUMBER(819);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_canBoost;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_boolean])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canBoost));
	LINE_NUMBER(820);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canBoost) == 0) goto label_16;
	}
	{
	LINE_NUMBER(821);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_boostingSpeed;
	jfloat temp0 = ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_boostMultiplier) * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_speed)) * (jfloat(60.0f))) / (jfloat(8.0f));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_tilesSecond;
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_float_mindustry_world_meta_StatUnit])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	}
label_16:;
	{
	LINE_NUMBER(825);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineTier) < (jint(1))) goto label_20;
	}
	{
	LINE_NUMBER(826);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_mineSpeed;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineSpeed));
	LINE_NUMBER(827);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_mineTier;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineSpeed;
	jfloat temp1 = jfloat(1);
	jfloat temp2 = jfloat(1);
	sp[2].o = jobject(nullptr);
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_21(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_21 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_drillables_float_float_float_arc_struct_ObjectFloatMap_arc_func_Boolf_R_mindustry_world_meta_StatValue(ctx, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_20:;
	{
	LINE_NUMBER(833);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_buildSpeed), (jfloat(0)), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(834);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_buildSpeed;
	((func_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_addPercent_mindustry_world_meta_Stat_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_buildSpeed));
	}
label_23:;
	{
	LINE_NUMBER(836);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_sample;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Payloadc)) == 0) goto label_25;
	}
	{
	LINE_NUMBER(837);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_payloadCapacity;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sqrt_float_R_float(ctx, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_payloadCapacity) / (jfloat(64.0f))));
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_blocks;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_squared_float_mindustry_world_meta_StatUnit_R_mindustry_world_meta_StatValue(ctx, temp0, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_25:;
	{
	LINE_NUMBER(840);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_getFirstRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_getFirstRequirements_R_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(842);
	if ((frame[1].o) == nullptr) goto label_28;
	}
	{
	LINE_NUMBER(843);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_buildCost;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_items_Array1_mindustry_type_ItemStack_R_mindustry_world_meta_StatValue(ctx, (frame[1].o));
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_28:;
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_30;
	}
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_weapons;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_weapons_mindustry_type_UnitType_arc_struct_Seq_R_mindustry_world_meta_StatValue(ctx, sp[2].o, sp[3].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_30:;
	{
	LINE_NUMBER(850);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_immunities;
	if (((jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(851);
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_stats;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_immunities;
	sp[2].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_immunities;
	sp[2].o = (jobject)((func_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[2].o);
	sp[2].o = (jobject)SM_mindustry_world_meta_StatValues_statusEffects_arc_struct_Seq_R_mindustry_world_meta_StatValue(ctx, sp[2].o);
	((func_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_meta_Stats_add_mindustry_world_meta_Stat_mindustry_world_meta_StatValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_32:;
	LINE_NUMBER(853);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_checkEntityMapping_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:checkEntityMapping", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_constructor;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"No constructor set up for unit '@': Assign `constructor = [your unit constructor]`. Vanilla defaults are:\n  \"flying\": UnitEntity::create\n  \"mech\": MechUnit::create\n  \"legs\": LegsUnit::create\n  \"naval\": UnitWaterMove::create\n  \"payload\": PayloadUnit::create\n  \"missile\": TimedKillUnit::create\n  \"tank\": TankUnit::create\n  \"hover\": ElevationMoveUnit::create\n  \"tether\": BuildingTetherPayloadUnit::create\n  \"crawl\": CrawlUnit::create\n"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[1].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(872);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)SM_mindustry_gen_EntityMapping_map_java_lang_String_R_arc_func_Prov(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	clinit_mindustry_gen_EntityMapping(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_EntityMapping_nameMap;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	{
	LINE_NUMBER(875);
	jint temp0 = (jint)((func_mindustry_gen_Unit_classId_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_classId_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(876);
	jint temp1 = frame[2].i;
	LINE_NUMBER(878);
	sp[0].o = (jobject)SM_mindustry_gen_EntityMapping_map_int_R_arc_func_Prov(ctx, temp1);
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	jint temp0 = frame[2].i;
	jint temp1 = frame[2].i;
	LINE_NUMBER(880);
	sp[0].o = (jobject)SM_mindustry_gen_EntityMapping_map_int_R_arc_func_Prov(ctx, temp1);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	jint temp2 = (jint)((func_mindustry_gen_Entityc_classId_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_classId_R_int, (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o))))(ctx, (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o)));
	if (temp0 == temp2) goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(882);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(883);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Invalid class ID for `@` detected (found: @). Potential fixes:\n- Register with `EntityMapping.register(\"some-unique-name\", @::new)` to get an ID, and store it somewhere.\n- Override `@#classId()` to return that ID.\n"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(4)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[3].o);
	jint temp0 = jint(1);
	jint temp1 = frame[2].i;
	LINE_NUMBER(887);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp1);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (frame[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, (jint(3))) = (frame[3].o);
	LINE_NUMBER(883);
	sp[1].o = (jobject)SM_arc_util_Strings_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(889);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_initPathType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:initPathType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(892);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flowfieldPathType) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(893);
	sp[0].o = frame[0].o;
	LINE_NUMBER(894);
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_naval) == 0) goto label_4;
	}
	INST_ICONST(2);
	goto label_5;
label_4:;
	{
	LINE_NUMBER(895);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_allowLegStep) == 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(896);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying) == 0) goto label_7;
	}
	INST_ICONST(4);
	goto label_5;
label_7:;
	{
	LINE_NUMBER(897);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hovering) == 0) goto label_8;
	}
	INST_ICONST(5);
	goto label_5;
label_8:;
	LINE_NUMBER(898);
	INST_ICONST(0);
label_5:;
	sp -= 2;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flowfieldPathType = sp[1].i;
label_1:;
	{
	LINE_NUMBER(901);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_pathCost;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(902);
	sp[0].o = frame[0].o;
	LINE_NUMBER(903);
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_naval) == 0) goto label_12;
	}
	clinit_mindustry_ai_ControlPathfinder(ctx);
	(sp++)->o = SF_mindustry_ai_ControlPathfinder_costNaval;
	goto label_13;
label_12:;
	{
	LINE_NUMBER(904);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_allowLegStep) == 0) goto label_14;
	}
	clinit_mindustry_ai_ControlPathfinder(ctx);
	(sp++)->o = SF_mindustry_ai_ControlPathfinder_costLegs;
	goto label_13;
label_14:;
	{
	LINE_NUMBER(905);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hovering) == 0) goto label_15;
	}
	clinit_mindustry_ai_ControlPathfinder(ctx);
	(sp++)->o = SF_mindustry_ai_ControlPathfinder_costHover;
	goto label_13;
label_15:;
	LINE_NUMBER(906);
	clinit_mindustry_ai_ControlPathfinder(ctx);
	(sp++)->o = SF_mindustry_ai_ControlPathfinder_costGround;
label_13:;
	sp -= 2;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pathCost = (jref) sp[1].o;
label_9:;
	{
	LINE_NUMBER(909);
	sp[0].o = frame[0].o;
	clinit_mindustry_ai_ControlPathfinder(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_ControlPathfinder_costTypes;
	sp[2].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_pathCost;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_pathCostId = temp0;
	LINE_NUMBER(910);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_pathCostId) != (jint(-1))) goto label_17;
	}
	{
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_pathCostId = (jint(0));
	}
label_17:;
	LINE_NUMBER(911);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:init", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(916);
	M_mindustry_ctype_Content_init(ctx, (frame[0].o));
	LINE_NUMBER(918);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(920);
	((func_mindustry_type_UnitType_checkEntityMapping_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_checkEntityMapping_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(922);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Legsc)) != 0) goto label_4;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Crawlc)) == 0) goto label_5;
	}
label_4:;
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 2;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep = sp[1].i;
	LINE_NUMBER(925);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_WaterMovec)) != 0) goto label_8;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_WaterCrawlc)) == 0) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(926);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_naval = (jint(1));
	LINE_NUMBER(927);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canDrown = (jint(0));
	LINE_NUMBER(928);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_emitWalkSound = (jint(0));
	LINE_NUMBER(929);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_omniMovement = (jint(0));
	LINE_NUMBER(930);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_immunities;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_wet;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(931);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shadowElevation), (jfloat(0)), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(932);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shadowElevation = (jfloat(0.11f));
	}
label_9:;
	{
	LINE_NUMBER(936);
	((func_mindustry_type_UnitType_initPathType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_initPathType])(ctx, (frame[0].o));
	LINE_NUMBER(938);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying) == 0) goto label_17;
	}
	{
	LINE_NUMBER(939);
	sp[0].o = frame[0].o;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_envEnabled = (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_envEnabled) | (jint(2)));
	}
label_17:;
	{
	LINE_NUMBER(942);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_deathSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unset;
	if (sp[0].o != sp[1].o) goto label_19;
	}
	{
	LINE_NUMBER(943);
	sp[0].o = frame[0].o;
	LINE_NUMBER(944);
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(12.0f)), 1)) >= 0) goto label_22;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_unitExplode1;
	goto label_23;
label_22:;
	{
	LINE_NUMBER(945);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(22.0f)), 1)) >= 0) goto label_24;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_unitExplode2;
	goto label_23;
label_24:;
	LINE_NUMBER(946);
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_unitExplode3;
label_23:;
	sp -= 2;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_deathSound = (jref) sp[1].o;
label_19:;
	{
	LINE_NUMBER(949);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_wreckSound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_unset;
	if (sp[0].o != sp[1].o) goto label_25;
	}
	{
	LINE_NUMBER(950);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(22.0f)), -1)) < 0) goto label_27;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_wreckFallBig;
	goto label_28;
label_27:;
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_wreckFall;
label_28:;
	sp -= 2;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckSound = (jref) sp[1].o;
label_25:;
	{
	LINE_NUMBER(953);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lightRadius), (jfloat(-1.0f)), -1)) != 0) goto label_29;
	}
	{
	LINE_NUMBER(954);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(60.0f)), (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(2.3f))));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_lightRadius = temp0;
	}
label_29:;
	{
	LINE_NUMBER(957);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flyingLayer), (jfloat(0)), 1)) >= 0) goto label_31;
	}
	{
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lowAltitude) == 0) goto label_32;
	}
	(sp++)->f = jfloat(90.0f);
	goto label_33;
label_32:;
	(sp++)->f = jfloat(115.0f);
label_33:;
	sp -= 2;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flyingLayer = sp[1].f;
label_31:;
	{
	LINE_NUMBER(958);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_clipSize), (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lightRadius) * (jfloat(1.1f))));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize = temp0;
	LINE_NUMBER(959);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_singleTarget;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	jobject temp2 = sp[1].o;
	sp[1].i = temp1;
	sp += 2;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(temp2))->F_size) > (jint(1))) goto label_35;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_forceMultiTarget) != 0) goto label_35;
	}
	INST_ICONST(1);
	goto label_36;
label_35:;
	INST_ICONST(0);
label_36:;
	{
	sp -= 3;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_singleTarget = (sp[1].i | sp[2].i);
	LINE_NUMBER(961);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemCapacity) >= 0) goto label_38;
	}
	{
	LINE_NUMBER(962);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_round_int_int_R_int(ctx, (jint((((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(4.0f))))), (10));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (10));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_itemCapacity = temp1;
	}
label_38:;
	{
	LINE_NUMBER(966);
	frame[2].f = (jfloat(4.0f));
	LINE_NUMBER(969);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_range), (jfloat(0)), 1)) >= 0) goto label_41;
	}
	{
	LINE_NUMBER(970);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_range = (jfloat(3,402823e+38f));
	LINE_NUMBER(971);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_44:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Weapon, sp[0].o));
	LINE_NUMBER(972);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[4].o)))->F_useAttackRange) != 0) goto label_46;
	}
	goto label_44;
label_46:;
	{
	LINE_NUMBER(974);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_range;
	jfloat temp1 = (jfloat)((func_mindustry_type_Weapon_range_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Weapon_range_R_float])(ctx, (frame[4].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, (temp1 - (frame[2].f)));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_range = temp2;
	LINE_NUMBER(975);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_maxRange;
	jfloat temp4 = (jfloat)((func_mindustry_type_Weapon_range_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Weapon_range_R_float])(ctx, (frame[4].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp3, (temp4 - (frame[2].f)));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_maxRange = temp5;
	LINE_NUMBER(976);
	goto label_44;
	}
label_41:;
	{
	LINE_NUMBER(979);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_maxRange), (jfloat(0)), 1)) >= 0) goto label_49;
	}
	{
	LINE_NUMBER(980);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_range));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_maxRange = temp0;
	LINE_NUMBER(982);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_52:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_49;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Weapon, sp[0].o));
	LINE_NUMBER(983);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[4].o)))->F_useAttackRange) != 0) goto label_54;
	}
	goto label_52;
label_54:;
	{
	LINE_NUMBER(985);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_maxRange;
	jfloat temp1 = (jfloat)((func_mindustry_type_Weapon_range_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_Weapon_range_R_float])(ctx, (frame[4].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 - (frame[2].f)));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_maxRange = temp2;
	LINE_NUMBER(986);
	goto label_52;
	}
label_49:;
	{
	LINE_NUMBER(989);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_fogRadius), (jfloat(0)), 1)) >= 0) goto label_56;
	}
	{
	LINE_NUMBER(991);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(174.0f)), (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(2))));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_fogRadius = (temp0 / (jfloat(8.0f)));
	}
label_56:;
	{
	LINE_NUMBER(994);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_22(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_22 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_22);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_58;
	}
	{
	LINE_NUMBER(995);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_range), (jfloat(0)), 1)) < 0) goto label_60;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_range), (jfloat(3,402823e+38f)), -1)) != 0) goto label_61;
	}
label_60:;
	{
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_range = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineRange);
	}
label_61:;
	{
	LINE_NUMBER(996);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_maxRange), (jfloat(0)), 1)) < 0) goto label_62;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_maxRange), (jfloat(3,402823e+38f)), -1)) != 0) goto label_58;
	}
label_62:;
	{
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_maxRange = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineRange);
	}
label_58:;
	{
	LINE_NUMBER(999);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechStride), (jfloat(0)), 1)) >= 0) goto label_63;
	}
	{
	LINE_NUMBER(1000);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechStride = ((jfloat(4.0f)) + ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) - (jfloat(8.0f))) / (jfloat(2.1f))));
	}
label_63:;
	{
	LINE_NUMBER(1003);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentSpacing), (jfloat(0)), 1)) >= 0) goto label_65;
	}
	{
	LINE_NUMBER(1004);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentSpacing = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize);
	}
label_65:;
	{
	LINE_NUMBER(1007);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_aimDst), (jfloat(0)), 1)) >= 0) goto label_67;
	}
	{
	LINE_NUMBER(1008);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_23(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_23 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_23);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (temp0 == 0) goto label_69;
	}
	{
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) * (jfloat(2));
	sp[0].f = temp0;
	sp += 1;
	goto label_70;
	}
label_69:;
	{
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(2));
	sp[0].f = temp0;
	sp += 1;
	}
label_70:;
	sp -= 2;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_aimDst = sp[1].f;
label_67:;
	{
	LINE_NUMBER(1011);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stepShake), (jfloat(0)), 1)) >= 0) goto label_71;
	}
	{
	LINE_NUMBER(1012);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, ((((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) - (jfloat(11.0f))) / (jfloat(9.0f))));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_stepShake = (jfloat(temp0));
	LINE_NUMBER(1013);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(15.0f)), -1)) <= 0) goto label_74;
	}
	INST_ICONST(1);
	goto label_75;
label_74:;
	INST_ICONST(0);
label_75:;
	sp -= 2;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mechStepParticles = sp[1].i;
label_71:;
	{
	LINE_NUMBER(1016);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineSize), (jfloat(0)), -1)) <= 0) goto label_76;
	}
	{
	LINE_NUMBER(1017);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engines;
	clinit_mindustry_type_UnitType$UnitEngine(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_UnitType$UnitEngine);
	init_mindustry_type_UnitType$UnitEngine_float_float_float_float(ctx, sp[1].o, (jfloat(0)), (-((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineOffset)), ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineSize), (jfloat(-90.0f)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_76:;
	{
	LINE_NUMBER(1020);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadEffect;
	if (sp[0].o != nullptr) goto label_78;
	}
	{
	LINE_NUMBER(1021);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_Effect(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_Effect);
	jfloat temp0 = jfloat(50.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_entities_Effect_float_arc_func_Cons(ctx, sp[1].o, temp0, sp[2].o);
	jfloat temp1 = jfloat(20.0f);
	LINE_NUMBER(1028);
	sp[1].o = (jobject)((func_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_Effect_layer_float_R_mindustry_entities_Effect])(ctx, sp[1].o, temp1);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_treadEffect = (jref) sp[1].o;
	}
label_78:;
	{
	LINE_NUMBER(1031);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineBeamOffset), (jfloat(-std::numeric_limits<float>::infinity())), -1)) != 0) goto label_81;
	}
	{
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineBeamOffset = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(2)));
	}
label_81:;
	{
	LINE_NUMBER(1033);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_abilities;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_82:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_83;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_abilities_Ability, sp[0].o));
	LINE_NUMBER(1034);
	((func_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType])(ctx, (frame[4].o), (frame[0].o));
	LINE_NUMBER(1035);
	goto label_82;
	}
label_83:;
	{
	LINE_NUMBER(1038);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1039);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_87:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_88;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Weapon, sp[0].o));
	LINE_NUMBER(1040);
	if ((floatCompare(((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_recoilTime), (jfloat(0)), 1)) >= 0) goto label_90;
	}
	{
	((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_recoilTime = ((jfloat)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_reload);
	}
label_90:;
	{
	LINE_NUMBER(1041);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[5].o));
	LINE_NUMBER(1044);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_mirror) == 0) goto label_92;
	}
	{
	LINE_NUMBER(1045);
	sp[0].o = (jobject)((func_mindustry_type_Weapon_copy_R_mindustry_type_Weapon) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_Weapon_copy_R_mindustry_type_Weapon])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1046);
	((func_mindustry_type_Weapon_flip) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_type_Weapon_flip])(ctx, (frame[6].o));
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[3].o), (frame[6].o));
	LINE_NUMBER(1050);
	sp[0].o = frame[5].o;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_recoilTime = (((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_recoilTime) * (jfloat(2)));
	LINE_NUMBER(1051);
	sp[0].o = frame[6].o;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_recoilTime = (((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_recoilTime) * (jfloat(2)));
	LINE_NUMBER(1052);
	sp[0].o = frame[5].o;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_reload = (((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_reload) * (jfloat(2)));
	LINE_NUMBER(1053);
	sp[0].o = frame[6].o;
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_reload = (((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_reload) * (jfloat(2)));
	LINE_NUMBER(1055);
	((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_otherSide = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) - (jint(1)));
	LINE_NUMBER(1056);
	((mindustry_type_Weapon *) NULL_CHECK((frame[6].o)))->F_otherSide = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) - (jint(2)));
	}
label_92:;
	LINE_NUMBER(1058);
	goto label_87;
label_88:;
	{
	LINE_NUMBER(1059);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons = (jref) (frame[3].o);
	LINE_NUMBER(1061);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Cons_9);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1063);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_24(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_24 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_24);
		sp[2].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canHeal = temp0;
	LINE_NUMBER(1065);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_25(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_25 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_25);
		sp[2].o = (jobject) proxy;
	}
	jint temp1 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canAttack = temp1;
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_106;
	}
	{
	LINE_NUMBER(1070);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_moveCommand;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1072);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_allowedInPayloads) == 0) goto label_109;
	}
	{
	LINE_NUMBER(1073);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_enterPayloadCommand;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_109:;
	{
	LINE_NUMBER(1076);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canBoost) == 0) goto label_111;
	}
	{
	LINE_NUMBER(1078);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_buildSpeed), (jfloat(0)), -1)) <= 0) goto label_113;
	}
	{
	LINE_NUMBER(1079);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_rebuildCommand;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitCommand_assistCommand;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_113:;
	{
	LINE_NUMBER(1081);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineTier) <= 0) goto label_111;
	}
	{
	LINE_NUMBER(1082);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_mineCommand;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_111:;
	{
	LINE_NUMBER(1087);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying) == 0) goto label_106;
	}
	{
	LINE_NUMBER(1088);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canHeal) == 0) goto label_117;
	}
	{
	LINE_NUMBER(1089);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_repairCommand;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_117:;
	{
	LINE_NUMBER(1092);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_buildSpeed), (jfloat(0)), -1)) <= 0) goto label_119;
	}
	{
	LINE_NUMBER(1093);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_rebuildCommand;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitCommand_assistCommand;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_119:;
	{
	LINE_NUMBER(1096);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineTier) <= 0) goto label_121;
	}
	{
	LINE_NUMBER(1097);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_mineCommand;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_121:;
	{
	LINE_NUMBER(1099);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_106;
	}
	{
	LINE_NUMBER(1100);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ai_UnitCommand, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitCommand_loadUnitsCommand;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitCommand_loadBlocksCommand;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitCommand_unloadPayloadCommand;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitCommand_loopPayloadCommand;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_106:;
	{
	LINE_NUMBER(1105);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_defaultCommand;
	if (sp[0].o != nullptr) goto label_124;
	}
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_124;
	}
	{
	LINE_NUMBER(1106);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_commands;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_defaultCommand = (jref) (checkCast(ctx, &class_mindustry_ai_UnitCommand, sp[1].o));
	}
label_124:;
	{
	LINE_NUMBER(1109);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stances;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_126;
	}
	{
	LINE_NUMBER(1110);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canAttack) == 0) goto label_128;
	}
	{
	LINE_NUMBER(1111);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stances;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ai_UnitStance, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitStance_stop;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitStance_holdFire;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitStance_pursueTarget;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitStance_patrol;
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1112);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying) != 0) goto label_131;
	}
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stances;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_ram;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_131:;
	{
	LINE_NUMBER(1115);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_canBoost) == 0) goto label_126;
	}
	{
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stances;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_boost;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_126;
	}
label_128:;
	{
	LINE_NUMBER(1119);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_stances;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ai_UnitStance, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitStance_stop;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_ai_UnitStance(ctx);
	sp[2].o = (jobject)SF_mindustry_ai_UnitStance_patrol;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_126:;
	{
	LINE_NUMBER(1123);
	jfloat temp0 = (jfloat)((func_mindustry_type_UnitType_estimateDps_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_estimateDps_R_float])(ctx, (frame[0].o));
	LINE_NUMBER(1126);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_sample = (jref) (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o));
	LINE_NUMBER(1127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_type_UnitType_estimateDps_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:estimateDps", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1131);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_dpsEstimate), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(1132);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Floatf_1);
		sp[2].o = (jobject) proxy;
	}
	jfloat temp0 = (jfloat)((func_arc_struct_Seq_sumf_arc_func_Floatf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_dpsEstimate = temp0;
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_26(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_26 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_26);
		sp[1].o = (jobject) proxy;
	}
	jint temp1 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp1 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1137);
	sp[0].o = frame[0].o;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_dpsEstimate = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_dpsEstimate) / (jfloat(15.0f)));
	}
label_1:;
	{
	LINE_NUMBER(1141);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_dpsEstimate);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:load", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1147);
	M_mindustry_ctype_Content_load(ctx, (frame[0].o));
	LINE_NUMBER(1149);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_parts;
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
	frame[2].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(1150);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	((func_mindustry_entities_part_DrawPart_load_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_load_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1151);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1152);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Cons_10(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Cons_10 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Cons_10);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1153);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(1154);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-preview"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_previewRegion = (jref) sp[1].o;
	LINE_NUMBER(1155);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-leg"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legRegion = (jref) sp[1].o;
	LINE_NUMBER(1156);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-joint"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_jointRegion = (jref) sp[1].o;
	LINE_NUMBER(1157);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-joint-base"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_baseJointRegion = (jref) sp[1].o;
	LINE_NUMBER(1158);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-foot"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_footRegion = (jref) sp[1].o;
	LINE_NUMBER(1159);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-treads"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_treadRegion = (jref) sp[1].o;
	LINE_NUMBER(1160);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"ring-item"_j))));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_itemCircleRegion = (jref) sp[1].o;
	LINE_NUMBER(1162);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(1163);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRects;
	sp[1].o = (jobject)createMultiArray(ctx, &class_arc_graphics_g2d_TextureRegion, {(((jarray) nullCheck(ctx, sp[1].o))->length), ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadFrames)});
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_treadRegions = (jref) sp[1].o;
	LINE_NUMBER(1164);
	frame[1].i = (jint(0));
	}
label_18:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRects;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_15;
	}
	{
	LINE_NUMBER(1165);
	frame[2].i = (jint(0));
	}
label_20:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadFrames)) goto label_21;
	}
	{
	LINE_NUMBER(1166);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRegions;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	jint temp0 = frame[2].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-treads\u0001-\u0001"_j.string, 3, sp[2].o, boxInteger(ctx, (frame[1].i)), boxInteger(ctx, (frame[2].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1165);
	INST_IINC(2, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(1164);
	INST_IINC(1, 1);
	goto label_18;
	}
label_15:;
	{
	LINE_NUMBER(1170);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-leg-base"_j.string, 1, sp[2].o);
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-leg"_j.string, 1, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_java_lang_String_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_legBaseRegion = (jref) sp[1].o;
	LINE_NUMBER(1171);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-base"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_baseRegion = (jref) sp[1].o;
	LINE_NUMBER(1172);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-cell"_j.string, 1, sp[2].o);
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_atlas;
	sp[3].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"power-cell"_j))));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_cellRegion = (jref) sp[1].o;
	LINE_NUMBER(1174);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"minelaser"_j))));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineLaserRegion = (jref) sp[1].o;
	LINE_NUMBER(1175);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"minelaser-end"_j))));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_mineLaserEndRegion = (jref) sp[1].o;
	LINE_NUMBER(1177);
	sp[0].o = frame[0].o;
	LINE_NUMBER(1178);
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_squareShape) == 0) goto label_30;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"square-shadow"_j))));
	sp += 1;
	goto label_31;
	}
label_30:;
	{
	LINE_NUMBER(1179);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize), (jfloat(10.0f)), 1)) <= 0) goto label_32;
	}
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_settings;
	if ((--sp)->o == nullptr) goto label_33;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"linear"_j))), (jint(1)));
	if (temp0 == 0) goto label_33;
	}
label_32:;
	{
	LINE_NUMBER(1180);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"particle"_j))));
	sp += 1;
	goto label_31;
	}
label_33:;
	{
	LINE_NUMBER(1181);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"circle-shadow"_j))));
	sp += 1;
	}
label_31:;
	{
	sp -= 2;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_softShadowRegion = (jref) sp[1].o;
	LINE_NUMBER(1183);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-outline"_j.string, 1, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_outlineRegion = (jref) sp[1].o;
	LINE_NUMBER(1184);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_fullIcon;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_shadowRegion = (jref) sp[1].o;
	LINE_NUMBER(1186);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (jint(3)));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_wreckRegions = (jref) sp[1].o;
	LINE_NUMBER(1187);
	frame[1].i = (jint(0));
	}
label_38:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_wreckRegions;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_39;
	}
	{
	LINE_NUMBER(1188);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_wreckRegions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-wreck\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1187);
	INST_IINC(1, 1);
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(1191);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segments));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_segmentRegions = (jref) sp[1].o;
	LINE_NUMBER(1192);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segments));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_segmentOutlineRegions = (jref) sp[1].o;
	LINE_NUMBER(1193);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segments));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_segmentCellRegions = (jref) sp[1].o;
	LINE_NUMBER(1194);
	frame[1].i = (jint(0));
	}
label_45:;
	{
	if ((frame[1].i) >= ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segments)) goto label_46;
	}
	{
	LINE_NUMBER(1195);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentRegions;
	jint temp0 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-segment\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1196);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentOutlineRegions;
	jint temp1 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-segment-outline\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(1197);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentCellRegions;
	jint temp2 = frame[1].i;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-segment-cell\u0001"_j.string, 2, sp[2].o, boxInteger(ctx, (frame[1].i)));
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(1194);
	INST_IINC(1, 1);
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(1200);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_width))) * (jfloat(2))), ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_clipSize));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_clipSize = temp0;
	LINE_NUMBER(1201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_getRegionsToOutline_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:getRegionsToOutline", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1204);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Weapon, sp[0].o));
	LINE_NUMBER(1205);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[3].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(1206);
	((func_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq])(ctx, (frame[5].o), (frame[1].o));
	LINE_NUMBER(1207);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(1208);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(1209);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(1210);
	((func_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_part_DrawPart_getOutlines_arc_struct_Seq])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(1211);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(1212);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_UnitType_needsBodyOutline_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:needsBodyOutline", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1215);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_alwaysCreateOutline);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_createIcons_mindustry_graphics_MultiPacker(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:createIcons", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1220);
	M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1222);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_constructor;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"No constructor set up for unit '\u0001', add this argument to your units field: `constructor = UnitEntity::create`"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(1224);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_constructor;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_sample = (jref) (checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o));
	LINE_NUMBER(1226);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1227);
	((func_mindustry_type_UnitType_getRegionsToOutline_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_getRegionsToOutline_arc_struct_Seq])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1229);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o));
	LINE_NUMBER(1230);
	if ((isInstance(ctx, (frame[4].o), &class_arc_graphics_g2d_TextureAtlas$AtlasRegion)) == 0) goto label_9;
	}
	{
	frame[5].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureAtlas$AtlasRegion, (frame[4].o)));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-outline"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(1231);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_name;
	frame[6].o = sp[0].o;
	LINE_NUMBER(1232);
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[1].o), (frame[4].o));
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_outline_arc_graphics_g2d_PixmapRegion_arc_graphics_Color_int_R_arc_graphics_Pixmap(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineRadius));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1234);
	SM_mindustry_graphics_Drawf_checkBleed_arc_graphics_Pixmap(ctx, (frame[7].o));
	LINE_NUMBER(1236);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-outline"_j.string, 1, (frame[6].o));
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[7].o));
	LINE_NUMBER(1237);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[7].o));
	}
label_9:;
	LINE_NUMBER(1239);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(1241);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlines) == 0) goto label_16;
	}
	{
	LINE_NUMBER(1242);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_g2d_TextureRegion, (6));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_region;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_jointRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_footRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_baseJointRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRegion;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1243);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-leg-base"_j.string, 1, sp[1].o);
	jint temp6 = (jint)((func_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp6 == 0) goto label_19;
	}
	{
	LINE_NUMBER(1244);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legBaseRegion;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_19:;
	{
	LINE_NUMBER(1248);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o));
	LINE_NUMBER(1249);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_24;
	}
	goto label_21;
label_24:;
	{
	LINE_NUMBER(1251);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[2].o = frame[1].o;
	sp[3].o = frame[5].o;
	sp += 4;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_alwaysCreateOutline) == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_region;
	if (sp[0].o != (frame[5].o)) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(0);
label_26:;
	{
	sp -= 5;
	sp[5].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].i, sp[5].o, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineRadius));
	LINE_NUMBER(1252);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(1254);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_sample;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Crawlc)) == 0) goto label_28;
	}
	{
	LINE_NUMBER(1255);
	frame[4].i = (jint(0));
	}
label_30:;
	{
	if ((frame[4].i) >= ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segments)) goto label_28;
	}
	{
	LINE_NUMBER(1256);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentRegions;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[4].i));
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-segment-outline\u0001"_j.string, 2, sp[3].o, boxInteger(ctx, (frame[4].i)));
	sp[4].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineRadius));
	LINE_NUMBER(1255);
	INST_IINC(4, 1);
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(1260);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_weapons;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_33:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Weapon, sp[0].o));
	LINE_NUMBER(1261);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_minfo;
	sp[1].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[1].o))->F_mod;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[1].o))->F_name;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_35;
	}
label_36:;
	{
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_top) != 0) goto label_37;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_name;
	jint temp0 = (jint)((func_mindustry_graphics_MultiPacker_isOutlined_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_isOutlined_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_parts;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_27(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_27 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_27);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_35;
	}
label_37:;
	{
	LINE_NUMBER(1262);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_region;
	sp += 4;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_top) == 0) goto label_38;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[5].o)))->F_parts;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_28(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_28 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_28);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_39;
	}
label_38:;
	INST_ICONST(1);
	goto label_40;
label_39:;
	INST_ICONST(0);
label_40:;
	{
	sp -= 5;
	sp[5].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	((func_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].i, sp[5].o, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineRadius));
	}
label_35:;
	LINE_NUMBER(1264);
	goto label_33;
label_16:;
	{
	LINE_NUMBER(1267);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_sample;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Tankc)) == 0) goto label_41;
	}
	{
	LINE_NUMBER(1268);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRegion;
	sp[0].o = (jobject)((func_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_get_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_PixmapRegion])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1270);
	frame[4].i = (jint(0));
	}
label_44:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRects;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_41;
	}
	{
	LINE_NUMBER(1271);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRects;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(1273);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapRegion_crop_int_int_int_int_R_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_crop_int_int_int_int_R_arc_graphics_Pixmap])(ctx, (frame[3].o), (jint((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_x) + ((jfloat(((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[3].o)))->F_width))) / (jfloat(2)))))), (jint((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_y) + ((jfloat(((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[3].o)))->F_height))) / (jfloat(2)))))), (jint(1)), (jint(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_height))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1274);
	frame[7].i = ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadFrames);
	LINE_NUMBER(1275);
	frame[8].i = (jint(0));
	}
label_49:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_50;
	}
	{
	LINE_NUMBER(1276);
	frame[9].i = ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadPullOffset);
	LINE_NUMBER(1277);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[0].o, ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_height));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1278);
	frame[11].i = (jint(0));
	}
label_54:;
	{
	if ((frame[11].i) >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_height)) goto label_55;
	}
	{
	LINE_NUMBER(1279);
	frame[12].i = ((frame[11].i) + (frame[8].i));
	LINE_NUMBER(1280);
	if ((frame[12].i) < ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_height)) goto label_58;
	}
	{
	LINE_NUMBER(1281);
	frame[12].i = ((frame[12].i) - ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_height));
	LINE_NUMBER(1282);
	frame[12].i = ((frame[12].i) + (frame[9].i));
	LINE_NUMBER(1283);
	jint temp0 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (frame[12].i), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[6].o)))->F_height));
	frame[12].i = temp0;
	}
label_58:;
	{
	LINE_NUMBER(1286);
	sp[0].o = frame[10].o;
	jint temp0 = jint(0);
	jint temp1 = frame[11].i;
	jint temp2 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, (frame[6].o), (jint(0)), (frame[12].i));
	((func_arc_graphics_Pixmap_setRaw_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_setRaw_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2);
	LINE_NUMBER(1278);
	INST_IINC(11, 1);
	goto label_54;
	}
label_55:;
	{
	LINE_NUMBER(1289);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-treads\u0001-\u0001"_j.string, 3, sp[2].o, boxInteger(ctx, (frame[4].i)), boxInteger(ctx, (frame[8].i)));
	((func_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MultiPacker_add_mindustry_graphics_MultiPacker$PageType_java_lang_String_arc_graphics_Pixmap])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[10].o));
	LINE_NUMBER(1290);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[10].o));
	LINE_NUMBER(1275);
	INST_IINC(8, 1);
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(1292);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[6].o));
	LINE_NUMBER(1270);
	INST_IINC(4, 1);
	goto label_44;
	}
label_41:;
	LINE_NUMBER(1295);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_afterPatch(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:afterPatch", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1299);
	M_mindustry_ctype_UnlockableContent_afterPatch(ctx, (frame[0].o));
	LINE_NUMBER(1300);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = jobject(nullptr);
	((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_firstRequirements = (jref) sp[3].o;
	((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_cachedRequirements = (jref) sp[3].o;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_totalRequirements = (jref) sp[3].o;
	LINE_NUMBER(1303);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flowfieldPathType = (jint(-1));
	LINE_NUMBER(1304);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_pathCost = (jref) (jobject(nullptr));
	LINE_NUMBER(1305);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_pathCostId = (jint(-1));
	LINE_NUMBER(1306);
	((func_mindustry_type_UnitType_initPathType) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_initPathType])(ctx, (frame[0].o));
	LINE_NUMBER(1307);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_beforeParse(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:beforeParse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1310);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = jobject(nullptr);
	((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_firstRequirements = (jref) sp[3].o;
	((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_cachedRequirements = (jref) sp[3].o;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_totalRequirements = (jref) sp[3].o;
	LINE_NUMBER(1311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_type_UnitType_getBuildTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:getBuildTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1315);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o));
	LINE_NUMBER(1316);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_buildTime);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:getTotalRequirements", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1321);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_totalRequirements;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1322);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_UnitType, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1323);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(0));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1324);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1327);
	sp[0].o = frame[0].o;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = (jobject)SF_mindustry_type_ItemStack_empty;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_totalRequirements = (jref) sp[1].o;
	LINE_NUMBER(1329);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1330);
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1332);
	((func_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack])(ctx, (frame[4].o), (frame[3].o));
	LINE_NUMBER(1333);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1334);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	((func_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_Array1_mindustry_type_ItemStack])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(1336);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack])(ctx, (frame[4].o));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_totalRequirements = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(1339);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_totalRequirements;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_13:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_1;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(1340);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildTime;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_item;
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_buildTime = (temp0 + (((jfloat)((mindustry_type_Item *) NULL_CHECK(sp[1].o))->F_cost) * (jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[7].o)))->F_amount)))));
	LINE_NUMBER(1339);
	INST_IINC(6, 1);
	goto label_13;
	}
label_1:;
	{
	LINE_NUMBER(1343);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_totalRequirements;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:getRequirements", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1349);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_29(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_29 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_29);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_units_Reconstructor, sp[0].o));
	LINE_NUMBER(1351);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_30(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_30 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_30);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_world_blocks_units_Reconstructor_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_Reconstructor_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_world_consumers_ConsumeItems)) == 0) goto label_2;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeItems, (frame[5].o)));
	LINE_NUMBER(1352);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1353);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK((frame[3].o)))->F_upgrades;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_31(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_31 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_type_UnitType, 1), sp[1].o)), (jint(0))));
	}
label_4:;
	{
	LINE_NUMBER(1355);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1356);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = ((jfloat)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK((frame[3].o)))->F_constructTime);
	}
label_6:;
	{
	LINE_NUMBER(1358);
	sp[0].o = (jobject)((mindustry_world_consumers_ConsumeItems *) NULL_CHECK((frame[4].o)))->F_items;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1361);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_32(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_32 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory, sp[0].o));
	LINE_NUMBER(1362);
	if ((frame[5].o) == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1364);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[5].o)))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_33(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_33 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan, sp[0].o));
	LINE_NUMBER(1365);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(1366);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = ((jfloat)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[6].o)))->F_time);
	}
label_12:;
	{
	LINE_NUMBER(1368);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[6].o)))->F_requirements;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(1371);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_34(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_34 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_34);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssembler, sp[0].o));
	LINE_NUMBER(1372);
	if ((frame[6].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(1373);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK((frame[6].o)))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_35(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_35 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[7].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan, sp[0].o));
	LINE_NUMBER(1375);
	if ((frame[2].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1376);
	ARRAY_ACCESS(jfloat, (frame[2].o), (jint(0))) = ((jfloat)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[7].o)))->F_time);
	}
label_18:;
	{
	LINE_NUMBER(1378);
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1379);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[7].o)))->F_requirements;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_type_PayloadStack, sp[0].o));
	LINE_NUMBER(1380);
	sp[0].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[10].o)))->F_item;
	frame[13].o = sp[0].o;
	if ((isInstance(ctx, (frame[13].o), &class_mindustry_world_Block)) == 0) goto label_24;
	}
	{
	frame[11].o = (checkCast(ctx, &class_mindustry_world_Block, (frame[13].o)));
	LINE_NUMBER(1381);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[11].o)))->F_requirements;
	frame[13].o = sp[0].o;
	frame[14].i = (((jarray) nullCheck(ctx, (frame[13].o)))->length);
	frame[15].i = (jint(0));
	}
label_26:;
	{
	if ((frame[15].i) >= (frame[14].i)) goto label_27;
	}
	{
	frame[16].o = ((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[15].i)));
	LINE_NUMBER(1382);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[16].o)))->F_item;
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[16].o)))->F_amount) * ((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[10].o)))->F_amount)));
	LINE_NUMBER(1381);
	INST_IINC(15, 1);
	goto label_26;
	}
label_27:;
	goto label_30;
label_24:;
	{
	LINE_NUMBER(1384);
	sp[0].o = (jobject)((mindustry_type_PayloadStack *) NULL_CHECK((frame[10].o)))->F_item;
	frame[13].o = sp[0].o;
	if ((isInstance(ctx, (frame[13].o), &class_mindustry_type_UnitType)) == 0) goto label_30;
	}
	{
	frame[12].o = (checkCast(ctx, &class_mindustry_type_UnitType, (frame[13].o)));
	LINE_NUMBER(1385);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack])(ctx, (frame[12].o));
	frame[13].o = sp[0].o;
	frame[14].i = (((jarray) nullCheck(ctx, (frame[13].o)))->length);
	frame[15].i = (jint(0));
	}
label_32:;
	{
	if ((frame[15].i) >= (frame[14].i)) goto label_30;
	}
	{
	frame[16].o = ((jobject)ARRAY_ACCESS(jobject, (frame[13].o), (frame[15].i)));
	LINE_NUMBER(1386);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[16].o)))->F_item;
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, (((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[16].o)))->F_amount) * ((jint)((mindustry_type_PayloadStack *) NULL_CHECK((frame[10].o)))->F_amount)));
	LINE_NUMBER(1385);
	INST_IINC(15, 1);
	goto label_32;
	}
label_30:;
	LINE_NUMBER(1389);
	goto label_21;
label_22:;
	{
	LINE_NUMBER(1390);
	sp[0].o = (jobject)((func_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_type_ItemSeq_toArray_R_Array1_mindustry_type_ItemStack])(ctx, (frame[8].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_15:;
	{
	LINE_NUMBER(1394);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_getFirstRequirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:getFirstRequirements", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1398);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_firstRequirements;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1399);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o), (jobject(nullptr)), (jobject(nullptr)));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_firstRequirements = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(1401);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_firstRequirements;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_researchRequirements_R_Array1_mindustry_type_ItemStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:researchRequirements", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1406);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_cachedRequirements;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1407);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_cachedRequirements;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1410);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack])(ctx, (frame[0].o), (jobject(nullptr)), (jobject(nullptr)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1412);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1413);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1414);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	if ((frame[3].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_8;
	}
	{
	LINE_NUMBER(1415);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	sp[2].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)))))->F_item;
	jint temp1 = (jint)SM_mindustry_core_UI_roundAmount_int_R_int(ctx, (jint(((jfloat(((jint)((mindustry_type_ItemStack *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)))))->F_amount))) * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_researchCostMultiplier)))));
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[1].o, sp[2].o, temp1);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1414);
	INST_IINC(3, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(1419);
	sp[0].o = ((jobject) &class_mindustry_type_ItemStack);
	sp[1].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_36(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_36 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_36);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Structs_filter_java_lang_Class_Array1_java_lang_Object_arc_func_Boolf_R_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_mindustry_type_ItemStack, 1), sp[0].o));
	LINE_NUMBER(1421);
	((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_cachedRequirements = (jref) (frame[2].o);
	LINE_NUMBER(1423);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(1426);
	sp[0].o = (jobject)M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jdouble M_mindustry_type_UnitType_sense_mindustry_logic_LAccess_R_double(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:sense", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1431);
	clinit_mindustry_type_UnitType$1(ctx);
	sp[0].o = (jobject)SF_mindustry_type_UnitType$1_$SwitchMap$mindustry$logic$LAccess;
	jint temp0 = (jint)((func_mindustry_logic_LAccess_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAccess_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_1;
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
	LINE_NUMBER(1432);
	jdouble temp0 = jdouble(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_health));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_2:;
	{
	LINE_NUMBER(1433);
	jdouble temp0 = jdouble(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_armor));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_3:;
	{
	LINE_NUMBER(1434);
	jfloat temp0 = (jfloat)SM_mindustry_core_World_conv_float_R_float(ctx, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_maxRange));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_11;
	}
label_4:;
	{
	LINE_NUMBER(1435);
	jdouble temp0 = jdouble((((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_5:;
	{
	LINE_NUMBER(1436);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying) == 0) goto label_12;
	}
	INST_DCONST(1);
	goto label_11;
label_12:;
	INST_DCONST(0);
	goto label_11;
label_6:;
	{
	LINE_NUMBER(1437);
	jdouble temp0 = jdouble(((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemCapacity));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_7:;
	{
	LINE_NUMBER(1438);
	jdouble temp0 = jdouble(((((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_speed) * (jfloat(60.0f))) / (jfloat(8.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(1439);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_sample;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Payloadc)) == 0) goto label_13;
	}
	{
	jdouble temp0 = jdouble((((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_payloadCapacity) / (jfloat(64.0f))));
	sp[0].d = temp0;
	sp += 1;
	goto label_11;
	}
label_13:;
	INST_DCONST(0);
	goto label_11;
label_9:;
	{
	LINE_NUMBER(1440);
	jint temp0 = (jint)((func_mindustry_type_UnitType_getLogicId_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_getLogicId_R_int])(ctx, (frame[0].o));
	jdouble temp1 = jdouble(temp0);
	sp[0].d = temp1;
	sp += 1;
	goto label_11;
	}
label_10:;
	LINE_NUMBER(1441);
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
label_11:;
	LINE_NUMBER(1431);
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_senseObject_mindustry_logic_LAccess_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:senseObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1447);
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
	LINE_NUMBER(1448);
	clinit_mindustry_type_UnitType(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_Senseable_noSensed;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1453);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_setEnginesMirror_Array1_mindustry_type_UnitType$UnitEngine(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:setEnginesMirror", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1458);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1459);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engines;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(1461);
	sp[0].o = (jobject)((func_mindustry_type_UnitType$UnitEngine_copy_R_mindustry_type_UnitType$UnitEngine) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_type_UnitType$UnitEngine_copy_R_mindustry_type_UnitType$UnitEngine])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1462);
	sp[0].o = frame[6].o;
	((mindustry_type_UnitType$UnitEngine *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK(sp[0].o))->F_x) * (jfloat(-1.0f)));
	LINE_NUMBER(1463);
	((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[6].o)))->F_rotation = ((jfloat(180.0f)) - ((jfloat)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[6].o)))->F_rotation));
	LINE_NUMBER(1464);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK((frame[6].o)))->F_rotation), (jfloat(0)), 1)) >= 0) goto label_8;
	}
	{
	sp[0].o = frame[6].o;
	((mindustry_type_UnitType$UnitEngine *) NULL_CHECK(sp[0].o))->F_rotation = (((jfloat)((mindustry_type_UnitType$UnitEngine *) NULL_CHECK(sp[0].o))->F_rotation) + (jfloat(360.0f)));
	}
label_8:;
	{
	LINE_NUMBER(1465);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engines;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(1458);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1467);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:draw", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1472);
	frame[2].f = (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl);
	LINE_NUMBER(1473);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1475);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAdded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isAdded_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(1477);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_buildSpeed), (jfloat(0)), -1)) <= 0) goto label_6;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_6;
	{
	LINE_NUMBER(1478);
	((func_mindustry_gen_Unit_drawBuilding) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_drawBuilding])(ctx, (frame[1].o));
	}
label_6:;
	{
	LINE_NUMBER(1481);
	jint temp0 = (jint)((func_mindustry_gen_Unit_mining_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_mining_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_8;
	{
	LINE_NUMBER(1482);
	((func_mindustry_type_UnitType_drawMining_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawMining_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_8:;
	{
	LINE_NUMBER(1485);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Mechc)) == 0) goto label_10;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Mechc, (frame[1].o)));
	sp[0].o = frame[5].o;
	sp += 1;
	goto label_12;
	}
label_10:;
	INST_ACONST_NULL();
label_12:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(1486);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Segmentc)) == 0) goto label_14;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Segmentc, (frame[1].o)));
	sp[0].o = frame[6].o;
	sp += 1;
	goto label_16;
	}
label_14:;
	INST_ACONST_NULL();
label_16:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1488);
	if ((frame[3].i) == 0) goto label_18;
	}
	sp->f = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	sp++;
	goto label_19;
label_18:;
	{
	LINE_NUMBER(1490);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_elevation), (jfloat(0.5f)), -1)) > 0) goto label_20;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying) == 0) goto label_21;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_dead) == 0) goto label_21;
	}
label_20:;
	{
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flyingLayer;
	sp[0].f = temp0;
	sp += 1;
	goto label_19;
	}
label_21:;
	{
	LINE_NUMBER(1491);
	if ((frame[5].o) == nullptr) goto label_22;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_groundLayer;
	jint temp1 = (jint)((func_mindustry_gen_Segmentc_segmentIndex_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_segmentIndex_R_int, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp2 = (jfloat(temp1)) / (jfloat(4000.0f));
	jint temp3 = (jint)SM_arc_math_Mathf_sign_boolean_R_int(ctx, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentLayerOrder));
	jfloat temp4 = temp0 + (temp2 * (jfloat(temp3)));
	sp[0].f = temp4;
	sp += 1;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentLayerOrder) != 0) goto label_23;
	}
	(sp++)->f = jfloat(1,000000e-02f);
	goto label_24;
label_23:;
	INST_FCONST(0);
label_24:;
	INST_FADD();
	goto label_19;
label_22:;
	{
	LINE_NUMBER(1492);
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_groundLayer;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize) / (jfloat(4000.0f))), (jfloat(0)), (jfloat(1,000000e-02f)));
	jfloat temp2 = temp0 + temp1;
	sp[0].f = temp2;
	sp += 1;
	}
label_19:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(1494);
	if ((frame[3].i) != 0) goto label_26;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_27;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shadowElevation), (jfloat(0)), -1)) <= 0) goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(1495);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (jfloat(80.0f)), ((frame[6].f) - (jfloat(1))));
	SM_arc_graphics_g2d_Draw_z_float(ctx, temp0);
	LINE_NUMBER(1496);
	((func_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_26:;
	{
	LINE_NUMBER(1499);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((frame[6].f) - (jfloat(0.02f))));
	LINE_NUMBER(1501);
	if ((frame[4].o) == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(1502);
	((func_mindustry_type_UnitType_drawMech_mindustry_gen_Mechc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawMech_mindustry_gen_Mechc])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(1505);
	clinit_mindustry_type_UnitType(ctx);
	sp[0].o = (jobject)SF_mindustry_type_UnitType_legOffset;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Mechc_baseRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_baseRotation_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jfloat temp1 = jfloat(0);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Mechc_walkExtend_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_walkExtend_boolean_R_float, (frame[4].o)))(ctx, (frame[4].o), (jint(1)));
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp2, (jfloat(0.63661975f)), (jfloat(1)));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (temp3 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechSideSway)), (jfloat(0)), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_elevation));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1, temp4);
	LINE_NUMBER(1508);
	clinit_mindustry_type_UnitType(ctx);
	sp[0].o = (jobject)SF_mindustry_type_UnitType_legOffset;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = (jfloat)((func_mindustry_gen_Mechc_baseRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_baseRotation_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jfloat temp6 = temp5 + (jfloat(90.0f));
	jfloat temp7 = jfloat(0);
	jfloat temp8 = (jfloat)((func_mindustry_gen_Mechc_walkExtend_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_walkExtend_boolean_R_float, (frame[4].o)))(ctx, (frame[4].o), (jint(1)));
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp8, (jfloat(0.31830987f)), (jfloat(1)));
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, (temp9 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechFrontSway)), (jfloat(0)), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_elevation));
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp6, temp7, temp10);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1510);
	sp[0].o = frame[1].o;
	clinit_mindustry_type_UnitType(ctx);
	sp[1].o = (jobject)SF_mindustry_type_UnitType_legOffset;
	jfloat temp11 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_type_UnitType(ctx);
	sp[1].o = (jobject)SF_mindustry_type_UnitType_legOffset;
	((func_mindustry_gen_Unit_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_trns_float_float])(ctx, sp[0].o, temp11, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_30:;
	{
	LINE_NUMBER(1513);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Tankc)) == 0) goto label_35;
	}
	{
	LINE_NUMBER(1514);
	((func_mindustry_type_UnitType_drawTank_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawTank_mindustry_gen_Unit])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_gen_Unit, (checkCast(ctx, &class_mindustry_gen_Tankc, (frame[1].o))))));
	}
label_35:;
	{
	LINE_NUMBER(1517);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Legsc)) == 0) goto label_37;
	}
	INST_ILOAD(3);
	if ((--sp)->i != 0) goto label_37;
	{
	LINE_NUMBER(1518);
	((func_mindustry_type_UnitType_drawLegs_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawLegs_mindustry_gen_Unit])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_gen_Unit, (checkCast(ctx, &class_mindustry_gen_Legsc, (frame[1].o))))));
	}
label_37:;
	{
	LINE_NUMBER(1521);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[6].f) - (jfloat(1,000000e-02f))), (jfloat(99.0f)));
	SM_arc_graphics_g2d_Draw_z_float(ctx, temp0);
	LINE_NUMBER(1523);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_40;
	}
	{
	LINE_NUMBER(1524);
	((func_mindustry_type_UnitType_drawPayload_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawPayload_mindustry_gen_Unit])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_gen_Unit, (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o))))));
	}
label_40:;
	{
	LINE_NUMBER(1527);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawSoftShadow) == 0) goto label_42;
	}
	{
	((func_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_42:;
	{
	LINE_NUMBER(1529);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[6].f));
	LINE_NUMBER(1531);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Crawlc)) == 0) goto label_44;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Crawlc, (frame[1].o)));
	LINE_NUMBER(1532);
	if ((frame[3].i) == 0) goto label_46;
	}
	{
	LINE_NUMBER(1533);
	sp[0].o = frame[7].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Rotc_rotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Rotc, INDEX_mindustry_gen_Rotc_rotation_R_float, (frame[7].o)))(ctx, (frame[7].o));
	((func_mindustry_gen_Crawlc_segmentRot_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Crawlc, INDEX_mindustry_gen_Crawlc_segmentRot_float, sp[0].o))(ctx, sp[0].o, temp0);
	}
label_46:;
	{
	LINE_NUMBER(1535);
	((func_mindustry_type_UnitType_drawCrawl_mindustry_gen_Crawlc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawCrawl_mindustry_gen_Crawlc])(ctx, (frame[0].o), (frame[7].o));
	}
label_44:;
	{
	LINE_NUMBER(1538);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawBody) == 0) goto label_48;
	}
	{
	((func_mindustry_type_UnitType_drawOutline_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawOutline_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_48:;
	{
	LINE_NUMBER(1539);
	((func_mindustry_type_UnitType_drawWeaponOutlines_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawWeaponOutlines_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1540);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineLayer), (jfloat(0)), -1)) <= 0) goto label_50;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineLayer));
	}
label_50:;
	{
	LINE_NUMBER(1541);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_trailLength) <= 0) goto label_51;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_naval) != 0) goto label_51;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_52;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_useEngineElevation) != 0) goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(1542);
	((func_mindustry_type_UnitType_drawTrail_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawTrail_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_51:;
	{
	LINE_NUMBER(1544);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engines;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_53;
	}
	{
	((func_mindustry_type_UnitType_drawEngines_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawEngines_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_53:;
	{
	LINE_NUMBER(1545);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[6].f));
	LINE_NUMBER(1546);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawBody) == 0) goto label_55;
	}
	{
	((func_mindustry_type_UnitType_drawBody_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawBody_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_55:;
	{
	LINE_NUMBER(1547);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawCell) == 0) goto label_56;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Crawlc)) != 0) goto label_56;
	}
	{
	((func_mindustry_type_UnitType_drawCell_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawCell_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_56:;
	{
	LINE_NUMBER(1548);
	SM_arc_graphics_g2d_Draw_scl_float(ctx, (frame[2].f));
	LINE_NUMBER(1549);
	((func_mindustry_type_UnitType_drawWeapons_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawWeapons_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1550);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawItems) == 0) goto label_59;
	}
	{
	((func_mindustry_type_UnitType_drawItems_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawItems_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_59:;
	{
	LINE_NUMBER(1551);
	if ((frame[3].i) != 0) goto label_60;
	}
	{
	LINE_NUMBER(1552);
	((func_mindustry_type_UnitType_drawLight_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawLight_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_60:;
	{
	LINE_NUMBER(1555);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shieldAlpha), (jfloat(0)), -1)) <= 0) goto label_62;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawShields) == 0) goto label_62;
	}
	{
	LINE_NUMBER(1556);
	((func_mindustry_type_UnitType_drawShield_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawShield_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_62:;
	{
	LINE_NUMBER(1560);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_parts;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_64;
	}
	{
	LINE_NUMBER(1561);
	frame[7].i = (jint(0));
	}
label_66:;
	{
	jint temp0 = frame[7].i;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_parts;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_64;
	}
	{
	LINE_NUMBER(1562);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart, sp[0].o));
	LINE_NUMBER(1564);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mounts;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= ((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[8].o)))->F_weaponIndex)) goto label_69;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mounts;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[8].o)))->F_weaponIndex));
	sp += 1;
	goto label_70;
	}
label_69:;
	INST_ACONST_NULL();
label_70:;
	{
	sp -= 1;
	frame[9].o = sp[0].o;
	LINE_NUMBER(1565);
	if ((frame[9].o) == nullptr) goto label_72;
	}
	{
	LINE_NUMBER(1566);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	jfloat temp0 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[9].o)))->F_warmup;
	jfloat temp1 = (jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[9].o)))->F_reload;
	sp[1].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[9].o)))->F_weapon;
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, temp0, (temp1 / ((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[1].o))->F_reload)), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[9].o)))->F_smoothReload), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[9].o)))->F_heat), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[9].o)))->F_recoil), ((jfloat)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[9].o)))->F_charge), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation));
	goto label_74;
	}
label_72:;
	{
	LINE_NUMBER(1568);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart$PartParams_set_float_float_float_float_float_float_float_float_float_R_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation));
	}
label_74:;
	{
	LINE_NUMBER(1571);
	if ((isInstance(ctx, (frame[1].o), &class_arc_math_Scaled)) == 0) goto label_75;
	}
	{
	frame[10].o = (checkCast(ctx, &class_arc_math_Scaled, (frame[1].o)));
	LINE_NUMBER(1572);
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[0].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	jfloat temp0 = (jfloat)((func_arc_math_Scaled_fin_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Scaled, INDEX_arc_math_Scaled_fin_R_float, (frame[10].o)))(ctx, (frame[10].o));
	((mindustry_entities_part_DrawPart$PartParams *) NULL_CHECK(sp[0].o))->F_life = temp0;
	}
label_75:;
	{
	LINE_NUMBER(1575);
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1576);
	sp[0].o = frame[8].o;
	clinit_mindustry_entities_part_DrawPart(ctx);
	sp[1].o = (jobject)SF_mindustry_entities_part_DrawPart_params;
	((func_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_part_DrawPart_draw_mindustry_entities_part_DrawPart$PartParams])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1561);
	INST_IINC(7, 1);
	goto label_66;
	}
label_64:;
	{
	LINE_NUMBER(1580);
	if ((frame[3].i) != 0) goto label_79;
	}
	{
	LINE_NUMBER(1581);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_abilities;
	frame[7].o = sp[0].o;
	frame[8].i = (((jarray) nullCheck(ctx, (frame[7].o)))->length);
	frame[9].i = (jint(0));
	}
label_81:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_79;
	}
	{
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i)));
	LINE_NUMBER(1582);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1583);
	((func_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit])(ctx, (frame[10].o), (frame[1].o));
	LINE_NUMBER(1581);
	INST_IINC(9, 1);
	goto label_81;
	}
label_79:;
	{
	LINE_NUMBER(1587);
	if ((frame[4].o) == nullptr) goto label_85;
	}
	{
	LINE_NUMBER(1588);
	sp[0].o = frame[1].o;
	clinit_mindustry_type_UnitType(ctx);
	sp[1].o = (jobject)SF_mindustry_type_UnitType_legOffset;
	jfloat temp0 = -((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	clinit_mindustry_type_UnitType(ctx);
	sp[1].o = (jobject)SF_mindustry_type_UnitType_legOffset;
	((func_mindustry_gen_Unit_trns_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_trns_float_float])(ctx, sp[0].o, temp0, (-((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	}
label_85:;
	{
	LINE_NUMBER(1591);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1592);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:shieldColor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1596);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shieldColor;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_type_UnitType *) NULL_CHECK(sp[-1].o))->F_shieldColor;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawMining_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawMining", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1600);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawMineBeam) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1601);
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineBeamOffset;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(1.1f)), (jfloat(0.5f)));
	frame[2].f = (temp0 + temp1);
	LINE_NUMBER(1602);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), (frame[2].f));
	frame[3].f = (temp2 + temp3);
	LINE_NUMBER(1603);
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), (frame[2].f));
	frame[4].f = (temp4 + temp5);
	LINE_NUMBER(1605);
	((func_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[3].f), (frame[4].f));
	}
label_1:;
	LINE_NUMBER(1607);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawMiningBeam", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1610);
	jint temp0 = (jint)((func_mindustry_gen_Unit_mining_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_mining_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1611);
	frame[4].f = (jfloat(12.0f));
	frame[5].f = (jfloat(1));
	LINE_NUMBER(1612);
	frame[6].f = (jfloat(0.3f));
	LINE_NUMBER(1614);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mineTile;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(48.0f))), (frame[4].f), (frame[5].f));
	frame[7].f = (temp0 + temp1);
	LINE_NUMBER(1615);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mineTile;
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[0].o);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) + (jfloat(48.0f))), ((frame[4].f) + (jfloat(2))), (frame[5].f));
	frame[8].f = (temp2 + temp3);
	LINE_NUMBER(1617);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(115.1f)));
	LINE_NUMBER(1619);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_lightGray;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp4 = (jfloat(1)) - (frame[6].f);
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(0.5f)), (frame[6].f));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (temp4 + temp5));
	LINE_NUMBER(1621);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (clinit_mindustry_core_Renderer(ctx), (jfloat)SF_mindustry_core_Renderer_unitLaserOpacity));
	LINE_NUMBER(1622);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineLaserRegion;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineLaserEndRegion;
	SM_mindustry_graphics_Drawf_laser_arc_graphics_g2d_TextureRegion_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f), (frame[7].f), (frame[8].f), (jfloat(0.75f)));
	LINE_NUMBER(1624);
	jint temp6 = (jint)((func_mindustry_gen_Unit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isLocal_R_boolean])(ctx, (frame[1].o));
	if (temp6 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1625);
	jfloat temp0 = jfloat(1);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp0, sp[0].o);
	LINE_NUMBER(1626);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mineTile;
	jfloat temp1 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mineTile;
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float_float(ctx, temp1, temp2, (jint(4)), ((jfloat(4.0f)) * (clinit_arc_math_Mathf(ctx), (jfloat)SF_arc_math_Mathf_sqrt2)), (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time));
	}
label_11:;
	{
	LINE_NUMBER(1629);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(1630);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawPayload_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawPayload", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1633);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)))))(ctx, (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1634);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(1635);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((frame[2].f) - (jfloat(0.02f))));
	LINE_NUMBER(1636);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)))))(ctx, (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o))));
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_payloads_Payload, sp[0].o));
	LINE_NUMBER(1637);
	((func_mindustry_world_blocks_payloads_Payload_set_float_float_float) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_set_float_float_float, (frame[3].o)))(ctx, (frame[3].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation));
	LINE_NUMBER(1638);
	((func_mindustry_world_blocks_payloads_Payload_draw) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_payloads_Payload, INDEX_mindustry_world_blocks_payloads_Payload_draw, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(1639);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	}
label_1:;
	LINE_NUMBER(1641);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawShield_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawShield", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1644);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_shieldAlpha_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_shieldAlpha_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(1645);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_hitSize_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_hitSize_R_float])(ctx, (frame[1].o));
	frame[3].f = (temp1 * (jfloat(1.3f)));
	LINE_NUMBER(1646);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp4 = (jint)SM_arc_graphics_g2d_Lines_circleVertices_float_R_int(ctx, (frame[3].f));
	jfloat temp5 = frame[3].f;
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_clear;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c2;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[3].o = frame[1].o;
	LINE_NUMBER(1648);
	sp[2].o = (jobject)((func_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp6 = (jfloat)((func_mindustry_gen_Unit_hitTime_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_hitTime_R_float])(ctx, (frame[1].o));
	jfloat temp7 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (temp6 / (jfloat(2))));
	sp[1].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o, temp7);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, ((jfloat(0.7f)) * (frame[2].f)));
	LINE_NUMBER(1646);
	SM_arc_graphics_g2d_Fill_light_float_float_int_float_arc_graphics_Color_arc_graphics_Color(ctx, temp2, temp3, temp4, temp5, sp[0].o, sp[1].o);
	LINE_NUMBER(1650);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawShadow", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1653);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_elevation), ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shadowElevation), (jfloat(1)));
	frame[2].f = ((temp0 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shadowElevationScl)) * ((jfloat(1)) - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_drownTime)));
	LINE_NUMBER(1654);
	frame[3].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat(-12.0f)) * (frame[2].f)));
	frame[4].f = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat(-13.0f)) * (frame[2].f)));
	LINE_NUMBER(1655);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_floorWorld_float_float_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, (frame[3].f), (frame[4].f));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1657);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[5].o)))->F_canShadow) == 0) goto label_5;
	}
	INST_FCONST(1);
	goto label_6;
label_5:;
	INST_FCONST(0);
label_6:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(1659);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shadowAlpha), (jfloat(0)), 1)) >= 0) goto label_8;
	}
	INST_FLOAD(6);
	goto label_9;
label_8:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_approachDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shadowAlpha), (frame[6].f), (jfloat(0.11f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_9:;
	{
	sp -= 2;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_shadowAlpha = sp[1].f;
	LINE_NUMBER(1660);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_shadow;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_shadow;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_shadowAlpha)));
	LINE_NUMBER(1662);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shadowRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat(-12.0f)) * (frame[2].f))), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat(-13.0f)) * (frame[2].f))), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(1663);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(1664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawSoftShadow", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1667);
	((func_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float])(ctx, (frame[0].o), (frame[1].o), (jfloat(1)));
	LINE_NUMBER(1668);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawSoftShadow", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1671);
	((func_mindustry_type_UnitType_drawSoftShadow_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_drawSoftShadow_float_float_float_float])(ctx, (frame[0].o), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), (frame[2].f));
	LINE_NUMBER(1672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawSoftShadow_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawSoftShadow", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(1675);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), ((jfloat(0.4f)) * (frame[4].f)));
	LINE_NUMBER(1676);
	frame[5].f = (jfloat(1.6f));
	LINE_NUMBER(1677);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_region;
	jint temp0 = (jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_region;
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, ((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height));
	jfloat temp2 = jfloat(temp1);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_region;
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	frame[6].f = ((temp2 * temp3) * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_softShadowScl));
	LINE_NUMBER(1678);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_softShadowRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, (frame[1].f), (frame[2].f), (((frame[6].f) * (frame[5].f)) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl)), (((frame[6].f) * (frame[5].f)) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl)), ((frame[3].f) - (jfloat(90.0f))));
	LINE_NUMBER(1679);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(1680);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawItems_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawItems", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1683);
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1686);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_itemTime), (jfloat(1,000000e-02f)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(1687);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(5.0f)), (jfloat(1)));
	frame[2].f = temp0;
	LINE_NUMBER(1688);
	frame[3].f = (((jfloat(5.0f)) + (frame[2].f)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_itemTime));
	LINE_NUMBER(1690);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, ((frame[2].f) * (jfloat(0.1f))));
	LINE_NUMBER(1691);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_fullIcon;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp2 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp3 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemOffsetY;
	LINE_NUMBER(1692);
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp2, temp3);
	jfloat temp5 = temp1 + temp4;
	jfloat temp6 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp7 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp8 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemOffsetY;
	LINE_NUMBER(1693);
	jfloat temp9 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp7, temp8);
	jfloat temp10 = temp6 + temp9;
	jfloat temp11 = frame[3].f;
	jfloat temp12 = frame[3].f;
	jfloat temp13 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation;
	LINE_NUMBER(1691);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp5, temp10, temp11, temp12, temp13);
	LINE_NUMBER(1695);
	SM_arc_graphics_g2d_Draw_mixcol(ctx);
	LINE_NUMBER(1697);
	frame[3].f = (((((jfloat(3.0f)) + (frame[2].f)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_itemTime)) + (jfloat(0.5f))) * (jfloat(2)));
	LINE_NUMBER(1698);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1699);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemCircleRegion;
	jfloat temp14 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp15 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp16 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemOffsetY;
	LINE_NUMBER(1700);
	jfloat temp17 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp15, temp16);
	jfloat temp18 = temp14 + temp17;
	jfloat temp19 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp20 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp21 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemOffsetY;
	LINE_NUMBER(1701);
	jfloat temp22 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp20, temp21);
	jfloat temp23 = temp19 + temp22;
	jfloat temp24 = frame[3].f;
	jfloat temp25 = frame[3].f;
	LINE_NUMBER(1699);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp18, temp23, temp24, temp25);
	LINE_NUMBER(1704);
	jint temp26 = (jint)((func_mindustry_gen_Unit_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isLocal_R_boolean])(ctx, (frame[1].o));
	if (temp26 == 0) goto label_18;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_pixelate) != 0) goto label_18;
	}
	{
	LINE_NUMBER(1705);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_stack;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_amount)));
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp2 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemOffsetY;
	LINE_NUMBER(1706);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, temp1, temp2);
	jfloat temp4 = temp0 + temp3;
	jfloat temp5 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp6 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + (jfloat(180.0f));
	jfloat temp7 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_itemOffsetY;
	LINE_NUMBER(1707);
	jfloat temp8 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, temp6, temp7);
	jfloat temp9 = (temp5 + temp8) - (jfloat(3.0f));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	jfloat temp10 = (jfloat(0.25f)) * ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_itemTime);
	jfloat temp11 = jfloat(1);
	LINE_NUMBER(1708);
	jfloat temp12 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, temp11);
	jfloat temp13 = temp10 / temp12;
	jint temp14 = jint(0);
	jint temp15 = jint(1);
	LINE_NUMBER(1705);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_arc_graphics_Color_float_boolean_int_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_arc_graphics_Color_float_boolean_int_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, temp4, temp9, sp[2].o, temp13, temp14, temp15);
	}
label_18:;
	LINE_NUMBER(1712);
	SM_arc_graphics_g2d_Draw_reset(ctx);
label_2:;
	LINE_NUMBER(1714);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawTrail_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawTrail", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1717);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_trail;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1718);
	sp[0].o = frame[1].o;
	clinit_mindustry_graphics_Trail(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_Trail);
	init_mindustry_graphics_Trail_int(ctx, sp[1].o, ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_trailLength));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_trail = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(1720);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_trail;
	frame[2].o = sp[0].o;
	LINE_NUMBER(1721);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_trailColor;
	sp += 1;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_type_UnitType *) NULL_CHECK(sp[-1].o))->F_trailColor;
label_5:;
	{
	jfloat temp0 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineSize;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time), (jfloat(2)), (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engineSize) / (jfloat(4.0f))));
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_useEngineElevation) == 0) goto label_6;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_elevation;
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_FCONST(1);
label_7:;
	{
	sp -= 5;
	((func_mindustry_graphics_Trail_draw_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Trail_draw_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, ((sp[2].f + (sp[3].f * sp[4].f)) * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_trailScl)));
	LINE_NUMBER(1722);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawEngines_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawEngines", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1725);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_useEngineElevation) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_elevation;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(1);
label_2:;
	{
	sp -= 1;
	if ((floatCompare(sp[0].f, (jfloat(1,000000e-04f)), 1)) > 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(1727);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_engines;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_UnitType$UnitEngine, sp[0].o));
	LINE_NUMBER(1728);
	((func_mindustry_type_UnitType$UnitEngine_draw_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_type_UnitType$UnitEngine_draw_mindustry_gen_Unit])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(1729);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1731);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(1732);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawWeapons_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawWeapons", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1735);
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1737);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mounts;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1738);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_weapon;
	((func_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weapon_draw_mindustry_gen_Unit_mindustry_entities_units_WeaponMount])(ctx, sp[0].o, (frame[1].o), (frame[5].o));
	LINE_NUMBER(1737);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1741);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1742);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawWeaponOutlines_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawWeaponOutlines", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1745);
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1746);
	((func_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1748);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_mounts;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1749);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_weapon;
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_top) != 0) goto label_6;
	}
	{
	LINE_NUMBER(1751);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[6].f = temp0;
	LINE_NUMBER(1752);
	jfloat temp1 = frame[6].f;
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_weapon;
	SM_arc_graphics_g2d_Draw_z_float(ctx, (temp1 + ((jfloat)((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_layerOffset)));
	LINE_NUMBER(1754);
	sp[0].o = (jobject)((mindustry_entities_units_WeaponMount *) NULL_CHECK((frame[5].o)))->F_weapon;
	((func_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weapon_drawOutline_mindustry_gen_Unit_mindustry_entities_units_WeaponMount])(ctx, sp[0].o, (frame[1].o), (frame[5].o));
	LINE_NUMBER(1756);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[6].f));
	}
label_6:;
	{
	LINE_NUMBER(1748);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1760);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1761);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawOutline_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawOutline", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1764);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1766);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1767);
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1768);
	((func_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1769);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_outlineRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(1770);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_2:;
	LINE_NUMBER(1772);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawBody_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawBody", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1775);
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1777);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_UnderwaterMovec)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1778);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(1779);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_mapColor;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.9f)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(1)));
	}
label_2:;
	{
	LINE_NUMBER(1782);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_region;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(1784);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1785);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawCell_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawCell", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1788);
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1790);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, (frame[0].o), (frame[1].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1791);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_cellRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(1792);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1793);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:cellColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1796);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_healthf_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_healthf_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	frame[2].f = temp1;
	LINE_NUMBER(1797);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_color;
	jfloat temp2 = frame[2].f;
	clinit_arc_util_Time(ctx);
	jfloat temp3 = (jfloat)SF_arc_util_Time_time;
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((frame[2].f) * (jfloat(5.0f))), (jfloat(1)));
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, temp3, temp4, ((jfloat(1)) - (frame[2].f)));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, (temp2 + temp5));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawLight_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawLight", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1801);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lightRadius), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitLight) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1802);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = (jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lightRadius;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lightColor;
	SM_mindustry_graphics_Drawf_light_float_float_float_arc_graphics_Color_float(ctx, temp0, temp1, temp2, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_lightOpacity));
	}
label_1:;
	LINE_NUMBER(1804);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawTank_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawTank", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1807);
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1808);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(1810);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1811);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Tankc_treadTime_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Tankc, INDEX_mindustry_gen_Tankc_treadTime_R_float, (checkCast(ctx, &class_mindustry_gen_Tankc, (frame[1].o)))))(ctx, (checkCast(ctx, &class_mindustry_gen_Tankc, (frame[1].o))));
	frame[2].i = ((jint(temp0)) % ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadFrames));
	LINE_NUMBER(1812);
	frame[3].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRects;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_3;
	}
	{
	LINE_NUMBER(1813);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRegions;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))), (frame[2].i)));
	LINE_NUMBER(1814);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_treadRects;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)));
	LINE_NUMBER(1815);
	frame[6].f = (-(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_x) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_width) / (jfloat(2)))));
	LINE_NUMBER(1816);
	frame[7].f = (-(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_y) + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_height) / (jfloat(2)))));
	LINE_NUMBER(1818);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[8].o = sp[0].o;
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_12:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_13;
	}
	{
	frame[11].i = ((jint)ARRAY_ACCESS(jint, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(1819);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((frame[6].f) * (jfloat((frame[11].i)))), (frame[7].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_rotate_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(1820);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) / (jfloat(4.0f)));
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp1, (temp2 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) / (jfloat(4.0f)))), (((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_width) / (jfloat(4.0f))), (((jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_height))) * ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[4].o)))->F_scale)) / (jfloat(4.0f))), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(1818);
	INST_IINC(10, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1812);
	INST_IINC(3, 1);
	goto label_6;
	}
label_3:;
	LINE_NUMBER(1824);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawLegs_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawLegs", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1827);
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1828);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c3;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_getMixColor_R_arc_graphics_Color(ctx);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1830);
	sp[0].o = (jobject)((func_mindustry_gen_Legsc_legs_R_Array1_mindustry_entities_Leg) resolveInterfaceMethod(ctx, &class_mindustry_gen_Legsc, INDEX_mindustry_gen_Legsc_legs_R_Array1_mindustry_entities_Leg, (checkCast(ctx, &class_mindustry_gen_Legsc, (frame[1].o)))))(ctx, (checkCast(ctx, &class_mindustry_gen_Legsc, (frame[1].o))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1832);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_footRegion;
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width));
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_footRegion;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	frame[3].f = ((temp0 * temp1) * (jfloat(1.5f)));
	LINE_NUMBER(1833);
	jfloat temp2 = (jfloat)((func_mindustry_gen_Legsc_baseRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Legsc, INDEX_mindustry_gen_Legsc_baseRotation_R_float, (checkCast(ctx, &class_mindustry_gen_Legsc, (frame[1].o)))))(ctx, (checkCast(ctx, &class_mindustry_gen_Legsc, (frame[1].o))));
	frame[4].f = temp2;
	LINE_NUMBER(1834);
	frame[5].f = ((jfloat(1)) - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_drownTime));
	LINE_NUMBER(1836);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_footRegion;
	jint temp3 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp3 == 0) goto label_7;
	}
	{
	LINE_NUMBER(1837);
	frame[6].o = (frame[2].o);
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_9:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_7;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(1838);
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[9].o)))->F_base;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[9].o)))->F_base;
	SM_mindustry_graphics_Drawf_shadow_float_float_float_float(ctx, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (frame[3].f), (frame[5].f));
	LINE_NUMBER(1837);
	INST_IINC(8, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(1843);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)));
	}
label_12:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_13;
	{
	LINE_NUMBER(1844);
	if (((frame[6].i) % (jint(2))) != 0) goto label_15;
	}
	{
	jint temp0 = (frame[6].i) / (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_16;
	}
label_15:;
	{
	jint temp0 = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1))) - ((frame[6].i) / (jint(2)));
	sp[0].i = temp0;
	sp += 1;
	}
label_16:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1845);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[7].i)));
	LINE_NUMBER(1846);
	if ((floatCompare((jfloat((frame[7].i))), ((jfloat((((jarray) nullCheck(ctx, (frame[2].o)))->length))) / (jfloat(2))), -1)) < 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(1847);
	jint temp0 = (jint)SM_arc_math_Mathf_sign_boolean_R_int(ctx, (frame[9].i));
	frame[10].i = temp0;
	LINE_NUMBER(1849);
	sp[0].o = checkCast(ctx, &class_mindustry_gen_Legsc, (frame[1].o));
	clinit_mindustry_type_UnitType(ctx);
	sp[1].o = (jobject)SF_mindustry_type_UnitType_legOffset;
	sp[0].o = (jobject)((func_mindustry_gen_Legsc_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2) resolveInterfaceMethod(ctx, &class_mindustry_gen_Legsc, INDEX_mindustry_gen_Legsc_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[7].i));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1851);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_inv_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setLength_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legExtension));
	LINE_NUMBER(1853);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_footRegion;
	jint temp1 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_25;
	}
	{
	if (((jint)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_moving) == 0) goto label_25;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shadowElevation), (jfloat(0)), -1)) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(1854);
	frame[12].f = (((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_shadowElevation) * (frame[5].f));
	LINE_NUMBER(1855);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_slope_float_R_float(ctx, ((jfloat(1)) - ((jfloat)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_stage)));
	frame[13].f = (temp0 * (frame[12].f));
	LINE_NUMBER(1856);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_shadow;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1857);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_footRegion;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) + ((jfloat(-12.0f)) * (frame[13].f));
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	jfloat temp2 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) + ((jfloat(-13.0f)) * (frame[13].f));
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	jfloat temp3 = (jfloat)((func_arc_math_geom_Vec2_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angleTo_arc_math_geom_Position_R_float])(ctx, sp[1].o, sp[2].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp1, temp2, temp3);
	LINE_NUMBER(1858);
	SM_arc_graphics_g2d_Draw_color(ctx);
	}
label_25:;
	{
	LINE_NUMBER(1861);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c3;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c3;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a));
	LINE_NUMBER(1863);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_footRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_32;
	}
	{
	LINE_NUMBER(1864);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_footRegion;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_angleTo_arc_math_geom_Position_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_angleTo_arc_math_geom_Position_R_float])(ctx, sp[1].o, sp[2].o);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	}
label_32:;
	{
	LINE_NUMBER(1867);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legBaseUnder) == 0) goto label_34;
	}
	{
	LINE_NUMBER(1868);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legBaseRegion;
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height));
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((temp0 * temp1) * (jfloat((frame[10].i)))));
	LINE_NUMBER(1869);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legBaseRegion;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = temp4 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	jfloat temp6 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_boolean(ctx, sp[0].o, temp3, temp5, temp6, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (jint(0)));
	LINE_NUMBER(1871);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp7 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height));
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp8 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((temp7 * temp8) * (jfloat((frame[10].i)))));
	LINE_NUMBER(1872);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp9 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_x;
	jfloat temp10 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	jfloat temp11 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_boolean(ctx, sp[0].o, temp9, temp10, temp11, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (jint(0)));
	goto label_39;
	}
label_34:;
	{
	LINE_NUMBER(1874);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height));
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((temp0 * temp1) * (jfloat((frame[10].i)))));
	LINE_NUMBER(1875);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_x;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[11].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_boolean(ctx, sp[0].o, temp2, temp3, temp4, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (jint(0)));
	LINE_NUMBER(1877);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legBaseRegion;
	jfloat temp5 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height));
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp6 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, ((temp5 * temp6) * (jfloat((frame[10].i)))));
	LINE_NUMBER(1878);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legBaseRegion;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	jfloat temp7 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp8 = temp7 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	jfloat temp9 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp10 = temp9 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y);
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	jfloat temp11 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_base;
	SM_arc_graphics_g2d_Lines_line_arc_graphics_g2d_TextureRegion_float_float_float_float_boolean(ctx, sp[0].o, temp8, temp10, temp11, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), (jint(0)));
	}
label_39:;
	{
	LINE_NUMBER(1881);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_jointRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_43;
	}
	{
	LINE_NUMBER(1882);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_jointRegion;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_entities_Leg *) NULL_CHECK((frame[8].o)))->F_joint;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_43:;
	{
	LINE_NUMBER(1843);
	INST_IINC(6, -1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1887);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_baseJointRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_45;
	}
	{
	LINE_NUMBER(1888);
	frame[6].i = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1)));
	}
label_47:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_45;
	{
	LINE_NUMBER(1890);
	sp[0].o = checkCast(ctx, &class_mindustry_gen_Legsc, (frame[1].o));
	clinit_mindustry_type_UnitType(ctx);
	sp[1].o = (jobject)SF_mindustry_type_UnitType_legOffset;
	sp += 2;
	if (((frame[6].i) % (jint(2))) != 0) goto label_49;
	}
	{
	jint temp0 = (frame[6].i) / (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_50;
	}
label_49:;
	{
	jint temp0 = ((((jarray) nullCheck(ctx, (frame[2].o)))->length) - (jint(1))) - ((frame[6].i) / (jint(2)));
	sp[0].i = temp0;
	sp += 1;
	}
label_50:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_mindustry_gen_Legsc_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2) resolveInterfaceMethod(ctx, &class_mindustry_gen_Legsc, INDEX_mindustry_gen_Legsc_legOffset_arc_math_geom_Vec2_int_R_arc_math_geom_Vec2, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].i);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1891);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_baseJointRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[7].o)))->F_y), (frame[4].f));
	LINE_NUMBER(1888);
	INST_IINC(6, -1);
	goto label_47;
	}
label_45:;
	{
	LINE_NUMBER(1895);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_baseRegion;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_53;
	}
	{
	LINE_NUMBER(1896);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_baseRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), ((frame[4].f) - (jfloat(90.0f))));
	}
label_53:;
	{
	LINE_NUMBER(1899);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1900);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawCrawl_mindustry_gen_Crawlc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawCrawl", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1903);
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[1].o)));
	LINE_NUMBER(1904);
	((func_mindustry_type_UnitType_applyColor_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(1907);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Segmentc)) == 0) goto label_3;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Segmentc, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Segmentc_headSegment_R_mindustry_gen_Segmentc) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_headSegment_R_mindustry_gen_Segmentc, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Crawlc)) == 0) goto label_3;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Crawlc, (frame[6].o)));
	jfloat temp0 = (jfloat)((func_mindustry_gen_Crawlc_crawlTime_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Crawlc, INDEX_mindustry_gen_Crawlc_crawlTime_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jint temp1 = (jint)((func_mindustry_gen_Segmentc_segmentIndex_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Segmentc, INDEX_mindustry_gen_Segmentc_segmentIndex_R_int, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp2 = temp0 + (((jfloat(temp1)) * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentPhase)) * (jfloat(((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segments))));
	sp[0].f = temp2;
	sp += 1;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(1908);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Crawlc_crawlTime_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Crawlc, INDEX_mindustry_gen_Crawlc_crawlTime_R_float, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(1910);
	frame[4].i = (jint(0));
	}
label_8:;
	{
	if ((frame[4].i) >= (jint(2))) goto label_9;
	}
	{
	LINE_NUMBER(1911);
	if ((frame[4].i) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentOutlineRegions;
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_type_UnitType *) NULL_CHECK(sp[-1].o))->F_segmentRegions;
label_12:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1913);
	frame[6].i = (jint(0));
	}
label_14:;
	{
	if ((frame[6].i) >= ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segments)) goto label_15;
	}
	{
	LINE_NUMBER(1914);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, ((frame[3].f) + ((jfloat((frame[6].i))) * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentPhase))), ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentScl), ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentMag));
	frame[7].f = temp0;
	LINE_NUMBER(1917);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Crawlc_segmentRot_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Crawlc, INDEX_mindustry_gen_Crawlc_segmentRot_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_slerp_float_float_float_R_float(ctx, temp1, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_rotation), ((jfloat((frame[6].i))) / (jfloat((((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segments) - (jint(1)))))));
	frame[8].f = temp2;
	LINE_NUMBER(1918);
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsx_float_float_R_float(ctx, (frame[8].f), (frame[7].f));
	frame[9].f = temp3;
	jfloat temp4 = (jfloat)SM_arc_math_Angles_trnsy_float_float_R_float(ctx, (frame[8].f), (frame[7].f));
	frame[10].f = temp4;
	LINE_NUMBER(1927);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i))), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_x) + (frame[9].f)), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_y) + (frame[10].f)), ((frame[8].f) - (jfloat(90.0f))));
	LINE_NUMBER(1930);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_drawCell) == 0) goto label_22;
	}
	INST_ILOAD(4);
	if ((--sp)->i == 0) goto label_22;
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentCellRegions;
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))));
	if (temp0 == 0) goto label_22;
	}
	{
	LINE_NUMBER(1931);
	sp[0].o = (jobject)((func_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color])(ctx, (frame[0].o), (frame[2].o));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1932);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_segmentCellRegions;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_x) + (frame[9].f)), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_y) + (frame[10].f)), ((frame[8].f) - (jfloat(90.0f))));
	LINE_NUMBER(1933);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_22:;
	{
	LINE_NUMBER(1913);
	INST_IINC(6, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(1910);
	INST_IINC(4, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(1937);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_drawMech_mindustry_gen_Mechc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:drawMech", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1940);
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[1].o)));
	LINE_NUMBER(1942);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1944);
	frame[3].f = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_elevation);
	LINE_NUMBER(1946);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Mechc_walkExtend_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_walkExtend_boolean_R_float, (frame[1].o)))(ctx, (frame[1].o), (jint(1)));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp0, (jfloat(0.63661975f)), (jfloat(1)));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp1, (jfloat(0)), (frame[3].f));
	frame[4].f = temp2;
	LINE_NUMBER(1947);
	jfloat temp3 = (jfloat)((func_mindustry_gen_Mechc_walkExtend_boolean_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_walkExtend_boolean_R_float, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_lerp_float_float_float_R_float(ctx, temp3, (jfloat(0)), (frame[3].f));
	frame[5].f = temp4;
	LINE_NUMBER(1948);
	frame[6].f = ((frame[3].f) * (jfloat(2)));
	LINE_NUMBER(1950);
	jint temp5 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[2].o));
	if (temp5 == 0) goto label_7;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_floorOn_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	sp++;
label_8:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1952);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[7].o)))->F_isLiquid) == 0) goto label_10;
	}
	{
	LINE_NUMBER(1953);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[7].o)))->F_mapColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (jfloat(0.5f)));
	}
label_10:;
	{
	LINE_NUMBER(1956);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[8].o = sp[0].o;
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_12:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_13;
	}
	{
	frame[11].i = ((jint)ARRAY_ACCESS(jint, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(1957);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechLegColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitTime));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), (((jfloat((frame[11].i))) * (frame[5].f)) / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mechStride)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitTime));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, temp2);
	LINE_NUMBER(1959);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_x;
	sp[1].o = frame[1].o;
	LINE_NUMBER(1960);
	jfloat temp4 = (jfloat)((func_mindustry_gen_Mechc_baseRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_baseRotation_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp5 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, temp4, (((frame[5].f) * (jfloat((frame[11].i)))) - (frame[6].f)), ((-(frame[6].f)) * (jfloat((frame[11].i)))));
	jfloat temp6 = temp3 + temp5;
	jfloat temp7 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_y;
	sp[1].o = frame[1].o;
	LINE_NUMBER(1961);
	jfloat temp8 = (jfloat)((func_mindustry_gen_Mechc_baseRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_baseRotation_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp9 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, temp8, (((frame[5].f) * (jfloat((frame[11].i)))) - (frame[6].f)), ((-(frame[6].f)) * (jfloat((frame[11].i)))));
	jfloat temp10 = temp7 + temp9;
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp11 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_width));
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	LINE_NUMBER(1962);
	jfloat temp12 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	jfloat temp13 = (temp11 * temp12) * (jfloat((frame[11].i)));
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	jfloat temp14 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_height));
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legRegion;
	LINE_NUMBER(1963);
	jfloat temp15 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	jfloat temp16 = temp14 * temp15;
	jfloat temp17 = jfloat(1);
	jfloat temp18 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((-(frame[4].f)) * (jfloat((frame[11].i)))), (jfloat(0)));
	jfloat temp19 = temp16 * (temp17 - (temp18 * (jfloat(0.5f))));
	sp[1].o = frame[1].o;
	LINE_NUMBER(1964);
	jfloat temp20 = (jfloat)((func_mindustry_gen_Mechc_baseRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_baseRotation_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp21 = (temp20 - (jfloat(90.0f))) + (((jfloat(35.0f)) * (jfloat((frame[11].i)))) * (frame[3].f));
	LINE_NUMBER(1959);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp6, temp10, temp13, temp19, temp21);
	LINE_NUMBER(1956);
	INST_IINC(10, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1967);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitTime));
	LINE_NUMBER(1969);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_lastDrownFloor;
	if (sp[0].o == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(1970);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_lastDrownFloor;
	sp[2].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_mapColor;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(0.83f)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_drownTime) * (jfloat(0.9f))));
	goto label_26;
	}
label_24:;
	{
	LINE_NUMBER(1972);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_26:;
	{
	LINE_NUMBER(1975);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_baseRegion;
	sp[1].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Mechc_baseRotation_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Mechc, INDEX_mindustry_gen_Mechc_baseRotation_R_float, (frame[1].o)))(ctx, (frame[1].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_arc_math_geom_Position_float(ctx, sp[0].o, sp[1].o, (temp0 - (jfloat(90.0f))));
	LINE_NUMBER(1977);
	SM_arc_graphics_g2d_Draw_mixcol(ctx);
	LINE_NUMBER(1978);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:applyOutlineColor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1981);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_drownTime), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_lastDrownFloor;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1982);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_lastDrownFloor;
	sp[2].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_mapColor;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(0.8f)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_drownTime) * (jfloat(0.9f))));
	}
label_1:;
	LINE_NUMBER(1984);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_applyColor_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:applyColor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1987);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(1988);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_healFlash) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1989);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_healColor;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_healTime) - ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitTime)));
	sp[0].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(1991);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitTime;
	sp[1].f = temp0;
	sp += 2;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_healFlash) != 0) goto label_4;
	}
	INST_FCONST(0);
	goto label_5;
label_4:;
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_healTime));
	sp[0].f = temp0;
	sp += 1;
	}
label_5:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, sp[1].f, sp[2].f);
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, temp0);
	LINE_NUMBER(1993);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_drownTime), (jfloat(0)), -1)) <= 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_lastDrownFloor;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1994);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_lastDrownFloor;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_mapColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.83f)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_drownTime) * (jfloat(0.9f))));
	}
label_7:;
	{
	LINE_NUMBER(1997);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_overlays;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1998);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_overlays;
	((func_mindustry_graphics_OverlayRenderer_checkApplySelection_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_OverlayRenderer_checkApplySelection_mindustry_gen_Unit])(ctx, sp[0].o, (frame[1].o));
	}
label_9:;
	LINE_NUMBER(2000);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_type_UnitType_lambda$researchRequirements$0_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$researchRequirements$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1419);
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_amount) <= 0) goto label_1;
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

jbool M_mindustry_type_UnitType_lambda$getRequirements$9_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$getRequirements$9", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1373);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
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

jbool M_mindustry_type_UnitType_lambda$getRequirements$7_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$getRequirements$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1371);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_units_UnitAssembler)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitAssembler, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler *) NULL_CHECK((frame[2].o)))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_37(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_37 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_37);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_mindustry_type_UnitType_lambda$getRequirements$8_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$getRequirements$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1371);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
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

jbool M_mindustry_type_UnitType_lambda$getRequirements$6_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$getRequirements$6", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1364);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
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

jbool M_mindustry_type_UnitType_lambda$getRequirements$4_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$getRequirements$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1361);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_units_UnitFactory)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[2].o)))->F_plans;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_38(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_38 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_mindustry_type_UnitType_lambda$getRequirements$5_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$getRequirements$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1361);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory$UnitPlan *) NULL_CHECK((frame[1].o)))->F_unit;
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

jbool M_mindustry_type_UnitType_lambda$getRequirements$3_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$getRequirements$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1353);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))) != (frame[0].o)) goto label_1;
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

jbool SM_mindustry_type_UnitType_lambda$getRequirements$2_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$getRequirements$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1351);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_world_consumers_ConsumeItems));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_UnitType_lambda$getRequirements$0_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$getRequirements$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1349);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_units_Reconstructor)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_units_Reconstructor, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK((frame[2].o)))->F_upgrades;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Boolf_39(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Boolf_39 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Boolf_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_mindustry_type_UnitType_lambda$getRequirements$1_Array1_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$getRequirements$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1349);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(1)))) != (frame[0].o)) goto label_1;
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

jbool SM_mindustry_type_UnitType_lambda$createIcons$1_mindustry_entities_part_DrawPart_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$createIcons$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1262);
	popStackFrame(ctx);
	return ((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_under);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_type_UnitType_lambda$createIcons$0_mindustry_entities_part_DrawPart_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$createIcons$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1261);
	popStackFrame(ctx);
	return ((jint)((mindustry_entities_part_DrawPart *) NULL_CHECK((frame[0].o)))->F_under);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_type_UnitType_lambda$estimateDps$0_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$estimateDps$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1135);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	popStackFrame(ctx);
	return ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_killShooter);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_type_UnitType_lambda$init$4_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$init$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1065);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_noAttack) != 0) goto label_1;
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

jbool SM_mindustry_type_UnitType_lambda$init$3_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$init$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1063);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	jint temp0 = (jint)((func_mindustry_entities_bullet_BulletType_heals_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_heals_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_lambda$init$2_mindustry_entities_Effect$EffectContainer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$init$2", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1022);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(1.5f)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1023);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(((jint)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_id))));
	LINE_NUMBER(1024);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	if ((frame[2].i) >= (jint(3))) goto label_4;
	}
	{
	LINE_NUMBER(1025);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_v;
	jfloat temp0 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_rotation;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[1].o, (jfloat(40.0f)));
	jfloat temp2 = temp0 + temp1;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_rand;
	jfloat temp3 = jfloat(6.0f);
	jfloat temp4 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_finpow_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_finpow_R_float])(ctx, (frame[1].o));
	jfloat temp5 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[1].o, (temp3 * temp4));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp2, temp5);
	LINE_NUMBER(1026);
	jfloat temp6 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_x;
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_v;
	jfloat temp7 = temp6 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rand;
	jfloat temp8 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, (jfloat(4.0f)));
	jfloat temp9 = temp7 + temp8;
	jfloat temp10 = (jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_y;
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_v;
	jfloat temp11 = temp10 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rand;
	jfloat temp12 = (jfloat)((func_arc_math_Rand_range_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_range_float_R_float])(ctx, sp[0].o, (jfloat(4.0f)));
	jfloat temp13 = temp11 + temp12;
	jfloat temp14 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fout_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fout_R_float])(ctx, (frame[1].o));
	jfloat temp15 = (jfloat)((func_mindustry_entities_Effect$EffectContainer_fin_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_Effect$EffectContainer_fin_R_float])(ctx, (frame[1].o));
	jfloat temp16 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp14, ((temp15 * ((jfloat)((mindustry_entities_Effect$EffectContainer *) NULL_CHECK((frame[1].o)))->F_lifetime)) / (jfloat(8.0f))));
	jfloat temp17 = ((temp16 * ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_hitSize)) / (jfloat(28.0f))) * (jfloat(3.0f));
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rand;
	jfloat temp18 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0.8f)), (jfloat(1.1f)));
	SM_arc_graphics_g2d_Fill_circle_float_float_float(ctx, temp9, temp13, ((temp17 * temp18) + (jfloat(0.3f))));
	LINE_NUMBER(1024);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(1028);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_type_UnitType_lambda$init$1_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$init$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1008);
	if (((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_rotate) != 0) goto label_1;
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

jbool SM_mindustry_type_UnitType_lambda$init$0_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$init$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(994);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_useAttackRange);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_UnitType_lambda$setStats$2_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$setStats$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(831);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(829);
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[1].o)));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[2].o)))->F_wallOre) == 0) goto label_5;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineWalls) != 0) goto label_6;
	}
label_5:;
	{
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[2].o)))->F_wallOre) != 0) goto label_2;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineFloor) != 0) goto label_6;
	}
label_2:;
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_environment_Floor)) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineWalls) == 0) goto label_1;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_itemDrop;
	if (((jint)((mindustry_type_Item *) NULL_CHECK(sp[0].o))->F_hardness) > ((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_mineTier)) goto label_1;
	}
	{
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_playerUnmineable) == 0) goto label_7;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"doubletapmine"_j));
	LINE_NUMBER(831);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
label_7:;
	INST_ICONST(1);
	goto label_9;
label_1:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_type_UnitType_lambda$setStats$1_mindustry_entities_abilities_Ability_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$setStats$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(812);
	popStackFrame(ctx);
	return ((jint)((mindustry_entities_abilities_Ability *) NULL_CHECK((frame[0].o)))->F_display);
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_lambda$setStats$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$setStats$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(804);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.splashdamage"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legSplashDamage), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	jint temp1 = jint(1);
	jfloat temp2 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_legSplashRange) / (jfloat(8.0f));
	jint temp3 = jint(2);
	LINE_NUMBER(805);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, temp2, temp3);
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	LINE_NUMBER(804);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"[stat]"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"[white]"_j));
	LINE_NUMBER(805);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_world_meta_StatUnit(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatUnit_perLeg;
	sp[2].o = (jobject)((func_mindustry_world_meta_StatUnit_localized_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 \u0001"_j.string, 2, sp[1].o, sp[2].o);
	LINE_NUMBER(804);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(806);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_type_UnitType_lambda$display$4_mindustry_gen_Unit_R_java_lang_CharSequence(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$display$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\ue87c \u0001"_j.string, 1, boxLong(ctx, (jlong(((jdouble)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_flag)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_lambda$display$1_mindustry_gen_Unit_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$display$1", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(710);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(20.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(713);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"stat.health"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Pal_health;
	sp[4].o = frame[1].o;
	sp[5].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[4].o);
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Floatp_2(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Floatp_2 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Floatp_2);
		proxy->F_field0 = (jref) sp[4].o;
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_java_lang_String_arc_graphics_Color_arc_func_Floatp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(714);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(716);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_abilities;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_7;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(717);
	((func_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table])(ctx, (frame[6].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(716);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(720);
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_payloadCapacity), (jfloat(0)), -1)) <= 0) goto label_10;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_10;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	LINE_NUMBER(721);
	sp[0].o = frame[2].o;
	clinit_mindustry_ui_Bar(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"stat.payloadcapacity"_j));
	clinit_mindustry_graphics_Pal(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Pal_items;
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Floatp_3(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Floatp_3 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Floatp_3);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_java_lang_String_arc_graphics_Color_arc_func_Floatp(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(722);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(724);
	sp[0].o = (jobject) createArray(ctx, &class_float, (jint(1)));
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = (jfloat(-1.0f));
	frame[4].o = sp[0].o;
	LINE_NUMBER(725);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	{ /* InvokeDynamic */
		clinit_mindustry_type_UnitType_invoke_arc_func_Cons_11(ctx);
		auto proxy = (mindustry_type_UnitType_invoke_arc_func_Cons_11 *) gcAlloc(ctx, &class_mindustry_type_UnitType_invoke_arc_func_Cons_11);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(730);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(0)));
	}
label_10:;
	LINE_NUMBER(732);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_type_UnitType_lambda$display$3_Array1_float_mindustry_gen_Payloadc_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$display$3", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(726);
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[0].o), (jint(0)));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Payloadc_payloadUsed_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloadUsed_R_float, (frame[1].o)))(ctx, (frame[1].o));
	if ((floatCompare(temp0, temp1, -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(727);
	((func_mindustry_gen_Payloadc_contentInfo_arc_scene_ui_layout_Table_float_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_contentInfo_arc_scene_ui_layout_Table_float_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (jfloat(16.0f)), (jfloat(270.0f)));
	LINE_NUMBER(728);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	jfloat temp1 = (jfloat)((func_mindustry_gen_Payloadc_payloadUsed_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloadUsed_R_float, (frame[1].o)))(ctx, (frame[1].o));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	}
label_1:;
	LINE_NUMBER(730);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_type_UnitType_lambda$display$2_mindustry_gen_Payloadc_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$display$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(721);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Payloadc_payloadUsed_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloadUsed_R_float, (frame[1].o)))(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 / ((jfloat)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_payloadCapacity));
	}

	popStackFrame(ctx);
}

void M_mindustry_type_UnitType_lambda$display$0_mindustry_gen_Unit_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$display$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(704);
	sp[0].o = frame[2].o;
	clinit_arc_scene_ui_Image(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	sp[2].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_uiIcon;
	init_arc_scene_ui_Image_arc_graphics_g2d_TextureRegion(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	clinit_arc_util_Scaling(ctx);
	sp[1].o = (jobject)SF_arc_util_Scaling_fit;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scaling_arc_util_Scaling_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(705);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[0].o)))->F_localizedName;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n[lightgray]\u0001"_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[-1].o))->F_localizedName;
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(190.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(706);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_lambda$new$1_mindustry_gen_Unit_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(283);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_playerControllable) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsAi) != 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_aiController;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_mindustry_entities_units_UnitController, sp[0].o);
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	clinit_mindustry_ai_types_CommandAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_CommandAI);
	init_mindustry_ai_types_CommandAI(ctx, sp[0].o);
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_type_UnitType_lambda$new$0_R_mindustry_entities_units_UnitController(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[0].o)))->F_flying) != 0) goto label_1;
	}
	{
	clinit_mindustry_ai_types_GroundAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_GroundAI);
	init_mindustry_ai_types_GroundAI(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_mindustry_ai_types_FlyingAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_FlyingAI);
	init_mindustry_ai_types_FlyingAI(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_type_UnitType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_UnlockableContent(ctx);
	SF_mindustry_type_UnitType_shadowTX = jfloat(-12.0f);
	SF_mindustry_type_UnitType_shadowTY = jfloat(-13.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/UnitType:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_UnitType(ctx);
	{
	LINE_NUMBER(45);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_mindustry_type_UnitType(ctx);
	SF_mindustry_type_UnitType_legOffset = sp[0].o;
	LINE_NUMBER(46);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_type_UnitType(ctx);
	SF_mindustry_type_UnitType_tmpStances = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_UnitType;
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

	fields[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[73]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[74]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[75]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[76]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[77]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[78]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[79]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[80]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[81]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[82]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[83]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[84]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Field shieldColor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[125]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Field treadEffect
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[145]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[146]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[147]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[148]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field engineColor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[149]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[150]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[151]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field trailColor
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[152]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[153]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field pathCost
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[154]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[155]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field sample
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[156]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[157]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[158]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[159]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field defaultCommand
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[160]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[161]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[162]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[163]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[164]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[165]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field ammoCapacity
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[166]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	fields[167]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[168]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[169]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[170]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[171]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[172]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[173]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[174]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[175]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[176]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[177]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[178]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[179]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[180]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[181]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[182]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[183]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[184]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[185]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[186]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[187]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	fields[201]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[202]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[203]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[204]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[205]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[206]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[207]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[208]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[209]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[210]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field segmentUnit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[211]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field segmentEndUnit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[212]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[213]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[214]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[215]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[216]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[217]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[218]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[219]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[220]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[221]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[222]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[223]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[224]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[225]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[226]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[227]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[228]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[229]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[230]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[231]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[232]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[233]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[234]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[235]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[236]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[237]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[238]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[239]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[240]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[241]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[242]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[243]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[244]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[245]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[246]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[247]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field totalRequirements
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[248]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field cachedRequirements
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[249]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field firstRequirements
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[250]->F_annotations = (intptr_t) annotationArray;
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

	{ // Method getRequirements
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[39]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getFirstRequirements
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[40]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_type_UnitType[] {
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
	(void *) M_mindustry_type_UnitType_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_type_UnitType_init,
	(void *) M_mindustry_type_UnitType_postInit,
	(void *) M_mindustry_type_UnitType_afterPatch,
	(void *) M_mindustry_type_UnitType_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_type_UnitType_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_type_UnitType_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_UnitType_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_type_UnitType_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_type_UnitType_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_type_UnitType_isHidden_R_boolean,
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
	(void *) M_mindustry_type_UnitType_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_logic_Senseable_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_type_UnitType_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController,
	(void *) M_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_arc_math_geom_Position_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_hasWeapons_R_boolean,
	(void *) M_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq,
	(void *) M_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean,
	(void *) M_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean,
	(void *) M_mindustry_type_UnitType_update_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building,
	(void *) M_mindustry_type_UnitType_killed_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_landed_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_UnitType_supportsEnv_int_R_boolean,
	(void *) M_mindustry_type_UnitType_checkEntityMapping_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_initPathType,
	(void *) M_mindustry_type_UnitType_estimateDps_R_float,
	(void *) M_mindustry_type_UnitType_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_type_UnitType_needsBodyOutline_R_boolean,
	(void *) M_mindustry_type_UnitType_beforeParse,
	(void *) M_mindustry_type_UnitType_getBuildTime_R_float,
	(void *) M_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_type_UnitType_getFirstRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_type_UnitType_setEnginesMirror_Array1_mindustry_type_UnitType$UnitEngine,
	(void *) M_mindustry_type_UnitType_draw_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color,
	(void *) M_mindustry_type_UnitType_drawMining_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float,
	(void *) M_mindustry_type_UnitType_drawPayload_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawShield_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float,
	(void *) M_mindustry_type_UnitType_drawSoftShadow_float_float_float_float,
	(void *) M_mindustry_type_UnitType_drawItems_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawTrail_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawEngines_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawWeapons_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawWeaponOutlines_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawOutline_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawBody_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawCell_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color,
	(void *) M_mindustry_type_UnitType_drawLight_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawTank_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawLegs_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_drawCrawl_mindustry_gen_Crawlc,
	(void *) M_mindustry_type_UnitType_drawMech_mindustry_gen_Mechc,
	(void *) M_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_applyColor_mindustry_gen_Unit,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$9_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$7_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$8_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$6_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$4_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$5_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$3_Array1_mindustry_type_UnitType_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$0_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$getRequirements$1_Array1_mindustry_type_UnitType_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$init$2_mindustry_entities_Effect$EffectContainer,
	(void *) M_mindustry_type_UnitType_lambda$setStats$2_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_type_UnitType_lambda$setStats$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_UnitType_lambda$display$1_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_UnitType_lambda$display$2_mindustry_gen_Payloadc_R_float,
	(void *) M_mindustry_type_UnitType_lambda$display$0_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_UnitType_lambda$new$1_mindustry_gen_Unit_R_mindustry_entities_units_UnitController,
	(void *) M_mindustry_type_UnitType_lambda$new$0_R_mindustry_entities_units_UnitController,
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
	{ "createController", "(Lmindustry/gen/Unit;)Lmindustry/entities/units/UnitController;" },
	{ "create", "(Lmindustry/game/Team;)Lmindustry/gen/Unit;" },
	{ "spawn", "(Lmindustry/game/Team;FFFLarc/func/Cons;)Lmindustry/gen/Unit;" },
	{ "spawn", "(Lmindustry/game/Team;FFF)Lmindustry/gen/Unit;" },
	{ "spawn", "(Lmindustry/game/Team;FF)Lmindustry/gen/Unit;" },
	{ "spawn", "(FF)Lmindustry/gen/Unit;" },
	{ "spawn", "(Lmindustry/game/Team;Larc/math/geom/Position;)Lmindustry/gen/Unit;" },
	{ "spawn", "(Larc/math/geom/Position;)Lmindustry/gen/Unit;" },
	{ "spawn", "(Larc/math/geom/Position;Lmindustry/game/Team;)Lmindustry/gen/Unit;" },
	{ "hasWeapons", "()Z" },
	{ "targetable", "(Lmindustry/gen/Unit;Lmindustry/game/Team;)Z" },
	{ "killable", "(Lmindustry/gen/Unit;)Z" },
	{ "hittable", "(Lmindustry/gen/Unit;)Z" },
	{ "getUnitStances", "(Lmindustry/gen/Unit;Larc/struct/Seq;)V" },
	{ "allowStance", "(Lmindustry/gen/Unit;Lmindustry/ai/UnitStance;)Z" },
	{ "allowCommand", "(Lmindustry/gen/Unit;Lmindustry/ai/UnitCommand;)Z" },
	{ "update", "(Lmindustry/gen/Unit;)V" },
	{ "updatePayload", "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;Lmindustry/gen/Building;)V" },
	{ "killed", "(Lmindustry/gen/Unit;)V" },
	{ "landed", "(Lmindustry/gen/Unit;)V" },
	{ "display", "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V" },
	{ "supportsEnv", "(I)Z" },
	{ "checkEntityMapping", "(Lmindustry/gen/Unit;)V" },
	{ "initPathType", "()V" },
	{ "estimateDps", "()F" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "needsBodyOutline", "()Z" },
	{ "beforeParse", "()V" },
	{ "getBuildTime", "()F" },
	{ "getTotalRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "getRequirements", "([Lmindustry/type/UnitType;[F)[Lmindustry/type/ItemStack;" },
	{ "getFirstRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "setEnginesMirror", "([Lmindustry/type/UnitType$UnitEngine;)V" },
	{ "draw", "(Lmindustry/gen/Unit;)V" },
	{ "shieldColor", "(Lmindustry/gen/Unit;)Larc/graphics/Color;" },
	{ "drawMining", "(Lmindustry/gen/Unit;)V" },
	{ "drawMiningBeam", "(Lmindustry/gen/Unit;FF)V" },
	{ "drawPayload", "(Lmindustry/gen/Unit;)V" },
	{ "drawShield", "(Lmindustry/gen/Unit;)V" },
	{ "drawShadow", "(Lmindustry/gen/Unit;)V" },
	{ "drawSoftShadow", "(Lmindustry/gen/Unit;)V" },
	{ "drawSoftShadow", "(Lmindustry/gen/Unit;F)V" },
	{ "drawSoftShadow", "(FFFF)V" },
	{ "drawItems", "(Lmindustry/gen/Unit;)V" },
	{ "drawTrail", "(Lmindustry/gen/Unit;)V" },
	{ "drawEngines", "(Lmindustry/gen/Unit;)V" },
	{ "drawWeapons", "(Lmindustry/gen/Unit;)V" },
	{ "drawWeaponOutlines", "(Lmindustry/gen/Unit;)V" },
	{ "drawOutline", "(Lmindustry/gen/Unit;)V" },
	{ "drawBody", "(Lmindustry/gen/Unit;)V" },
	{ "drawCell", "(Lmindustry/gen/Unit;)V" },
	{ "cellColor", "(Lmindustry/gen/Unit;)Larc/graphics/Color;" },
	{ "drawLight", "(Lmindustry/gen/Unit;)V" },
	{ "drawTank", "(Lmindustry/gen/Unit;)V" },
	{ "drawLegs", "(Lmindustry/gen/Unit;)V" },
	{ "drawCrawl", "(Lmindustry/gen/Crawlc;)V" },
	{ "drawMech", "(Lmindustry/gen/Mechc;)V" },
	{ "applyOutlineColor", "(Lmindustry/gen/Unit;)V" },
	{ "applyColor", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$getRequirements$9", "(Lmindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan;)Z" },
	{ "lambda$getRequirements$7", "(Lmindustry/world/Block;)Z" },
	{ "lambda$getRequirements$8", "(Lmindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan;)Z" },
	{ "lambda$getRequirements$6", "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)Z" },
	{ "lambda$getRequirements$4", "(Lmindustry/world/Block;)Z" },
	{ "lambda$getRequirements$5", "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)Z" },
	{ "lambda$getRequirements$3", "([Lmindustry/type/UnitType;)Z" },
	{ "lambda$getRequirements$0", "(Lmindustry/world/Block;)Z" },
	{ "lambda$getRequirements$1", "([Lmindustry/type/UnitType;)Z" },
	{ "lambda$init$2", "(Lmindustry/entities/Effect$EffectContainer;)V" },
	{ "lambda$setStats$2", "(Lmindustry/world/Block;)Z" },
	{ "lambda$setStats$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$1", "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$display$2", "(Lmindustry/gen/Payloadc;)F" },
	{ "lambda$display$0", "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$1", "(Lmindustry/gen/Unit;)Lmindustry/entities/units/UnitController;" },
	{ "lambda$new$0", "()Lmindustry/entities/units/UnitController;" },
};

static jclass interfaces[] { &class_mindustry_logic_Senseable, };

static jclass innerClasses[] {
	&class_mindustry_type_UnitType$UnitEngine,
};

static FieldMetadata fields[] {
	{ "shadowTX", &class_float, (intptr_t) &SF_mindustry_type_UnitType_shadowTX, "F", 25 },
	{ "shadowTY", &class_float, (intptr_t) &SF_mindustry_type_UnitType_shadowTY, "F", 25 },
	{ "legOffset", &class_arc_math_geom_Vec2, (intptr_t) &SF_mindustry_type_UnitType_legOffset, "Larc/math/geom/Vec2;", 26 },
	{ "tmpStances", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_type_UnitType_tmpStances, "Larc/struct/Seq;", 26 },
	{ "envRequired", &class_int, offsetof(mindustry_type_UnitType, F_envRequired), "I", 1 },
	{ "envEnabled", &class_int, offsetof(mindustry_type_UnitType, F_envEnabled), "I", 1 },
	{ "envDisabled", &class_int, offsetof(mindustry_type_UnitType, F_envDisabled), "I", 1 },
	{ "speed", &class_float, offsetof(mindustry_type_UnitType, F_speed), "F", 1 },
	{ "boostMultiplier", &class_float, offsetof(mindustry_type_UnitType, F_boostMultiplier), "F", 1 },
	{ "floorMultiplier", &class_float, offsetof(mindustry_type_UnitType, F_floorMultiplier), "F", 1 },
	{ "rotateSpeed", &class_float, offsetof(mindustry_type_UnitType, F_rotateSpeed), "F", 1 },
	{ "baseRotateSpeed", &class_float, offsetof(mindustry_type_UnitType, F_baseRotateSpeed), "F", 1 },
	{ "drag", &class_float, offsetof(mindustry_type_UnitType, F_drag), "F", 1 },
	{ "accel", &class_float, offsetof(mindustry_type_UnitType, F_accel), "F", 1 },
	{ "hitSize", &class_float, offsetof(mindustry_type_UnitType, F_hitSize), "F", 1 },
	{ "deathShake", &class_float, offsetof(mindustry_type_UnitType, F_deathShake), "F", 1 },
	{ "stepShake", &class_float, offsetof(mindustry_type_UnitType, F_stepShake), "F", 1 },
	{ "rippleScale", &class_float, offsetof(mindustry_type_UnitType, F_rippleScale), "F", 1 },
	{ "riseSpeed", &class_float, offsetof(mindustry_type_UnitType, F_riseSpeed), "F", 1 },
	{ "descentSpeed", &class_float, offsetof(mindustry_type_UnitType, F_descentSpeed), "F", 1 },
	{ "fallSpeed", &class_float, offsetof(mindustry_type_UnitType, F_fallSpeed), "F", 1 },
	{ "missileAccelTime", &class_float, offsetof(mindustry_type_UnitType, F_missileAccelTime), "F", 1 },
	{ "health", &class_float, offsetof(mindustry_type_UnitType, F_health), "F", 1 },
	{ "armor", &class_float, offsetof(mindustry_type_UnitType, F_armor), "F", 1 },
	{ "range", &class_float, offsetof(mindustry_type_UnitType, F_range), "F", 1 },
	{ "maxRange", &class_float, offsetof(mindustry_type_UnitType, F_maxRange), "F", 1 },
	{ "mineRange", &class_float, offsetof(mindustry_type_UnitType, F_mineRange), "F", 1 },
	{ "buildRange", &class_float, offsetof(mindustry_type_UnitType, F_buildRange), "F", 1 },
	{ "circleTargetRadius", &class_float, offsetof(mindustry_type_UnitType, F_circleTargetRadius), "F", 1 },
	{ "crashDamageMultiplier", &class_float, offsetof(mindustry_type_UnitType, F_crashDamageMultiplier), "F", 1 },
	{ "wreckHealthMultiplier", &class_float, offsetof(mindustry_type_UnitType, F_wreckHealthMultiplier), "F", 1 },
	{ "dpsEstimate", &class_float, offsetof(mindustry_type_UnitType, F_dpsEstimate), "F", 1 },
	{ "clipSize", &class_float, offsetof(mindustry_type_UnitType, F_clipSize), "F", 1 },
	{ "drownTimeMultiplier", &class_float, offsetof(mindustry_type_UnitType, F_drownTimeMultiplier), "F", 1 },
	{ "strafePenalty", &class_float, offsetof(mindustry_type_UnitType, F_strafePenalty), "F", 1 },
	{ "researchCostMultiplier", &class_float, offsetof(mindustry_type_UnitType, F_researchCostMultiplier), "F", 1 },
	{ "knockbackMultiplier", &class_float, offsetof(mindustry_type_UnitType, F_knockbackMultiplier), "F", 1 },
	{ "groundLayer", &class_float, offsetof(mindustry_type_UnitType, F_groundLayer), "F", 1 },
	{ "flyingLayer", &class_float, offsetof(mindustry_type_UnitType, F_flyingLayer), "F", 1 },
	{ "payloadCapacity", &class_float, offsetof(mindustry_type_UnitType, F_payloadCapacity), "F", 1 },
	{ "buildSpeed", &class_float, offsetof(mindustry_type_UnitType, F_buildSpeed), "F", 1 },
	{ "aimDst", &class_float, offsetof(mindustry_type_UnitType, F_aimDst), "F", 1 },
	{ "buildBeamOffset", &class_float, offsetof(mindustry_type_UnitType, F_buildBeamOffset), "F", 1 },
	{ "mineBeamOffset", &class_float, offsetof(mindustry_type_UnitType, F_mineBeamOffset), "F", 1 },
	{ "targetPriority", &class_float, offsetof(mindustry_type_UnitType, F_targetPriority), "F", 1 },
	{ "shadowElevation", &class_float, offsetof(mindustry_type_UnitType, F_shadowElevation), "F", 1 },
	{ "shadowElevationScl", &class_float, offsetof(mindustry_type_UnitType, F_shadowElevationScl), "F", 1 },
	{ "engineOffset", &class_float, offsetof(mindustry_type_UnitType, F_engineOffset), "F", 1 },
	{ "engineSize", &class_float, offsetof(mindustry_type_UnitType, F_engineSize), "F", 1 },
	{ "engineLayer", &class_float, offsetof(mindustry_type_UnitType, F_engineLayer), "F", 1 },
	{ "itemOffsetY", &class_float, offsetof(mindustry_type_UnitType, F_itemOffsetY), "F", 1 },
	{ "lightRadius", &class_float, offsetof(mindustry_type_UnitType, F_lightRadius), "F", 1 },
	{ "lightOpacity", &class_float, offsetof(mindustry_type_UnitType, F_lightOpacity), "F", 1 },
	{ "softShadowScl", &class_float, offsetof(mindustry_type_UnitType, F_softShadowScl), "F", 1 },
	{ "fogRadius", &class_float, offsetof(mindustry_type_UnitType, F_fogRadius), "F", 1 },
	{ "waveTrailX", &class_float, offsetof(mindustry_type_UnitType, F_waveTrailX), "F", 1 },
	{ "waveTrailY", &class_float, offsetof(mindustry_type_UnitType, F_waveTrailY), "F", 1 },
	{ "trailScl", &class_float, offsetof(mindustry_type_UnitType, F_trailScl), "F", 1 },
	{ "isEnemy", &class_boolean, offsetof(mindustry_type_UnitType, F_isEnemy), "Z", 1 },
	{ "flying", &class_boolean, offsetof(mindustry_type_UnitType, F_flying), "Z", 1 },
	{ "wobble", &class_boolean, offsetof(mindustry_type_UnitType, F_wobble), "Z", 1 },
	{ "targetAir", &class_boolean, offsetof(mindustry_type_UnitType, F_targetAir), "Z", 1 },
	{ "targetGround", &class_boolean, offsetof(mindustry_type_UnitType, F_targetGround), "Z", 1 },
	{ "faceTarget", &class_boolean, offsetof(mindustry_type_UnitType, F_faceTarget), "Z", 1 },
	{ "circleTarget", &class_boolean, offsetof(mindustry_type_UnitType, F_circleTarget), "Z", 1 },
	{ "autoDropBombs", &class_boolean, offsetof(mindustry_type_UnitType, F_autoDropBombs), "Z", 1 },
	{ "targetBuildingsMobile", &class_boolean, offsetof(mindustry_type_UnitType, F_targetBuildingsMobile), "Z", 1 },
	{ "canBoost", &class_boolean, offsetof(mindustry_type_UnitType, F_canBoost), "Z", 1 },
	{ "boostWhenBuilding", &class_boolean, offsetof(mindustry_type_UnitType, F_boostWhenBuilding), "Z", 1 },
	{ "boostWhenMining", &class_boolean, offsetof(mindustry_type_UnitType, F_boostWhenMining), "Z", 1 },
	{ "logicControllable", &class_boolean, offsetof(mindustry_type_UnitType, F_logicControllable), "Z", 1 },
	{ "playerControllable", &class_boolean, offsetof(mindustry_type_UnitType, F_playerControllable), "Z", 1 },
	{ "controlSelectGlobal", &class_boolean, offsetof(mindustry_type_UnitType, F_controlSelectGlobal), "Z", 1 },
	{ "allowedInPayloads", &class_boolean, offsetof(mindustry_type_UnitType, F_allowedInPayloads), "Z", 1 },
	{ "hittable", &class_boolean, offsetof(mindustry_type_UnitType, F_hittable), "Z", 1 },
	{ "killable", &class_boolean, offsetof(mindustry_type_UnitType, F_killable), "Z", 1 },
	{ "targetable", &class_boolean, offsetof(mindustry_type_UnitType, F_targetable), "Z", 1 },
	{ "vulnerableWithPayloads", &class_boolean, offsetof(mindustry_type_UnitType, F_vulnerableWithPayloads), "Z", 1 },
	{ "pickupUnits", &class_boolean, offsetof(mindustry_type_UnitType, F_pickupUnits), "Z", 1 },
	{ "physics", &class_boolean, offsetof(mindustry_type_UnitType, F_physics), "Z", 1 },
	{ "canDrown", &class_boolean, offsetof(mindustry_type_UnitType, F_canDrown), "Z", 1 },
	{ "useUnitCap", &class_boolean, offsetof(mindustry_type_UnitType, F_useUnitCap), "Z", 1 },
	{ "coreUnitDock", &class_boolean, offsetof(mindustry_type_UnitType, F_coreUnitDock), "Z", 1 },
	{ "createWreck", &class_boolean, offsetof(mindustry_type_UnitType, F_createWreck), "Z", 1 },
	{ "createScorch", &class_boolean, offsetof(mindustry_type_UnitType, F_createScorch), "Z", 1 },
	{ "lowAltitude", &class_boolean, offsetof(mindustry_type_UnitType, F_lowAltitude), "Z", 1 },
	{ "rotateToBuilding", &class_boolean, offsetof(mindustry_type_UnitType, F_rotateToBuilding), "Z", 1 },
	{ "allowLegStep", &class_boolean, offsetof(mindustry_type_UnitType, F_allowLegStep), "Z", 1 },
	{ "legPhysicsLayer", &class_boolean, offsetof(mindustry_type_UnitType, F_legPhysicsLayer), "Z", 1 },
	{ "hovering", &class_boolean, offsetof(mindustry_type_UnitType, F_hovering), "Z", 1 },
	{ "omniMovement", &class_boolean, offsetof(mindustry_type_UnitType, F_omniMovement), "Z", 1 },
	{ "rotateMoveFirst", &class_boolean, offsetof(mindustry_type_UnitType, F_rotateMoveFirst), "Z", 1 },
	{ "healFlash", &class_boolean, offsetof(mindustry_type_UnitType, F_healFlash), "Z", 1 },
	{ "canHeal", &class_boolean, offsetof(mindustry_type_UnitType, F_canHeal), "Z", 1 },
	{ "singleTarget", &class_boolean, offsetof(mindustry_type_UnitType, F_singleTarget), "Z", 1 },
	{ "forceMultiTarget", &class_boolean, offsetof(mindustry_type_UnitType, F_forceMultiTarget), "Z", 1 },
	{ "canAttack", &class_boolean, offsetof(mindustry_type_UnitType, F_canAttack), "Z", 1 },
	{ "hidden", &class_boolean, offsetof(mindustry_type_UnitType, F_hidden), "Z", 1 },
	{ "internal", &class_boolean, offsetof(mindustry_type_UnitType, F_internal), "Z", 1 },
	{ "internalGenerateSprites", &class_boolean, offsetof(mindustry_type_UnitType, F_internalGenerateSprites), "Z", 1 },
	{ "bounded", &class_boolean, offsetof(mindustry_type_UnitType, F_bounded), "Z", 1 },
	{ "naval", &class_boolean, offsetof(mindustry_type_UnitType, F_naval), "Z", 1 },
	{ "autoFindTarget", &class_boolean, offsetof(mindustry_type_UnitType, F_autoFindTarget), "Z", 1 },
	{ "targetUnderBlocks", &class_boolean, offsetof(mindustry_type_UnitType, F_targetUnderBlocks), "Z", 1 },
	{ "alwaysShootWhenMoving", &class_boolean, offsetof(mindustry_type_UnitType, F_alwaysShootWhenMoving), "Z", 1 },
	{ "hoverable", &class_boolean, offsetof(mindustry_type_UnitType, F_hoverable), "Z", 1 },
	{ "alwaysCreateOutline", &class_boolean, offsetof(mindustry_type_UnitType, F_alwaysCreateOutline), "Z", 1 },
	{ "generateFullIcon", &class_boolean, offsetof(mindustry_type_UnitType, F_generateFullIcon), "Z", 1 },
	{ "squareShape", &class_boolean, offsetof(mindustry_type_UnitType, F_squareShape), "Z", 1 },
	{ "drawBuildBeam", &class_boolean, offsetof(mindustry_type_UnitType, F_drawBuildBeam), "Z", 1 },
	{ "drawMineBeam", &class_boolean, offsetof(mindustry_type_UnitType, F_drawMineBeam), "Z", 1 },
	{ "drawCell", &class_boolean, offsetof(mindustry_type_UnitType, F_drawCell), "Z", 1 },
	{ "drawItems", &class_boolean, offsetof(mindustry_type_UnitType, F_drawItems), "Z", 1 },
	{ "drawShields", &class_boolean, offsetof(mindustry_type_UnitType, F_drawShields), "Z", 1 },
	{ "drawBody", &class_boolean, offsetof(mindustry_type_UnitType, F_drawBody), "Z", 1 },
	{ "drawSoftShadow", &class_boolean, offsetof(mindustry_type_UnitType, F_drawSoftShadow), "Z", 1 },
	{ "drawMinimap", &class_boolean, offsetof(mindustry_type_UnitType, F_drawMinimap), "Z", 1 },
	{ "aiController", &class_arc_func_Prov, offsetof(mindustry_type_UnitType, F_aiController), "Larc/func/Prov;", 1 },
	{ "controller", &class_arc_func_Func, offsetof(mindustry_type_UnitType, F_controller), "Larc/func/Func;", 1 },
	{ "constructor", &class_arc_func_Prov, offsetof(mindustry_type_UnitType, F_constructor), "Larc/func/Prov;", 1 },
	{ "abilities", &class_arc_struct_Seq, offsetof(mindustry_type_UnitType, F_abilities), "Larc/struct/Seq;", 1 },
	{ "weapons", &class_arc_struct_Seq, offsetof(mindustry_type_UnitType, F_weapons), "Larc/struct/Seq;", 1 },
	{ "immunities", &class_arc_struct_ObjectSet, offsetof(mindustry_type_UnitType, F_immunities), "Larc/struct/ObjectSet;", 1 },
	{ "healColor", &class_arc_graphics_Color, offsetof(mindustry_type_UnitType, F_healColor), "Larc/graphics/Color;", 1 },
	{ "lightColor", &class_arc_graphics_Color, offsetof(mindustry_type_UnitType, F_lightColor), "Larc/graphics/Color;", 1 },
	{ "shieldColor", &class_arc_graphics_Color, offsetof(mindustry_type_UnitType, F_shieldColor), "Larc/graphics/Color;", 1 },
	{ "deathSound", &class_arc_audio_Sound, offsetof(mindustry_type_UnitType, F_deathSound), "Larc/audio/Sound;", 1 },
	{ "deathSoundVolume", &class_float, offsetof(mindustry_type_UnitType, F_deathSoundVolume), "F", 1 },
	{ "wreckSound", &class_arc_audio_Sound, offsetof(mindustry_type_UnitType, F_wreckSound), "Larc/audio/Sound;", 1 },
	{ "wreckSoundVolume", &class_float, offsetof(mindustry_type_UnitType, F_wreckSoundVolume), "F", 1 },
	{ "loopSound", &class_arc_audio_Sound, offsetof(mindustry_type_UnitType, F_loopSound), "Larc/audio/Sound;", 1 },
	{ "loopSoundVolume", &class_float, offsetof(mindustry_type_UnitType, F_loopSoundVolume), "F", 1 },
	{ "stepSound", &class_arc_audio_Sound, offsetof(mindustry_type_UnitType, F_stepSound), "Larc/audio/Sound;", 1 },
	{ "stepSoundVolume", &class_float, offsetof(mindustry_type_UnitType, F_stepSoundVolume), "F", 1 },
	{ "stepSoundPitch", &class_float, offsetof(mindustry_type_UnitType, F_stepSoundPitch), "F", 1 },
	{ "stepSoundPitchRange", &class_float, offsetof(mindustry_type_UnitType, F_stepSoundPitchRange), "F", 1 },
	{ "tankMoveSound", &class_arc_audio_Sound, offsetof(mindustry_type_UnitType, F_tankMoveSound), "Larc/audio/Sound;", 1 },
	{ "moveSound", &class_arc_audio_Sound, offsetof(mindustry_type_UnitType, F_moveSound), "Larc/audio/Sound;", 1 },
	{ "moveSoundVolume", &class_float, offsetof(mindustry_type_UnitType, F_moveSoundVolume), "F", 1 },
	{ "moveSoundPitchMin", &class_float, offsetof(mindustry_type_UnitType, F_moveSoundPitchMin), "F", 1 },
	{ "moveSoundPitchMax", &class_float, offsetof(mindustry_type_UnitType, F_moveSoundPitchMax), "F", 1 },
	{ "tankMoveVolume", &class_float, offsetof(mindustry_type_UnitType, F_tankMoveVolume), "F", 1 },
	{ "fallEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_UnitType, F_fallEffect), "Lmindustry/entities/Effect;", 1 },
	{ "fallEngineEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_UnitType, F_fallEngineEffect), "Lmindustry/entities/Effect;", 1 },
	{ "deathExplosionEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_UnitType, F_deathExplosionEffect), "Lmindustry/entities/Effect;", 1 },
	{ "treadEffect", &class_mindustry_entities_Effect, offsetof(mindustry_type_UnitType, F_treadEffect), "Lmindustry/entities/Effect;", 1 },
	{ "parts", &class_arc_struct_Seq, offsetof(mindustry_type_UnitType, F_parts), "Larc/struct/Seq;", 1 },
	{ "engines", &class_arc_struct_Seq, offsetof(mindustry_type_UnitType, F_engines), "Larc/struct/Seq;", 1 },
	{ "useEngineElevation", &class_boolean, offsetof(mindustry_type_UnitType, F_useEngineElevation), "Z", 1 },
	{ "engineColor", &class_arc_graphics_Color, offsetof(mindustry_type_UnitType, F_engineColor), "Larc/graphics/Color;", 1 },
	{ "engineColorInner", &class_arc_graphics_Color, offsetof(mindustry_type_UnitType, F_engineColorInner), "Larc/graphics/Color;", 1 },
	{ "trailLength", &class_int, offsetof(mindustry_type_UnitType, F_trailLength), "I", 1 },
	{ "trailColor", &class_arc_graphics_Color, offsetof(mindustry_type_UnitType, F_trailColor), "Larc/graphics/Color;", 1 },
	{ "flowfieldPathType", &class_int, offsetof(mindustry_type_UnitType, F_flowfieldPathType), "I", 1 },
	{ "pathCost", &class_mindustry_ai_Pathfinder$PathCost, offsetof(mindustry_type_UnitType, F_pathCost), "Lmindustry/ai/Pathfinder$PathCost;", 1 },
	{ "pathCostId", &class_int, offsetof(mindustry_type_UnitType, F_pathCostId), "I", 1 },
	{ "sample", &class_mindustry_gen_Unit, offsetof(mindustry_type_UnitType, F_sample), "Lmindustry/gen/Unit;", 1 },
	{ "targetFlags", getArrayClass(&class_mindustry_world_meta_BlockFlag, 1), offsetof(mindustry_type_UnitType, F_targetFlags), "[Lmindustry/world/meta/BlockFlag;", 1 },
	{ "allowChangeCommands", &class_boolean, offsetof(mindustry_type_UnitType, F_allowChangeCommands), "Z", 1 },
	{ "commands", &class_arc_struct_Seq, offsetof(mindustry_type_UnitType, F_commands), "Larc/struct/Seq;", 1 },
	{ "defaultCommand", &class_mindustry_ai_UnitCommand, offsetof(mindustry_type_UnitType, F_defaultCommand), "Lmindustry/ai/UnitCommand;", 1 },
	{ "stances", &class_arc_struct_Seq, offsetof(mindustry_type_UnitType, F_stances), "Larc/struct/Seq;", 1 },
	{ "outlineColor", &class_arc_graphics_Color, offsetof(mindustry_type_UnitType, F_outlineColor), "Larc/graphics/Color;", 1 },
	{ "outlineRadius", &class_int, offsetof(mindustry_type_UnitType, F_outlineRadius), "I", 1 },
	{ "outlines", &class_boolean, offsetof(mindustry_type_UnitType, F_outlines), "Z", 1 },
	{ "itemCapacity", &class_int, offsetof(mindustry_type_UnitType, F_itemCapacity), "I", 1 },
	{ "ammoCapacity", &class_int, offsetof(mindustry_type_UnitType, F_ammoCapacity), "I", 131073 },
	{ "mineTier", &class_int, offsetof(mindustry_type_UnitType, F_mineTier), "I", 1 },
	{ "mineSpeed", &class_float, offsetof(mindustry_type_UnitType, F_mineSpeed), "F", 1 },
	{ "mineWalls", &class_boolean, offsetof(mindustry_type_UnitType, F_mineWalls), "Z", 1 },
	{ "mineFloor", &class_boolean, offsetof(mindustry_type_UnitType, F_mineFloor), "Z", 1 },
	{ "mineHardnessScaling", &class_boolean, offsetof(mindustry_type_UnitType, F_mineHardnessScaling), "Z", 1 },
	{ "mineSound", &class_arc_audio_Sound, offsetof(mindustry_type_UnitType, F_mineSound), "Larc/audio/Sound;", 1 },
	{ "mineSoundVolume", &class_float, offsetof(mindustry_type_UnitType, F_mineSoundVolume), "F", 1 },
	{ "mineItems", &class_arc_struct_Seq, offsetof(mindustry_type_UnitType, F_mineItems), "Larc/struct/Seq;", 1 },
	{ "legCount", &class_int, offsetof(mindustry_type_UnitType, F_legCount), "I", 1 },
	{ "legGroupSize", &class_int, offsetof(mindustry_type_UnitType, F_legGroupSize), "I", 1 },
	{ "legLength", &class_float, offsetof(mindustry_type_UnitType, F_legLength), "F", 1 },
	{ "legSpeed", &class_float, offsetof(mindustry_type_UnitType, F_legSpeed), "F", 1 },
	{ "legForwardScl", &class_float, offsetof(mindustry_type_UnitType, F_legForwardScl), "F", 1 },
	{ "legBaseOffset", &class_float, offsetof(mindustry_type_UnitType, F_legBaseOffset), "F", 1 },
	{ "legMoveSpace", &class_float, offsetof(mindustry_type_UnitType, F_legMoveSpace), "F", 1 },
	{ "legExtension", &class_float, offsetof(mindustry_type_UnitType, F_legExtension), "F", 1 },
	{ "legPairOffset", &class_float, offsetof(mindustry_type_UnitType, F_legPairOffset), "F", 1 },
	{ "legLengthScl", &class_float, offsetof(mindustry_type_UnitType, F_legLengthScl), "F", 1 },
	{ "legStraightLength", &class_float, offsetof(mindustry_type_UnitType, F_legStraightLength), "F", 1 },
	{ "legMaxLength", &class_float, offsetof(mindustry_type_UnitType, F_legMaxLength), "F", 1 },
	{ "legMinLength", &class_float, offsetof(mindustry_type_UnitType, F_legMinLength), "F", 1 },
	{ "legSplashDamage", &class_float, offsetof(mindustry_type_UnitType, F_legSplashDamage), "F", 1 },
	{ "legSplashRange", &class_float, offsetof(mindustry_type_UnitType, F_legSplashRange), "F", 1 },
	{ "baseLegStraightness", &class_float, offsetof(mindustry_type_UnitType, F_baseLegStraightness), "F", 1 },
	{ "legStraightness", &class_float, offsetof(mindustry_type_UnitType, F_legStraightness), "F", 1 },
	{ "legBaseUnder", &class_boolean, offsetof(mindustry_type_UnitType, F_legBaseUnder), "Z", 1 },
	{ "lockLegBase", &class_boolean, offsetof(mindustry_type_UnitType, F_lockLegBase), "Z", 1 },
	{ "legContinuousMove", &class_boolean, offsetof(mindustry_type_UnitType, F_legContinuousMove), "Z", 1 },
	{ "flipBackLegs", &class_boolean, offsetof(mindustry_type_UnitType, F_flipBackLegs), "Z", 1 },
	{ "flipLegSide", &class_boolean, offsetof(mindustry_type_UnitType, F_flipLegSide), "Z", 1 },
	{ "emitWalkSound", &class_boolean, offsetof(mindustry_type_UnitType, F_emitWalkSound), "Z", 1 },
	{ "emitWalkEffect", &class_boolean, offsetof(mindustry_type_UnitType, F_emitWalkEffect), "Z", 1 },
	{ "mechLandShake", &class_float, offsetof(mindustry_type_UnitType, F_mechLandShake), "F", 1 },
	{ "mechSideSway", &class_float, offsetof(mindustry_type_UnitType, F_mechSideSway), "F", 1 },
	{ "mechFrontSway", &class_float, offsetof(mindustry_type_UnitType, F_mechFrontSway), "F", 1 },
	{ "mechStride", &class_float, offsetof(mindustry_type_UnitType, F_mechStride), "F", 1 },
	{ "mechStepParticles", &class_boolean, offsetof(mindustry_type_UnitType, F_mechStepParticles), "Z", 1 },
	{ "mechLegColor", &class_arc_graphics_Color, offsetof(mindustry_type_UnitType, F_mechLegColor), "Larc/graphics/Color;", 1 },
	{ "treadRects", getArrayClass(&class_arc_math_geom_Rect, 1), offsetof(mindustry_type_UnitType, F_treadRects), "[Larc/math/geom/Rect;", 1 },
	{ "treadFrames", &class_int, offsetof(mindustry_type_UnitType, F_treadFrames), "I", 1 },
	{ "treadPullOffset", &class_int, offsetof(mindustry_type_UnitType, F_treadPullOffset), "I", 1 },
	{ "crushFragile", &class_boolean, offsetof(mindustry_type_UnitType, F_crushFragile), "Z", 1 },
	{ "segments", &class_int, offsetof(mindustry_type_UnitType, F_segments), "I", 1 },
	{ "segmentUnits", &class_int, offsetof(mindustry_type_UnitType, F_segmentUnits), "I", 1 },
	{ "segmentUnit", &class_mindustry_type_UnitType, offsetof(mindustry_type_UnitType, F_segmentUnit), "Lmindustry/type/UnitType;", 1 },
	{ "segmentEndUnit", &class_mindustry_type_UnitType, offsetof(mindustry_type_UnitType, F_segmentEndUnit), "Lmindustry/type/UnitType;", 1 },
	{ "segmentLayerOrder", &class_boolean, offsetof(mindustry_type_UnitType, F_segmentLayerOrder), "Z", 1 },
	{ "segmentMag", &class_float, offsetof(mindustry_type_UnitType, F_segmentMag), "F", 1 },
	{ "segmentScl", &class_float, offsetof(mindustry_type_UnitType, F_segmentScl), "F", 1 },
	{ "segmentPhase", &class_float, offsetof(mindustry_type_UnitType, F_segmentPhase), "F", 1 },
	{ "segmentRotSpeed", &class_float, offsetof(mindustry_type_UnitType, F_segmentRotSpeed), "F", 1 },
	{ "segmentMaxRot", &class_float, offsetof(mindustry_type_UnitType, F_segmentMaxRot), "F", 1 },
	{ "segmentSpacing", &class_float, offsetof(mindustry_type_UnitType, F_segmentSpacing), "F", 1 },
	{ "segmentRotationRange", &class_float, offsetof(mindustry_type_UnitType, F_segmentRotationRange), "F", 1 },
	{ "crawlSlowdown", &class_float, offsetof(mindustry_type_UnitType, F_crawlSlowdown), "F", 1 },
	{ "crushDamage", &class_float, offsetof(mindustry_type_UnitType, F_crushDamage), "F", 1 },
	{ "crawlSlowdownFrac", &class_float, offsetof(mindustry_type_UnitType, F_crawlSlowdownFrac), "F", 1 },
	{ "lifetime", &class_float, offsetof(mindustry_type_UnitType, F_lifetime), "F", 1 },
	{ "homingDelay", &class_float, offsetof(mindustry_type_UnitType, F_homingDelay), "F", 1 },
	{ "baseRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_baseRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "legRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_legRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_region), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "previewRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_previewRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "shadowRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_shadowRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "cellRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_cellRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "itemCircleRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_itemCircleRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "softShadowRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_softShadowRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "jointRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_jointRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "footRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_footRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "legBaseRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_legBaseRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "baseJointRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_baseJointRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "outlineRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_outlineRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "treadRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_treadRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "mineLaserRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_mineLaserRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "mineLaserEndRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_type_UnitType, F_mineLaserEndRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "wreckRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_type_UnitType, F_wreckRegions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "segmentRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_type_UnitType, F_segmentRegions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "segmentCellRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_type_UnitType, F_segmentCellRegions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "segmentOutlineRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1), offsetof(mindustry_type_UnitType, F_segmentOutlineRegions), "[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "treadRegions", getArrayClass(&class_arc_graphics_g2d_TextureRegion, 2), offsetof(mindustry_type_UnitType, F_treadRegions), "[[Larc/graphics/g2d/TextureRegion;", 1 },
	{ "buildTime", &class_float, offsetof(mindustry_type_UnitType, F_buildTime), "F", 4 },
	{ "totalRequirements", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_type_UnitType, F_totalRequirements), "[Lmindustry/type/ItemStack;", 4 },
	{ "cachedRequirements", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_type_UnitType, F_cachedRequirements), "[Lmindustry/type/ItemStack;", 4 },
	{ "firstRequirements", getArrayClass(&class_mindustry_type_ItemStack, 1), offsetof(mindustry_type_UnitType, F_firstRequirements), "[Lmindustry/type/ItemStack;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_UnitType_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "postInit", (intptr_t) M_mindustry_type_UnitType_postInit, VTABLE_mindustry_type_UnitType_postInit, "()V", 1 },
	{ "createController", (intptr_t) M_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController, VTABLE_mindustry_type_UnitType_createController_mindustry_gen_Unit_R_mindustry_entities_units_UnitController, "(Lmindustry/gen/Unit;)Lmindustry/entities/units/UnitController;", 1 },
	{ "create", (intptr_t) M_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit, "(Lmindustry/game/Team;)Lmindustry/gen/Unit;", 1 },
	{ "spawn", (intptr_t) M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_arc_func_Cons_R_mindustry_gen_Unit, "(Lmindustry/game/Team;FFFLarc/func/Cons;)Lmindustry/gen/Unit;", 1 },
	{ "spawn", (intptr_t) M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_float_R_mindustry_gen_Unit, "(Lmindustry/game/Team;FFF)Lmindustry/gen/Unit;", 1 },
	{ "spawn", (intptr_t) M_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_float_float_R_mindustry_gen_Unit, "(Lmindustry/game/Team;FF)Lmindustry/gen/Unit;", 1 },
	{ "spawn", (intptr_t) M_mindustry_type_UnitType_spawn_float_float_R_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_spawn_float_float_R_mindustry_gen_Unit, "(FF)Lmindustry/gen/Unit;", 1 },
	{ "spawn", (intptr_t) M_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_spawn_mindustry_game_Team_arc_math_geom_Position_R_mindustry_gen_Unit, "(Lmindustry/game/Team;Larc/math/geom/Position;)Lmindustry/gen/Unit;", 1 },
	{ "spawn", (intptr_t) M_mindustry_type_UnitType_spawn_arc_math_geom_Position_R_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_spawn_arc_math_geom_Position_R_mindustry_gen_Unit, "(Larc/math/geom/Position;)Lmindustry/gen/Unit;", 1 },
	{ "spawn", (intptr_t) M_mindustry_type_UnitType_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_spawn_arc_math_geom_Position_mindustry_game_Team_R_mindustry_gen_Unit, "(Larc/math/geom/Position;Lmindustry/game/Team;)Lmindustry/gen/Unit;", 1 },
	{ "hasWeapons", (intptr_t) M_mindustry_type_UnitType_hasWeapons_R_boolean, VTABLE_mindustry_type_UnitType_hasWeapons_R_boolean, "()Z", 1 },
	{ "targetable", (intptr_t) M_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean, VTABLE_mindustry_type_UnitType_targetable_mindustry_gen_Unit_mindustry_game_Team_R_boolean, "(Lmindustry/gen/Unit;Lmindustry/game/Team;)Z", 1 },
	{ "killable", (intptr_t) M_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_type_UnitType_killable_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "hittable", (intptr_t) M_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_type_UnitType_hittable_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 1 },
	{ "getUnitStances", (intptr_t) M_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq, VTABLE_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq, "(Lmindustry/gen/Unit;Larc/struct/Seq;)V", 1 },
	{ "allowStance", (intptr_t) M_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean, VTABLE_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean, "(Lmindustry/gen/Unit;Lmindustry/ai/UnitStance;)Z", 1 },
	{ "allowCommand", (intptr_t) M_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean, VTABLE_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean, "(Lmindustry/gen/Unit;Lmindustry/ai/UnitCommand;)Z", 1 },
	{ "update", (intptr_t) M_mindustry_type_UnitType_update_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "updatePayload", (intptr_t) M_mindustry_type_UnitType_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building, VTABLE_mindustry_type_UnitType_updatePayload_mindustry_gen_Unit_mindustry_gen_Unit_mindustry_gen_Building, "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 1 },
	{ "killed", (intptr_t) M_mindustry_type_UnitType_killed_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_killed_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "landed", (intptr_t) M_mindustry_type_UnitType_landed_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_landed_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "display", (intptr_t) M_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table, VTABLE_mindustry_type_UnitType_display_mindustry_gen_Unit_arc_scene_ui_layout_Table, "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V", 1 },
	{ "supportsEnv", (intptr_t) M_mindustry_type_UnitType_supportsEnv_int_R_boolean, VTABLE_mindustry_type_UnitType_supportsEnv_int_R_boolean, "(I)Z", 1 },
	{ "isBanned", (intptr_t) M_mindustry_type_UnitType_isBanned_R_boolean, VTABLE_mindustry_type_UnitType_isBanned_R_boolean, "()Z", 1 },
	{ "getDependencies", (intptr_t) M_mindustry_type_UnitType_getDependencies_arc_func_Cons, VTABLE_mindustry_type_UnitType_getDependencies_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "isHidden", (intptr_t) M_mindustry_type_UnitType_isHidden_R_boolean, VTABLE_mindustry_type_UnitType_isHidden_R_boolean, "()Z", 1 },
	{ "setStats", (intptr_t) M_mindustry_type_UnitType_setStats, VTABLE_mindustry_type_UnitType_setStats, "()V", 1 },
	{ "checkEntityMapping", (intptr_t) M_mindustry_type_UnitType_checkEntityMapping_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_checkEntityMapping_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4 },
	{ "initPathType", (intptr_t) M_mindustry_type_UnitType_initPathType, VTABLE_mindustry_type_UnitType_initPathType, "()V", 0 },
	{ "init", (intptr_t) M_mindustry_type_UnitType_init, VTABLE_mindustry_type_UnitType_init, "()V", 1 },
	{ "estimateDps", (intptr_t) M_mindustry_type_UnitType_estimateDps_R_float, VTABLE_mindustry_type_UnitType_estimateDps_R_float, "()F", 1 },
	{ "load", (intptr_t) M_mindustry_type_UnitType_load, VTABLE_mindustry_type_UnitType_load, "()V", 1 },
	{ "getRegionsToOutline", (intptr_t) M_mindustry_type_UnitType_getRegionsToOutline_arc_struct_Seq, VTABLE_mindustry_type_UnitType_getRegionsToOutline_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "needsBodyOutline", (intptr_t) M_mindustry_type_UnitType_needsBodyOutline_R_boolean, VTABLE_mindustry_type_UnitType_needsBodyOutline_R_boolean, "()Z", 1 },
	{ "createIcons", (intptr_t) M_mindustry_type_UnitType_createIcons_mindustry_graphics_MultiPacker, VTABLE_mindustry_type_UnitType_createIcons_mindustry_graphics_MultiPacker, "(Lmindustry/graphics/MultiPacker;)V", 1 },
	{ "afterPatch", (intptr_t) M_mindustry_type_UnitType_afterPatch, VTABLE_mindustry_type_UnitType_afterPatch, "()V", 1 },
	{ "beforeParse", (intptr_t) M_mindustry_type_UnitType_beforeParse, VTABLE_mindustry_type_UnitType_beforeParse, "()V", 1 },
	{ "getBuildTime", (intptr_t) M_mindustry_type_UnitType_getBuildTime_R_float, VTABLE_mindustry_type_UnitType_getBuildTime_R_float, "()F", 1 },
	{ "getTotalRequirements", (intptr_t) M_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack, VTABLE_mindustry_type_UnitType_getTotalRequirements_R_Array1_mindustry_type_ItemStack, "()[Lmindustry/type/ItemStack;", 1 },
	{ "getRequirements", (intptr_t) M_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack, VTABLE_mindustry_type_UnitType_getRequirements_Array1_mindustry_type_UnitType_Array1_float_R_Array1_mindustry_type_ItemStack, "([Lmindustry/type/UnitType;[F)[Lmindustry/type/ItemStack;", 1 },
	{ "getFirstRequirements", (intptr_t) M_mindustry_type_UnitType_getFirstRequirements_R_Array1_mindustry_type_ItemStack, VTABLE_mindustry_type_UnitType_getFirstRequirements_R_Array1_mindustry_type_ItemStack, "()[Lmindustry/type/ItemStack;", 1 },
	{ "researchRequirements", (intptr_t) M_mindustry_type_UnitType_researchRequirements_R_Array1_mindustry_type_ItemStack, VTABLE_mindustry_type_UnitType_researchRequirements_R_Array1_mindustry_type_ItemStack, "()[Lmindustry/type/ItemStack;", 1 },
	{ "sense", (intptr_t) M_mindustry_type_UnitType_sense_mindustry_logic_LAccess_R_double, VTABLE_mindustry_type_UnitType_sense_mindustry_logic_LAccess_R_double, "(Lmindustry/logic/LAccess;)D", 1 },
	{ "senseObject", (intptr_t) M_mindustry_type_UnitType_senseObject_mindustry_logic_LAccess_R_java_lang_Object, VTABLE_mindustry_type_UnitType_senseObject_mindustry_logic_LAccess_R_java_lang_Object, "(Lmindustry/logic/LAccess;)Ljava/lang/Object;", 1 },
	{ "getContentType", (intptr_t) M_mindustry_type_UnitType_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_type_UnitType_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "setEnginesMirror", (intptr_t) M_mindustry_type_UnitType_setEnginesMirror_Array1_mindustry_type_UnitType$UnitEngine, VTABLE_mindustry_type_UnitType_setEnginesMirror_Array1_mindustry_type_UnitType$UnitEngine, "([Lmindustry/type/UnitType$UnitEngine;)V", 129 },
	{ "draw", (intptr_t) M_mindustry_type_UnitType_draw_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "shieldColor", (intptr_t) M_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color, VTABLE_mindustry_type_UnitType_shieldColor_mindustry_gen_Unit_R_arc_graphics_Color, "(Lmindustry/gen/Unit;)Larc/graphics/Color;", 1 },
	{ "drawMining", (intptr_t) M_mindustry_type_UnitType_drawMining_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawMining_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawMiningBeam", (intptr_t) M_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float, VTABLE_mindustry_type_UnitType_drawMiningBeam_mindustry_gen_Unit_float_float, "(Lmindustry/gen/Unit;FF)V", 1 },
	{ "drawPayload", (intptr_t) M_mindustry_type_UnitType_drawPayload_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawPayload_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawShield", (intptr_t) M_mindustry_type_UnitType_drawShield_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawShield_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawShadow", (intptr_t) M_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawShadow_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawSoftShadow", (intptr_t) M_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawSoftShadow", (intptr_t) M_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float, VTABLE_mindustry_type_UnitType_drawSoftShadow_mindustry_gen_Unit_float, "(Lmindustry/gen/Unit;F)V", 1 },
	{ "drawSoftShadow", (intptr_t) M_mindustry_type_UnitType_drawSoftShadow_float_float_float_float, VTABLE_mindustry_type_UnitType_drawSoftShadow_float_float_float_float, "(FFFF)V", 1 },
	{ "drawItems", (intptr_t) M_mindustry_type_UnitType_drawItems_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawItems_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawTrail", (intptr_t) M_mindustry_type_UnitType_drawTrail_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawTrail_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawEngines", (intptr_t) M_mindustry_type_UnitType_drawEngines_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawEngines_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawWeapons", (intptr_t) M_mindustry_type_UnitType_drawWeapons_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawWeapons_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawWeaponOutlines", (intptr_t) M_mindustry_type_UnitType_drawWeaponOutlines_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawWeaponOutlines_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawOutline", (intptr_t) M_mindustry_type_UnitType_drawOutline_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawOutline_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawBody", (intptr_t) M_mindustry_type_UnitType_drawBody_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawBody_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawCell", (intptr_t) M_mindustry_type_UnitType_drawCell_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawCell_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "cellColor", (intptr_t) M_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color, VTABLE_mindustry_type_UnitType_cellColor_mindustry_gen_Unit_R_arc_graphics_Color, "(Lmindustry/gen/Unit;)Larc/graphics/Color;", 1 },
	{ "drawLight", (intptr_t) M_mindustry_type_UnitType_drawLight_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawLight_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawTank", (intptr_t) M_mindustry_type_UnitType_drawTank_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawTank_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawLegs", (intptr_t) M_mindustry_type_UnitType_drawLegs_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_drawLegs_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawCrawl", (intptr_t) M_mindustry_type_UnitType_drawCrawl_mindustry_gen_Crawlc, VTABLE_mindustry_type_UnitType_drawCrawl_mindustry_gen_Crawlc, "(Lmindustry/gen/Crawlc;)V", 1 },
	{ "drawMech", (intptr_t) M_mindustry_type_UnitType_drawMech_mindustry_gen_Mechc, VTABLE_mindustry_type_UnitType_drawMech_mindustry_gen_Mechc, "(Lmindustry/gen/Mechc;)V", 1 },
	{ "applyOutlineColor", (intptr_t) M_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_applyOutlineColor_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "applyColor", (intptr_t) M_mindustry_type_UnitType_applyColor_mindustry_gen_Unit, VTABLE_mindustry_type_UnitType_applyColor_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "lambda$researchRequirements$0", (intptr_t) SM_mindustry_type_UnitType_lambda$researchRequirements$0_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$getRequirements$9", (intptr_t) M_mindustry_type_UnitType_lambda$getRequirements$9_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean, VTABLE_mindustry_type_UnitType_lambda$getRequirements$9_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean, "(Lmindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan;)Z", 4098 },
	{ "lambda$getRequirements$7", (intptr_t) M_mindustry_type_UnitType_lambda$getRequirements$7_mindustry_world_Block_R_boolean, VTABLE_mindustry_type_UnitType_lambda$getRequirements$7_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 4098 },
	{ "lambda$getRequirements$8", (intptr_t) M_mindustry_type_UnitType_lambda$getRequirements$8_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean, VTABLE_mindustry_type_UnitType_lambda$getRequirements$8_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan_R_boolean, "(Lmindustry/world/blocks/units/UnitAssembler$AssemblerUnitPlan;)Z", 4098 },
	{ "lambda$getRequirements$6", (intptr_t) M_mindustry_type_UnitType_lambda$getRequirements$6_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean, VTABLE_mindustry_type_UnitType_lambda$getRequirements$6_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean, "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)Z", 4098 },
	{ "lambda$getRequirements$4", (intptr_t) M_mindustry_type_UnitType_lambda$getRequirements$4_mindustry_world_Block_R_boolean, VTABLE_mindustry_type_UnitType_lambda$getRequirements$4_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 4098 },
	{ "lambda$getRequirements$5", (intptr_t) M_mindustry_type_UnitType_lambda$getRequirements$5_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean, VTABLE_mindustry_type_UnitType_lambda$getRequirements$5_mindustry_world_blocks_units_UnitFactory$UnitPlan_R_boolean, "(Lmindustry/world/blocks/units/UnitFactory$UnitPlan;)Z", 4098 },
	{ "lambda$getRequirements$3", (intptr_t) M_mindustry_type_UnitType_lambda$getRequirements$3_Array1_mindustry_type_UnitType_R_boolean, VTABLE_mindustry_type_UnitType_lambda$getRequirements$3_Array1_mindustry_type_UnitType_R_boolean, "([Lmindustry/type/UnitType;)Z", 4098 },
	{ "lambda$getRequirements$2", (intptr_t) SM_mindustry_type_UnitType_lambda$getRequirements$2_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$getRequirements$0", (intptr_t) M_mindustry_type_UnitType_lambda$getRequirements$0_mindustry_world_Block_R_boolean, VTABLE_mindustry_type_UnitType_lambda$getRequirements$0_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 4098 },
	{ "lambda$getRequirements$1", (intptr_t) M_mindustry_type_UnitType_lambda$getRequirements$1_Array1_mindustry_type_UnitType_R_boolean, VTABLE_mindustry_type_UnitType_lambda$getRequirements$1_Array1_mindustry_type_UnitType_R_boolean, "([Lmindustry/type/UnitType;)Z", 4098 },
	{ "lambda$createIcons$1", (intptr_t) SM_mindustry_type_UnitType_lambda$createIcons$1_mindustry_entities_part_DrawPart_R_boolean, 0, "(Lmindustry/entities/part/DrawPart;)Z", 4106 },
	{ "lambda$createIcons$0", (intptr_t) SM_mindustry_type_UnitType_lambda$createIcons$0_mindustry_entities_part_DrawPart_R_boolean, 0, "(Lmindustry/entities/part/DrawPart;)Z", 4106 },
	{ "lambda$estimateDps$0", (intptr_t) SM_mindustry_type_UnitType_lambda$estimateDps$0_mindustry_type_Weapon_R_boolean, 0, "(Lmindustry/type/Weapon;)Z", 4106 },
	{ "lambda$init$4", (intptr_t) SM_mindustry_type_UnitType_lambda$init$4_mindustry_type_Weapon_R_boolean, 0, "(Lmindustry/type/Weapon;)Z", 4106 },
	{ "lambda$init$3", (intptr_t) SM_mindustry_type_UnitType_lambda$init$3_mindustry_type_Weapon_R_boolean, 0, "(Lmindustry/type/Weapon;)Z", 4106 },
	{ "lambda$init$2", (intptr_t) M_mindustry_type_UnitType_lambda$init$2_mindustry_entities_Effect$EffectContainer, VTABLE_mindustry_type_UnitType_lambda$init$2_mindustry_entities_Effect$EffectContainer, "(Lmindustry/entities/Effect$EffectContainer;)V", 4098 },
	{ "lambda$init$1", (intptr_t) SM_mindustry_type_UnitType_lambda$init$1_mindustry_type_Weapon_R_boolean, 0, "(Lmindustry/type/Weapon;)Z", 4106 },
	{ "lambda$init$0", (intptr_t) SM_mindustry_type_UnitType_lambda$init$0_mindustry_type_Weapon_R_boolean, 0, "(Lmindustry/type/Weapon;)Z", 4106 },
	{ "lambda$setStats$2", (intptr_t) M_mindustry_type_UnitType_lambda$setStats$2_mindustry_world_Block_R_boolean, VTABLE_mindustry_type_UnitType_lambda$setStats$2_mindustry_world_Block_R_boolean, "(Lmindustry/world/Block;)Z", 4098 },
	{ "lambda$setStats$1", (intptr_t) SM_mindustry_type_UnitType_lambda$setStats$1_mindustry_entities_abilities_Ability_R_boolean, 0, "(Lmindustry/entities/abilities/Ability;)Z", 4106 },
	{ "lambda$setStats$0", (intptr_t) M_mindustry_type_UnitType_lambda$setStats$0_arc_scene_ui_layout_Table, VTABLE_mindustry_type_UnitType_lambda$setStats$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$display$4", (intptr_t) SM_mindustry_type_UnitType_lambda$display$4_mindustry_gen_Unit_R_java_lang_CharSequence, 0, "(Lmindustry/gen/Unit;)Ljava/lang/CharSequence;", 4106 },
	{ "lambda$display$1", (intptr_t) M_mindustry_type_UnitType_lambda$display$1_mindustry_gen_Unit_arc_scene_ui_layout_Table, VTABLE_mindustry_type_UnitType_lambda$display$1_mindustry_gen_Unit_arc_scene_ui_layout_Table, "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$display$3", (intptr_t) SM_mindustry_type_UnitType_lambda$display$3_Array1_float_mindustry_gen_Payloadc_arc_scene_ui_layout_Table, 0, "([FLmindustry/gen/Payloadc;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$display$2", (intptr_t) M_mindustry_type_UnitType_lambda$display$2_mindustry_gen_Payloadc_R_float, VTABLE_mindustry_type_UnitType_lambda$display$2_mindustry_gen_Payloadc_R_float, "(Lmindustry/gen/Payloadc;)F", 4098 },
	{ "lambda$display$0", (intptr_t) M_mindustry_type_UnitType_lambda$display$0_mindustry_gen_Unit_arc_scene_ui_layout_Table, VTABLE_mindustry_type_UnitType_lambda$display$0_mindustry_gen_Unit_arc_scene_ui_layout_Table, "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_type_UnitType_lambda$new$1_mindustry_gen_Unit_R_mindustry_entities_units_UnitController, VTABLE_mindustry_type_UnitType_lambda$new$1_mindustry_gen_Unit_R_mindustry_entities_units_UnitController, "(Lmindustry/gen/Unit;)Lmindustry/entities/units/UnitController;", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_type_UnitType_lambda$new$0_R_mindustry_entities_units_UnitController, VTABLE_mindustry_type_UnitType_lambda$new$0_R_mindustry_entities_units_UnitController, "()Lmindustry/entities/units/UnitController;", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_type_UnitType, 0, "()V", 8 },
};

Class class_mindustry_type_UnitType{
		.nativeName = (intptr_t) "mindustry/type/UnitType",
		.parentClass = (intptr_t) &class_mindustry_ctype_UnlockableContent,
		.size = sizeof(mindustry_type_UnitType),
		.classVtable = (intptr_t) vtable_mindustry_type_UnitType,
		.staticInitializer = (intptr_t) clinit_mindustry_type_UnitType,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_UnitType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 251,
		.nativeFields = (intptr_t) fields,
		.methodCount = 103,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 133,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_UnitType = registerClass(&class_mindustry_type_UnitType);

}
