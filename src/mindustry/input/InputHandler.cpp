#include "mindustry/input/InputHandler.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_57.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_56.h"
#include "arc/func/Prov.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_55.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_54.h"
#include "arc/Input.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_59.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_58.h"
#include "arc/func/Boolp.h"
#include "mindustry/game/EventType_ConfigEvent.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_53.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_52.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "arc/func/Boolf.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_51.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_50.h"
#include "arc/math/Mathf.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_46.h"
#include "mindustry/game/EventType_WithdrawEvent.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_45.h"
#include "arc/func/Floatf.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_44.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_43.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_49.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_48.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_47.h"
#include "mindustry/input/Binding.h"
#include "mindustry/input/Placement.h"
#include "arc/util/Time.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_UnitDestroyEvent.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/net/Administration_PlayerAction.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_42.h"
#include "mindustry/world/modules/LiquidModule.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_41.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_40.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_35.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_34.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_37.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_33.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_32.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_39.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_34.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_38.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_33.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_37.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_36.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_36.h"
#include "arc/audio/AudioBus.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_35.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/input/InputHandler_1.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/core/Control.h"
#include "mindustry/ai/UnitGroup.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_31.h"
#include "arc/input/KeyBind.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_27.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_26.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_29.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_28.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_23.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_22.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_25.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_24.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/graphics/Drawf.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_30.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_32.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_31.h"
#include "mindustry/Vars.h"
#include "mindustry/input/InputHandler_invoke_java_lang_Runnable_13.h"
#include "mindustry/input/InputHandler_invoke_java_lang_Runnable_12.h"
#include "mindustry/input/InputHandler_invoke_java_lang_Runnable_11.h"
#include "mindustry/input/InputHandler_invoke_java_lang_Runnable_10.h"
#include "arc/math/Angles.h"
#include "arc/Events.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_19.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/EventType_SchematicCreateEvent.h"
#include "arc/struct/StringMap.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_21.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolf_20.h"
#include "mindustry/gen/Mechc.h"
#include "mindustry/ai/UnitStance.h"
#include "java/lang/reflect/Field.h"
#include "arc/input/InputProcessor.h"
#include "mindustry/gen/Unit.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/struct/Queue.h"
#include "mindustry/type/Item.h"
#include "mindustry/input/Placement_NormalizeDrawResult.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/game/EventType_BuildingCommandEvent.h"
#include "mindustry/entities/Units.h"
#include "mindustry/gen/Hitboxc.h"
#include "mindustry/input/InputHandler_invoke_java_lang_Runnable_17.h"
#include "arc/graphics/Camera.h"
#include "mindustry/input/InputHandler_invoke_java_lang_Runnable_16.h"
#include "mindustry/input/InputHandler_PlaceLine.h"
#include "mindustry/input/InputHandler_invoke_java_lang_Runnable_15.h"
#include "mindustry/input/InputHandler_invoke_java_lang_Runnable_14.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/ui/fragments/BlockInventoryFragment.h"
#include "mindustry/world/Block.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/type/LiquidStack.h"
#include "java/lang/String.h"
#include "mindustry/gen/TileConfigCallPacket.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/net/Administration_ActionType.h"
#include "mindustry/net/NetConnection.h"
#include "arc/math/geom/Geometry.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Teamc.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "mindustry/world/blocks/distribution/ChainedBuilding.h"
#include "java/lang/CharSequence.h"
#include "arc/input/GestureDetector.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ui/dialogs/SchematicsDialog.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/core/GameState.h"
#include "arc/input/GestureDetector_GestureListener.h"
#include "mindustry/world/Build.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/util/Eachable.h"
#include "mindustry/gen/Minerc.h"
#include "mindustry/content/Fx.h"
#include "java/util/Arrays.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/ui/fragments/PlanConfigFragment.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "mindustry/input/InputHandler_invoke_java_lang_Runnable_9.h"
#include "mindustry/gen/Building.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Intf_1.h"
#include "arc/scene/Scene.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Unitc.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/net/Administration.h"
#include "mindustry/content/UnitTypes.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolp_2.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Boolp_3.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "mindustry/net/ValidateException.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/input/Placement_NormalizeResult.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/game/Teams.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/audio/Sound.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/gen/Statusc.h"
#include "arc/util/Ratekeeper.h"
#include "mindustry/core/World.h"
#include "mindustry/game/EventType_BuildRotateEvent.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Prov_1.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/game/EventType_DepositEvent.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/input/InputHandler_QueryEachable.h"
#include "arc/math/geom/Position.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/gen/Payloadc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Builderc.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Floatf_2.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Floatf_3.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/graphics/g2d/Lines.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "arc/struct/IntSeq.h"
#include "arc/struct/IntSet.h"
#include "mindustry/game/EventType_UnitControlEvent.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/BlockConfigFragment.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/content/Blocks.h"
#include "arc/scene/Element.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_60.h"
#include "mindustry/game/EventType_TapEvent.h"
#include "mindustry/gen/Call.h"
#include "mindustry/audio/SoundControl.h"
#include "mindustry/input/InputHandler_invoke_arc_func_Cons_61.h"

extern "C" {

jobject SF_mindustry_input_InputHandler_queuedCommands;
jfloat SF_mindustry_input_InputHandler_playerSelectRange;
jfloat SF_mindustry_input_InputHandler_unitSelectRadScl;
jobject SF_mindustry_input_InputHandler_stancesOut;
jobject SF_mindustry_input_InputHandler_removed;
jobject SF_mindustry_input_InputHandler_intSet;
jint SF_mindustry_input_InputHandler_maxLength;
jobject SF_mindustry_input_InputHandler_r1;
jobject SF_mindustry_input_InputHandler_r2;
jobject SF_mindustry_input_InputHandler_tmpUnits;
jobject SF_mindustry_input_InputHandler_tmpBuildings;
jobject SF_mindustry_input_InputHandler_controlGroupBindings;
jobject SF_mindustry_input_InputHandler_sameQuadPlan;
jobject SF_mindustry_input_InputHandler_sameQuadPlanFinder;
jobject SF_mindustry_input_InputHandler_vpIgnore;
jobject SF_mindustry_input_InputHandler_vpBlock;
jint SF_mindustry_input_InputHandler_vpX;
jint SF_mindustry_input_InputHandler_vpY;
jobject SF_mindustry_input_InputHandler_vpPredicate;

void mark_mindustry_input_InputHandler(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_input_InputHandler_queuedCommands)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_queuedCommands)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_queuedCommands, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_stancesOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_stancesOut)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_stancesOut, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_removed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_removed)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_removed, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_intSet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_intSet)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_intSet, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_r1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_r1)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_r1, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_r2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_r2)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_r2, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_tmpUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_tmpUnits)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_tmpUnits, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_tmpBuildings)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_tmpBuildings)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_tmpBuildings, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_controlGroupBindings)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_controlGroupBindings)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_controlGroupBindings, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_sameQuadPlan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_sameQuadPlan)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_sameQuadPlan, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_sameQuadPlanFinder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_sameQuadPlanFinder)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_sameQuadPlanFinder, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_vpIgnore)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_vpIgnore)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_vpIgnore, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_vpBlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_vpBlock)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_vpBlock, mark, depth + 1);
		if (SF_mindustry_input_InputHandler_vpPredicate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_InputHandler_vpPredicate)->clazz)->markFunction)((jobject) SF_mindustry_input_InputHandler_vpPredicate, mark, depth + 1);
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
	auto self = (mindustry_input_InputHandler *) object;
	if (self->F_logicCamPan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_logicCamPan)->clazz)->markFunction)((jobject) self->F_logicCamPan, mark, depth + 1);
	if (self->F_inputLocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inputLocks)->clazz)->markFunction)((jobject) self->F_inputLocks, mark, depth + 1);
	if (self->F_controlInterval)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controlInterval)->clazz)->markFunction)((jobject) self->F_controlInterval, mark, depth + 1);
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_uiGroup)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uiGroup)->clazz)->markFunction)((jobject) self->F_uiGroup, mark, depth + 1);
	if (self->F_controlledType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controlledType)->clazz)->markFunction)((jobject) self->F_controlledType, mark, depth + 1);
	if (self->F_lastSchematic)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSchematic)->clazz)->markFunction)((jobject) self->F_lastSchematic, mark, depth + 1);
	if (self->F_detector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_detector)->clazz)->markFunction)((jobject) self->F_detector, mark, depth + 1);
	if (self->F_line)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_line)->clazz)->markFunction)((jobject) self->F_line, mark, depth + 1);
	if (self->F_resultplan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resultplan)->clazz)->markFunction)((jobject) self->F_resultplan, mark, depth + 1);
	if (self->F_bplan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bplan)->clazz)->markFunction)((jobject) self->F_bplan, mark, depth + 1);
	if (self->F_linePlans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_linePlans)->clazz)->markFunction)((jobject) self->F_linePlans, mark, depth + 1);
	if (self->F_selectPlans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectPlans)->clazz)->markFunction)((jobject) self->F_selectPlans, mark, depth + 1);
	if (self->F_lastPlans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastPlans)->clazz)->markFunction)((jobject) self->F_lastPlans, mark, depth + 1);
	if (self->F_lastUnit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastUnit)->clazz)->markFunction)((jobject) self->F_lastUnit, mark, depth + 1);
	if (self->F_spectating)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spectating)->clazz)->markFunction)((jobject) self->F_spectating, mark, depth + 1);
	if (self->F_selectedUnits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectedUnits)->clazz)->markFunction)((jobject) self->F_selectedUnits, mark, depth + 1);
	if (self->F_commandBuildings)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commandBuildings)->clazz)->markFunction)((jobject) self->F_commandBuildings, mark, depth + 1);
	if (self->F_controlGroups)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controlGroups)->clazz)->markFunction)((jobject) self->F_controlGroups, mark, depth + 1);
	if (self->F_plansOut)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plansOut)->clazz)->markFunction)((jobject) self->F_plansOut, mark, depth + 1);
	if (self->F_playerPlanTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_playerPlanTree)->clazz)->markFunction)((jobject) self->F_playerPlanTree, mark, depth + 1);
	if (self->F_selectPlanTree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectPlanTree)->clazz)->markFunction)((jobject) self->F_selectPlanTree, mark, depth + 1);
	if (self->F_inv)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_inv)->clazz)->markFunction)((jobject) self->F_inv, mark, depth + 1);
	if (self->F_config)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_config)->clazz)->markFunction)((jobject) self->F_config, mark, depth + 1);
	if (self->F_planConfig)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_planConfig)->clazz)->markFunction)((jobject) self->F_planConfig, mark, depth + 1);
	if (self->F_group)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_group)->clazz)->markFunction)((jobject) self->F_group, mark, depth + 1);
	if (self->F_overlappingPlan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overlappingPlan)->clazz)->markFunction)((jobject) self->F_overlappingPlan, mark, depth + 1);
	if (self->F_overlappingPlayer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overlappingPlayer)->clazz)->markFunction)((jobject) self->F_overlappingPlayer, mark, depth + 1);
	if (self->F_allPlans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allPlans)->clazz)->markFunction)((jobject) self->F_allPlans, mark, depth + 1);
	if (self->F_allSelectLines)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allSelectLines)->clazz)->markFunction)((jobject) self->F_allSelectLines, mark, depth + 1);
	if (self->F_allRenderPlansConfig)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allRenderPlansConfig)->clazz)->markFunction)((jobject) self->F_allRenderPlansConfig, mark, depth + 1);
}

void init_mindustry_input_InputHandler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(133);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_logicCamPan = (jref) sp[1].o;
	LINE_NUMBER(82);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_logicCamSpeed = (jfloat(0.1f));
	LINE_NUMBER(83);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_logicCutsceneZoom = (jfloat(-1.0f));
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_func_Boolp, (jint(2)));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolp_2(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolp_2 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolp_2);
		sp[2].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolp_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_inputLocks = (jref) sp[1].o;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlInterval = (jref) sp[1].o;
	LINE_NUMBER(90);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation = (jint(1));
	LINE_NUMBER(94);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding = (jint(1));
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_buildWasAutoPaused = (jint(0));
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_wasShooting = (jint(0));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_InputHandler$PlaceLine(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_input_InputHandler$PlaceLine);
	init_mindustry_input_InputHandler$PlaceLine(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_line = (jref) sp[1].o;
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	init_mindustry_entities_units_BuildPlan(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_bplan = (jref) sp[1].o;
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_linePlans = (jref) sp[1].o;
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_entities_units_BuildPlan)));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectPlans = (jref) sp[1].o;
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Queue(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Queue);
	init_arc_struct_Queue(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_lastPlans = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectedUnits = (jref) sp[1].o;
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandBuildings = (jref) sp[1].o;
	LINE_NUMBER(112);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode = (jint(0));
	LINE_NUMBER(113);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect = (jint(0));
	LINE_NUMBER(114);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_tappedOne = (jint(0));
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_InputHandler(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_controlGroupBindings;
	sp[1].o = (jobject)createArray(ctx, &class_arc_struct_IntSeq, (((jarray) nullCheck(ctx, sp[1].o))->length));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlGroups = (jref) sp[1].o;
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[1].o, (((jobject) &class_mindustry_entities_units_BuildPlan)));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_plansOut = (jref) sp[1].o;
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_QuadTree(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[2].o);
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_playerPlanTree = (jref) sp[1].o;
	LINE_NUMBER(121);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_QuadTree(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[2].o);
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectPlanTree = (jref) sp[1].o;
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_WidgetGroup);
	init_arc_scene_ui_layout_WidgetGroup(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_group = (jref) sp[1].o;
	LINE_NUMBER(128);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan = (jref) (jobject(nullptr));
	LINE_NUMBER(129);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlayer = (jref) (jobject(nullptr));
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_group;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_childrenOnly;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_BlockInventoryFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_BlockInventoryFragment);
	init_mindustry_ui_fragments_BlockInventoryFragment(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_inv = (jref) sp[1].o;
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_BlockConfigFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_BlockConfigFragment);
	init_mindustry_ui_fragments_BlockConfigFragment(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_fragments_PlanConfigFragment(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_PlanConfigFragment);
	init_mindustry_ui_fragments_PlanConfigFragment(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_planConfig = (jref) sp[1].o;
	LINE_NUMBER(139);
	((func_mindustry_input_InputHandler_createPlanLists) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_createPlanLists])(ctx, (frame[0].o));
	LINE_NUMBER(141);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_31);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(147);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_32(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_32 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(149);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_33(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_33 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_initQuadtrees(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:initQuadtrees", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_QuadTree(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[3].o);
	jfloat temp3 = jfloat(temp2);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[3].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp0, temp1, temp3, (jfloat(temp4)));
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_playerPlanTree = (jref) sp[1].o;
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_QuadTree(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	jfloat temp5 = jfloat(0);
	jfloat temp6 = jfloat(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp7 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[3].o);
	jfloat temp8 = jfloat(temp7);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_world;
	jint temp9 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[3].o);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp5, temp6, temp8, (jfloat(temp9)));
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectPlanTree = (jref) sp[1].o;
	LINE_NUMBER(155);
	((func_mindustry_input_InputHandler_createPlanLists) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_createPlanLists])(ctx, (frame[0].o));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_transferItemEffect_mindustry_type_Item_float_float_mindustry_gen_Itemsc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:transferItemEffect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(162);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(163);
	SM_mindustry_input_InputHandler_createItemTransfer_mindustry_type_Item_int_float_float_arc_math_geom_Position_java_lang_Runnable(ctx, (frame[0].o), (jint(1)), (frame[1].f), (frame[2].f), (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(164);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_takeItems_mindustry_gen_Building_mindustry_type_Item_int_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:takeItems", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(168);
	if ((frame[3].o) == nullptr) goto label_1;
	}
	INST_ALOAD(0);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_gen_Unit_maxAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_maxAccepted_mindustry_type_Item_R_int])(ctx, (frame[3].o), (frame[1].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (frame[2].i));
	jint temp2 = (jint)((func_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_removeStack_mindustry_type_Item_int_R_int])(ctx, sp[0].o, sp[1].o, temp1);
	frame[4].i = temp2;
	LINE_NUMBER(171);
	if ((frame[4].i) != 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(173);
	((func_mindustry_gen_Unit_addItem_mindustry_type_Item_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_Unit_addItem_mindustry_type_Item_int])(ctx, (frame[3].o), (frame[1].o), (frame[4].i));
	LINE_NUMBER(174);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[5].i;
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, ((frame[4].i) / (jint(3))), (jint(1)), (8));
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(175);
	jfloat temp0 = (jfloat((frame[5].i))) * (jfloat(3.0f));
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_java_lang_Runnable_9);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(174);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(177);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_transferItemToUnit_mindustry_type_Item_float_float_mindustry_gen_Itemsc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:transferItemToUnit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(181);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	jfloat temp1 = frame[1].f;
	jfloat temp2 = frame[2].f;
	sp[1].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_java_lang_Runnable_10(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_java_lang_Runnable_10 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_java_lang_Runnable_10);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_input_InputHandler_createItemTransfer_mindustry_type_Item_int_float_float_arc_math_geom_Position_java_lang_Runnable(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_setItem_mindustry_gen_Building_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:setItem", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(187);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_setItems_mindustry_gen_Building_Array1_mindustry_type_ItemStack(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:setItems", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(193);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(195);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	((func_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_amount));
	LINE_NUMBER(195);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(198);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_setTileItems_mindustry_type_Item_int_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:setTileItems", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(202);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(203);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(204);
	if ((frame[7].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_items;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_set_mindustry_type_Item_int])(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	}
label_5:;
	{
	LINE_NUMBER(202);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_clearItems_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:clearItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(212);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_items;
	((func_mindustry_world_modules_ItemModule_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_clear])(ctx, sp[0].o);
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_setLiquid_mindustry_gen_Building_mindustry_type_Liquid_float(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:setLiquid", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(218);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[1].o), (frame[2].f));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_setLiquids_mindustry_gen_Building_Array1_mindustry_type_LiquidStack(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:setLiquids", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(224);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(226);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	sp[1].o = (jobject)((mindustry_type_LiquidStack *) NULL_CHECK((frame[5].o)))->F_liquid;
	((func_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_LiquidStack *) NULL_CHECK((frame[5].o)))->F_amount));
	LINE_NUMBER(226);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(229);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_setTileLiquids_mindustry_type_Liquid_float_Array1_int(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:setTileLiquids", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(233);
	frame[3].o = (frame[2].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_1:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_2;
	}
	{
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(234);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(235);
	if ((frame[7].o) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_liquids;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_set_mindustry_type_Liquid_float])(ctx, sp[0].o, (frame[0].o), (frame[1].f));
	}
label_5:;
	{
	LINE_NUMBER(233);
	INST_IINC(5, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(239);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_clearLiquids_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:clearLiquids", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(243);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_liquids;
	((func_mindustry_world_modules_LiquidModule_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_LiquidModule_clear])(ctx, sp[0].o);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:transferItemTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(249);
	if ((frame[5].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(251);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, (frame[0].o));
	if (sp[0].o != (frame[1].o)) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_stack;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_amount) - (frame[2].i)), (jint(0)));
	((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount = temp0;
	}
label_3:;
	{
	LINE_NUMBER(253);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[6].i;
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, ((frame[2].i) / (jint(3))), (jint(1)), (8));
	if (temp0 >= temp1) goto label_5;
	}
	{
	LINE_NUMBER(254);
	jfloat temp0 = jfloat(((frame[6].i) * (jint(3))));
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_java_lang_Runnable_11(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_java_lang_Runnable_11 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_java_lang_Runnable_11);
		proxy->F_field4 = (jref) (frame[5].o);
		proxy->F_field3 = (frame[4].f);
		proxy->F_field2 = (frame[3].f);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(253);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(256);
	if ((frame[2].i) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(257);
	((func_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_handleStack_mindustry_type_Item_int_mindustry_gen_Teamc])(ctx, (frame[5].o), (frame[1].o), (frame[2].i), (frame[0].o));
	}
label_8:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_deletePlans_mindustry_gen_Player_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:deletePlans", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_removePlanned;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_34(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_34 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_34);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(264);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot remove plans."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(267);
	if ((frame[0].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(275);
	frame[4].o = (frame[1].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_9;
	}
	{
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(276);
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_x;
	jint temp1 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[7].i));
	if (temp0 != temp1) goto label_11;
	}
	{
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_y;
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[7].i));
	if (temp0 != temp1) goto label_11;
	}
	{
	LINE_NUMBER(277);
	((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[3].o)))->F_removed = (jint(1));
	LINE_NUMBER(278);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[2].o)))(ctx, (frame[2].o));
	LINE_NUMBER(279);
	goto label_4;
	}
label_11:;
	{
	LINE_NUMBER(275);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(282);
	goto label_4;
label_5:;
	LINE_NUMBER(283);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_pingLocation_mindustry_gen_Player_float_float_java_lang_String(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:pingLocation", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(287);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_pingLocation;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_35(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_35 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_35);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(291);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player was not allowed to ping a location."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(293);
	if ((frame[0].o) == nullptr) goto label_3;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
	if ((--sp)->o == nullptr) goto label_3;
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(294);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingX = (frame[1].f);
	LINE_NUMBER(295);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingY = (frame[2].f);
	LINE_NUMBER(296);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_pingTime = (jfloat(1));
	LINE_NUMBER(297);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].o) == nullptr) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
label_8:;
	INST_ACONST_NULL();
	goto label_10;
label_9:;
	{
	LINE_NUMBER(298);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	if (temp0 <= (40)) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[3].o), (jint(0)), (40));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001..."_j.string, 1, sp[0].o);
	sp += 1;
	goto label_10;
	}
label_11:;
	INST_ALOAD(3);
label_10:;
	sp -= 2;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_pingText = (jref) sp[1].o;
label_3:;
	LINE_NUMBER(300);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_createItemTransfer_mindustry_type_Item_int_float_float_arc_math_geom_Position_java_lang_Runnable(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:createItemTransfer", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(303);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_itemTransfer;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = jfloat((frame[1].i));
	sp[1].o = (jobject)((mindustry_type_Item *) NULL_CHECK((frame[0].o)))->F_color;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, (frame[4].o));
	LINE_NUMBER(304);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(305);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_itemTransfer;
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, ((jfloat)((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_lifetime), (frame[5].o));
	}
label_2:;
	LINE_NUMBER(307);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_commandUnits_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5, jbool param6) {
	jtype frame[22];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:commandUnits", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(311);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(313);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_commandUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_36(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_36 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_36);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(316);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot command units."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(319);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	INST_ALOAD(3);
	goto label_6;
label_5:;
	INST_ALOAD(2);
label_6:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(320);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	sp += 1;
	if ((frame[7].o) == nullptr) goto label_8;
	}
	INST_ALOAD(7);
	goto label_9;
label_8:;
	INST_ALOAD(4);
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(321);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_queuedCommands;
	sp[1].o = frame[8].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Prov_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[9].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(322);
	frame[10].i = (jint(0));
	LINE_NUMBER(324);
	if ((frame[3].o) != nullptr) goto label_13;
	}
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_14;
label_13:;
	{
	LINE_NUMBER(325);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandAttack;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	goto label_15;
	}
label_14:;
	{
	LINE_NUMBER(327);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandPosition;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(330);
	frame[11].o = (frame[1].o);
	frame[12].i = (((jarray) nullCheck(ctx, (frame[11].o)))->length);
	frame[13].i = (jint(0));
	}
label_16:;
	{
	if ((frame[13].i) >= (frame[12].i)) goto label_17;
	}
	{
	frame[14].i = ((jint)ARRAY_ACCESS(jint, (frame[11].o), (frame[13].i)));
	LINE_NUMBER(331);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[14].i));
	frame[15].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(332);
	if ((frame[15].o) == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[15].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_20;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[15].o));
	frame[17].o = sp[0].o;
	if ((isInstance(ctx, (frame[17].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_20;
	}
	{
	frame[16].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[17].o)));
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[16].o)))->F_command;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[16].o)))->F_command;
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK(sp[0].o))->F_switchToMove) == 0) goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[16].o;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_moveCommand;
	((func_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand])(ctx, sp[0].o, sp[1].o);
	}
label_24:;
	{
	LINE_NUMBER(340);
	if ((frame[7].o) == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[7].o)))(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_25;
	}
	{
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_gen_Unit)) == 0) goto label_26;
	}
	{
	LINE_NUMBER(341);
	frame[17].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[7].o)));
	jint temp0 = (jint)((func_mindustry_gen_Unit_canTarget_mindustry_gen_Teamc_R_boolean) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_mindustry_gen_Unit_canTarget_mindustry_gen_Teamc_R_boolean])(ctx, (frame[15].o), (frame[17].o));
	if (temp0 == 0) goto label_25;
	}
label_26:;
	{
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_gen_Building)) == 0) goto label_29;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[15].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_targetGround) == 0) goto label_25;
	}
label_29:;
	{
	LINE_NUMBER(343);
	frame[10].i = (jint(1));
	LINE_NUMBER(344);
	if ((frame[5].i) == 0) goto label_31;
	}
	{
	LINE_NUMBER(345);
	((func_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position])(ctx, (frame[16].o), (frame[7].o));
	goto label_33;
	}
label_31:;
	{
	LINE_NUMBER(347);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[16].o)))->F_commandQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(348);
	((func_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandTarget_mindustry_gen_Teamc])(ctx, (frame[16].o), (frame[7].o));
	goto label_33;
	}
label_25:;
	{
	LINE_NUMBER(350);
	if ((frame[4].o) == nullptr) goto label_33;
	}
	{
	LINE_NUMBER(351);
	if ((frame[5].i) == 0) goto label_36;
	}
	{
	LINE_NUMBER(352);
	((func_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandQueue_arc_math_geom_Position])(ctx, (frame[16].o), (frame[4].o));
	goto label_33;
	}
label_36:;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[16].o)))->F_commandQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(355);
	((func_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[16].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_commandPosition_arc_math_geom_Vec2])(ctx, (frame[16].o), (frame[4].o));
	}
label_33:;
	{
	LINE_NUMBER(359);
	sp[0].o = frame[15].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastCommanded = (jref) sp[1].o;
	LINE_NUMBER(360);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[16].o)))->F_commandQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) > 0) goto label_40;
	}
	{
	LINE_NUMBER(361);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[16].o)))->F_group = (jref) (jobject(nullptr));
	}
label_40:;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[9].o), (frame[15].o));
	}
label_20:;
	{
	LINE_NUMBER(330);
	INST_IINC(13, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(370);
	if ((frame[6].i) == 0) goto label_42;
	}
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ai_UnitGroup, (jint(4)));
	frame[11].o = sp[0].o;
	LINE_NUMBER(373);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_queuedCommands;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[8].o));
	frame[12].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(375);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[12].o));
	frame[13].o = sp[0].o;
	}
label_46:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_47;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(376);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[14].o));
	frame[16].o = sp[0].o;
	if ((isInstance(ctx, (frame[16].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_49;
	}
	{
	frame[15].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[16].o)));
	LINE_NUMBER(378);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[15].o)))->F_commandQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_49;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(1))) goto label_49;
	}
	{
	LINE_NUMBER(379);
	jint temp0 = (jint)((func_mindustry_gen_Unit_collisionLayer_R_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_gen_Unit_collisionLayer_R_int])(ctx, (frame[14].o));
	frame[16].i = temp0;
	LINE_NUMBER(381);
	if ((frame[16].i) != (jint(-1))) goto label_53;
	}
	INST_ICONST(0);
	INST_ISTORE(16);
label_53:;
	{
	LINE_NUMBER(383);
	if (((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (frame[16].i))) != nullptr) goto label_54;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = frame[11].o;
	jint temp0 = frame[16].i;
	clinit_mindustry_ai_UnitGroup(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ai_UnitGroup);
	init_mindustry_ai_UnitGroup(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_54:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (frame[16].i)))))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[14].o));
	LINE_NUMBER(388);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[15].o)))->F_group = (jref) ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (frame[16].i)));
	}
label_49:;
	LINE_NUMBER(391);
	goto label_46;
label_47:;
	{
	LINE_NUMBER(393);
	frame[13].i = (jint(0));
	}
label_57:;
	{
	if ((frame[13].i) >= (((jarray) nullCheck(ctx, (frame[11].o)))->length)) goto label_42;
	}
	{
	LINE_NUMBER(394);
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (frame[13].i)));
	LINE_NUMBER(395);
	if ((frame[14].o) == nullptr) goto label_60;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_UnitGroup *) NULL_CHECK((frame[14].o)))->F_units;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_60;
	}
	{
	LINE_NUMBER(396);
	((func_mindustry_ai_UnitGroup_calculateFormation_arc_math_geom_Vec2_int) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_mindustry_ai_UnitGroup_calculateFormation_arc_math_geom_Vec2_int])(ctx, (frame[14].o), (frame[8].o), (frame[13].i));
	}
label_60:;
	{
	LINE_NUMBER(393);
	INST_IINC(13, 1);
	goto label_57;
	}
label_42:;
	{
	LINE_NUMBER(401);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= 0) goto label_62;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_62;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_62;
	}
	{
	LINE_NUMBER(402);
	if ((frame[10].i) == 0) goto label_64;
	}
	{
	LINE_NUMBER(403);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_attackCommand;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[7].o));
	goto label_62;
	}
label_64:;
	{
	LINE_NUMBER(405);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_moveCommand;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[4].o));
	}
label_62:;
	LINE_NUMBER(408);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_setUnitCommand_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:setUnitCommand", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(412);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(414);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_commandUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_37(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_37 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_37);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(418);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot command units."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(421);
	frame[3].o = (frame[1].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(422);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(423);
	if ((frame[7].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[7].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[7].o));
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_9;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[9].o)));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[7].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_allowCommand_mindustry_gen_Unit_mindustry_ai_UnitCommand_R_boolean])(ctx, sp[0].o, (frame[7].o), (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(424);
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[2].o)))->F_resetTarget) != 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand])(ctx, (frame[8].o));
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK(sp[0].o))->F_resetTarget) == 0) goto label_13;
	}
