#include "mindustry/gen/Call.h"
#include "mindustry/gen/AdminRequestCallPacket.h"
#include "mindustry/gen/ConnectCallPacket.h"
#include "arc/graphics/Color.h"
#include "mindustry/gen/EffectCallPacket2.h"
#include "mindustry/gen/DestroyPayloadCallPacket.h"
#include "mindustry/gen/UnitClearCallPacket.h"
#include "mindustry/gen/RequestBuildPayloadCallPacket.h"
#include "mindustry/gen/MenuBuilderCallPacket.h"
#include "mindustry/gen/SyncVariableCallPacket.h"
#include "mindustry/gen/SetTileOverlaysCallPacket.h"
#include "mindustry/gen/UnitBlockSpawnCallPacket.h"
#include "mindustry/ui/Menus.h"
#include "mindustry/gen/ServerBinaryPacketReliableCallPacket.h"
#include "mindustry/gen/GameOverCallPacket.h"
#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/gen/TileTapCallPacket.h"
#include "mindustry/gen/RotateBlockCallPacket.h"
#include "mindustry/gen/EntitySnapshotCallPacket.h"
#include "mindustry/gen/SetPositionCallPacket.h"
#include "mindustry/world/blocks/units/UnitBlock.h"
#include "mindustry/gen/SetCameraPositionCallPacket.h"
#include "mindustry/net/Administration_TraceInfo.h"
#include "mindustry/gen/DeconstructFinishCallPacket.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/gen/PingResponseCallPacket.h"
#include "mindustry/gen/HideHudTextCallPacket.h"
#include "mindustry/Vars.h"
#include "mindustry/gen/SetTileItemsCallPacket.h"
#include "mindustry/gen/ConstructFinishCallPacket.h"
#include "mindustry/gen/RequestBlockSnapshotCallPacket.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "mindustry/gen/TransferItemEffectCallPacket.h"
#include "mindustry/gen/SetUnitCommandCallPacket.h"
#include "mindustry/gen/LabelCallPacket2.h"
#include "mindustry/ai/UnitStance.h"
#include "mindustry/gen/LabelCallPacket3.h"
#include "mindustry/type/Item.h"
#include "mindustry/gen/PickedBuildPayloadCallPacket.h"
#include "mindustry/core/Logic.h"
#include "mindustry/entities/Units.h"
#include "mindustry/gen/AnnounceCallPacket.h"
#include "mindustry/gen/TakeItemsCallPacket.h"
#include "mindustry/world/Block.h"
#include "mindustry/gen/PayloadDroppedCallPacket.h"
#include "mindustry/type/LiquidStack.h"
#include "mindustry/ui/builder/MenuResult.h"
#include "mindustry/gen/CompleteObjectiveCallPacket.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/units/UnitAssembler.h"
#include "mindustry/gen/BlockSnapshotCallPacket.h"
#include "mindustry/gen/ClientBinaryPacketReliableCallPacket.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/game/Team.h"
#include "mindustry/gen/TraceInfoCallPacket.h"
#include "mindustry/gen/UpdateGameOverCallPacket.h"
#include "mindustry/gen/SetLiquidsCallPacket.h"
#include "mindustry/gen/FillTileBlocksCallPacket.h"
#include "mindustry/gen/ClientPlanSnapshotReceivedCallPacket.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "mindustry/gen/CreateWeatherCallPacket.h"
#include "mindustry/world/blocks/campaign/LandingPad.h"
#include "mindustry/gen/SetTileLiquidsCallPacket.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/ClearItemsCallPacket.h"
#include "mindustry/gen/RequestUnitPayloadCallPacket.h"
#include "mindustry/gen/SetRulesCallPacket.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/SoundAtCallPacket.h"
#include "mindustry/gen/TextInputResultCallPacket.h"
#include "mindustry/gen/InfoToastCallPacket.h"
#include "mindustry/gen/UnitSpawnCallPacket.h"
#include "mindustry/gen/KickCallPacket2.h"
#include "mindustry/gen/LabelReliableCallPacket2.h"
#include "mindustry/gen/LabelReliableCallPacket.h"
#include "mindustry/gen/LabelReliableCallPacket3.h"
#include "mindustry/gen/ClientPacketUnreliableCallPacket.h"
#include "mindustry/gen/BeginBreakCallPacket.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/gen/ClientPlanSnapshotCallPacket.h"
#include "mindustry/gen/CopyToClipboardCallPacket.h"
#include "mindustry/gen/RequestWorldCallPacket.h"
#include "mindustry/gen/TextInputCallPacket2.h"
#include "mindustry/gen/MenuCallPacket.h"
#include "mindustry/gen/SetObjectivesCallPacket.h"
#include "mindustry/core/NetServer.h"
#include "mindustry/logic/LMarkerControl.h"
#include "mindustry/gen/PickedUnitPayloadCallPacket.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/gen/ResearchedCallPacket.h"
#include "mindustry/gen/WorldDataBeginCallPacket.h"
#include "mindustry/gen/LabelCallPacket.h"
#include "mindustry/gen/KickCallPacket.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/gen/ClientPacketReliableCallPacket.h"
#include "mindustry/gen/EffectCallPacket.h"
#include "arc/struct/IntSeq.h"
#include "mindustry/gen/EffectReliableCallPacket.h"
#include "mindustry/gen/BuildingControlSelectCallPacket.h"
#include "mindustry/gen/InfoPopupReliableCallPacket2.h"
#include "mindustry/gen/FollowUpMenuCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_280.h"
#include "arc/func/Prov.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_282.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_281.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_284.h"
#include "mindustry/gen/SectorCaptureCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_283.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_286.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_285.h"
#include "mindustry/world/blocks/defense/AutoDoor.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_277.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_276.h"
#include "mindustry/gen/RequestAssetsCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_279.h"
#include "mindustry/gen/CommandUnitsCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_278.h"
#include "mindustry/gen/AssemblerDroneSpawnedCallPacket.h"
#include "mindustry/gen/PlayerSpawnCallPacket.h"
#include "mindustry/gen/TransferItemToCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_271.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_270.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_273.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_272.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_275.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_274.h"
#include "mindustry/gen/TransferItemToUnitCallPacket.h"
#include "mindustry/gen/PingLocationCallPacket.h"
#include "mindustry/gen/SetPlayerTeamEditorCallPacket.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/gen/WarningToastCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_266.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_265.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_268.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_267.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_269.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_181.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_180.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_183.h"
#include "mindustry/gen/FillTileFloorsCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_182.h"
#include "mindustry/gen/SetTileBlocksCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_185.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_184.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_187.h"
#include "mindustry/gen/MenuChooseCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_186.h"
#include "mindustry/world/blocks/units/UnitCargoLoader.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_178.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_299.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_177.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_298.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_179.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_170.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_291.h"
#include "mindustry/gen/RemoveWorldLabelCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_290.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_172.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_293.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_171.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_292.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_174.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_295.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_173.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_294.h"
#include "mindustry/gen/BeginPlaceCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_176.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_297.h"
#include "mindustry/gen/RequestDebugStatusCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_175.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_296.h"
#include "mindustry/gen/SendChatMessageCallPacket.h"
#include "mindustry/gen/SetTileCallPacket.h"
#include "mindustry/gen/UpdateMarkerCallPacket.h"
#include "mindustry/gen/HideFollowUpMenuCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_167.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_288.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_166.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_287.h"
#include "mindustry/gen/InfoMessageCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_169.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_168.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_289.h"
#include "mindustry/gen/SetMapAreaCallPacket.h"
#include "mindustry/gen/ServerPacketUnreliableCallPacket.h"
#include "mindustry/gen/RemoveQueueBlockCallPacket.h"
#include "mindustry/gen/BuildHealthUpdateCallPacket.h"
#include "mindustry/gen/StateSnapshotCallPacket.h"
#include "mindustry/gen/HideMenuBuilderCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_199.h"
#include "mindustry/gen/MenuBuilderUpdateCallPacket.h"
#include "mindustry/gen/AssemblerUnitSpawnedCallPacket.h"
#include "mindustry/gen/UnitEnvDeathCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_192.h"
#include "mindustry/net/Packets_AdminAction.h"
#include "mindustry/gen/BuildDestroyedCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_191.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_194.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_193.h"
#include "mindustry/gen/UnitDespawnCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_196.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_195.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_198.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_197.h"
#include "mindustry/entities/Units_UnitSyncContainer.h"
#include "arc/struct/Queue.h"
#include "mindustry/gen/PlayMusicCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_190.h"
#include "mindustry/net/Packets_KickReason.h"
#include "mindustry/gen/LandingPadLandedCallPacket.h"
#include "mindustry/gen/InfoPopupReliableCallPacket.h"
#include "mindustry/gen/RequestDropPayloadCallPacket.h"
#include "mindustry/gen/UpdateMarkerTextCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_189.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_188.h"
#include "mindustry/gen/SendMessageCallPacket.h"
#include "mindustry/gen/PingCallPacket.h"
#include "mindustry/net/Net.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/gen/SetRuleCallPacket.h"
#include "mindustry/gen/ClientSnapshotCallPacket.h"
#include "mindustry/gen/AutoDoorToggleCallPacket.h"
#include "mindustry/gen/UpdateMarkerTextureCallPacket.h"
#include "mindustry/gen/TileConfigCallPacket.h"
#include "mindustry/gen/UnitEnteredPayloadCallPacket.h"
#include "mindustry/gen/PlayerDisconnectCallPacket.h"
#include "mindustry/net/NetConnection.h"
#include "mindustry/gen/FillTileOverlaysCallPacket.h"
#include "mindustry/gen/ConnectConfirmCallPacket.h"
#include "mindustry/type/Weather.h"
#include "mindustry/gen/SetLiquidCallPacket.h"
#include "mindustry/gen/SetTeamCallPacket.h"
#include "mindustry/gen/CommandBuildingCallPacket.h"
#include "mindustry/input/InputHandler.h"
#include "mindustry/gen/SendMessageCallPacket2.h"
#include "mindustry/world/Build.h"
#include "mindustry/gen/RemoveTileCallPacket.h"
#include "mindustry/gen/SoundCallPacket.h"
#include "mindustry/gen/UnitSafeDeathCallPacket.h"
#include "mindustry/gen/UnitControlCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_318.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_317.h"
#include "mindustry/gen/SetOverlayCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_319.h"
#include "mindustry/gen/SetUnitStanceCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_310.h"
#include "mindustry/gen/SetFlagCallPacket.h"
#include "mindustry/world/Tile.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_312.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_311.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_314.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_313.h"
#include "mindustry/gen/SetTileFloorsCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_316.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_315.h"
#include "mindustry/io/TypeIO_ClientBuildPlans.h"
#include "mindustry/gen/SetItemsCallPacket.h"
#include "mindustry/gen/RemoveMarkerCallPacket.h"
#include "mindustry/gen/ClientLogicDataUnreliableCallPacket.h"
#include "mindustry/gen/DebugStatusClientUnreliableCallPacket.h"
#include "mindustry/gen/ClientLogicDataReliableCallPacket.h"
#include "mindustry/gen/TextInputCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_307.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_306.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_309.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_308.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_301.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_300.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_303.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_302.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_305.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_304.h"
#include "mindustry/gen/SpawnEffectCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_220.h"
#include "mindustry/gen/LogicExplosionCallPacket.h"
#include "mindustry/gen/RequestItemCallPacket.h"
#include "mindustry/gen/UnitBuildingControlSelectCallPacket.h"
#include "mindustry/gen/SetFloorCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_219.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_218.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_211.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_210.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_331.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_213.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_212.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_215.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_214.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_217.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_216.h"
#include "mindustry/gen/ClearLiquidsCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_330.h"
#include "mindustry/gen/HiddenSnapshotCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_208.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_329.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_207.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_328.h"
#include "mindustry/game/Teams.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_209.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/InfoPopupCallPacket2.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_200.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_321.h"
#include "mindustry/gen/DropItemCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_320.h"
#include "mindustry/gen/ServerPacketReliableCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_202.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_323.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_201.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_322.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_204.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_325.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_203.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_324.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_206.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_327.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_205.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_326.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_240.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_242.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_241.h"
#include "mindustry/gen/TransferInventoryCallPacket.h"
#include "mindustry/gen/OpenURICallPacket.h"
#include "mindustry/gen/UnitDestroyCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_233.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_232.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_235.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_234.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_237.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_236.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_239.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_238.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_231.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_230.h"
#include "mindustry/gen/UnitDeathCallPacket.h"
#include "mindustry/gen/ServerBinaryPacketUnreliableCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_229.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_222.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_221.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_224.h"
#include "mindustry/ai/WaveSpawner.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_223.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_226.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_225.h"
#include "mindustry/gen/InfoPopupCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_228.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_227.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_260.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_262.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_261.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_264.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_263.h"
#include "mindustry/logic/LExecutor.h"
#include "mindustry/gen/CreateBulletCallPacket.h"
#include "mindustry/gen/DeletePlansCallPacket.h"
#include "mindustry/gen/SetHudTextCallPacket.h"
#include "mindustry/gen/UnitCapDeathCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_255.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_254.h"
#include "mindustry/gen/ClearObjectivesCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_257.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_256.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_259.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_258.h"
#include "mindustry/gen/MenuBuilderChooseCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_251.h"
#include "mindustry/gen/SetItemCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_250.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_253.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_252.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/gen/DebugStatusClientCallPacket.h"
#include "mindustry/gen/SetHudTextReliableCallPacket.h"
#include "mindustry/gen/UnitTetherBlockSpawnedCallPacket.h"
#include "mindustry/gen/ClientBinaryPacketUnreliableCallPacket.h"
#include "mindustry/gen/CreateMarkerCallPacket.h"
#include "mindustry/gen/SetTeamsCallPacket.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_244.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_243.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_246.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_245.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_248.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_247.h"
#include "mindustry/gen/Call_invoke_arc_func_Prov_249.h"

extern "C" {


void mark_mindustry_gen_Call(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Call *) object;
}

void clinit_mindustry_gen_Call(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_gen_Call(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_adminRequest_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:adminRequest", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(38);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(39);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_core_NetServer_adminRequest_mindustry_gen_Player_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(41);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(42);
	clinit_mindustry_gen_AdminRequestCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_AdminRequestCallPacket);
	init_mindustry_gen_AdminRequestCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(43);
	((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK((frame[3].o)))->F_other = (jref) (frame[0].o);
	LINE_NUMBER(44);
	((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK((frame[3].o)))->F_action = (jref) (frame[1].o);
	LINE_NUMBER(45);
	((mindustry_gen_AdminRequestCallPacket *) NULL_CHECK((frame[3].o)))->F_params = (jref) (frame[2].o);
	LINE_NUMBER(46);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_announce_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:announce", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(51);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(52);
	clinit_mindustry_gen_AnnounceCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_AnnounceCallPacket);
	init_mindustry_gen_AnnounceCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(53);
	((mindustry_gen_AnnounceCallPacket *) NULL_CHECK((frame[1].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(54);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_announce_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:announce", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(59);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(60);
	clinit_mindustry_gen_AnnounceCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_AnnounceCallPacket);
	init_mindustry_gen_AnnounceCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(61);
	((mindustry_gen_AnnounceCallPacket *) NULL_CHECK((frame[2].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(62);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_assemblerDroneSpawned_mindustry_world_Tile_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:assemblerDroneSpawned", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(67);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(68);
	SM_mindustry_world_blocks_units_UnitAssembler_assemblerDroneSpawned_mindustry_world_Tile_int(ctx, (frame[0].o), (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(70);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(71);
	clinit_mindustry_gen_AssemblerDroneSpawnedCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_AssemblerDroneSpawnedCallPacket);
	init_mindustry_gen_AssemblerDroneSpawnedCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(72);
	((mindustry_gen_AssemblerDroneSpawnedCallPacket *) NULL_CHECK((frame[2].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(73);
	((mindustry_gen_AssemblerDroneSpawnedCallPacket *) NULL_CHECK((frame[2].o)))->F_id = (frame[1].i);
	LINE_NUMBER(74);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_assemblerUnitSpawned_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:assemblerUnitSpawned", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(79);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(80);
	SM_mindustry_world_blocks_units_UnitAssembler_assemblerUnitSpawned_mindustry_world_Tile(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(82);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(83);
	clinit_mindustry_gen_AssemblerUnitSpawnedCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_AssemblerUnitSpawnedCallPacket);
	init_mindustry_gen_AssemblerUnitSpawnedCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(84);
	((mindustry_gen_AssemblerUnitSpawnedCallPacket *) NULL_CHECK((frame[1].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(85);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_autoDoorToggle_mindustry_world_Tile_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:autoDoorToggle", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(90);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(91);
	SM_mindustry_world_blocks_defense_AutoDoor_autoDoorToggle_mindustry_world_Tile_boolean(ctx, (frame[0].o), (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(93);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(94);
	clinit_mindustry_gen_AutoDoorToggleCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_AutoDoorToggleCallPacket);
	init_mindustry_gen_AutoDoorToggleCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(95);
	((mindustry_gen_AutoDoorToggleCallPacket *) NULL_CHECK((frame[2].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(96);
	((mindustry_gen_AutoDoorToggleCallPacket *) NULL_CHECK((frame[2].o)))->F_open = (frame[1].i);
	LINE_NUMBER(97);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_beginBreak_mindustry_gen_Unit_mindustry_game_Team_int_int(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:beginBreak", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(102);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(103);
	SM_mindustry_world_Build_beginBreak_mindustry_gen_Unit_mindustry_game_Team_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i));
	}
label_2:;
	{
	LINE_NUMBER(105);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(106);
	clinit_mindustry_gen_BeginBreakCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_BeginBreakCallPacket);
	init_mindustry_gen_BeginBreakCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(107);
	((mindustry_gen_BeginBreakCallPacket *) NULL_CHECK((frame[4].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(108);
	((mindustry_gen_BeginBreakCallPacket *) NULL_CHECK((frame[4].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(109);
	((mindustry_gen_BeginBreakCallPacket *) NULL_CHECK((frame[4].o)))->F_x = (frame[2].i);
	LINE_NUMBER(110);
	((mindustry_gen_BeginBreakCallPacket *) NULL_CHECK((frame[4].o)))->F_y = (frame[3].i);
	LINE_NUMBER(111);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_beginPlace_mindustry_gen_Unit_mindustry_world_Block_mindustry_game_Team_int_int_int_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jint param4, jint param5, jobject param6) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:beginPlace", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(117);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(118);
	SM_mindustry_world_Build_beginPlace_mindustry_gen_Unit_mindustry_world_Block_mindustry_game_Team_int_int_int_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].o));
	}
label_2:;
	{
	LINE_NUMBER(120);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(121);
	clinit_mindustry_gen_BeginPlaceCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_BeginPlaceCallPacket);
	init_mindustry_gen_BeginPlaceCallPacket(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(122);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[7].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(123);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[7].o)))->F_result = (jref) (frame[1].o);
	LINE_NUMBER(124);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[7].o)))->F_team = (jref) (frame[2].o);
	LINE_NUMBER(125);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[7].o)))->F_x = (frame[3].i);
	LINE_NUMBER(126);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[7].o)))->F_y = (frame[4].i);
	LINE_NUMBER(127);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[7].o)))->F_rotation = (frame[5].i);
	LINE_NUMBER(128);
	((mindustry_gen_BeginPlaceCallPacket *) NULL_CHECK((frame[7].o)))->F_placeConfig = (jref) (frame[6].o);
	LINE_NUMBER(129);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[7].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(131);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_blockSnapshot_short_Array1_byte(jcontext ctx, jshort param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:blockSnapshot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(134);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(135);
	clinit_mindustry_gen_BlockSnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_BlockSnapshotCallPacket);
	init_mindustry_gen_BlockSnapshotCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(136);
	((mindustry_gen_BlockSnapshotCallPacket *) NULL_CHECK((frame[2].o)))->F_amount = (frame[0].i);
	LINE_NUMBER(137);
	((mindustry_gen_BlockSnapshotCallPacket *) NULL_CHECK((frame[2].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(138);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_blockSnapshot_mindustry_net_NetConnection_short_Array1_byte(jcontext ctx, jobject param0, jshort param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:blockSnapshot", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(144);
	clinit_mindustry_gen_BlockSnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_BlockSnapshotCallPacket);
	init_mindustry_gen_BlockSnapshotCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(145);
	((mindustry_gen_BlockSnapshotCallPacket *) NULL_CHECK((frame[3].o)))->F_amount = (frame[1].i);
	LINE_NUMBER(146);
	((mindustry_gen_BlockSnapshotCallPacket *) NULL_CHECK((frame[3].o)))->F_data = (jref) (frame[2].o);
	LINE_NUMBER(147);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(149);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_buildDestroyed_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:buildDestroyed", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(152);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(153);
	SM_mindustry_world_Tile_buildDestroyed_mindustry_gen_Building(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(155);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(156);
	clinit_mindustry_gen_BuildDestroyedCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_BuildDestroyedCallPacket);
	init_mindustry_gen_BuildDestroyedCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(157);
	((mindustry_gen_BuildDestroyedCallPacket *) NULL_CHECK((frame[1].o)))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(158);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_buildHealthUpdate_arc_struct_IntSeq(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:buildHealthUpdate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(163);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(164);
	clinit_mindustry_gen_BuildHealthUpdateCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_BuildHealthUpdateCallPacket);
	init_mindustry_gen_BuildHealthUpdateCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(165);
	((mindustry_gen_BuildHealthUpdateCallPacket *) NULL_CHECK((frame[1].o)))->F_buildings = (jref) (frame[0].o);
	LINE_NUMBER(166);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_buildingControlSelect_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:buildingControlSelect", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(171);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(172);
	SM_mindustry_input_InputHandler_buildingControlSelect_mindustry_gen_Player_mindustry_gen_Building(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(174);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(175);
	clinit_mindustry_gen_BuildingControlSelectCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_BuildingControlSelectCallPacket);
	init_mindustry_gen_BuildingControlSelectCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(177);
	((mindustry_gen_BuildingControlSelectCallPacket *) NULL_CHECK((frame[2].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(179);
	((mindustry_gen_BuildingControlSelectCallPacket *) NULL_CHECK((frame[2].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(180);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clearItems_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clearItems", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(185);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(186);
	SM_mindustry_input_InputHandler_clearItems_mindustry_gen_Building(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(188);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(189);
	clinit_mindustry_gen_ClearItemsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClearItemsCallPacket);
	init_mindustry_gen_ClearItemsCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(190);
	((mindustry_gen_ClearItemsCallPacket *) NULL_CHECK((frame[1].o)))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(191);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(193);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clearLiquids_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clearLiquids", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(196);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(197);
	SM_mindustry_input_InputHandler_clearLiquids_mindustry_gen_Building(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(199);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(200);
	clinit_mindustry_gen_ClearLiquidsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClearLiquidsCallPacket);
	init_mindustry_gen_ClearLiquidsCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(201);
	((mindustry_gen_ClearLiquidsCallPacket *) NULL_CHECK((frame[1].o)))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(202);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(204);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clearObjectives(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clearObjectives", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	{
	LINE_NUMBER(207);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(208);
	SM_mindustry_core_NetClient_clearObjectives(ctx);
label_2:;
	{
	LINE_NUMBER(210);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(211);
	clinit_mindustry_gen_ClearObjectivesCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClearObjectivesCallPacket);
	init_mindustry_gen_ClearObjectivesCallPacket(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(212);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clearObjectives_mindustry_net_NetConnection(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clearObjectives", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(217);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(218);
	SM_mindustry_core_NetClient_clearObjectives(ctx);
label_2:;
	{
	LINE_NUMBER(220);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(221);
	clinit_mindustry_gen_ClearObjectivesCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClearObjectivesCallPacket);
	init_mindustry_gen_ClearObjectivesCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(222);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientBinaryPacketReliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientBinaryPacketReliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(227);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(228);
	clinit_mindustry_gen_ClientBinaryPacketReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientBinaryPacketReliableCallPacket);
	init_mindustry_gen_ClientBinaryPacketReliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(229);
	((mindustry_gen_ClientBinaryPacketReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_type = (jref) (frame[0].o);
	LINE_NUMBER(230);
	((mindustry_gen_ClientBinaryPacketReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_contents = (jref) (frame[1].o);
	LINE_NUMBER(231);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientBinaryPacketReliable_mindustry_net_NetConnection_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientBinaryPacketReliable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(237);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(238);
	clinit_mindustry_gen_ClientBinaryPacketReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientBinaryPacketReliableCallPacket);
	init_mindustry_gen_ClientBinaryPacketReliableCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(239);
	((mindustry_gen_ClientBinaryPacketReliableCallPacket *) NULL_CHECK((frame[3].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(240);
	((mindustry_gen_ClientBinaryPacketReliableCallPacket *) NULL_CHECK((frame[3].o)))->F_contents = (jref) (frame[2].o);
	LINE_NUMBER(241);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(243);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientBinaryPacketUnreliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientBinaryPacketUnreliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(246);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(247);
	clinit_mindustry_gen_ClientBinaryPacketUnreliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientBinaryPacketUnreliableCallPacket);
	init_mindustry_gen_ClientBinaryPacketUnreliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(248);
	((mindustry_gen_ClientBinaryPacketUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_type = (jref) (frame[0].o);
	LINE_NUMBER(249);
	((mindustry_gen_ClientBinaryPacketUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_contents = (jref) (frame[1].o);
	LINE_NUMBER(250);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(252);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientBinaryPacketUnreliable_mindustry_net_NetConnection_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientBinaryPacketUnreliable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(256);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(257);
	clinit_mindustry_gen_ClientBinaryPacketUnreliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientBinaryPacketUnreliableCallPacket);
	init_mindustry_gen_ClientBinaryPacketUnreliableCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(258);
	((mindustry_gen_ClientBinaryPacketUnreliableCallPacket *) NULL_CHECK((frame[3].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(259);
	((mindustry_gen_ClientBinaryPacketUnreliableCallPacket *) NULL_CHECK((frame[3].o)))->F_contents = (jref) (frame[2].o);
	LINE_NUMBER(260);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientLogicDataReliable_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientLogicDataReliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(265);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(266);
	clinit_mindustry_gen_ClientLogicDataReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientLogicDataReliableCallPacket);
	init_mindustry_gen_ClientLogicDataReliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(267);
	((mindustry_gen_ClientLogicDataReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_channel = (jref) (frame[0].o);
	LINE_NUMBER(268);
	((mindustry_gen_ClientLogicDataReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(269);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(271);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientLogicDataUnreliable_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientLogicDataUnreliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(274);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(275);
	clinit_mindustry_gen_ClientLogicDataUnreliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientLogicDataUnreliableCallPacket);
	init_mindustry_gen_ClientLogicDataUnreliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(276);
	((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_channel = (jref) (frame[0].o);
	LINE_NUMBER(277);
	((mindustry_gen_ClientLogicDataUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(278);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(280);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientPacketReliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientPacketReliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(283);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(284);
	clinit_mindustry_gen_ClientPacketReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientPacketReliableCallPacket);
	init_mindustry_gen_ClientPacketReliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(285);
	((mindustry_gen_ClientPacketReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_type = (jref) (frame[0].o);
	LINE_NUMBER(286);
	((mindustry_gen_ClientPacketReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_contents = (jref) (frame[1].o);
	LINE_NUMBER(287);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientPacketReliable_mindustry_net_NetConnection_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientPacketReliable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(293);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(294);
	clinit_mindustry_gen_ClientPacketReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientPacketReliableCallPacket);
	init_mindustry_gen_ClientPacketReliableCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(295);
	((mindustry_gen_ClientPacketReliableCallPacket *) NULL_CHECK((frame[3].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(296);
	((mindustry_gen_ClientPacketReliableCallPacket *) NULL_CHECK((frame[3].o)))->F_contents = (jref) (frame[2].o);
	LINE_NUMBER(297);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(299);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientPacketUnreliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientPacketUnreliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(302);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(303);
	clinit_mindustry_gen_ClientPacketUnreliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientPacketUnreliableCallPacket);
	init_mindustry_gen_ClientPacketUnreliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(304);
	((mindustry_gen_ClientPacketUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_type = (jref) (frame[0].o);
	LINE_NUMBER(305);
	((mindustry_gen_ClientPacketUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_contents = (jref) (frame[1].o);
	LINE_NUMBER(306);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(308);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientPacketUnreliable_mindustry_net_NetConnection_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientPacketUnreliable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(312);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(313);
	clinit_mindustry_gen_ClientPacketUnreliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientPacketUnreliableCallPacket);
	init_mindustry_gen_ClientPacketUnreliableCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(314);
	((mindustry_gen_ClientPacketUnreliableCallPacket *) NULL_CHECK((frame[3].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(315);
	((mindustry_gen_ClientPacketUnreliableCallPacket *) NULL_CHECK((frame[3].o)))->F_contents = (jref) (frame[2].o);
	LINE_NUMBER(316);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(318);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientPlanSnapshot_int_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jint param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientPlanSnapshot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(321);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(322);
	clinit_mindustry_gen_ClientPlanSnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientPlanSnapshotCallPacket);
	init_mindustry_gen_ClientPlanSnapshotCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(323);
	((mindustry_gen_ClientPlanSnapshotCallPacket *) NULL_CHECK((frame[2].o)))->F_groupId = (frame[0].i);
	LINE_NUMBER(324);
	((mindustry_gen_ClientPlanSnapshotCallPacket *) NULL_CHECK((frame[2].o)))->F_plans = (jref) (frame[1].o);
	LINE_NUMBER(325);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientPlanSnapshotReceived_mindustry_net_NetConnection_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientPlanSnapshotReceived", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(331);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(332);
	clinit_mindustry_gen_ClientPlanSnapshotReceivedCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientPlanSnapshotReceivedCallPacket);
	init_mindustry_gen_ClientPlanSnapshotReceivedCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(333);
	((mindustry_gen_ClientPlanSnapshotReceivedCallPacket *) NULL_CHECK((frame[4].o)))->F_player = (jref) (frame[1].o);
	LINE_NUMBER(334);
	((mindustry_gen_ClientPlanSnapshotReceivedCallPacket *) NULL_CHECK((frame[4].o)))->F_groupId = (frame[2].i);
	LINE_NUMBER(335);
	((mindustry_gen_ClientPlanSnapshotReceivedCallPacket *) NULL_CHECK((frame[4].o)))->F_plans = (jref) (frame[3].o);
	LINE_NUMBER(336);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[4].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(338);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_clientSnapshot_int_int_boolean_float_float_float_float_float_float_float_float_mindustry_world_Tile_boolean_boolean_boolean_boolean_mindustry_world_Block_int_arc_struct_Queue_float_float_float_float(jcontext ctx, jint param0, jint param1, jbool param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jobject param11, jbool param12, jbool param13, jbool param14, jbool param15, jobject param16, jint param17, jobject param18, jfloat param19, jfloat param20, jfloat param21, jfloat param22) {
	jtype frame[27];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:clientSnapshot", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].o = param11;
	frame[12].i = param12;
	frame[13].i = param13;
	frame[14].i = param14;
	frame[15].i = param15;
	frame[16].o = param16;
	frame[17].i = param17;
	frame[18].o = param18;
	frame[19].f = param19;
	frame[20].f = param20;
	frame[21].f = param21;
	frame[22].f = param22;
	{
	LINE_NUMBER(345);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(346);
	clinit_mindustry_gen_ClientSnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ClientSnapshotCallPacket);
	init_mindustry_gen_ClientSnapshotCallPacket(ctx, sp[0].o);
	frame[23].o = sp[0].o;
	LINE_NUMBER(347);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_snapshotID = (frame[0].i);
	LINE_NUMBER(348);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_unitID = (frame[1].i);
	LINE_NUMBER(349);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_dead = (frame[2].i);
	LINE_NUMBER(350);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_x = (frame[3].f);
	LINE_NUMBER(351);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_y = (frame[4].f);
	LINE_NUMBER(352);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_pointerX = (frame[5].f);
	LINE_NUMBER(353);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_pointerY = (frame[6].f);
	LINE_NUMBER(354);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_rotation = (frame[7].f);
	LINE_NUMBER(355);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_baseRotation = (frame[8].f);
	LINE_NUMBER(356);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_xVelocity = (frame[9].f);
	LINE_NUMBER(357);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_yVelocity = (frame[10].f);
	LINE_NUMBER(358);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_mining = (jref) (frame[11].o);
	LINE_NUMBER(359);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_boosting = (frame[12].i);
	LINE_NUMBER(360);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_shooting = (frame[13].i);
	LINE_NUMBER(361);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_chatting = (frame[14].i);
	LINE_NUMBER(362);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_building = (frame[15].i);
	LINE_NUMBER(363);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_selectedBlock = (jref) (frame[16].o);
	LINE_NUMBER(364);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_selectedRotation = (frame[17].i);
	LINE_NUMBER(365);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_plans = (jref) (frame[18].o);
	LINE_NUMBER(366);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_viewX = (frame[19].f);
	LINE_NUMBER(367);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_viewY = (frame[20].f);
	LINE_NUMBER(368);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_viewWidth = (frame[21].f);
	LINE_NUMBER(369);
	((mindustry_gen_ClientSnapshotCallPacket *) NULL_CHECK((frame[23].o)))->F_viewHeight = (frame[22].f);
	LINE_NUMBER(370);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[23].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(372);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_commandBuilding_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:commandBuilding", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(375);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(376);
	SM_mindustry_input_InputHandler_commandBuilding_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(378);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(379);
	clinit_mindustry_gen_CommandBuildingCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CommandBuildingCallPacket);
	init_mindustry_gen_CommandBuildingCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(380);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(381);
	((mindustry_gen_CommandBuildingCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(383);
	((mindustry_gen_CommandBuildingCallPacket *) NULL_CHECK((frame[3].o)))->F_buildings = (jref) (frame[1].o);
	LINE_NUMBER(384);
	((mindustry_gen_CommandBuildingCallPacket *) NULL_CHECK((frame[3].o)))->F_target = (jref) (frame[2].o);
	LINE_NUMBER(385);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(387);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_commandBuilding__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:commandBuilding__forward", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(391);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(392);
	clinit_mindustry_gen_CommandBuildingCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CommandBuildingCallPacket);
	init_mindustry_gen_CommandBuildingCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(393);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(394);
	((mindustry_gen_CommandBuildingCallPacket *) NULL_CHECK((frame[4].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(396);
	((mindustry_gen_CommandBuildingCallPacket *) NULL_CHECK((frame[4].o)))->F_buildings = (jref) (frame[2].o);
	LINE_NUMBER(397);
	((mindustry_gen_CommandBuildingCallPacket *) NULL_CHECK((frame[4].o)))->F_target = (jref) (frame[3].o);
	LINE_NUMBER(398);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(400);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_commandUnits_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5, jbool param6) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:commandUnits", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(404);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(405);
	SM_mindustry_input_InputHandler_commandUnits_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].i), (frame[6].i));
	}
label_2:;
	{
	LINE_NUMBER(407);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(408);
	clinit_mindustry_gen_CommandUnitsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CommandUnitsCallPacket);
	init_mindustry_gen_CommandUnitsCallPacket(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(409);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(410);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[7].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(412);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[7].o)))->F_unitIds = (jref) (frame[1].o);
	LINE_NUMBER(413);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[7].o)))->F_buildTarget = (jref) (frame[2].o);
	LINE_NUMBER(414);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[7].o)))->F_unitTarget = (jref) (frame[3].o);
	LINE_NUMBER(415);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[7].o)))->F_posTarget = (jref) (frame[4].o);
	LINE_NUMBER(416);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[7].o)))->F_queueCommand = (frame[5].i);
	LINE_NUMBER(417);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[7].o)))->F_finalBatch = (frame[6].i);
	LINE_NUMBER(418);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[7].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(420);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_commandUnits__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6, jbool param7) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:commandUnits__forward", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(425);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(426);
	clinit_mindustry_gen_CommandUnitsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CommandUnitsCallPacket);
	init_mindustry_gen_CommandUnitsCallPacket(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(427);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(428);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[8].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(430);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[8].o)))->F_unitIds = (jref) (frame[2].o);
	LINE_NUMBER(431);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[8].o)))->F_buildTarget = (jref) (frame[3].o);
	LINE_NUMBER(432);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[8].o)))->F_unitTarget = (jref) (frame[4].o);
	LINE_NUMBER(433);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[8].o)))->F_posTarget = (jref) (frame[5].o);
	LINE_NUMBER(434);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[8].o)))->F_queueCommand = (frame[6].i);
	LINE_NUMBER(435);
	((mindustry_gen_CommandUnitsCallPacket *) NULL_CHECK((frame[8].o)))->F_finalBatch = (frame[7].i);
	LINE_NUMBER(436);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[8].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(438);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_completeObjective_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:completeObjective", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(441);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(442);
	SM_mindustry_core_NetClient_completeObjective_int(ctx, (frame[0].i));
	}
label_2:;
	{
	LINE_NUMBER(444);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(445);
	clinit_mindustry_gen_CompleteObjectiveCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CompleteObjectiveCallPacket);
	init_mindustry_gen_CompleteObjectiveCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(446);
	((mindustry_gen_CompleteObjectiveCallPacket *) NULL_CHECK((frame[1].o)))->F_index = (frame[0].i);
	LINE_NUMBER(447);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(449);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_completeObjective_mindustry_net_NetConnection_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:completeObjective", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(452);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(453);
	SM_mindustry_core_NetClient_completeObjective_int(ctx, (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(455);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(456);
	clinit_mindustry_gen_CompleteObjectiveCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CompleteObjectiveCallPacket);
	init_mindustry_gen_CompleteObjectiveCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(457);
	((mindustry_gen_CompleteObjectiveCallPacket *) NULL_CHECK((frame[2].o)))->F_index = (frame[1].i);
	LINE_NUMBER(458);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(460);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_connect_mindustry_net_NetConnection_java_lang_String_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:connect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(463);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(464);
	SM_mindustry_core_NetClient_connect_java_lang_String_int(ctx, (frame[1].o), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(466);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(467);
	clinit_mindustry_gen_ConnectCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ConnectCallPacket);
	init_mindustry_gen_ConnectCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(468);
	((mindustry_gen_ConnectCallPacket *) NULL_CHECK((frame[3].o)))->F_ip = (jref) (frame[1].o);
	LINE_NUMBER(469);
	((mindustry_gen_ConnectCallPacket *) NULL_CHECK((frame[3].o)))->F_port = (frame[2].i);
	LINE_NUMBER(470);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(472);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_connectConfirm(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:connectConfirm", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	{
	LINE_NUMBER(475);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(476);
	clinit_mindustry_gen_ConnectConfirmCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ConnectConfirmCallPacket);
	init_mindustry_gen_ConnectConfirmCallPacket(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(477);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(479);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_constructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jbyte param3, jobject param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:constructFinish", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(483);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(484);
	SM_mindustry_world_blocks_ConstructBlock_constructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].o));
	}
label_2:;
	{
	LINE_NUMBER(486);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(487);
	clinit_mindustry_gen_ConstructFinishCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ConstructFinishCallPacket);
	init_mindustry_gen_ConstructFinishCallPacket(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(488);
	((mindustry_gen_ConstructFinishCallPacket *) NULL_CHECK((frame[6].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(489);
	((mindustry_gen_ConstructFinishCallPacket *) NULL_CHECK((frame[6].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(490);
	((mindustry_gen_ConstructFinishCallPacket *) NULL_CHECK((frame[6].o)))->F_builder = (jref) (frame[2].o);
	LINE_NUMBER(491);
	((mindustry_gen_ConstructFinishCallPacket *) NULL_CHECK((frame[6].o)))->F_rotation = (frame[3].i);
	LINE_NUMBER(492);
	((mindustry_gen_ConstructFinishCallPacket *) NULL_CHECK((frame[6].o)))->F_team = (jref) (frame[4].o);
	LINE_NUMBER(493);
	((mindustry_gen_ConstructFinishCallPacket *) NULL_CHECK((frame[6].o)))->F_config = (jref) (frame[5].o);
	LINE_NUMBER(494);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[6].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(496);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_copyToClipboard_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:copyToClipboard", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(499);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(500);
	clinit_mindustry_gen_CopyToClipboardCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CopyToClipboardCallPacket);
	init_mindustry_gen_CopyToClipboardCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(501);
	((mindustry_gen_CopyToClipboardCallPacket *) NULL_CHECK((frame[1].o)))->F_text = (jref) (frame[0].o);
	LINE_NUMBER(502);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(504);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_copyToClipboard_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:copyToClipboard", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(507);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(508);
	clinit_mindustry_gen_CopyToClipboardCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CopyToClipboardCallPacket);
	init_mindustry_gen_CopyToClipboardCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(509);
	((mindustry_gen_CopyToClipboardCallPacket *) NULL_CHECK((frame[2].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(510);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(512);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_createBullet_mindustry_entities_bullet_BulletType_mindustry_game_Team_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:createBullet", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(516);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(517);
	SM_mindustry_entities_bullet_BulletType_createBullet_mindustry_entities_bullet_BulletType_mindustry_game_Team_float_float_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f));
	}
label_2:;
	{
	LINE_NUMBER(519);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(520);
	clinit_mindustry_gen_CreateBulletCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CreateBulletCallPacket);
	init_mindustry_gen_CreateBulletCallPacket(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(521);
	((mindustry_gen_CreateBulletCallPacket *) NULL_CHECK((frame[8].o)))->F_type = (jref) (frame[0].o);
	LINE_NUMBER(522);
	((mindustry_gen_CreateBulletCallPacket *) NULL_CHECK((frame[8].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(523);
	((mindustry_gen_CreateBulletCallPacket *) NULL_CHECK((frame[8].o)))->F_x = (frame[2].f);
	LINE_NUMBER(524);
	((mindustry_gen_CreateBulletCallPacket *) NULL_CHECK((frame[8].o)))->F_y = (frame[3].f);
	LINE_NUMBER(525);
	((mindustry_gen_CreateBulletCallPacket *) NULL_CHECK((frame[8].o)))->F_angle = (frame[4].f);
	LINE_NUMBER(526);
	((mindustry_gen_CreateBulletCallPacket *) NULL_CHECK((frame[8].o)))->F_damage = (frame[5].f);
	LINE_NUMBER(527);
	((mindustry_gen_CreateBulletCallPacket *) NULL_CHECK((frame[8].o)))->F_velocityScl = (frame[6].f);
	LINE_NUMBER(528);
	((mindustry_gen_CreateBulletCallPacket *) NULL_CHECK((frame[8].o)))->F_lifetimeScl = (frame[7].f);
	LINE_NUMBER(529);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[8].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(531);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_createMarker_int_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jint param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:createMarker", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(534);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(535);
	SM_mindustry_logic_LExecutor_createMarker_int_mindustry_game_MapObjectives$ObjectiveMarker(ctx, (frame[0].i), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(537);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(538);
	clinit_mindustry_gen_CreateMarkerCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CreateMarkerCallPacket);
	init_mindustry_gen_CreateMarkerCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(539);
	((mindustry_gen_CreateMarkerCallPacket *) NULL_CHECK((frame[2].o)))->F_id = (frame[0].i);
	LINE_NUMBER(540);
	((mindustry_gen_CreateMarkerCallPacket *) NULL_CHECK((frame[2].o)))->F_marker = (jref) (frame[1].o);
	LINE_NUMBER(541);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(543);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_createMarker_mindustry_net_NetConnection_int_mindustry_game_MapObjectives$ObjectiveMarker(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:createMarker", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(547);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(548);
	SM_mindustry_logic_LExecutor_createMarker_int_mindustry_game_MapObjectives$ObjectiveMarker(ctx, (frame[1].i), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(550);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(551);
	clinit_mindustry_gen_CreateMarkerCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CreateMarkerCallPacket);
	init_mindustry_gen_CreateMarkerCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(552);
	((mindustry_gen_CreateMarkerCallPacket *) NULL_CHECK((frame[3].o)))->F_id = (frame[1].i);
	LINE_NUMBER(553);
	((mindustry_gen_CreateMarkerCallPacket *) NULL_CHECK((frame[3].o)))->F_marker = (jref) (frame[2].o);
	LINE_NUMBER(554);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(556);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_createWeather_mindustry_type_Weather_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:createWeather", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(560);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(561);
	SM_mindustry_type_Weather_createWeather_mindustry_type_Weather_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	}
label_2:;
	{
	LINE_NUMBER(563);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(564);
	clinit_mindustry_gen_CreateWeatherCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_CreateWeatherCallPacket);
	init_mindustry_gen_CreateWeatherCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(565);
	((mindustry_gen_CreateWeatherCallPacket *) NULL_CHECK((frame[5].o)))->F_weather = (jref) (frame[0].o);
	LINE_NUMBER(566);
	((mindustry_gen_CreateWeatherCallPacket *) NULL_CHECK((frame[5].o)))->F_intensity = (frame[1].f);
	LINE_NUMBER(567);
	((mindustry_gen_CreateWeatherCallPacket *) NULL_CHECK((frame[5].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(568);
	((mindustry_gen_CreateWeatherCallPacket *) NULL_CHECK((frame[5].o)))->F_windX = (frame[3].f);
	LINE_NUMBER(569);
	((mindustry_gen_CreateWeatherCallPacket *) NULL_CHECK((frame[5].o)))->F_windY = (frame[4].f);
	LINE_NUMBER(570);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(572);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_debugStatusClient_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:debugStatusClient", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(575);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(576);
	clinit_mindustry_gen_DebugStatusClientCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_DebugStatusClientCallPacket);
	init_mindustry_gen_DebugStatusClientCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(577);
	((mindustry_gen_DebugStatusClientCallPacket *) NULL_CHECK((frame[2].o)))->F_value = (frame[0].i);
	LINE_NUMBER(578);
	((mindustry_gen_DebugStatusClientCallPacket *) NULL_CHECK((frame[2].o)))->F_lastClientSnapshot = (frame[1].i);
	LINE_NUMBER(579);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(581);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_debugStatusClient_mindustry_net_NetConnection_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:debugStatusClient", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(585);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(586);
	clinit_mindustry_gen_DebugStatusClientCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_DebugStatusClientCallPacket);
	init_mindustry_gen_DebugStatusClientCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(587);
	((mindustry_gen_DebugStatusClientCallPacket *) NULL_CHECK((frame[3].o)))->F_value = (frame[1].i);
	LINE_NUMBER(588);
	((mindustry_gen_DebugStatusClientCallPacket *) NULL_CHECK((frame[3].o)))->F_lastClientSnapshot = (frame[2].i);
	LINE_NUMBER(589);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(591);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_debugStatusClientUnreliable_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:debugStatusClientUnreliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(594);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(595);
	clinit_mindustry_gen_DebugStatusClientUnreliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_DebugStatusClientUnreliableCallPacket);
	init_mindustry_gen_DebugStatusClientUnreliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(596);
	((mindustry_gen_DebugStatusClientUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_value = (frame[0].i);
	LINE_NUMBER(597);
	((mindustry_gen_DebugStatusClientUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_lastClientSnapshot = (frame[1].i);
	LINE_NUMBER(598);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(600);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_debugStatusClientUnreliable_mindustry_net_NetConnection_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:debugStatusClientUnreliable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(604);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(605);
	clinit_mindustry_gen_DebugStatusClientUnreliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_DebugStatusClientUnreliableCallPacket);
	init_mindustry_gen_DebugStatusClientUnreliableCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(606);
	((mindustry_gen_DebugStatusClientUnreliableCallPacket *) NULL_CHECK((frame[3].o)))->F_value = (frame[1].i);
	LINE_NUMBER(607);
	((mindustry_gen_DebugStatusClientUnreliableCallPacket *) NULL_CHECK((frame[3].o)))->F_lastClientSnapshot = (frame[2].i);
	LINE_NUMBER(608);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(610);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:deconstructFinish", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(613);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(614);
	SM_mindustry_world_blocks_ConstructBlock_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(616);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(617);
	clinit_mindustry_gen_DeconstructFinishCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_DeconstructFinishCallPacket);
	init_mindustry_gen_DeconstructFinishCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(618);
	((mindustry_gen_DeconstructFinishCallPacket *) NULL_CHECK((frame[3].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(619);
	((mindustry_gen_DeconstructFinishCallPacket *) NULL_CHECK((frame[3].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(620);
	((mindustry_gen_DeconstructFinishCallPacket *) NULL_CHECK((frame[3].o)))->F_builder = (jref) (frame[2].o);
	LINE_NUMBER(621);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(623);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_deletePlans_mindustry_gen_Player_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:deletePlans", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(626);
	SM_mindustry_input_InputHandler_deletePlans_mindustry_gen_Player_Array1_int(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(627);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(628);
	clinit_mindustry_gen_DeletePlansCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_DeletePlansCallPacket);
	init_mindustry_gen_DeletePlansCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(629);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(630);
	((mindustry_gen_DeletePlansCallPacket *) NULL_CHECK((frame[2].o)))->F_player = (jref) (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(632);
	((mindustry_gen_DeletePlansCallPacket *) NULL_CHECK((frame[2].o)))->F_positions = (jref) (frame[1].o);
	LINE_NUMBER(633);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(635);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_deletePlans__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:deletePlans__forward", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(638);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(639);
	clinit_mindustry_gen_DeletePlansCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_DeletePlansCallPacket);
	init_mindustry_gen_DeletePlansCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(640);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(641);
	((mindustry_gen_DeletePlansCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(643);
	((mindustry_gen_DeletePlansCallPacket *) NULL_CHECK((frame[3].o)))->F_positions = (jref) (frame[2].o);
	LINE_NUMBER(644);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (frame[3].o), (jint(0)));
	}
label_2:;
	LINE_NUMBER(646);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_destroyPayload_mindustry_gen_Building(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:destroyPayload", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(649);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(650);
	SM_mindustry_game_Teams_destroyPayload_mindustry_gen_Building(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(652);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(653);
	clinit_mindustry_gen_DestroyPayloadCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_DestroyPayloadCallPacket);
	init_mindustry_gen_DestroyPayloadCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(654);
	((mindustry_gen_DestroyPayloadCallPacket *) NULL_CHECK((frame[1].o)))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(655);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(657);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_dropItem_float(jcontext ctx, jfloat param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:dropItem", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(660);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(661);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_input_InputHandler_dropItem_mindustry_gen_Player_float(ctx, sp[0].o, (frame[0].f));
	}
label_2:;
	{
	LINE_NUMBER(663);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(664);
	clinit_mindustry_gen_DropItemCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_DropItemCallPacket);
	init_mindustry_gen_DropItemCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(665);
	((mindustry_gen_DropItemCallPacket *) NULL_CHECK((frame[1].o)))->F_angle = (frame[0].f);
	LINE_NUMBER(666);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(668);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:effect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(671);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(672);
	clinit_mindustry_gen_EffectCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_EffectCallPacket);
	init_mindustry_gen_EffectCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(673);
	((mindustry_gen_EffectCallPacket *) NULL_CHECK((frame[5].o)))->F_effect = (jref) (frame[0].o);
	LINE_NUMBER(674);
	((mindustry_gen_EffectCallPacket *) NULL_CHECK((frame[5].o)))->F_x = (frame[1].f);
	LINE_NUMBER(675);
	((mindustry_gen_EffectCallPacket *) NULL_CHECK((frame[5].o)))->F_y = (frame[2].f);
	LINE_NUMBER(676);
	((mindustry_gen_EffectCallPacket *) NULL_CHECK((frame[5].o)))->F_rotation = (frame[3].f);
	LINE_NUMBER(677);
	((mindustry_gen_EffectCallPacket *) NULL_CHECK((frame[5].o)))->F_color = (jref) (frame[4].o);
	LINE_NUMBER(678);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(680);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_effect_mindustry_net_NetConnection_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:effect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(684);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(685);
	clinit_mindustry_gen_EffectCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_EffectCallPacket);
	init_mindustry_gen_EffectCallPacket(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(686);
	((mindustry_gen_EffectCallPacket *) NULL_CHECK((frame[6].o)))->F_effect = (jref) (frame[1].o);
	LINE_NUMBER(687);
	((mindustry_gen_EffectCallPacket *) NULL_CHECK((frame[6].o)))->F_x = (frame[2].f);
	LINE_NUMBER(688);
	((mindustry_gen_EffectCallPacket *) NULL_CHECK((frame[6].o)))->F_y = (frame[3].f);
	LINE_NUMBER(689);
	((mindustry_gen_EffectCallPacket *) NULL_CHECK((frame[6].o)))->F_rotation = (frame[4].f);
	LINE_NUMBER(690);
	((mindustry_gen_EffectCallPacket *) NULL_CHECK((frame[6].o)))->F_color = (jref) (frame[5].o);
	LINE_NUMBER(691);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[6].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(693);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4, jobject param5) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:effect", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(697);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(698);
	clinit_mindustry_gen_EffectCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_EffectCallPacket2);
	init_mindustry_gen_EffectCallPacket2(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(699);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[6].o)))->F_effect = (jref) (frame[0].o);
	LINE_NUMBER(700);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[6].o)))->F_x = (frame[1].f);
	LINE_NUMBER(701);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[6].o)))->F_y = (frame[2].f);
	LINE_NUMBER(702);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[6].o)))->F_rotation = (frame[3].f);
	LINE_NUMBER(703);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[6].o)))->F_color = (jref) (frame[4].o);
	LINE_NUMBER(704);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[6].o)))->F_data = (jref) (frame[5].o);
	LINE_NUMBER(705);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[6].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(707);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_effect_mindustry_net_NetConnection_mindustry_entities_Effect_float_float_float_arc_graphics_Color_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:effect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(711);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(712);
	clinit_mindustry_gen_EffectCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_EffectCallPacket2);
	init_mindustry_gen_EffectCallPacket2(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(713);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[7].o)))->F_effect = (jref) (frame[1].o);
	LINE_NUMBER(714);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[7].o)))->F_x = (frame[2].f);
	LINE_NUMBER(715);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[7].o)))->F_y = (frame[3].f);
	LINE_NUMBER(716);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[7].o)))->F_rotation = (frame[4].f);
	LINE_NUMBER(717);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[7].o)))->F_color = (jref) (frame[5].o);
	LINE_NUMBER(718);
	((mindustry_gen_EffectCallPacket2 *) NULL_CHECK((frame[7].o)))->F_data = (jref) (frame[6].o);
	LINE_NUMBER(719);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[7].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(721);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_effectReliable_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:effectReliable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(724);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(725);
	clinit_mindustry_gen_EffectReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_EffectReliableCallPacket);
	init_mindustry_gen_EffectReliableCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(726);
	((mindustry_gen_EffectReliableCallPacket *) NULL_CHECK((frame[5].o)))->F_effect = (jref) (frame[0].o);
	LINE_NUMBER(727);
	((mindustry_gen_EffectReliableCallPacket *) NULL_CHECK((frame[5].o)))->F_x = (frame[1].f);
	LINE_NUMBER(728);
	((mindustry_gen_EffectReliableCallPacket *) NULL_CHECK((frame[5].o)))->F_y = (frame[2].f);
	LINE_NUMBER(729);
	((mindustry_gen_EffectReliableCallPacket *) NULL_CHECK((frame[5].o)))->F_rotation = (frame[3].f);
	LINE_NUMBER(730);
	((mindustry_gen_EffectReliableCallPacket *) NULL_CHECK((frame[5].o)))->F_color = (jref) (frame[4].o);
	LINE_NUMBER(731);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(733);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_effectReliable_mindustry_net_NetConnection_mindustry_entities_Effect_float_float_float_arc_graphics_Color(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:effectReliable", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(737);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(738);
	clinit_mindustry_gen_EffectReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_EffectReliableCallPacket);
	init_mindustry_gen_EffectReliableCallPacket(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(739);
	((mindustry_gen_EffectReliableCallPacket *) NULL_CHECK((frame[6].o)))->F_effect = (jref) (frame[1].o);
	LINE_NUMBER(740);
	((mindustry_gen_EffectReliableCallPacket *) NULL_CHECK((frame[6].o)))->F_x = (frame[2].f);
	LINE_NUMBER(741);
	((mindustry_gen_EffectReliableCallPacket *) NULL_CHECK((frame[6].o)))->F_y = (frame[3].f);
	LINE_NUMBER(742);
	((mindustry_gen_EffectReliableCallPacket *) NULL_CHECK((frame[6].o)))->F_rotation = (frame[4].f);
	LINE_NUMBER(743);
	((mindustry_gen_EffectReliableCallPacket *) NULL_CHECK((frame[6].o)))->F_color = (jref) (frame[5].o);
	LINE_NUMBER(744);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[6].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(746);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_entitySnapshot_short_Array1_byte(jcontext ctx, jshort param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:entitySnapshot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(749);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(750);
	clinit_mindustry_gen_EntitySnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_EntitySnapshotCallPacket);
	init_mindustry_gen_EntitySnapshotCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(751);
	((mindustry_gen_EntitySnapshotCallPacket *) NULL_CHECK((frame[2].o)))->F_amount = (frame[0].i);
	LINE_NUMBER(752);
	((mindustry_gen_EntitySnapshotCallPacket *) NULL_CHECK((frame[2].o)))->F_data = (jref) (frame[1].o);
	LINE_NUMBER(753);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(755);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_entitySnapshot_mindustry_net_NetConnection_short_Array1_byte(jcontext ctx, jobject param0, jshort param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:entitySnapshot", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(758);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(759);
	clinit_mindustry_gen_EntitySnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_EntitySnapshotCallPacket);
	init_mindustry_gen_EntitySnapshotCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(760);
	((mindustry_gen_EntitySnapshotCallPacket *) NULL_CHECK((frame[3].o)))->F_amount = (frame[1].i);
	LINE_NUMBER(761);
	((mindustry_gen_EntitySnapshotCallPacket *) NULL_CHECK((frame[3].o)))->F_data = (jref) (frame[2].o);
	LINE_NUMBER(762);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(764);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_fillTileBlocks_int_int_int_int_mindustry_world_Block_mindustry_game_Team(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:fillTileBlocks", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(767);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(768);
	SM_mindustry_world_Tile_fillTileBlocks_int_int_int_int_mindustry_world_Block_mindustry_game_Team(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o), (frame[5].o));
	}
label_2:;
	{
	LINE_NUMBER(770);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(771);
	clinit_mindustry_gen_FillTileBlocksCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_FillTileBlocksCallPacket);
	init_mindustry_gen_FillTileBlocksCallPacket(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(772);
	((mindustry_gen_FillTileBlocksCallPacket *) NULL_CHECK((frame[6].o)))->F_x = (frame[0].i);
	LINE_NUMBER(773);
	((mindustry_gen_FillTileBlocksCallPacket *) NULL_CHECK((frame[6].o)))->F_y = (frame[1].i);
	LINE_NUMBER(774);
	((mindustry_gen_FillTileBlocksCallPacket *) NULL_CHECK((frame[6].o)))->F_x2 = (frame[2].i);
	LINE_NUMBER(775);
	((mindustry_gen_FillTileBlocksCallPacket *) NULL_CHECK((frame[6].o)))->F_y2 = (frame[3].i);
	LINE_NUMBER(776);
	((mindustry_gen_FillTileBlocksCallPacket *) NULL_CHECK((frame[6].o)))->F_block = (jref) (frame[4].o);
	LINE_NUMBER(777);
	((mindustry_gen_FillTileBlocksCallPacket *) NULL_CHECK((frame[6].o)))->F_team = (jref) (frame[5].o);
	LINE_NUMBER(778);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[6].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(780);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_fillTileFloors_int_int_int_int_mindustry_world_Block(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:fillTileFloors", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(783);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(784);
	SM_mindustry_world_Tile_fillTileFloors_int_int_int_int_mindustry_world_Block(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	}
label_2:;
	{
	LINE_NUMBER(786);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(787);
	clinit_mindustry_gen_FillTileFloorsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_FillTileFloorsCallPacket);
	init_mindustry_gen_FillTileFloorsCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(788);
	((mindustry_gen_FillTileFloorsCallPacket *) NULL_CHECK((frame[5].o)))->F_x = (frame[0].i);
	LINE_NUMBER(789);
	((mindustry_gen_FillTileFloorsCallPacket *) NULL_CHECK((frame[5].o)))->F_y = (frame[1].i);
	LINE_NUMBER(790);
	((mindustry_gen_FillTileFloorsCallPacket *) NULL_CHECK((frame[5].o)))->F_x2 = (frame[2].i);
	LINE_NUMBER(791);
	((mindustry_gen_FillTileFloorsCallPacket *) NULL_CHECK((frame[5].o)))->F_y2 = (frame[3].i);
	LINE_NUMBER(792);
	((mindustry_gen_FillTileFloorsCallPacket *) NULL_CHECK((frame[5].o)))->F_block = (jref) (frame[4].o);
	LINE_NUMBER(793);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(795);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_fillTileOverlays_int_int_int_int_mindustry_world_Block(jcontext ctx, jint param0, jint param1, jint param2, jint param3, jobject param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:fillTileOverlays", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(798);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(799);
	SM_mindustry_world_Tile_fillTileOverlays_int_int_int_int_mindustry_world_Block(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].o));
	}