label_12:;
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(425);
	((func_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_command_mindustry_ai_UnitCommand])(ctx, (frame[8].o), (frame[2].o));
	LINE_NUMBER(426);
	if ((frame[9].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(427);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[8].o)))->F_targetPos = (jref) (jobject(nullptr));
	LINE_NUMBER(428);
	((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[8].o)))->F_attackTarget = (jref) (jobject(nullptr));
	}
label_17:;
	{
	LINE_NUMBER(430);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastCommanded = (jref) sp[1].o;
	LINE_NUMBER(433);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_stancesOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(434);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[7].o)))->F_type;
	sp[1].o = frame[7].o;
	clinit_mindustry_input_InputHandler(ctx);
	sp[2].o = (jobject)SF_mindustry_input_InputHandler_stancesOut;
	((func_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_getUnitStances_mindustry_gen_Unit_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(435);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitStances_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_mindustry_ai_UnitStance, sp[0].o));
	LINE_NUMBER(437);
	jint temp0 = (jint)((func_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_hasStance_mindustry_ai_UnitStance_R_boolean])(ctx, (frame[8].o), (frame[11].o));
	if (temp0 == 0) goto label_25;
	}
	{
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_stancesOut;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[11].o));
	if (temp0 != 0) goto label_25;
	}
	{
	LINE_NUMBER(438);
	((func_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_disableStance_mindustry_ai_UnitStance])(ctx, (frame[8].o), (frame[11].o));
	}
label_25:;
	LINE_NUMBER(440);
	goto label_23;
label_9:;
	{
	LINE_NUMBER(421);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(443);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_setUnitStanceChunked_arc_struct_IntSeq_mindustry_ai_UnitStance_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:setUnitStanceChunked", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(447);
	sp[0].o = frame[0].o;
	jint temp0 = 1000;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_38(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_38 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_38);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_chunked_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_chunked_int_arc_func_Cons])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_setUnitCommandChunked_arc_struct_IntSeq_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:setUnitCommandChunked", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	jint temp0 = 1000;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_39);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_IntSeq_chunked_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_chunked_int_arc_func_Cons])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_setUnitStance_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:setUnitStance", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(456);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(458);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_commandUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_40(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_40 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_40);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(461);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot command units."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(464);
	frame[4].o = (frame[1].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_6;
	}
	{
	frame[7].i = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(465);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(466);
	if ((frame[8].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[8].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[8].o));
	frame[10].o = sp[0].o;
	if ((isInstance(ctx, (frame[10].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_9;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[10].o)));
	LINE_NUMBER(467);
	sp[0].o = frame[2].o;
	clinit_mindustry_ai_UnitStance(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitStance_stop;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(468);
	((func_mindustry_ai_types_CommandAI_clearCommands) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_clearCommands])(ctx, (frame[9].o));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[8].o)))->F_type;
	jint temp0 = (jint)((func_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_allowStance_mindustry_gen_Unit_mindustry_ai_UnitStance_R_boolean])(ctx, sp[0].o, (frame[8].o), (frame[2].o));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(471);
	sp[0].o = frame[9].o;
	sp[1].o = frame[2].o;
	sp += 2;
	if (((jint)((mindustry_ai_UnitStance *) NULL_CHECK((frame[2].o)))->F_toggle) == 0) goto label_15;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_16;
label_15:;
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	POP_N(3); // Pop method args
	((func_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_types_CommandAI_setStance_mindustry_ai_UnitStance_boolean])(ctx, sp[0].o, sp[1].o, sp[2].i);
label_13:;
	{
	LINE_NUMBER(473);
	sp[0].o = frame[8].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_coloredName_R_java_lang_String])(ctx, (frame[0].o));
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_lastCommanded = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(464);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(476);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_commandBuilding_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:commandBuilding", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(480);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(482);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_commandBuilding;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_41(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_41 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_41);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(485);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot command buildings."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(488);
	frame[3].o = (frame[1].o);
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(489);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(491);
	if ((frame[7].o) == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Building_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_team_R_mindustry_game_Team])(ctx, (frame[7].o));
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_isCommandable_R_boolean])(ctx, (frame[7].o));
	if (temp0 != 0) goto label_10;
	}
	goto label_9;
label_10:;
	{
	LINE_NUMBER(493);
	((func_mindustry_gen_Building_onCommand_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_onCommand_arc_math_geom_Vec2])(ctx, (frame[7].o), (frame[2].o));
	LINE_NUMBER(494);
	((func_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player])(ctx, (frame[7].o), (frame[0].o));
	LINE_NUMBER(496);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(497);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_moveCommand;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[2].o));
	}
label_13:;
	{
	LINE_NUMBER(500);
	clinit_mindustry_game_EventType$BuildingCommandEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildingCommandEvent);
	init_mindustry_game_EventType$BuildingCommandEvent_mindustry_gen_Player_mindustry_gen_Building_arc_math_geom_Vec2(ctx, sp[0].o, (frame[0].o), (frame[7].o), (frame[2].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(488);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(503);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_requestItem_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:requestItem", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(507);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(220.0f)));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ILOAD(3);
	if ((--sp)->i > 0) goto label_2;
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(509);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_mindustry_entities_Units_canInteract_mindustry_gen_Player_mindustry_gen_Building_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_withdrawItem;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_42(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_42 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_42);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[4].o = (jobject) proxy;
	}
	LINE_NUMBER(510);
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	if (temp0 != 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(514);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot request items."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(517);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_maxAccepted_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Unit_maxAccepted_mindustry_type_Item_R_int])(ctx, sp[2].o, (frame[2].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, (frame[3].i));
	sp[2].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_takeItems_mindustry_gen_Building_mindustry_type_Item_int_mindustry_gen_Unit(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	LINE_NUMBER(518);
	clinit_mindustry_game_EventType$WithdrawEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$WithdrawEvent);
	init_mindustry_game_EventType$WithdrawEvent_mindustry_gen_Building_mindustry_gen_Player_mindustry_type_Item_int(ctx, sp[0].o, (frame[1].o), (frame[0].o), (frame[2].o), (frame[3].i));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_transferInventory_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:transferInventory", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(523);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jfloat(220.0f)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_allowDeposit_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_allowDeposit_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(525);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) <= 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_mindustry_entities_Units_canInteract_mindustry_gen_Player_mindustry_gen_Building_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(527);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_itemDepositRate;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	jint temp0 = (jint)((func_arc_util_Ratekeeper_allow_long_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Ratekeeper_allow_long_int_R_boolean])(ctx, sp[0].o, (jlong(((((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_itemDepositCooldown) * (jfloat(1000.0f))) * (jfloat(2))))), (jint(2)));
	if (temp0 == 0) goto label_4;
	}
label_6:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_depositItem;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_43(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_43 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	LINE_NUMBER(529);
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	if (temp0 != 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(533);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot transfer an item."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(537);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(538);
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_stack;
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[2].o))->F_amount), (frame[2].o));
	frame[4].i = temp0;
	LINE_NUMBER(540);
	SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, (frame[2].o), (frame[3].o), (frame[4].i), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_y), (frame[1].o));
	LINE_NUMBER(542);
	clinit_mindustry_game_EventType$DepositEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$DepositEvent);
	init_mindustry_game_EventType$DepositEvent_mindustry_gen_Building_mindustry_gen_Player_mindustry_type_Item_int(ctx, sp[0].o, (frame[1].o), (frame[0].o), (frame[3].o), (frame[4].i));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_removeQueueBlock_int_int_boolean(jcontext ctx, jint param0, jint param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:removeQueueBlock", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(547);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(548);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((func_mindustry_gen_Unit_removeBuild_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_removeBuild_int_int_boolean])(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i));
	}
label_1:;
	LINE_NUMBER(550);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_requestUnitPayload_mindustry_gen_Player_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:requestUnitPayload", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(554);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Payloadc)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[3].o)));
	if ((frame[1].o) != nullptr) goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isAI_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_type;
	jfloat temp0 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_hitSize) * (jfloat(2));
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jfloat temp1 = temp0 + (((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[2].o))->F_hitSize) * (jfloat(2)));
	LINE_NUMBER(559);
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, temp1);
	if (temp2 == 0) goto label_5;
	}
	{
	LINE_NUMBER(560);
	SM_mindustry_gen_Call_pickedUnitPayload_mindustry_gen_Unit_mindustry_gen_Unit(ctx, (frame[3].o), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(562);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_requestBuildPayload_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:requestBuildPayload", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(566);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_gen_Payloadc)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[3].o)));
	if ((frame[1].o) != nullptr) goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(570);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	jint temp0 = 8;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp1 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, sp[0].o, sp[1].o, (((jfloat((temp0 * ((jint)((mindustry_world_Block *) NULL_CHECK(sp[2].o))->F_size)))) * (jfloat(1.2f))) + (jfloat(40.0f))));
	if (temp1 != 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(572);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_pickupBlock;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_44);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(575);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot pick up a block."_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(578);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[3].o)))->F_team;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(581);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(582);
	SM_mindustry_gen_Call_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(ctx, (frame[3].o), (frame[1].o), (jint(0)));
	goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(584);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_hidden;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canPickup_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_canPickup_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(585);
	SM_mindustry_gen_Call_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(ctx, (frame[3].o), (frame[1].o), (jint(1)));
	}
label_8:;
	LINE_NUMBER(588);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_pickedUnitPayload_mindustry_gen_Unit_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:pickedUnitPayload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(592);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Payloadc)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[0].o)));
	LINE_NUMBER(593);
	((func_mindustry_gen_Payloadc_pickup_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_pickup_mindustry_gen_Unit, (frame[2].o)))(ctx, (frame[2].o), (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(594);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(595);
	((func_mindustry_gen_Unit_remove) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_remove])(ctx, (frame[1].o));
	}
label_3:;
	LINE_NUMBER(597);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:pickedBuildPayload", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(601);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Payloadc)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[0].o)));
	LINE_NUMBER(602);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(603);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_hidden;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canPickup_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_canPickup_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(604);
	((func_mindustry_gen_Payloadc_pickup_mindustry_gen_Building) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_pickup_mindustry_gen_Building, (frame[3].o)))(ctx, (frame[3].o), (frame[1].o));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(606);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_payloadPickup;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.9f)), (jfloat(1.1f)));
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(607);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitPickup;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(608);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, sp[0].o);
	goto label_7;
	}
label_3:;
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(612);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)((func_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_takePayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(614);
	if ((frame[5].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(615);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_payloadPickup;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.9f)), (jfloat(1.1f)));
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(616);
	((func_mindustry_gen_Payloadc_addPayload_mindustry_world_blocks_payloads_Payload) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_addPayload_mindustry_world_blocks_payloads_Payload, (frame[3].o)))(ctx, (frame[3].o), (frame[5].o));
	LINE_NUMBER(617);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitPickup;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	}
label_11:;
	LINE_NUMBER(620);
	goto label_7;
label_1:;
	{
	LINE_NUMBER(622);
	if ((frame[1].o) == nullptr) goto label_7;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_7;
	{
	LINE_NUMBER(623);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_payloadPickup;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_random_float_float_R_float(ctx, (jfloat(0.9f)), (jfloat(1.1f)));
	jint temp1 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(624);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitPickup;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(625);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, sp[0].o);
	}
label_7:;
	LINE_NUMBER(627);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_requestDropPayload_mindustry_gen_Player_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:requestDropPayload", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(631);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, sp[0].o));
	LINE_NUMBER(635);
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(637);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_dropPayload;
	sp[3].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	sp[3].o = (jobject)((func_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_gen_Unit_tileOn_R_mindustry_world_Tile])(ctx, sp[3].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_45);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[4].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(640);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot drop a payload."_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(644);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_limit_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(645);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[4].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	frame[5].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(647);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_payloadDropped_mindustry_gen_Unit_float_float(ctx, sp[0].o, (frame[4].f), (frame[5].f));
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_payloadDropped_mindustry_gen_Unit_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:payloadDropped", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(652);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_gen_Payloadc)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[0].o)));
	LINE_NUMBER(653);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].f = temp0;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[5].f = temp1;
	LINE_NUMBER(654);
	((func_mindustry_gen_Posc_set_float_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_set_float_float, (frame[3].o)))(ctx, (frame[3].o), (frame[1].f), (frame[2].f));
	LINE_NUMBER(655);
	jint temp2 = (jint)((func_mindustry_gen_Payloadc_dropLastPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_dropLastPayload_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	LINE_NUMBER(656);
	((func_mindustry_gen_Posc_set_float_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_set_float_float, (frame[3].o)))(ctx, (frame[3].o), (frame[4].f), (frame[5].f));
	}
label_1:;
	LINE_NUMBER(658);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_unitEnteredPayload_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:unitEnteredPayload", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(662);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(664);
	((func_mindustry_gen_Unit_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_remove])(ctx, (frame[0].o));
	LINE_NUMBER(667);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_4;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[3].o)));
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[2].o)))->F_command;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_enterPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(668);
	((func_mindustry_ai_types_CommandAI_clearCommands) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_clearCommands])(ctx, (frame[2].o));
	LINE_NUMBER(669);
	sp[0].o = frame[2].o;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_moveCommand;
	((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[0].o))->F_command = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(673);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(674);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	((func_mindustry_core_NetClient_clearRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_clearRemovedEntity_int])(ctx, sp[0].o, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_id));
	}
label_8:;
	{
	LINE_NUMBER(677);
	clinit_mindustry_world_blocks_payloads_UnitPayload(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_payloads_UnitPayload);
	init_mindustry_world_blocks_payloads_UnitPayload_mindustry_gen_Unit(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(679);
	jint temp0 = (jint)((func_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_acceptPayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload_R_boolean])(ctx, (frame[1].o), (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(680);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitDrop;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(681);
	((func_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_handlePayload_mindustry_gen_Building_mindustry_world_blocks_payloads_Payload])(ctx, (frame[1].o), (frame[1].o), (frame[2].o));
	}
label_11:;
	LINE_NUMBER(683);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_dropItem_mindustry_gen_Player_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:dropItem", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(687);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(689);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) > 0) goto label_3;
	}
	{
	LINE_NUMBER(690);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot drop an item."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(693);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(694);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_dropItem;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_y;
	jfloat temp2 = frame[1].f;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[2].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, (frame[2].o));
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	LINE_NUMBER(695);
	((func_mindustry_gen_Unit_clearItem) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_clearItem])(ctx, (frame[2].o));
	LINE_NUMBER(696);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_rotateBlock_mindustry_gen_Player_mindustry_gen_Building_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:rotateBlock", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(700);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(702);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_mindustry_entities_Units_canInteract_mindustry_gen_Player_mindustry_gen_Building_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_rotate;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_46);
		proxy->F_field1 = (frame[2].i);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[4].o = (jobject) proxy;
	}
	LINE_NUMBER(703);
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	if (temp0 != 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(704);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot rotate a block."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(707);
	if ((frame[0].o) == nullptr) goto label_5;
	}
	{
	((func_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player])(ctx, (frame[1].o), (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(708);
	frame[3].i = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_rotation);
	LINE_NUMBER(709);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_rotation;
	jint temp1 = (jint)SM_arc_math_Mathf_sign_boolean_R_int(ctx, (frame[2].i));
	jint temp2 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (temp0 + temp1), (jint(4)));
	((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	LINE_NUMBER(710);
	((func_mindustry_gen_Building_updateProximity) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_updateProximity])(ctx, (frame[1].o));
	LINE_NUMBER(711);
	((func_mindustry_gen_Building_noSleep) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_noSleep])(ctx, (frame[1].o));
	LINE_NUMBER(712);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_rotateBlock;
	jfloat temp3 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	((func_mindustry_entities_Effect_at_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float])(ctx, sp[0].o, temp3, temp4, (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))));
	LINE_NUMBER(713);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_11;
	}
	{
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_blockRotate;
	sp[1].o = frame[1].o;
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (jfloat(0.1f)));
	jint temp2 = (jint)((func_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_arc_math_geom_Position_float_float_R_int])(ctx, sp[0].o, sp[1].o, (temp0 + temp1), (jfloat(1)));
	}
label_11:;
	{
	LINE_NUMBER(714);
	clinit_mindustry_game_EventType$BuildRotateEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$BuildRotateEvent);
	sp[1].o = frame[1].o;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[0].o) != nullptr) goto label_12;
	}
	INST_ACONST_NULL();
	goto label_13;
label_12:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp++;
label_13:;
	{
	sp -= 4;
	init_mindustry_game_EventType$BuildRotateEvent_mindustry_gen_Building_mindustry_gen_Unit_int(ctx, sp[0].o, sp[2].o, sp[3].o, (frame[3].i));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(715);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tileConfig", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(719);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"building is null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(720);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(722);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_mindustry_entities_Units_canInteract_mindustry_gen_Player_mindustry_gen_Building_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_configure;
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_47);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[4].o = (jobject) proxy;
	}
	LINE_NUMBER(723);
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	if (temp0 != 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(725);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(726);
	clinit_mindustry_gen_TileConfigCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TileConfigCallPacket);
	init_mindustry_gen_TileConfigCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(727);
	((mindustry_gen_TileConfigCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[0].o);
	LINE_NUMBER(728);
	((mindustry_gen_TileConfigCallPacket *) NULL_CHECK((frame[3].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(729);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, (frame[1].o));
	((mindustry_gen_TileConfigCallPacket *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(730);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(733);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(734);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot configure a tile."_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	LINE_NUMBER(736);
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(739);
	if ((frame[0].o) == nullptr) goto label_14;
	}
	{
	((func_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_updateLastAccess_mindustry_gen_Player])(ctx, (frame[1].o), (frame[0].o));
	}
label_14:;
	{
	LINE_NUMBER(740);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[0].o) == nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_16;
	}
label_15:;
	INST_ACONST_NULL();
	goto label_17;
label_16:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp++;
label_17:;
	{
	sp -= 2;
	((func_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_configured_mindustry_gen_Unit_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(741);
	clinit_mindustry_game_EventType$ConfigEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$ConfigEvent);
	init_mindustry_game_EventType$ConfigEvent_mindustry_gen_Building_mindustry_gen_Player_java_lang_Object(ctx, sp[0].o, (frame[1].o), (frame[0].o), (frame[2].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_tileTap_mindustry_gen_Player_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tileTap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(748);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(750);
	clinit_mindustry_game_EventType$TapEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$TapEvent);
	init_mindustry_game_EventType$TapEvent_mindustry_gen_Player_mindustry_world_Tile(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(751);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_buildingControlSelect_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:buildingControlSelect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(755);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(758);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_possessionAllowed) != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	if (sp[0].o != (frame[1].o)) goto label_5;
	}
label_4:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_buildSelect;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_48);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 != 0) goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(759);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot control a building."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(762);
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(763);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(765);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	SM_mindustry_gen_Call_unitBuildingControlSelect_mindustry_gen_Unit_mindustry_gen_Building(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(767);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_dead) != 0) goto label_6;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_spawnedByCore) == 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(768);
	SM_mindustry_gen_Call_unitDespawn_mindustry_gen_Unit(ctx, (frame[2].o));
	}
label_6:;
	LINE_NUMBER(771);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_unitBuildingControlSelect_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:unitBuildingControlSelect", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(775);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(778);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(779);
	((func_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_onControlSelect_mindustry_gen_Unit])(ctx, (frame[1].o), (frame[0].o));
	}
label_3:;
	LINE_NUMBER(781);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_unitControl_mindustry_gen_Player_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:unitControl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(785);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(788);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_possessionAllowed) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_control;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_49);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 != 0) goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(789);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot control a unit."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(793);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(794);
	((func_mindustry_gen_Player_clearUnit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_clearUnit])(ctx, (frame[0].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(796);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isAI_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_dead) != 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_playerControllable_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_playerControllable_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(797);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(798);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_justSwitchFrom = (jref) sp[1].o;
	LINE_NUMBER(799);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_justSwitchTo = (jref) (frame[1].o);
	}
label_9:;
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(805);
	((func_mindustry_gen_Player_unit_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(807);
	if ((frame[2].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(808);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_spawnedByCore) == 0) goto label_16;
	}
	{
	LINE_NUMBER(809);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dockedType = (jref) sp[1].o;
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(810);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_dockedType;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_dockedType;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_coreUnitDock) == 0) goto label_18;
	}
	{
	LINE_NUMBER(812);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_dockedType;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dockedType = (jref) sp[1].o;
	}
label_18:;
	{
	LINE_NUMBER(815);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_spawnedByCore) == 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(816);
	SM_mindustry_gen_Call_unitDespawn_mindustry_gen_Unit(ctx, (frame[2].o));
	}
label_14:;
	{
	LINE_NUMBER(820);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitSpirit;
	jfloat temp0 = (jfloat)((mindustry_entities_Effect *) NULL_CHECK(sp[0].o))->F_lifetime;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_java_lang_Runnable_12);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_util_Time_run_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(821);
	jint temp1 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp1 != 0) goto label_22;
	}
	{
	LINE_NUMBER(822);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitSpirit;
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)), (frame[1].o));
	}
label_22:;
	LINE_NUMBER(824);
	goto label_6;
label_7:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(826);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player attempted to control invalid unit."_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(829);
	clinit_mindustry_game_EventType$UnitControlEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$UnitControlEvent);
	init_mindustry_game_EventType$UnitControlEvent_mindustry_gen_Player_mindustry_gen_Unit(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(830);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_unitClear_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:unitClear", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(834);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(837);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netServer;
	sp[0].o = (jobject)((mindustry_core_NetServer *) NULL_CHECK(sp[0].o))->F_admins;
	sp[1].o = frame[0].o;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[2].o = (jobject)SF_mindustry_net_Administration$ActionType_respawn;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_50);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(838);
	clinit_mindustry_net_ValidateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_ValidateException);
	init_mindustry_net_ValidateException_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"Player cannot respawn."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(841);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore) != 0) goto label_4;
	}
	{
	LINE_NUMBER(842);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_dockedType;
	frame[1].o = sp[0].o;
	LINE_NUMBER(845);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(846);
	sp[0].o = (jobject)((func_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_bestCore_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(847);
	if ((frame[2].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_blocks_storage_CoreBlock *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o))))->F_unitType;
	frame[1].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(853);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_coreUnitDock) == 0) goto label_4;
	}
	{
	LINE_NUMBER(855);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(857);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(858);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_UnitType_create_mindustry_game_Team_R_mindustry_gen_Unit])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(859);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	((func_mindustry_gen_Unit_set_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_set_arc_math_geom_Position])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(861);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_flying) == 0) goto label_17;
	}
	{
	LINE_NUMBER(862);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	jfloat temp0 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_rotation) + (jfloat(180.0f));
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_hitSize) / (jfloat(2))) + (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize) / (jfloat(2)))));
	LINE_NUMBER(863);
	sp[0].o = frame[2].o;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_x = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(864);
	sp[0].o = frame[2].o;
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_y = (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_17:;
	{
	LINE_NUMBER(866);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	((func_mindustry_gen_Unit_rotation_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_rotation_float])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_rotation));
	LINE_NUMBER(869);
	((func_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(870);
	((func_mindustry_gen_Unit_spawnedByCore_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_spawnedByCore_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(871);
	((func_mindustry_gen_Unit_add) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_add])(ctx, (frame[2].o));
	}
label_13:;
	LINE_NUMBER(875);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(882);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_spawn;
	((func_mindustry_entities_Effect_at_arc_math_geom_Position) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_arc_math_geom_Position])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(883);
	((func_mindustry_gen_Player_clearUnit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_clearUnit])(ctx, (frame[0].o));
	LINE_NUMBER(884);
	((func_mindustry_gen_Player_checkSpawn) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_checkSpawn])(ctx, (frame[0].o));
	LINE_NUMBER(885);
	((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_deathTimer = (jfloat(61.0f));
	LINE_NUMBER(886);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_createPlanLists(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:createPlanLists", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(889);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_InputHandler$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_input_InputHandler$1);
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_playerPlanTree;
	sp[4].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (jint(1)));
	jint temp0 = jint(0);
	sp[5].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	ARRAY_ACCESS(jobject, sp[4].o, temp0) = sp[5].o;
	init_mindustry_input_InputHandler$1_mindustry_input_InputHandler_arc_math_geom_QuadTree_Array1_arc_struct_Seq(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_allPlans = (jref) sp[1].o;
	LINE_NUMBER(898);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_InputHandler$QueryEachable(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_input_InputHandler$QueryEachable);
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (jint(2)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	jint temp2 = jint(1);
	sp[4].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	ARRAY_ACCESS(jobject, sp[3].o, temp2) = sp[4].o;
	init_mindustry_input_InputHandler$QueryEachable_arc_math_geom_QuadTree_Array1_arc_struct_Seq(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_allSelectLines = (jref) sp[1].o;
	LINE_NUMBER(899);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_InputHandler$QueryEachable(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_input_InputHandler$QueryEachable);
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_playerPlanTree;
	sp[3].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (jint(1)));
	jint temp3 = jint(0);
	sp[4].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	ARRAY_ACCESS(jobject, sp[3].o, temp3) = sp[4].o;
	init_mindustry_input_InputHandler$QueryEachable_arc_math_geom_QuadTree_Array1_arc_struct_Seq(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_allRenderPlansConfig = (jref) sp[1].o;
	LINE_NUMBER(900);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_updateSelectQuadtree(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:updateSelectQuadtree", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(903);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlanTree;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	((func_arc_math_geom_QuadTree_fill_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_fill_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(904);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_addLock_arc_func_Boolp(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:addLock", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(908);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_inputLocks;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(909);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_locked_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:locked", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(913);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_inputLocks;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_19(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_19 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_19);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:allPlans", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(917);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allPlans;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_isUsingSchematic_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:isUsingSchematic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(921);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
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

void M_mindustry_input_InputHandler_spectate_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:spectate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(925);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating = (jref) (frame[1].o);
	LINE_NUMBER(926);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(927);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(930);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_logicCutscene = (jint(0));
	LINE_NUMBER(931);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_logicHideHud = (jint(0));
	LINE_NUMBER(932);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(933);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(934);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_itemDepositCooldown = (jfloat(0));
	LINE_NUMBER(935);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlGroups;
	SM_java_util_Arrays_fill_Array1_java_lang_Object_java_lang_Object(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(936);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastUnit = (jref) (jobject(nullptr));
	LINE_NUMBER(937);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastPlans;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(938);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = (jint(0));
	LINE_NUMBER(939);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_pingTime = (jfloat(0));
	LINE_NUMBER(940);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:getSyncedPlans", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(943);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastPlans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(944);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_breaking) != 0) goto label_4;
	}
	{
	LINE_NUMBER(945);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[3].o));
	}
label_4:;
	LINE_NUMBER(947);
	goto label_1;
label_2:;
	LINE_NUMBER(948);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:update", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(951);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isValid_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isValid_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(952);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_spectating = (jref) (jobject(nullptr));
	}
label_1:;
	{
	LINE_NUMBER(955);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_logicCutscene) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp0 = (jint)((func_mindustry_core_Renderer_isCutscene_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isCutscene_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(956);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_logicCamPan;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_lerpDelta_arc_math_geom_Position_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_logicCamSpeed));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(958);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_logicCutsceneZoom = (jfloat(-1.0f));
	}
label_5:;
	{
	LINE_NUMBER(961);
	sp[0].o = frame[0].o;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_itemDepositCooldown = (((jfloat)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_itemDepositCooldown) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(60.0f))));
	LINE_NUMBER(963);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_20(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_20 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_20);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(965);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_8;
	}
	{
	LINE_NUMBER(966);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect = (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(969);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(970);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	frame[1].o = sp[0].o;
	LINE_NUMBER(971);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastUnit;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	{
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[1].o)))->F_size) > (jint(1))) goto label_13;
	}
	{
	LINE_NUMBER(972);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastPlans;
	((func_arc_struct_Queue_ensureCapacity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_ensureCapacity_int])(ctx, sp[0].o, ((jint)((arc_struct_Queue *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(973);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastPlans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(974);
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(975);
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastPlans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) != ((jint)((arc_struct_Queue *) NULL_CHECK((frame[1].o)))->F_size)) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastPlans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_10;
	}
	{
	if (((jint)((arc_struct_Queue *) NULL_CHECK((frame[1].o)))->F_size) <= 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastPlans;
	sp[0].o = (jobject)((func_arc_struct_Queue_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[1].o = (jobject)((func_arc_struct_Queue_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Queue_first_R_java_lang_Object])(ctx, (frame[1].o));
	if (sp[0].o == sp[1].o) goto label_10;
	}
label_19:;
	{
	LINE_NUMBER(978);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastPlans;
	((func_arc_struct_Queue_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_clear])(ctx, sp[0].o);
	LINE_NUMBER(979);
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(980);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastPlans;
	((func_arc_struct_Queue_addLast_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_addLast_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(981);
	goto label_21;
	}
label_10:;
	{
	LINE_NUMBER(985);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_lastUnit = (jref) sp[1].o;
	LINE_NUMBER(987);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_playerPlanTree;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(988);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_26;
	}
	{
	LINE_NUMBER(989);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_playerPlanTree;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_51);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Queue_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(992);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[1].o))->F_chatfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[1].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_typing = temp0;
	LINE_NUMBER(994);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp1 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_29;
	}
	{
	LINE_NUMBER(995);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem = (jint(0));
	}
label_29:;
	{
	LINE_NUMBER(998);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(999);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((func_mindustry_gen_Unit_updateBuilding_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_updateBuilding_boolean])(ctx, sp[0].o, ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_isBuilding));
	}
label_31:;
	{
	LINE_NUMBER(1003);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_locked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_locked_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(1004);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block = (jref) (jobject(nullptr));
	}
label_33:;
	{
	LINE_NUMBER(1007);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_selectedBlock = (jref) sp[1].o;
	LINE_NUMBER(1008);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_selectedRotation = ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(1010);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_wasShooting = ((jint)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_shooting);
	LINE_NUMBER(1014);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_38;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_recentRespawnTimer) - ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) / (jfloat(70.0f)));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_recentRespawnTimer = temp0;
	if ((floatCompare(temp0, (jfloat(0)), 1)) > 0) goto label_38;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_justSwitchFrom;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_38;
	}
	{
	LINE_NUMBER(1015);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_type;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_controlledType = (jref) sp[1].o;
	}