label_2:;
	{
	LINE_NUMBER(801);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(802);
	clinit_mindustry_gen_FillTileOverlaysCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_FillTileOverlaysCallPacket);
	init_mindustry_gen_FillTileOverlaysCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(803);
	((mindustry_gen_FillTileOverlaysCallPacket *) NULL_CHECK((frame[5].o)))->F_x = (frame[0].i);
	LINE_NUMBER(804);
	((mindustry_gen_FillTileOverlaysCallPacket *) NULL_CHECK((frame[5].o)))->F_y = (frame[1].i);
	LINE_NUMBER(805);
	((mindustry_gen_FillTileOverlaysCallPacket *) NULL_CHECK((frame[5].o)))->F_x2 = (frame[2].i);
	LINE_NUMBER(806);
	((mindustry_gen_FillTileOverlaysCallPacket *) NULL_CHECK((frame[5].o)))->F_y2 = (frame[3].i);
	LINE_NUMBER(807);
	((mindustry_gen_FillTileOverlaysCallPacket *) NULL_CHECK((frame[5].o)))->F_block = (jref) (frame[4].o);
	LINE_NUMBER(808);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(810);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_followUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:followUpMenu", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(813);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(814);
	clinit_mindustry_gen_FollowUpMenuCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_FollowUpMenuCallPacket);
	init_mindustry_gen_FollowUpMenuCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(815);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[4].o)))->F_menuId = (frame[0].i);
	LINE_NUMBER(816);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[4].o)))->F_title = (jref) (frame[1].o);
	LINE_NUMBER(817);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[4].o)))->F_message = (jref) (frame[2].o);
	LINE_NUMBER(818);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[4].o)))->F_options = (jref) (frame[3].o);
	LINE_NUMBER(819);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(821);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_followUpMenu_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:followUpMenu", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(825);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(826);
	clinit_mindustry_gen_FollowUpMenuCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_FollowUpMenuCallPacket);
	init_mindustry_gen_FollowUpMenuCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(827);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[5].o)))->F_menuId = (frame[1].i);
	LINE_NUMBER(828);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[5].o)))->F_title = (jref) (frame[2].o);
	LINE_NUMBER(829);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[5].o)))->F_message = (jref) (frame[3].o);
	LINE_NUMBER(830);
	((mindustry_gen_FollowUpMenuCallPacket *) NULL_CHECK((frame[5].o)))->F_options = (jref) (frame[4].o);
	LINE_NUMBER(831);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[5].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(833);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_gameOver_mindustry_game_Team(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:gameOver", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(836);
	SM_mindustry_core_Logic_gameOver_mindustry_game_Team(ctx, (frame[0].o));
	LINE_NUMBER(837);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(838);
	clinit_mindustry_gen_GameOverCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_GameOverCallPacket);
	init_mindustry_gen_GameOverCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(839);
	((mindustry_gen_GameOverCallPacket *) NULL_CHECK((frame[1].o)))->F_winner = (jref) (frame[0].o);
	LINE_NUMBER(840);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(842);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_hiddenSnapshot_mindustry_net_NetConnection_arc_struct_IntSeq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:hiddenSnapshot", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(845);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(846);
	clinit_mindustry_gen_HiddenSnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_HiddenSnapshotCallPacket);
	init_mindustry_gen_HiddenSnapshotCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(847);
	((mindustry_gen_HiddenSnapshotCallPacket *) NULL_CHECK((frame[2].o)))->F_ids = (jref) (frame[1].o);
	LINE_NUMBER(848);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(850);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_hideFollowUpMenu_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:hideFollowUpMenu", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(853);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(854);
	clinit_mindustry_gen_HideFollowUpMenuCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_HideFollowUpMenuCallPacket);
	init_mindustry_gen_HideFollowUpMenuCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(855);
	((mindustry_gen_HideFollowUpMenuCallPacket *) NULL_CHECK((frame[1].o)))->F_menuId = (frame[0].i);
	LINE_NUMBER(856);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(858);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_hideFollowUpMenu_mindustry_net_NetConnection_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:hideFollowUpMenu", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(861);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(862);
	clinit_mindustry_gen_HideFollowUpMenuCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_HideFollowUpMenuCallPacket);
	init_mindustry_gen_HideFollowUpMenuCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(863);
	((mindustry_gen_HideFollowUpMenuCallPacket *) NULL_CHECK((frame[2].o)))->F_menuId = (frame[1].i);
	LINE_NUMBER(864);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(866);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_hideHudText(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:hideHudText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	{
	LINE_NUMBER(869);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(870);
	clinit_mindustry_gen_HideHudTextCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_HideHudTextCallPacket);
	init_mindustry_gen_HideHudTextCallPacket(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(871);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(873);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_hideHudText_mindustry_net_NetConnection(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:hideHudText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(876);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(877);
	clinit_mindustry_gen_HideHudTextCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_HideHudTextCallPacket);
	init_mindustry_gen_HideHudTextCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(878);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(880);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_hideMenuBuilder_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:hideMenuBuilder", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(883);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(884);
	clinit_mindustry_gen_HideMenuBuilderCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_HideMenuBuilderCallPacket);
	init_mindustry_gen_HideMenuBuilderCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(885);
	((mindustry_gen_HideMenuBuilderCallPacket *) NULL_CHECK((frame[1].o)))->F_menuId = (frame[0].i);
	LINE_NUMBER(886);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(888);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_hideMenuBuilder_mindustry_net_NetConnection_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:hideMenuBuilder", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(891);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(892);
	clinit_mindustry_gen_HideMenuBuilderCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_HideMenuBuilderCallPacket);
	init_mindustry_gen_HideMenuBuilderCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(893);
	((mindustry_gen_HideMenuBuilderCallPacket *) NULL_CHECK((frame[2].o)))->F_menuId = (frame[1].i);
	LINE_NUMBER(894);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(896);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoMessage_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(899);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(900);
	clinit_mindustry_gen_InfoMessageCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoMessageCallPacket);
	init_mindustry_gen_InfoMessageCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(901);
	((mindustry_gen_InfoMessageCallPacket *) NULL_CHECK((frame[1].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(902);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(904);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoMessage_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoMessage", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(907);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(908);
	clinit_mindustry_gen_InfoMessageCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoMessageCallPacket);
	init_mindustry_gen_InfoMessageCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(909);
	((mindustry_gen_InfoMessageCallPacket *) NULL_CHECK((frame[2].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(910);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(912);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoPopup_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jfloat param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoPopup", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(916);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(917);
	clinit_mindustry_gen_InfoPopupCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoPopupCallPacket);
	init_mindustry_gen_InfoPopupCallPacket(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(918);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[7].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(919);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[7].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(920);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[7].o)))->F_align = (frame[2].i);
	LINE_NUMBER(921);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[7].o)))->F_top = (frame[3].i);
	LINE_NUMBER(922);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[7].o)))->F_left = (frame[4].i);
	LINE_NUMBER(923);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[7].o)))->F_bottom = (frame[5].i);
	LINE_NUMBER(924);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[7].o)))->F_right = (frame[6].i);
	LINE_NUMBER(925);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[7].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(927);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoPopup_mindustry_net_NetConnection_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoPopup", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(931);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(932);
	clinit_mindustry_gen_InfoPopupCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoPopupCallPacket);
	init_mindustry_gen_InfoPopupCallPacket(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(933);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[8].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(934);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[8].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(935);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[8].o)))->F_align = (frame[3].i);
	LINE_NUMBER(936);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[8].o)))->F_top = (frame[4].i);
	LINE_NUMBER(937);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[8].o)))->F_left = (frame[5].i);
	LINE_NUMBER(938);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[8].o)))->F_bottom = (frame[6].i);
	LINE_NUMBER(939);
	((mindustry_gen_InfoPopupCallPacket *) NULL_CHECK((frame[8].o)))->F_right = (frame[7].i);
	LINE_NUMBER(940);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[8].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(942);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoPopup", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(946);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(947);
	clinit_mindustry_gen_InfoPopupCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoPopupCallPacket2);
	init_mindustry_gen_InfoPopupCallPacket2(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(948);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[8].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(949);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[8].o)))->F_id = (jref) (frame[1].o);
	LINE_NUMBER(950);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[8].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(951);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[8].o)))->F_align = (frame[3].i);
	LINE_NUMBER(952);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[8].o)))->F_top = (frame[4].i);
	LINE_NUMBER(953);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[8].o)))->F_left = (frame[5].i);
	LINE_NUMBER(954);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[8].o)))->F_bottom = (frame[6].i);
	LINE_NUMBER(955);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[8].o)))->F_right = (frame[7].i);
	LINE_NUMBER(956);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[8].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(958);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoPopup_mindustry_net_NetConnection_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoPopup", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(962);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(963);
	clinit_mindustry_gen_InfoPopupCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoPopupCallPacket2);
	init_mindustry_gen_InfoPopupCallPacket2(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(964);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[9].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(965);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[9].o)))->F_id = (jref) (frame[2].o);
	LINE_NUMBER(966);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[9].o)))->F_duration = (frame[3].f);
	LINE_NUMBER(967);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[9].o)))->F_align = (frame[4].i);
	LINE_NUMBER(968);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[9].o)))->F_top = (frame[5].i);
	LINE_NUMBER(969);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[9].o)))->F_left = (frame[6].i);
	LINE_NUMBER(970);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[9].o)))->F_bottom = (frame[7].i);
	LINE_NUMBER(971);
	((mindustry_gen_InfoPopupCallPacket2 *) NULL_CHECK((frame[9].o)))->F_right = (frame[8].i);
	LINE_NUMBER(972);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[9].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(974);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoPopupReliable_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jfloat param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoPopupReliable", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(978);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(979);
	clinit_mindustry_gen_InfoPopupReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoPopupReliableCallPacket);
	init_mindustry_gen_InfoPopupReliableCallPacket(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(980);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[7].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(981);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[7].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(982);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[7].o)))->F_align = (frame[2].i);
	LINE_NUMBER(983);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[7].o)))->F_top = (frame[3].i);
	LINE_NUMBER(984);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[7].o)))->F_left = (frame[4].i);
	LINE_NUMBER(985);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[7].o)))->F_bottom = (frame[5].i);
	LINE_NUMBER(986);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[7].o)))->F_right = (frame[6].i);
	LINE_NUMBER(987);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[7].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(989);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoPopupReliable_mindustry_net_NetConnection_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoPopupReliable", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(993);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(994);
	clinit_mindustry_gen_InfoPopupReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoPopupReliableCallPacket);
	init_mindustry_gen_InfoPopupReliableCallPacket(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(995);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[8].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(996);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[8].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(997);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[8].o)))->F_align = (frame[3].i);
	LINE_NUMBER(998);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[8].o)))->F_top = (frame[4].i);
	LINE_NUMBER(999);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[8].o)))->F_left = (frame[5].i);
	LINE_NUMBER(1000);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[8].o)))->F_bottom = (frame[6].i);
	LINE_NUMBER(1001);
	((mindustry_gen_InfoPopupReliableCallPacket *) NULL_CHECK((frame[8].o)))->F_right = (frame[7].i);
	LINE_NUMBER(1002);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[8].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1004);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoPopupReliable_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoPopupReliable", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(1008);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1009);
	clinit_mindustry_gen_InfoPopupReliableCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoPopupReliableCallPacket2);
	init_mindustry_gen_InfoPopupReliableCallPacket2(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1010);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[8].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1011);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[8].o)))->F_id = (jref) (frame[1].o);
	LINE_NUMBER(1012);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[8].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(1013);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[8].o)))->F_align = (frame[3].i);
	LINE_NUMBER(1014);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[8].o)))->F_top = (frame[4].i);
	LINE_NUMBER(1015);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[8].o)))->F_left = (frame[5].i);
	LINE_NUMBER(1016);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[8].o)))->F_bottom = (frame[6].i);
	LINE_NUMBER(1017);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[8].o)))->F_right = (frame[7].i);
	LINE_NUMBER(1018);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[8].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1020);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoPopupReliable_mindustry_net_NetConnection_java_lang_String_java_lang_String_float_int_int_int_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoPopupReliable", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(1024);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1025);
	clinit_mindustry_gen_InfoPopupReliableCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoPopupReliableCallPacket2);
	init_mindustry_gen_InfoPopupReliableCallPacket2(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1026);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[9].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1027);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[9].o)))->F_id = (jref) (frame[2].o);
	LINE_NUMBER(1028);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[9].o)))->F_duration = (frame[3].f);
	LINE_NUMBER(1029);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[9].o)))->F_align = (frame[4].i);
	LINE_NUMBER(1030);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[9].o)))->F_top = (frame[5].i);
	LINE_NUMBER(1031);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[9].o)))->F_left = (frame[6].i);
	LINE_NUMBER(1032);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[9].o)))->F_bottom = (frame[7].i);
	LINE_NUMBER(1033);
	((mindustry_gen_InfoPopupReliableCallPacket2 *) NULL_CHECK((frame[9].o)))->F_right = (frame[8].i);
	LINE_NUMBER(1034);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[9].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1036);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoToast_java_lang_String_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoToast", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(1039);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1040);
	clinit_mindustry_gen_InfoToastCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoToastCallPacket);
	init_mindustry_gen_InfoToastCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1041);
	((mindustry_gen_InfoToastCallPacket *) NULL_CHECK((frame[2].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1042);
	((mindustry_gen_InfoToastCallPacket *) NULL_CHECK((frame[2].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(1043);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1045);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_infoToast_mindustry_net_NetConnection_java_lang_String_float(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:infoToast", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(1048);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1049);
	clinit_mindustry_gen_InfoToastCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_InfoToastCallPacket);
	init_mindustry_gen_InfoToastCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1050);
	((mindustry_gen_InfoToastCallPacket *) NULL_CHECK((frame[3].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1051);
	((mindustry_gen_InfoToastCallPacket *) NULL_CHECK((frame[3].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(1052);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1054);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_kick_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:kick", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1057);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1058);
	clinit_mindustry_gen_KickCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_KickCallPacket);
	init_mindustry_gen_KickCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1059);
	((mindustry_gen_KickCallPacket *) NULL_CHECK((frame[2].o)))->F_reason = (jref) (frame[1].o);
	LINE_NUMBER(1060);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1062);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_kick_mindustry_net_NetConnection_mindustry_net_Packets$KickReason(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:kick", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1065);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1066);
	clinit_mindustry_gen_KickCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_KickCallPacket2);
	init_mindustry_gen_KickCallPacket2(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1067);
	((mindustry_gen_KickCallPacket2 *) NULL_CHECK((frame[2].o)))->F_reason = (jref) (frame[1].o);
	LINE_NUMBER(1068);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1070);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_label_java_lang_String_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:label", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(1073);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1074);
	clinit_mindustry_gen_LabelCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelCallPacket);
	init_mindustry_gen_LabelCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1075);
	((mindustry_gen_LabelCallPacket *) NULL_CHECK((frame[4].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1076);
	((mindustry_gen_LabelCallPacket *) NULL_CHECK((frame[4].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(1077);
	((mindustry_gen_LabelCallPacket *) NULL_CHECK((frame[4].o)))->F_worldx = (frame[2].f);
	LINE_NUMBER(1078);
	((mindustry_gen_LabelCallPacket *) NULL_CHECK((frame[4].o)))->F_worldy = (frame[3].f);
	LINE_NUMBER(1079);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1081);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_label_mindustry_net_NetConnection_java_lang_String_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:label", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(1085);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1086);
	clinit_mindustry_gen_LabelCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelCallPacket);
	init_mindustry_gen_LabelCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1087);
	((mindustry_gen_LabelCallPacket *) NULL_CHECK((frame[5].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1088);
	((mindustry_gen_LabelCallPacket *) NULL_CHECK((frame[5].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(1089);
	((mindustry_gen_LabelCallPacket *) NULL_CHECK((frame[5].o)))->F_worldx = (frame[3].f);
	LINE_NUMBER(1090);
	((mindustry_gen_LabelCallPacket *) NULL_CHECK((frame[5].o)))->F_worldy = (frame[4].f);
	LINE_NUMBER(1091);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1093);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_label_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:label", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(1096);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1097);
	clinit_mindustry_gen_LabelCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelCallPacket2);
	init_mindustry_gen_LabelCallPacket2(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1098);
	((mindustry_gen_LabelCallPacket2 *) NULL_CHECK((frame[5].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1099);
	((mindustry_gen_LabelCallPacket2 *) NULL_CHECK((frame[5].o)))->F_id = (frame[1].i);
	LINE_NUMBER(1100);
	((mindustry_gen_LabelCallPacket2 *) NULL_CHECK((frame[5].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(1101);
	((mindustry_gen_LabelCallPacket2 *) NULL_CHECK((frame[5].o)))->F_worldx = (frame[3].f);
	LINE_NUMBER(1102);
	((mindustry_gen_LabelCallPacket2 *) NULL_CHECK((frame[5].o)))->F_worldy = (frame[4].f);
	LINE_NUMBER(1103);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_label_mindustry_net_NetConnection_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:label", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(1109);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1110);
	clinit_mindustry_gen_LabelCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelCallPacket2);
	init_mindustry_gen_LabelCallPacket2(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1111);
	((mindustry_gen_LabelCallPacket2 *) NULL_CHECK((frame[6].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1112);
	((mindustry_gen_LabelCallPacket2 *) NULL_CHECK((frame[6].o)))->F_id = (frame[2].i);
	LINE_NUMBER(1113);
	((mindustry_gen_LabelCallPacket2 *) NULL_CHECK((frame[6].o)))->F_duration = (frame[3].f);
	LINE_NUMBER(1114);
	((mindustry_gen_LabelCallPacket2 *) NULL_CHECK((frame[6].o)))->F_worldx = (frame[4].f);
	LINE_NUMBER(1115);
	((mindustry_gen_LabelCallPacket2 *) NULL_CHECK((frame[6].o)))->F_worldy = (frame[5].f);
	LINE_NUMBER(1116);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[6].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1118);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_label_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:label", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(1122);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1123);
	clinit_mindustry_gen_LabelCallPacket3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelCallPacket3);
	init_mindustry_gen_LabelCallPacket3(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1124);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[6].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1125);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[6].o)))->F_id = (frame[1].i);
	LINE_NUMBER(1126);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[6].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(1127);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[6].o)))->F_worldx = (frame[3].f);
	LINE_NUMBER(1128);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[6].o)))->F_worldy = (frame[4].f);
	LINE_NUMBER(1129);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[6].o)))->F_flags = (frame[5].i);
	LINE_NUMBER(1130);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[6].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_label_mindustry_net_NetConnection_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jint param6) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:label", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(1136);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1137);
	clinit_mindustry_gen_LabelCallPacket3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelCallPacket3);
	init_mindustry_gen_LabelCallPacket3(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1138);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[7].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1139);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[7].o)))->F_id = (frame[2].i);
	LINE_NUMBER(1140);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[7].o)))->F_duration = (frame[3].f);
	LINE_NUMBER(1141);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[7].o)))->F_worldx = (frame[4].f);
	LINE_NUMBER(1142);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[7].o)))->F_worldy = (frame[5].f);
	LINE_NUMBER(1143);
	((mindustry_gen_LabelCallPacket3 *) NULL_CHECK((frame[7].o)))->F_flags = (frame[6].i);
	LINE_NUMBER(1144);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[7].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_labelReliable_java_lang_String_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:labelReliable", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(1149);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1150);
	clinit_mindustry_gen_LabelReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelReliableCallPacket);
	init_mindustry_gen_LabelReliableCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1151);
	((mindustry_gen_LabelReliableCallPacket *) NULL_CHECK((frame[4].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1152);
	((mindustry_gen_LabelReliableCallPacket *) NULL_CHECK((frame[4].o)))->F_duration = (frame[1].f);
	LINE_NUMBER(1153);
	((mindustry_gen_LabelReliableCallPacket *) NULL_CHECK((frame[4].o)))->F_worldx = (frame[2].f);
	LINE_NUMBER(1154);
	((mindustry_gen_LabelReliableCallPacket *) NULL_CHECK((frame[4].o)))->F_worldy = (frame[3].f);
	LINE_NUMBER(1155);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1157);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_labelReliable_mindustry_net_NetConnection_java_lang_String_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:labelReliable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(1161);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1162);
	clinit_mindustry_gen_LabelReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelReliableCallPacket);
	init_mindustry_gen_LabelReliableCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1163);
	((mindustry_gen_LabelReliableCallPacket *) NULL_CHECK((frame[5].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1164);
	((mindustry_gen_LabelReliableCallPacket *) NULL_CHECK((frame[5].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(1165);
	((mindustry_gen_LabelReliableCallPacket *) NULL_CHECK((frame[5].o)))->F_worldx = (frame[3].f);
	LINE_NUMBER(1166);
	((mindustry_gen_LabelReliableCallPacket *) NULL_CHECK((frame[5].o)))->F_worldy = (frame[4].f);
	LINE_NUMBER(1167);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[5].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1169);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_labelReliable_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:labelReliable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(1173);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1174);
	clinit_mindustry_gen_LabelReliableCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelReliableCallPacket2);
	init_mindustry_gen_LabelReliableCallPacket2(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1175);
	((mindustry_gen_LabelReliableCallPacket2 *) NULL_CHECK((frame[5].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1176);
	((mindustry_gen_LabelReliableCallPacket2 *) NULL_CHECK((frame[5].o)))->F_id = (frame[1].i);
	LINE_NUMBER(1177);
	((mindustry_gen_LabelReliableCallPacket2 *) NULL_CHECK((frame[5].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(1178);
	((mindustry_gen_LabelReliableCallPacket2 *) NULL_CHECK((frame[5].o)))->F_worldx = (frame[3].f);
	LINE_NUMBER(1179);
	((mindustry_gen_LabelReliableCallPacket2 *) NULL_CHECK((frame[5].o)))->F_worldy = (frame[4].f);
	LINE_NUMBER(1180);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1182);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_labelReliable_mindustry_net_NetConnection_java_lang_String_int_float_float_float(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:labelReliable", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(1186);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1187);
	clinit_mindustry_gen_LabelReliableCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelReliableCallPacket2);
	init_mindustry_gen_LabelReliableCallPacket2(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1188);
	((mindustry_gen_LabelReliableCallPacket2 *) NULL_CHECK((frame[6].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1189);
	((mindustry_gen_LabelReliableCallPacket2 *) NULL_CHECK((frame[6].o)))->F_id = (frame[2].i);
	LINE_NUMBER(1190);
	((mindustry_gen_LabelReliableCallPacket2 *) NULL_CHECK((frame[6].o)))->F_duration = (frame[3].f);
	LINE_NUMBER(1191);
	((mindustry_gen_LabelReliableCallPacket2 *) NULL_CHECK((frame[6].o)))->F_worldx = (frame[4].f);
	LINE_NUMBER(1192);
	((mindustry_gen_LabelReliableCallPacket2 *) NULL_CHECK((frame[6].o)))->F_worldy = (frame[5].f);
	LINE_NUMBER(1193);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[6].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1195);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_labelReliable_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jint param5) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:labelReliable", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(1199);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1200);
	clinit_mindustry_gen_LabelReliableCallPacket3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelReliableCallPacket3);
	init_mindustry_gen_LabelReliableCallPacket3(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1201);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[6].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1202);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[6].o)))->F_id = (frame[1].i);
	LINE_NUMBER(1203);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[6].o)))->F_duration = (frame[2].f);
	LINE_NUMBER(1204);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[6].o)))->F_worldx = (frame[3].f);
	LINE_NUMBER(1205);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[6].o)))->F_worldy = (frame[4].f);
	LINE_NUMBER(1206);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[6].o)))->F_flags = (frame[5].i);
	LINE_NUMBER(1207);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[6].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1209);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_labelReliable_mindustry_net_NetConnection_java_lang_String_int_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jfloat param5, jint param6) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:labelReliable", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(1213);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1214);
	clinit_mindustry_gen_LabelReliableCallPacket3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LabelReliableCallPacket3);
	init_mindustry_gen_LabelReliableCallPacket3(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(1215);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[7].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1216);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[7].o)))->F_id = (frame[2].i);
	LINE_NUMBER(1217);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[7].o)))->F_duration = (frame[3].f);
	LINE_NUMBER(1218);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[7].o)))->F_worldx = (frame[4].f);
	LINE_NUMBER(1219);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[7].o)))->F_worldy = (frame[5].f);
	LINE_NUMBER(1220);
	((mindustry_gen_LabelReliableCallPacket3 *) NULL_CHECK((frame[7].o)))->F_flags = (frame[6].i);
	LINE_NUMBER(1221);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[7].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1223);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_landingPadLanded_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:landingPadLanded", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1226);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1227);
	SM_mindustry_world_blocks_campaign_LandingPad_landingPadLanded_mindustry_world_Tile(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(1229);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1230);
	clinit_mindustry_gen_LandingPadLandedCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LandingPadLandedCallPacket);
	init_mindustry_gen_LandingPadLandedCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1231);
	((mindustry_gen_LandingPadLandedCallPacket *) NULL_CHECK((frame[1].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(1232);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1234);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_logicExplosion_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jbool param5, jbool param6, jbool param7, jbool param8) {
	jtype frame[19];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:logicExplosion", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	frame[8].i = param8;
	{
	LINE_NUMBER(1238);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1239);
	SM_mindustry_logic_LExecutor_logicExplosion_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i));
	}
label_2:;
	{
	LINE_NUMBER(1241);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1242);
	clinit_mindustry_gen_LogicExplosionCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_LogicExplosionCallPacket);
	init_mindustry_gen_LogicExplosionCallPacket(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1243);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[9].o)))->F_team = (jref) (frame[0].o);
	LINE_NUMBER(1244);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[9].o)))->F_x = (frame[1].f);
	LINE_NUMBER(1245);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[9].o)))->F_y = (frame[2].f);
	LINE_NUMBER(1246);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[9].o)))->F_radius = (frame[3].f);
	LINE_NUMBER(1247);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[9].o)))->F_damage = (frame[4].f);
	LINE_NUMBER(1248);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[9].o)))->F_air = (frame[5].i);
	LINE_NUMBER(1249);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[9].o)))->F_ground = (frame[6].i);
	LINE_NUMBER(1250);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[9].o)))->F_pierce = (frame[7].i);
	LINE_NUMBER(1251);
	((mindustry_gen_LogicExplosionCallPacket *) NULL_CHECK((frame[9].o)))->F_effect = (frame[8].i);
	LINE_NUMBER(1252);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[9].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(1254);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_menu_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jint param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:menu", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1257);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1258);
	clinit_mindustry_gen_MenuCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_MenuCallPacket);
	init_mindustry_gen_MenuCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1259);
	((mindustry_gen_MenuCallPacket *) NULL_CHECK((frame[4].o)))->F_menuId = (frame[0].i);
	LINE_NUMBER(1260);
	((mindustry_gen_MenuCallPacket *) NULL_CHECK((frame[4].o)))->F_title = (jref) (frame[1].o);
	LINE_NUMBER(1261);
	((mindustry_gen_MenuCallPacket *) NULL_CHECK((frame[4].o)))->F_message = (jref) (frame[2].o);
	LINE_NUMBER(1262);
	((mindustry_gen_MenuCallPacket *) NULL_CHECK((frame[4].o)))->F_options = (jref) (frame[3].o);
	LINE_NUMBER(1263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_menu_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_Array2_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:menu", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(1269);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1270);
	clinit_mindustry_gen_MenuCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_MenuCallPacket);
	init_mindustry_gen_MenuCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1271);
	((mindustry_gen_MenuCallPacket *) NULL_CHECK((frame[5].o)))->F_menuId = (frame[1].i);
	LINE_NUMBER(1272);
	((mindustry_gen_MenuCallPacket *) NULL_CHECK((frame[5].o)))->F_title = (jref) (frame[2].o);
	LINE_NUMBER(1273);
	((mindustry_gen_MenuCallPacket *) NULL_CHECK((frame[5].o)))->F_message = (jref) (frame[3].o);
	LINE_NUMBER(1274);
	((mindustry_gen_MenuCallPacket *) NULL_CHECK((frame[5].o)))->F_options = (jref) (frame[4].o);
	LINE_NUMBER(1275);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[5].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1277);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_menuBuilder_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jint param0, jlong param1, jobject param2, jbool param3, jbool param4, jbool param5, jobject param6) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:menuBuilder", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].l = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(1281);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1282);
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_MenuBuilderCallPacket);
	init_mindustry_gen_MenuBuilderCallPacket(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(1283);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[8].o)))->F_id = (frame[0].i);
	LINE_NUMBER(1284);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[8].o)))->F_token = (frame[1].l);
	LINE_NUMBER(1285);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[8].o)))->F_title = (jref) (frame[3].o);
	LINE_NUMBER(1286);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[8].o)))->F_hideOnClick = (frame[4].i);
	LINE_NUMBER(1287);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[8].o)))->F_hidePrevious = (frame[5].i);
	LINE_NUMBER(1288);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[8].o)))->F_fillScreen = (frame[6].i);
	LINE_NUMBER(1289);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[8].o)))->F_builder = (jref) (frame[7].o);
	LINE_NUMBER(1290);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[8].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1292);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_menuBuilder_mindustry_net_NetConnection_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject param0, jint param1, jlong param2, jobject param3, jbool param4, jbool param5, jbool param6, jobject param7) {
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:menuBuilder", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].l = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(1297);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1298);
	clinit_mindustry_gen_MenuBuilderCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_MenuBuilderCallPacket);
	init_mindustry_gen_MenuBuilderCallPacket(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1299);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[9].o)))->F_id = (frame[1].i);
	LINE_NUMBER(1300);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[9].o)))->F_token = (frame[2].l);
	LINE_NUMBER(1301);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[9].o)))->F_title = (jref) (frame[4].o);
	LINE_NUMBER(1302);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[9].o)))->F_hideOnClick = (frame[5].i);
	LINE_NUMBER(1303);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[9].o)))->F_hidePrevious = (frame[6].i);
	LINE_NUMBER(1304);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[9].o)))->F_fillScreen = (frame[7].i);
	LINE_NUMBER(1305);
	((mindustry_gen_MenuBuilderCallPacket *) NULL_CHECK((frame[9].o)))->F_builder = (jref) (frame[8].o);
	LINE_NUMBER(1306);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[9].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1308);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_menuBuilderChoose_mindustry_gen_Player_int_mindustry_ui_builder_MenuResult(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:menuBuilderChoose", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1311);
	SM_mindustry_ui_Menus_menuBuilderChoose_mindustry_gen_Player_int_mindustry_ui_builder_MenuResult(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(1312);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1313);
	clinit_mindustry_gen_MenuBuilderChooseCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_MenuBuilderChooseCallPacket);
	init_mindustry_gen_MenuBuilderChooseCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1314);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1315);
	((mindustry_gen_MenuBuilderChooseCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(1317);
	((mindustry_gen_MenuBuilderChooseCallPacket *) NULL_CHECK((frame[3].o)))->F_menuId = (frame[1].i);
	LINE_NUMBER(1318);
	((mindustry_gen_MenuBuilderChooseCallPacket *) NULL_CHECK((frame[3].o)))->F_results = (jref) (frame[2].o);
	LINE_NUMBER(1319);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1321);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_menuBuilderUpdate_int_java_lang_String_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jint param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:menuBuilderUpdate", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1324);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1325);
	clinit_mindustry_gen_MenuBuilderUpdateCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_MenuBuilderUpdateCallPacket);
	init_mindustry_gen_MenuBuilderUpdateCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1326);
	((mindustry_gen_MenuBuilderUpdateCallPacket *) NULL_CHECK((frame[3].o)))->F_id = (frame[0].i);
	LINE_NUMBER(1327);
	((mindustry_gen_MenuBuilderUpdateCallPacket *) NULL_CHECK((frame[3].o)))->F_tableId = (jref) (frame[1].o);
	LINE_NUMBER(1328);
	((mindustry_gen_MenuBuilderUpdateCallPacket *) NULL_CHECK((frame[3].o)))->F_builder = (jref) (frame[2].o);
	LINE_NUMBER(1329);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1331);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_menuBuilderUpdate_mindustry_net_NetConnection_int_java_lang_String_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:menuBuilderUpdate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1335);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1336);
	clinit_mindustry_gen_MenuBuilderUpdateCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_MenuBuilderUpdateCallPacket);
	init_mindustry_gen_MenuBuilderUpdateCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1337);
	((mindustry_gen_MenuBuilderUpdateCallPacket *) NULL_CHECK((frame[4].o)))->F_id = (frame[1].i);
	LINE_NUMBER(1338);
	((mindustry_gen_MenuBuilderUpdateCallPacket *) NULL_CHECK((frame[4].o)))->F_tableId = (jref) (frame[2].o);
	LINE_NUMBER(1339);
	((mindustry_gen_MenuBuilderUpdateCallPacket *) NULL_CHECK((frame[4].o)))->F_builder = (jref) (frame[3].o);
	LINE_NUMBER(1340);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[4].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1342);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_menuChoose_mindustry_gen_Player_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:menuChoose", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1345);
	SM_mindustry_ui_Menus_menuChoose_mindustry_gen_Player_int_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(1346);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1347);
	clinit_mindustry_gen_MenuChooseCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_MenuChooseCallPacket);
	init_mindustry_gen_MenuChooseCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1348);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1349);
	((mindustry_gen_MenuChooseCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(1351);
	((mindustry_gen_MenuChooseCallPacket *) NULL_CHECK((frame[3].o)))->F_menuId = (frame[1].i);
	LINE_NUMBER(1352);
	((mindustry_gen_MenuChooseCallPacket *) NULL_CHECK((frame[3].o)))->F_option = (frame[2].i);
	LINE_NUMBER(1353);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1355);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_openURI_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:openURI", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1358);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1359);
	clinit_mindustry_gen_OpenURICallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_OpenURICallPacket);
	init_mindustry_gen_OpenURICallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1360);
	((mindustry_gen_OpenURICallPacket *) NULL_CHECK((frame[1].o)))->F_uri = (jref) (frame[0].o);
	LINE_NUMBER(1361);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1363);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_openURI_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:openURI", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1366);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1367);
	clinit_mindustry_gen_OpenURICallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_OpenURICallPacket);
	init_mindustry_gen_OpenURICallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1368);
	((mindustry_gen_OpenURICallPacket *) NULL_CHECK((frame[2].o)))->F_uri = (jref) (frame[1].o);
	LINE_NUMBER(1369);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1371);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_payloadDropped_mindustry_gen_Unit_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:payloadDropped", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(1374);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1375);
	SM_mindustry_input_InputHandler_payloadDropped_mindustry_gen_Unit_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	}