label_38:;
	{
	LINE_NUMBER(1018);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlledType;
	if (sp[0].o == nullptr) goto label_40;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlledType;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_playerControllable) == 0) goto label_40;
	}
	{
	LINE_NUMBER(1019);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp1 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_21(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_21 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_21);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1021);
	if ((frame[1].o) == nullptr) goto label_40;
	}
	{
	LINE_NUMBER(1023);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_44;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlInterval;
	jint temp0 = (jint)((func_arc_util_Interval_get_int_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_int_float_R_boolean])(ctx, sp[0].o, (jint(0)), (jfloat(70.0f)));
	if (temp0 == 0) goto label_40;
	}
label_44:;
	{
	LINE_NUMBER(1024);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_recentRespawnTimer = (jfloat(1));
	LINE_NUMBER(1025);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_unitControl_mindustry_gen_Player_mindustry_gen_Unit(ctx, sp[0].o, (frame[1].o));
	}
label_40:;
	LINE_NUMBER(1029);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_checkUnit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:checkUnit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1032);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlledType;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlledType;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_playerControllable) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1033);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp1 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_y;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_22(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_22 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1034);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlledType;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_block;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(1035);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_y));
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_ControlBlock)) == 0) goto label_6;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_ControlBlock, (frame[3].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_ControlBlock_canControl_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_canControl_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit, (frame[2].o)))(ctx, (frame[2].o));
	sp += 1;
	goto label_8;
	}
label_6:;
	INST_ACONST_NULL();
label_8:;
	INST_ASTORE(1);
label_4:;
	{
	LINE_NUMBER(1038);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1039);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(1040);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_unitControl_mindustry_gen_Player_mindustry_gen_Unit(ctx, sp[0].o, (frame[1].o));
	goto label_1;
	}
label_10:;
	{
	LINE_NUMBER(1042);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	((func_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_controller_mindustry_entities_units_UnitController])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(1046);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_tryPickupPayload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tryPickupPayload", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1049);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1050);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	goto label_4;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(1052);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jfloat temp2 = ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_hitSize) * (jfloat(2));
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_23(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_23 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_23);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1053);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1054);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_requestUnitPayload_mindustry_gen_Player_mindustry_gen_Unit(ctx, sp[0].o, (frame[3].o));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(1056);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, temp1);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1057);
	if ((frame[4].o) != nullptr) goto label_10;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_10:;
	{
	LINE_NUMBER(1058);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_getPayload_R_mindustry_world_blocks_payloads_Payload])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1060);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[2].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_canInteract_mindustry_game_Team_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_8;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_12;
	{
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	LINE_NUMBER(1061);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickupPayload_mindustry_world_blocks_payloads_Payload_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_14;
	}
label_12:;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_hidden;
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_canPickup_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_canPickup_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Building_R_boolean, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
label_14:;
	{
	LINE_NUMBER(1062);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_requestBuildPayload_mindustry_gen_Player_mindustry_gen_Building(ctx, sp[0].o, (frame[4].o));
	}
label_8:;
	LINE_NUMBER(1065);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_tryDropPayload(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tryDropPayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1068);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1069);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canDropPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canDropPayload_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 != 0) goto label_4;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(1071);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_x;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_requestDropPayload_mindustry_gen_Player_float_float(ctx, sp[0].o, temp0, ((jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(1072);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_input_InputHandler_getMouseX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:getMouseX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1075);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_input_InputHandler_getMouseY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:getMouseY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1079);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:buildPlacementUI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1084);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_buildUI_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:buildUI", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1088);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_updateState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:updateState", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1091);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isMenu_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isMenu_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1092);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlledType = (jref) (jobject(nullptr));
	LINE_NUMBER(1093);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_logicCutscene = (jint(0));
	LINE_NUMBER(1094);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	((func_mindustry_ui_fragments_BlockConfigFragment_forceHide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_forceHide])(ctx, sp[0].o);
	LINE_NUMBER(1095);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[1].o))->F_commandRect = temp0;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandMode = temp0;
	}
label_1:;
	LINE_NUMBER(1097);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_multiUnitSelect_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:multiUnitSelect", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1101);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_selectUnitsRect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:selectUnitsRect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1105);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1106);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_tappedOne) != 0) goto label_3;
	}
	{
	LINE_NUMBER(1107);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectX;
	jfloat temp1 = (jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectY;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp2 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	jfloat temp3 = temp2 - ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectX);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp4 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp3, (temp4 - ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectY)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1108);
	jint temp5 = (jint)((func_mindustry_input_InputHandler_multiUnitSelect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_multiUnitSelect_R_boolean])(ctx, (frame[0].o));
	if (temp5 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1110);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	jint temp0 = (jint)((func_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_R_boolean])(ctx, sp[0].o, (frame[1].o));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(1113);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_8:;
	{
	LINE_NUMBER(1115);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1117);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1118);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(1119);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectX;
	jfloat temp1 = (jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectY;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	jfloat temp2 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[2].o);
	jfloat temp3 = temp2 - ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectX);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	jfloat temp4 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq])(ctx, sp[1].o, temp0, temp1, temp3, (temp4 - ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectY)));
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(1121);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandChange;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(1123);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect = (jint(0));
	}
label_1:;
	LINE_NUMBER(1125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_selectTypedUnits(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:selectTypedUnits", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1128);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1129);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit])(ctx, sp[0].o, temp0, temp1);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1130);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1131);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1132);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[1].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_width;
	clinit_arc_util_Tmp(ctx);
	sp[2].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp3 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[2].o))->F_height;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_24(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_24 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_24);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1134);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandChange;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(1137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_tapCommandUnit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tapCommandUnit", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1140);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1142);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit])(ctx, sp[0].o, temp0, temp1);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp2 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp3 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp2, temp3);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1144);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1145);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(1146);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(1148);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
label_9:;
	{
	LINE_NUMBER(1150);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	goto label_10;
	}
label_5:;
	{
	LINE_NUMBER(1153);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1155);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_12;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_isCommandable_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(1156);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(1157);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	goto label_10;
	}
label_14:;
	{
	LINE_NUMBER(1159);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	}
label_10:;
	{
	LINE_NUMBER(1166);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_unitCommandChange;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(1168);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_commandTap_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:commandTap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(1171);
	((func_mindustry_input_InputHandler_commandTap_float_float_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_commandTap_float_float_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (jint(0)));
	LINE_NUMBER(1172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_commandTap_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:commandTap", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1175);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1179);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_cpy_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1181);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(1183);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1185);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Teamc_team_R_mindustry_game_Team) resolveInterfaceMethod(ctx, &class_mindustry_gen_Teamc, INDEX_mindustry_gen_Teamc_team_R_mindustry_game_Team, (frame[5].o)))(ctx, (frame[5].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(1186);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y));
	frame[5].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(1189);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject) createArray(ctx, &class_int, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1190);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(1191);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[7].i));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = ((jint)((mindustry_gen_Unit *) NULL_CHECK((checkCast(ctx, &class_mindustry_gen_Unit, sp[1].o))))->F_id);
	LINE_NUMBER(1190);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1194);
	frame[7].i = (200);
	LINE_NUMBER(1196);
	if ((((jarray) nullCheck(ctx, (frame[6].o)))->length) <= (frame[7].i)) goto label_15;
	}
	{
	LINE_NUMBER(1197);
	frame[8].i = (jint(0));
	}
label_17:;
	{
	if ((frame[8].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_18;
	}
	{
	LINE_NUMBER(1198);
	sp[0].o = frame[6].o;
	jint temp0 = frame[8].i;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, ((frame[8].i) + (frame[7].i)), (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	sp[0].o = (jobject)SM_java_util_Arrays_copyOfRange_Array1_int_int_int_R_Array1_int(ctx, sp[0].o, temp0, temp1);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1199);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = frame[9].o;
	sp += 2;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Building)) == 0) goto label_21;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[5].o)));
	sp[0].o = frame[10].o;
	sp += 1;
	goto label_23;
	}
label_21:;
	INST_ACONST_NULL();
label_23:;
	{
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Unit)) == 0) goto label_24;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[5].o)));
	sp[0].o = frame[10].o;
	sp += 1;
	goto label_26;
	}
label_24:;
	INST_ACONST_NULL();
label_26:;
	{
	sp[0].o = frame[4].o;
	jint temp0 = frame[3].i;
	sp[1].i = temp0;
	sp += 2;
	if (((frame[8].i) + (frame[7].i)) < (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 7;
	SM_mindustry_gen_Call_commandUnits_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].i, sp[6].i);
	LINE_NUMBER(1197);
	frame[8].i = ((frame[8].i) + (frame[7].i));
	goto label_17;
	}
label_18:;
	goto label_4;
label_15:;
	{
	LINE_NUMBER(1202);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = frame[6].o;
	sp += 2;
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Building)) == 0) goto label_30;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[5].o)));
	sp[0].o = frame[8].o;
	sp += 1;
	goto label_32;
	}
label_30:;
	INST_ACONST_NULL();
label_32:;
	{
	if ((isInstance(ctx, (frame[5].o), &class_mindustry_gen_Unit)) == 0) goto label_33;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_gen_Unit, (frame[5].o)));
	sp[0].o = frame[8].o;
	sp += 1;
	goto label_35;
	}
label_33:;
	INST_ACONST_NULL();
label_35:;
	{
	sp -= 4;
	SM_mindustry_gen_Call_commandUnits_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[4].o), (frame[3].i), (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(1206);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(1207);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Intf_1);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_mapInt_arc_func_Intf_R_arc_struct_IntSeq])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_struct_IntSeq_toArray_R_Array1_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_toArray_R_Array1_int])(ctx, sp[1].o);
	SM_mindustry_gen_Call_commandBuilding_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2(ctx, sp[0].o, sp[1].o, (frame[4].o));
	}
label_1:;
	LINE_NUMBER(1210);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawCommand", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1213);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = 6;
	jfloat temp3 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize) / (jfloat(1));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(4.0f)), (jfloat(1)));
	jfloat temp5 = temp3 + temp4;
	jfloat temp6 = jfloat(0);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	jint temp7 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp[2].i = temp2;
	sp[3].f = temp5;
	sp[4].f = temp6;
	sp += 5;
	if (temp7 == 0) goto label_1;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
	goto label_2;
label_1:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_2:;
	{
	sp -= 6;
	SM_mindustry_graphics_Drawf_poly_float_float_int_float_float_arc_graphics_Color(ctx, sp[0].f, sp[1].f, sp[2].i, sp[3].f, sp[4].f, sp[5].o);
	LINE_NUMBER(1214);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawCommand", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1217);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = jint(4);
	jfloat temp3 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[1].o));
	jfloat temp4 = (temp3 / (jfloat(1.4f))) + (jfloat(0.5f));
	jfloat temp5 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(4.0f)), (jfloat(1)));
	jfloat temp6 = temp4 + temp5;
	jfloat temp7 = jfloat(0);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	jint temp8 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp[2].i = temp2;
	sp[3].f = temp6;
	sp[4].f = temp7;
	sp += 5;
	if (temp8 == 0) goto label_1;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
	goto label_2;
label_1:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_2:;
	{
	sp -= 6;
	SM_mindustry_graphics_Drawf_poly_float_float_int_float_float_arc_graphics_Color(ctx, sp[0].f, sp[1].f, sp[2].i, sp[3].f, sp[4].f, sp[5].o);
	LINE_NUMBER(1218);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawCommanded(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawCommanded", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1221);
	jfloat temp0 = jfloat(85.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_java_lang_Runnable_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(1225);
	jfloat temp1 = jfloat(59.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_java_lang_Runnable_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp1, sp[0].o);
	LINE_NUMBER(1229);
	jfloat temp2 = jfloat(120.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_java_lang_Runnable_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp2, sp[0].o);
	LINE_NUMBER(1232);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawCommandedTargets(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawCommandedTargets", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1235);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1236);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
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
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(1237);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_5;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[4].o)));
	LINE_NUMBER(1238);
	sp[0].o = (jobject)((func_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1240);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[4].o)))->F_drawTarget) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1241);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_attackTarget;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Posc_getX_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getX_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[3].o)))->F_attackTarget;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_getY_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_getY_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = jfloat(6.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_remove;
	SM_mindustry_graphics_Drawf_target_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	}
label_5:;
	LINE_NUMBER(1244);
	goto label_3;
label_1:;
	LINE_NUMBER(1246);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawCommanded_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[24];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawCommanded", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1249);
	frame[2].f = (jfloat(6.5f));
	LINE_NUMBER(1250);
	frame[3].i = (6);
	LINE_NUMBER(1251);
	frame[4].f = (jfloat(0.5f));
	LINE_NUMBER(1253);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1255);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_25(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_25 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_25);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1257);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(1259);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[6].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ai_types_LogicAI)) == 0) goto label_10;
	}
	{
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_malis;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	goto label_11;
	}
label_10:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_11:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(1261);
	frame[8].o = (jobject(nullptr));
	LINE_NUMBER(1263);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[6].o));
	frame[10].o = sp[0].o;
	if ((isInstance(ctx, (frame[10].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_14;
	}
	{
	frame[9].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[10].o)));
	LINE_NUMBER(1264);
	sp[0].o = (jobject)((func_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1265);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[9].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[9].o)))->F_attackTarget;
	sp += 1;
	goto label_18;
	}
label_17:;
	INST_ALOAD(9);
	sp[-1].o = (jobject) ((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[-1].o))->F_targetPos;
label_18:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1267);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_allowLegStep) == 0) goto label_21;
	}
label_20:;
	INST_ICONST(1);
	goto label_22;
label_21:;
	INST_ICONST(0);
label_22:;
	INST_ILOAD(1);
	sp -= 2; if (sp[0].i == sp[1].i) goto label_23;
	goto label_7;
label_23:;
	{
	LINE_NUMBER(1270);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[9].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[10].o)))->F_drawTarget) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1271);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[9].o)))->F_attackTarget;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[9].o)))->F_attackTarget;
	sp += 1;
	goto label_26;
	}
label_25:;
	INST_ALOAD(9);
	sp[-1].o = (jobject) ((mindustry_ai_types_CommandAI *) NULL_CHECK(sp[-1].o))->F_targetPos;
label_26:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	LINE_NUMBER(1272);
	sp[0].o = frame[6].o;
	sp[1].o = frame[11].o;
	jfloat temp0 = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_hitSize) / (jfloat(1))) + (jfloat(1));
	jfloat temp1 = frame[2].f;
	sp[2].o = frame[7].o;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, (frame[4].f));
	SM_mindustry_graphics_Drawf_limitLine_arc_math_geom_Position_arc_math_geom_Position_float_float_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	LINE_NUMBER(1274);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[9].o)))->F_attackTarget;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(1275);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[11].o)))(ctx, (frame[11].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[11].o)))(ctx, (frame[11].o));
	jfloat temp2 = jfloat(3.5f);
	sp[0].o = frame[7].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[4].f));
	SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	LINE_NUMBER(1277);
	sp[0].o = frame[10].o;
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_enterPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	LINE_NUMBER(1278);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[11].o)))(ctx, (frame[11].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[11].o)))(ctx, (frame[11].o));
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, temp1);
	frame[12].o = sp[0].o;
	LINE_NUMBER(1279);
	if ((frame[12].o) == nullptr) goto label_33;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_acceptsUnitPayloads) == 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[12].o)))->F_team;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_team;
	if (sp[0].o != sp[1].o) goto label_33;
	}
	{
	LINE_NUMBER(1280);
	SM_mindustry_graphics_Drawf_selected_mindustry_gen_Building_arc_graphics_Color(ctx, (frame[12].o), (frame[7].o));
	goto label_14;
	}
label_33:;
	{
	LINE_NUMBER(1282);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[11].o)))(ctx, (frame[11].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[11].o)))(ctx, (frame[11].o));
	jfloat temp2 = jfloat(7.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_remove;
	SM_mindustry_graphics_Drawf_cross_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	}
label_14:;
	{
	LINE_NUMBER(1289);
	frame[9].f = ((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_hitSize) / (jfloat(1))) + (jfloat(1)));
	LINE_NUMBER(1291);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_y;
	jint temp2 = frame[3].i;
	jfloat temp3 = jfloat(0);
	jfloat temp4 = (frame[9].f) * (jfloat(0.8f));
	LINE_NUMBER(1292);
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp3, temp4);
	jfloat temp6 = frame[9].f;
	jfloat temp7 = jfloat(0);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c3;
	sp[1].o = frame[7].o;
	LINE_NUMBER(1295);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0)));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c2;
	sp[2].o = frame[7].o;
	LINE_NUMBER(1296);
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(0.7f)));
	LINE_NUMBER(1291);
	SM_arc_graphics_g2d_Fill_lightInner_float_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color(ctx, temp0, temp1, temp2, temp5, temp6, temp7, sp[0].o, sp[1].o);
	LINE_NUMBER(1299);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(1300);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[7].o));
	LINE_NUMBER(1301);
	SM_arc_graphics_g2d_Lines_poly_float_float_int_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_y), (frame[3].i), ((frame[9].f) + (jfloat(0.5f))));
	LINE_NUMBER(1305);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1307);
	if ((frame[8].o) != nullptr) goto label_45;
	}
	{
	LINE_NUMBER(1308);
	frame[8].o = (frame[6].o);
	}
label_45:;
	{
	LINE_NUMBER(1311);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (frame[6].o));
	frame[11].o = sp[0].o;
	if ((isInstance(ctx, (frame[11].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_47;
	}
	{
	frame[10].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[11].o)));
	LINE_NUMBER(1313);
	sp[0].o = (jobject)((func_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand])(ctx, (frame[10].o));
	if (((jint)((mindustry_ai_UnitCommand *) NULL_CHECK(sp[0].o))->F_drawTarget) == 0) goto label_49;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[10].o)))->F_commandQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_49;
	}
	{
	LINE_NUMBER(1314);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[10].o)))->F_commandQueue;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	}
label_51:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 == 0) goto label_49;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[11].o)))(ctx, (frame[11].o));
	frame[12].o = (checkCast(ctx, &class_arc_math_geom_Position, sp[0].o));
	LINE_NUMBER(1315);
	sp[0].o = frame[8].o;
	sp[1].o = frame[12].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[2].f;
	sp[2].o = frame[7].o;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, (frame[4].f));
	SM_mindustry_graphics_Drawf_limitLine_arc_math_geom_Position_arc_math_geom_Position_float_float_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	LINE_NUMBER(1316);
	frame[8].o = (frame[12].o);
	LINE_NUMBER(1318);
	if ((isInstance(ctx, (frame[12].o), &class_arc_math_geom_Vec2)) == 0) goto label_55;
	}
	{
	frame[13].o = (checkCast(ctx, &class_arc_math_geom_Vec2, (frame[12].o)));
	LINE_NUMBER(1319);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[13].o)))->F_y;
	jfloat temp2 = jfloat(3.5f);
	sp[0].o = frame[7].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[4].f));
	SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	goto label_57;
	}
label_55:;
	{
	LINE_NUMBER(1321);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[12].o)))(ctx, (frame[12].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[12].o)))(ctx, (frame[12].o));
	jfloat temp2 = jfloat(6.0f);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_remove;
	SM_mindustry_graphics_Drawf_target_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, sp[0].o);
	}
label_57:;
	LINE_NUMBER(1323);
	goto label_51;
label_49:;
	{
	LINE_NUMBER(1326);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[10].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_47;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_ai_types_CommandAI_currentCommand_R_mindustry_ai_UnitCommand])(ctx, (frame[10].o));
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[1].o = (jobject)SF_mindustry_ai_UnitCommand_loopPayloadCommand;
	if (sp[0].o != sp[1].o) goto label_47;
	}
	{
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_gen_Payloadc)) == 0) goto label_47;
	}
	{
	frame[11].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[6].o)));
	LINE_NUMBER(1327);
	sp[0].o = frame[7].o;
	jfloat temp0 = jfloat(0.4f);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_R_float(ctx, (jfloat(5.0f)), (jfloat(0.5f)));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(1328);
	jint temp2 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp2 == 0) goto label_60;
	}
	{
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp += 1;
	goto label_61;
	}
label_60:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upload;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp++;
label_61:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1329);
	frame[13].f = (jfloat(11.0f));
	LINE_NUMBER(1330);
	frame[14].f = (jfloat(8.0f));
	LINE_NUMBER(1331);
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[10].o)))->F_targetPos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[10].o)))->F_targetPos;
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) + (frame[13].f);
	jfloat temp2 = frame[14].f;
	jfloat temp3 = frame[14].f;
	jfloat temp4 = (jfloat)((func_arc_graphics_g2d_TextureRegion_ratio_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_ratio_R_float])(ctx, (frame[12].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp2, (temp3 / temp4));
	LINE_NUMBER(1333);
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[10].o)))->F_commandQueue;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_66;
	}
	{
	LINE_NUMBER(1334);
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_hasPayload_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_hasPayload_R_boolean, (frame[11].o)))(ctx, (frame[11].o));
	if (temp0 != 0) goto label_68;
	}
	{
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp += 1;
	goto label_69;
	}
label_68:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upload;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o);
	sp++;
label_69:;
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1335);
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[10].o)))->F_commandQueue;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (checkCast(ctx, &class_arc_math_geom_Position, sp[1].o))))(ctx, (checkCast(ctx, &class_arc_math_geom_Position, sp[1].o)));
	sp[1].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[10].o)))->F_commandQueue;
	sp[1].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (checkCast(ctx, &class_arc_math_geom_Position, sp[1].o))))(ctx, (checkCast(ctx, &class_arc_math_geom_Position, sp[1].o)));
	jfloat temp2 = temp1 + (frame[13].f);
	jfloat temp3 = frame[14].f;
	jfloat temp4 = frame[14].f;
	jfloat temp5 = (jfloat)((func_arc_graphics_g2d_TextureRegion_ratio_R_float) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_ratio_R_float])(ctx, (frame[12].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp0, temp2, temp3, (temp4 / temp5));
	}
label_66:;
	LINE_NUMBER(1337);
	SM_arc_graphics_g2d_Draw_color(ctx);
label_47:;
	LINE_NUMBER(1340);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(1342);
	if ((frame[1].i) == 0) goto label_4;
	}
	{
	LINE_NUMBER(1343);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	frame[5].o = sp[0].o;
	LINE_NUMBER(1344);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_73:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1345);
	if ((frame[7].o) == nullptr) goto label_75;
	}
	{
	LINE_NUMBER(1346);
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[7].o)))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[7].o));
	SM_mindustry_graphics_Drawf_square_float_float_float(ctx, temp0, temp1, ((temp2 / (jfloat(1.4f))) + (jfloat(1))));
	LINE_NUMBER(1347);
	sp[0].o = (jobject)((func_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_getCommandPosition_R_arc_math_geom_Vec2])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1349);
	if ((frame[8].o) == nullptr) goto label_75;
	}
	{
	LINE_NUMBER(1350);
	sp[0].o = frame[7].o;
	sp[1].o = frame[8].o;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Building_hitSize_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_gen_Building_hitSize_R_float])(ctx, (frame[7].o));
	jfloat temp1 = temp0 / (jfloat(2));
	jfloat temp2 = frame[2].f;
	sp[2].o = frame[5].o;
	clinit_arc_util_Tmp(ctx);
	sp[3].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[2].o, (frame[4].f));
	SM_mindustry_graphics_Drawf_limitLine_arc_math_geom_Position_arc_math_geom_Position_float_float_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp1, temp2, sp[2].o);
	LINE_NUMBER(1351);
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y;
	jfloat temp5 = jfloat(3.5f);
	sp[0].o = frame[5].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_write_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[4].f));
	SM_mindustry_graphics_Drawf_square_float_float_float_arc_graphics_Color(ctx, temp3, temp4, temp5, sp[0].o);
	}
label_75:;
	LINE_NUMBER(1354);
	goto label_73;
label_4:;
	{
	LINE_NUMBER(1358);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawUnitSelection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawUnitSelection", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1363);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1364);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[0].o);
	frame[1].f = temp0;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[0].o);
	frame[2].f = temp1;
	LINE_NUMBER(1365);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq])(ctx, (frame[0].o), ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectX), ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectY), ((frame[1].f) - ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectX)), ((frame[2].f) - ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectY)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1366);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(1367);
	((func_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(1368);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1369);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(1370);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq])(ctx, (frame[0].o), ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectX), ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectY), ((frame[1].f) - ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectX)), ((frame[2].f) - ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectY)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1371);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(1372);
	((func_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(1373);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(1376);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, sp[0].o, (jfloat(0.3f)));
	LINE_NUMBER(1377);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectX), ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectY), ((frame[1].f) - ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectX)), ((frame[2].f) - ((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRectY)));
	}
label_1:;
	{
	LINE_NUMBER(1380);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_17;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandRect) != 0) goto label_17;
	}
	{
	LINE_NUMBER(1381);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit])(ctx, sp[0].o, temp0, temp1);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1383);
	if ((frame[1].o) == nullptr) goto label_17;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_multiUnitSelect_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_multiUnitSelect_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != (jint(1))) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectedUnits;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_17;
	}
label_20:;
	{
	LINE_NUMBER(1384);
	((func_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit])(ctx, (frame[0].o), (frame[1].o));
	}
label_17:;
	LINE_NUMBER(1387);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawOtherBuildPlans(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawOtherBuildPlans", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1395);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v3;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1396);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan = (jref) (jobject(nullptr));
	LINE_NUMBER(1397);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlayer = (jref) (jobject(nullptr));
	LINE_NUMBER(1399);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_52);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1440);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1441);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlayer;
	jfloat temp2 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlayer;
	jfloat temp3 = (jfloat)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block;
	jfloat temp4 = ((jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) * (8)))) * (jfloat(0.6f))) + (jfloat(4.0f));
	jfloat temp5 = jfloat(2);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlayer;
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_color;
	SM_mindustry_graphics_Drawf_arrow_float_float_float_float_float_float_arc_graphics_Color(ctx, temp0, temp1, temp2, temp3, temp4, temp5, sp[0].o);
	LINE_NUMBER(1442);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	jint temp6 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	jint temp7 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlayer;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_color;
	SM_mindustry_graphics_Drawf_selected_int_int_mindustry_world_Block_arc_graphics_Color(ctx, temp6, temp7, sp[0].o, sp[1].o);
	LINE_NUMBER(1443);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_block;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlayer;
	sp[1].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[1].o))->F_name;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	jint temp8 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	jint temp9 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlayer;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[2].o))->F_color;
	jfloat temp10 = (jfloat)((func_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float])(ctx, sp[0].o, sp[1].o, temp8, temp9, sp[2].o, (jint(0)));
	}
label_5:;
	LINE_NUMBER(1445);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawBuildPlans(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawBuildPlans", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1448);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1450);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1451);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1453);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1454);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_plansOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1455);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_playerPlanTree;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_plansOut;
	((func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1457);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_plansOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1458);
	if ((floatCompare(((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_progress), (jfloat(1,000000e-02f)), -1)) > 0) goto label_7;
	}
	{
	if ((frame[2].o) != (frame[4].o)) goto label_10;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_initialized) == 0) goto label_10;
	}
	{
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x) * (8)));
	jfloat temp1 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y) * (8)));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_buildRange));
	if (temp2 != 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_10;
	}
	goto label_7;
label_10:;
	{
	LINE_NUMBER(1460);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_animScale = (jfloat(1));
	LINE_NUMBER(1461);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_breaking) == 0) goto label_12;
	}
	{
	LINE_NUMBER(1462);
	((func_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[4].o));
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(1464);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allPlans;
	sp[3].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	clinit_mindustry_Vars(ctx);
	sp[4].o = (jobject)SF_mindustry_Vars_player;
	sp[4].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[4].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[3].o, sp[4].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_rotation));
	sp += 3;
	if (temp0 != 0) goto label_15;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean])(ctx, (frame[0].o), (frame[4].o));
	if (temp0 == 0) goto label_16;
	}
label_15:;
	INST_ICONST(1);
	goto label_17;
label_16:;
	INST_ICONST(0);
label_17:;
	INST_FCONST(1);
	POP_N(5); // Pop method args
	((func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].f);
label_14:;
	LINE_NUMBER(1466);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(1468);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r3;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1470);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1473);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1474);
	if ((floatCompare(((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_progress), (jfloat(1,000000e-02f)), -1)) > 0) goto label_20;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_breaking) != 0) goto label_20;
	}
	{
	if ((frame[2].o) != (frame[4].o)) goto label_23;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_initialized) == 0) goto label_23;
	}
	{
	sp[0].o = frame[1].o;
	jfloat temp0 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x) * (8)));
	jfloat temp1 = jfloat((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y) * (8)));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	jint temp2 = (jint)((func_mindustry_gen_Unit_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_within_float_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1, ((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[1].o))->F_buildRange));
	if (temp2 != 0) goto label_20;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isEditor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isEditor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_23;
	}
	goto label_20;
label_23:;
	{
	LINE_NUMBER(1476);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r2;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[4].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[4].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	jfloat temp2 = (jfloat)((func_mindustry_world_Block_planConfigClipSize_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_planConfigClipSize_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp2);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r3;
	jint temp3 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp3 == 0) goto label_24;
	}
	{
	LINE_NUMBER(1477);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp0 = jfloat(0.24f);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_absin_float_float_float_R_float(ctx, (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime), (jfloat(6.0f)), (jfloat(0.28f)));
	SM_arc_graphics_g2d_Draw_mixcol_arc_graphics_Color_float(ctx, sp[0].o, (temp0 + temp1));
	LINE_NUMBER(1478);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allRenderPlansConfig;
	((func_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1479);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	}
label_24:;
	LINE_NUMBER(1481);
	goto label_20;
label_21:;
	LINE_NUMBER(1482);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawBottom(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawBottom", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1486);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawTop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawTop", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1490);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawOverSelect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawOverSelect", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(1494);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawSelected", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1497);
	SM_mindustry_graphics_Drawf_selected_int_int_mindustry_world_Block_arc_graphics_Color(ctx, (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].o));
	LINE_NUMBER(1498);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawBreaking", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1501);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1502);
	((func_mindustry_input_InputHandler_drawBreaking_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawBreaking_int_int])(ctx, (frame[0].o), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(1504);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_remove;
	((func_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	}
label_3:;
	LINE_NUMBER(1506);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawOverlapCheck_mindustry_world_Block_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawOverlapCheck", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1509);
	if ((frame[4].i) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_placeRangeCheck) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1510);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_mindustry_world_Build_getEnemyOverlap_mindustry_world_Block_mindustry_game_Team_int_int_R_mindustry_gen_Building(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1511);
	if ((frame[5].o) == nullptr) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_wasVisible) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1512);
	sp[0].o = frame[5].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_remove;
	SM_mindustry_graphics_Drawf_selected_mindustry_gen_Building_arc_graphics_Color(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1513);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((frame[2].i))), (jfloat((frame[3].i))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_offset), ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_offset));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_arc_math_geom_Position_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(-1.0f)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_nor_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(1514);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_remove;
	jfloat temp0 = (jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_offset);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size)))) * (jfloat(8.0f))) / (jfloat(2)));
	jfloat temp2 = (jfloat(((frame[3].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_offset);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp3 = temp2 + (((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) * (jfloat(((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size)))) * (jfloat(8.0f))) / (jfloat(2)));
	jfloat temp4 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_x;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp5 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	jfloat temp6 = temp4 + (((temp5 * (jfloat((-((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))))) * (jfloat(8.0f))) / (jfloat(2)));
	jfloat temp7 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp8 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_block;
	SM_mindustry_graphics_Drawf_dashLineDst_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, temp1, temp3, temp6, (temp7 + (((temp8 * (jfloat((-((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size))))) * (jfloat(8.0f))) / (jfloat(2)))));
	}
label_1:;
	LINE_NUMBER(1522);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:planMatches", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1525);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x), ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1526);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[2].o)))->F_build;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_2;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[4].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[3].o)))->F_current;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawBreaking_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawBreaking", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1530);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1531);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1532);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1534);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = frame[4].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_remove;
	((func_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	LINE_NUMBER(1535);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:useSchematic", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1538);
	((func_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(1539);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_showSchematicSave(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:showSchematicSave", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1544);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1546);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_lastSchematic;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1548);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@schematic.add"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@name"_j));
	jint temp0 = 1000;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8""_j));
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_53);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showTextInput_java_lang_String_java_lang_String_int_java_lang_String_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, sp[4].o);
	LINE_NUMBER(1565);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_rotatePlans_arc_struct_Seq_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:rotatePlans", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1568);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_schemOriginX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_schemOriginX_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	jint temp1 = (jint)((func_mindustry_input_InputHandler_schemOriginY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_schemOriginY_R_int])(ctx, (frame[0].o));
	frame[4].i = temp1;
	LINE_NUMBER(1570);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_54);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (frame[2].i);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1603);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_flipPlans_arc_struct_Seq_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:flipPlans", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1606);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_schemOriginX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_schemOriginX_R_int])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->i = (jint)((func_mindustry_input_InputHandler_schemOriginY_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_schemOriginY_R_int])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 1;
	frame[3].i = (sp[0].i * (8));
	LINE_NUMBER(1608);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_55);
		proxy->F_field1 = (frame[3].i);
		proxy->F_field0 = (frame[2].i);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1632);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_input_InputHandler_schemOriginX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:schemOriginX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1635);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_rawTileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_rawTileX_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_input_InputHandler_schemOriginY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:schemOriginY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1639);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_rawTileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_rawTileY_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_getPlan_int_int_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:getPlan", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1644);
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (jint(1)), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:getPlan", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1649);
	frame[5].f = ((jfloat(((((frame[3].i) + (jint(1))) % (jint(2))) * (8)))) / (jfloat(2)));
	LINE_NUMBER(1650);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r2;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(((8) * (frame[3].i)))));
	LINE_NUMBER(1651);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r2;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jfloat(((frame[1].i) * (8)))) + (frame[5].f)), ((jfloat(((frame[2].i) * (8)))) + (frame[5].f)));
	LINE_NUMBER(1652);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_resultplan = (jref) (jobject(nullptr));
	LINE_NUMBER(1654);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_26(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_26 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_26);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[0].o = (jobject) proxy;
	}
	frame[6].o = sp[0].o;
	LINE_NUMBER(1671);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_6;
	}
	{
	LINE_NUMBER(1672);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_plans_R_arc_struct_Queue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1673);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[6].o)))(ctx, (frame[6].o), (frame[8].o));
	if (temp0 == 0) goto label_10;
	}
	INST_ALOAD(8);
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
	LINE_NUMBER(1674);
	goto label_8;
label_6:;
	{
	LINE_NUMBER(1677);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawBreakSelection", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1681);
	((func_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (jint(1)));
	LINE_NUMBER(1682);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawBreakSelection", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(1685);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeDrawArea_mindustry_world_Block_int_int_int_int_boolean_int_float_R_mindustry_input_Placement$NormalizeDrawResult(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jint(0)), (frame[5].i), (jfloat(1)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1686);
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeArea_int_int_int_int_int_boolean_int_R_mindustry_input_Placement$NormalizeResult(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation), (jint(0)), (frame[5].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1688);
	frame[9].i = ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[8].o)))->F_x);
	}
label_3:;
	{
	if ((frame[9].i) > ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[8].o)))->F_x2)) goto label_4;
	}
	{
	LINE_NUMBER(1689);
	frame[10].i = ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[8].o)))->F_y);
	}
label_6:;
	{
	if ((frame[10].i) > ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[8].o)))->F_y2)) goto label_7;
	}
	{
	LINE_NUMBER(1690);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[9].i), (frame[10].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1691);
	if ((frame[11].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_validBreak_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_validBreak_int_int_R_boolean])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_y));
	if (temp0 != 0) goto label_11;
	}
	goto label_10;
label_11:;
	{
	LINE_NUMBER(1693);
	((func_mindustry_input_InputHandler_drawBreaking_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawBreaking_int_int])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[11].o)))->F_y));
	}
label_10:;
	{
	LINE_NUMBER(1689);
	INST_IINC(10, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(1688);
	INST_IINC(9, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1697);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_x), ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_y), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_x2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_x)), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_y2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_y)));
	LINE_NUMBER(1699);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_remove;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1700);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(1)));
	LINE_NUMBER(1702);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	LINE_NUMBER(1703);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_plans_R_arc_struct_Queue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1704);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[10].o)))->F_breaking) != 0) goto label_19;
	}
	{
	sp[0].o = frame[10].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(1705);
	((func_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[10].o));
	}
label_19:;
	LINE_NUMBER(1707);
	goto label_17;
label_15:;
	{
	LINE_NUMBER(1710);
	if ((frame[6].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(1711);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1712);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[10].o)))->F_breaking) != 0) goto label_25;
	}
	{
	sp[0].o = frame[10].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(1713);
	((func_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan])(ctx, (frame[0].o), (frame[10].o));
	}
label_25:;
	LINE_NUMBER(1715);
	goto label_23;
label_21:;
	{
	LINE_NUMBER(1718);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_27:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(1719);
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[10].o)))->F_block;
	frame[11].o = sp[0].o;
	LINE_NUMBER(1720);
	sp[0].o = frame[11].o;
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[10].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[10].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp2 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp2 == 0) goto label_31;
	}
	{
	LINE_NUMBER(1721);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[10].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[10].o)))->F_y;
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[10].o)))->F_block;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_remove;
	((func_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	}
label_31:;
	LINE_NUMBER(1723);
	goto label_27;
label_28:;
	{
	LINE_NUMBER(1725);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(2)));
	LINE_NUMBER(1727);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_removeBack;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1728);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_x), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_y) - (jfloat(1))), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_x2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_x)), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_y2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_y)));
	LINE_NUMBER(1729);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_remove;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1730);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_x), ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_y), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_x2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_x)), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_y2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[7].o)))->F_y)));
	LINE_NUMBER(1731);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawRebuildSelection_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawRebuildSelection", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1734);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	jint temp4 = jint(0);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_sapBulletBack;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	((func_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, sp[1].o, sp[2].o, (jint(0)));
	LINE_NUMBER(1736);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeDrawArea_mindustry_world_Block_int_int_int_int_boolean_int_float_R_mindustry_input_Placement$NormalizeDrawResult(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jint(0)), (jint(0)), (jfloat(1)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1738);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[5].o)))->F_x), ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[5].o)))->F_y), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[5].o)))->F_x2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[5].o)))->F_x)), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[5].o)))->F_y2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[5].o)))->F_y)));
	LINE_NUMBER(1740);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(1741);
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_block;
	frame[8].o = sp[0].o;
	LINE_NUMBER(1742);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp2 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp2 == 0) goto label_8;
	}
	{
	LINE_NUMBER(1743);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_y;
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_block;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	((func_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	}
label_8:;
	LINE_NUMBER(1745);
	goto label_4;
label_5:;
	{
	LINE_NUMBER(1747);
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeArea_int_int_int_int_int_boolean_int_R_mindustry_input_Placement$NormalizeResult(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation), (jint(0)), (jint(999999999)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1749);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_intSet;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(1750);
	frame[7].i = ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[6].o)))->F_x);
	}
label_12:;
	{
	if ((frame[7].i) > ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[6].o)))->F_x2)) goto label_13;
	}
	{
	LINE_NUMBER(1751);
	frame[8].i = ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[6].o)))->F_y);
	}
label_15:;
	{
	if ((frame[8].i) > ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[6].o)))->F_y2)) goto label_16;
	}
	{
	LINE_NUMBER(1753);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[7].i), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1755);
	if ((frame[9].o) == nullptr) goto label_19;
	}
	{
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_intSet;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_19;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[9].o));
	if (temp0 == 0) goto label_19;
	}
	{
	LINE_NUMBER(1756);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_x;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_y;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[9].o));
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_sapBullet;
	((func_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color])(ctx, sp[0].o, temp0, temp1, sp[1].o, sp[2].o);
	}
label_19:;
	{
	LINE_NUMBER(1751);
	INST_IINC(8, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1750);
	INST_IINC(7, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(1760);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawBreakSelection", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1763);
	((func_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (100));
	LINE_NUMBER(1764);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawSelection", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1767);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	jint temp4 = frame[5].i;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accentBack;
	clinit_mindustry_graphics_Pal(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((func_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean])(ctx, sp[0].o, temp0, temp1, temp2, temp3, temp4, sp[1].o, sp[2].o, (jint(1)));
	LINE_NUMBER(1768);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jobject param6, jbool param7) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawSelection", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(1771);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_air;
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeDrawArea_mindustry_world_Block_int_int_int_int_boolean_int_float_R_mindustry_input_Placement$NormalizeDrawResult(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jint(0)), (frame[5].i), (jfloat(1)));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1773);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (jfloat(2)));
	LINE_NUMBER(1775);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[6].o));
	LINE_NUMBER(1776);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_x), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_y) - (jfloat(1))), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_x2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_x)), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_y2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_y)));
	LINE_NUMBER(1777);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[7].o));
	LINE_NUMBER(1778);
	SM_arc_graphics_g2d_Lines_rect_float_float_float_float(ctx, ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_x), ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_y), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_x2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_x)), (((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_y2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_y)));
	LINE_NUMBER(1780);
	if ((frame[8].i) == 0) goto label_7;
	}
	{
	LINE_NUMBER(1781);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	frame[10].o = sp[0].o;
	LINE_NUMBER(1782);
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, (frame[10].o), (frame[7].o));
	LINE_NUMBER(1783);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_Font_usesIntegerPositions_R_boolean])(ctx, (frame[10].o));
	frame[11].i = temp0;
	LINE_NUMBER(1784);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[10].o), (jint(0)));
	LINE_NUMBER(1785);
	jfloat temp1 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[12].f = temp1;
	LINE_NUMBER(1786);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (jfloat(210.0f)));
	LINE_NUMBER(1787);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[10].o));
	jfloat temp2 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (temp2 / ((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[1].o))->F_camerascale)));
	LINE_NUMBER(1789);
	frame[13].i = (jint(((((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_x2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_x)) / (jfloat(8.0f)))));
	LINE_NUMBER(1790);
	frame[14].i = (jint(((((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_y2) - ((jfloat)((mindustry_input_Placement$NormalizeDrawResult *) NULL_CHECK((frame[9].o)))->F_y)) / (jfloat(8.0f)))));
	LINE_NUMBER(1791);
	frame[15].i = ((frame[13].i) * (frame[14].i));
	LINE_NUMBER(1792);
	jfloat temp3 = jfloat(5.0f);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	frame[16].f = ((temp3 / ((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_camerascale)) * (jfloat(8.0f)));
	LINE_NUMBER(1794);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001x\u0001 (\u0001)"_j.string, 3, boxInteger(ctx, (frame[13].i)), boxInteger(ctx, (frame[14].i)), boxInteger(ctx, (frame[15].i)));
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	LINE_NUMBER(1795);
	jfloat temp4 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[2].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_input;
	jfloat temp5 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[2].o);
	sp[2].f = temp4;
	sp += 3;
	if ((floatCompare(temp5, (jfloat(((frame[1].i) * (8)))), -1)) <= 0) goto label_21;
	}
	INST_FLOAD(16);
	goto label_22;
label_21:;
	INST_FLOAD(16);
	INST_FNEG();
label_22:;
	{
	sp -= 2;
	jfloat temp0 = sp[0].f + sp[1].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	LINE_NUMBER(1796);
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp2 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp[1].f = temp1;
	sp += 2;
	if ((floatCompare(temp2, (jfloat(((frame[2].i) * (8)))), -1)) <= 0) goto label_24;
	}
	INST_FLOAD(16);
	goto label_25;
label_24:;
	INST_FLOAD(16);
	INST_FNEG();
label_25:;
	{
	sp -= 5;
	jfloat temp0 = sp[3].f + sp[4].f;
	LINE_NUMBER(1794);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_draw_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, sp[2].f, temp0);
	LINE_NUMBER(1798);
	sp[0].o = frame[10].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_Font_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1799);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[10].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float])(ctx, sp[0].o, (jfloat(1)));
	LINE_NUMBER(1800);
	((func_arc_graphics_g2d_Font_setUseIntegerPositions_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setUseIntegerPositions_boolean])(ctx, (frame[10].o), (frame[11].i));
	LINE_NUMBER(1801);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[12].f));
	}
label_7:;
	LINE_NUMBER(1803);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_flushSelectPlans_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:flushSelectPlans", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1806);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1807);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_rotation), (jobject(nullptr)), (jint(1)));
	if (temp2 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1808);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, temp0, temp1, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size), (jobject(nullptr)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1809);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1810);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(1811);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_breaking) != 0) goto label_4;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_x) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x)) goto label_4;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_y) != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y)) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_block;
	jint temp0 = (jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	if (temp0 != ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(1812);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(1813);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[1].o = (jobject)((func_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(1816);
	goto label_1;
label_2:;
	LINE_NUMBER(1817);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_flushPlansReverse_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:flushPlansReverse", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1821);
	frame[2].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) - (jint(1)));
	}
label_1:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(1822);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1823);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_rotation), (jobject(nullptr)), (jint(1)));
	if (temp2 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1824);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1825);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	((func_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(1826);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan_boolean])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	LINE_NUMBER(1827);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_playerPlanTree;
	((func_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[4].o));
	}
label_5:;
	{
	LINE_NUMBER(1821);
	INST_IINC(2, -1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(1830);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_flushPlans_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:flushPlans", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1833);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1834);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_rotation), (jobject(nullptr)), (jint(1)));
	if (temp2 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1835);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_copy_R_mindustry_entities_units_BuildPlan])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1836);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	((func_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(1837);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(1838);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_playerPlanTree;
	((func_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[4].o));
	}
label_4:;
	LINE_NUMBER(1840);
	goto label_1;
label_2:;
	LINE_NUMBER(1841);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawOverPlan", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1844);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	sp[3].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean])(ctx, sp[2].o, temp0, temp1, sp[3].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation));
	((func_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean])(ctx, sp[0].o, sp[1].o, temp2);
	LINE_NUMBER(1845);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawOverPlan", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1848);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1849);
	if ((frame[2].i) != 0) goto label_2;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_breakInvalid;
	goto label_3;
label_2:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
label_3:;
	INST_ILOAD(2);
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
	LINE_NUMBER(1850);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	LINE_NUMBER(1851);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allSelectLines;
	((func_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1852);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(1853);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawPlan", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1856);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[1].o;
	sp[3].o = frame[0].o;
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y;
	sp[4].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp2 = (jint)((func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean])(ctx, sp[3].o, temp0, temp1, sp[4].o, ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_rotation));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[2].o))->F_cachedValid = temp2;
	((func_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean])(ctx, sp[0].o, sp[1].o, temp2);
	LINE_NUMBER(1857);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawPlan", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1860);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allPlans;
	((func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[2].i));
	LINE_NUMBER(1861);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawPlan_int_int_mindustry_world_Block_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawPlan", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1865);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_bplan;
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_set_int_int_int_mindustry_world_Block_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[4].i), (frame[3].o));
	LINE_NUMBER(1866);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_saveConfig) == 0) goto label_2;
	}
	{
	LINE_NUMBER(1867);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_bplan;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_lastConfig;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(1869);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_bplan;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_animScale = (jfloat(1));
	LINE_NUMBER(1870);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_bplan;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_allPlans;
	jint temp0 = (jint)((func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i));
	((func_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	LINE_NUMBER(1871);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_removeSelection_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:removeSelection", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1875);
	((func_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jint(0)));
	LINE_NUMBER(1876);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_removeSelection_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:removeSelection", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1880);
	((func_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jint(0)), (frame[5].i));
	LINE_NUMBER(1881);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:removeSelection", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(1885);
	((func_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (100));
	LINE_NUMBER(1886);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:removeSelection", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(1890);
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeArea_int_int_int_int_int_boolean_int_R_mindustry_input_Placement$NormalizeResult(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation), (jint(0)), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1891);
	frame[8].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[8].i;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[7].o)))->F_x2) - ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[7].o)))->F_x)));
	if (temp0 > temp1) goto label_3;
	}
	{
	LINE_NUMBER(1892);
	frame[9].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[9].i;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[7].o)))->F_y2) - ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[7].o)))->F_y)));
	if (temp0 > temp1) goto label_6;
	}
	{
	LINE_NUMBER(1893);
	jint temp0 = frame[1].i;
	jint temp1 = frame[8].i;
	jint temp2 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (jfloat(((frame[3].i) - (frame[1].i)))));
	frame[10].i = (temp0 + (temp1 * temp2));
	LINE_NUMBER(1894);
	jint temp3 = frame[2].i;
	jint temp4 = frame[9].i;
	jint temp5 = (jint)SM_arc_math_Mathf_sign_float_R_int(ctx, (jfloat(((frame[4].i) - (frame[2].i)))));
	frame[11].i = (temp3 + (temp4 * temp5));
	LINE_NUMBER(1896);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[10].i), (frame[11].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1898);
	if ((frame[12].o) != nullptr) goto label_11;
	}
	goto label_12;
label_11:;
	{
	LINE_NUMBER(1900);
	if ((frame[5].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(1901);
	((func_mindustry_input_InputHandler_tryBreakBlock_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_tryBreakBlock_int_int])(ctx, (frame[0].o), (frame[10].i), (frame[11].i));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(1902);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_validBreak_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_validBreak_int_int_R_boolean])(ctx, (frame[0].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_y));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_27(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_27 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_27);
		proxy->F_field0 = (jref) (frame[12].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(1903);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	init_mindustry_entities_units_BuildPlan_int_int(ctx, sp[1].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[12].o)))->F_y));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(1892);
	INST_IINC(9, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1891);
	INST_IINC(8, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1909);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[7].o)))->F_x) * (8)))), (jfloat((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[7].o)))->F_y) * (8)))), (jfloat(((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[7].o)))->F_x2) - ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[7].o)))->F_x)) * (8)))), (jfloat(((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[7].o)))->F_y2) - ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[7].o)))->F_y)) * (8)))));
	LINE_NUMBER(1911);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(1912);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_plans_R_arc_struct_Queue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_plans_R_arc_struct_Queue])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(1913);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(1914);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1915);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[9].o)))->F_breaking) != 0) goto label_23;
	}
	{
	sp[0].o = frame[9].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(1916);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[8].o)))(ctx, (frame[8].o));
	}
label_23:;
	LINE_NUMBER(1918);
	goto label_19;
label_20:;
	{
	LINE_NUMBER(1921);
	if ((frame[5].i) == 0) goto label_17;
	}
	{
	LINE_NUMBER(1922);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_selectPlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_26:;
	{
	LINE_NUMBER(1923);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1924);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1925);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[9].o)))->F_breaking) != 0) goto label_29;
	}
	{
	sp[0].o = frame[9].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(1926);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[8].o)))(ctx, (frame[8].o));
	}
label_29:;
	LINE_NUMBER(1928);
	goto label_26;
label_17:;
	{
	LINE_NUMBER(1932);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_removed;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(1935);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(1936);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[8].o)))(ctx, (frame[8].o));
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(1937);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[8].o)))(ctx, (frame[8].o));
	frame[9].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(1938);
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[9].o)))->F_block;
	frame[10].o = sp[0].o;
	LINE_NUMBER(1939);
	sp[0].o = frame[10].o;
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[9].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[9].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp2 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp2 == 0) goto label_37;
	}
	{
	LINE_NUMBER(1940);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_removed;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[9].o)))->F_x), ((jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[9].o)))->F_y));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(1941);
	((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[9].o)))->F_removed = (jint(1));
	LINE_NUMBER(1942);
	((func_java_util_Iterator_remove) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_remove, (frame[8].o)))(ctx, (frame[8].o));
	}
label_37:;
	LINE_NUMBER(1944);
	goto label_32;
label_33:;
	{
	LINE_NUMBER(1947);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_removed;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_41;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(1948);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	clinit_mindustry_input_InputHandler(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_removed;
	sp[1].o = (jobject)((func_arc_struct_IntSeq_toArray_R_Array1_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_toArray_R_Array1_int])(ctx, sp[1].o);
	SM_mindustry_gen_Call_deletePlans_mindustry_gen_Player_Array1_int(ctx, sp[0].o, sp[1].o);
	}
label_41:;
	LINE_NUMBER(1950);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_updateLine_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:updateLine", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(1953);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1954);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_56);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(1961);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp4 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blockreplace"_j))));
	if (temp4 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1962);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1969);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	((func_mindustry_world_Block_handlePlacementLine_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_handlePlacementLine_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(1971);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_updateLine_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:updateLine", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1974);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	sp[1].o = frame[0].o;
	jfloat temp2 = (jfloat)((func_mindustry_input_InputHandler_getMouseX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_getMouseX_R_float])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_mindustry_input_InputHandler_tileX_float_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_input_InputHandler_tileX_float_R_int])(ctx, sp[1].o, temp2);
	sp[1].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_mindustry_input_InputHandler_getMouseY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_getMouseY_R_float])(ctx, (frame[0].o));
	jint temp5 = (jint)((func_mindustry_input_InputHandler_tileY_float_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_input_InputHandler_tileY_float_R_int])(ctx, sp[1].o, temp4);
	((func_mindustry_input_InputHandler_updateLine_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_updateLine_int_int_int_int])(ctx, sp[0].o, temp0, temp1, temp3, temp5);
	LINE_NUMBER(1975);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_checkConfigTap_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:checkConfigTap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1978);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp0 = (jint)((func_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	jint temp2 = (jint)((func_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onConfigureTapped_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1);
	if (temp2 == 0) goto label_1;
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

jbool M_mindustry_input_InputHandler_tileTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tileTapped", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1983);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_planConfig;
	((func_mindustry_ui_fragments_PlanConfigFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlanConfigFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(1984);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1985);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_inv;
	((func_mindustry_ui_fragments_BlockInventoryFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_hide])(ctx, sp[0].o);
	LINE_NUMBER(1986);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	((func_mindustry_ui_fragments_BlockConfigFragment_hideConfig) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_hideConfig])(ctx, sp[0].o);
	LINE_NUMBER(1987);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1988);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(1990);
	frame[2].i = (jint(0));
	frame[3].i = (jint(0));
	LINE_NUMBER(1993);
	jint temp0 = (jint)((func_mindustry_gen_Building_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_isCommandable_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1995);
	frame[2].i = (jint(1));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(1996);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configurable) == 0) goto label_12;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(1997);
	frame[2].i = (jint(1));
	LINE_NUMBER(1998);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp0 = (jint)((func_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_15;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_16;
	}
label_15:;
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	LINE_NUMBER(2000);
	jint temp0 = (jint)((func_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_shouldShowConfigure_mindustry_gen_Player_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
label_16:;
	{
	LINE_NUMBER(2001);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_configureSound;
	jfloat temp0 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp2 = jfloat(1);
	jfloat temp3 = jfloat(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_control;
	sp[1].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[1].o))->F_sound;
	sp[1].o = (jobject)((mindustry_audio_SoundControl *) NULL_CHECK(sp[1].o))->F_uiBus;
	jint temp4 = (jint)((func_arc_audio_Sound_at_float_float_float_float_arc_audio_AudioBus_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_float_float_arc_audio_AudioBus_R_int])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(2002);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	((func_mindustry_ui_fragments_BlockConfigFragment_showConfig_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_showConfig_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].o));
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(2005);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp0 = (jint)((func_mindustry_ui_fragments_BlockConfigFragment_hasConfigMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_hasConfigMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(2007);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp0 = (jint)((func_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	sp[0].o = (jobject)((func_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_getSelected_R_mindustry_gen_Building])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_onConfigureBuildTapped_mindustry_gen_Building_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(2008);
	frame[2].i = (jint(1));
	LINE_NUMBER(2009);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	((func_mindustry_ui_fragments_BlockConfigFragment_hideConfig) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_hideConfig])(ctx, sp[0].o);
	}
label_20:;
	{
	LINE_NUMBER(2012);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	jint temp0 = (jint)((func_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_isShown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(2013);
	frame[2].i = (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(2018);
	if ((frame[2].i) != 0) goto label_24;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(2019);
	((func_mindustry_gen_Building_tapped) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_tapped])(ctx, (frame[1].o));
	}
label_24:;
	{
	LINE_NUMBER(2023);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consumesTap) == 0) goto label_26;
	}
	{
	LINE_NUMBER(2024);
	frame[2].i = (jint(1));
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(2025);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_28;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_29;
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_allowConfigInventory) == 0) goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(2026);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_28;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_items;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_total_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_total_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_28;
	}
	{
	LINE_NUMBER(2027);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_inv;
	((func_mindustry_ui_fragments_BlockInventoryFragment_showFor_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_showFor_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(2028);
	frame[2].i = (jint(1));
	LINE_NUMBER(2029);
	frame[3].i = (jint(1));
	}
label_28:;
	{
	LINE_NUMBER(2033);
	if ((frame[3].i) != 0) goto label_33;
	}
	{
	LINE_NUMBER(2034);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_inv;
	((func_mindustry_ui_fragments_BlockInventoryFragment_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_hide])(ctx, sp[0].o);
	}
label_33:;
	{
	LINE_NUMBER(2037);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_tryTapPlayer_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tryTapPlayer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2042);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2043);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem = (jint(1));
	LINE_NUMBER(2044);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2046);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:canTapPlayer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2050);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_within_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_within_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (clinit_mindustry_input_InputHandler(ctx), (jfloat)SF_mindustry_input_InputHandler_playerSelectRange));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_1;
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

jbool M_mindustry_input_InputHandler_tryBeginMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tryBeginMine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2055);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2056);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (frame[1].o);
	LINE_NUMBER(2057);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2059);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_tryStopMine_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tryStopMine", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2064);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_mining_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_mining_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2065);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(2066);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2068);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_tryStopMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tryStopMine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2072);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(2073);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_mineTile = (jref) (jobject(nullptr));
	LINE_NUMBER(2074);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2076);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tryRepairDerelict", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2080);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2081);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp2 = (jint)((mindustry_gen_Building *) NULL_CHECK(sp[2].o))->F_rotation;
	sp[2].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	sp[3].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[3].o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, sp[3].o);
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2082);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2084);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:canRepairDerelict", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2088);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNowHost_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlockedNowHost_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	LINE_NUMBER(2089);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[1].o)))->F_build;
	jint temp2 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, temp0, temp1, ((jint)((mindustry_gen_Building *) NULL_CHECK(sp[2].o))->F_rotation));
	if (temp2 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	LINE_NUMBER(2088);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:canMine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2093);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_hasMouse_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hasMouse_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	LINE_NUMBER(2094);
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	LINE_NUMBER(2095);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_validMine_mindustry_world_Tile_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	LINE_NUMBER(2096);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_mindustry_gen_Unit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_getMineResult_mindustry_world_Tile_R_mindustry_type_Item])(ctx, sp[1].o, (frame[1].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_acceptsItem_mindustry_type_Item_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_acceptsItem_mindustry_type_Item_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"doubletapmine"_j));
	LINE_NUMBER(2097);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_playerUnmineable) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_1;
	}
label_6:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"doubletapmine"_j));
	LINE_NUMBER(2098);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_playerUnmineable) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_overlay_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[1].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o != nullptr) goto label_1;
	}
label_8:;
	INST_ICONST(1);
	goto label_9;
label_1:;
	INST_ICONST(0);
label_9:;
	LINE_NUMBER(2093);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_tileAt_float_float_R_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tileAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2103);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_input_InputHandler_tileX_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_tileX_float_R_int])(ctx, (frame[0].o), (frame[1].f));
	jint temp1 = (jint)((func_mindustry_input_InputHandler_tileY_float_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_tileY_float_R_int])(ctx, (frame[0].o), (frame[2].f));
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_input_InputHandler_rawTileX_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:rawTileX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2107);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_input_InputHandler_rawTileY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:rawTileY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2111);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_input_InputHandler_tileX_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tileX", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2115);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (jfloat(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2116);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_selectedBlock_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_selectedBlock_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2117);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset));
	}
label_2:;
	{
	LINE_NUMBER(2119);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_input_InputHandler_tileY_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tileY", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(2123);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(0)), (frame[1].f));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2124);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_selectedBlock_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_selectedBlock_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2125);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset));
	}