label_2:;
	{
	LINE_NUMBER(1377);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1378);
	clinit_mindustry_gen_PayloadDroppedCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PayloadDroppedCallPacket);
	init_mindustry_gen_PayloadDroppedCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1379);
	((mindustry_gen_PayloadDroppedCallPacket *) NULL_CHECK((frame[3].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(1380);
	((mindustry_gen_PayloadDroppedCallPacket *) NULL_CHECK((frame[3].o)))->F_x = (frame[1].f);
	LINE_NUMBER(1381);
	((mindustry_gen_PayloadDroppedCallPacket *) NULL_CHECK((frame[3].o)))->F_y = (frame[2].f);
	LINE_NUMBER(1382);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1384);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:pickedBuildPayload", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1387);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1388);
	SM_mindustry_input_InputHandler_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(1390);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1391);
	clinit_mindustry_gen_PickedBuildPayloadCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PickedBuildPayloadCallPacket);
	init_mindustry_gen_PickedBuildPayloadCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1392);
	((mindustry_gen_PickedBuildPayloadCallPacket *) NULL_CHECK((frame[3].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(1393);
	((mindustry_gen_PickedBuildPayloadCallPacket *) NULL_CHECK((frame[3].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(1394);
	((mindustry_gen_PickedBuildPayloadCallPacket *) NULL_CHECK((frame[3].o)))->F_onGround = (frame[2].i);
	LINE_NUMBER(1395);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1397);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_pickedUnitPayload_mindustry_gen_Unit_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:pickedUnitPayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1400);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1401);
	SM_mindustry_input_InputHandler_pickedUnitPayload_mindustry_gen_Unit_mindustry_gen_Unit(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(1403);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1404);
	clinit_mindustry_gen_PickedUnitPayloadCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PickedUnitPayloadCallPacket);
	init_mindustry_gen_PickedUnitPayloadCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1405);
	((mindustry_gen_PickedUnitPayloadCallPacket *) NULL_CHECK((frame[2].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(1406);
	((mindustry_gen_PickedUnitPayloadCallPacket *) NULL_CHECK((frame[2].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(1407);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1409);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_ping_long(jcontext ctx, jlong param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:ping", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].l = param0;
	{
	LINE_NUMBER(1412);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1413);
	clinit_mindustry_gen_PingCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PingCallPacket);
	init_mindustry_gen_PingCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1414);
	((mindustry_gen_PingCallPacket *) NULL_CHECK((frame[2].o)))->F_time = (frame[0].l);
	LINE_NUMBER(1415);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1417);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_pingLocation_mindustry_gen_Player_float_float_java_lang_String(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:pingLocation", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1420);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1421);
	SM_mindustry_input_InputHandler_pingLocation_mindustry_gen_Player_float_float_java_lang_String(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(1423);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1424);
	clinit_mindustry_gen_PingLocationCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PingLocationCallPacket);
	init_mindustry_gen_PingLocationCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1425);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1426);
	((mindustry_gen_PingLocationCallPacket *) NULL_CHECK((frame[4].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(1428);
	((mindustry_gen_PingLocationCallPacket *) NULL_CHECK((frame[4].o)))->F_x = (frame[1].f);
	LINE_NUMBER(1429);
	((mindustry_gen_PingLocationCallPacket *) NULL_CHECK((frame[4].o)))->F_y = (frame[2].f);
	LINE_NUMBER(1430);
	((mindustry_gen_PingLocationCallPacket *) NULL_CHECK((frame[4].o)))->F_text = (jref) (frame[3].o);
	LINE_NUMBER(1431);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(1433);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_pingLocation__forward_mindustry_net_NetConnection_mindustry_gen_Player_float_float_java_lang_String(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:pingLocation__forward", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(1437);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1438);
	clinit_mindustry_gen_PingLocationCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PingLocationCallPacket);
	init_mindustry_gen_PingLocationCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1439);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1440);
	((mindustry_gen_PingLocationCallPacket *) NULL_CHECK((frame[5].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(1442);
	((mindustry_gen_PingLocationCallPacket *) NULL_CHECK((frame[5].o)))->F_x = (frame[2].f);
	LINE_NUMBER(1443);
	((mindustry_gen_PingLocationCallPacket *) NULL_CHECK((frame[5].o)))->F_y = (frame[3].f);
	LINE_NUMBER(1444);
	((mindustry_gen_PingLocationCallPacket *) NULL_CHECK((frame[5].o)))->F_text = (jref) (frame[4].o);
	LINE_NUMBER(1445);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(1447);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_pingResponse_mindustry_net_NetConnection_long(jcontext ctx, jobject param0, jlong param1) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:pingResponse", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].l = param1;
	{
	LINE_NUMBER(1450);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1451);
	clinit_mindustry_gen_PingResponseCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PingResponseCallPacket);
	init_mindustry_gen_PingResponseCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1452);
	((mindustry_gen_PingResponseCallPacket *) NULL_CHECK((frame[3].o)))->F_time = (frame[1].l);
	LINE_NUMBER(1453);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1455);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_playMusic_java_lang_String_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:playMusic", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1458);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1459);
	clinit_mindustry_gen_PlayMusicCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PlayMusicCallPacket);
	init_mindustry_gen_PlayMusicCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1460);
	((mindustry_gen_PlayMusicCallPacket *) NULL_CHECK((frame[2].o)))->F_musicName = (jref) (frame[0].o);
	LINE_NUMBER(1461);
	((mindustry_gen_PlayMusicCallPacket *) NULL_CHECK((frame[2].o)))->F_interrupt = (frame[1].i);
	LINE_NUMBER(1462);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1464);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_playMusic_mindustry_net_NetConnection_java_lang_String_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:playMusic", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1468);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1469);
	clinit_mindustry_gen_PlayMusicCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PlayMusicCallPacket);
	init_mindustry_gen_PlayMusicCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1470);
	((mindustry_gen_PlayMusicCallPacket *) NULL_CHECK((frame[3].o)))->F_musicName = (jref) (frame[1].o);
	LINE_NUMBER(1471);
	((mindustry_gen_PlayMusicCallPacket *) NULL_CHECK((frame[3].o)))->F_interrupt = (frame[2].i);
	LINE_NUMBER(1472);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1474);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_playerDisconnect_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:playerDisconnect", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1477);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1478);
	clinit_mindustry_gen_PlayerDisconnectCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PlayerDisconnectCallPacket);
	init_mindustry_gen_PlayerDisconnectCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1479);
	((mindustry_gen_PlayerDisconnectCallPacket *) NULL_CHECK((frame[1].o)))->F_playerid = (frame[0].i);
	LINE_NUMBER(1480);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1482);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_playerSpawn_mindustry_world_Tile_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:playerSpawn", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1485);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1486);
	SM_mindustry_world_blocks_storage_CoreBlock_playerSpawn_mindustry_world_Tile_mindustry_gen_Player(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(1488);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1489);
	clinit_mindustry_gen_PlayerSpawnCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_PlayerSpawnCallPacket);
	init_mindustry_gen_PlayerSpawnCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1490);
	((mindustry_gen_PlayerSpawnCallPacket *) NULL_CHECK((frame[2].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(1491);
	((mindustry_gen_PlayerSpawnCallPacket *) NULL_CHECK((frame[2].o)))->F_player = (jref) (frame[1].o);
	LINE_NUMBER(1492);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1494);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_removeMarker_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:removeMarker", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1497);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1498);
	SM_mindustry_logic_LExecutor_removeMarker_int(ctx, (frame[0].i));
	}
label_2:;
	{
	LINE_NUMBER(1500);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1501);
	clinit_mindustry_gen_RemoveMarkerCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RemoveMarkerCallPacket);
	init_mindustry_gen_RemoveMarkerCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1502);
	((mindustry_gen_RemoveMarkerCallPacket *) NULL_CHECK((frame[1].o)))->F_id = (frame[0].i);
	LINE_NUMBER(1503);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(1505);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_removeMarker_mindustry_net_NetConnection_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:removeMarker", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1508);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1509);
	SM_mindustry_logic_LExecutor_removeMarker_int(ctx, (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(1511);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1512);
	clinit_mindustry_gen_RemoveMarkerCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RemoveMarkerCallPacket);
	init_mindustry_gen_RemoveMarkerCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1513);
	((mindustry_gen_RemoveMarkerCallPacket *) NULL_CHECK((frame[2].o)))->F_id = (frame[1].i);
	LINE_NUMBER(1514);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(1516);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_removeQueueBlock_mindustry_net_NetConnection_int_int_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jbool param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:removeQueueBlock", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1520);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1521);
	clinit_mindustry_gen_RemoveQueueBlockCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RemoveQueueBlockCallPacket);
	init_mindustry_gen_RemoveQueueBlockCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1522);
	((mindustry_gen_RemoveQueueBlockCallPacket *) NULL_CHECK((frame[4].o)))->F_x = (frame[1].i);
	LINE_NUMBER(1523);
	((mindustry_gen_RemoveQueueBlockCallPacket *) NULL_CHECK((frame[4].o)))->F_y = (frame[2].i);
	LINE_NUMBER(1524);
	((mindustry_gen_RemoveQueueBlockCallPacket *) NULL_CHECK((frame[4].o)))->F_breaking = (frame[3].i);
	LINE_NUMBER(1525);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[4].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1527);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_removeTile_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:removeTile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1530);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1531);
	SM_mindustry_world_Tile_removeTile_mindustry_world_Tile(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(1533);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1534);
	clinit_mindustry_gen_RemoveTileCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RemoveTileCallPacket);
	init_mindustry_gen_RemoveTileCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1535);
	((mindustry_gen_RemoveTileCallPacket *) NULL_CHECK((frame[1].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(1536);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1538);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_removeWorldLabel_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:removeWorldLabel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1541);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1542);
	clinit_mindustry_gen_RemoveWorldLabelCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RemoveWorldLabelCallPacket);
	init_mindustry_gen_RemoveWorldLabelCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1543);
	((mindustry_gen_RemoveWorldLabelCallPacket *) NULL_CHECK((frame[1].o)))->F_id = (frame[0].i);
	LINE_NUMBER(1544);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1546);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_removeWorldLabel_mindustry_net_NetConnection_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:removeWorldLabel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1549);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1550);
	clinit_mindustry_gen_RemoveWorldLabelCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RemoveWorldLabelCallPacket);
	init_mindustry_gen_RemoveWorldLabelCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1551);
	((mindustry_gen_RemoveWorldLabelCallPacket *) NULL_CHECK((frame[2].o)))->F_id = (frame[1].i);
	LINE_NUMBER(1552);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1554);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_requestAssets_Array1_short(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:requestAssets", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1557);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1558);
	clinit_mindustry_gen_RequestAssetsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RequestAssetsCallPacket);
	init_mindustry_gen_RequestAssetsCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1559);
	((mindustry_gen_RequestAssetsCallPacket *) NULL_CHECK((frame[1].o)))->F_ids = (jref) (frame[0].o);
	LINE_NUMBER(1560);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1562);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_requestBlockSnapshot_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:requestBlockSnapshot", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1565);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1566);
	clinit_mindustry_gen_RequestBlockSnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RequestBlockSnapshotCallPacket);
	init_mindustry_gen_RequestBlockSnapshotCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1567);
	((mindustry_gen_RequestBlockSnapshotCallPacket *) NULL_CHECK((frame[1].o)))->F_pos = (frame[0].i);
	LINE_NUMBER(1568);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1570);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_requestBuildPayload_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:requestBuildPayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1573);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1574);
	SM_mindustry_input_InputHandler_requestBuildPayload_mindustry_gen_Player_mindustry_gen_Building(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(1576);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1577);
	clinit_mindustry_gen_RequestBuildPayloadCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RequestBuildPayloadCallPacket);
	init_mindustry_gen_RequestBuildPayloadCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1578);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1579);
	((mindustry_gen_RequestBuildPayloadCallPacket *) NULL_CHECK((frame[2].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(1581);
	((mindustry_gen_RequestBuildPayloadCallPacket *) NULL_CHECK((frame[2].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(1582);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(1584);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_requestDebugStatus(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:requestDebugStatus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	{
	LINE_NUMBER(1587);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1588);
	clinit_mindustry_gen_RequestDebugStatusCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RequestDebugStatusCallPacket);
	init_mindustry_gen_RequestDebugStatusCallPacket(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(1589);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1591);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_requestDropPayload_mindustry_gen_Player_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:requestDropPayload", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(1594);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1595);
	SM_mindustry_input_InputHandler_requestDropPayload_mindustry_gen_Player_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	}
label_2:;
	{
	LINE_NUMBER(1597);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1598);
	clinit_mindustry_gen_RequestDropPayloadCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RequestDropPayloadCallPacket);
	init_mindustry_gen_RequestDropPayloadCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1599);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1600);
	((mindustry_gen_RequestDropPayloadCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(1602);
	((mindustry_gen_RequestDropPayloadCallPacket *) NULL_CHECK((frame[3].o)))->F_x = (frame[1].f);
	LINE_NUMBER(1603);
	((mindustry_gen_RequestDropPayloadCallPacket *) NULL_CHECK((frame[3].o)))->F_y = (frame[2].f);
	LINE_NUMBER(1604);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(1606);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_requestItem_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:requestItem", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1609);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1610);
	SM_mindustry_input_InputHandler_requestItem_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	}
label_2:;
	{
	LINE_NUMBER(1612);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1613);
	clinit_mindustry_gen_RequestItemCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RequestItemCallPacket);
	init_mindustry_gen_RequestItemCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1614);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1615);
	((mindustry_gen_RequestItemCallPacket *) NULL_CHECK((frame[4].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(1617);
	((mindustry_gen_RequestItemCallPacket *) NULL_CHECK((frame[4].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(1618);
	((mindustry_gen_RequestItemCallPacket *) NULL_CHECK((frame[4].o)))->F_item = (jref) (frame[2].o);
	LINE_NUMBER(1619);
	((mindustry_gen_RequestItemCallPacket *) NULL_CHECK((frame[4].o)))->F_amount = (frame[3].i);
	LINE_NUMBER(1620);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(1622);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_requestItem__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:requestItem__forward", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1626);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1627);
	clinit_mindustry_gen_RequestItemCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RequestItemCallPacket);
	init_mindustry_gen_RequestItemCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1628);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1629);
	((mindustry_gen_RequestItemCallPacket *) NULL_CHECK((frame[5].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(1631);
	((mindustry_gen_RequestItemCallPacket *) NULL_CHECK((frame[5].o)))->F_build = (jref) (frame[2].o);
	LINE_NUMBER(1632);
	((mindustry_gen_RequestItemCallPacket *) NULL_CHECK((frame[5].o)))->F_item = (jref) (frame[3].o);
	LINE_NUMBER(1633);
	((mindustry_gen_RequestItemCallPacket *) NULL_CHECK((frame[5].o)))->F_amount = (frame[4].i);
	LINE_NUMBER(1634);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(1636);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_requestUnitPayload_mindustry_gen_Player_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:requestUnitPayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1639);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1640);
	SM_mindustry_input_InputHandler_requestUnitPayload_mindustry_gen_Player_mindustry_gen_Unit(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(1642);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1643);
	clinit_mindustry_gen_RequestUnitPayloadCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RequestUnitPayloadCallPacket);
	init_mindustry_gen_RequestUnitPayloadCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1644);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1645);
	((mindustry_gen_RequestUnitPayloadCallPacket *) NULL_CHECK((frame[2].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(1647);
	((mindustry_gen_RequestUnitPayloadCallPacket *) NULL_CHECK((frame[2].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(1648);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(1650);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_requestWorld(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:requestWorld", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	{
	LINE_NUMBER(1653);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1654);
	clinit_mindustry_gen_RequestWorldCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RequestWorldCallPacket);
	init_mindustry_gen_RequestWorldCallPacket(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(1655);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1657);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_researched_mindustry_ctype_Content(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:researched", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1660);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1661);
	clinit_mindustry_gen_ResearchedCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ResearchedCallPacket);
	init_mindustry_gen_ResearchedCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1662);
	((mindustry_gen_ResearchedCallPacket *) NULL_CHECK((frame[1].o)))->F_content = (jref) (frame[0].o);
	LINE_NUMBER(1663);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1665);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_rotateBlock_mindustry_gen_Player_mindustry_gen_Building_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:rotateBlock", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1668);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1669);
	SM_mindustry_input_InputHandler_rotateBlock_mindustry_gen_Player_mindustry_gen_Building_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(1671);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(1672);
	clinit_mindustry_gen_RotateBlockCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RotateBlockCallPacket);
	init_mindustry_gen_RotateBlockCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1673);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(1674);
	((mindustry_gen_RotateBlockCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(1676);
	((mindustry_gen_RotateBlockCallPacket *) NULL_CHECK((frame[3].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(1677);
	((mindustry_gen_RotateBlockCallPacket *) NULL_CHECK((frame[3].o)))->F_direction = (frame[2].i);
	LINE_NUMBER(1678);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(0)));
	}
label_4:;
	LINE_NUMBER(1680);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_rotateBlock__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:rotateBlock__forward", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1684);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1685);
	clinit_mindustry_gen_RotateBlockCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_RotateBlockCallPacket);
	init_mindustry_gen_RotateBlockCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1686);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1687);
	((mindustry_gen_RotateBlockCallPacket *) NULL_CHECK((frame[4].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(1689);
	((mindustry_gen_RotateBlockCallPacket *) NULL_CHECK((frame[4].o)))->F_build = (jref) (frame[2].o);
	LINE_NUMBER(1690);
	((mindustry_gen_RotateBlockCallPacket *) NULL_CHECK((frame[4].o)))->F_direction = (frame[3].i);
	LINE_NUMBER(1691);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	}
label_2:;
	LINE_NUMBER(1693);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_sectorCapture(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:sectorCapture", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	{
	LINE_NUMBER(1696);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(1697);
	SM_mindustry_core_Logic_sectorCapture(ctx);
label_2:;
	{
	LINE_NUMBER(1699);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1700);
	clinit_mindustry_gen_SectorCaptureCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SectorCaptureCallPacket);
	init_mindustry_gen_SectorCaptureCallPacket(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(1701);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1703);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_sendChatMessage_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:sendChatMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1706);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1707);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	SM_mindustry_core_NetClient_sendChatMessage_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(1709);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1710);
	clinit_mindustry_gen_SendChatMessageCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SendChatMessageCallPacket);
	init_mindustry_gen_SendChatMessageCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1711);
	((mindustry_gen_SendChatMessageCallPacket *) NULL_CHECK((frame[1].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1712);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1714);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_sendMessage_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:sendMessage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1717);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1718);
	SM_mindustry_core_NetClient_sendMessage_java_lang_String(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(1720);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1721);
	clinit_mindustry_gen_SendMessageCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SendMessageCallPacket);
	init_mindustry_gen_SendMessageCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1722);
	((mindustry_gen_SendMessageCallPacket *) NULL_CHECK((frame[1].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1723);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1725);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_sendMessage_java_lang_String_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:sendMessage", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1728);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1729);
	clinit_mindustry_gen_SendMessageCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SendMessageCallPacket2);
	init_mindustry_gen_SendMessageCallPacket2(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1730);
	((mindustry_gen_SendMessageCallPacket2 *) NULL_CHECK((frame[3].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1731);
	((mindustry_gen_SendMessageCallPacket2 *) NULL_CHECK((frame[3].o)))->F_unformatted = (jref) (frame[1].o);
	LINE_NUMBER(1732);
	((mindustry_gen_SendMessageCallPacket2 *) NULL_CHECK((frame[3].o)))->F_playersender = (jref) (frame[2].o);
	LINE_NUMBER(1733);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1735);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_sendMessage_mindustry_net_NetConnection_java_lang_String_java_lang_String_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:sendMessage", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1739);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1740);
	clinit_mindustry_gen_SendMessageCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SendMessageCallPacket2);
	init_mindustry_gen_SendMessageCallPacket2(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1741);
	((mindustry_gen_SendMessageCallPacket2 *) NULL_CHECK((frame[4].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1742);
	((mindustry_gen_SendMessageCallPacket2 *) NULL_CHECK((frame[4].o)))->F_unformatted = (jref) (frame[2].o);
	LINE_NUMBER(1743);
	((mindustry_gen_SendMessageCallPacket2 *) NULL_CHECK((frame[4].o)))->F_playersender = (jref) (frame[3].o);
	LINE_NUMBER(1744);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[4].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1746);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_serverBinaryPacketReliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:serverBinaryPacketReliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1749);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1750);
	clinit_mindustry_gen_ServerBinaryPacketReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ServerBinaryPacketReliableCallPacket);
	init_mindustry_gen_ServerBinaryPacketReliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1751);
	((mindustry_gen_ServerBinaryPacketReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_type = (jref) (frame[0].o);
	LINE_NUMBER(1752);
	((mindustry_gen_ServerBinaryPacketReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_contents = (jref) (frame[1].o);
	LINE_NUMBER(1753);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1755);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_serverBinaryPacketUnreliable_java_lang_String_Array1_byte(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:serverBinaryPacketUnreliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1758);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1759);
	clinit_mindustry_gen_ServerBinaryPacketUnreliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ServerBinaryPacketUnreliableCallPacket);
	init_mindustry_gen_ServerBinaryPacketUnreliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1760);
	((mindustry_gen_ServerBinaryPacketUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_type = (jref) (frame[0].o);
	LINE_NUMBER(1761);
	((mindustry_gen_ServerBinaryPacketUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_contents = (jref) (frame[1].o);
	LINE_NUMBER(1762);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1764);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_serverPacketReliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:serverPacketReliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1767);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1768);
	clinit_mindustry_gen_ServerPacketReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ServerPacketReliableCallPacket);
	init_mindustry_gen_ServerPacketReliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1769);
	((mindustry_gen_ServerPacketReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_type = (jref) (frame[0].o);
	LINE_NUMBER(1770);
	((mindustry_gen_ServerPacketReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_contents = (jref) (frame[1].o);
	LINE_NUMBER(1771);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1773);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_serverPacketUnreliable_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:serverPacketUnreliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1776);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1777);
	clinit_mindustry_gen_ServerPacketUnreliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_ServerPacketUnreliableCallPacket);
	init_mindustry_gen_ServerPacketUnreliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1778);
	((mindustry_gen_ServerPacketUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_type = (jref) (frame[0].o);
	LINE_NUMBER(1779);
	((mindustry_gen_ServerPacketUnreliableCallPacket *) NULL_CHECK((frame[2].o)))->F_contents = (jref) (frame[1].o);
	LINE_NUMBER(1780);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1782);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setCameraPosition_float_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setCameraPosition", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(1785);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1786);
	clinit_mindustry_gen_SetCameraPositionCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetCameraPositionCallPacket);
	init_mindustry_gen_SetCameraPositionCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1787);
	((mindustry_gen_SetCameraPositionCallPacket *) NULL_CHECK((frame[2].o)))->F_x = (frame[0].f);
	LINE_NUMBER(1788);
	((mindustry_gen_SetCameraPositionCallPacket *) NULL_CHECK((frame[2].o)))->F_y = (frame[1].f);
	LINE_NUMBER(1789);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1791);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setCameraPosition_mindustry_net_NetConnection_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setCameraPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(1794);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1795);
	clinit_mindustry_gen_SetCameraPositionCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetCameraPositionCallPacket);
	init_mindustry_gen_SetCameraPositionCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1796);
	((mindustry_gen_SetCameraPositionCallPacket *) NULL_CHECK((frame[3].o)))->F_x = (frame[1].f);
	LINE_NUMBER(1797);
	((mindustry_gen_SetCameraPositionCallPacket *) NULL_CHECK((frame[3].o)))->F_y = (frame[2].f);
	LINE_NUMBER(1798);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1800);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setFlag_java_lang_String_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setFlag", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1803);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1804);
	SM_mindustry_logic_LExecutor_setFlag_java_lang_String_boolean(ctx, (frame[0].o), (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(1806);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1807);
	clinit_mindustry_gen_SetFlagCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetFlagCallPacket);
	init_mindustry_gen_SetFlagCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1808);
	((mindustry_gen_SetFlagCallPacket *) NULL_CHECK((frame[2].o)))->F_flag = (jref) (frame[0].o);
	LINE_NUMBER(1809);
	((mindustry_gen_SetFlagCallPacket *) NULL_CHECK((frame[2].o)))->F_add = (frame[1].i);
	LINE_NUMBER(1810);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1812);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setFloor_mindustry_world_Tile_mindustry_world_Block_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setFloor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1815);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1816);
	SM_mindustry_world_Tile_setFloor_mindustry_world_Tile_mindustry_world_Block_mindustry_world_Block(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(1818);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1819);
	clinit_mindustry_gen_SetFloorCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetFloorCallPacket);
	init_mindustry_gen_SetFloorCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1820);
	((mindustry_gen_SetFloorCallPacket *) NULL_CHECK((frame[3].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(1821);
	((mindustry_gen_SetFloorCallPacket *) NULL_CHECK((frame[3].o)))->F_floor = (jref) (frame[1].o);
	LINE_NUMBER(1822);
	((mindustry_gen_SetFloorCallPacket *) NULL_CHECK((frame[3].o)))->F_overlay = (jref) (frame[2].o);
	LINE_NUMBER(1823);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1825);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setHudText_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setHudText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1828);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1829);
	clinit_mindustry_gen_SetHudTextCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetHudTextCallPacket);
	init_mindustry_gen_SetHudTextCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1830);
	((mindustry_gen_SetHudTextCallPacket *) NULL_CHECK((frame[1].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1831);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1833);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setHudText_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setHudText", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1836);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1837);
	clinit_mindustry_gen_SetHudTextCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetHudTextCallPacket);
	init_mindustry_gen_SetHudTextCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1838);
	((mindustry_gen_SetHudTextCallPacket *) NULL_CHECK((frame[2].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1839);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(1841);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setHudTextReliable_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setHudTextReliable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1844);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1845);
	clinit_mindustry_gen_SetHudTextReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetHudTextReliableCallPacket);
	init_mindustry_gen_SetHudTextReliableCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1846);
	((mindustry_gen_SetHudTextReliableCallPacket *) NULL_CHECK((frame[1].o)))->F_message = (jref) (frame[0].o);
	LINE_NUMBER(1847);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1849);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setHudTextReliable_mindustry_net_NetConnection_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setHudTextReliable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1852);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1853);
	clinit_mindustry_gen_SetHudTextReliableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetHudTextReliableCallPacket);
	init_mindustry_gen_SetHudTextReliableCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1854);
	((mindustry_gen_SetHudTextReliableCallPacket *) NULL_CHECK((frame[2].o)))->F_message = (jref) (frame[1].o);
	LINE_NUMBER(1855);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1857);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setItem_mindustry_gen_Building_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setItem", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1860);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1861);
	SM_mindustry_input_InputHandler_setItem_mindustry_gen_Building_mindustry_type_Item_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	}
label_2:;
	{
	LINE_NUMBER(1863);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1864);
	clinit_mindustry_gen_SetItemCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetItemCallPacket);
	init_mindustry_gen_SetItemCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1865);
	((mindustry_gen_SetItemCallPacket *) NULL_CHECK((frame[3].o)))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(1866);
	((mindustry_gen_SetItemCallPacket *) NULL_CHECK((frame[3].o)))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(1867);
	((mindustry_gen_SetItemCallPacket *) NULL_CHECK((frame[3].o)))->F_amount = (frame[2].i);
	LINE_NUMBER(1868);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(1870);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setItems_mindustry_gen_Building_Array1_mindustry_type_ItemStack(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setItems", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1873);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1874);
	SM_mindustry_input_InputHandler_setItems_mindustry_gen_Building_Array1_mindustry_type_ItemStack(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(1876);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1877);
	clinit_mindustry_gen_SetItemsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetItemsCallPacket);
	init_mindustry_gen_SetItemsCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1878);
	((mindustry_gen_SetItemsCallPacket *) NULL_CHECK((frame[2].o)))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(1879);
	((mindustry_gen_SetItemsCallPacket *) NULL_CHECK((frame[2].o)))->F_items = (jref) (frame[1].o);
	LINE_NUMBER(1880);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(1882);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setLiquid_mindustry_gen_Building_mindustry_type_Liquid_float(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setLiquid", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(1885);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1886);
	SM_mindustry_input_InputHandler_setLiquid_mindustry_gen_Building_mindustry_type_Liquid_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	}
label_2:;
	{
	LINE_NUMBER(1888);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1889);
	clinit_mindustry_gen_SetLiquidCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetLiquidCallPacket);
	init_mindustry_gen_SetLiquidCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1890);
	((mindustry_gen_SetLiquidCallPacket *) NULL_CHECK((frame[3].o)))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(1891);
	((mindustry_gen_SetLiquidCallPacket *) NULL_CHECK((frame[3].o)))->F_liquid = (jref) (frame[1].o);
	LINE_NUMBER(1892);
	((mindustry_gen_SetLiquidCallPacket *) NULL_CHECK((frame[3].o)))->F_amount = (frame[2].f);
	LINE_NUMBER(1893);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(1895);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setLiquids_mindustry_gen_Building_Array1_mindustry_type_LiquidStack(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setLiquids", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1898);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1899);
	SM_mindustry_input_InputHandler_setLiquids_mindustry_gen_Building_Array1_mindustry_type_LiquidStack(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(1901);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1902);
	clinit_mindustry_gen_SetLiquidsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetLiquidsCallPacket);
	init_mindustry_gen_SetLiquidsCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1903);
	((mindustry_gen_SetLiquidsCallPacket *) NULL_CHECK((frame[2].o)))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(1904);
	((mindustry_gen_SetLiquidsCallPacket *) NULL_CHECK((frame[2].o)))->F_liquids = (jref) (frame[1].o);
	LINE_NUMBER(1905);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(1907);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setMapArea_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setMapArea", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(1910);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1911);
	SM_mindustry_logic_LExecutor_setMapArea_int_int_int_int(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i));
	}
label_2:;
	{
	LINE_NUMBER(1913);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1914);
	clinit_mindustry_gen_SetMapAreaCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetMapAreaCallPacket);
	init_mindustry_gen_SetMapAreaCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(1915);
	((mindustry_gen_SetMapAreaCallPacket *) NULL_CHECK((frame[4].o)))->F_x = (frame[0].i);
	LINE_NUMBER(1916);
	((mindustry_gen_SetMapAreaCallPacket *) NULL_CHECK((frame[4].o)))->F_y = (frame[1].i);
	LINE_NUMBER(1917);
	((mindustry_gen_SetMapAreaCallPacket *) NULL_CHECK((frame[4].o)))->F_w = (frame[2].i);
	LINE_NUMBER(1918);
	((mindustry_gen_SetMapAreaCallPacket *) NULL_CHECK((frame[4].o)))->F_h = (frame[3].i);
	LINE_NUMBER(1919);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1921);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setObjectives_mindustry_game_MapObjectives(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setObjectives", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1924);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1925);
	clinit_mindustry_gen_SetObjectivesCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetObjectivesCallPacket);
	init_mindustry_gen_SetObjectivesCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1926);
	((mindustry_gen_SetObjectivesCallPacket *) NULL_CHECK((frame[1].o)))->F_executor = (jref) (frame[0].o);
	LINE_NUMBER(1927);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1929);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setObjectives_mindustry_net_NetConnection_mindustry_game_MapObjectives(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setObjectives", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1932);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1933);
	clinit_mindustry_gen_SetObjectivesCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetObjectivesCallPacket);
	init_mindustry_gen_SetObjectivesCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1934);
	((mindustry_gen_SetObjectivesCallPacket *) NULL_CHECK((frame[2].o)))->F_executor = (jref) (frame[1].o);
	LINE_NUMBER(1935);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1937);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setOverlay_mindustry_world_Tile_mindustry_world_Block(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setOverlay", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1940);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1941);
	SM_mindustry_world_Tile_setOverlay_mindustry_world_Tile_mindustry_world_Block(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(1943);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(1944);
	clinit_mindustry_gen_SetOverlayCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetOverlayCallPacket);
	init_mindustry_gen_SetOverlayCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1945);
	((mindustry_gen_SetOverlayCallPacket *) NULL_CHECK((frame[2].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(1946);
	((mindustry_gen_SetOverlayCallPacket *) NULL_CHECK((frame[2].o)))->F_overlay = (jref) (frame[1].o);
	LINE_NUMBER(1947);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1949);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setPlayerTeamEditor_mindustry_gen_Player_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setPlayerTeamEditor", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1952);
	SM_mindustry_ui_fragments_HudFragment_setPlayerTeamEditor_mindustry_gen_Player_mindustry_game_Team(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1953);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1954);
	clinit_mindustry_gen_SetPlayerTeamEditorCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetPlayerTeamEditorCallPacket);
	init_mindustry_gen_SetPlayerTeamEditorCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1955);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(1956);
	((mindustry_gen_SetPlayerTeamEditorCallPacket *) NULL_CHECK((frame[2].o)))->F_player = (jref) (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(1958);
	((mindustry_gen_SetPlayerTeamEditorCallPacket *) NULL_CHECK((frame[2].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(1959);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(1961);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setPlayerTeamEditor__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setPlayerTeamEditor__forward", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1965);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1966);
	clinit_mindustry_gen_SetPlayerTeamEditorCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetPlayerTeamEditorCallPacket);
	init_mindustry_gen_SetPlayerTeamEditorCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1967);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1968);
	((mindustry_gen_SetPlayerTeamEditorCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(1970);
	((mindustry_gen_SetPlayerTeamEditorCallPacket *) NULL_CHECK((frame[3].o)))->F_team = (jref) (frame[2].o);
	LINE_NUMBER(1971);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(1973);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setPosition_mindustry_net_NetConnection_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(1976);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1977);
	clinit_mindustry_gen_SetPositionCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetPositionCallPacket);
	init_mindustry_gen_SetPositionCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1978);
	((mindustry_gen_SetPositionCallPacket *) NULL_CHECK((frame[3].o)))->F_x = (frame[1].f);
	LINE_NUMBER(1979);
	((mindustry_gen_SetPositionCallPacket *) NULL_CHECK((frame[3].o)))->F_y = (frame[2].f);
	LINE_NUMBER(1980);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1982);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setRule_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setRule", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1985);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1986);
	clinit_mindustry_gen_SetRuleCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetRuleCallPacket);
	init_mindustry_gen_SetRuleCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1987);
	((mindustry_gen_SetRuleCallPacket *) NULL_CHECK((frame[2].o)))->F_rule = (jref) (frame[0].o);
	LINE_NUMBER(1988);
	((mindustry_gen_SetRuleCallPacket *) NULL_CHECK((frame[2].o)))->F_jsonData = (jref) (frame[1].o);
	LINE_NUMBER(1989);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(1991);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setRule_mindustry_net_NetConnection_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setRule", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(1994);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1995);
	clinit_mindustry_gen_SetRuleCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetRuleCallPacket);
	init_mindustry_gen_SetRuleCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1996);
	((mindustry_gen_SetRuleCallPacket *) NULL_CHECK((frame[3].o)))->F_rule = (jref) (frame[1].o);
	LINE_NUMBER(1997);
	((mindustry_gen_SetRuleCallPacket *) NULL_CHECK((frame[3].o)))->F_jsonData = (jref) (frame[2].o);
	LINE_NUMBER(1998);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2000);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setRules_mindustry_game_Rules(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setRules", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2003);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2004);
	clinit_mindustry_gen_SetRulesCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetRulesCallPacket);
	init_mindustry_gen_SetRulesCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2005);
	((mindustry_gen_SetRulesCallPacket *) NULL_CHECK((frame[1].o)))->F_rules = (jref) (frame[0].o);
	LINE_NUMBER(2006);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2008);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setRules_mindustry_net_NetConnection_mindustry_game_Rules(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setRules", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2011);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2012);
	clinit_mindustry_gen_SetRulesCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetRulesCallPacket);
	init_mindustry_gen_SetRulesCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2013);
	((mindustry_gen_SetRulesCallPacket *) NULL_CHECK((frame[2].o)))->F_rules = (jref) (frame[1].o);
	LINE_NUMBER(2014);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2016);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setTeam_mindustry_gen_Building_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setTeam", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2019);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2020);
	SM_mindustry_world_Tile_setTeam_mindustry_gen_Building_mindustry_game_Team(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(2022);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2023);
	clinit_mindustry_gen_SetTeamCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetTeamCallPacket);
	init_mindustry_gen_SetTeamCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2024);
	((mindustry_gen_SetTeamCallPacket *) NULL_CHECK((frame[2].o)))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(2025);
	((mindustry_gen_SetTeamCallPacket *) NULL_CHECK((frame[2].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(2026);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2028);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setTeams_Array1_int_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setTeams", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2031);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2032);
	SM_mindustry_world_Tile_setTeams_Array1_int_mindustry_game_Team(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(2034);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2035);
	clinit_mindustry_gen_SetTeamsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetTeamsCallPacket);
	init_mindustry_gen_SetTeamsCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2036);
	((mindustry_gen_SetTeamsCallPacket *) NULL_CHECK((frame[2].o)))->F_positions = (jref) (frame[0].o);
	LINE_NUMBER(2037);
	((mindustry_gen_SetTeamsCallPacket *) NULL_CHECK((frame[2].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(2038);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2040);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setTile_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setTile", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2043);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2044);
	SM_mindustry_world_Tile_setTile_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	}
label_2:;
	{
	LINE_NUMBER(2046);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2047);
	clinit_mindustry_gen_SetTileCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetTileCallPacket);
	init_mindustry_gen_SetTileCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2048);
	((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[4].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(2049);
	((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[4].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(2050);
	((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[4].o)))->F_team = (jref) (frame[2].o);
	LINE_NUMBER(2051);
	((mindustry_gen_SetTileCallPacket *) NULL_CHECK((frame[4].o)))->F_rotation = (frame[3].i);
	LINE_NUMBER(2052);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2054);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setTileBlocks_mindustry_world_Block_mindustry_game_Team_Array1_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setTileBlocks", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2057);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2058);
	SM_mindustry_world_Tile_setTileBlocks_mindustry_world_Block_mindustry_game_Team_Array1_int(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(2060);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2061);
	clinit_mindustry_gen_SetTileBlocksCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetTileBlocksCallPacket);
	init_mindustry_gen_SetTileBlocksCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2062);
	((mindustry_gen_SetTileBlocksCallPacket *) NULL_CHECK((frame[3].o)))->F_block = (jref) (frame[0].o);
	LINE_NUMBER(2063);
	((mindustry_gen_SetTileBlocksCallPacket *) NULL_CHECK((frame[3].o)))->F_team = (jref) (frame[1].o);
	LINE_NUMBER(2064);
	((mindustry_gen_SetTileBlocksCallPacket *) NULL_CHECK((frame[3].o)))->F_positions = (jref) (frame[2].o);
	LINE_NUMBER(2065);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2067);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setTileFloors_mindustry_world_Block_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setTileFloors", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2070);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2071);
	SM_mindustry_world_Tile_setTileFloors_mindustry_world_Block_Array1_int(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(2073);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2074);
	clinit_mindustry_gen_SetTileFloorsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetTileFloorsCallPacket);
	init_mindustry_gen_SetTileFloorsCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2075);
	((mindustry_gen_SetTileFloorsCallPacket *) NULL_CHECK((frame[2].o)))->F_block = (jref) (frame[0].o);
	LINE_NUMBER(2076);
	((mindustry_gen_SetTileFloorsCallPacket *) NULL_CHECK((frame[2].o)))->F_positions = (jref) (frame[1].o);
	LINE_NUMBER(2077);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2079);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setTileItems_mindustry_type_Item_int_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setTileItems", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2082);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2083);
	SM_mindustry_input_InputHandler_setTileItems_mindustry_type_Item_int_Array1_int(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(2085);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2086);
	clinit_mindustry_gen_SetTileItemsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetTileItemsCallPacket);
	init_mindustry_gen_SetTileItemsCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2087);
	((mindustry_gen_SetTileItemsCallPacket *) NULL_CHECK((frame[3].o)))->F_item = (jref) (frame[0].o);
	LINE_NUMBER(2088);
	((mindustry_gen_SetTileItemsCallPacket *) NULL_CHECK((frame[3].o)))->F_amount = (frame[1].i);
	LINE_NUMBER(2089);
	((mindustry_gen_SetTileItemsCallPacket *) NULL_CHECK((frame[3].o)))->F_positions = (jref) (frame[2].o);
	LINE_NUMBER(2090);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2092);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setTileLiquids_mindustry_type_Liquid_float_Array1_int(jcontext ctx, jobject param0, jfloat param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setTileLiquids", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2095);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2096);
	SM_mindustry_input_InputHandler_setTileLiquids_mindustry_type_Liquid_float_Array1_int(ctx, (frame[0].o), (frame[1].f), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(2098);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2099);
	clinit_mindustry_gen_SetTileLiquidsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetTileLiquidsCallPacket);
	init_mindustry_gen_SetTileLiquidsCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2100);
	((mindustry_gen_SetTileLiquidsCallPacket *) NULL_CHECK((frame[3].o)))->F_liquid = (jref) (frame[0].o);
	LINE_NUMBER(2101);
	((mindustry_gen_SetTileLiquidsCallPacket *) NULL_CHECK((frame[3].o)))->F_amount = (frame[1].f);
	LINE_NUMBER(2102);
	((mindustry_gen_SetTileLiquidsCallPacket *) NULL_CHECK((frame[3].o)))->F_positions = (jref) (frame[2].o);
	LINE_NUMBER(2103);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setTileOverlays_mindustry_world_Block_Array1_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setTileOverlays", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2108);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2109);
	SM_mindustry_world_Tile_setTileOverlays_mindustry_world_Block_Array1_int(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(2111);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2112);
	clinit_mindustry_gen_SetTileOverlaysCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetTileOverlaysCallPacket);
	init_mindustry_gen_SetTileOverlaysCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2113);
	((mindustry_gen_SetTileOverlaysCallPacket *) NULL_CHECK((frame[2].o)))->F_block = (jref) (frame[0].o);
	LINE_NUMBER(2114);
	((mindustry_gen_SetTileOverlaysCallPacket *) NULL_CHECK((frame[2].o)))->F_positions = (jref) (frame[1].o);
	LINE_NUMBER(2115);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setUnitCommand_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setUnitCommand", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2120);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2121);
	SM_mindustry_input_InputHandler_setUnitCommand_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(2123);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2124);
	clinit_mindustry_gen_SetUnitCommandCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetUnitCommandCallPacket);
	init_mindustry_gen_SetUnitCommandCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2125);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(2126);
	((mindustry_gen_SetUnitCommandCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(2128);
	((mindustry_gen_SetUnitCommandCallPacket *) NULL_CHECK((frame[3].o)))->F_unitIds = (jref) (frame[1].o);
	LINE_NUMBER(2129);
	((mindustry_gen_SetUnitCommandCallPacket *) NULL_CHECK((frame[3].o)))->F_command = (jref) (frame[2].o);
	LINE_NUMBER(2130);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(2132);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setUnitCommand__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setUnitCommand__forward", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2136);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2137);
	clinit_mindustry_gen_SetUnitCommandCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetUnitCommandCallPacket);
	init_mindustry_gen_SetUnitCommandCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2138);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2139);
	((mindustry_gen_SetUnitCommandCallPacket *) NULL_CHECK((frame[4].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(2141);
	((mindustry_gen_SetUnitCommandCallPacket *) NULL_CHECK((frame[4].o)))->F_unitIds = (jref) (frame[2].o);
	LINE_NUMBER(2142);
	((mindustry_gen_SetUnitCommandCallPacket *) NULL_CHECK((frame[4].o)))->F_command = (jref) (frame[3].o);
	LINE_NUMBER(2143);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(2145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setUnitStance_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setUnitStance", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(2149);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2150);
	SM_mindustry_input_InputHandler_setUnitStance_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	}
label_2:;
	{
	LINE_NUMBER(2152);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2153);
	clinit_mindustry_gen_SetUnitStanceCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetUnitStanceCallPacket);
	init_mindustry_gen_SetUnitStanceCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2154);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(2155);
	((mindustry_gen_SetUnitStanceCallPacket *) NULL_CHECK((frame[4].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(2157);
	((mindustry_gen_SetUnitStanceCallPacket *) NULL_CHECK((frame[4].o)))->F_unitIds = (jref) (frame[1].o);
	LINE_NUMBER(2158);
	((mindustry_gen_SetUnitStanceCallPacket *) NULL_CHECK((frame[4].o)))->F_stance = (jref) (frame[2].o);
	LINE_NUMBER(2159);
	((mindustry_gen_SetUnitStanceCallPacket *) NULL_CHECK((frame[4].o)))->F_enable = (frame[3].i);
	LINE_NUMBER(2160);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(2162);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_setUnitStance__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jbool param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:setUnitStance__forward", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(2166);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2167);
	clinit_mindustry_gen_SetUnitStanceCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SetUnitStanceCallPacket);
	init_mindustry_gen_SetUnitStanceCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2168);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2169);
	((mindustry_gen_SetUnitStanceCallPacket *) NULL_CHECK((frame[5].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(2171);
	((mindustry_gen_SetUnitStanceCallPacket *) NULL_CHECK((frame[5].o)))->F_unitIds = (jref) (frame[2].o);
	LINE_NUMBER(2172);
	((mindustry_gen_SetUnitStanceCallPacket *) NULL_CHECK((frame[5].o)))->F_stance = (jref) (frame[3].o);
	LINE_NUMBER(2173);
	((mindustry_gen_SetUnitStanceCallPacket *) NULL_CHECK((frame[5].o)))->F_enable = (frame[4].i);
	LINE_NUMBER(2174);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(2176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_sound_arc_audio_Sound_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:sound", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(2179);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2180);
	SM_mindustry_core_NetClient_sound_arc_audio_Sound_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f));
	}
label_2:;
	{
	LINE_NUMBER(2182);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2183);
	clinit_mindustry_gen_SoundCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SoundCallPacket);
	init_mindustry_gen_SoundCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2184);
	((mindustry_gen_SoundCallPacket *) NULL_CHECK((frame[4].o)))->F_sound = (jref) (frame[0].o);
	LINE_NUMBER(2185);
	((mindustry_gen_SoundCallPacket *) NULL_CHECK((frame[4].o)))->F_volume = (frame[1].f);
	LINE_NUMBER(2186);
	((mindustry_gen_SoundCallPacket *) NULL_CHECK((frame[4].o)))->F_pitch = (frame[2].f);
	LINE_NUMBER(2187);
	((mindustry_gen_SoundCallPacket *) NULL_CHECK((frame[4].o)))->F_pan = (frame[3].f);
	LINE_NUMBER(2188);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2190);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_sound_mindustry_net_NetConnection_arc_audio_Sound_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:sound", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(2194);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2195);
	SM_mindustry_core_NetClient_sound_arc_audio_Sound_float_float_float(ctx, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f));
	}
label_2:;
	{
	LINE_NUMBER(2197);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2198);
	clinit_mindustry_gen_SoundCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SoundCallPacket);
	init_mindustry_gen_SoundCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2199);
	((mindustry_gen_SoundCallPacket *) NULL_CHECK((frame[5].o)))->F_sound = (jref) (frame[1].o);
	LINE_NUMBER(2200);
	((mindustry_gen_SoundCallPacket *) NULL_CHECK((frame[5].o)))->F_volume = (frame[2].f);
	LINE_NUMBER(2201);
	((mindustry_gen_SoundCallPacket *) NULL_CHECK((frame[5].o)))->F_pitch = (frame[3].f);
	LINE_NUMBER(2202);
	((mindustry_gen_SoundCallPacket *) NULL_CHECK((frame[5].o)))->F_pan = (frame[4].f);
	LINE_NUMBER(2203);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2205);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_soundAt_arc_audio_Sound_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:soundAt", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(2208);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2209);
	SM_mindustry_core_NetClient_soundAt_arc_audio_Sound_float_float_float_float(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	}
label_2:;
	{
	LINE_NUMBER(2211);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2212);
	clinit_mindustry_gen_SoundAtCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SoundAtCallPacket);
	init_mindustry_gen_SoundAtCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2213);
	((mindustry_gen_SoundAtCallPacket *) NULL_CHECK((frame[5].o)))->F_sound = (jref) (frame[0].o);
	LINE_NUMBER(2214);
	((mindustry_gen_SoundAtCallPacket *) NULL_CHECK((frame[5].o)))->F_x = (frame[1].f);
	LINE_NUMBER(2215);
	((mindustry_gen_SoundAtCallPacket *) NULL_CHECK((frame[5].o)))->F_y = (frame[2].f);
	LINE_NUMBER(2216);
	((mindustry_gen_SoundAtCallPacket *) NULL_CHECK((frame[5].o)))->F_volume = (frame[3].f);
	LINE_NUMBER(2217);
	((mindustry_gen_SoundAtCallPacket *) NULL_CHECK((frame[5].o)))->F_pitch = (frame[4].f);
	LINE_NUMBER(2218);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[5].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_soundAt_mindustry_net_NetConnection_arc_audio_Sound_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:soundAt", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	{
	LINE_NUMBER(2224);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2225);
	SM_mindustry_core_NetClient_soundAt_arc_audio_Sound_float_float_float_float(ctx, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	}