label_2:;
	{
	LINE_NUMBER(2127);
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:panCamera", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2132);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_locked_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_locked_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(2133);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(2135);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_selectedBlock_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:selectedBlock", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2138);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_isPlacing_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_isPlacing_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_isPlacing_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:isPlacing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2142);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_1;
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

jbool M_mindustry_input_InputHandler_isBreaking_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:isBreaking", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2146);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_isRebuildSelecting_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:isRebuildSelecting", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2150);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_rebuildSelect;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_input_InputHandler_mouseAngle_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:mouseAngle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2154);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_mindustry_input_InputHandler_getMouseX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_getMouseX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_input_InputHandler_getMouseY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_getMouseY_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_mouseWorld_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Vec2_angle_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_angle_R_float])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:selectedUnit", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp2 = jfloat(40.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_28(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_28 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_28);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_entities_Units_closest_mindustry_game_Team_float_float_float_arc_func_Boolf_R_mindustry_gen_Unit(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2159);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(2160);
	sp[0].o = frame[1].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	((func_mindustry_gen_Unit_hitbox_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hitbox_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2161);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(2162);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2163);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(2167);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	frame[2].o = sp[0].o;
	LINE_NUMBER(2168);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_ControlBlock)) == 0) goto label_8;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_ControlBlock, (frame[2].o)));
	jint temp0 = (jint)((func_mindustry_world_blocks_ControlBlock_canControl_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_canControl_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit, (frame[3].o)))(ctx, (frame[3].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit, (frame[3].o)))(ctx, (frame[3].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2169);
	sp[0].o = (jobject)((func_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit, (frame[3].o)))(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(2172);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:selectedControlBuild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((func_arc_Input_mouseWorld_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorld_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_buildWorld_float_float_R_mindustry_gen_Building])(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2177);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_canControlSelect_mindustry_gen_Unit_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(2178);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(2180);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:selectedCommandUnit", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2184);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2185);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_tmpUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(2186);
	frame[4].f = (jfloat(4.0f));
	LINE_NUMBER(2187);
	sp[0].o = frame[3].o;
	jfloat temp0 = (frame[1].f) - ((frame[4].f) / (jfloat(2)));
	jfloat temp1 = (frame[2].f) - ((frame[4].f) / (jfloat(2)));
	jfloat temp2 = frame[4].f;
	jfloat temp3 = frame[4].f;
	clinit_mindustry_input_InputHandler(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_tmpUnits;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(2188);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_tmpUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_29(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_29 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_29);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Floatf_2(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Floatf_2 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Floatf_2);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:selectedEnemyUnit", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(2192);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_tmpUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(2193);
	frame[3].f = (jfloat(4.0f));
	LINE_NUMBER(2195);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2196);
	frame[5].i = (jint(0));
	}
label_4:;
	{
	if ((frame[5].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(2197);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_items;
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[0].o)), (frame[5].i)))))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(2198);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[4].o)))->F_items;
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[0].o)), (frame[5].i))))->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_game_Teams$TeamData, 1), sp[0].o)), (frame[5].i))));
	jfloat temp0 = (frame[1].f) - ((frame[3].f) / (jfloat(2)));
	jfloat temp1 = (frame[2].f) - ((frame[3].f) / (jfloat(2)));
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[3].f;
	clinit_mindustry_input_InputHandler(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_tmpUnits;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(2196);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(2202);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_tmpUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_30(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_30 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_30);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Floatf_3);
		proxy->F_field1 = (frame[2].f);
		proxy->F_field0 = (frame[1].f);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_min_arc_func_Boolf_arc_func_Floatf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:selectedCommandBuildings", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(2206);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_buildingTree;
	frame[5].o = sp[0].o;
	LINE_NUMBER(2207);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_tmpBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(2208);
	if ((frame[5].o) != nullptr) goto label_3;
	}
	clinit_mindustry_input_InputHandler(ctx);
	(sp++)->o = SF_mindustry_input_InputHandler_tmpBuildings;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(2209);
	frame[6].f = (jfloat(4.0f));
	LINE_NUMBER(2210);
	sp[0].o = frame[5].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, ((frame[1].f) - ((frame[6].f) / (jfloat(2)))), ((frame[2].f) - ((frame[6].f) / (jfloat(2)))), (((frame[6].f) * (jfloat(2))) + (frame[3].f)), (((frame[6].f) * (jfloat(2))) + (frame[4].f)));
	sp[1].o = (jobject)((func_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_58);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(2215);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_tmpBuildings;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:selectedCommandUnits", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(2219);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_tree_R_arc_math_geom_QuadTree])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2220);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_tmpUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(2221);
	frame[7].f = (jfloat(4.0f));
	LINE_NUMBER(2222);
	sp[0].o = frame[6].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, ((frame[1].f) - ((frame[7].f) / (jfloat(2)))), ((frame[2].f) - ((frame[7].f) / (jfloat(2)))), (((frame[7].f) * (jfloat(2))) + (frame[3].f)), (((frame[7].f) * (jfloat(2))) + (frame[4].f)));
	sp[1].o = (jobject)((func_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect])(ctx, sp[1].o);
	clinit_mindustry_input_InputHandler(ctx);
	sp[2].o = (jobject)SF_mindustry_input_InputHandler_tmpUnits;
	((func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(2223);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_tmpUnits;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_31(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_31 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_31);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2224);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_tmpUnits;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:selectedCommandUnits", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(2228);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_32(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_32 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_32);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2232);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_removeProcessor_arc_input_InputProcessor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_removeProcessor_arc_input_InputProcessor])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(2233);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_group;
	jint temp0 = (jint)((func_arc_scene_ui_layout_WidgetGroup_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_WidgetGroup_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(2234);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2235);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"inputTable"_j))));
	frame[1].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(2236);
	if ((frame[1].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(2237);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	}
label_3:;
	{
	LINE_NUMBER(2240);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_detector;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(2241);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_detector;
	((func_arc_Input_removeProcessor_arc_input_InputProcessor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_removeProcessor_arc_input_InputProcessor])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(2243);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_uiGroup;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(2244);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_uiGroup;
	jint temp0 = (jint)((func_arc_scene_Group_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_remove_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(2245);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_uiGroup = (jref) (jobject(nullptr));
	}
label_9:;
	LINE_NUMBER(2247);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_add(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:add", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2250);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[0].o = (jobject)((func_arc_Input_getInputProcessors_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_getInputProcessors_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_33(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_33 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_33);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_remove_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2251);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	sp[1].o = frame[0].o;
	clinit_arc_input_GestureDetector(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_input_GestureDetector);
	init_arc_input_GestureDetector_float_float_float_float_arc_input_GestureDetector$GestureListener(ctx, sp[2].o, (jfloat(20.0f)), (jfloat(0.5f)), (jfloat(0.3f)), (jfloat(0.15f)), (frame[0].o));
	((mindustry_input_InputHandler *) NULL_CHECK(sp[1].o))->F_detector = (jref) sp[2].o;
	((func_arc_Input_addProcessor_arc_input_InputProcessor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_addProcessor_arc_input_InputProcessor])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(2252);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	((func_arc_Input_addProcessor_arc_input_InputProcessor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_addProcessor_arc_input_InputProcessor])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(2253);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(2254);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"inputTable"_j))));
	frame[1].o = (checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[0].o));
	LINE_NUMBER(2255);
	if ((frame[1].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(2256);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[1].o));
	LINE_NUMBER(2257);
	((func_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table])(ctx, (frame[0].o), (frame[1].o));
	}
label_7:;
	{
	LINE_NUMBER(2260);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_WidgetGroup);
	init_arc_scene_ui_layout_WidgetGroup(ctx, sp[1].o);
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_uiGroup = (jref) sp[1].o;
	LINE_NUMBER(2261);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_uiGroup;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_childrenOnly;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(2262);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_uiGroup;
	((func_arc_scene_Group_setFillParent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_setFillParent_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(2263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudGroup;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_uiGroup;
	((func_arc_scene_ui_layout_WidgetGroup_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_WidgetGroup_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2264);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_uiGroup;
	((func_arc_scene_Group_toBack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_toBack])(ctx, sp[0].o);
	LINE_NUMBER(2265);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_uiGroup;
	((func_mindustry_input_InputHandler_buildUI_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_buildUI_arc_scene_Group])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2267);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_group;
	((func_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(2268);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hudGroup;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_find_java_lang_String_R_arc_scene_Element])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"overlaymarker"_j))));
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_group;
	((func_arc_scene_ui_layout_WidgetGroup_addChildBefore_arc_scene_Element_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_WidgetGroup_addChildBefore_arc_scene_Element_arc_scene_Element])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(2270);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_inv;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_group;
	((func_mindustry_ui_fragments_BlockInventoryFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockInventoryFragment_build_arc_scene_Group])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2271);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_config;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_group;
	((func_mindustry_ui_fragments_BlockConfigFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_BlockConfigFragment_build_arc_scene_Group])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2272);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_planConfig;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_group;
	((func_mindustry_ui_fragments_PlanConfigFragment_build_arc_scene_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_PlanConfigFragment_build_arc_scene_Group])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(2275);
	((func_mindustry_input_InputHandler_initQuadtrees) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_initQuadtrees])(ctx, (frame[0].o));
	LINE_NUMBER(2276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_canShoot_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:canShoot", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2279);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_onConfigurable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_onConfigurable_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_isDroppingItem_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_isDroppingItem_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	LINE_NUMBER(2280);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_mindustry_gen_Mechc)) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
label_3:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_mining_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_mining_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_commandMode) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(2279);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_onConfigurable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:onConfigurable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2284);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_isDroppingItem_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:isDroppingItem", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2288);
	popStackFrame(ctx);
	return ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_canDropItem_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:canDropItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2292);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp0 = (jfloat)((func_arc_Input_mouseWorldX_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldX_R_float])(ctx, sp[1].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jfloat temp1 = (jfloat)((func_arc_Input_mouseWorldY_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseWorldY_R_float])(ctx, sp[1].o);
	jint temp2 = (jint)((func_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean])(ctx, sp[0].o, temp0, temp1);
	if (temp2 != 0) goto label_1;
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

void M_mindustry_input_InputHandler_tryDropItems_mindustry_gen_Building_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tryDropItems", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(2296);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2298);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack;
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) <= 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isPaused_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isPaused_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2299);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem = (jint(0));
	LINE_NUMBER(2300);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(2303);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_droppingItem = (jint(0));
	LINE_NUMBER(2305);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_stack;
	frame[4].o = sp[0].o;
	LINE_NUMBER(2307);
	if ((frame[1].o) == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_item;
	jint temp0 = (jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[4].o)))->F_amount;
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[2].o);
	jint temp1 = (jint)((func_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_acceptStack_mindustry_type_Item_int_mindustry_gen_Teamc_R_int])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	if (temp1 <= 0) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_hasItems) == 0) goto label_7;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	LINE_NUMBER(2308);
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_stack_R_mindustry_type_ItemStack])(ctx, sp[0].o);
	if (((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[0].o))->F_amount) <= 0) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_interactable_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(2310);
	jint temp0 = (jint)((func_mindustry_gen_Building_allowDeposit_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Building_allowDeposit_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	jint temp0 = (jint)((func_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(2311);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_transferInventory_mindustry_gen_Player_mindustry_gen_Building(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(2312);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_itemDepositCooldown = ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_itemDepositCooldown);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(2315);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jfloat temp0 = (jfloat)((func_mindustry_gen_Player_angleTo_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_angleTo_float_float_R_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	SM_mindustry_gen_Call_dropItem_float(ctx, temp0);
	}
label_10:;
	LINE_NUMBER(2317);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:canDepositItem", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2321);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if ((floatCompare(((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_depositCooldown), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	LINE_NUMBER(2322);
	jfloat temp0 = (jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_itemDepositCooldown;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	jfloat temp1 = temp0 - ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_itemDepositCooldown);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_block;
	if ((floatCompare(temp1, (-((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_depositCooldown)), 1)) > 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(2324);
	if ((floatCompare(((jfloat)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_itemDepositCooldown), (jfloat(0)), 1)) > 0) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_rebuildArea_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:rebuildArea", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(2328);
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeArea_int_int_int_int_int_boolean_int_R_mindustry_input_Placement$NormalizeResult(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation), (jint(0)), (jint(999999999)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(2329);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[5].o)))->F_x) * (8)))), (jfloat((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[5].o)))->F_y) * (8)))), (jfloat(((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[5].o)))->F_x2) - ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[5].o)))->F_x)) * (8)))), (jfloat(((((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[5].o)))->F_y2) - ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[5].o)))->F_y)) * (8)))));
	LINE_NUMBER(2331);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	sp[0].o = (jobject)((func_arc_struct_Queue_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Queue_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2332);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2333);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_game_Teams$BlockPlan, sp[0].o));
	LINE_NUMBER(2334);
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_block;
	frame[8].o = sp[0].o;
	LINE_NUMBER(2335);
	sp[0].o = frame[8].o;
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_y;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	jint temp2 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp2 == 0) goto label_8;
	}
	{
	LINE_NUMBER(2336);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_y;
	jint temp2 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_rotation;
	sp[2].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_block;
	sp[3].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[7].o)))->F_config;
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	LINE_NUMBER(2338);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(2340);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_intSet;
	((func_arc_struct_IntSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(2341);
	frame[7].i = ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[5].o)))->F_x);
	}
label_11:;
	{
	if ((frame[7].i) > ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[5].o)))->F_x2)) goto label_12;
	}
	{
	LINE_NUMBER(2342);
	frame[8].i = ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[5].o)))->F_y);
	}
label_14:;
	{
	if ((frame[8].i) > ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[5].o)))->F_y2)) goto label_15;
	}
	{
	LINE_NUMBER(2344);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileBuilding_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[7].i), (frame[8].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2346);
	if ((frame[9].o) == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[9].o)))->F_build;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_intSet;
	jint temp0 = (jint)((func_mindustry_world_Tile_pos_R_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_world_Tile_pos_R_int])(ctx, (frame[9].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 == 0) goto label_18;
	}
	{
	LINE_NUMBER(2347);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean])(ctx, (frame[0].o), (frame[9].o));
	}
label_18:;
	{
	LINE_NUMBER(2342);
	INST_IINC(8, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(2341);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(2351);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_tryBreakBlock_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:tryBreakBlock", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2354);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_validBreak_int_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_validBreak_int_int_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2355);
	((func_mindustry_input_InputHandler_breakBlock_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_breakBlock_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	}
label_1:;
	LINE_NUMBER(2357);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:validPlace", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(2360);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:validPlace", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(2363);
	jint temp0 = (jint)((func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (frame[4].i), (frame[5].o), (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4, jbool param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:validPlace", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(2377);
	if ((frame[6].i) == 0) goto label_1;
	}
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlaceIgnoreUnits_mindustry_world_Block_mindustry_game_Team_int_int_int_boolean_boolean_R_boolean(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[4].i), (jint(1)), (jint(1)));
	if (temp0 == 0) goto label_2;
	}
	goto label_3;
label_1:;
	{
	sp[0].o = frame[3].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[4].i));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2378);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2381);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_4;
	}
	{
	LINE_NUMBER(2382);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_offset)), ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_offset)), (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_size) * (8)))));
	LINE_NUMBER(2383);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_plansOut;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(2384);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_playerPlanTree;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_plansOut;
	((func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(2386);
	frame[7].f = (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_size) * (8))));
	LINE_NUMBER(2387);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_vpIgnore = (frame[5].o);
	LINE_NUMBER(2388);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_vpBlock = (frame[3].o);
	LINE_NUMBER(2389);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_vpX = (frame[1].i);
	LINE_NUMBER(2390);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_vpY = (frame[2].i);
	LINE_NUMBER(2392);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_playerPlanTree;
	jfloat temp0 = ((jfloat(((frame[1].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_offset)) - ((frame[7].f) / (jfloat(2)));
	jfloat temp1 = ((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_offset)) - ((frame[7].f) / (jfloat(2)));
	jfloat temp2 = frame[7].f;
	jfloat temp3 = frame[7].f;
	clinit_mindustry_input_InputHandler(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_vpPredicate;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	if (sp[0].o != nullptr) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(2395);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_validBreak_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:validBreak", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2399);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	jint temp0 = (jint)SM_mindustry_world_Build_validBreak_mindustry_game_Team_int_int_R_boolean(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_breakBlock_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:breakBlock", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2403);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(2405);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(2406);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_tile;
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(2407);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	init_mindustry_entities_units_BuildPlan_int_int(ctx, sp[1].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y));
	((func_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_addBuild_mindustry_entities_units_BuildPlan])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawArrow", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(2411);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = frame[4].i;
	jint temp3 = (jint)((func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean])(ctx, (frame[0].o), (frame[2].i), (frame[3].i), (frame[1].o), (frame[4].i));
	((func_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(2412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:drawArrow", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(2415);
	frame[6].f = (jfloat(((((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size) / (jint(2))) * (8))));
	LINE_NUMBER(2416);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[4].i));
	frame[7].i = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x);
	sp[0].o = (jobject)SM_arc_math_geom_Geometry_d4_int_R_arc_math_geom_Point2(ctx, (frame[4].i));
	frame[8].i = ((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(2417);
	frame[9].f = (((jfloat(((frame[2].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_offset)) + ((jfloat((frame[7].i))) * (frame[6].f)));
	LINE_NUMBER(2418);
	frame[10].f = (((jfloat(((frame[3].i) * (8)))) + ((jfloat)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_offset)) + ((jfloat((frame[8].i))) * (frame[6].f)));
	LINE_NUMBER(2420);
	if ((frame[5].i) != 0) goto label_6;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_removeBack;
	goto label_7;
label_6:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accentBack;
label_7:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(2421);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"place-arrow"_j))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(2423);
	sp[0].o = frame[11].o;
	jfloat temp0 = frame[9].f;
	jfloat temp1 = (frame[10].f) - (jfloat(1));
	jfloat temp2 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[11].o)))->F_width));
	sp[1].o = frame[11].o;
	LINE_NUMBER(2426);
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	jfloat temp4 = temp2 * temp3;
	jfloat temp5 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[11].o)))->F_height));
	sp[1].o = frame[11].o;
	LINE_NUMBER(2427);
	jfloat temp6 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	jfloat temp7 = temp5 * temp6;
	jfloat temp8 = jfloat((((frame[4].i) * (90)) - (90)));
	LINE_NUMBER(2423);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp4, temp7, temp8);
	LINE_NUMBER(2430);
	if ((frame[5].i) != 0) goto label_14;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_remove;
	goto label_15;
label_14:;
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
label_15:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(2431);
	sp[0].o = frame[11].o;
	jfloat temp0 = frame[9].f;
	jfloat temp1 = frame[10].f;
	jfloat temp2 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[11].o)))->F_width));
	sp[1].o = frame[11].o;
	LINE_NUMBER(2434);
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	jfloat temp4 = temp2 * temp3;
	jfloat temp5 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[11].o)))->F_height));
	sp[1].o = frame[11].o;
	LINE_NUMBER(2435);
	jfloat temp6 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[1].o);
	jfloat temp7 = temp5 * temp6;
	jfloat temp8 = jfloat((((frame[4].i) * (90)) - (90)));
	LINE_NUMBER(2431);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, temp1, temp4, temp7, temp8);
	LINE_NUMBER(2437);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:iterateLine", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(2441);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_diagonalPlacement;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	frame[7].i = temp0;
	LINE_NUMBER(2443);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp1 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"swapdiagonal"_j))));
	if (temp1 == 0) goto label_2;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i == 0) goto label_2;
	{
	LINE_NUMBER(2444);
	if ((frame[7].i) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	INST_ISTORE(7);
label_2:;
	{
	LINE_NUMBER(2447);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_swapDiagonalPlacement) == 0) goto label_6;
	}
	{
	LINE_NUMBER(2448);
	if ((frame[7].i) != 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	INST_ISTORE(7);
label_6:;
	{
	LINE_NUMBER(2451);
	frame[8].i = (jint(-1));
	LINE_NUMBER(2452);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	frame[9].o = sp[0].o;
	LINE_NUMBER(2453);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	frame[10].o = sp[0].o;
	LINE_NUMBER(2454);
	if ((frame[7].i) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_allowDiagonal) == 0) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(2455);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_world_blocks_distribution_ChainedBuilding)) == 0) goto label_15;
	}
	{
	if ((isInstance(ctx, (frame[10].o), &class_mindustry_world_blocks_distribution_ChainedBuilding)) == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_block;
	LINE_NUMBER(2456);
	jint temp0 = (jint)((func_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[9].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(2457);
	sp[0].o = (jobject)SM_mindustry_input_Placement_upgradeLine_int_int_int_int_R_arc_struct_Seq(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	frame[6].o = sp[0].o;
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(2459);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_conveyorPlacement) == 0) goto label_20;
	}
	INST_ICONST(1);
	goto label_21;
label_20:;
	INST_ICONST(0);
label_21:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_mindustry_input_Placement_pathfindLine_boolean_int_int_int_int_R_arc_struct_Seq(ctx, sp[0].i, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	frame[6].o = sp[0].o;
	goto label_19;
	}
label_13:;
	{
	LINE_NUMBER(2461);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_allowRectanglePlacement) == 0) goto label_23;
	}
	{
	LINE_NUMBER(2462);
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeRectangle_int_int_int_int_int_R_arc_struct_Seq(ctx, temp0, temp1, temp2, temp3, ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size));
	frame[6].o = sp[0].o;
	goto label_19;
	}
label_23:;
	{
	LINE_NUMBER(2464);
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeLine_int_int_int_int_R_arc_struct_Seq(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	frame[6].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(2466);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size) <= (jint(1))) goto label_26;
	}
	{
	if ((isInstance(ctx, (frame[10].o), &class_mindustry_world_blocks_distribution_ChainedBuilding)) == 0) goto label_26;
	}
	{
	LINE_NUMBER(2467);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size) - (jint(2))));
	frame[11].o = (checkCast(ctx, &class_arc_math_geom_Point2, sp[0].o));
	LINE_NUMBER(2468);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[11].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[11].o)))->F_y));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_distribution_ChainedBuilding)) != 0) goto label_26;
	}
	{
	LINE_NUMBER(2469);
	frame[8].i = ((jint)((mindustry_gen_Building *) NULL_CHECK((frame[10].o)))->F_rotation);
	}
label_26:;
	{
	LINE_NUMBER(2473);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(2474);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	((func_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean])(ctx, sp[0].o, (frame[6].o), ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation), (frame[7].i));
	}
label_30:;
	{
	LINE_NUMBER(2477);
	jfloat temp0 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat((frame[3].i))), (jfloat((frame[4].i))));
	frame[11].f = temp0;
	LINE_NUMBER(2478);
	frame[12].i = ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(2479);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overrideLineRotation) == 0) goto label_34;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_35;
label_34:;
	{
	LINE_NUMBER(2480);
	if ((frame[1].i) != (frame[3].i)) goto label_36;
	}
	{
	if ((frame[2].i) != (frame[4].i)) goto label_36;
	}
	{
	jint temp0 = (jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[0].i = temp0;
	sp += 1;
	goto label_37;
	}
label_36:;
	{
	jint temp0 = (jint((((frame[11].f) + (jfloat(45.0f))) / (jfloat(90.0f))))) % (jint(4));
	sp[0].i = temp0;
	sp += 1;
	}
label_37:;
	INST_ISTORE(12);
label_35:;
	{
	LINE_NUMBER(2483);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r3;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat(-1.0f)), (jfloat(-1.0f)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(2485);
	frame[13].i = (jint(0));
	}
label_39:;
	{
	if ((frame[13].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_40;
	}
	{
	LINE_NUMBER(2486);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), (frame[13].i));
	frame[14].o = (checkCast(ctx, &class_arc_math_geom_Point2, sp[0].o));
	LINE_NUMBER(2488);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_43;
	}
	{
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r2;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	jfloat temp0 = jfloat((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[14].o)))->F_x) * (8)));
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = jfloat((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[14].o)))->F_y) * (8)));
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r3;
	jint temp3 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp3 == 0) goto label_43;
	}
	LINE_NUMBER(2489);
	goto label_45;
label_43:;
	{
	LINE_NUMBER(2492);
	if ((frame[13].i) != (((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size) - (jint(1)))) goto label_46;
	}
	INST_ACONST_NULL();
	goto label_47;
label_46:;
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), ((frame[13].i) + (jint(1))));
	sp[0].o = checkCast(ctx, &class_arc_math_geom_Point2, sp[0].o);
	sp += 1;
	}
label_47:;
	{
	sp -= 1;
	frame[15].o = sp[0].o;
	LINE_NUMBER(2493);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_line;
	((mindustry_input_InputHandler$PlaceLine *) NULL_CHECK(sp[0].o))->F_x = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[14].o)))->F_x);
	LINE_NUMBER(2494);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_line;
	((mindustry_input_InputHandler$PlaceLine *) NULL_CHECK(sp[0].o))->F_y = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[14].o)))->F_y);
	LINE_NUMBER(2495);
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overrideLineRotation) == 0) goto label_51;
	}
	INST_ILOAD(7);
	if ((--sp)->i == 0) goto label_52;
label_51:;
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (sp[0].o == nullptr) goto label_53;
	}
	{
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ignoreLineRotation) == 0) goto label_53;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i == 0) goto label_52;
label_53:;
	{
	LINE_NUMBER(2496);
	frame[16].i = (frame[12].i);
	LINE_NUMBER(2497);
	if ((frame[15].o) == nullptr) goto label_55;
	}
	{
	LINE_NUMBER(2498);
	jint temp0 = (jint)SM_mindustry_world_Tile_relativeTo_int_int_int_int_R_byte(ctx, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[14].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[14].o)))->F_y), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[15].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[15].o)))->F_y));
	frame[16].i = temp0;
	goto label_57;
	}
label_55:;
	{
	LINE_NUMBER(2499);
	if ((frame[8].i) == (jint(-1))) goto label_58;
	}
	{
	LINE_NUMBER(2500);
	frame[16].i = (frame[8].i);
	goto label_57;
	}
label_58:;
	{
	LINE_NUMBER(2501);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_conveyorPlacement) == 0) goto label_57;
	}
	INST_ILOAD(13);
	if ((--sp)->i <= 0) goto label_57;
	{
	LINE_NUMBER(2502);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[6].o), ((frame[13].i) - (jint(1))));
	frame[17].o = (checkCast(ctx, &class_arc_math_geom_Point2, sp[0].o));
	LINE_NUMBER(2503);
	jint temp0 = (jint)SM_mindustry_world_Tile_relativeTo_int_int_int_int_R_byte(ctx, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[17].o)))->F_y), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[14].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[14].o)))->F_y));
	frame[16].i = temp0;
	}
label_57:;
	{
	LINE_NUMBER(2505);
	if ((frame[16].i) == (jint(-1))) goto label_62;
	}
	{
	LINE_NUMBER(2506);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_line;
	((mindustry_input_InputHandler$PlaceLine *) NULL_CHECK(sp[0].o))->F_rotation = (frame[16].i);
	}
label_62:;
	LINE_NUMBER(2508);
	goto label_64;
label_52:;
	{
	LINE_NUMBER(2509);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_line;
	((mindustry_input_InputHandler$PlaceLine *) NULL_CHECK(sp[0].o))->F_rotation = ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation);
	}
label_64:;
	{
	LINE_NUMBER(2511);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_line;
	sp += 1;
	if ((frame[15].o) != nullptr) goto label_65;
	}
	INST_ICONST(1);
	goto label_66;
label_65:;
	INST_ICONST(0);
label_66:;
	{
	sp -= 2;
	((mindustry_input_InputHandler$PlaceLine *) NULL_CHECK(sp[0].o))->F_last = sp[1].i;
	LINE_NUMBER(2512);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_line;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(2514);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r3;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	jfloat temp0 = jfloat((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[14].o)))->F_x) * (8)));
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = jfloat((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[14].o)))->F_y) * (8)));
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	}
label_45:;
	{
	LINE_NUMBER(2485);
	INST_IINC(13, 1);
	goto label_39;
	}
label_40:;
	LINE_NUMBER(2516);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$static$1_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$static$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2372);
	sp[0].o = frame[0].o;
	clinit_mindustry_input_InputHandler(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_vpIgnore;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_breaking) != 0) goto label_1;
	}
	{
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_vpBlock;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	LINE_NUMBER(2374);
	jint temp0 = (jint)((func_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x) != (clinit_mindustry_input_InputHandler(ctx), (jint)SF_mindustry_input_InputHandler_vpX)) goto label_3;
	}
	{
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y) == (clinit_mindustry_input_InputHandler(ctx), (jint)SF_mindustry_input_InputHandler_vpY)) goto label_1;
	}
label_3:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(2372);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$add$0_arc_input_InputProcessor_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$add$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2250);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_input_InputHandler)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_arc_input_GestureDetector)) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_input_GestureDetector_getListener_R_arc_input_GestureDetector$GestureListener) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_input_GestureDetector, (frame[0].o))))->vtable)[VTABLE_arc_input_GestureDetector_getListener_R_arc_input_GestureDetector$GestureListener])(ctx, (checkCast(ctx, &class_arc_input_GestureDetector, (frame[0].o))));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_input_InputHandler)) == 0) goto label_2;
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

jbool SM_mindustry_input_InputHandler_lambda$selectedCommandUnits$1_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$selectedCommandUnits$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2228);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$selectedCommandUnits$0_arc_func_Boolf_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$selectedCommandUnits$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2223);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isCommandable_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_2;
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

void SM_mindustry_input_InputHandler_lambda$selectedCommandBuildings$0_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$selectedCommandBuildings$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2211);
	jint temp0 = (jint)((func_mindustry_gen_Building_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_isCommandable_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2212);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_tmpBuildings;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(2214);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_input_InputHandler_lambda$selectedEnemyUnit$1_float_float_mindustry_gen_Unit_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$selectedEnemyUnit$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2202);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_dst_float_float_R_float])(ctx, (frame[2].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return (temp0 - (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize) / (jfloat(2))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$selectedEnemyUnit$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$selectedEnemyUnit$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2202);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_inFogTo_mindustry_game_Team_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jfloat SM_mindustry_input_InputHandler_lambda$selectedCommandUnit$1_float_float_mindustry_gen_Unit_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$selectedCommandUnit$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2188);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Unit_dst_float_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_dst_float_float_R_float])(ctx, (frame[2].o), (frame[0].f), (frame[1].f));
	popStackFrame(ctx);
	return (temp0 - (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize) / (jfloat(2))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$selectedCommandUnit$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$selectedCommandUnit$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2188);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isCommandable_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$selectedUnit$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$selectedUnit$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2158);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_isAI_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_playerControllable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_playerControllable_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
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