label_2:;
	{
	LINE_NUMBER(2227);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2228);
	clinit_mindustry_gen_SoundAtCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SoundAtCallPacket);
	init_mindustry_gen_SoundAtCallPacket(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2229);
	((mindustry_gen_SoundAtCallPacket *) NULL_CHECK((frame[6].o)))->F_sound = (jref) (frame[1].o);
	LINE_NUMBER(2230);
	((mindustry_gen_SoundAtCallPacket *) NULL_CHECK((frame[6].o)))->F_x = (frame[2].f);
	LINE_NUMBER(2231);
	((mindustry_gen_SoundAtCallPacket *) NULL_CHECK((frame[6].o)))->F_y = (frame[3].f);
	LINE_NUMBER(2232);
	((mindustry_gen_SoundAtCallPacket *) NULL_CHECK((frame[6].o)))->F_volume = (frame[4].f);
	LINE_NUMBER(2233);
	((mindustry_gen_SoundAtCallPacket *) NULL_CHECK((frame[6].o)))->F_pitch = (frame[5].f);
	LINE_NUMBER(2234);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[6].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_spawnEffect_float_float_float_mindustry_type_UnitType(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:spawnEffect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2239);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2240);
	SM_mindustry_ai_WaveSpawner_spawnEffect_float_float_float_mindustry_type_UnitType(ctx, (frame[0].f), (frame[1].f), (frame[2].f), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(2242);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2243);
	clinit_mindustry_gen_SpawnEffectCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SpawnEffectCallPacket);
	init_mindustry_gen_SpawnEffectCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2244);
	((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[4].o)))->F_x = (frame[0].f);
	LINE_NUMBER(2245);
	((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[4].o)))->F_y = (frame[1].f);
	LINE_NUMBER(2246);
	((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[4].o)))->F_rotation = (frame[2].f);
	LINE_NUMBER(2247);
	((mindustry_gen_SpawnEffectCallPacket *) NULL_CHECK((frame[4].o)))->F_u = (jref) (frame[3].o);
	LINE_NUMBER(2248);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2250);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_stateSnapshot_float_int_int_boolean_boolean_int_byte_long_long_Array1_byte(jcontext ctx, jfloat param0, jint param1, jint param2, jbool param3, jbool param4, jint param5, jbyte param6, jlong param7, jlong param8, jobject param9) {
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:stateSnapshot", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].f = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	frame[7].l = param7;
	frame[9].l = param8;
	frame[11].o = param9;
	{
	LINE_NUMBER(2254);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2255);
	clinit_mindustry_gen_StateSnapshotCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_StateSnapshotCallPacket);
	init_mindustry_gen_StateSnapshotCallPacket(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(2256);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[12].o)))->F_waveTime = (frame[0].f);
	LINE_NUMBER(2257);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[12].o)))->F_wave = (frame[1].i);
	LINE_NUMBER(2258);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[12].o)))->F_enemies = (frame[2].i);
	LINE_NUMBER(2259);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[12].o)))->F_paused = (frame[3].i);
	LINE_NUMBER(2260);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[12].o)))->F_gameOver = (frame[4].i);
	LINE_NUMBER(2261);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[12].o)))->F_timeData = (frame[5].i);
	LINE_NUMBER(2262);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[12].o)))->F_tps = (frame[6].i);
	LINE_NUMBER(2263);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[12].o)))->F_rand0 = (frame[7].l);
	LINE_NUMBER(2264);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[12].o)))->F_rand1 = (frame[9].l);
	LINE_NUMBER(2265);
	((mindustry_gen_StateSnapshotCallPacket *) NULL_CHECK((frame[12].o)))->F_coreData = (jref) (frame[11].o);
	LINE_NUMBER(2266);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[12].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(2268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_syncVariable_mindustry_gen_Building_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:syncVariable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2271);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2272);
	clinit_mindustry_gen_SyncVariableCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_SyncVariableCallPacket);
	init_mindustry_gen_SyncVariableCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2273);
	((mindustry_gen_SyncVariableCallPacket *) NULL_CHECK((frame[3].o)))->F_building = (jref) (frame[0].o);
	LINE_NUMBER(2274);
	((mindustry_gen_SyncVariableCallPacket *) NULL_CHECK((frame[3].o)))->F_variable = (frame[1].i);
	LINE_NUMBER(2275);
	((mindustry_gen_SyncVariableCallPacket *) NULL_CHECK((frame[3].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(2276);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(2278);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_takeItems_mindustry_gen_Building_mindustry_type_Item_int_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:takeItems", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2281);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2282);
	SM_mindustry_input_InputHandler_takeItems_mindustry_gen_Building_mindustry_type_Item_int_mindustry_gen_Unit(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(2284);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2285);
	clinit_mindustry_gen_TakeItemsCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TakeItemsCallPacket);
	init_mindustry_gen_TakeItemsCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2286);
	((mindustry_gen_TakeItemsCallPacket *) NULL_CHECK((frame[4].o)))->F_build = (jref) (frame[0].o);
	LINE_NUMBER(2287);
	((mindustry_gen_TakeItemsCallPacket *) NULL_CHECK((frame[4].o)))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(2288);
	((mindustry_gen_TakeItemsCallPacket *) NULL_CHECK((frame[4].o)))->F_amount = (frame[2].i);
	LINE_NUMBER(2289);
	((mindustry_gen_TakeItemsCallPacket *) NULL_CHECK((frame[4].o)))->F_to = (jref) (frame[3].o);
	LINE_NUMBER(2290);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2292);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jobject param4, jbool param5) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:textInput", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	{
	LINE_NUMBER(2296);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2297);
	clinit_mindustry_gen_TextInputCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TextInputCallPacket);
	init_mindustry_gen_TextInputCallPacket(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2298);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[6].o)))->F_textInputId = (frame[0].i);
	LINE_NUMBER(2299);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[6].o)))->F_title = (jref) (frame[1].o);
	LINE_NUMBER(2300);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[6].o)))->F_message = (jref) (frame[2].o);
	LINE_NUMBER(2301);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[6].o)))->F_textLength = (frame[3].i);
	LINE_NUMBER(2302);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[6].o)))->F_def = (jref) (frame[4].o);
	LINE_NUMBER(2303);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[6].o)))->F_numeric = (frame[5].i);
	LINE_NUMBER(2304);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[6].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2306);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_textInput_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_int_java_lang_String_boolean(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4, jobject param5, jbool param6) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:textInput", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(2310);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2311);
	clinit_mindustry_gen_TextInputCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TextInputCallPacket);
	init_mindustry_gen_TextInputCallPacket(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(2312);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[7].o)))->F_textInputId = (frame[1].i);
	LINE_NUMBER(2313);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[7].o)))->F_title = (jref) (frame[2].o);
	LINE_NUMBER(2314);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[7].o)))->F_message = (jref) (frame[3].o);
	LINE_NUMBER(2315);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[7].o)))->F_textLength = (frame[4].i);
	LINE_NUMBER(2316);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[7].o)))->F_def = (jref) (frame[5].o);
	LINE_NUMBER(2317);
	((mindustry_gen_TextInputCallPacket *) NULL_CHECK((frame[7].o)))->F_numeric = (frame[6].i);
	LINE_NUMBER(2318);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[7].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2320);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean(jcontext ctx, jint param0, jobject param1, jobject param2, jint param3, jobject param4, jbool param5, jbool param6) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:textInput", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(2324);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2325);
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TextInputCallPacket2);
	init_mindustry_gen_TextInputCallPacket2(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(2326);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[7].o)))->F_textInputId = (frame[0].i);
	LINE_NUMBER(2327);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[7].o)))->F_title = (jref) (frame[1].o);
	LINE_NUMBER(2328);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[7].o)))->F_message = (jref) (frame[2].o);
	LINE_NUMBER(2329);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[7].o)))->F_textLength = (frame[3].i);
	LINE_NUMBER(2330);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[7].o)))->F_def = (jref) (frame[4].o);
	LINE_NUMBER(2331);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[7].o)))->F_numeric = (frame[5].i);
	LINE_NUMBER(2332);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[7].o)))->F_allowEmpty = (frame[6].i);
	LINE_NUMBER(2333);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[7].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2335);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_textInput_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jint param4, jobject param5, jbool param6, jbool param7) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:textInput", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].o = param5;
	frame[6].i = param6;
	frame[7].i = param7;
	{
	LINE_NUMBER(2339);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2340);
	clinit_mindustry_gen_TextInputCallPacket2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TextInputCallPacket2);
	init_mindustry_gen_TextInputCallPacket2(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(2341);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[8].o)))->F_textInputId = (frame[1].i);
	LINE_NUMBER(2342);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[8].o)))->F_title = (jref) (frame[2].o);
	LINE_NUMBER(2343);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[8].o)))->F_message = (jref) (frame[3].o);
	LINE_NUMBER(2344);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[8].o)))->F_textLength = (frame[4].i);
	LINE_NUMBER(2345);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[8].o)))->F_def = (jref) (frame[5].o);
	LINE_NUMBER(2346);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[8].o)))->F_numeric = (frame[6].i);
	LINE_NUMBER(2347);
	((mindustry_gen_TextInputCallPacket2 *) NULL_CHECK((frame[8].o)))->F_allowEmpty = (frame[7].i);
	LINE_NUMBER(2348);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[8].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2350);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_textInputResult_mindustry_gen_Player_int_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:textInputResult", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2353);
	SM_mindustry_ui_Menus_textInputResult_mindustry_gen_Player_int_java_lang_String(ctx, (frame[0].o), (frame[1].i), (frame[2].o));
	LINE_NUMBER(2354);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2355);
	clinit_mindustry_gen_TextInputResultCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TextInputResultCallPacket);
	init_mindustry_gen_TextInputResultCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2356);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(2357);
	((mindustry_gen_TextInputResultCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(2359);
	((mindustry_gen_TextInputResultCallPacket *) NULL_CHECK((frame[3].o)))->F_textInputId = (frame[1].i);
	LINE_NUMBER(2360);
	((mindustry_gen_TextInputResultCallPacket *) NULL_CHECK((frame[3].o)))->F_text = (jref) (frame[2].o);
	LINE_NUMBER(2361);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2363);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:tileConfig", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2366);
	SM_mindustry_input_InputHandler_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(2367);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2368);
	clinit_mindustry_gen_TileConfigCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TileConfigCallPacket);
	init_mindustry_gen_TileConfigCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2369);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(2370);
	((mindustry_gen_TileConfigCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(2372);
	((mindustry_gen_TileConfigCallPacket *) NULL_CHECK((frame[3].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(2373);
	((mindustry_gen_TileConfigCallPacket *) NULL_CHECK((frame[3].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(2374);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2376);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_tileConfig__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:tileConfig__forward", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2380);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2381);
	clinit_mindustry_gen_TileConfigCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TileConfigCallPacket);
	init_mindustry_gen_TileConfigCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2382);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2383);
	((mindustry_gen_TileConfigCallPacket *) NULL_CHECK((frame[4].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(2385);
	((mindustry_gen_TileConfigCallPacket *) NULL_CHECK((frame[4].o)))->F_build = (jref) (frame[2].o);
	LINE_NUMBER(2386);
	((mindustry_gen_TileConfigCallPacket *) NULL_CHECK((frame[4].o)))->F_value = (jref) (frame[3].o);
	LINE_NUMBER(2387);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (frame[4].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(2389);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_tileTap_mindustry_gen_Player_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:tileTap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2392);
	SM_mindustry_input_InputHandler_tileTap_mindustry_gen_Player_mindustry_world_Tile(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2393);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2394);
	clinit_mindustry_gen_TileTapCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TileTapCallPacket);
	init_mindustry_gen_TileTapCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2395);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(2396);
	((mindustry_gen_TileTapCallPacket *) NULL_CHECK((frame[2].o)))->F_player = (jref) (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(2398);
	((mindustry_gen_TileTapCallPacket *) NULL_CHECK((frame[2].o)))->F_tile = (jref) (frame[1].o);
	LINE_NUMBER(2399);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2401);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_traceInfo_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_net_Administration$TraceInfo(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:traceInfo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2405);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2406);
	clinit_mindustry_gen_TraceInfoCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TraceInfoCallPacket);
	init_mindustry_gen_TraceInfoCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2407);
	((mindustry_gen_TraceInfoCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[1].o);
	LINE_NUMBER(2408);
	((mindustry_gen_TraceInfoCallPacket *) NULL_CHECK((frame[3].o)))->F_info = (jref) (frame[2].o);
	LINE_NUMBER(2409);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2411);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_transferInventory_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:transferInventory", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2414);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2415);
	SM_mindustry_input_InputHandler_transferInventory_mindustry_gen_Player_mindustry_gen_Building(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(2417);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2418);
	clinit_mindustry_gen_TransferInventoryCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TransferInventoryCallPacket);
	init_mindustry_gen_TransferInventoryCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2419);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(2420);
	((mindustry_gen_TransferInventoryCallPacket *) NULL_CHECK((frame[2].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(2422);
	((mindustry_gen_TransferInventoryCallPacket *) NULL_CHECK((frame[2].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(2423);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(2425);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_transferInventory__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:transferInventory__forward", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2429);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2430);
	clinit_mindustry_gen_TransferInventoryCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TransferInventoryCallPacket);
	init_mindustry_gen_TransferInventoryCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2431);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2432);
	((mindustry_gen_TransferInventoryCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(2434);
	((mindustry_gen_TransferInventoryCallPacket *) NULL_CHECK((frame[3].o)))->F_build = (jref) (frame[2].o);
	LINE_NUMBER(2435);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[3].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(2437);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_transferItemEffect_mindustry_type_Item_float_float_mindustry_gen_Itemsc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:transferItemEffect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2440);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2441);
	SM_mindustry_input_InputHandler_transferItemEffect_mindustry_type_Item_float_float_mindustry_gen_Itemsc(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(2443);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2444);
	clinit_mindustry_gen_TransferItemEffectCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TransferItemEffectCallPacket);
	init_mindustry_gen_TransferItemEffectCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2445);
	((mindustry_gen_TransferItemEffectCallPacket *) NULL_CHECK((frame[4].o)))->F_item = (jref) (frame[0].o);
	LINE_NUMBER(2446);
	((mindustry_gen_TransferItemEffectCallPacket *) NULL_CHECK((frame[4].o)))->F_x = (frame[1].f);
	LINE_NUMBER(2447);
	((mindustry_gen_TransferItemEffectCallPacket *) NULL_CHECK((frame[4].o)))->F_y = (frame[2].f);
	LINE_NUMBER(2448);
	((mindustry_gen_TransferItemEffectCallPacket *) NULL_CHECK((frame[4].o)))->F_to = (jref) (frame[3].o);
	LINE_NUMBER(2449);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2451);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jobject param5) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:transferItemTo", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(2455);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2456);
	SM_mindustry_input_InputHandler_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_2:;
	{
	LINE_NUMBER(2458);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2459);
	clinit_mindustry_gen_TransferItemToCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TransferItemToCallPacket);
	init_mindustry_gen_TransferItemToCallPacket(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(2460);
	((mindustry_gen_TransferItemToCallPacket *) NULL_CHECK((frame[6].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(2461);
	((mindustry_gen_TransferItemToCallPacket *) NULL_CHECK((frame[6].o)))->F_item = (jref) (frame[1].o);
	LINE_NUMBER(2462);
	((mindustry_gen_TransferItemToCallPacket *) NULL_CHECK((frame[6].o)))->F_amount = (frame[2].i);
	LINE_NUMBER(2463);
	((mindustry_gen_TransferItemToCallPacket *) NULL_CHECK((frame[6].o)))->F_x = (frame[3].f);
	LINE_NUMBER(2464);
	((mindustry_gen_TransferItemToCallPacket *) NULL_CHECK((frame[6].o)))->F_y = (frame[4].f);
	LINE_NUMBER(2465);
	((mindustry_gen_TransferItemToCallPacket *) NULL_CHECK((frame[6].o)))->F_build = (jref) (frame[5].o);
	LINE_NUMBER(2466);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[6].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2468);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_transferItemToUnit_mindustry_type_Item_float_float_mindustry_gen_Itemsc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:transferItemToUnit", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2471);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2472);
	SM_mindustry_input_InputHandler_transferItemToUnit_mindustry_type_Item_float_float_mindustry_gen_Itemsc(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(2474);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2475);
	clinit_mindustry_gen_TransferItemToUnitCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_TransferItemToUnitCallPacket);
	init_mindustry_gen_TransferItemToUnitCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2476);
	((mindustry_gen_TransferItemToUnitCallPacket *) NULL_CHECK((frame[4].o)))->F_item = (jref) (frame[0].o);
	LINE_NUMBER(2477);
	((mindustry_gen_TransferItemToUnitCallPacket *) NULL_CHECK((frame[4].o)))->F_x = (frame[1].f);
	LINE_NUMBER(2478);
	((mindustry_gen_TransferItemToUnitCallPacket *) NULL_CHECK((frame[4].o)))->F_y = (frame[2].f);
	LINE_NUMBER(2479);
	((mindustry_gen_TransferItemToUnitCallPacket *) NULL_CHECK((frame[4].o)))->F_to = (jref) (frame[3].o);
	LINE_NUMBER(2480);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2482);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitBlockSpawn_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitBlockSpawn", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2485);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2486);
	SM_mindustry_world_blocks_units_UnitBlock_unitBlockSpawn_mindustry_world_Tile(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(2488);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2489);
	clinit_mindustry_gen_UnitBlockSpawnCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitBlockSpawnCallPacket);
	init_mindustry_gen_UnitBlockSpawnCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2490);
	((mindustry_gen_UnitBlockSpawnCallPacket *) NULL_CHECK((frame[1].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(2491);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2493);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitBuildingControlSelect_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitBuildingControlSelect", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2496);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2497);
	SM_mindustry_input_InputHandler_unitBuildingControlSelect_mindustry_gen_Unit_mindustry_gen_Building(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(2499);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2500);
	clinit_mindustry_gen_UnitBuildingControlSelectCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitBuildingControlSelectCallPacket);
	init_mindustry_gen_UnitBuildingControlSelectCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2501);
	((mindustry_gen_UnitBuildingControlSelectCallPacket *) NULL_CHECK((frame[2].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(2502);
	((mindustry_gen_UnitBuildingControlSelectCallPacket *) NULL_CHECK((frame[2].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(2503);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2505);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitCapDeath_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitCapDeath", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2508);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2509);
	SM_mindustry_entities_Units_unitCapDeath_mindustry_gen_Unit(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(2511);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2512);
	clinit_mindustry_gen_UnitCapDeathCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitCapDeathCallPacket);
	init_mindustry_gen_UnitCapDeathCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2513);
	((mindustry_gen_UnitCapDeathCallPacket *) NULL_CHECK((frame[1].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(2514);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2516);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitClear_mindustry_gen_Player(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitClear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2519);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2520);
	SM_mindustry_input_InputHandler_unitClear_mindustry_gen_Player(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(2522);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(2523);
	clinit_mindustry_gen_UnitClearCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitClearCallPacket);
	init_mindustry_gen_UnitClearCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2524);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(2525);
	((mindustry_gen_UnitClearCallPacket *) NULL_CHECK((frame[1].o)))->F_player = (jref) (frame[0].o);
	}
label_6:;
	{
	LINE_NUMBER(2527);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(2529);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitClear__forward_mindustry_net_NetConnection_mindustry_gen_Player(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitClear__forward", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2532);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2533);
	clinit_mindustry_gen_UnitClearCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitClearCallPacket);
	init_mindustry_gen_UnitClearCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2534);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2535);
	((mindustry_gen_UnitClearCallPacket *) NULL_CHECK((frame[2].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(2537);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(2539);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitControl_mindustry_gen_Player_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitControl", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2542);
	SM_mindustry_input_InputHandler_unitControl_mindustry_gen_Player_mindustry_gen_Unit(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(2543);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(2544);
	clinit_mindustry_gen_UnitControlCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitControlCallPacket);
	init_mindustry_gen_UnitControlCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2545);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(2546);
	((mindustry_gen_UnitControlCallPacket *) NULL_CHECK((frame[2].o)))->F_player = (jref) (frame[0].o);
	}
label_5:;
	{
	LINE_NUMBER(2548);
	((mindustry_gen_UnitControlCallPacket *) NULL_CHECK((frame[2].o)))->F_unit = (jref) (frame[1].o);
	LINE_NUMBER(2549);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2551);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitControl__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitControl__forward", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2554);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2555);
	clinit_mindustry_gen_UnitControlCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitControlCallPacket);
	init_mindustry_gen_UnitControlCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2556);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(2557);
	((mindustry_gen_UnitControlCallPacket *) NULL_CHECK((frame[3].o)))->F_player = (jref) (frame[1].o);
	}
label_4:;
	{
	LINE_NUMBER(2559);
	((mindustry_gen_UnitControlCallPacket *) NULL_CHECK((frame[3].o)))->F_unit = (jref) (frame[2].o);
	LINE_NUMBER(2560);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_sendExcept_mindustry_net_NetConnection_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(2562);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitDeath_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitDeath", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(2565);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2566);
	SM_mindustry_entities_Units_unitDeath_int(ctx, (frame[0].i));
	}
label_2:;
	{
	LINE_NUMBER(2568);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2569);
	clinit_mindustry_gen_UnitDeathCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitDeathCallPacket);
	init_mindustry_gen_UnitDeathCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2570);
	((mindustry_gen_UnitDeathCallPacket *) NULL_CHECK((frame[1].o)))->F_uid = (frame[0].i);
	LINE_NUMBER(2571);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2573);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitDespawn_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitDespawn", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2576);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2577);
	SM_mindustry_entities_Units_unitDespawn_mindustry_gen_Unit(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(2579);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2580);
	clinit_mindustry_gen_UnitDespawnCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitDespawnCallPacket);
	init_mindustry_gen_UnitDespawnCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2581);
	((mindustry_gen_UnitDespawnCallPacket *) NULL_CHECK((frame[1].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(2582);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2584);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitDestroy_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitDestroy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(2587);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2588);
	SM_mindustry_entities_Units_unitDestroy_int(ctx, (frame[0].i));
	}
label_2:;
	{
	LINE_NUMBER(2590);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2591);
	clinit_mindustry_gen_UnitDestroyCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitDestroyCallPacket);
	init_mindustry_gen_UnitDestroyCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2592);
	((mindustry_gen_UnitDestroyCallPacket *) NULL_CHECK((frame[1].o)))->F_uid = (frame[0].i);
	LINE_NUMBER(2593);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2595);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitEnteredPayload_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitEnteredPayload", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2598);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2599);
	SM_mindustry_input_InputHandler_unitEnteredPayload_mindustry_gen_Unit_mindustry_gen_Building(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(2601);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2602);
	clinit_mindustry_gen_UnitEnteredPayloadCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitEnteredPayloadCallPacket);
	init_mindustry_gen_UnitEnteredPayloadCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2603);
	((mindustry_gen_UnitEnteredPayloadCallPacket *) NULL_CHECK((frame[2].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(2604);
	((mindustry_gen_UnitEnteredPayloadCallPacket *) NULL_CHECK((frame[2].o)))->F_build = (jref) (frame[1].o);
	LINE_NUMBER(2605);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2607);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitEnvDeath_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitEnvDeath", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2610);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2611);
	SM_mindustry_entities_Units_unitEnvDeath_mindustry_gen_Unit(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(2613);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2614);
	clinit_mindustry_gen_UnitEnvDeathCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitEnvDeathCallPacket);
	init_mindustry_gen_UnitEnvDeathCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2615);
	((mindustry_gen_UnitEnvDeathCallPacket *) NULL_CHECK((frame[1].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(2616);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2618);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitSafeDeath_mindustry_gen_Unit(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitSafeDeath", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2621);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2622);
	SM_mindustry_entities_Units_unitSafeDeath_mindustry_gen_Unit(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(2624);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2625);
	clinit_mindustry_gen_UnitSafeDeathCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitSafeDeathCallPacket);
	init_mindustry_gen_UnitSafeDeathCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2626);
	((mindustry_gen_UnitSafeDeathCallPacket *) NULL_CHECK((frame[1].o)))->F_unit = (jref) (frame[0].o);
	LINE_NUMBER(2627);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2629);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitSpawn_mindustry_entities_Units$UnitSyncContainer(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitSpawn", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2632);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2633);
	clinit_mindustry_gen_UnitSpawnCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitSpawnCallPacket);
	init_mindustry_gen_UnitSpawnCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2634);
	((mindustry_gen_UnitSpawnCallPacket *) NULL_CHECK((frame[1].o)))->F_container = (jref) (frame[0].o);
	LINE_NUMBER(2635);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_1:;
	LINE_NUMBER(2637);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_unitTetherBlockSpawned_mindustry_world_Tile_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:unitTetherBlockSpawned", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(2640);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2641);
	SM_mindustry_world_blocks_units_UnitCargoLoader_unitTetherBlockSpawned_mindustry_world_Tile_int(ctx, (frame[0].o), (frame[1].i));
	}
label_2:;
	{
	LINE_NUMBER(2643);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2644);
	clinit_mindustry_gen_UnitTetherBlockSpawnedCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UnitTetherBlockSpawnedCallPacket);
	init_mindustry_gen_UnitTetherBlockSpawnedCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2645);
	((mindustry_gen_UnitTetherBlockSpawnedCallPacket *) NULL_CHECK((frame[2].o)))->F_tile = (jref) (frame[0].o);
	LINE_NUMBER(2646);
	((mindustry_gen_UnitTetherBlockSpawnedCallPacket *) NULL_CHECK((frame[2].o)))->F_id = (frame[1].i);
	LINE_NUMBER(2647);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_3:;
	LINE_NUMBER(2649);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_updateGameOver_mindustry_game_Team(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:updateGameOver", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2652);
	SM_mindustry_core_Logic_updateGameOver_mindustry_game_Team(ctx, (frame[0].o));
	LINE_NUMBER(2653);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(2654);
	clinit_mindustry_gen_UpdateGameOverCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UpdateGameOverCallPacket);
	init_mindustry_gen_UpdateGameOverCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2655);
	((mindustry_gen_UpdateGameOverCallPacket *) NULL_CHECK((frame[1].o)))->F_winner = (jref) (frame[0].o);
	LINE_NUMBER(2656);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	}
label_2:;
	LINE_NUMBER(2658);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_updateMarker_int_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jint param0, jobject param1, jdouble param2, jdouble param3, jdouble param4) {
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:updateMarker", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].d = param2;
	frame[4].d = param3;
	frame[6].d = param4;
	{
	LINE_NUMBER(2661);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2662);
	SM_mindustry_logic_LExecutor_updateMarker_int_mindustry_logic_LMarkerControl_double_double_double(ctx, (frame[0].i), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d));
	}
label_2:;
	{
	LINE_NUMBER(2664);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2665);
	clinit_mindustry_gen_UpdateMarkerCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UpdateMarkerCallPacket);
	init_mindustry_gen_UpdateMarkerCallPacket(ctx, sp[0].o);
	frame[8].o = sp[0].o;
	LINE_NUMBER(2666);
	((mindustry_gen_UpdateMarkerCallPacket *) NULL_CHECK((frame[8].o)))->F_id = (frame[0].i);
	LINE_NUMBER(2667);
	((mindustry_gen_UpdateMarkerCallPacket *) NULL_CHECK((frame[8].o)))->F_control = (jref) (frame[1].o);
	LINE_NUMBER(2668);
	((mindustry_gen_UpdateMarkerCallPacket *) NULL_CHECK((frame[8].o)))->F_p1 = (frame[2].d);
	LINE_NUMBER(2669);
	((mindustry_gen_UpdateMarkerCallPacket *) NULL_CHECK((frame[8].o)))->F_p2 = (frame[4].d);
	LINE_NUMBER(2670);
	((mindustry_gen_UpdateMarkerCallPacket *) NULL_CHECK((frame[8].o)))->F_p3 = (frame[6].d);
	LINE_NUMBER(2671);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[8].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2673);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_updateMarker_mindustry_net_NetConnection_int_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject param0, jint param1, jobject param2, jdouble param3, jdouble param4, jdouble param5) {
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:updateMarker", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].d = param3;
	frame[5].d = param4;
	frame[7].d = param5;
	{
	LINE_NUMBER(2677);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2678);
	SM_mindustry_logic_LExecutor_updateMarker_int_mindustry_logic_LMarkerControl_double_double_double(ctx, (frame[1].i), (frame[2].o), (frame[3].d), (frame[5].d), (frame[7].d));
	}
label_2:;
	{
	LINE_NUMBER(2680);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2681);
	clinit_mindustry_gen_UpdateMarkerCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UpdateMarkerCallPacket);
	init_mindustry_gen_UpdateMarkerCallPacket(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(2682);
	((mindustry_gen_UpdateMarkerCallPacket *) NULL_CHECK((frame[9].o)))->F_id = (frame[1].i);
	LINE_NUMBER(2683);
	((mindustry_gen_UpdateMarkerCallPacket *) NULL_CHECK((frame[9].o)))->F_control = (jref) (frame[2].o);
	LINE_NUMBER(2684);
	((mindustry_gen_UpdateMarkerCallPacket *) NULL_CHECK((frame[9].o)))->F_p1 = (frame[3].d);
	LINE_NUMBER(2685);
	((mindustry_gen_UpdateMarkerCallPacket *) NULL_CHECK((frame[9].o)))->F_p2 = (frame[5].d);
	LINE_NUMBER(2686);
	((mindustry_gen_UpdateMarkerCallPacket *) NULL_CHECK((frame[9].o)))->F_p3 = (frame[7].d);
	LINE_NUMBER(2687);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[9].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2689);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_updateMarkerText_int_mindustry_logic_LMarkerControl_boolean_java_lang_String(jcontext ctx, jint param0, jobject param1, jbool param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:updateMarkerText", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(2692);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2693);
	SM_mindustry_logic_LExecutor_updateMarkerText_int_mindustry_logic_LMarkerControl_boolean_java_lang_String(ctx, (frame[0].i), (frame[1].o), (frame[2].i), (frame[3].o));
	}
label_2:;
	{
	LINE_NUMBER(2695);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2696);
	clinit_mindustry_gen_UpdateMarkerTextCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UpdateMarkerTextCallPacket);
	init_mindustry_gen_UpdateMarkerTextCallPacket(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2697);
	((mindustry_gen_UpdateMarkerTextCallPacket *) NULL_CHECK((frame[4].o)))->F_id = (frame[0].i);
	LINE_NUMBER(2698);
	((mindustry_gen_UpdateMarkerTextCallPacket *) NULL_CHECK((frame[4].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(2699);
	((mindustry_gen_UpdateMarkerTextCallPacket *) NULL_CHECK((frame[4].o)))->F_fetch = (frame[2].i);
	LINE_NUMBER(2700);
	((mindustry_gen_UpdateMarkerTextCallPacket *) NULL_CHECK((frame[4].o)))->F_text = (jref) (frame[3].o);
	LINE_NUMBER(2701);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[4].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2703);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_updateMarkerText_mindustry_net_NetConnection_int_mindustry_logic_LMarkerControl_boolean_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2, jbool param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:updateMarkerText", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(2707);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2708);
	SM_mindustry_logic_LExecutor_updateMarkerText_int_mindustry_logic_LMarkerControl_boolean_java_lang_String(ctx, (frame[1].i), (frame[2].o), (frame[3].i), (frame[4].o));
	}
label_2:;
	{
	LINE_NUMBER(2710);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2711);
	clinit_mindustry_gen_UpdateMarkerTextCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UpdateMarkerTextCallPacket);
	init_mindustry_gen_UpdateMarkerTextCallPacket(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(2712);
	((mindustry_gen_UpdateMarkerTextCallPacket *) NULL_CHECK((frame[5].o)))->F_id = (frame[1].i);
	LINE_NUMBER(2713);
	((mindustry_gen_UpdateMarkerTextCallPacket *) NULL_CHECK((frame[5].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(2714);
	((mindustry_gen_UpdateMarkerTextCallPacket *) NULL_CHECK((frame[5].o)))->F_fetch = (frame[3].i);
	LINE_NUMBER(2715);
	((mindustry_gen_UpdateMarkerTextCallPacket *) NULL_CHECK((frame[5].o)))->F_text = (jref) (frame[4].o);
	LINE_NUMBER(2716);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[5].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2718);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_updateMarkerTexture_int_java_lang_Object(jcontext ctx, jint param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:updateMarkerTexture", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2721);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2722);
	SM_mindustry_logic_LExecutor_updateMarkerTexture_int_java_lang_Object(ctx, (frame[0].i), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(2724);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2725);
	clinit_mindustry_gen_UpdateMarkerTextureCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UpdateMarkerTextureCallPacket);
	init_mindustry_gen_UpdateMarkerTextureCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2726);
	((mindustry_gen_UpdateMarkerTextureCallPacket *) NULL_CHECK((frame[2].o)))->F_id = (frame[0].i);
	LINE_NUMBER(2727);
	((mindustry_gen_UpdateMarkerTextureCallPacket *) NULL_CHECK((frame[2].o)))->F_texture = (jref) (frame[1].o);
	LINE_NUMBER(2728);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2730);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_updateMarkerTexture_mindustry_net_NetConnection_int_java_lang_Object(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:updateMarkerTexture", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2733);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(2734);
	SM_mindustry_logic_LExecutor_updateMarkerTexture_int_java_lang_Object(ctx, (frame[1].i), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(2736);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(2737);
	clinit_mindustry_gen_UpdateMarkerTextureCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_UpdateMarkerTextureCallPacket);
	init_mindustry_gen_UpdateMarkerTextureCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2738);
	((mindustry_gen_UpdateMarkerTextureCallPacket *) NULL_CHECK((frame[3].o)))->F_id = (frame[1].i);
	LINE_NUMBER(2739);
	((mindustry_gen_UpdateMarkerTextureCallPacket *) NULL_CHECK((frame[3].o)))->F_texture = (jref) (frame[2].o);
	LINE_NUMBER(2740);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(0)));
	}