void M_mindustry_input_InputHandler_lambda$updateLine$1_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$updateLine$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1963);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	sp[0].o = (jobject)((func_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1964);
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNow_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_unlockedNow_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1965);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block = (jref) (frame[2].o);
	}
label_2:;
	LINE_NUMBER(1967);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$updateLine$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1955);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_rotation = ((jint)((mindustry_input_InputHandler$PlaceLine *) NULL_CHECK((frame[1].o)))->F_rotation);
	LINE_NUMBER(1956);
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	jint temp0 = (jint)((mindustry_input_InputHandler$PlaceLine *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_input_InputHandler$PlaceLine *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = (jint)((mindustry_input_InputHandler$PlaceLine *) NULL_CHECK((frame[1].o)))->F_rotation;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_block;
	sp[2].o = (jobject)((func_mindustry_world_Block_nextConfig_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_world_Block_nextConfig_R_java_lang_Object])(ctx, sp[2].o);
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1957);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_animScale = (jfloat(1));
	LINE_NUMBER(1958);
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_linePlans;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(1959);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$removeSelection$0_mindustry_world_Tile_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$removeSelection$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1902);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[1].o));
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

jbool SM_mindustry_input_InputHandler_lambda$getPlan$0_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$getPlan$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1655);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1656);
	sp[0].o = (jobject)((func_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_tile_R_mindustry_world_Tile])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1658);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1660);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_breaking) != 0) goto label_4;
	}
	{
	LINE_NUMBER(1661);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	LINE_NUMBER(1662);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(1664);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	LINE_NUMBER(1665);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r1;
	jfloat temp0 = (jfloat)((func_mindustry_world_Tile_worldx_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_worldx_R_float])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = (jfloat)((func_mindustry_world_Tile_worldy_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_worldy_R_float])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	}
label_7:;
	{
	LINE_NUMBER(1668);
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_r2;
	clinit_mindustry_input_InputHandler(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_r1;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$flipPlans$0_boolean_int_mindustry_entities_units_BuildPlan(jcontext ctx, jbool param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$flipPlans$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1609);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_breaking) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1611);
	if ((frame[0].i) == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_x;
	sp[0].i = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(2);
	sp[-1].i = ((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[-1].o))->F_y;
label_3:;
	{
	sp -= 1;
	jfloat temp0 = jfloat(((sp[0].i * (8)) - (frame[1].i)));
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	frame[3].f = ((-(temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset))) + (jfloat((frame[1].i))));
	LINE_NUMBER(1613);
	if ((frame[0].i) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1614);
	sp[0].o = frame[2].o;
	jfloat temp0 = frame[3].f;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x = (jint(((temp0 - ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)) / (jfloat(8.0f)))));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(1616);
	sp[0].o = frame[2].o;
	jfloat temp0 = frame[3].f;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y = (jint(((temp0 - ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)) / (jfloat(8.0f)))));
	}
label_7:;
	{
	LINE_NUMBER(1619);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_59);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (frame[0].i);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1630);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[2].o)))->F_block;
	((func_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean])(ctx, sp[0].o, (frame[2].o), (frame[0].i));
	LINE_NUMBER(1631);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$flipPlans$1_boolean_mindustry_entities_units_BuildPlan_arc_math_geom_Point2(jcontext ctx, jbool param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$flipPlans$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1620);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1621);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	if ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) % (jint(2))) != 0) goto label_3;
	}
	{
	sp[0].o = frame[2].o;
	((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x = (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x) - (jint(1)));
	}
label_3:;
	{
	LINE_NUMBER(1622);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x = (-((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(1624);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	if ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) % (jint(2))) != 0) goto label_5;
	}
	{
	sp[0].o = frame[2].o;
	((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y = (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y) - (jint(1)));
	}
label_5:;
	{
	LINE_NUMBER(1625);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y = (-((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y));
	}
label_4:;
	LINE_NUMBER(1627);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$rotatePlans$0_int_int_int_mindustry_entities_units_BuildPlan(jcontext ctx, jint param0, jint param1, jint param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$rotatePlans$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1571);
	if (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_breaking) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1573);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	if ((((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size) % (jint(2))) != 0) goto label_2;
	}
	(sp++)->f = jfloat(-0.5f);
	goto label_3;
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(1575);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_60);
		proxy->F_field1 = (frame[0].i);
		proxy->F_field0 = (frame[4].f);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_BuildPlan_pointConfig_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1590);
	jfloat temp0 = jfloat(((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_x) - (frame[1].i)) * (8)));
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	frame[5].f = (temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset));
	jfloat temp1 = jfloat(((((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_y) - (frame[2].i)) * (8)));
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	frame[6].f = (temp1 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset));
	LINE_NUMBER(1591);
	frame[7].f = (frame[5].f);
	LINE_NUMBER(1592);
	if ((frame[0].i) < 0) goto label_9;
	}
	{
	LINE_NUMBER(1593);
	frame[5].f = (-(frame[6].f));
	LINE_NUMBER(1594);
	frame[6].f = (frame[7].f);
	goto label_12;
	}
label_9:;
	{
	LINE_NUMBER(1596);
	frame[5].f = (frame[6].f);
	LINE_NUMBER(1597);
	frame[6].f = (-(frame[7].f));
	}
label_12:;
	{
	LINE_NUMBER(1599);
	sp[0].o = frame[3].o;
	jfloat temp0 = frame[5].f;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp0 - ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x = (temp1 + (frame[1].i));
	LINE_NUMBER(1600);
	sp[0].o = frame[3].o;
	jfloat temp2 = frame[6].f;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp2 - ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y = (temp3 + (frame[2].i));
	LINE_NUMBER(1601);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	jint temp4 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_rotation) + (frame[0].i)), (jint(4)));
	jint temp5 = (jint)((func_mindustry_world_Block_planRotation_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_planRotation_int_R_int])(ctx, sp[1].o, temp4);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_rotation = temp5;
	LINE_NUMBER(1602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$rotatePlans$1_float_int_arc_math_geom_Point2(jcontext ctx, jfloat param0, jint param1, jobject param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$rotatePlans$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].f = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1576);
	frame[3].f = ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x))) + (frame[0].f));
	frame[4].f = ((jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y))) + (frame[0].f));
	LINE_NUMBER(1577);
	frame[5].f = (frame[3].f);
	LINE_NUMBER(1579);
	if ((frame[1].i) < 0) goto label_4;
	}
	{
	LINE_NUMBER(1580);
	frame[3].f = (-(frame[4].f));
	LINE_NUMBER(1581);
	frame[4].f = (frame[5].f);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(1583);
	frame[3].f = (frame[4].f);
	LINE_NUMBER(1584);
	frame[4].f = (-(frame[5].f));
	}
label_7:;
	{
	LINE_NUMBER(1586);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, ((frame[3].f) - (frame[0].f)));
	jint temp1 = (jint)SM_arc_math_Mathf_floor_float_R_int(ctx, ((frame[4].f) - (frame[0].f)));
	sp[0].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(1587);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$showSchematicSave$0_mindustry_game_Schematic_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$showSchematicSave$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1549);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	sp[0].o = (jobject)((func_mindustry_game_Schematics_all_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_all_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_34(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_34 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_34);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Schematic, sp[0].o));
	LINE_NUMBER(1550);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1551);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@confirm"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@schematic.replace"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_java_lang_Runnable_16);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showConfirm_java_lang_String_java_lang_String_java_lang_Runnable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1557);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))), (frame[1].o));
	LINE_NUMBER(1558);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"description"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(1559);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	((func_mindustry_game_Schematics_add_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_add_mindustry_game_Schematic])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1560);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.saved"_j))));
	LINE_NUMBER(1561);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_schematics;
	((func_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1562);
	clinit_mindustry_game_EventType$SchematicCreateEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$SchematicCreateEvent);
	init_mindustry_game_EventType$SchematicCreateEvent_mindustry_game_Schematic(ctx, sp[0].o, (frame[0].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(1564);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$showSchematicSave$2_mindustry_game_Schematic_mindustry_game_Schematic(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$showSchematicSave$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1552);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	((func_mindustry_game_Schematics_overwrite_mindustry_game_Schematic_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_overwrite_mindustry_game_Schematic_mindustry_game_Schematic])(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1553);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@schematic.saved"_j))));
	LINE_NUMBER(1554);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_schematics;
	((func_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SchematicsDialog_showInfo_mindustry_game_Schematic])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(1555);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$showSchematicSave$1_java_lang_String_mindustry_game_Schematic_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$showSchematicSave$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1549);
	sp[0].o = (jobject)((func_mindustry_game_Schematic_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Schematic_name_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$0_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$drawOtherBuildPlans$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1400);
	sp[0].o = (jobject)((func_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_getPreviewPlans_R_arc_struct_Seq])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(1401);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, (frame[1].o));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1402);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(1403);
	popStackFrame(ctx);
	return;
	}
label_3:;
	{
	LINE_NUMBER(1406);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_previewPlanTree;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1407);
	sp[0].o = frame[1].o;
	clinit_arc_math_geom_QuadTree(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	sp[2].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_playerPlanTree;
	sp[2].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[2].o))->F_bounds;
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_previewPlanTree = (jref) sp[1].o;
	LINE_NUMBER(1408);
	sp[0].o = frame[1].o;
	clinit_mindustry_input_InputHandler$QueryEachable(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_input_InputHandler$QueryEachable);
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_previewPlanTree;
	sp[3].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (jint(0)));
	init_mindustry_input_InputHandler$QueryEachable_arc_math_geom_QuadTree_Array1_arc_struct_Seq(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_planEachable = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(1411);
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_previewPlansDirty) == 0) goto label_8;
	}
	{
	LINE_NUMBER(1412);
	((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_previewPlansDirty = (jint(0));
	LINE_NUMBER(1414);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1415);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_sameQuadPlan = (frame[4].o);
	LINE_NUMBER(1416);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_previewPlanTree;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[4].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[4].o));
	jfloat temp2 = jfloat(1);
	jfloat temp3 = jfloat(1);
	clinit_mindustry_input_InputHandler(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_sameQuadPlanFinder;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_units_BuildPlan, sp[0].o));
	LINE_NUMBER(1417);
	if ((frame[5].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(1418);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[4].o)))->F_animScale = ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[5].o)))->F_animScale);
	}
label_16:;
	LINE_NUMBER(1420);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(1421);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_previewPlanTree;
	((func_arc_math_geom_QuadTree_fill_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_fill_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_8:;
	{
	LINE_NUMBER(1424);
	jint temp0 = (jint)((func_mindustry_gen_Player_isBuilder_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_isBuilder_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_buildPlan_R_mindustry_entities_units_BuildPlan])(ctx, sp[0].o);
	sp += 1;
	goto label_19;
	}
label_18:;
	INST_ACONST_NULL();
label_19:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(1425);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1427);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[1].o)))->F_previewPlanTree;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r1;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[1].o, (jfloat(16.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Cons_61);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1438);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$drawOtherBuildPlans$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1428);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_units_BuildPlan_isDone_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_isDone_R_boolean])(ctx, (frame[3].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_2;
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_x), (jfloat(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_x))), -1)) != 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_y), (jfloat(((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_y))), -1)) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_activelyBuilding_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_activelyBuilding_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1430);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r2;
	jfloat temp0 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawx_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawx_R_float])(ctx, (frame[3].o));
	jfloat temp1 = (jfloat)((func_mindustry_entities_units_BuildPlan_drawy_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_entities_units_BuildPlan_drawy_R_float])(ctx, (frame[3].o));
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, (jfloat((((jint)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_size) * (8)))));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v3;
	jint temp2 = (jint)((func_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp2 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1431);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan = (jref) (frame[3].o);
	LINE_NUMBER(1432);
	((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlayer = (jref) (frame[2].o);
	}
label_3:;
	{
	LINE_NUMBER(1435);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_animScale), (jfloat(1)), (jfloat(0.2f)));
	((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_animScale = temp0;
	LINE_NUMBER(1436);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[3].o)))->F_block;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[2].o)))->F_planEachable;
	sp[3].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_overlappingPlan;
	sp += 3;
	if (sp[0].o != (frame[3].o)) goto label_7;
	}
	(sp++)->f = jfloat(0.7f);
	goto label_8;
label_7:;
	(sp++)->f = jfloat(0.25f);
label_8:;
	{
	sp -= 4;
	((func_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].f);
	LINE_NUMBER(1437);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$static$0_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$static$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1391);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	clinit_mindustry_input_InputHandler(ctx);
	sp[1].o = (jobject)SF_mindustry_input_InputHandler_sameQuadPlan;
	sp[1].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[1].o))->F_block;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_x;
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_sameQuadPlan;
	if (temp0 != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_x)) goto label_1;
	}
	{
	jint temp0 = (jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_mindustry_input_InputHandler(ctx);
	sp[0].o = (jobject)SF_mindustry_input_InputHandler_sameQuadPlan;
	if (temp0 != ((jint)((mindustry_entities_units_BuildPlan *) NULL_CHECK(sp[0].o))->F_y)) goto label_1;
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

jbool SM_mindustry_input_InputHandler_lambda$drawCommanded$3_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$drawCommanded$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1255);
	jint temp0 = (jint)((func_mindustry_gen_Unit_allowCommand_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_allowCommand_R_boolean])(ctx, (frame[0].o));
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

void M_mindustry_input_InputHandler_lambda$drawCommanded$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$drawCommanded$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1230);
	((func_mindustry_input_InputHandler_drawCommandedTargets) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawCommandedTargets])(ctx, (frame[0].o));
	LINE_NUMBER(1231);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_lambda$drawCommanded$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$drawCommanded$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1226);
	((func_mindustry_input_InputHandler_drawCommanded_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawCommanded_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(1227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_lambda$drawCommanded$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$drawCommanded$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1222);
	((func_mindustry_input_InputHandler_drawCommanded_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_drawCommanded_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(1223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_mindustry_input_InputHandler_lambda$commandTap$0_mindustry_gen_Building_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$commandTap$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1207);
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$selectTypedUnits$0_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$selectTypedUnits$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1133);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_type;
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

jbool SM_mindustry_input_InputHandler_lambda$tryPickupPayload$0_mindustry_gen_Payloadc_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$tryPickupPayload$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1052);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isAI_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_isGrounded_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_isGrounded_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_canPickup_mindustry_gen_Unit_R_boolean, (frame[0].o)))(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Unit_within_arc_math_geom_Position_float_R_boolean])(ctx, (frame[2].o), (frame[1].o), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[2].o)))->F_hitSize) + ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_hitSize)));
	if (temp0 == 0) goto label_1;
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

jbool M_mindustry_input_InputHandler_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$checkUnit$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1033);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlledType;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_dead) != 0) goto label_1;
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

jbool M_mindustry_input_InputHandler_lambda$update$1_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$update$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1019);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_controlledType;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Unit_playerControllable_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_playerControllable_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_dead) != 0) goto label_1;
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

jbool SM_mindustry_input_InputHandler_lambda$update$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$update$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(963);
	jint temp0 = (jint)((func_mindustry_gen_Building_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isCommandable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_isCommandable_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_team;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_player;
	sp[1].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[1].o);
	if (sp[0].o == sp[1].o) goto label_2;
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

void SM_mindustry_input_InputHandler_lambda$unitClear$0_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$unitClear$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	LINE_NUMBER(837);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$unitControl$1_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$unitControl$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(820);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_unitControl;
	((func_mindustry_entities_Effect_at_float_float_float_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_java_lang_Object])(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y), (jfloat(0)), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$unitControl$0_mindustry_gen_Unit_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$unitControl$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(788);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[1].o)))->F_unit = (jref) (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$buildingControlSelect$0_mindustry_gen_Building_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$buildingControlSelect$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(758);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK(sp[0].o))->F_tile = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$tileConfig$0_java_lang_Object_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$tileConfig$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(723);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[1].o)))->F_config = (jref) (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$rotateBlock$0_mindustry_gen_Building_boolean_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$rotateBlock$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(703);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_rotation;
	jint temp1 = (jint)SM_arc_math_Mathf_sign_boolean_R_int(ctx, (frame[1].i));
	jint temp2 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (temp0 + temp1), (jint(4)));
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK(sp[0].o))->F_rotation = temp2;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$requestDropPayload$0_mindustry_gen_Payloadc_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$requestDropPayload$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(638);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[0].o)))(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[1].o);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK(sp[0].o))->F_payload = (jref) (checkCast(ctx, &class_mindustry_world_blocks_payloads_Payload, sp[1].o));
	LINE_NUMBER(639);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$requestBuildPayload$0_mindustry_gen_Unit_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$requestBuildPayload$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(573);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[1].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(574);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$transferInventory$0_mindustry_gen_Player_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$transferInventory$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(530);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_stack;
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK(sp[0].o))->F_itemAmount = ((jint)((mindustry_type_ItemStack *) NULL_CHECK(sp[1].o))->F_amount);
	LINE_NUMBER(531);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_gen_Unit_item_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Unit_item_R_mindustry_type_Item])(ctx, sp[1].o);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK(sp[0].o))->F_item = (jref) sp[1].o;
	LINE_NUMBER(532);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$requestItem$0_mindustry_type_Item_int_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$requestItem$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(511);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[2].o)))->F_item = (jref) (frame[0].o);
	LINE_NUMBER(512);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[2].o)))->F_itemAmount = (frame[1].i);
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$commandBuilding$0_Array1_int_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$commandBuilding$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(483);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[1].o)))->F_buildingPositions = (jref) (frame[0].o);
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$setUnitStance$0_Array1_int_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$setUnitStance$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(459);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[1].o)))->F_unitIDs = (jref) (frame[0].o);
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$setUnitCommandChunked$0_mindustry_ai_UnitCommand_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$setUnitCommandChunked$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(451);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_setUnitCommand_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$setUnitStanceChunked$0_mindustry_ai_UnitStance_boolean_Array1_int(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$setUnitStanceChunked$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(447);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_gen_Call_setUnitStance_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean(ctx, sp[0].o, (frame[2].o), (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$setUnitCommand$0_Array1_int_mindustry_ai_UnitCommand_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$setUnitCommand$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(415);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[2].o)))->F_unitIDs = (jref) (frame[0].o);
	LINE_NUMBER(416);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[2].o)))->F_unitCommand = (jref) (frame[1].o);
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$commandUnits$0_Array1_int_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$commandUnits$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(314);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[1].o)))->F_unitIDs = (jref) (frame[0].o);
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$pingLocation$0_float_float_java_lang_String_mindustry_net_Administration$PlayerAction(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$pingLocation$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(288);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[3].o)))->F_pingX = (frame[0].f);
	LINE_NUMBER(289);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[3].o)))->F_pingY = (frame[1].f);
	LINE_NUMBER(290);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[3].o)))->F_pingText = (jref) (frame[2].o);
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$deletePlans$0_Array1_int_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$deletePlans$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(263);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[1].o)))->F_plans = (jref) (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$transferItemTo$0_mindustry_type_Item_int_float_float_mindustry_gen_Building(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$transferItemTo$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(254);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jfloat temp1 = frame[2].f;
	jfloat temp2 = frame[3].f;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_java_lang_Runnable_17);
		sp[2].o = (jobject) proxy;
	}
	SM_mindustry_input_InputHandler_createItemTransfer_mindustry_type_Item_int_float_float_arc_math_geom_Position_java_lang_Runnable(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$transferItemTo$1(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$transferItemTo$1", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	LINE_NUMBER(254);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$transferItemToUnit$0_mindustry_gen_Itemsc_mindustry_type_Item(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$transferItemToUnit$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(182);
	((func_mindustry_gen_Itemsc_addItem_mindustry_type_Item) resolveInterfaceMethod(ctx, &class_mindustry_gen_Itemsc, INDEX_mindustry_gen_Itemsc_addItem_mindustry_type_Item, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$takeItems$0_mindustry_type_Item_mindustry_gen_Building_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$takeItems$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(175);
	SM_mindustry_input_InputHandler_transferItemEffect_mindustry_type_Item_float_float_mindustry_gen_Itemsc(ctx, (frame[0].o), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_y), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_lambda$new$5_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$new$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	((func_mindustry_input_InputHandler_reset) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_reset])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_input_InputHandler_lambda$new$4_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$new$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(147);
	((func_mindustry_input_InputHandler_initQuadtrees) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_input_InputHandler_initQuadtrees])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_InputHandler_lambda$new$2_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$new$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[0].o)))->F_unit;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[0].o)))->F_unit;
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((func_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_getPlayer_R_mindustry_gen_Player])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[0].o)))->F_unit;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_weapons;
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_35(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_35 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_35);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting = (jint(0));
	}
label_1:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$new$3_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$new$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[0].o)))->F_bullet;
	popStackFrame(ctx);
	return ((jint)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_killShooter);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_input_InputHandler_lambda$new$1_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$new$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return ((jint)((mindustry_input_InputHandler *) NULL_CHECK((frame[0].o)))->F_logicCutscene);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_input_InputHandler_lambda$new$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	{
	LINE_NUMBER(86);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jint temp0 = (jint)((func_mindustry_core_Renderer_isCutscene_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_Renderer_isCutscene_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_input_InputHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_input_InputHandler_unitSelectRadScl = jfloat(1.0f);
	SF_mindustry_input_InputHandler_maxLength = jint(100);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/InputHandler:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_InputHandler(ctx);
	{
	LINE_NUMBER(52);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_queuedCommands = sp[0].o;
	LINE_NUMBER(55);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_2;
	}
	(sp++)->f = jfloat(17.0f);
	goto label_3;
label_2:;
	(sp++)->f = jfloat(11.0f);
label_3:;
	{
	sp -= 1;
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_playerSelectRange = sp[0].f;
	LINE_NUMBER(57);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_stancesOut = sp[0].o;
	LINE_NUMBER(58);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_removed = sp[0].o;
	LINE_NUMBER(59);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_intSet = sp[0].o;
	LINE_NUMBER(62);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_r1 = sp[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_r2 = sp[0].o;
	LINE_NUMBER(63);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[0].o, (jint(0)));
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_tmpUnits = sp[0].o;
	LINE_NUMBER(64);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[0].o, (jint(0)));
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_tmpBuildings = sp[0].o;
	LINE_NUMBER(65);
	sp[0].o = (jobject)createArray(ctx, &class_arc_input_KeyBind, (10));
	jint temp0 = jint(0);
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockSelect01;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockSelect02;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockSelect03;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockSelect04;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockSelect05;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockSelect06;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockSelect07;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockSelect08;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockSelect09;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_blockSelect10;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_controlGroupBindings = sp[0].o;
	LINE_NUMBER(1391);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_36(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_36 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_36);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_sameQuadPlanFinder = sp[0].o;
	LINE_NUMBER(2371);
	{ /* InvokeDynamic */
		clinit_mindustry_input_InputHandler_invoke_arc_func_Boolf_37(ctx);
		auto proxy = (mindustry_input_InputHandler_invoke_arc_func_Boolf_37 *) gcAlloc(ctx, &class_mindustry_input_InputHandler_invoke_arc_func_Boolf_37);
		sp[0].o = (jobject) proxy;
	}
	clinit_mindustry_input_InputHandler(ctx);
	SF_mindustry_input_InputHandler_vpPredicate = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_input_InputHandler;
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

	{ // Field block
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[19]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field controlledType
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[28]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastSchematic
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[30]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field lastUnit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[38]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field spectating
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[39]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Method getPlan
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[87]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method getPlan
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[88]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Method selectedUnit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[130]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method selectedControlBuild
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[131]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method selectedCommandUnit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[132]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method selectedEnemyUnit
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[133]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[173]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[174]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[175]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[176]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[177]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[178]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[179]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[180]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[181]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[182]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[183]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[184]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[185]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[186]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[187]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[188]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[189]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[190]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[191]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[192]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[193]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[194]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[195]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[196]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[197]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[198]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[199]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[200]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[201]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[202]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[203]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[204]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[205]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[206]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[207]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[208]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[209]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[210]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[211]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[212]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[213]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[214]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[215]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[216]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[217]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_input_InputHandler[] {
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
	(void *) M_arc_input_InputProcessor_keyDown_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_keyUp_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_keyTyped_char_R_boolean,
	(void *) M_arc_input_InputProcessor_touchDown_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_touchUp_int_int_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_InputProcessor_touchDragged_int_int_int_R_boolean,
	(void *) M_arc_input_InputProcessor_mouseMoved_int_int_R_boolean,
	(void *) M_arc_input_InputProcessor_scrolled_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_touchDown_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_tap_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_longPress_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_fling_float_float_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pan_float_float_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_panStop_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_zoom_float_float_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_input_GestureDetector$GestureListener_pinchStop,
	(void *) M_mindustry_input_InputHandler_initQuadtrees,
	(void *) M_mindustry_input_InputHandler_createPlanLists,
	(void *) M_mindustry_input_InputHandler_updateSelectQuadtree,
	(void *) M_mindustry_input_InputHandler_addLock_arc_func_Boolp,
	(void *) M_mindustry_input_InputHandler_locked_R_boolean,
	(void *) M_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable,
	(void *) M_mindustry_input_InputHandler_isUsingSchematic_R_boolean,
	(void *) M_mindustry_input_InputHandler_spectate_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_reset,
	(void *) M_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_update,
	(void *) M_mindustry_input_InputHandler_checkUnit,
	(void *) M_mindustry_input_InputHandler_tryPickupPayload,
	(void *) M_mindustry_input_InputHandler_tryDropPayload,
	(void *) M_mindustry_input_InputHandler_getMouseX_R_float,
	(void *) M_mindustry_input_InputHandler_getMouseY_R_float,
	(void *) M_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table,
	(void *) M_mindustry_input_InputHandler_buildUI_arc_scene_Group,
	(void *) M_mindustry_input_InputHandler_updateState,
	(void *) M_mindustry_input_InputHandler_multiUnitSelect_R_boolean,
	(void *) M_mindustry_input_InputHandler_selectUnitsRect,
	(void *) M_mindustry_input_InputHandler_selectTypedUnits,
	(void *) M_mindustry_input_InputHandler_tapCommandUnit,
	(void *) M_mindustry_input_InputHandler_commandTap_float_float,
	(void *) M_mindustry_input_InputHandler_commandTap_float_float_boolean,
	(void *) M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building,
	(void *) M_mindustry_input_InputHandler_drawCommanded,
	(void *) M_mindustry_input_InputHandler_drawCommandedTargets,
	(void *) M_mindustry_input_InputHandler_drawCommanded_boolean,
	(void *) M_mindustry_input_InputHandler_drawUnitSelection,
	(void *) M_mindustry_input_InputHandler_drawOtherBuildPlans,
	(void *) M_mindustry_input_InputHandler_drawBuildPlans,
	(void *) M_mindustry_input_InputHandler_drawBottom,
	(void *) M_mindustry_input_InputHandler_drawTop,
	(void *) M_mindustry_input_InputHandler_drawOverSelect,
	(void *) M_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color,
	(void *) M_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawOverlapCheck_mindustry_world_Block_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean,
	(void *) M_mindustry_input_InputHandler_drawBreaking_int_int,
	(void *) M_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic,
	(void *) nullptr,
	(void *) M_mindustry_input_InputHandler_showSchematicSave,
	(void *) M_mindustry_input_InputHandler_rotatePlans_arc_struct_Seq_int,
	(void *) M_mindustry_input_InputHandler_flipPlans_arc_struct_Seq_boolean,
	(void *) M_mindustry_input_InputHandler_schemOriginX_R_int,
	(void *) M_mindustry_input_InputHandler_schemOriginY_R_int,
	(void *) M_mindustry_input_InputHandler_getPlan_int_int_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_drawRebuildSelection_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean,
	(void *) M_mindustry_input_InputHandler_flushSelectPlans_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_flushPlansReverse_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_flushPlans_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_input_InputHandler_drawPlan_int_int_mindustry_world_Block_int,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int,
	(void *) M_mindustry_input_InputHandler_updateLine_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_updateLine_int_int,
	(void *) M_mindustry_input_InputHandler_checkConfigTap_R_boolean,
	(void *) M_mindustry_input_InputHandler_tileTapped_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryTapPlayer_float_float_R_boolean,
	(void *) M_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryBeginMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryStopMine_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryStopMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_input_InputHandler_tileAt_float_float_R_mindustry_world_Tile,
	(void *) M_mindustry_input_InputHandler_rawTileX_R_int,
	(void *) M_mindustry_input_InputHandler_rawTileY_R_int,
	(void *) M_mindustry_input_InputHandler_tileX_float_R_int,
	(void *) M_mindustry_input_InputHandler_tileY_float_R_int,
	(void *) M_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2,
	(void *) M_mindustry_input_InputHandler_selectedBlock_R_boolean,
	(void *) M_mindustry_input_InputHandler_isPlacing_R_boolean,
	(void *) M_mindustry_input_InputHandler_isBreaking_R_boolean,
	(void *) M_mindustry_input_InputHandler_isRebuildSelecting_R_boolean,
	(void *) M_mindustry_input_InputHandler_mouseAngle_float_float_R_float,
	(void *) M_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building,
	(void *) M_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit,
	(void *) M_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq,
	(void *) M_mindustry_input_InputHandler_remove,
	(void *) M_mindustry_input_InputHandler_add,
	(void *) M_mindustry_input_InputHandler_canShoot_R_boolean,
	(void *) M_mindustry_input_InputHandler_onConfigurable_R_boolean,
	(void *) M_mindustry_input_InputHandler_isDroppingItem_R_boolean,
	(void *) M_mindustry_input_InputHandler_canDropItem_R_boolean,
	(void *) M_mindustry_input_InputHandler_tryDropItems_mindustry_gen_Building_float_float,
	(void *) M_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean,
	(void *) M_mindustry_input_InputHandler_rebuildArea_int_int_int_int,
	(void *) M_mindustry_input_InputHandler_tryBreakBlock_int_int,
	(void *) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean,
	(void *) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean,
	(void *) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean,
	(void *) M_mindustry_input_InputHandler_validBreak_int_int_R_boolean,
	(void *) M_mindustry_input_InputHandler_breakBlock_int_int,
	(void *) M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int,
	(void *) M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean,
	(void *) M_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons,
	(void *) M_mindustry_input_InputHandler_lambda$updateLine$1_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine,
	(void *) M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$0_mindustry_gen_Player,
	(void *) M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_input_InputHandler_lambda$drawCommanded$2,
	(void *) M_mindustry_input_InputHandler_lambda$drawCommanded$1,
	(void *) M_mindustry_input_InputHandler_lambda$drawCommanded$0,
	(void *) M_mindustry_input_InputHandler_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_input_InputHandler_lambda$update$1_mindustry_gen_Unit_R_boolean,
	(void *) M_mindustry_input_InputHandler_lambda$new$5_mindustry_game_EventType$ResetEvent,
	(void *) M_mindustry_input_InputHandler_lambda$new$4_mindustry_game_EventType$WorldLoadEvent,
	(void *) M_mindustry_input_InputHandler_lambda$new$1_R_boolean,
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
	{ "keyDown", "(Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(C)Z" },
	{ "touchDown", "(IIILarc/input/KeyCode;)Z" },
	{ "touchUp", "(IIILarc/input/KeyCode;)Z" },
	{ "touchDragged", "(III)Z" },
	{ "mouseMoved", "(II)Z" },
	{ "scrolled", "(FF)Z" },
	{ "touchDown", "(FFILarc/input/KeyCode;)Z" },
	{ "tap", "(FFILarc/input/KeyCode;)Z" },
	{ "longPress", "(FF)Z" },
	{ "fling", "(FFLarc/input/KeyCode;)Z" },
	{ "pan", "(FFFF)Z" },
	{ "panStop", "(FFILarc/input/KeyCode;)Z" },
	{ "zoom", "(FF)Z" },
	{ "pinch", "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)Z" },
	{ "pinchStop", "()V" },
	{ "initQuadtrees", "()V" },
	{ "createPlanLists", "()V" },
	{ "updateSelectQuadtree", "()V" },
	{ "addLock", "(Larc/func/Boolp;)V" },
	{ "locked", "()Z" },
	{ "allPlans", "()Larc/util/Eachable;" },
	{ "isUsingSchematic", "()Z" },
	{ "spectate", "(Lmindustry/gen/Unit;)V" },
	{ "reset", "()V" },
	{ "getSyncedPlans", "(Larc/struct/Seq;)V" },
	{ "update", "()V" },
	{ "checkUnit", "()V" },
	{ "tryPickupPayload", "()V" },
	{ "tryDropPayload", "()V" },
	{ "getMouseX", "()F" },
	{ "getMouseY", "()F" },
	{ "buildPlacementUI", "(Larc/scene/ui/layout/Table;)V" },
	{ "buildUI", "(Larc/scene/Group;)V" },
	{ "updateState", "()V" },
	{ "multiUnitSelect", "()Z" },
	{ "selectUnitsRect", "()V" },
	{ "selectTypedUnits", "()V" },
	{ "tapCommandUnit", "()V" },
	{ "commandTap", "(FF)V" },
	{ "commandTap", "(FFZ)V" },
	{ "drawCommand", "(Lmindustry/gen/Unit;)V" },
	{ "drawCommand", "(Lmindustry/gen/Building;)V" },
	{ "drawCommanded", "()V" },
	{ "drawCommandedTargets", "()V" },
	{ "drawCommanded", "(Z)V" },
	{ "drawUnitSelection", "()V" },
	{ "drawOtherBuildPlans", "()V" },
	{ "drawBuildPlans", "()V" },
	{ "drawBottom", "()V" },
	{ "drawTop", "()V" },
	{ "drawOverSelect", "()V" },
	{ "drawSelected", "(IILmindustry/world/Block;Larc/graphics/Color;)V" },
	{ "drawBreaking", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawOverlapCheck", "(Lmindustry/world/Block;IIZ)V" },
	{ "planMatches", "(Lmindustry/entities/units/BuildPlan;)Z" },
	{ "drawBreaking", "(II)V" },
	{ "useSchematic", "(Lmindustry/game/Schematic;)V" },
	{ "useSchematic", "(Lmindustry/game/Schematic;Z)V" },
	{ "showSchematicSave", "()V" },
	{ "rotatePlans", "(Larc/struct/Seq;I)V" },
	{ "flipPlans", "(Larc/struct/Seq;Z)V" },
	{ "schemOriginX", "()I" },
	{ "schemOriginY", "()I" },
	{ "getPlan", "(II)Lmindustry/entities/units/BuildPlan;" },
	{ "getPlan", "(IIILmindustry/entities/units/BuildPlan;)Lmindustry/entities/units/BuildPlan;" },
	{ "drawBreakSelection", "(IIIII)V" },
	{ "drawBreakSelection", "(IIIIIZ)V" },
	{ "drawRebuildSelection", "(IIII)V" },
	{ "drawBreakSelection", "(IIII)V" },
	{ "drawSelection", "(IIIII)V" },
	{ "drawSelection", "(IIIIILarc/graphics/Color;Larc/graphics/Color;Z)V" },
	{ "flushSelectPlans", "(Larc/struct/Seq;)V" },
	{ "flushPlansReverse", "(Larc/struct/Seq;)V" },
	{ "flushPlans", "(Larc/struct/Seq;)V" },
	{ "drawOverPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawOverPlan", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "drawPlan", "(IILmindustry/world/Block;I)V" },
	{ "removeSelection", "(IIII)V" },
	{ "removeSelection", "(IIIII)V" },
	{ "removeSelection", "(IIIIZ)V" },
	{ "removeSelection", "(IIIIZI)V" },
	{ "updateLine", "(IIII)V" },
	{ "updateLine", "(II)V" },
	{ "checkConfigTap", "()Z" },
	{ "tileTapped", "(Lmindustry/gen/Building;)Z" },
	{ "tryTapPlayer", "(FF)Z" },
	{ "canTapPlayer", "(FF)Z" },
	{ "tryBeginMine", "(Lmindustry/world/Tile;)Z" },
	{ "tryStopMine", "()Z" },
	{ "tryStopMine", "(Lmindustry/world/Tile;)Z" },
	{ "tryRepairDerelict", "(Lmindustry/world/Tile;)Z" },
	{ "canRepairDerelict", "(Lmindustry/world/Tile;)Z" },
	{ "canMine", "(Lmindustry/world/Tile;)Z" },
	{ "tileAt", "(FF)Lmindustry/world/Tile;" },
	{ "rawTileX", "()I" },
	{ "rawTileY", "()I" },
	{ "tileX", "(F)I" },
	{ "tileY", "(F)I" },
	{ "panCamera", "(Larc/math/geom/Vec2;)V" },
	{ "selectedBlock", "()Z" },
	{ "isPlacing", "()Z" },
	{ "isBreaking", "()Z" },
	{ "isRebuildSelecting", "()Z" },
	{ "mouseAngle", "(FF)F" },
	{ "selectedUnit", "()Lmindustry/gen/Unit;" },
	{ "selectedControlBuild", "()Lmindustry/gen/Building;" },
	{ "selectedCommandUnit", "(FF)Lmindustry/gen/Unit;" },
	{ "selectedEnemyUnit", "(FF)Lmindustry/gen/Unit;" },
	{ "selectedCommandBuildings", "(FFFF)Larc/struct/Seq;" },
	{ "selectedCommandUnits", "(FFFFLarc/func/Boolf;)Larc/struct/Seq;" },
	{ "selectedCommandUnits", "(FFFF)Larc/struct/Seq;" },
	{ "remove", "()V" },
	{ "add", "()V" },
	{ "canShoot", "()Z" },
	{ "onConfigurable", "()Z" },
	{ "isDroppingItem", "()Z" },
	{ "canDropItem", "()Z" },
	{ "tryDropItems", "(Lmindustry/gen/Building;FF)V" },
	{ "canDepositItem", "(Lmindustry/gen/Building;)Z" },
	{ "rebuildArea", "(IIII)V" },
	{ "tryBreakBlock", "(II)V" },
	{ "validPlace", "(IILmindustry/world/Block;I)Z" },
	{ "validPlace", "(IILmindustry/world/Block;ILmindustry/entities/units/BuildPlan;)Z" },
	{ "validPlace", "(IILmindustry/world/Block;ILmindustry/entities/units/BuildPlan;Z)Z" },
	{ "validBreak", "(II)Z" },
	{ "breakBlock", "(II)V" },
	{ "drawArrow", "(Lmindustry/world/Block;III)V" },
	{ "drawArrow", "(Lmindustry/world/Block;IIIZ)V" },
	{ "iterateLine", "(IIIILarc/func/Cons;)V" },
	{ "lambda$updateLine$1", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "lambda$updateLine$0", "(Lmindustry/input/InputHandler$PlaceLine;)V" },
	{ "lambda$drawOtherBuildPlans$0", "(Lmindustry/gen/Player;)V" },
	{ "lambda$drawOtherBuildPlans$1", "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Player;Lmindustry/entities/units/BuildPlan;)V" },
	{ "lambda$drawCommanded$2", "()V" },
	{ "lambda$drawCommanded$1", "()V" },
	{ "lambda$drawCommanded$0", "()V" },
	{ "lambda$checkUnit$0", "(Lmindustry/gen/Unit;)Z" },
	{ "lambda$update$1", "(Lmindustry/gen/Unit;)Z" },
	{ "lambda$new$5", "(Lmindustry/game/EventType$ResetEvent;)V" },
	{ "lambda$new$4", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
	{ "lambda$new$1", "()Z" },
};

static jclass interfaces[] { &class_arc_input_InputProcessor, &class_arc_input_GestureDetector$GestureListener, };

static jclass innerClasses[] {
	&class_mindustry_input_InputHandler$PlaceLine,
	&class_mindustry_input_InputHandler$QueryEachable,
};

static FieldMetadata fields[] {
	{ "queuedCommands", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_input_InputHandler_queuedCommands, "Larc/struct/ObjectMap;", 8 },
	{ "playerSelectRange", &class_float, (intptr_t) &SF_mindustry_input_InputHandler_playerSelectRange, "F", 24 },
	{ "unitSelectRadScl", &class_float, (intptr_t) &SF_mindustry_input_InputHandler_unitSelectRadScl, "F", 24 },
	{ "stancesOut", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_input_InputHandler_stancesOut, "Larc/struct/Seq;", 24 },
	{ "removed", &class_arc_struct_IntSeq, (intptr_t) &SF_mindustry_input_InputHandler_removed, "Larc/struct/IntSeq;", 24 },
	{ "intSet", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_input_InputHandler_intSet, "Larc/struct/IntSet;", 24 },
	{ "maxLength", &class_int, (intptr_t) &SF_mindustry_input_InputHandler_maxLength, "I", 24 },
	{ "r1", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_input_InputHandler_r1, "Larc/math/geom/Rect;", 24 },
	{ "r2", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_input_InputHandler_r2, "Larc/math/geom/Rect;", 24 },
	{ "tmpUnits", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_input_InputHandler_tmpUnits, "Larc/struct/Seq;", 24 },
	{ "tmpBuildings", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_input_InputHandler_tmpBuildings, "Larc/struct/Seq;", 24 },
	{ "controlGroupBindings", getArrayClass(&class_arc_input_KeyBind, 1), (intptr_t) &SF_mindustry_input_InputHandler_controlGroupBindings, "[Larc/input/KeyBind;", 24 },
	{ "logicCutscene", &class_boolean, offsetof(mindustry_input_InputHandler, F_logicCutscene), "Z", 1 },
	{ "logicHideHud", &class_boolean, offsetof(mindustry_input_InputHandler, F_logicHideHud), "Z", 1 },
	{ "logicCamPan", &class_arc_math_geom_Vec2, offsetof(mindustry_input_InputHandler, F_logicCamPan), "Larc/math/geom/Vec2;", 1 },
	{ "logicCamSpeed", &class_float, offsetof(mindustry_input_InputHandler, F_logicCamSpeed), "F", 1 },
	{ "logicCutsceneZoom", &class_float, offsetof(mindustry_input_InputHandler, F_logicCutsceneZoom), "F", 1 },
	{ "inputLocks", &class_arc_struct_Seq, offsetof(mindustry_input_InputHandler, F_inputLocks), "Larc/struct/Seq;", 1 },
	{ "controlInterval", &class_arc_util_Interval, offsetof(mindustry_input_InputHandler, F_controlInterval), "Larc/util/Interval;", 1 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_input_InputHandler, F_block), "Lmindustry/world/Block;", 1 },
	{ "overrideLineRotation", &class_boolean, offsetof(mindustry_input_InputHandler, F_overrideLineRotation), "Z", 1 },
	{ "rotation", &class_int, offsetof(mindustry_input_InputHandler, F_rotation), "I", 1 },
	{ "droppingItem", &class_boolean, offsetof(mindustry_input_InputHandler, F_droppingItem), "Z", 1 },
	{ "itemDepositCooldown", &class_float, offsetof(mindustry_input_InputHandler, F_itemDepositCooldown), "F", 1 },
	{ "uiGroup", &class_arc_scene_Group, offsetof(mindustry_input_InputHandler, F_uiGroup), "Larc/scene/Group;", 1 },
	{ "isBuilding", &class_boolean, offsetof(mindustry_input_InputHandler, F_isBuilding), "Z", 1 },
	{ "buildWasAutoPaused", &class_boolean, offsetof(mindustry_input_InputHandler, F_buildWasAutoPaused), "Z", 1 },
	{ "wasShooting", &class_boolean, offsetof(mindustry_input_InputHandler, F_wasShooting), "Z", 1 },
	{ "controlledType", &class_mindustry_type_UnitType, offsetof(mindustry_input_InputHandler, F_controlledType), "Lmindustry/type/UnitType;", 1 },
	{ "recentRespawnTimer", &class_float, offsetof(mindustry_input_InputHandler, F_recentRespawnTimer), "F", 1 },
	{ "lastSchematic", &class_mindustry_game_Schematic, offsetof(mindustry_input_InputHandler, F_lastSchematic), "Lmindustry/game/Schematic;", 1 },
	{ "detector", &class_arc_input_GestureDetector, offsetof(mindustry_input_InputHandler, F_detector), "Larc/input/GestureDetector;", 1 },
	{ "line", &class_mindustry_input_InputHandler$PlaceLine, offsetof(mindustry_input_InputHandler, F_line), "Lmindustry/input/InputHandler$PlaceLine;", 1 },
	{ "resultplan", &class_mindustry_entities_units_BuildPlan, offsetof(mindustry_input_InputHandler, F_resultplan), "Lmindustry/entities/units/BuildPlan;", 1 },
	{ "bplan", &class_mindustry_entities_units_BuildPlan, offsetof(mindustry_input_InputHandler, F_bplan), "Lmindustry/entities/units/BuildPlan;", 1 },
	{ "linePlans", &class_arc_struct_Seq, offsetof(mindustry_input_InputHandler, F_linePlans), "Larc/struct/Seq;", 1 },
	{ "selectPlans", &class_arc_struct_Seq, offsetof(mindustry_input_InputHandler, F_selectPlans), "Larc/struct/Seq;", 1 },
	{ "lastPlans", &class_arc_struct_Queue, offsetof(mindustry_input_InputHandler, F_lastPlans), "Larc/struct/Queue;", 1 },
	{ "lastUnit", &class_mindustry_gen_Unit, offsetof(mindustry_input_InputHandler, F_lastUnit), "Lmindustry/gen/Unit;", 1 },
	{ "spectating", &class_mindustry_gen_Unit, offsetof(mindustry_input_InputHandler, F_spectating), "Lmindustry/gen/Unit;", 1 },
	{ "selectedUnits", &class_arc_struct_Seq, offsetof(mindustry_input_InputHandler, F_selectedUnits), "Larc/struct/Seq;", 1 },
	{ "commandBuildings", &class_arc_struct_Seq, offsetof(mindustry_input_InputHandler, F_commandBuildings), "Larc/struct/Seq;", 1 },
	{ "commandMode", &class_boolean, offsetof(mindustry_input_InputHandler, F_commandMode), "Z", 1 },
	{ "commandRect", &class_boolean, offsetof(mindustry_input_InputHandler, F_commandRect), "Z", 1 },
	{ "tappedOne", &class_boolean, offsetof(mindustry_input_InputHandler, F_tappedOne), "Z", 1 },
	{ "commandRectX", &class_float, offsetof(mindustry_input_InputHandler, F_commandRectX), "F", 1 },
	{ "commandRectY", &class_float, offsetof(mindustry_input_InputHandler, F_commandRectY), "F", 1 },
	{ "controlGroups", getArrayClass(&class_arc_struct_IntSeq, 1), offsetof(mindustry_input_InputHandler, F_controlGroups), "[Larc/struct/IntSeq;", 1 },
	{ "plansOut", &class_arc_struct_Seq, offsetof(mindustry_input_InputHandler, F_plansOut), "Larc/struct/Seq;", 2 },
	{ "playerPlanTree", &class_arc_math_geom_QuadTree, offsetof(mindustry_input_InputHandler, F_playerPlanTree), "Larc/math/geom/QuadTree;", 2 },
	{ "selectPlanTree", &class_arc_math_geom_QuadTree, offsetof(mindustry_input_InputHandler, F_selectPlanTree), "Larc/math/geom/QuadTree;", 2 },
	{ "inv", &class_mindustry_ui_fragments_BlockInventoryFragment, offsetof(mindustry_input_InputHandler, F_inv), "Lmindustry/ui/fragments/BlockInventoryFragment;", 17 },
	{ "config", &class_mindustry_ui_fragments_BlockConfigFragment, offsetof(mindustry_input_InputHandler, F_config), "Lmindustry/ui/fragments/BlockConfigFragment;", 17 },
	{ "planConfig", &class_mindustry_ui_fragments_PlanConfigFragment, offsetof(mindustry_input_InputHandler, F_planConfig), "Lmindustry/ui/fragments/PlanConfigFragment;", 17 },
	{ "group", &class_arc_scene_ui_layout_WidgetGroup, offsetof(mindustry_input_InputHandler, F_group), "Larc/scene/ui/layout/WidgetGroup;", 2 },
	{ "overlappingPlan", &class_mindustry_entities_units_BuildPlan, offsetof(mindustry_input_InputHandler, F_overlappingPlan), "Lmindustry/entities/units/BuildPlan;", 2 },
	{ "overlappingPlayer", &class_mindustry_gen_Player, offsetof(mindustry_input_InputHandler, F_overlappingPlayer), "Lmindustry/gen/Player;", 2 },
	{ "allPlans", &class_arc_util_Eachable, offsetof(mindustry_input_InputHandler, F_allPlans), "Larc/util/Eachable;", 4 },
	{ "allSelectLines", &class_arc_util_Eachable, offsetof(mindustry_input_InputHandler, F_allSelectLines), "Larc/util/Eachable;", 4 },
	{ "allRenderPlansConfig", &class_arc_util_Eachable, offsetof(mindustry_input_InputHandler, F_allRenderPlansConfig), "Larc/util/Eachable;", 4 },
	{ "sameQuadPlan", &class_mindustry_entities_units_BuildPlan, (intptr_t) &SF_mindustry_input_InputHandler_sameQuadPlan, "Lmindustry/entities/units/BuildPlan;", 10 },
	{ "sameQuadPlanFinder", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_input_InputHandler_sameQuadPlanFinder, "Larc/func/Boolf;", 26 },
	{ "vpIgnore", &class_mindustry_entities_units_BuildPlan, (intptr_t) &SF_mindustry_input_InputHandler_vpIgnore, "Lmindustry/entities/units/BuildPlan;", 10 },
	{ "vpBlock", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_input_InputHandler_vpBlock, "Lmindustry/world/Block;", 10 },
	{ "vpX", &class_int, (intptr_t) &SF_mindustry_input_InputHandler_vpX, "I", 10 },
	{ "vpY", &class_int, (intptr_t) &SF_mindustry_input_InputHandler_vpY, "I", 10 },
	{ "vpPredicate", &class_arc_func_Boolf, (intptr_t) &SF_mindustry_input_InputHandler_vpPredicate, "Larc/func/Boolf;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_input_InputHandler, 0, "()V", 1 },
	{ "initQuadtrees", (intptr_t) M_mindustry_input_InputHandler_initQuadtrees, VTABLE_mindustry_input_InputHandler_initQuadtrees, "()V", 4 },
	{ "transferItemEffect", (intptr_t) SM_mindustry_input_InputHandler_transferItemEffect_mindustry_type_Item_float_float_mindustry_gen_Itemsc, 0, "(Lmindustry/type/Item;FFLmindustry/gen/Itemsc;)V", 9 },
	{ "takeItems", (intptr_t) SM_mindustry_input_InputHandler_takeItems_mindustry_gen_Building_mindustry_type_Item_int_mindustry_gen_Unit, 0, "(Lmindustry/gen/Building;Lmindustry/type/Item;ILmindustry/gen/Unit;)V", 9 },
	{ "transferItemToUnit", (intptr_t) SM_mindustry_input_InputHandler_transferItemToUnit_mindustry_type_Item_float_float_mindustry_gen_Itemsc, 0, "(Lmindustry/type/Item;FFLmindustry/gen/Itemsc;)V", 9 },
	{ "setItem", (intptr_t) SM_mindustry_input_InputHandler_setItem_mindustry_gen_Building_mindustry_type_Item_int, 0, "(Lmindustry/gen/Building;Lmindustry/type/Item;I)V", 9 },
	{ "setItems", (intptr_t) SM_mindustry_input_InputHandler_setItems_mindustry_gen_Building_Array1_mindustry_type_ItemStack, 0, "(Lmindustry/gen/Building;[Lmindustry/type/ItemStack;)V", 9 },
	{ "setTileItems", (intptr_t) SM_mindustry_input_InputHandler_setTileItems_mindustry_type_Item_int_Array1_int, 0, "(Lmindustry/type/Item;I[I)V", 9 },
	{ "clearItems", (intptr_t) SM_mindustry_input_InputHandler_clearItems_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 9 },
	{ "setLiquid", (intptr_t) SM_mindustry_input_InputHandler_setLiquid_mindustry_gen_Building_mindustry_type_Liquid_float, 0, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V", 9 },
	{ "setLiquids", (intptr_t) SM_mindustry_input_InputHandler_setLiquids_mindustry_gen_Building_Array1_mindustry_type_LiquidStack, 0, "(Lmindustry/gen/Building;[Lmindustry/type/LiquidStack;)V", 9 },
	{ "setTileLiquids", (intptr_t) SM_mindustry_input_InputHandler_setTileLiquids_mindustry_type_Liquid_float_Array1_int, 0, "(Lmindustry/type/Liquid;F[I)V", 9 },
	{ "clearLiquids", (intptr_t) SM_mindustry_input_InputHandler_clearLiquids_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 9 },
	{ "transferItemTo", (intptr_t) SM_mindustry_input_InputHandler_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building, 0, "(Lmindustry/gen/Unit;Lmindustry/type/Item;IFFLmindustry/gen/Building;)V", 9 },
	{ "deletePlans", (intptr_t) SM_mindustry_input_InputHandler_deletePlans_mindustry_gen_Player_Array1_int, 0, "(Lmindustry/gen/Player;[I)V", 9 },
	{ "pingLocation", (intptr_t) SM_mindustry_input_InputHandler_pingLocation_mindustry_gen_Player_float_float_java_lang_String, 0, "(Lmindustry/gen/Player;FFLjava/lang/String;)V", 9 },
	{ "createItemTransfer", (intptr_t) SM_mindustry_input_InputHandler_createItemTransfer_mindustry_type_Item_int_float_float_arc_math_geom_Position_java_lang_Runnable, 0, "(Lmindustry/type/Item;IFFLarc/math/geom/Position;Ljava/lang/Runnable;)V", 9 },
	{ "commandUnits", (intptr_t) SM_mindustry_input_InputHandler_commandUnits_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean, 0, "(Lmindustry/gen/Player;[ILmindustry/gen/Building;Lmindustry/gen/Unit;Larc/math/geom/Vec2;ZZ)V", 9 },
	{ "setUnitCommand", (intptr_t) SM_mindustry_input_InputHandler_setUnitCommand_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand, 0, "(Lmindustry/gen/Player;[ILmindustry/ai/UnitCommand;)V", 9 },
	{ "setUnitStanceChunked", (intptr_t) SM_mindustry_input_InputHandler_setUnitStanceChunked_arc_struct_IntSeq_mindustry_ai_UnitStance_boolean, 0, "(Larc/struct/IntSeq;Lmindustry/ai/UnitStance;Z)V", 9 },
	{ "setUnitCommandChunked", (intptr_t) SM_mindustry_input_InputHandler_setUnitCommandChunked_arc_struct_IntSeq_mindustry_ai_UnitCommand, 0, "(Larc/struct/IntSeq;Lmindustry/ai/UnitCommand;)V", 9 },
	{ "setUnitStance", (intptr_t) SM_mindustry_input_InputHandler_setUnitStance_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean, 0, "(Lmindustry/gen/Player;[ILmindustry/ai/UnitStance;Z)V", 9 },
	{ "commandBuilding", (intptr_t) SM_mindustry_input_InputHandler_commandBuilding_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2, 0, "(Lmindustry/gen/Player;[ILarc/math/geom/Vec2;)V", 9 },
	{ "requestItem", (intptr_t) SM_mindustry_input_InputHandler_requestItem_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;Lmindustry/type/Item;I)V", 9 },
	{ "transferInventory", (intptr_t) SM_mindustry_input_InputHandler_transferInventory_mindustry_gen_Player_mindustry_gen_Building, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;)V", 9 },
	{ "removeQueueBlock", (intptr_t) SM_mindustry_input_InputHandler_removeQueueBlock_int_int_boolean, 0, "(IIZ)V", 9 },
	{ "requestUnitPayload", (intptr_t) SM_mindustry_input_InputHandler_requestUnitPayload_mindustry_gen_Player_mindustry_gen_Unit, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Unit;)V", 9 },
	{ "requestBuildPayload", (intptr_t) SM_mindustry_input_InputHandler_requestBuildPayload_mindustry_gen_Player_mindustry_gen_Building, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;)V", 9 },
	{ "pickedUnitPayload", (intptr_t) SM_mindustry_input_InputHandler_pickedUnitPayload_mindustry_gen_Unit_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;)V", 9 },
	{ "pickedBuildPayload", (intptr_t) SM_mindustry_input_InputHandler_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;Z)V", 9 },
	{ "requestDropPayload", (intptr_t) SM_mindustry_input_InputHandler_requestDropPayload_mindustry_gen_Player_float_float, 0, "(Lmindustry/gen/Player;FF)V", 9 },
	{ "payloadDropped", (intptr_t) SM_mindustry_input_InputHandler_payloadDropped_mindustry_gen_Unit_float_float, 0, "(Lmindustry/gen/Unit;FF)V", 9 },
	{ "unitEnteredPayload", (intptr_t) SM_mindustry_input_InputHandler_unitEnteredPayload_mindustry_gen_Unit_mindustry_gen_Building, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 9 },
	{ "dropItem", (intptr_t) SM_mindustry_input_InputHandler_dropItem_mindustry_gen_Player_float, 0, "(Lmindustry/gen/Player;F)V", 9 },
	{ "rotateBlock", (intptr_t) SM_mindustry_input_InputHandler_rotateBlock_mindustry_gen_Player_mindustry_gen_Building_boolean, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;Z)V", 9 },
	{ "tileConfig", (intptr_t) SM_mindustry_input_InputHandler_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;Ljava/lang/Object;)V", 9 },
	{ "tileTap", (intptr_t) SM_mindustry_input_InputHandler_tileTap_mindustry_gen_Player_mindustry_world_Tile, 0, "(Lmindustry/gen/Player;Lmindustry/world/Tile;)V", 9 },
	{ "buildingControlSelect", (intptr_t) SM_mindustry_input_InputHandler_buildingControlSelect_mindustry_gen_Player_mindustry_gen_Building, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;)V", 9 },
	{ "unitBuildingControlSelect", (intptr_t) SM_mindustry_input_InputHandler_unitBuildingControlSelect_mindustry_gen_Unit_mindustry_gen_Building, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 9 },
	{ "unitControl", (intptr_t) SM_mindustry_input_InputHandler_unitControl_mindustry_gen_Player_mindustry_gen_Unit, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Unit;)V", 9 },
	{ "unitClear", (intptr_t) SM_mindustry_input_InputHandler_unitClear_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 9 },
	{ "createPlanLists", (intptr_t) M_mindustry_input_InputHandler_createPlanLists, VTABLE_mindustry_input_InputHandler_createPlanLists, "()V", 4 },
	{ "updateSelectQuadtree", (intptr_t) M_mindustry_input_InputHandler_updateSelectQuadtree, VTABLE_mindustry_input_InputHandler_updateSelectQuadtree, "()V", 1 },
	{ "addLock", (intptr_t) M_mindustry_input_InputHandler_addLock_arc_func_Boolp, VTABLE_mindustry_input_InputHandler_addLock_arc_func_Boolp, "(Larc/func/Boolp;)V", 1 },
	{ "locked", (intptr_t) M_mindustry_input_InputHandler_locked_R_boolean, VTABLE_mindustry_input_InputHandler_locked_R_boolean, "()Z", 1 },
	{ "allPlans", (intptr_t) M_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable, VTABLE_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable, "()Larc/util/Eachable;", 1 },
	{ "isUsingSchematic", (intptr_t) M_mindustry_input_InputHandler_isUsingSchematic_R_boolean, VTABLE_mindustry_input_InputHandler_isUsingSchematic_R_boolean, "()Z", 1 },
	{ "spectate", (intptr_t) M_mindustry_input_InputHandler_spectate_mindustry_gen_Unit, VTABLE_mindustry_input_InputHandler_spectate_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "reset", (intptr_t) M_mindustry_input_InputHandler_reset, VTABLE_mindustry_input_InputHandler_reset, "()V", 1 },
	{ "getSyncedPlans", (intptr_t) M_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq, VTABLE_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "update", (intptr_t) M_mindustry_input_InputHandler_update, VTABLE_mindustry_input_InputHandler_update, "()V", 1 },
	{ "checkUnit", (intptr_t) M_mindustry_input_InputHandler_checkUnit, VTABLE_mindustry_input_InputHandler_checkUnit, "()V", 1 },
	{ "tryPickupPayload", (intptr_t) M_mindustry_input_InputHandler_tryPickupPayload, VTABLE_mindustry_input_InputHandler_tryPickupPayload, "()V", 1 },
	{ "tryDropPayload", (intptr_t) M_mindustry_input_InputHandler_tryDropPayload, VTABLE_mindustry_input_InputHandler_tryDropPayload, "()V", 1 },
	{ "getMouseX", (intptr_t) M_mindustry_input_InputHandler_getMouseX_R_float, VTABLE_mindustry_input_InputHandler_getMouseX_R_float, "()F", 1 },
	{ "getMouseY", (intptr_t) M_mindustry_input_InputHandler_getMouseY_R_float, VTABLE_mindustry_input_InputHandler_getMouseY_R_float, "()F", 1 },
	{ "buildPlacementUI", (intptr_t) M_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table, VTABLE_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "buildUI", (intptr_t) M_mindustry_input_InputHandler_buildUI_arc_scene_Group, VTABLE_mindustry_input_InputHandler_buildUI_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "updateState", (intptr_t) M_mindustry_input_InputHandler_updateState, VTABLE_mindustry_input_InputHandler_updateState, "()V", 1 },
	{ "multiUnitSelect", (intptr_t) M_mindustry_input_InputHandler_multiUnitSelect_R_boolean, VTABLE_mindustry_input_InputHandler_multiUnitSelect_R_boolean, "()Z", 1 },
	{ "selectUnitsRect", (intptr_t) M_mindustry_input_InputHandler_selectUnitsRect, VTABLE_mindustry_input_InputHandler_selectUnitsRect, "()V", 1 },
	{ "selectTypedUnits", (intptr_t) M_mindustry_input_InputHandler_selectTypedUnits, VTABLE_mindustry_input_InputHandler_selectTypedUnits, "()V", 1 },
	{ "tapCommandUnit", (intptr_t) M_mindustry_input_InputHandler_tapCommandUnit, VTABLE_mindustry_input_InputHandler_tapCommandUnit, "()V", 1 },
	{ "commandTap", (intptr_t) M_mindustry_input_InputHandler_commandTap_float_float, VTABLE_mindustry_input_InputHandler_commandTap_float_float, "(FF)V", 1 },
	{ "commandTap", (intptr_t) M_mindustry_input_InputHandler_commandTap_float_float_boolean, VTABLE_mindustry_input_InputHandler_commandTap_float_float_boolean, "(FFZ)V", 1 },
	{ "drawCommand", (intptr_t) M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit, VTABLE_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "drawCommand", (intptr_t) M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building, VTABLE_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building, "(Lmindustry/gen/Building;)V", 1 },
	{ "drawCommanded", (intptr_t) M_mindustry_input_InputHandler_drawCommanded, VTABLE_mindustry_input_InputHandler_drawCommanded, "()V", 1 },
	{ "drawCommandedTargets", (intptr_t) M_mindustry_input_InputHandler_drawCommandedTargets, VTABLE_mindustry_input_InputHandler_drawCommandedTargets, "()V", 1 },
	{ "drawCommanded", (intptr_t) M_mindustry_input_InputHandler_drawCommanded_boolean, VTABLE_mindustry_input_InputHandler_drawCommanded_boolean, "(Z)V", 1 },
	{ "drawUnitSelection", (intptr_t) M_mindustry_input_InputHandler_drawUnitSelection, VTABLE_mindustry_input_InputHandler_drawUnitSelection, "()V", 1 },
	{ "drawOtherBuildPlans", (intptr_t) M_mindustry_input_InputHandler_drawOtherBuildPlans, VTABLE_mindustry_input_InputHandler_drawOtherBuildPlans, "()V", 1 },
	{ "drawBuildPlans", (intptr_t) M_mindustry_input_InputHandler_drawBuildPlans, VTABLE_mindustry_input_InputHandler_drawBuildPlans, "()V", 1 },
	{ "drawBottom", (intptr_t) M_mindustry_input_InputHandler_drawBottom, VTABLE_mindustry_input_InputHandler_drawBottom, "()V", 1 },
	{ "drawTop", (intptr_t) M_mindustry_input_InputHandler_drawTop, VTABLE_mindustry_input_InputHandler_drawTop, "()V", 1 },
	{ "drawOverSelect", (intptr_t) M_mindustry_input_InputHandler_drawOverSelect, VTABLE_mindustry_input_InputHandler_drawOverSelect, "()V", 1 },
	{ "drawSelected", (intptr_t) M_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color, VTABLE_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color, "(IILmindustry/world/Block;Larc/graphics/Color;)V", 1 },
	{ "drawBreaking", (intptr_t) M_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;)V", 1 },
	{ "drawOverlapCheck", (intptr_t) M_mindustry_input_InputHandler_drawOverlapCheck_mindustry_world_Block_int_int_boolean, VTABLE_mindustry_input_InputHandler_drawOverlapCheck_mindustry_world_Block_int_int_boolean, "(Lmindustry/world/Block;IIZ)V", 1 },
	{ "planMatches", (intptr_t) M_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean, VTABLE_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean, "(Lmindustry/entities/units/BuildPlan;)Z", 1 },
	{ "drawBreaking", (intptr_t) M_mindustry_input_InputHandler_drawBreaking_int_int, VTABLE_mindustry_input_InputHandler_drawBreaking_int_int, "(II)V", 1 },
	{ "useSchematic", (intptr_t) M_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic, VTABLE_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 1 },
	{ "useSchematic", 0, VTABLE_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic_boolean, "(Lmindustry/game/Schematic;Z)V", 1025 },
	{ "showSchematicSave", (intptr_t) M_mindustry_input_InputHandler_showSchematicSave, VTABLE_mindustry_input_InputHandler_showSchematicSave, "()V", 4 },
	{ "rotatePlans", (intptr_t) M_mindustry_input_InputHandler_rotatePlans_arc_struct_Seq_int, VTABLE_mindustry_input_InputHandler_rotatePlans_arc_struct_Seq_int, "(Larc/struct/Seq;I)V", 1 },
	{ "flipPlans", (intptr_t) M_mindustry_input_InputHandler_flipPlans_arc_struct_Seq_boolean, VTABLE_mindustry_input_InputHandler_flipPlans_arc_struct_Seq_boolean, "(Larc/struct/Seq;Z)V", 1 },
	{ "schemOriginX", (intptr_t) M_mindustry_input_InputHandler_schemOriginX_R_int, VTABLE_mindustry_input_InputHandler_schemOriginX_R_int, "()I", 4 },
	{ "schemOriginY", (intptr_t) M_mindustry_input_InputHandler_schemOriginY_R_int, VTABLE_mindustry_input_InputHandler_schemOriginY_R_int, "()I", 4 },
	{ "getPlan", (intptr_t) M_mindustry_input_InputHandler_getPlan_int_int_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_InputHandler_getPlan_int_int_R_mindustry_entities_units_BuildPlan, "(II)Lmindustry/entities/units/BuildPlan;", 4 },
	{ "getPlan", (intptr_t) M_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan, "(IIILmindustry/entities/units/BuildPlan;)Lmindustry/entities/units/BuildPlan;", 4 },
	{ "drawBreakSelection", (intptr_t) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int, VTABLE_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int, "(IIIII)V", 4 },
	{ "drawBreakSelection", (intptr_t) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean, VTABLE_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean, "(IIIIIZ)V", 4 },
	{ "drawRebuildSelection", (intptr_t) M_mindustry_input_InputHandler_drawRebuildSelection_int_int_int_int, VTABLE_mindustry_input_InputHandler_drawRebuildSelection_int_int_int_int, "(IIII)V", 4 },
	{ "drawBreakSelection", (intptr_t) M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int, VTABLE_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int, "(IIII)V", 4 },
	{ "drawSelection", (intptr_t) M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int, VTABLE_mindustry_input_InputHandler_drawSelection_int_int_int_int_int, "(IIIII)V", 4 },
	{ "drawSelection", (intptr_t) M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean, VTABLE_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean, "(IIIIILarc/graphics/Color;Larc/graphics/Color;Z)V", 4 },
	{ "flushSelectPlans", (intptr_t) M_mindustry_input_InputHandler_flushSelectPlans_arc_struct_Seq, VTABLE_mindustry_input_InputHandler_flushSelectPlans_arc_struct_Seq, "(Larc/struct/Seq;)V", 4 },
	{ "flushPlansReverse", (intptr_t) M_mindustry_input_InputHandler_flushPlansReverse_arc_struct_Seq, VTABLE_mindustry_input_InputHandler_flushPlansReverse_arc_struct_Seq, "(Larc/struct/Seq;)V", 4 },
	{ "flushPlans", (intptr_t) M_mindustry_input_InputHandler_flushPlans_arc_struct_Seq, VTABLE_mindustry_input_InputHandler_flushPlans_arc_struct_Seq, "(Larc/struct/Seq;)V", 4 },
	{ "drawOverPlan", (intptr_t) M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;)V", 4 },
	{ "drawOverPlan", (intptr_t) M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean, VTABLE_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean, "(Lmindustry/entities/units/BuildPlan;Z)V", 4 },
	{ "drawPlan", (intptr_t) M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;)V", 4 },
	{ "drawPlan", (intptr_t) M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean, VTABLE_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean, "(Lmindustry/entities/units/BuildPlan;Z)V", 4 },
	{ "drawPlan", (intptr_t) M_mindustry_input_InputHandler_drawPlan_int_int_mindustry_world_Block_int, VTABLE_mindustry_input_InputHandler_drawPlan_int_int_mindustry_world_Block_int, "(IILmindustry/world/Block;I)V", 4 },
	{ "removeSelection", (intptr_t) M_mindustry_input_InputHandler_removeSelection_int_int_int_int, VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int, "(IIII)V", 4 },
	{ "removeSelection", (intptr_t) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_int, VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int_int, "(IIIII)V", 4 },
	{ "removeSelection", (intptr_t) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean, VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean, "(IIIIZ)V", 4 },
	{ "removeSelection", (intptr_t) M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int, VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int, "(IIIIZI)V", 4 },
	{ "updateLine", (intptr_t) M_mindustry_input_InputHandler_updateLine_int_int_int_int, VTABLE_mindustry_input_InputHandler_updateLine_int_int_int_int, "(IIII)V", 4 },
	{ "updateLine", (intptr_t) M_mindustry_input_InputHandler_updateLine_int_int, VTABLE_mindustry_input_InputHandler_updateLine_int_int, "(II)V", 4 },
	{ "checkConfigTap", (intptr_t) M_mindustry_input_InputHandler_checkConfigTap_R_boolean, VTABLE_mindustry_input_InputHandler_checkConfigTap_R_boolean, "()Z", 0 },
	{ "tileTapped", (intptr_t) M_mindustry_input_InputHandler_tileTapped_mindustry_gen_Building_R_boolean, VTABLE_mindustry_input_InputHandler_tileTapped_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 0 },
	{ "tryTapPlayer", (intptr_t) M_mindustry_input_InputHandler_tryTapPlayer_float_float_R_boolean, VTABLE_mindustry_input_InputHandler_tryTapPlayer_float_float_R_boolean, "(FF)Z", 0 },
	{ "canTapPlayer", (intptr_t) M_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean, VTABLE_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean, "(FF)Z", 0 },
	{ "tryBeginMine", (intptr_t) M_mindustry_input_InputHandler_tryBeginMine_mindustry_world_Tile_R_boolean, VTABLE_mindustry_input_InputHandler_tryBeginMine_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "tryStopMine", (intptr_t) M_mindustry_input_InputHandler_tryStopMine_R_boolean, VTABLE_mindustry_input_InputHandler_tryStopMine_R_boolean, "()Z", 0 },
	{ "tryStopMine", (intptr_t) M_mindustry_input_InputHandler_tryStopMine_mindustry_world_Tile_R_boolean, VTABLE_mindustry_input_InputHandler_tryStopMine_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "tryRepairDerelict", (intptr_t) M_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean, VTABLE_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "canRepairDerelict", (intptr_t) M_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean, VTABLE_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "canMine", (intptr_t) M_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean, VTABLE_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 0 },
	{ "tileAt", (intptr_t) M_mindustry_input_InputHandler_tileAt_float_float_R_mindustry_world_Tile, VTABLE_mindustry_input_InputHandler_tileAt_float_float_R_mindustry_world_Tile, "(FF)Lmindustry/world/Tile;", 0 },
	{ "rawTileX", (intptr_t) M_mindustry_input_InputHandler_rawTileX_R_int, VTABLE_mindustry_input_InputHandler_rawTileX_R_int, "()I", 0 },
	{ "rawTileY", (intptr_t) M_mindustry_input_InputHandler_rawTileY_R_int, VTABLE_mindustry_input_InputHandler_rawTileY_R_int, "()I", 0 },
	{ "tileX", (intptr_t) M_mindustry_input_InputHandler_tileX_float_R_int, VTABLE_mindustry_input_InputHandler_tileX_float_R_int, "(F)I", 0 },
	{ "tileY", (intptr_t) M_mindustry_input_InputHandler_tileY_float_R_int, VTABLE_mindustry_input_InputHandler_tileY_float_R_int, "(F)I", 0 },
	{ "panCamera", (intptr_t) M_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2, VTABLE_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)V", 1 },
	{ "selectedBlock", (intptr_t) M_mindustry_input_InputHandler_selectedBlock_R_boolean, VTABLE_mindustry_input_InputHandler_selectedBlock_R_boolean, "()Z", 1 },
	{ "isPlacing", (intptr_t) M_mindustry_input_InputHandler_isPlacing_R_boolean, VTABLE_mindustry_input_InputHandler_isPlacing_R_boolean, "()Z", 1 },
	{ "isBreaking", (intptr_t) M_mindustry_input_InputHandler_isBreaking_R_boolean, VTABLE_mindustry_input_InputHandler_isBreaking_R_boolean, "()Z", 1 },
	{ "isRebuildSelecting", (intptr_t) M_mindustry_input_InputHandler_isRebuildSelecting_R_boolean, VTABLE_mindustry_input_InputHandler_isRebuildSelecting_R_boolean, "()Z", 1 },
	{ "mouseAngle", (intptr_t) M_mindustry_input_InputHandler_mouseAngle_float_float_R_float, VTABLE_mindustry_input_InputHandler_mouseAngle_float_float_R_float, "(FF)F", 1 },
	{ "selectedUnit", (intptr_t) M_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit, VTABLE_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1 },
	{ "selectedControlBuild", (intptr_t) M_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building, VTABLE_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "selectedCommandUnit", (intptr_t) M_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit, VTABLE_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit, "(FF)Lmindustry/gen/Unit;", 1 },
	{ "selectedEnemyUnit", (intptr_t) M_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit, VTABLE_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit, "(FF)Lmindustry/gen/Unit;", 1 },
	{ "selectedCommandBuildings", (intptr_t) M_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq, VTABLE_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq, "(FFFF)Larc/struct/Seq;", 1 },
	{ "selectedCommandUnits", (intptr_t) M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq, VTABLE_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq, "(FFFFLarc/func/Boolf;)Larc/struct/Seq;", 1 },
	{ "selectedCommandUnits", (intptr_t) M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq, VTABLE_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq, "(FFFF)Larc/struct/Seq;", 1 },
	{ "remove", (intptr_t) M_mindustry_input_InputHandler_remove, VTABLE_mindustry_input_InputHandler_remove, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_input_InputHandler_add, VTABLE_mindustry_input_InputHandler_add, "()V", 1 },
	{ "canShoot", (intptr_t) M_mindustry_input_InputHandler_canShoot_R_boolean, VTABLE_mindustry_input_InputHandler_canShoot_R_boolean, "()Z", 1 },
	{ "onConfigurable", (intptr_t) M_mindustry_input_InputHandler_onConfigurable_R_boolean, VTABLE_mindustry_input_InputHandler_onConfigurable_R_boolean, "()Z", 1 },
	{ "isDroppingItem", (intptr_t) M_mindustry_input_InputHandler_isDroppingItem_R_boolean, VTABLE_mindustry_input_InputHandler_isDroppingItem_R_boolean, "()Z", 1 },
	{ "canDropItem", (intptr_t) M_mindustry_input_InputHandler_canDropItem_R_boolean, VTABLE_mindustry_input_InputHandler_canDropItem_R_boolean, "()Z", 1 },
	{ "tryDropItems", (intptr_t) M_mindustry_input_InputHandler_tryDropItems_mindustry_gen_Building_float_float, VTABLE_mindustry_input_InputHandler_tryDropItems_mindustry_gen_Building_float_float, "(Lmindustry/gen/Building;FF)V", 1 },
	{ "canDepositItem", (intptr_t) M_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean, VTABLE_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean, "(Lmindustry/gen/Building;)Z", 1 },
	{ "rebuildArea", (intptr_t) M_mindustry_input_InputHandler_rebuildArea_int_int_int_int, VTABLE_mindustry_input_InputHandler_rebuildArea_int_int_int_int, "(IIII)V", 1 },
	{ "tryBreakBlock", (intptr_t) M_mindustry_input_InputHandler_tryBreakBlock_int_int, VTABLE_mindustry_input_InputHandler_tryBreakBlock_int_int, "(II)V", 1 },
	{ "validPlace", (intptr_t) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean, VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean, "(IILmindustry/world/Block;I)Z", 1 },
	{ "validPlace", (intptr_t) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean, VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean, "(IILmindustry/world/Block;ILmindustry/entities/units/BuildPlan;)Z", 1 },
	{ "validPlace", (intptr_t) M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean, VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean, "(IILmindustry/world/Block;ILmindustry/entities/units/BuildPlan;Z)Z", 1 },
	{ "validBreak", (intptr_t) M_mindustry_input_InputHandler_validBreak_int_int_R_boolean, VTABLE_mindustry_input_InputHandler_validBreak_int_int_R_boolean, "(II)Z", 1 },
	{ "breakBlock", (intptr_t) M_mindustry_input_InputHandler_breakBlock_int_int, VTABLE_mindustry_input_InputHandler_breakBlock_int_int, "(II)V", 1 },
	{ "drawArrow", (intptr_t) M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int, VTABLE_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int, "(Lmindustry/world/Block;III)V", 1 },
	{ "drawArrow", (intptr_t) M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean, VTABLE_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean, "(Lmindustry/world/Block;IIIZ)V", 1 },
	{ "iterateLine", (intptr_t) M_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons, VTABLE_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons, "(IIIILarc/func/Cons;)V", 0 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_input_InputHandler_lambda$static$1_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$add$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$add$0_arc_input_InputProcessor_R_boolean, 0, "(Larc/input/InputProcessor;)Z", 4106 },
	{ "lambda$selectedCommandUnits$1", (intptr_t) SM_mindustry_input_InputHandler_lambda$selectedCommandUnits$1_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$selectedCommandUnits$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$selectedCommandUnits$0_arc_func_Boolf_mindustry_gen_Unit_R_boolean, 0, "(Larc/func/Boolf;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$selectedCommandBuildings$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$selectedCommandBuildings$0_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 4106 },
	{ "lambda$selectedEnemyUnit$1", (intptr_t) SM_mindustry_input_InputHandler_lambda$selectedEnemyUnit$1_float_float_mindustry_gen_Unit_R_float, 0, "(FFLmindustry/gen/Unit;)F", 4106 },
	{ "lambda$selectedEnemyUnit$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$selectedEnemyUnit$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$selectedCommandUnit$1", (intptr_t) SM_mindustry_input_InputHandler_lambda$selectedCommandUnit$1_float_float_mindustry_gen_Unit_R_float, 0, "(FFLmindustry/gen/Unit;)F", 4106 },
	{ "lambda$selectedCommandUnit$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$selectedCommandUnit$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$selectedUnit$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$selectedUnit$0_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$updateLine$1", (intptr_t) M_mindustry_input_InputHandler_lambda$updateLine$1_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_InputHandler_lambda$updateLine$1_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;)V", 4098 },
	{ "lambda$updateLine$0", (intptr_t) M_mindustry_input_InputHandler_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine, VTABLE_mindustry_input_InputHandler_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine, "(Lmindustry/input/InputHandler$PlaceLine;)V", 4098 },
	{ "lambda$removeSelection$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$removeSelection$0_mindustry_world_Tile_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Lmindustry/world/Tile;Lmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$getPlan$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$getPlan$0_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;Lmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$flipPlans$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$flipPlans$0_boolean_int_mindustry_entities_units_BuildPlan, 0, "(ZILmindustry/entities/units/BuildPlan;)V", 4106 },
	{ "lambda$flipPlans$1", (intptr_t) SM_mindustry_input_InputHandler_lambda$flipPlans$1_boolean_mindustry_entities_units_BuildPlan_arc_math_geom_Point2, 0, "(ZLmindustry/entities/units/BuildPlan;Larc/math/geom/Point2;)V", 4106 },
	{ "lambda$rotatePlans$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$rotatePlans$0_int_int_int_mindustry_entities_units_BuildPlan, 0, "(IIILmindustry/entities/units/BuildPlan;)V", 4106 },
	{ "lambda$rotatePlans$1", (intptr_t) SM_mindustry_input_InputHandler_lambda$rotatePlans$1_float_int_arc_math_geom_Point2, 0, "(FILarc/math/geom/Point2;)V", 4106 },
	{ "lambda$showSchematicSave$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$showSchematicSave$0_mindustry_game_Schematic_java_lang_String, 0, "(Lmindustry/game/Schematic;Ljava/lang/String;)V", 4106 },
	{ "lambda$showSchematicSave$2", (intptr_t) SM_mindustry_input_InputHandler_lambda$showSchematicSave$2_mindustry_game_Schematic_mindustry_game_Schematic, 0, "(Lmindustry/game/Schematic;Lmindustry/game/Schematic;)V", 4106 },
	{ "lambda$showSchematicSave$1", (intptr_t) SM_mindustry_input_InputHandler_lambda$showSchematicSave$1_java_lang_String_mindustry_game_Schematic_R_boolean, 0, "(Ljava/lang/String;Lmindustry/game/Schematic;)Z", 4106 },
	{ "lambda$drawOtherBuildPlans$0", (intptr_t) M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$0_mindustry_gen_Player, VTABLE_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$0_mindustry_gen_Player, "(Lmindustry/gen/Player;)V", 4098 },
	{ "lambda$drawOtherBuildPlans$1", (intptr_t) M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan, VTABLE_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan, "(Lmindustry/entities/units/BuildPlan;Lmindustry/gen/Player;Lmindustry/entities/units/BuildPlan;)V", 4098 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$static$0_mindustry_entities_units_BuildPlan_R_boolean, 0, "(Lmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$drawCommanded$3", (intptr_t) SM_mindustry_input_InputHandler_lambda$drawCommanded$3_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$drawCommanded$2", (intptr_t) M_mindustry_input_InputHandler_lambda$drawCommanded$2, VTABLE_mindustry_input_InputHandler_lambda$drawCommanded$2, "()V", 4098 },
	{ "lambda$drawCommanded$1", (intptr_t) M_mindustry_input_InputHandler_lambda$drawCommanded$1, VTABLE_mindustry_input_InputHandler_lambda$drawCommanded$1, "()V", 4098 },
	{ "lambda$drawCommanded$0", (intptr_t) M_mindustry_input_InputHandler_lambda$drawCommanded$0, VTABLE_mindustry_input_InputHandler_lambda$drawCommanded$0, "()V", 4098 },
	{ "lambda$commandTap$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$commandTap$0_mindustry_gen_Building_R_int, 0, "(Lmindustry/gen/Building;)I", 4106 },
	{ "lambda$selectTypedUnits$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$selectTypedUnits$0_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$tryPickupPayload$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$tryPickupPayload$0_mindustry_gen_Payloadc_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean, 0, "(Lmindustry/gen/Payloadc;Lmindustry/gen/Unit;Lmindustry/gen/Unit;)Z", 4106 },
	{ "lambda$checkUnit$0", (intptr_t) M_mindustry_input_InputHandler_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_input_InputHandler_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 4098 },
	{ "lambda$update$1", (intptr_t) M_mindustry_input_InputHandler_lambda$update$1_mindustry_gen_Unit_R_boolean, VTABLE_mindustry_input_InputHandler_lambda$update$1_mindustry_gen_Unit_R_boolean, "(Lmindustry/gen/Unit;)Z", 4098 },
	{ "lambda$update$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$update$0_mindustry_gen_Building_R_boolean, 0, "(Lmindustry/gen/Building;)Z", 4106 },
	{ "lambda$unitClear$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$unitClear$0_mindustry_net_Administration$PlayerAction, 0, "(Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$unitControl$1", (intptr_t) SM_mindustry_input_InputHandler_lambda$unitControl$1_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$unitControl$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$unitControl$0_mindustry_gen_Unit_mindustry_net_Administration$PlayerAction, 0, "(Lmindustry/gen/Unit;Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$buildingControlSelect$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$buildingControlSelect$0_mindustry_gen_Building_mindustry_net_Administration$PlayerAction, 0, "(Lmindustry/gen/Building;Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$tileConfig$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$tileConfig$0_java_lang_Object_mindustry_net_Administration$PlayerAction, 0, "(Ljava/lang/Object;Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$rotateBlock$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$rotateBlock$0_mindustry_gen_Building_boolean_mindustry_net_Administration$PlayerAction, 0, "(Lmindustry/gen/Building;ZLmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$requestDropPayload$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$requestDropPayload$0_mindustry_gen_Payloadc_mindustry_net_Administration$PlayerAction, 0, "(Lmindustry/gen/Payloadc;Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$requestBuildPayload$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$requestBuildPayload$0_mindustry_gen_Unit_mindustry_net_Administration$PlayerAction, 0, "(Lmindustry/gen/Unit;Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$transferInventory$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$transferInventory$0_mindustry_gen_Player_mindustry_net_Administration$PlayerAction, 0, "(Lmindustry/gen/Player;Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$requestItem$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$requestItem$0_mindustry_type_Item_int_mindustry_net_Administration$PlayerAction, 0, "(Lmindustry/type/Item;ILmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$commandBuilding$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$commandBuilding$0_Array1_int_mindustry_net_Administration$PlayerAction, 0, "([ILmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$setUnitStance$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$setUnitStance$0_Array1_int_mindustry_net_Administration$PlayerAction, 0, "([ILmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$setUnitCommandChunked$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$setUnitCommandChunked$0_mindustry_ai_UnitCommand_Array1_int, 0, "(Lmindustry/ai/UnitCommand;[I)V", 4106 },
	{ "lambda$setUnitStanceChunked$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$setUnitStanceChunked$0_mindustry_ai_UnitStance_boolean_Array1_int, 0, "(Lmindustry/ai/UnitStance;Z[I)V", 4106 },
	{ "lambda$setUnitCommand$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$setUnitCommand$0_Array1_int_mindustry_ai_UnitCommand_mindustry_net_Administration$PlayerAction, 0, "([ILmindustry/ai/UnitCommand;Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$commandUnits$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$commandUnits$0_Array1_int_mindustry_net_Administration$PlayerAction, 0, "([ILmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$pingLocation$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$pingLocation$0_float_float_java_lang_String_mindustry_net_Administration$PlayerAction, 0, "(FFLjava/lang/String;Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$deletePlans$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$deletePlans$0_Array1_int_mindustry_net_Administration$PlayerAction, 0, "([ILmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$transferItemTo$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$transferItemTo$0_mindustry_type_Item_int_float_float_mindustry_gen_Building, 0, "(Lmindustry/type/Item;IFFLmindustry/gen/Building;)V", 4106 },
	{ "lambda$transferItemTo$1", (intptr_t) SM_mindustry_input_InputHandler_lambda$transferItemTo$1, 0, "()V", 4106 },
	{ "lambda$transferItemToUnit$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$transferItemToUnit$0_mindustry_gen_Itemsc_mindustry_type_Item, 0, "(Lmindustry/gen/Itemsc;Lmindustry/type/Item;)V", 4106 },
	{ "lambda$takeItems$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$takeItems$0_mindustry_type_Item_mindustry_gen_Building_mindustry_gen_Unit, 0, "(Lmindustry/type/Item;Lmindustry/gen/Building;Lmindustry/gen/Unit;)V", 4106 },
	{ "lambda$new$5", (intptr_t) M_mindustry_input_InputHandler_lambda$new$5_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_input_InputHandler_lambda$new$5_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_input_InputHandler_lambda$new$4_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_input_InputHandler_lambda$new$4_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
	{ "lambda$new$2", (intptr_t) SM_mindustry_input_InputHandler_lambda$new$2_mindustry_game_EventType$UnitDestroyEvent, 0, "(Lmindustry/game/EventType$UnitDestroyEvent;)V", 4106 },
	{ "lambda$new$3", (intptr_t) SM_mindustry_input_InputHandler_lambda$new$3_mindustry_type_Weapon_R_boolean, 0, "(Lmindustry/type/Weapon;)Z", 4106 },
	{ "lambda$new$1", (intptr_t) M_mindustry_input_InputHandler_lambda$new$1_R_boolean, VTABLE_mindustry_input_InputHandler_lambda$new$1_R_boolean, "()Z", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_input_InputHandler_lambda$new$0_R_boolean, 0, "()Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_input_InputHandler, 0, "()V", 8 },
};

Class class_mindustry_input_InputHandler{
		.nativeName = (intptr_t) "mindustry/input/InputHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_input_InputHandler),
		.classVtable = (intptr_t) vtable_mindustry_input_InputHandler,
		.staticInitializer = (intptr_t) clinit_mindustry_input_InputHandler,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_input_InputHandler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 67,
		.nativeFields = (intptr_t) fields,
		.methodCount = 219,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 156,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_input_InputHandler = registerClass(&class_mindustry_input_InputHandler);

}