label_3:;
	LINE_NUMBER(2742);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_warningToast_int_java_lang_String(jcontext ctx, jint param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:warningToast", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(2745);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2746);
	clinit_mindustry_gen_WarningToastCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_WarningToastCallPacket);
	init_mindustry_gen_WarningToastCallPacket(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(2747);
	((mindustry_gen_WarningToastCallPacket *) NULL_CHECK((frame[2].o)))->F_unicode = (frame[0].i);
	LINE_NUMBER(2748);
	((mindustry_gen_WarningToastCallPacket *) NULL_CHECK((frame[2].o)))->F_text = (jref) (frame[1].o);
	LINE_NUMBER(2749);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2751);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_warningToast_mindustry_net_NetConnection_int_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:warningToast", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(2754);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2755);
	clinit_mindustry_gen_WarningToastCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_WarningToastCallPacket);
	init_mindustry_gen_WarningToastCallPacket(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2756);
	((mindustry_gen_WarningToastCallPacket *) NULL_CHECK((frame[3].o)))->F_unicode = (frame[1].i);
	LINE_NUMBER(2757);
	((mindustry_gen_WarningToastCallPacket *) NULL_CHECK((frame[3].o)))->F_text = (jref) (frame[2].o);
	LINE_NUMBER(2758);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[3].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2760);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_worldDataBegin(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:worldDataBegin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	{
	LINE_NUMBER(2763);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2764);
	clinit_mindustry_gen_WorldDataBeginCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_WorldDataBeginCallPacket);
	init_mindustry_gen_WorldDataBeginCallPacket(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(2765);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	((func_mindustry_net_Net_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_send_java_lang_Object_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2767);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_worldDataBegin_mindustry_net_NetConnection(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:worldDataBegin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(2770);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_server_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_server_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(2771);
	clinit_mindustry_gen_WorldDataBeginCallPacket(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_gen_WorldDataBeginCallPacket);
	init_mindustry_gen_WorldDataBeginCallPacket(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2772);
	((func_mindustry_net_NetConnection_send_java_lang_Object_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_NetConnection_send_java_lang_Object_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	}
label_1:;
	LINE_NUMBER(2774);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_gen_Call_registerPackets(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Call:registerPackets", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Call(ctx);
	{
	LINE_NUMBER(2777);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_166(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_166 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_166);
		sp[0].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2778);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_167(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_167 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_167);
		sp[0].o = (jobject) proxy;
	}
	jint temp1 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2779);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_168(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_168 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_168);
		sp[0].o = (jobject) proxy;
	}
	jint temp2 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2780);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_169(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_169 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_169);
		sp[0].o = (jobject) proxy;
	}
	jint temp3 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2781);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_170(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_170 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_170);
		sp[0].o = (jobject) proxy;
	}
	jint temp4 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2782);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_171(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_171 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_171);
		sp[0].o = (jobject) proxy;
	}
	jint temp5 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2783);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_172(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_172 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_172);
		sp[0].o = (jobject) proxy;
	}
	jint temp6 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2784);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_173(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_173 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_173);
		sp[0].o = (jobject) proxy;
	}
	jint temp7 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2785);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_174(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_174 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_174);
		sp[0].o = (jobject) proxy;
	}
	jint temp8 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2786);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_175(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_175 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_175);
		sp[0].o = (jobject) proxy;
	}
	jint temp9 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2787);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_176(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_176 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_176);
		sp[0].o = (jobject) proxy;
	}
	jint temp10 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2788);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_177(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_177 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_177);
		sp[0].o = (jobject) proxy;
	}
	jint temp11 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2789);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_178(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_178 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_178);
		sp[0].o = (jobject) proxy;
	}
	jint temp12 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2790);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_179(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_179 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_179);
		sp[0].o = (jobject) proxy;
	}
	jint temp13 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2791);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_180(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_180 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_180);
		sp[0].o = (jobject) proxy;
	}
	jint temp14 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2792);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_181(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_181 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_181);
		sp[0].o = (jobject) proxy;
	}
	jint temp15 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2793);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_182(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_182 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_182);
		sp[0].o = (jobject) proxy;
	}
	jint temp16 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2794);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_183(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_183 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_183);
		sp[0].o = (jobject) proxy;
	}
	jint temp17 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2795);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_184(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_184 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_184);
		sp[0].o = (jobject) proxy;
	}
	jint temp18 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2796);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_185(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_185 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_185);
		sp[0].o = (jobject) proxy;
	}
	jint temp19 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2797);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_186(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_186 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_186);
		sp[0].o = (jobject) proxy;
	}
	jint temp20 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2798);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_187(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_187 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_187);
		sp[0].o = (jobject) proxy;
	}
	jint temp21 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2799);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_188(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_188 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_188);
		sp[0].o = (jobject) proxy;
	}
	jint temp22 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2800);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_189(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_189 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_189);
		sp[0].o = (jobject) proxy;
	}
	jint temp23 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2801);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_190(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_190 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_190);
		sp[0].o = (jobject) proxy;
	}
	jint temp24 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2802);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_191(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_191 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_191);
		sp[0].o = (jobject) proxy;
	}
	jint temp25 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2803);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_192(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_192 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_192);
		sp[0].o = (jobject) proxy;
	}
	jint temp26 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2804);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_193(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_193 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_193);
		sp[0].o = (jobject) proxy;
	}
	jint temp27 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2805);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_194(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_194 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_194);
		sp[0].o = (jobject) proxy;
	}
	jint temp28 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2806);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_195(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_195 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_195);
		sp[0].o = (jobject) proxy;
	}
	jint temp29 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2807);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_196(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_196 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_196);
		sp[0].o = (jobject) proxy;
	}
	jint temp30 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2808);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_197(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_197 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_197);
		sp[0].o = (jobject) proxy;
	}
	jint temp31 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2809);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_198(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_198 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_198);
		sp[0].o = (jobject) proxy;
	}
	jint temp32 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2810);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_199(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_199 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_199);
		sp[0].o = (jobject) proxy;
	}
	jint temp33 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2811);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_200(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_200 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_200);
		sp[0].o = (jobject) proxy;
	}
	jint temp34 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2812);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_201(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_201 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_201);
		sp[0].o = (jobject) proxy;
	}
	jint temp35 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2813);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_202(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_202 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_202);
		sp[0].o = (jobject) proxy;
	}
	jint temp36 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2814);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_203(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_203 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_203);
		sp[0].o = (jobject) proxy;
	}
	jint temp37 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2815);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_204(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_204 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_204);
		sp[0].o = (jobject) proxy;
	}
	jint temp38 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2816);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_205(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_205 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_205);
		sp[0].o = (jobject) proxy;
	}
	jint temp39 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2817);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_206(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_206 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_206);
		sp[0].o = (jobject) proxy;
	}
	jint temp40 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2818);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_207(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_207 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_207);
		sp[0].o = (jobject) proxy;
	}
	jint temp41 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2819);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_208(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_208 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_208);
		sp[0].o = (jobject) proxy;
	}
	jint temp42 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2820);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_209(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_209 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_209);
		sp[0].o = (jobject) proxy;
	}
	jint temp43 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2821);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_210(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_210 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_210);
		sp[0].o = (jobject) proxy;
	}
	jint temp44 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2822);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_211(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_211 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_211);
		sp[0].o = (jobject) proxy;
	}
	jint temp45 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2823);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_212(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_212 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_212);
		sp[0].o = (jobject) proxy;
	}
	jint temp46 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2824);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_213(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_213 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_213);
		sp[0].o = (jobject) proxy;
	}
	jint temp47 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2825);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_214(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_214 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_214);
		sp[0].o = (jobject) proxy;
	}
	jint temp48 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2826);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_215(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_215 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_215);
		sp[0].o = (jobject) proxy;
	}
	jint temp49 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2827);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_216(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_216 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_216);
		sp[0].o = (jobject) proxy;
	}
	jint temp50 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2828);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_217(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_217 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_217);
		sp[0].o = (jobject) proxy;
	}
	jint temp51 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2829);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_218(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_218 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_218);
		sp[0].o = (jobject) proxy;
	}
	jint temp52 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2830);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_219(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_219 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_219);
		sp[0].o = (jobject) proxy;
	}
	jint temp53 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2831);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_220(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_220 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_220);
		sp[0].o = (jobject) proxy;
	}
	jint temp54 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2832);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_221(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_221 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_221);
		sp[0].o = (jobject) proxy;
	}
	jint temp55 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2833);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_222(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_222 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_222);
		sp[0].o = (jobject) proxy;
	}
	jint temp56 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2834);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_223(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_223 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_223);
		sp[0].o = (jobject) proxy;
	}
	jint temp57 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2835);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_224(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_224 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_224);
		sp[0].o = (jobject) proxy;
	}
	jint temp58 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2836);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_225(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_225 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_225);
		sp[0].o = (jobject) proxy;
	}
	jint temp59 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2837);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_226(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_226 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_226);
		sp[0].o = (jobject) proxy;
	}
	jint temp60 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2838);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_227(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_227 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_227);
		sp[0].o = (jobject) proxy;
	}
	jint temp61 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2839);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_228(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_228 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_228);
		sp[0].o = (jobject) proxy;
	}
	jint temp62 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2840);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_229(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_229 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_229);
		sp[0].o = (jobject) proxy;
	}
	jint temp63 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2841);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_230(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_230 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_230);
		sp[0].o = (jobject) proxy;
	}
	jint temp64 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2842);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_231(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_231 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_231);
		sp[0].o = (jobject) proxy;
	}
	jint temp65 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2843);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_232(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_232 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_232);
		sp[0].o = (jobject) proxy;
	}
	jint temp66 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2844);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_233(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_233 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_233);
		sp[0].o = (jobject) proxy;
	}
	jint temp67 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2845);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_234(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_234 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_234);
		sp[0].o = (jobject) proxy;
	}
	jint temp68 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2846);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_235(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_235 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_235);
		sp[0].o = (jobject) proxy;
	}
	jint temp69 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2847);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_236(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_236 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_236);
		sp[0].o = (jobject) proxy;
	}
	jint temp70 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2848);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_237(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_237 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_237);
		sp[0].o = (jobject) proxy;
	}
	jint temp71 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2849);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_238(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_238 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_238);
		sp[0].o = (jobject) proxy;
	}
	jint temp72 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2850);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_239(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_239 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_239);
		sp[0].o = (jobject) proxy;
	}
	jint temp73 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2851);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_240(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_240 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_240);
		sp[0].o = (jobject) proxy;
	}
	jint temp74 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2852);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_241(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_241 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_241);
		sp[0].o = (jobject) proxy;
	}
	jint temp75 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2853);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_242(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_242 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_242);
		sp[0].o = (jobject) proxy;
	}
	jint temp76 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2854);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_243(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_243 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_243);
		sp[0].o = (jobject) proxy;
	}
	jint temp77 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2855);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_244(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_244 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_244);
		sp[0].o = (jobject) proxy;
	}
	jint temp78 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2856);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_245(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_245 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_245);
		sp[0].o = (jobject) proxy;
	}
	jint temp79 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2857);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_246(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_246 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_246);
		sp[0].o = (jobject) proxy;
	}
	jint temp80 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2858);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_247(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_247 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_247);
		sp[0].o = (jobject) proxy;
	}
	jint temp81 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2859);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_248(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_248 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_248);
		sp[0].o = (jobject) proxy;
	}
	jint temp82 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2860);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_249(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_249 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_249);
		sp[0].o = (jobject) proxy;
	}
	jint temp83 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2861);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_250(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_250 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_250);
		sp[0].o = (jobject) proxy;
	}
	jint temp84 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2862);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_251(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_251 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_251);
		sp[0].o = (jobject) proxy;
	}
	jint temp85 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2863);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_252(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_252 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_252);
		sp[0].o = (jobject) proxy;
	}
	jint temp86 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2864);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_253(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_253 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_253);
		sp[0].o = (jobject) proxy;
	}
	jint temp87 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2865);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_254(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_254 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_254);
		sp[0].o = (jobject) proxy;
	}
	jint temp88 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2866);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_255(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_255 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_255);
		sp[0].o = (jobject) proxy;
	}
	jint temp89 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2867);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_256(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_256 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_256);
		sp[0].o = (jobject) proxy;
	}
	jint temp90 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2868);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_257(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_257 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_257);
		sp[0].o = (jobject) proxy;
	}
	jint temp91 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2869);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_258(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_258 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_258);
		sp[0].o = (jobject) proxy;
	}
	jint temp92 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2870);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_259(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_259 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_259);
		sp[0].o = (jobject) proxy;
	}
	jint temp93 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2871);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_260(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_260 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_260);
		sp[0].o = (jobject) proxy;
	}
	jint temp94 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2872);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_261(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_261 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_261);
		sp[0].o = (jobject) proxy;
	}
	jint temp95 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2873);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_262(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_262 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_262);
		sp[0].o = (jobject) proxy;
	}
	jint temp96 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2874);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_263(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_263 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_263);
		sp[0].o = (jobject) proxy;
	}
	jint temp97 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2875);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_264(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_264 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_264);
		sp[0].o = (jobject) proxy;
	}
	jint temp98 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2876);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_265(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_265 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_265);
		sp[0].o = (jobject) proxy;
	}
	jint temp99 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2877);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_266(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_266 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_266);
		sp[0].o = (jobject) proxy;
	}
	jint temp100 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2878);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_267(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_267 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_267);
		sp[0].o = (jobject) proxy;
	}
	jint temp101 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2879);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_268(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_268 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_268);
		sp[0].o = (jobject) proxy;
	}
	jint temp102 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2880);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_269(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_269 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_269);
		sp[0].o = (jobject) proxy;
	}
	jint temp103 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2881);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_270(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_270 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_270);
		sp[0].o = (jobject) proxy;
	}
	jint temp104 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2882);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_271(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_271 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_271);
		sp[0].o = (jobject) proxy;
	}
	jint temp105 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2883);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_272(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_272 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_272);
		sp[0].o = (jobject) proxy;
	}
	jint temp106 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2884);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_273(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_273 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_273);
		sp[0].o = (jobject) proxy;
	}
	jint temp107 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2885);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_274(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_274 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_274);
		sp[0].o = (jobject) proxy;
	}
	jint temp108 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2886);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_275(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_275 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_275);
		sp[0].o = (jobject) proxy;
	}
	jint temp109 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2887);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_276(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_276 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_276);
		sp[0].o = (jobject) proxy;
	}
	jint temp110 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2888);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_277(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_277 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_277);
		sp[0].o = (jobject) proxy;
	}
	jint temp111 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2889);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_278(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_278 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_278);
		sp[0].o = (jobject) proxy;
	}
	jint temp112 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2890);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_279(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_279 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_279);
		sp[0].o = (jobject) proxy;
	}
	jint temp113 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2891);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_280(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_280 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_280);
		sp[0].o = (jobject) proxy;
	}
	jint temp114 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2892);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_281(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_281 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_281);
		sp[0].o = (jobject) proxy;
	}
	jint temp115 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2893);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_282(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_282 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_282);
		sp[0].o = (jobject) proxy;
	}
	jint temp116 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2894);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_283(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_283 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_283);
		sp[0].o = (jobject) proxy;
	}
	jint temp117 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2895);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_284(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_284 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_284);
		sp[0].o = (jobject) proxy;
	}
	jint temp118 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2896);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_285(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_285 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_285);
		sp[0].o = (jobject) proxy;
	}
	jint temp119 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2897);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_286(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_286 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_286);
		sp[0].o = (jobject) proxy;
	}
	jint temp120 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2898);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_287(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_287 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_287);
		sp[0].o = (jobject) proxy;
	}
	jint temp121 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2899);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_288(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_288 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_288);
		sp[0].o = (jobject) proxy;
	}
	jint temp122 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2900);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_289(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_289 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_289);
		sp[0].o = (jobject) proxy;
	}
	jint temp123 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2901);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_290(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_290 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_290);
		sp[0].o = (jobject) proxy;
	}
	jint temp124 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2902);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_291(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_291 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_291);
		sp[0].o = (jobject) proxy;
	}
	jint temp125 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2903);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_292(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_292 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_292);
		sp[0].o = (jobject) proxy;
	}
	jint temp126 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2904);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_293(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_293 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_293);
		sp[0].o = (jobject) proxy;
	}
	jint temp127 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2905);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_294(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_294 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_294);
		sp[0].o = (jobject) proxy;
	}
	jint temp128 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2906);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_295(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_295 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_295);
		sp[0].o = (jobject) proxy;
	}
	jint temp129 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2907);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_296(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_296 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_296);
		sp[0].o = (jobject) proxy;
	}
	jint temp130 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2908);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_297(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_297 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_297);
		sp[0].o = (jobject) proxy;
	}
	jint temp131 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2909);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_298(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_298 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_298);
		sp[0].o = (jobject) proxy;
	}
	jint temp132 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2910);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_299(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_299 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_299);
		sp[0].o = (jobject) proxy;
	}
	jint temp133 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2911);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_300(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_300 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_300);
		sp[0].o = (jobject) proxy;
	}
	jint temp134 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2912);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_301(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_301 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_301);
		sp[0].o = (jobject) proxy;
	}
	jint temp135 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2913);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_302(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_302 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_302);
		sp[0].o = (jobject) proxy;
	}
	jint temp136 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2914);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_303(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_303 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_303);
		sp[0].o = (jobject) proxy;
	}
	jint temp137 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2915);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_304(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_304 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_304);
		sp[0].o = (jobject) proxy;
	}
	jint temp138 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2916);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_305(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_305 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_305);
		sp[0].o = (jobject) proxy;
	}
	jint temp139 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2917);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_306(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_306 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_306);
		sp[0].o = (jobject) proxy;
	}
	jint temp140 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2918);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_307(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_307 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_307);
		sp[0].o = (jobject) proxy;
	}
	jint temp141 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2919);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_308(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_308 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_308);
		sp[0].o = (jobject) proxy;
	}
	jint temp142 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2920);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_309(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_309 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_309);
		sp[0].o = (jobject) proxy;
	}
	jint temp143 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2921);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_310(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_310 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_310);
		sp[0].o = (jobject) proxy;
	}
	jint temp144 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2922);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_311(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_311 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_311);
		sp[0].o = (jobject) proxy;
	}
	jint temp145 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2923);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_312(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_312 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_312);
		sp[0].o = (jobject) proxy;
	}
	jint temp146 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2924);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_313(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_313 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_313);
		sp[0].o = (jobject) proxy;
	}
	jint temp147 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2925);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_314(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_314 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_314);
		sp[0].o = (jobject) proxy;
	}
	jint temp148 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2926);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_315(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_315 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_315);
		sp[0].o = (jobject) proxy;
	}
	jint temp149 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2927);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_316(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_316 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_316);
		sp[0].o = (jobject) proxy;
	}
	jint temp150 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2928);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_317(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_317 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_317);
		sp[0].o = (jobject) proxy;
	}
	jint temp151 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2929);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_318(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_318 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_318);
		sp[0].o = (jobject) proxy;
	}
	jint temp152 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2930);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_319(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_319 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_319);
		sp[0].o = (jobject) proxy;
	}
	jint temp153 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2931);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_320(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_320 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_320);
		sp[0].o = (jobject) proxy;
	}
	jint temp154 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2932);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_321(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_321 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_321);
		sp[0].o = (jobject) proxy;
	}
	jint temp155 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2933);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_322(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_322 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_322);
		sp[0].o = (jobject) proxy;
	}
	jint temp156 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2934);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_323(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_323 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_323);
		sp[0].o = (jobject) proxy;
	}
	jint temp157 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2935);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_324(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_324 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_324);
		sp[0].o = (jobject) proxy;
	}
	jint temp158 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2936);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_325(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_325 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_325);
		sp[0].o = (jobject) proxy;
	}
	jint temp159 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2937);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_326(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_326 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_326);
		sp[0].o = (jobject) proxy;
	}
	jint temp160 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2938);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_327(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_327 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_327);
		sp[0].o = (jobject) proxy;
	}
	jint temp161 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2939);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_328(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_328 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_328);
		sp[0].o = (jobject) proxy;
	}
	jint temp162 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2940);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_329(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_329 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_329);
		sp[0].o = (jobject) proxy;
	}
	jint temp163 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2941);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_330(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_330 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_330);
		sp[0].o = (jobject) proxy;
	}
	jint temp164 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2942);
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Call_invoke_arc_func_Prov_331(ctx);
		auto proxy = (mindustry_gen_Call_invoke_arc_func_Prov_331 *) gcAlloc(ctx, &class_mindustry_gen_Call_invoke_arc_func_Prov_331);
		sp[0].o = (jobject) proxy;
	}
	jint temp165 = (jint)SM_mindustry_net_Net_registerPacket_arc_func_Prov_R_int(ctx, sp[0].o);
	LINE_NUMBER(2943);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_Call[] {
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
	{ "<init>", (intptr_t) init_mindustry_gen_Call, 0, "()V", 1 },
	{ "adminRequest", (intptr_t) SM_mindustry_gen_Call_adminRequest_mindustry_gen_Player_mindustry_net_Packets$AdminAction_java_lang_Object, 0, "(Lmindustry/gen/Player;Lmindustry/net/Packets$AdminAction;Ljava/lang/Object;)V", 9 },
	{ "announce", (intptr_t) SM_mindustry_gen_Call_announce_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "announce", (intptr_t) SM_mindustry_gen_Call_announce_mindustry_net_NetConnection_java_lang_String, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;)V", 9 },
	{ "assemblerDroneSpawned", (intptr_t) SM_mindustry_gen_Call_assemblerDroneSpawned_mindustry_world_Tile_int, 0, "(Lmindustry/world/Tile;I)V", 9 },
	{ "assemblerUnitSpawned", (intptr_t) SM_mindustry_gen_Call_assemblerUnitSpawned_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 9 },
	{ "autoDoorToggle", (intptr_t) SM_mindustry_gen_Call_autoDoorToggle_mindustry_world_Tile_boolean, 0, "(Lmindustry/world/Tile;Z)V", 9 },
	{ "beginBreak", (intptr_t) SM_mindustry_gen_Call_beginBreak_mindustry_gen_Unit_mindustry_game_Team_int_int, 0, "(Lmindustry/gen/Unit;Lmindustry/game/Team;II)V", 9 },
	{ "beginPlace", (intptr_t) SM_mindustry_gen_Call_beginPlace_mindustry_gen_Unit_mindustry_world_Block_mindustry_game_Team_int_int_int_java_lang_Object, 0, "(Lmindustry/gen/Unit;Lmindustry/world/Block;Lmindustry/game/Team;IIILjava/lang/Object;)V", 9 },
	{ "blockSnapshot", (intptr_t) SM_mindustry_gen_Call_blockSnapshot_short_Array1_byte, 0, "(S[B)V", 9 },
	{ "blockSnapshot", (intptr_t) SM_mindustry_gen_Call_blockSnapshot_mindustry_net_NetConnection_short_Array1_byte, 0, "(Lmindustry/net/NetConnection;S[B)V", 9 },
	{ "buildDestroyed", (intptr_t) SM_mindustry_gen_Call_buildDestroyed_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 9 },
	{ "buildHealthUpdate", (intptr_t) SM_mindustry_gen_Call_buildHealthUpdate_arc_struct_IntSeq, 0, "(Larc/struct/IntSeq;)V", 9 },
	{ "buildingControlSelect", (intptr_t) SM_mindustry_gen_Call_buildingControlSelect_mindustry_gen_Player_mindustry_gen_Building, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;)V", 9 },
	{ "clearItems", (intptr_t) SM_mindustry_gen_Call_clearItems_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 9 },
	{ "clearLiquids", (intptr_t) SM_mindustry_gen_Call_clearLiquids_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 9 },
	{ "clearObjectives", (intptr_t) SM_mindustry_gen_Call_clearObjectives, 0, "()V", 9 },
	{ "clearObjectives", (intptr_t) SM_mindustry_gen_Call_clearObjectives_mindustry_net_NetConnection, 0, "(Lmindustry/net/NetConnection;)V", 9 },
	{ "clientBinaryPacketReliable", (intptr_t) SM_mindustry_gen_Call_clientBinaryPacketReliable_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 9 },
	{ "clientBinaryPacketReliable", (intptr_t) SM_mindustry_gen_Call_clientBinaryPacketReliable_mindustry_net_NetConnection_java_lang_String_Array1_byte, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;[B)V", 9 },
	{ "clientBinaryPacketUnreliable", (intptr_t) SM_mindustry_gen_Call_clientBinaryPacketUnreliable_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 9 },
	{ "clientBinaryPacketUnreliable", (intptr_t) SM_mindustry_gen_Call_clientBinaryPacketUnreliable_mindustry_net_NetConnection_java_lang_String_Array1_byte, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;[B)V", 9 },
	{ "clientLogicDataReliable", (intptr_t) SM_mindustry_gen_Call_clientLogicDataReliable_java_lang_String_java_lang_Object, 0, "(Ljava/lang/String;Ljava/lang/Object;)V", 9 },
	{ "clientLogicDataUnreliable", (intptr_t) SM_mindustry_gen_Call_clientLogicDataUnreliable_java_lang_String_java_lang_Object, 0, "(Ljava/lang/String;Ljava/lang/Object;)V", 9 },
	{ "clientPacketReliable", (intptr_t) SM_mindustry_gen_Call_clientPacketReliable_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "clientPacketReliable", (intptr_t) SM_mindustry_gen_Call_clientPacketReliable_mindustry_net_NetConnection_java_lang_String_java_lang_String, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "clientPacketUnreliable", (intptr_t) SM_mindustry_gen_Call_clientPacketUnreliable_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "clientPacketUnreliable", (intptr_t) SM_mindustry_gen_Call_clientPacketUnreliable_mindustry_net_NetConnection_java_lang_String_java_lang_String, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "clientPlanSnapshot", (intptr_t) SM_mindustry_gen_Call_clientPlanSnapshot_int_mindustry_io_TypeIO$ClientBuildPlans, 0, "(ILmindustry/io/TypeIO$ClientBuildPlans;)V", 9 },
	{ "clientPlanSnapshotReceived", (intptr_t) SM_mindustry_gen_Call_clientPlanSnapshotReceived_mindustry_net_NetConnection_mindustry_gen_Player_int_mindustry_io_TypeIO$ClientBuildPlans, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;ILmindustry/io/TypeIO$ClientBuildPlans;)V", 9 },
	{ "clientSnapshot", (intptr_t) SM_mindustry_gen_Call_clientSnapshot_int_int_boolean_float_float_float_float_float_float_float_float_mindustry_world_Tile_boolean_boolean_boolean_boolean_mindustry_world_Block_int_arc_struct_Queue_float_float_float_float, 0, "(IIZFFFFFFFFLmindustry/world/Tile;ZZZZLmindustry/world/Block;ILarc/struct/Queue;FFFF)V", 9 },
	{ "commandBuilding", (intptr_t) SM_mindustry_gen_Call_commandBuilding_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2, 0, "(Lmindustry/gen/Player;[ILarc/math/geom/Vec2;)V", 9 },
	{ "commandBuilding__forward", (intptr_t) SM_mindustry_gen_Call_commandBuilding__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;[ILarc/math/geom/Vec2;)V", 8 },
	{ "commandUnits", (intptr_t) SM_mindustry_gen_Call_commandUnits_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean, 0, "(Lmindustry/gen/Player;[ILmindustry/gen/Building;Lmindustry/gen/Unit;Larc/math/geom/Vec2;ZZ)V", 9 },
	{ "commandUnits__forward", (intptr_t) SM_mindustry_gen_Call_commandUnits__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;[ILmindustry/gen/Building;Lmindustry/gen/Unit;Larc/math/geom/Vec2;ZZ)V", 8 },
	{ "completeObjective", (intptr_t) SM_mindustry_gen_Call_completeObjective_int, 0, "(I)V", 9 },
	{ "completeObjective", (intptr_t) SM_mindustry_gen_Call_completeObjective_mindustry_net_NetConnection_int, 0, "(Lmindustry/net/NetConnection;I)V", 9 },
	{ "connect", (intptr_t) SM_mindustry_gen_Call_connect_mindustry_net_NetConnection_java_lang_String_int, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;I)V", 9 },
	{ "connectConfirm", (intptr_t) SM_mindustry_gen_Call_connectConfirm, 0, "()V", 9 },
	{ "constructFinish", (intptr_t) SM_mindustry_gen_Call_constructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit_byte_mindustry_game_Team_java_lang_Object, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;BLmindustry/game/Team;Ljava/lang/Object;)V", 9 },
	{ "copyToClipboard", (intptr_t) SM_mindustry_gen_Call_copyToClipboard_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "copyToClipboard", (intptr_t) SM_mindustry_gen_Call_copyToClipboard_mindustry_net_NetConnection_java_lang_String, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;)V", 9 },
	{ "createBullet", (intptr_t) SM_mindustry_gen_Call_createBullet_mindustry_entities_bullet_BulletType_mindustry_game_Team_float_float_float_float_float_float, 0, "(Lmindustry/entities/bullet/BulletType;Lmindustry/game/Team;FFFFFF)V", 9 },
	{ "createMarker", (intptr_t) SM_mindustry_gen_Call_createMarker_int_mindustry_game_MapObjectives$ObjectiveMarker, 0, "(ILmindustry/game/MapObjectives$ObjectiveMarker;)V", 9 },
	{ "createMarker", (intptr_t) SM_mindustry_gen_Call_createMarker_mindustry_net_NetConnection_int_mindustry_game_MapObjectives$ObjectiveMarker, 0, "(Lmindustry/net/NetConnection;ILmindustry/game/MapObjectives$ObjectiveMarker;)V", 9 },
	{ "createWeather", (intptr_t) SM_mindustry_gen_Call_createWeather_mindustry_type_Weather_float_float_float_float, 0, "(Lmindustry/type/Weather;FFFF)V", 9 },
	{ "debugStatusClient", (intptr_t) SM_mindustry_gen_Call_debugStatusClient_int_int, 0, "(II)V", 9 },
	{ "debugStatusClient", (intptr_t) SM_mindustry_gen_Call_debugStatusClient_mindustry_net_NetConnection_int_int, 0, "(Lmindustry/net/NetConnection;II)V", 9 },
	{ "debugStatusClientUnreliable", (intptr_t) SM_mindustry_gen_Call_debugStatusClientUnreliable_int_int, 0, "(II)V", 9 },
	{ "debugStatusClientUnreliable", (intptr_t) SM_mindustry_gen_Call_debugStatusClientUnreliable_mindustry_net_NetConnection_int_int, 0, "(Lmindustry/net/NetConnection;II)V", 9 },
	{ "deconstructFinish", (intptr_t) SM_mindustry_gen_Call_deconstructFinish_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V", 9 },
	{ "deletePlans", (intptr_t) SM_mindustry_gen_Call_deletePlans_mindustry_gen_Player_Array1_int, 0, "(Lmindustry/gen/Player;[I)V", 9 },
	{ "deletePlans__forward", (intptr_t) SM_mindustry_gen_Call_deletePlans__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;[I)V", 8 },
	{ "destroyPayload", (intptr_t) SM_mindustry_gen_Call_destroyPayload_mindustry_gen_Building, 0, "(Lmindustry/gen/Building;)V", 9 },
	{ "dropItem", (intptr_t) SM_mindustry_gen_Call_dropItem_float, 0, "(F)V", 9 },
	{ "effect", (intptr_t) SM_mindustry_gen_Call_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color, 0, "(Lmindustry/entities/Effect;FFFLarc/graphics/Color;)V", 9 },
	{ "effect", (intptr_t) SM_mindustry_gen_Call_effect_mindustry_net_NetConnection_mindustry_entities_Effect_float_float_float_arc_graphics_Color, 0, "(Lmindustry/net/NetConnection;Lmindustry/entities/Effect;FFFLarc/graphics/Color;)V", 9 },
	{ "effect", (intptr_t) SM_mindustry_gen_Call_effect_mindustry_entities_Effect_float_float_float_arc_graphics_Color_java_lang_Object, 0, "(Lmindustry/entities/Effect;FFFLarc/graphics/Color;Ljava/lang/Object;)V", 9 },
	{ "effect", (intptr_t) SM_mindustry_gen_Call_effect_mindustry_net_NetConnection_mindustry_entities_Effect_float_float_float_arc_graphics_Color_java_lang_Object, 0, "(Lmindustry/net/NetConnection;Lmindustry/entities/Effect;FFFLarc/graphics/Color;Ljava/lang/Object;)V", 9 },
	{ "effectReliable", (intptr_t) SM_mindustry_gen_Call_effectReliable_mindustry_entities_Effect_float_float_float_arc_graphics_Color, 0, "(Lmindustry/entities/Effect;FFFLarc/graphics/Color;)V", 9 },
	{ "effectReliable", (intptr_t) SM_mindustry_gen_Call_effectReliable_mindustry_net_NetConnection_mindustry_entities_Effect_float_float_float_arc_graphics_Color, 0, "(Lmindustry/net/NetConnection;Lmindustry/entities/Effect;FFFLarc/graphics/Color;)V", 9 },
	{ "entitySnapshot", (intptr_t) SM_mindustry_gen_Call_entitySnapshot_short_Array1_byte, 0, "(S[B)V", 9 },
	{ "entitySnapshot", (intptr_t) SM_mindustry_gen_Call_entitySnapshot_mindustry_net_NetConnection_short_Array1_byte, 0, "(Lmindustry/net/NetConnection;S[B)V", 9 },
	{ "fillTileBlocks", (intptr_t) SM_mindustry_gen_Call_fillTileBlocks_int_int_int_int_mindustry_world_Block_mindustry_game_Team, 0, "(IIIILmindustry/world/Block;Lmindustry/game/Team;)V", 9 },
	{ "fillTileFloors", (intptr_t) SM_mindustry_gen_Call_fillTileFloors_int_int_int_int_mindustry_world_Block, 0, "(IIIILmindustry/world/Block;)V", 9 },
	{ "fillTileOverlays", (intptr_t) SM_mindustry_gen_Call_fillTileOverlays_int_int_int_int_mindustry_world_Block, 0, "(IIIILmindustry/world/Block;)V", 9 },
	{ "followUpMenu", (intptr_t) SM_mindustry_gen_Call_followUpMenu_int_java_lang_String_java_lang_String_Array2_java_lang_String, 0, "(ILjava/lang/String;Ljava/lang/String;[[Ljava/lang/String;)V", 9 },
	{ "followUpMenu", (intptr_t) SM_mindustry_gen_Call_followUpMenu_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_Array2_java_lang_String, 0, "(Lmindustry/net/NetConnection;ILjava/lang/String;Ljava/lang/String;[[Ljava/lang/String;)V", 9 },
	{ "gameOver", (intptr_t) SM_mindustry_gen_Call_gameOver_mindustry_game_Team, 0, "(Lmindustry/game/Team;)V", 9 },
	{ "hiddenSnapshot", (intptr_t) SM_mindustry_gen_Call_hiddenSnapshot_mindustry_net_NetConnection_arc_struct_IntSeq, 0, "(Lmindustry/net/NetConnection;Larc/struct/IntSeq;)V", 9 },
	{ "hideFollowUpMenu", (intptr_t) SM_mindustry_gen_Call_hideFollowUpMenu_int, 0, "(I)V", 9 },
	{ "hideFollowUpMenu", (intptr_t) SM_mindustry_gen_Call_hideFollowUpMenu_mindustry_net_NetConnection_int, 0, "(Lmindustry/net/NetConnection;I)V", 9 },
	{ "hideHudText", (intptr_t) SM_mindustry_gen_Call_hideHudText, 0, "()V", 9 },
	{ "hideHudText", (intptr_t) SM_mindustry_gen_Call_hideHudText_mindustry_net_NetConnection, 0, "(Lmindustry/net/NetConnection;)V", 9 },
	{ "hideMenuBuilder", (intptr_t) SM_mindustry_gen_Call_hideMenuBuilder_int, 0, "(I)V", 9 },
	{ "hideMenuBuilder", (intptr_t) SM_mindustry_gen_Call_hideMenuBuilder_mindustry_net_NetConnection_int, 0, "(Lmindustry/net/NetConnection;I)V", 9 },
	{ "infoMessage", (intptr_t) SM_mindustry_gen_Call_infoMessage_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "infoMessage", (intptr_t) SM_mindustry_gen_Call_infoMessage_mindustry_net_NetConnection_java_lang_String, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;)V", 9 },
	{ "infoPopup", (intptr_t) SM_mindustry_gen_Call_infoPopup_java_lang_String_float_int_int_int_int_int, 0, "(Ljava/lang/String;FIIIII)V", 9 },
	{ "infoPopup", (intptr_t) SM_mindustry_gen_Call_infoPopup_mindustry_net_NetConnection_java_lang_String_float_int_int_int_int_int, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;FIIIII)V", 9 },
	{ "infoPopup", (intptr_t) SM_mindustry_gen_Call_infoPopup_java_lang_String_java_lang_String_float_int_int_int_int_int, 0, "(Ljava/lang/String;Ljava/lang/String;FIIIII)V", 9 },
	{ "infoPopup", (intptr_t) SM_mindustry_gen_Call_infoPopup_mindustry_net_NetConnection_java_lang_String_java_lang_String_float_int_int_int_int_int, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;Ljava/lang/String;FIIIII)V", 9 },
	{ "infoPopupReliable", (intptr_t) SM_mindustry_gen_Call_infoPopupReliable_java_lang_String_float_int_int_int_int_int, 0, "(Ljava/lang/String;FIIIII)V", 9 },
	{ "infoPopupReliable", (intptr_t) SM_mindustry_gen_Call_infoPopupReliable_mindustry_net_NetConnection_java_lang_String_float_int_int_int_int_int, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;FIIIII)V", 9 },
	{ "infoPopupReliable", (intptr_t) SM_mindustry_gen_Call_infoPopupReliable_java_lang_String_java_lang_String_float_int_int_int_int_int, 0, "(Ljava/lang/String;Ljava/lang/String;FIIIII)V", 9 },
	{ "infoPopupReliable", (intptr_t) SM_mindustry_gen_Call_infoPopupReliable_mindustry_net_NetConnection_java_lang_String_java_lang_String_float_int_int_int_int_int, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;Ljava/lang/String;FIIIII)V", 9 },
	{ "infoToast", (intptr_t) SM_mindustry_gen_Call_infoToast_java_lang_String_float, 0, "(Ljava/lang/String;F)V", 9 },
	{ "infoToast", (intptr_t) SM_mindustry_gen_Call_infoToast_mindustry_net_NetConnection_java_lang_String_float, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;F)V", 9 },
	{ "kick", (intptr_t) SM_mindustry_gen_Call_kick_mindustry_net_NetConnection_java_lang_String, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;)V", 9 },
	{ "kick", (intptr_t) SM_mindustry_gen_Call_kick_mindustry_net_NetConnection_mindustry_net_Packets$KickReason, 0, "(Lmindustry/net/NetConnection;Lmindustry/net/Packets$KickReason;)V", 9 },
	{ "label", (intptr_t) SM_mindustry_gen_Call_label_java_lang_String_float_float_float, 0, "(Ljava/lang/String;FFF)V", 9 },
	{ "label", (intptr_t) SM_mindustry_gen_Call_label_mindustry_net_NetConnection_java_lang_String_float_float_float, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;FFF)V", 9 },
	{ "label", (intptr_t) SM_mindustry_gen_Call_label_java_lang_String_int_float_float_float, 0, "(Ljava/lang/String;IFFF)V", 9 },
	{ "label", (intptr_t) SM_mindustry_gen_Call_label_mindustry_net_NetConnection_java_lang_String_int_float_float_float, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;IFFF)V", 9 },
	{ "label", (intptr_t) SM_mindustry_gen_Call_label_java_lang_String_int_float_float_float_int, 0, "(Ljava/lang/String;IFFFI)V", 9 },
	{ "label", (intptr_t) SM_mindustry_gen_Call_label_mindustry_net_NetConnection_java_lang_String_int_float_float_float_int, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;IFFFI)V", 9 },
	{ "labelReliable", (intptr_t) SM_mindustry_gen_Call_labelReliable_java_lang_String_float_float_float, 0, "(Ljava/lang/String;FFF)V", 9 },
	{ "labelReliable", (intptr_t) SM_mindustry_gen_Call_labelReliable_mindustry_net_NetConnection_java_lang_String_float_float_float, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;FFF)V", 9 },
	{ "labelReliable", (intptr_t) SM_mindustry_gen_Call_labelReliable_java_lang_String_int_float_float_float, 0, "(Ljava/lang/String;IFFF)V", 9 },
	{ "labelReliable", (intptr_t) SM_mindustry_gen_Call_labelReliable_mindustry_net_NetConnection_java_lang_String_int_float_float_float, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;IFFF)V", 9 },
	{ "labelReliable", (intptr_t) SM_mindustry_gen_Call_labelReliable_java_lang_String_int_float_float_float_int, 0, "(Ljava/lang/String;IFFFI)V", 9 },
	{ "labelReliable", (intptr_t) SM_mindustry_gen_Call_labelReliable_mindustry_net_NetConnection_java_lang_String_int_float_float_float_int, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;IFFFI)V", 9 },
	{ "landingPadLanded", (intptr_t) SM_mindustry_gen_Call_landingPadLanded_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 9 },
	{ "logicExplosion", (intptr_t) SM_mindustry_gen_Call_logicExplosion_mindustry_game_Team_float_float_float_float_boolean_boolean_boolean_boolean, 0, "(Lmindustry/game/Team;FFFFZZZZ)V", 9 },
	{ "menu", (intptr_t) SM_mindustry_gen_Call_menu_int_java_lang_String_java_lang_String_Array2_java_lang_String, 0, "(ILjava/lang/String;Ljava/lang/String;[[Ljava/lang/String;)V", 9 },
	{ "menu", (intptr_t) SM_mindustry_gen_Call_menu_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_Array2_java_lang_String, 0, "(Lmindustry/net/NetConnection;ILjava/lang/String;Ljava/lang/String;[[Ljava/lang/String;)V", 9 },
	{ "menuBuilder", (intptr_t) SM_mindustry_gen_Call_menuBuilder_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder, 0, "(IJLjava/lang/String;ZZZLmindustry/ui/builder/UiBuilder$NodeBuilder;)V", 9 },
	{ "menuBuilder", (intptr_t) SM_mindustry_gen_Call_menuBuilder_mindustry_net_NetConnection_int_long_java_lang_String_boolean_boolean_boolean_mindustry_ui_builder_UiBuilder$NodeBuilder, 0, "(Lmindustry/net/NetConnection;IJLjava/lang/String;ZZZLmindustry/ui/builder/UiBuilder$NodeBuilder;)V", 9 },
	{ "menuBuilderChoose", (intptr_t) SM_mindustry_gen_Call_menuBuilderChoose_mindustry_gen_Player_int_mindustry_ui_builder_MenuResult, 0, "(Lmindustry/gen/Player;ILmindustry/ui/builder/MenuResult;)V", 9 },
	{ "menuBuilderUpdate", (intptr_t) SM_mindustry_gen_Call_menuBuilderUpdate_int_java_lang_String_mindustry_ui_builder_UiBuilder$NodeBuilder, 0, "(ILjava/lang/String;Lmindustry/ui/builder/UiBuilder$NodeBuilder;)V", 9 },
	{ "menuBuilderUpdate", (intptr_t) SM_mindustry_gen_Call_menuBuilderUpdate_mindustry_net_NetConnection_int_java_lang_String_mindustry_ui_builder_UiBuilder$NodeBuilder, 0, "(Lmindustry/net/NetConnection;ILjava/lang/String;Lmindustry/ui/builder/UiBuilder$NodeBuilder;)V", 9 },
	{ "menuChoose", (intptr_t) SM_mindustry_gen_Call_menuChoose_mindustry_gen_Player_int_int, 0, "(Lmindustry/gen/Player;II)V", 9 },
	{ "openURI", (intptr_t) SM_mindustry_gen_Call_openURI_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "openURI", (intptr_t) SM_mindustry_gen_Call_openURI_mindustry_net_NetConnection_java_lang_String, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;)V", 9 },
	{ "payloadDropped", (intptr_t) SM_mindustry_gen_Call_payloadDropped_mindustry_gen_Unit_float_float, 0, "(Lmindustry/gen/Unit;FF)V", 9 },
	{ "pickedBuildPayload", (intptr_t) SM_mindustry_gen_Call_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;Z)V", 9 },
	{ "pickedUnitPayload", (intptr_t) SM_mindustry_gen_Call_pickedUnitPayload_mindustry_gen_Unit_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;)V", 9 },
	{ "ping", (intptr_t) SM_mindustry_gen_Call_ping_long, 0, "(J)V", 9 },
	{ "pingLocation", (intptr_t) SM_mindustry_gen_Call_pingLocation_mindustry_gen_Player_float_float_java_lang_String, 0, "(Lmindustry/gen/Player;FFLjava/lang/String;)V", 9 },
	{ "pingLocation__forward", (intptr_t) SM_mindustry_gen_Call_pingLocation__forward_mindustry_net_NetConnection_mindustry_gen_Player_float_float_java_lang_String, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;FFLjava/lang/String;)V", 8 },
	{ "pingResponse", (intptr_t) SM_mindustry_gen_Call_pingResponse_mindustry_net_NetConnection_long, 0, "(Lmindustry/net/NetConnection;J)V", 9 },
	{ "playMusic", (intptr_t) SM_mindustry_gen_Call_playMusic_java_lang_String_boolean, 0, "(Ljava/lang/String;Z)V", 9 },
	{ "playMusic", (intptr_t) SM_mindustry_gen_Call_playMusic_mindustry_net_NetConnection_java_lang_String_boolean, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;Z)V", 9 },
	{ "playerDisconnect", (intptr_t) SM_mindustry_gen_Call_playerDisconnect_int, 0, "(I)V", 9 },
	{ "playerSpawn", (intptr_t) SM_mindustry_gen_Call_playerSpawn_mindustry_world_Tile_mindustry_gen_Player, 0, "(Lmindustry/world/Tile;Lmindustry/gen/Player;)V", 9 },
	{ "removeMarker", (intptr_t) SM_mindustry_gen_Call_removeMarker_int, 0, "(I)V", 9 },
	{ "removeMarker", (intptr_t) SM_mindustry_gen_Call_removeMarker_mindustry_net_NetConnection_int, 0, "(Lmindustry/net/NetConnection;I)V", 9 },
	{ "removeQueueBlock", (intptr_t) SM_mindustry_gen_Call_removeQueueBlock_mindustry_net_NetConnection_int_int_boolean, 0, "(Lmindustry/net/NetConnection;IIZ)V", 9 },
	{ "removeTile", (intptr_t) SM_mindustry_gen_Call_removeTile_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 9 },
	{ "removeWorldLabel", (intptr_t) SM_mindustry_gen_Call_removeWorldLabel_int, 0, "(I)V", 9 },
	{ "removeWorldLabel", (intptr_t) SM_mindustry_gen_Call_removeWorldLabel_mindustry_net_NetConnection_int, 0, "(Lmindustry/net/NetConnection;I)V", 9 },
	{ "requestAssets", (intptr_t) SM_mindustry_gen_Call_requestAssets_Array1_short, 0, "([S)V", 9 },
	{ "requestBlockSnapshot", (intptr_t) SM_mindustry_gen_Call_requestBlockSnapshot_int, 0, "(I)V", 9 },
	{ "requestBuildPayload", (intptr_t) SM_mindustry_gen_Call_requestBuildPayload_mindustry_gen_Player_mindustry_gen_Building, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;)V", 9 },
	{ "requestDebugStatus", (intptr_t) SM_mindustry_gen_Call_requestDebugStatus, 0, "()V", 9 },
	{ "requestDropPayload", (intptr_t) SM_mindustry_gen_Call_requestDropPayload_mindustry_gen_Player_float_float, 0, "(Lmindustry/gen/Player;FF)V", 9 },
	{ "requestItem", (intptr_t) SM_mindustry_gen_Call_requestItem_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;Lmindustry/type/Item;I)V", 9 },
	{ "requestItem__forward", (intptr_t) SM_mindustry_gen_Call_requestItem__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;Lmindustry/gen/Building;Lmindustry/type/Item;I)V", 8 },
	{ "requestUnitPayload", (intptr_t) SM_mindustry_gen_Call_requestUnitPayload_mindustry_gen_Player_mindustry_gen_Unit, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Unit;)V", 9 },
	{ "requestWorld", (intptr_t) SM_mindustry_gen_Call_requestWorld, 0, "()V", 9 },
	{ "researched", (intptr_t) SM_mindustry_gen_Call_researched_mindustry_ctype_Content, 0, "(Lmindustry/ctype/Content;)V", 9 },
	{ "rotateBlock", (intptr_t) SM_mindustry_gen_Call_rotateBlock_mindustry_gen_Player_mindustry_gen_Building_boolean, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;Z)V", 9 },
	{ "rotateBlock__forward", (intptr_t) SM_mindustry_gen_Call_rotateBlock__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building_boolean, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;Lmindustry/gen/Building;Z)V", 8 },
	{ "sectorCapture", (intptr_t) SM_mindustry_gen_Call_sectorCapture, 0, "()V", 9 },
	{ "sendChatMessage", (intptr_t) SM_mindustry_gen_Call_sendChatMessage_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "sendMessage", (intptr_t) SM_mindustry_gen_Call_sendMessage_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "sendMessage", (intptr_t) SM_mindustry_gen_Call_sendMessage_java_lang_String_java_lang_String_mindustry_gen_Player, 0, "(Ljava/lang/String;Ljava/lang/String;Lmindustry/gen/Player;)V", 9 },
	{ "sendMessage", (intptr_t) SM_mindustry_gen_Call_sendMessage_mindustry_net_NetConnection_java_lang_String_java_lang_String_mindustry_gen_Player, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;Ljava/lang/String;Lmindustry/gen/Player;)V", 9 },
	{ "serverBinaryPacketReliable", (intptr_t) SM_mindustry_gen_Call_serverBinaryPacketReliable_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 9 },
	{ "serverBinaryPacketUnreliable", (intptr_t) SM_mindustry_gen_Call_serverBinaryPacketUnreliable_java_lang_String_Array1_byte, 0, "(Ljava/lang/String;[B)V", 9 },
	{ "serverPacketReliable", (intptr_t) SM_mindustry_gen_Call_serverPacketReliable_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "serverPacketUnreliable", (intptr_t) SM_mindustry_gen_Call_serverPacketUnreliable_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "setCameraPosition", (intptr_t) SM_mindustry_gen_Call_setCameraPosition_float_float, 0, "(FF)V", 9 },
	{ "setCameraPosition", (intptr_t) SM_mindustry_gen_Call_setCameraPosition_mindustry_net_NetConnection_float_float, 0, "(Lmindustry/net/NetConnection;FF)V", 9 },
	{ "setFlag", (intptr_t) SM_mindustry_gen_Call_setFlag_java_lang_String_boolean, 0, "(Ljava/lang/String;Z)V", 9 },
	{ "setFloor", (intptr_t) SM_mindustry_gen_Call_setFloor_mindustry_world_Tile_mindustry_world_Block_mindustry_world_Block, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/world/Block;)V", 9 },
	{ "setHudText", (intptr_t) SM_mindustry_gen_Call_setHudText_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "setHudText", (intptr_t) SM_mindustry_gen_Call_setHudText_mindustry_net_NetConnection_java_lang_String, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;)V", 9 },
	{ "setHudTextReliable", (intptr_t) SM_mindustry_gen_Call_setHudTextReliable_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "setHudTextReliable", (intptr_t) SM_mindustry_gen_Call_setHudTextReliable_mindustry_net_NetConnection_java_lang_String, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;)V", 9 },
	{ "setItem", (intptr_t) SM_mindustry_gen_Call_setItem_mindustry_gen_Building_mindustry_type_Item_int, 0, "(Lmindustry/gen/Building;Lmindustry/type/Item;I)V", 9 },
	{ "setItems", (intptr_t) SM_mindustry_gen_Call_setItems_mindustry_gen_Building_Array1_mindustry_type_ItemStack, 0, "(Lmindustry/gen/Building;[Lmindustry/type/ItemStack;)V", 9 },
	{ "setLiquid", (intptr_t) SM_mindustry_gen_Call_setLiquid_mindustry_gen_Building_mindustry_type_Liquid_float, 0, "(Lmindustry/gen/Building;Lmindustry/type/Liquid;F)V", 9 },
	{ "setLiquids", (intptr_t) SM_mindustry_gen_Call_setLiquids_mindustry_gen_Building_Array1_mindustry_type_LiquidStack, 0, "(Lmindustry/gen/Building;[Lmindustry/type/LiquidStack;)V", 9 },
	{ "setMapArea", (intptr_t) SM_mindustry_gen_Call_setMapArea_int_int_int_int, 0, "(IIII)V", 9 },
	{ "setObjectives", (intptr_t) SM_mindustry_gen_Call_setObjectives_mindustry_game_MapObjectives, 0, "(Lmindustry/game/MapObjectives;)V", 9 },
	{ "setObjectives", (intptr_t) SM_mindustry_gen_Call_setObjectives_mindustry_net_NetConnection_mindustry_game_MapObjectives, 0, "(Lmindustry/net/NetConnection;Lmindustry/game/MapObjectives;)V", 9 },
	{ "setOverlay", (intptr_t) SM_mindustry_gen_Call_setOverlay_mindustry_world_Tile_mindustry_world_Block, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;)V", 9 },
	{ "setPlayerTeamEditor", (intptr_t) SM_mindustry_gen_Call_setPlayerTeamEditor_mindustry_gen_Player_mindustry_game_Team, 0, "(Lmindustry/gen/Player;Lmindustry/game/Team;)V", 9 },
	{ "setPlayerTeamEditor__forward", (intptr_t) SM_mindustry_gen_Call_setPlayerTeamEditor__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_game_Team, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;Lmindustry/game/Team;)V", 8 },
	{ "setPosition", (intptr_t) SM_mindustry_gen_Call_setPosition_mindustry_net_NetConnection_float_float, 0, "(Lmindustry/net/NetConnection;FF)V", 9 },
	{ "setRule", (intptr_t) SM_mindustry_gen_Call_setRule_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "setRule", (intptr_t) SM_mindustry_gen_Call_setRule_mindustry_net_NetConnection_java_lang_String_java_lang_String, 0, "(Lmindustry/net/NetConnection;Ljava/lang/String;Ljava/lang/String;)V", 9 },
	{ "setRules", (intptr_t) SM_mindustry_gen_Call_setRules_mindustry_game_Rules, 0, "(Lmindustry/game/Rules;)V", 9 },
	{ "setRules", (intptr_t) SM_mindustry_gen_Call_setRules_mindustry_net_NetConnection_mindustry_game_Rules, 0, "(Lmindustry/net/NetConnection;Lmindustry/game/Rules;)V", 9 },
	{ "setTeam", (intptr_t) SM_mindustry_gen_Call_setTeam_mindustry_gen_Building_mindustry_game_Team, 0, "(Lmindustry/gen/Building;Lmindustry/game/Team;)V", 9 },
	{ "setTeams", (intptr_t) SM_mindustry_gen_Call_setTeams_Array1_int_mindustry_game_Team, 0, "([ILmindustry/game/Team;)V", 9 },
	{ "setTile", (intptr_t) SM_mindustry_gen_Call_setTile_mindustry_world_Tile_mindustry_world_Block_mindustry_game_Team_int, 0, "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/game/Team;I)V", 9 },
	{ "setTileBlocks", (intptr_t) SM_mindustry_gen_Call_setTileBlocks_mindustry_world_Block_mindustry_game_Team_Array1_int, 0, "(Lmindustry/world/Block;Lmindustry/game/Team;[I)V", 9 },
	{ "setTileFloors", (intptr_t) SM_mindustry_gen_Call_setTileFloors_mindustry_world_Block_Array1_int, 0, "(Lmindustry/world/Block;[I)V", 9 },
	{ "setTileItems", (intptr_t) SM_mindustry_gen_Call_setTileItems_mindustry_type_Item_int_Array1_int, 0, "(Lmindustry/type/Item;I[I)V", 9 },
	{ "setTileLiquids", (intptr_t) SM_mindustry_gen_Call_setTileLiquids_mindustry_type_Liquid_float_Array1_int, 0, "(Lmindustry/type/Liquid;F[I)V", 9 },
	{ "setTileOverlays", (intptr_t) SM_mindustry_gen_Call_setTileOverlays_mindustry_world_Block_Array1_int, 0, "(Lmindustry/world/Block;[I)V", 9 },
	{ "setUnitCommand", (intptr_t) SM_mindustry_gen_Call_setUnitCommand_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand, 0, "(Lmindustry/gen/Player;[ILmindustry/ai/UnitCommand;)V", 9 },
	{ "setUnitCommand__forward", (intptr_t) SM_mindustry_gen_Call_setUnitCommand__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;[ILmindustry/ai/UnitCommand;)V", 8 },
	{ "setUnitStance", (intptr_t) SM_mindustry_gen_Call_setUnitStance_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean, 0, "(Lmindustry/gen/Player;[ILmindustry/ai/UnitStance;Z)V", 9 },
	{ "setUnitStance__forward", (intptr_t) SM_mindustry_gen_Call_setUnitStance__forward_mindustry_net_NetConnection_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;[ILmindustry/ai/UnitStance;Z)V", 8 },
	{ "sound", (intptr_t) SM_mindustry_gen_Call_sound_arc_audio_Sound_float_float_float, 0, "(Larc/audio/Sound;FFF)V", 9 },
	{ "sound", (intptr_t) SM_mindustry_gen_Call_sound_mindustry_net_NetConnection_arc_audio_Sound_float_float_float, 0, "(Lmindustry/net/NetConnection;Larc/audio/Sound;FFF)V", 9 },
	{ "soundAt", (intptr_t) SM_mindustry_gen_Call_soundAt_arc_audio_Sound_float_float_float_float, 0, "(Larc/audio/Sound;FFFF)V", 9 },
	{ "soundAt", (intptr_t) SM_mindustry_gen_Call_soundAt_mindustry_net_NetConnection_arc_audio_Sound_float_float_float_float, 0, "(Lmindustry/net/NetConnection;Larc/audio/Sound;FFFF)V", 9 },
	{ "spawnEffect", (intptr_t) SM_mindustry_gen_Call_spawnEffect_float_float_float_mindustry_type_UnitType, 0, "(FFFLmindustry/type/UnitType;)V", 9 },
	{ "stateSnapshot", (intptr_t) SM_mindustry_gen_Call_stateSnapshot_float_int_int_boolean_boolean_int_byte_long_long_Array1_byte, 0, "(FIIZZIBJJ[B)V", 9 },
	{ "syncVariable", (intptr_t) SM_mindustry_gen_Call_syncVariable_mindustry_gen_Building_int_java_lang_Object, 0, "(Lmindustry/gen/Building;ILjava/lang/Object;)V", 9 },
	{ "takeItems", (intptr_t) SM_mindustry_gen_Call_takeItems_mindustry_gen_Building_mindustry_type_Item_int_mindustry_gen_Unit, 0, "(Lmindustry/gen/Building;Lmindustry/type/Item;ILmindustry/gen/Unit;)V", 9 },
	{ "textInput", (intptr_t) SM_mindustry_gen_Call_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean, 0, "(ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;Z)V", 9 },
	{ "textInput", (intptr_t) SM_mindustry_gen_Call_textInput_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_int_java_lang_String_boolean, 0, "(Lmindustry/net/NetConnection;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;Z)V", 9 },
	{ "textInput", (intptr_t) SM_mindustry_gen_Call_textInput_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean, 0, "(ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;ZZ)V", 9 },
	{ "textInput", (intptr_t) SM_mindustry_gen_Call_textInput_mindustry_net_NetConnection_int_java_lang_String_java_lang_String_int_java_lang_String_boolean_boolean, 0, "(Lmindustry/net/NetConnection;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;ZZ)V", 9 },
	{ "textInputResult", (intptr_t) SM_mindustry_gen_Call_textInputResult_mindustry_gen_Player_int_java_lang_String, 0, "(Lmindustry/gen/Player;ILjava/lang/String;)V", 9 },
	{ "tileConfig", (intptr_t) SM_mindustry_gen_Call_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;Ljava/lang/Object;)V", 9 },
	{ "tileConfig__forward", (intptr_t) SM_mindustry_gen_Call_tileConfig__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;Lmindustry/gen/Building;Ljava/lang/Object;)V", 8 },
	{ "tileTap", (intptr_t) SM_mindustry_gen_Call_tileTap_mindustry_gen_Player_mindustry_world_Tile, 0, "(Lmindustry/gen/Player;Lmindustry/world/Tile;)V", 9 },
	{ "traceInfo", (intptr_t) SM_mindustry_gen_Call_traceInfo_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_net_Administration$TraceInfo, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;Lmindustry/net/Administration$TraceInfo;)V", 9 },
	{ "transferInventory", (intptr_t) SM_mindustry_gen_Call_transferInventory_mindustry_gen_Player_mindustry_gen_Building, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Building;)V", 9 },
	{ "transferInventory__forward", (intptr_t) SM_mindustry_gen_Call_transferInventory__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Building, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;Lmindustry/gen/Building;)V", 8 },
	{ "transferItemEffect", (intptr_t) SM_mindustry_gen_Call_transferItemEffect_mindustry_type_Item_float_float_mindustry_gen_Itemsc, 0, "(Lmindustry/type/Item;FFLmindustry/gen/Itemsc;)V", 9 },
	{ "transferItemTo", (intptr_t) SM_mindustry_gen_Call_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building, 0, "(Lmindustry/gen/Unit;Lmindustry/type/Item;IFFLmindustry/gen/Building;)V", 9 },
	{ "transferItemToUnit", (intptr_t) SM_mindustry_gen_Call_transferItemToUnit_mindustry_type_Item_float_float_mindustry_gen_Itemsc, 0, "(Lmindustry/type/Item;FFLmindustry/gen/Itemsc;)V", 9 },
	{ "unitBlockSpawn", (intptr_t) SM_mindustry_gen_Call_unitBlockSpawn_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 9 },
	{ "unitBuildingControlSelect", (intptr_t) SM_mindustry_gen_Call_unitBuildingControlSelect_mindustry_gen_Unit_mindustry_gen_Building, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 9 },
	{ "unitCapDeath", (intptr_t) SM_mindustry_gen_Call_unitCapDeath_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 9 },
	{ "unitClear", (intptr_t) SM_mindustry_gen_Call_unitClear_mindustry_gen_Player, 0, "(Lmindustry/gen/Player;)V", 9 },
	{ "unitClear__forward", (intptr_t) SM_mindustry_gen_Call_unitClear__forward_mindustry_net_NetConnection_mindustry_gen_Player, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;)V", 8 },
	{ "unitControl", (intptr_t) SM_mindustry_gen_Call_unitControl_mindustry_gen_Player_mindustry_gen_Unit, 0, "(Lmindustry/gen/Player;Lmindustry/gen/Unit;)V", 9 },
	{ "unitControl__forward", (intptr_t) SM_mindustry_gen_Call_unitControl__forward_mindustry_net_NetConnection_mindustry_gen_Player_mindustry_gen_Unit, 0, "(Lmindustry/net/NetConnection;Lmindustry/gen/Player;Lmindustry/gen/Unit;)V", 8 },
	{ "unitDeath", (intptr_t) SM_mindustry_gen_Call_unitDeath_int, 0, "(I)V", 9 },
	{ "unitDespawn", (intptr_t) SM_mindustry_gen_Call_unitDespawn_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 9 },
	{ "unitDestroy", (intptr_t) SM_mindustry_gen_Call_unitDestroy_int, 0, "(I)V", 9 },
	{ "unitEnteredPayload", (intptr_t) SM_mindustry_gen_Call_unitEnteredPayload_mindustry_gen_Unit_mindustry_gen_Building, 0, "(Lmindustry/gen/Unit;Lmindustry/gen/Building;)V", 9 },
	{ "unitEnvDeath", (intptr_t) SM_mindustry_gen_Call_unitEnvDeath_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 9 },
	{ "unitSafeDeath", (intptr_t) SM_mindustry_gen_Call_unitSafeDeath_mindustry_gen_Unit, 0, "(Lmindustry/gen/Unit;)V", 9 },
	{ "unitSpawn", (intptr_t) SM_mindustry_gen_Call_unitSpawn_mindustry_entities_Units$UnitSyncContainer, 0, "(Lmindustry/entities/Units$UnitSyncContainer;)V", 9 },
	{ "unitTetherBlockSpawned", (intptr_t) SM_mindustry_gen_Call_unitTetherBlockSpawned_mindustry_world_Tile_int, 0, "(Lmindustry/world/Tile;I)V", 9 },
	{ "updateGameOver", (intptr_t) SM_mindustry_gen_Call_updateGameOver_mindustry_game_Team, 0, "(Lmindustry/game/Team;)V", 9 },
	{ "updateMarker", (intptr_t) SM_mindustry_gen_Call_updateMarker_int_mindustry_logic_LMarkerControl_double_double_double, 0, "(ILmindustry/logic/LMarkerControl;DDD)V", 9 },
	{ "updateMarker", (intptr_t) SM_mindustry_gen_Call_updateMarker_mindustry_net_NetConnection_int_mindustry_logic_LMarkerControl_double_double_double, 0, "(Lmindustry/net/NetConnection;ILmindustry/logic/LMarkerControl;DDD)V", 9 },
	{ "updateMarkerText", (intptr_t) SM_mindustry_gen_Call_updateMarkerText_int_mindustry_logic_LMarkerControl_boolean_java_lang_String, 0, "(ILmindustry/logic/LMarkerControl;ZLjava/lang/String;)V", 9 },
	{ "updateMarkerText", (intptr_t) SM_mindustry_gen_Call_updateMarkerText_mindustry_net_NetConnection_int_mindustry_logic_LMarkerControl_boolean_java_lang_String, 0, "(Lmindustry/net/NetConnection;ILmindustry/logic/LMarkerControl;ZLjava/lang/String;)V", 9 },
	{ "updateMarkerTexture", (intptr_t) SM_mindustry_gen_Call_updateMarkerTexture_int_java_lang_Object, 0, "(ILjava/lang/Object;)V", 9 },
	{ "updateMarkerTexture", (intptr_t) SM_mindustry_gen_Call_updateMarkerTexture_mindustry_net_NetConnection_int_java_lang_Object, 0, "(Lmindustry/net/NetConnection;ILjava/lang/Object;)V", 9 },
	{ "warningToast", (intptr_t) SM_mindustry_gen_Call_warningToast_int_java_lang_String, 0, "(ILjava/lang/String;)V", 9 },
	{ "warningToast", (intptr_t) SM_mindustry_gen_Call_warningToast_mindustry_net_NetConnection_int_java_lang_String, 0, "(Lmindustry/net/NetConnection;ILjava/lang/String;)V", 9 },
	{ "worldDataBegin", (intptr_t) SM_mindustry_gen_Call_worldDataBegin, 0, "()V", 9 },
	{ "worldDataBegin", (intptr_t) SM_mindustry_gen_Call_worldDataBegin_mindustry_net_NetConnection, 0, "(Lmindustry/net/NetConnection;)V", 9 },
	{ "registerPackets", (intptr_t) SM_mindustry_gen_Call_registerPackets, 0, "()V", 9 },
};

Class class_mindustry_gen_Call{
		.nativeName = (intptr_t) "mindustry/gen/Call",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Call),
		.classVtable = (intptr_t) vtable_mindustry_gen_Call,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Call,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Call,
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
		.methodCount = 236,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Call = registerClass(&class_mindustry_gen_Call);

}
