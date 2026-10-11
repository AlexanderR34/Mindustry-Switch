#include "mindustry/mod/ClassMap.h"
#include "mindustry/type/weapons/PointDefenseWeapon.h"
#include "mindustry/world/blocks/production/GenericCrafter_GenericCrafterBuild.h"
#include "mindustry/world/draw/DrawCultivator.h"
#include "mindustry/entities/part/EffectSpawnerPart.h"
#include "mindustry/world/blocks/units/RepairTurret.h"
#include "mindustry/ai/types/GroundAI.h"
#include "mindustry/world/blocks/defense/turrets/LaserTurret_LaserTurretBuild.h"
#include "mindustry/world/blocks/liquid/LiquidBridge.h"
#include "mindustry/world/draw/DrawLiquidRegion.h"
#include "mindustry/world/blocks/defense/Thruster.h"
#include "mindustry/entities/bullet/LaserBoltBulletType.h"
#include "mindustry/world/blocks/payloads/PayloadConveyor.h"
#include "mindustry/type/Sector_SectorRect.h"
#include "mindustry/world/blocks/payloads/PayloadUnloader_PayloadUnloaderBuild.h"
#include "mindustry/world/draw/DrawGlowRegion.h"
#include "mindustry/world/blocks/payloads/Payload.h"
#include "mindustry/world/blocks/payloads/PayloadUnloader.h"
#include "mindustry/world/blocks/ItemSelection.h"
#include "mindustry/type/UnitType_UnitEngine.h"
#include "mindustry/world/blocks/power/PowerGraph.h"
#include "mindustry/type/unit/TankUnitType.h"
#include "mindustry/world/draw/DrawPistons.h"
#include "mindustry/world/blocks/power/LongPowerNode_LongPowerNodeBuild.h"
#include "mindustry/world/blocks/power/ConsumeGenerator.h"
#include "mindustry/world/consumers/ConsumeLiquidFlammable.h"
#include "mindustry/world/blocks/defense/ShieldWall_ShieldWallBuild.h"
#include "mindustry/world/blocks/payloads/PayloadRouter.h"
#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/entities/bullet/MissileBulletType.h"
#include "mindustry/world/blocks/defense/turrets/TractorBeamTurret_TractorBeamBuild.h"
#include "mindustry/world/blocks/payloads/PayloadBlock.h"
#include "mindustry/entities/pattern/ShootMulti.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/world/blocks/distribution/Junction_JunctionBuild.h"
#include "mindustry/world/blocks/logic/LogicDisplay_LogicDisplayBuild.h"
#include "mindustry/world/blocks/logic/MessageBlock.h"
#include "mindustry/entities/bullet/LaserBulletType.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret.h"
#include "mindustry/entities/bullet/MultiBulletType.h"
#include "mindustry/world/blocks/distribution/ArmoredConveyor_ArmoredConveyorBuild.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "mindustry/entities/abilities/LiquidExplodeAbility.h"
#include "mindustry/world/blocks/payloads/BlockProducer_BlockProducerBuild.h"
#include "mindustry/world/blocks/production/WallCrafter.h"
#include "mindustry/world/blocks/units/UnitBlock.h"
#include "mindustry/world/blocks/payloads/BlockProducer.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousTurret.h"
#include "mindustry/entities/abilities/EmptyDataAbility.h"
#include "mindustry/world/consumers/ConsumePayloadDynamic.h"
#include "mindustry/world/blocks/distribution/Duct.h"
#include "mindustry/entities/abilities/ShieldArcAbility.h"
#include "mindustry/world/blocks/distribution/Conveyor_ConveyorBuild.h"
#include "mindustry/world/blocks/distribution/BufferedItemBridge.h"
#include "mindustry/world/blocks/production/Drill.h"
#include "mindustry/entities/part/DrawPart_PartParams.h"
#include "mindustry/world/blocks/sandbox/ItemVoid.h"
#include "mindustry/world/blocks/environment/OreBlock.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicLink.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitFactoryBuild.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/distribution/StackRouter.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay.h"
#include "mindustry/world/draw/DrawMultiWeave.h"
#include "mindustry/entities/part/HaloPart.h"
#include "mindustry/type/weather/MagneticStorm.h"
#include "mindustry/world/blocks/liquid/LiquidRouter_LiquidRouterBuild.h"
#include "mindustry/world/blocks/logic/SwitchBlock.h"
#include "mindustry/world/draw/DrawHeatInput.h"
#include "mindustry/world/blocks/distribution/StackConveyor.h"
#include "mindustry/world/blocks/defense/turrets/Turret_AmmoEntry.h"
#include "mindustry/world/blocks/environment/Cliff.h"
#include "mindustry/world/blocks/defense/MendProjector_MendBuild.h"
#include "mindustry/type/weapons/RepairBeamWeapon.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/entities/bullet/ContinuousBulletType.h"
#include "mindustry/world/blocks/distribution/ArmoredConveyor.h"
#include "mindustry/world/draw/DrawCircles.h"
#include "mindustry/entities/pattern/ShootAlternate.h"
#include "mindustry/world/draw/DrawShape.h"
#include "mindustry/entities/abilities/RepairFieldAbility.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadDriverState.h"
#include "mindustry/world/blocks/sandbox/PowerVoid.h"
#include "mindustry/world/blocks/distribution/ItemBridge_ItemBridgeBuild.h"
#include "mindustry/world/blocks/environment/ColoredWall.h"
#include "mindustry/world/blocks/liquid/LiquidRouter.h"
#include "mindustry/world/blocks/defense/ShockMine.h"
#include "mindustry/world/blocks/logic/LogicBlock.h"
#include "mindustry/ai/types/DefenderAI.h"
#include "mindustry/world/blocks/production/Drill_DrillBuild.h"
#include "mindustry/world/blocks/production/BurstDrill_BurstDrillBuild.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/power/PowerBlock.h"
#include "mindustry/world/blocks/defense/turrets/Turret_BulletEntry.h"
#include "mindustry/world/blocks/environment/TreeBlock.h"
#include "mindustry/entities/abilities/ArmorPlateAbility.h"
#include "mindustry/world/blocks/defense/TargetDummy_TargetDummyBuild.h"
#include "mindustry/entities/part/RegionPart.h"
#include "mindustry/world/blocks/distribution/Sorter.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/environment/Seaweed.h"
#include "mindustry/world/blocks/production/BeamDrill.h"
#include "mindustry/entities/abilities/SpawnDeathAbility.h"
#include "mindustry/type/LiquidStack.h"
#include "mindustry/type/CellLiquid.h"
#include "mindustry/entities/bullet/EmptyBulletType.h"
#include "mindustry/world/draw/DrawHeatRegion.h"
#include "mindustry/world/blocks/units/Reconstructor.h"
#include "mindustry/world/blocks/logic/SwitchBlock_SwitchBuild.h"
#include "mindustry/world/blocks/liquid/ArmoredConduit.h"
#include "mindustry/world/blocks/storage/StorageBlock_StorageBuild.h"
#include "mindustry/world/draw/DrawArcSmelt.h"
#include "mindustry/world/blocks/power/PowerNode_PowerNodeBuild.h"
#include "mindustry/world/blocks/power/PowerDistributor.h"
#include "mindustry/entities/pattern/ShootPattern_BulletHandler.h"
#include "mindustry/entities/effect/ExplosionEffect.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "mindustry/world/blocks/liquid/LiquidJunction.h"
#include "mindustry/world/blocks/distribution/DuctJunction_DuctJunctionBuild.h"
#include "mindustry/world/blocks/units/UnitAssembler.h"
#include "mindustry/world/draw/DrawSpikes.h"
#include "mindustry/world/blocks/power/VariableReactor_VariableReactorBuild.h"
#include "mindustry/world/blocks/environment/ShallowLiquid.h"
#include "mindustry/world/blocks/heat/HeatConsumer.h"
#include "mindustry/world/blocks/logic/LogicBlock_LogicBuild.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/type/Planet.h"
#include "mindustry/world/blocks/distribution/BufferedItemBridge_BufferedItemBridgeBuild.h"
#include "mindustry/ai/types/PrebuildAI.h"
#include "mindustry/world/consumers/ConsumeItems.h"
#include "mindustry/world/blocks/distribution/ItemBridge.h"
#include "mindustry/world/blocks/power/LightBlock_LightBuild.h"
#include "mindustry/world/blocks/production/SingleBlockProducer_SingleBlockProducerBuild.h"
#include "mindustry/game/Objectives_Research.h"
#include "mindustry/world/blocks/production/SolidPump.h"
#include "mindustry/entities/abilities/LiquidRegenAbility.h"
#include "mindustry/world/blocks/distribution/DirectionLiquidBridge.h"
#include "mindustry/world/blocks/production/AttributeCrafter_AttributeCrafterBuild.h"
#include "mindustry/world/blocks/environment/StaticProp.h"
#include "mindustry/world/blocks/production/ItemIncinerator_ItemIncineratorBuild.h"
#include "mindustry/world/blocks/distribution/Sorter_SorterBuild.h"
#include "mindustry/world/blocks/campaign/LandingPad.h"
#include "mindustry/entities/bullet/FlakBulletType.h"
#include "mindustry/world/blocks/defense/Thruster_ThrusterBuild.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/draw/DrawCells.h"
#include "mindustry/ai/types/NoAI.h"
#include "mindustry/type/Publishable.h"
#include "mindustry/world/blocks/production/ItemIncinerator.h"
#include "mindustry/world/blocks/defense/turrets/LiquidTurret.h"
#include "mindustry/world/blocks/defense/turrets/PowerTurret_PowerTurretBuild.h"
#include "mindustry/world/draw/DrawFlame.h"
#include "mindustry/entities/bullet/PointBulletType.h"
#include "mindustry/ai/types/HugAI.h"
#include "mindustry/world/blocks/logic/MemoryBlock.h"
#include "mindustry/world/blocks/defense/OverdriveProjector.h"
#include "mindustry/game/Objectives_Objective.h"
#include "mindustry/world/blocks/production/HeatCrafter_HeatCrafterBuild.h"
#include "mindustry/world/draw/DrawRegion.h"
#include "mindustry/world/blocks/defense/RegenProjector.h"
#include "mindustry/world/blocks/distribution/Duct_DuctBuild.h"
#include "mindustry/world/blocks/power/BeamNode_BeamNodeBuild.h"
#include "mindustry/world/blocks/payloads/PayloadLoader_PayloadLoaderBuild.h"
#include "mindustry/entities/abilities/StatusFieldAbility.h"
#include "mindustry/world/draw/DrawFade.h"
#include "mindustry/world/blocks/defense/BaseShield.h"
#include "mindustry/world/blocks/defense/Wall_WallBuild.h"
#include "mindustry/world/blocks/distribution/DirectionLiquidBridge_DuctBridgeBuild.h"
#include "mindustry/world/blocks/logic/MessageBlock_MessageBuild.h"
#include "mindustry/world/blocks/liquid/ArmoredConduit_ArmoredConduitBuild.h"
#include "mindustry/world/blocks/distribution/DuctRouter.h"
#include "mindustry/type/Sector.h"
#include "mindustry/world/blocks/environment/StaticTree.h"
#include "mindustry/world/blocks/defense/TargetDummy.h"
#include "mindustry/ai/types/LogicAI.h"
#include "mindustry/game/Objectives_OnPlanet.h"
#include "mindustry/world/blocks/storage/Unloader_ContainerStat.h"
#include "mindustry/world/draw/DrawPulseShape.h"
#include "mindustry/world/blocks/production/Separator_SeparatorBuild.h"
#include "mindustry/world/draw/DrawDefault.h"
#include "mindustry/type/unit/ErekirUnitType.h"
#include "mindustry/type/unit/MissileUnitType.h"
#include "mindustry/type/Weather_WeatherEntry.h"
#include "mindustry/world/consumers/ConsumeItemCharged.h"
#include "mindustry/world/blocks/environment/AirBlock.h"
#include "mindustry/world/blocks/production/BeamDrill_BeamDrillBuild.h"
#include "mindustry/entities/pattern/ShootSine.h"
#include "mindustry/world/blocks/distribution/DirectionBridge_DirectionBridgeBuild.h"
#include "mindustry/world/blocks/distribution/MassDriver.h"
#include "mindustry/world/blocks/environment/SpawnBlock.h"
#include "mindustry/world/draw/DrawPlasma.h"
#include "mindustry/world/blocks/distribution/Router.h"
#include "mindustry/world/draw/DrawBubbles.h"
#include "mindustry/world/blocks/distribution/StackRouter_StackRouterBuild.h"
#include "mindustry/entities/bullet/SapBulletType.h"
#include "mindustry/world/blocks/payloads/PayloadVoid.h"
#include "mindustry/world/blocks/production/Fracker_FrackerBuild.h"
#include "mindustry/entities/bullet/FireBulletType.h"
#include "mindustry/world/blocks/logic/LogicDisplay_GraphicsType.h"
#include "mindustry/world/blocks/sandbox/ItemSource_ItemSourceBuild.h"
#include "mindustry/ai/types/BuilderAI.h"
#include "mindustry/world/blocks/defense/Door.h"
#include "mindustry/world/consumers/ConsumePayloads.h"
#include "mindustry/game/Objectives_Produce.h"
#include "mindustry/world/blocks/distribution/MassDriver_MassDriverBuild.h"
#include "mindustry/type/TeamEntry.h"
#include "mindustry/world/blocks/units/Reconstructor_ReconstructorBuild.h"
#include "mindustry/world/blocks/payloads/PayloadDeconstructor.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver.h"
#include "mindustry/entities/bullet/BombBulletType.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/type/weapons/PointDefenseBulletWeapon.h"
#include "mindustry/world/draw/DrawBlurSpin.h"
#include "mindustry/world/blocks/logic/TileableLogicDisplay_TileableLogicDisplayBuild.h"
#include "mindustry/world/blocks/power/LongPowerNode.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "mindustry/world/blocks/payloads/UnitPayload.h"
#include "mindustry/game/Objectives.h"
#include "mindustry/world/consumers/ConsumeLiquids.h"
#include "mindustry/world/draw/DrawWarmupRegion.h"
#include "mindustry/world/blocks/campaign/LandingPad_LandingPadBuild.h"
#include "mindustry/world/consumers/ConsumeItemEfficiency.h"
#include "mindustry/world/blocks/distribution/OverflowDuct_OverflowDuctBuild.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousTurret_ContinuousTurretBuild.h"
#include "mindustry/world/draw/DrawLiquidOutputs.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/world/blocks/storage/StorageBlock.h"
#include "mindustry/ai/types/MissileAI.h"
#include "mindustry/world/consumers/ConsumePowerCondition.h"
#include "mindustry/world/blocks/production/Incinerator.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/world/blocks/environment/TiledFloor.h"
#include "mindustry/entities/bullet/ExplosionBulletType.h"
#include "mindustry/entities/bullet/BasicBulletType.h"
#include "mindustry/world/blocks/units/UnitFactory.h"
#include "mindustry/world/blocks/Autotiler.h"
#include "mindustry/ai/types/FlyingAI.h"
#include "mindustry/world/blocks/heat/HeatConductor_HeatConductorBuild.h"
#include "mindustry/entities/effect/NoiseEffect.h"
#include "mindustry/world/blocks/campaign/Accelerator.h"
#include "mindustry/world/blocks/sandbox/ItemVoid_ItemVoidBuild.h"
#include "mindustry/entities/effect/MultiEffect.h"
#include "mindustry/world/blocks/production/Separator.h"
#include "mindustry/world/draw/DrawPower.h"
#include "mindustry/world/blocks/payloads/Constructor.h"
#include "mindustry/world/blocks/units/RepairTower.h"
#include "mindustry/world/blocks/defense/AutoDoor_AutoDoorBuild.h"
#include "mindustry/world/consumers/ConsumeLiquidFilter.h"
#include "mindustry/world/blocks/heat/HeatProducer.h"
#include "mindustry/world/blocks/defense/AutoDoor.h"
#include "mindustry/world/blocks/units/RepairTower_RepairTowerBuild.h"
#include "mindustry/world/blocks/payloads/BuildPayload.h"
#include "mindustry/world/blocks/logic/CanvasBlock_CanvasBuild.h"
#include "mindustry/world/blocks/UnitTetherBlock.h"
#include "mindustry/world/blocks/defense/turrets/LiquidTurret_LiquidTurretBuild.h"
#include "mindustry/world/consumers/ConsumeCoolant.h"
#include "mindustry/world/blocks/distribution/DirectionalUnloader.h"
#include "mindustry/entities/abilities/ShieldRegenFieldAbility.h"
#include "mindustry/world/blocks/defense/BuildTurret.h"
#include "mindustry/world/blocks/campaign/LaunchPad_LaunchPadBuild.h"
#include "mindustry/entities/bullet/ContinuousFlameBulletType.h"
#include "mindustry/entities/bullet/ContinuousLaserBulletType.h"
#include "mindustry/world/blocks/units/UnitCargoLoader_UnitTransportSourceBuild.h"
#include "mindustry/world/blocks/power/ThermalGenerator_ThermalGeneratorBuild.h"
#include "mindustry/world/blocks/heat/HeatConductor.h"
#include "java/lang/Object.h"
#include "mindustry/entities/bullet/PointLaserBulletType.h"
#include "mindustry/entities/part/HoverPart.h"
#include "mindustry/world/blocks/environment/SeaBush.h"
#include "mindustry/world/blocks/sandbox/LiquidVoid.h"
#include "mindustry/world/consumers/ConsumeLiquidsDynamic.h"
#include "mindustry/world/draw/DrawWeave.h"
#include "mindustry/world/blocks/power/HeaterGenerator.h"
#include "mindustry/world/blocks/units/UnitCargoUnloadPoint_UnitCargoUnloadPointBuild.h"
#include "mindustry/type/weather/SolarFlare.h"
#include "mindustry/world/blocks/LaunchAnimator.h"
#include "mindustry/world/blocks/payloads/Constructor_ConstructorBuild.h"
#include "mindustry/world/blocks/defense/ForceProjector_ForceBuild.h"
#include "mindustry/world/blocks/distribution/DirectionBridge.h"
#include "mindustry/world/blocks/power/NuclearReactor_NuclearReactorBuild.h"
#include "mindustry/world/blocks/sandbox/PowerSource.h"
#include "mindustry/entities/effect/RadialEffect.h"
#include "mindustry/world/blocks/payloads/PayloadRouter_PayloadRouterBuild.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "mindustry/world/blocks/units/UnitCargoLoader.h"
#include "mindustry/type/ErrorContent.h"
#include "mindustry/world/blocks/power/ImpactReactor.h"
#include "mindustry/entities/pattern/ShootSummon.h"
#include "mindustry/world/blocks/production/BurstDrill.h"
#include "mindustry/world/blocks/defense/Radar.h"
#include "mindustry/world/blocks/units/UnitAssembler_YeetData.h"
#include "mindustry/world/consumers/ConsumeItemFilter.h"
#include "mindustry/entities/abilities/RegenAbility.h"
#include "mindustry/world/blocks/defense/ShockwaveTower.h"
#include "mindustry/entities/effect/WrapEffect.h"
#include "mindustry/world/blocks/defense/turrets/Turret_TurretBuild.h"
#include "mindustry/world/blocks/defense/turrets/TractorBeamTurret.h"
#include "mindustry/world/blocks/payloads/PayloadVoid_PayloadVoidBuild.h"
#include "mindustry/world/blocks/distribution/DuctBridge.h"
#include "mindustry/entities/effect/SeqEffect.h"
#include "mindustry/world/draw/DrawPumpLiquid.h"
#include "mindustry/world/blocks/defense/turrets/BaseTurret.h"
#include "mindustry/world/blocks/environment/CharacterOverlay.h"
#include "mindustry/world/blocks/payloads/PayloadConveyor_PayloadConveyorBuild.h"
#include "mindustry/entities/bullet/SpaceLiquidBulletType.h"
#include "mindustry/world/blocks/distribution/Junction.h"
#include "mindustry/world/blocks/defense/turrets/PayloadAmmoTurret_PayloadTurretBuild.h"
#include "mindustry/entities/abilities/ForceFieldAbility.h"
#include "mindustry/world/blocks/liquid/LiquidBridge_LiquidBridgeBuild.h"
#include "mindustry/world/blocks/distribution/OverflowGate.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitPlan.h"
#include "mindustry/world/consumers/ConsumeLiquid.h"
#include "mindustry/world/blocks/environment/RuneOverlay.h"
#include "mindustry/world/blocks/distribution/OverflowDuct.h"
#include "mindustry/entities/effect/WaveEffect.h"
#include "mindustry/world/blocks/defense/ForceProjector.h"
#include "mindustry/entities/part/DrawPart_PartMove.h"
#include "mindustry/world/blocks/defense/ShieldWall.h"
#include "mindustry/world/blocks/sandbox/PowerSource_PowerSourceBuild.h"
#include "mindustry/entities/effect/TriangleEffect.h"
#include "mindustry/world/blocks/production/WallCrafter_WallCrafterBuild.h"
#include "mindustry/type/Planet_PlanetData.h"
#include "mindustry/world/draw/DrawMulti.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_ItemTurretBuild.h"
#include "mindustry/world/draw/DrawBlockParts.h"
#include "mindustry/type/SectorDifficulty.h"
#include "mindustry/world/blocks/liquid/LiquidBlock_LiquidBuild.h"
#include "mindustry/world/blocks/production/HeatCrafter.h"
#include "mindustry/world/draw/DrawSoftParticles.h"
#include "mindustry/world/blocks/sandbox/ItemSource.h"
#include "mindustry/world/blocks/Autotiler_SliceMode.h"
#include "mindustry/world/blocks/defense/Door_DoorBuild.h"
#include "mindustry/world/blocks/defense/turrets/PointDefenseTurret.h"
#include "mindustry/world/blocks/environment/StaticWall.h"
#include "mindustry/world/blocks/liquid/Conduit_ConduitBuild.h"
#include "mindustry/world/blocks/defense/turrets/BaseTurret_BaseTurretBuild.h"
#include "mindustry/world/consumers/ConsumeItemExplode.h"
#include "mindustry/entities/bullet/ArtilleryBulletType.h"
#include "mindustry/world/blocks/environment/ColoredFloor.h"
#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "mindustry/world/blocks/RotBlock.h"
#include "mindustry/world/blocks/defense/turrets/PowerTurret.h"
#include "mindustry/world/blocks/distribution/OverflowGate_OverflowGateBuild.h"
#include "mindustry/world/blocks/power/PowerDiode.h"
#include "mindustry/world/blocks/TileBitmask.h"
#include "mindustry/world/blocks/liquid/LiquidJunction_LiquidJunctionBuild.h"
#include "mindustry/world/draw/DrawParticles.h"
#include "mindustry/world/blocks/power/SolarGenerator_SolarGeneratorBuild.h"
#include "mindustry/world/blocks/defense/OverdriveProjector_OverdriveBuild.h"
#include "mindustry/ai/types/BoostAI.h"
#include "mindustry/type/Weather.h"
#include "mindustry/type/unit/NeoplasmUnitType.h"
#include "mindustry/world/blocks/distribution/ChainedBuilding.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret_ContinuousLiquidTurretBuild.h"
#include "mindustry/world/blocks/sandbox/LiquidSource_LiquidSourceBuild.h"
#include "mindustry/world/blocks/production/SolidPump_SolidPumpBuild.h"
#include "mindustry/world/blocks/production/Incinerator_IncineratorBuild.h"
#include "mindustry/type/weapons/MineWeapon.h"
#include "mindustry/world/blocks/payloads/PayloadBlock_PayloadBlockBuild.h"
#include "mindustry/ai/types/SuicideAI.h"
#include "mindustry/type/Category.h"
#include "mindustry/world/draw/DrawHeatOutput.h"
#include "mindustry/world/blocks/logic/MemoryBlock_MemoryBuild.h"
#include "mindustry/world/blocks/environment/WobbleProp.h"
#include "mindustry/world/blocks/payloads/PayloadLoader.h"
#include "mindustry/world/blocks/power/Battery.h"
#include "mindustry/world/blocks/defense/Radar_RadarBuild.h"
#include "mindustry/world/blocks/production/Pump_PumpBuild.h"
#include "mindustry/world/blocks/production/GenericCrafter.h"
#include "mindustry/mod/ClassMap.h"
#include "mindustry/world/blocks/defense/ShockwaveTower_ShockwaveTowerBuild.h"
#include "mindustry/world/blocks/power/SolarGenerator.h"
#include "mindustry/world/blocks/units/UnitBlock_UnitBuild.h"
#include "mindustry/world/consumers/ConsumeItemDynamic.h"
#include "mindustry/world/blocks/environment/Floor_UpdateRenderState.h"
#include "mindustry/world/consumers/ConsumePayloadFilter.h"
#include "mindustry/ai/types/RepairAI.h"
#include "mindustry/world/blocks/power/PowerGenerator_GeneratorBuild.h"
#include "mindustry/entities/effect/ParticleEffect.h"
#include "mindustry/world/blocks/environment/SteamVent.h"
#include "mindustry/entities/part/ShapePart.h"
#include "mindustry/world/blocks/defense/turrets/PayloadAmmoTurret.h"
#include "mindustry/world/draw/DrawTurret.h"
#include "mindustry/world/blocks/production/Fracker.h"
#include "mindustry/world/blocks/defense/ShockMine_ShockMineBuild.h"
#include "mindustry/world/blocks/sandbox/LiquidSource.h"
#include "mindustry/world/consumers/ConsumeLiquidBase.h"
#include "mindustry/world/blocks/defense/turrets/LaserTurret.h"
#include "mindustry/world/blocks/environment/TiledWall.h"
#include "mindustry/world/blocks/environment/EmptyFloor.h"
#include "mindustry/world/blocks/logic/CanvasBlock.h"
#include "mindustry/world/blocks/power/PowerDiode_PowerDiodeBuild.h"
#include "mindustry/entities/bullet/MassDriverBolt.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/entities/part/FlarePart.h"
#include "mindustry/world/blocks/payloads/PayloadSource.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/entities/effect/SoundEffect.h"
#include "mindustry/world/blocks/ExplosionShield.h"
#include "mindustry/world/blocks/distribution/MassDriver_DriverState.h"
#include "mindustry/world/consumers/ConsumeItemList.h"
#include "mindustry/world/blocks/defense/Wall.h"
#include "mindustry/world/blocks/power/LightBlock.h"
#include "mindustry/world/consumers/ConsumePowerDynamic.h"
#include "mindustry/world/blocks/distribution/StackConveyor_StackConveyorBuild.h"
#include "mindustry/entities/abilities/MoveLightningAbility.h"
#include "mindustry/world/blocks/payloads/PayloadSource_PayloadSourceBuild.h"
#include "mindustry/world/blocks/production/Pump.h"
#include "mindustry/world/blocks/units/RepairTurret_RepairPointBuild.h"
#include "mindustry/type/PayloadStack.h"
#include "mindustry/world/blocks/units/UnitAssemblerModule.h"
#include "mindustry/world/blocks/distribution/DirectionalUnloader_DirectionalUnloaderBuild.h"
#include "mindustry/world/consumers/ConsumeItemFlammable.h"
#include "mindustry/world/blocks/environment/RemoveOre.h"
#include "mindustry/ai/types/MinerAI.h"
#include "mindustry/world/blocks/defense/BaseShield_BaseShieldBuild.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadMassDriverData.h"
#include "mindustry/world/blocks/payloads/PayloadMassDriver_PayloadDriverBuild.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "mindustry/world/blocks/defense/RegenProjector_RegenProjectorBuild.h"
#include "mindustry/world/draw/DrawLiquidTile.h"
#include "mindustry/world/blocks/distribution/Conveyor.h"
#include "mindustry/world/blocks/payloads/PayloadDeconstructor_PayloadDeconstructorBuild.h"
#include "mindustry/entities/bullet/EmpBulletType.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/world/blocks/power/Battery_BatteryBuild.h"
#include "mindustry/world/blocks/defense/BuildTurret_BuildTurretBuild.h"
#include "mindustry/world/blocks/defense/turrets/ReloadTurret.h"
#include "mindustry/world/blocks/power/BeamNode.h"
#include "mindustry/world/draw/DrawFrames.h"
#include "mindustry/world/blocks/distribution/MassDriver_DriverBulletData.h"
#include "mindustry/world/blocks/distribution/DuctBridge_DuctBridgeBuild.h"
#include "mindustry/world/blocks/distribution/Router_RouterBuild.h"
#include "mindustry/world/blocks/production/SingleBlockProducer.h"
#include "mindustry/entities/bullet/ShrapnelBulletType.h"
#include "mindustry/type/MapLocales.h"
#include "mindustry/type/weather/RainWeather.h"
#include "mindustry/entities/bullet/LightningBulletType.h"
#include "mindustry/ai/types/FlyingFollowAI.h"
#include "mindustry/world/draw/DrawSideRegion.h"
#include "mindustry/world/consumers/ConsumeItemExplosive.h"
#include "mindustry/world/blocks/power/ThermalGenerator.h"
#include "mindustry/world/blocks/units/UnitAssembler_UnitAssemblerBuild.h"
#include "mindustry/entities/part/DrawPart_PartFunc.h"
#include "mindustry/world/blocks/defense/MendProjector.h"
#include "mindustry/world/blocks/campaign/LaunchPad.h"
#include "mindustry/world/blocks/logic/LogicDisplay.h"
#include "mindustry/type/weather/ParticleWeather.h"
#include "mindustry/world/blocks/storage/Unloader_UnloaderBuild.h"
#include "mindustry/entities/abilities/MoveEffectAbility.h"
#include "mindustry/entities/bullet/LiquidBulletType.h"
#include "mindustry/world/blocks/distribution/DuctJunction.h"
#include "mindustry/world/blocks/environment/RemoveWall.h"
#include "mindustry/world/blocks/power/ConsumeGenerator_ConsumeGeneratorBuild.h"
#include "mindustry/entities/pattern/ShootHelix.h"
#include "mindustry/world/blocks/power/VariableReactor.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/blocks/defense/turrets/PointDefenseTurret_PointDefenseBuild.h"
#include "mindustry/ai/types/AssemblerAI.h"
#include "mindustry/world/blocks/power/PowerGenerator.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret.h"
#include "mindustry/entities/pattern/ShootBarrel.h"
#include "mindustry/entities/abilities/EnergyFieldAbility.h"
#include "mindustry/world/blocks/power/PowerNode.h"
#include "mindustry/world/blocks/liquid/LiquidBlock.h"
#include "mindustry/type/StatusEffect_TransitionHandler.h"
#include "mindustry/world/blocks/environment/Prop.h"
#include "mindustry/entities/abilities/SuppressionFieldAbility.h"
#include "mindustry/type/weapons/RepairBeamWeapon_HealBeamMount.h"
#include "mindustry/world/blocks/sandbox/LiquidVoid_LiquidVoidBuild.h"
#include "mindustry/world/blocks/storage/Unloader.h"
#include "mindustry/world/blocks/units/UnitAssemblerModule_UnitAssemblerModuleBuild.h"
#include "mindustry/world/blocks/power/HeaterGenerator_HeaterGeneratorBuild.h"
#include "mindustry/world/blocks/production/AttributeCrafter.h"
#include "mindustry/world/blocks/liquid/Conduit.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret_ItemEntry.h"
#include "mindustry/world/blocks/heat/HeatBlock.h"
#include "mindustry/world/blocks/heat/HeatProducer_HeatProducerBuild.h"
#include "mindustry/entities/bullet/InterceptorBulletType.h"
#include "mindustry/world/blocks/Autotiler_AutotilerHolder.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/world/blocks/distribution/DuctRouter_DuctRouterBuild.h"
#include "mindustry/world/blocks/environment/TallBlock.h"
#include "mindustry/world/blocks/defense/turrets/ReloadTurret_ReloadTurretBuild.h"
#include "mindustry/type/PayloadSeq.h"
#include "mindustry/world/blocks/units/UnitAssembler_AssemblerUnitPlan.h"
#include "mindustry/world/blocks/power/ImpactReactor_ImpactReactorBuild.h"
#include "mindustry/world/blocks/units/UnitCargoUnloadPoint.h"
#include "mindustry/game/Objectives_OnSector.h"
#include "mindustry/world/blocks/power/NuclearReactor.h"
#include "mindustry/entities/bullet/RailBulletType.h"
#include "mindustry/entities/part/DrawPart.h"
#include "mindustry/type/weapons/BuildWeapon.h"
#include "mindustry/world/blocks/campaign/Accelerator_AcceleratorBuild.h"
#include "mindustry/world/draw/DrawCrucibleFlame.h"
#include "mindustry/entities/pattern/ShootSpread.h"
#include "mindustry/world/consumers/ConsumeItemRadioactive.h"
#include "mindustry/ai/types/CargoAI.h"
#include "mindustry/entities/abilities/UnitSpawnAbility.h"
#include "mindustry/game/Objectives_SectorComplete.h"

extern "C" {

jobject SF_mindustry_mod_ClassMap_classes;

void mark_mindustry_mod_ClassMap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_ClassMap_classes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_ClassMap_classes)->clazz)->markFunction)((jobject) SF_mindustry_mod_ClassMap_classes, mark, depth + 1);
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
	auto self = (mindustry_mod_ClassMap *) object;
}

void init_mindustry_mod_ClassMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ClassMap:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ClassMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_mod_ClassMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ClassMap:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ClassMap(ctx);
	{
	LINE_NUMBER(7);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_mod_ClassMap(ctx);
	SF_mindustry_mod_ClassMap_classes = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AssemblerAI"_j))), (((jobject) &class_mindustry_ai_types_AssemblerAI)));
	LINE_NUMBER(11);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BoostAI"_j))), (((jobject) &class_mindustry_ai_types_BoostAI)));
	LINE_NUMBER(12);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BuilderAI"_j))), (((jobject) &class_mindustry_ai_types_BuilderAI)));
	LINE_NUMBER(13);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CargoAI"_j))), (((jobject) &class_mindustry_ai_types_CargoAI)));
	LINE_NUMBER(14);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CommandAI"_j))), (((jobject) &class_mindustry_ai_types_CommandAI)));
	LINE_NUMBER(15);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DefenderAI"_j))), (((jobject) &class_mindustry_ai_types_DefenderAI)));
	LINE_NUMBER(16);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FlyingAI"_j))), (((jobject) &class_mindustry_ai_types_FlyingAI)));
	LINE_NUMBER(17);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FlyingFollowAI"_j))), (((jobject) &class_mindustry_ai_types_FlyingFollowAI)));
	LINE_NUMBER(18);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GroundAI"_j))), (((jobject) &class_mindustry_ai_types_GroundAI)));
	LINE_NUMBER(19);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HugAI"_j))), (((jobject) &class_mindustry_ai_types_HugAI)));
	LINE_NUMBER(20);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LogicAI"_j))), (((jobject) &class_mindustry_ai_types_LogicAI)));
	LINE_NUMBER(21);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MinerAI"_j))), (((jobject) &class_mindustry_ai_types_MinerAI)));
	LINE_NUMBER(22);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MissileAI"_j))), (((jobject) &class_mindustry_ai_types_MissileAI)));
	LINE_NUMBER(23);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NoAI"_j))), (((jobject) &class_mindustry_ai_types_NoAI)));
	LINE_NUMBER(24);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PrebuildAI"_j))), (((jobject) &class_mindustry_ai_types_PrebuildAI)));
	LINE_NUMBER(25);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RepairAI"_j))), (((jobject) &class_mindustry_ai_types_RepairAI)));
	LINE_NUMBER(26);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SuicideAI"_j))), (((jobject) &class_mindustry_ai_types_SuicideAI)));
	LINE_NUMBER(27);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Ability"_j))), (((jobject) &class_mindustry_entities_abilities_Ability)));
	LINE_NUMBER(28);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ArmorPlateAbility"_j))), (((jobject) &class_mindustry_entities_abilities_ArmorPlateAbility)));
	LINE_NUMBER(29);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"EmptyDataAbility"_j))), (((jobject) &class_mindustry_entities_abilities_EmptyDataAbility)));
	LINE_NUMBER(30);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"EnergyFieldAbility"_j))), (((jobject) &class_mindustry_entities_abilities_EnergyFieldAbility)));
	LINE_NUMBER(31);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ForceFieldAbility"_j))), (((jobject) &class_mindustry_entities_abilities_ForceFieldAbility)));
	LINE_NUMBER(32);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidExplodeAbility"_j))), (((jobject) &class_mindustry_entities_abilities_LiquidExplodeAbility)));
	LINE_NUMBER(33);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidRegenAbility"_j))), (((jobject) &class_mindustry_entities_abilities_LiquidRegenAbility)));
	LINE_NUMBER(34);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MoveEffectAbility"_j))), (((jobject) &class_mindustry_entities_abilities_MoveEffectAbility)));
	LINE_NUMBER(35);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MoveLightningAbility"_j))), (((jobject) &class_mindustry_entities_abilities_MoveLightningAbility)));
	LINE_NUMBER(36);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RegenAbility"_j))), (((jobject) &class_mindustry_entities_abilities_RegenAbility)));
	LINE_NUMBER(37);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RepairFieldAbility"_j))), (((jobject) &class_mindustry_entities_abilities_RepairFieldAbility)));
	LINE_NUMBER(38);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShieldArcAbility"_j))), (((jobject) &class_mindustry_entities_abilities_ShieldArcAbility)));
	LINE_NUMBER(39);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShieldRegenFieldAbility"_j))), (((jobject) &class_mindustry_entities_abilities_ShieldRegenFieldAbility)));
	LINE_NUMBER(40);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpawnDeathAbility"_j))), (((jobject) &class_mindustry_entities_abilities_SpawnDeathAbility)));
	LINE_NUMBER(41);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StatusFieldAbility"_j))), (((jobject) &class_mindustry_entities_abilities_StatusFieldAbility)));
	LINE_NUMBER(42);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SuppressionFieldAbility"_j))), (((jobject) &class_mindustry_entities_abilities_SuppressionFieldAbility)));
	LINE_NUMBER(43);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitSpawnAbility"_j))), (((jobject) &class_mindustry_entities_abilities_UnitSpawnAbility)));
	LINE_NUMBER(44);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ArtilleryBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_ArtilleryBulletType)));
	LINE_NUMBER(45);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BasicBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_BasicBulletType)));
	LINE_NUMBER(46);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BombBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_BombBulletType)));
	LINE_NUMBER(47);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BulletType"_j))), (((jobject) &class_mindustry_entities_bullet_BulletType)));
	LINE_NUMBER(48);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ContinuousBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_ContinuousBulletType)));
	LINE_NUMBER(49);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ContinuousFlameBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_ContinuousFlameBulletType)));
	LINE_NUMBER(50);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ContinuousLaserBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_ContinuousLaserBulletType)));
	LINE_NUMBER(51);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"EmpBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_EmpBulletType)));
	LINE_NUMBER(52);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"EmptyBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_EmptyBulletType)));
	LINE_NUMBER(53);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ExplosionBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_ExplosionBulletType)));
	LINE_NUMBER(54);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FireBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_FireBulletType)));
	LINE_NUMBER(55);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FlakBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_FlakBulletType)));
	LINE_NUMBER(56);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"InterceptorBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_InterceptorBulletType)));
	LINE_NUMBER(57);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LaserBoltBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_LaserBoltBulletType)));
	LINE_NUMBER(58);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LaserBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_LaserBulletType)));
	LINE_NUMBER(59);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LightningBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_LightningBulletType)));
	LINE_NUMBER(60);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_LiquidBulletType)));
	LINE_NUMBER(61);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MassDriverBolt"_j))), (((jobject) &class_mindustry_entities_bullet_MassDriverBolt)));
	LINE_NUMBER(62);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MissileBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_MissileBulletType)));
	LINE_NUMBER(63);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MultiBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_MultiBulletType)));
	LINE_NUMBER(64);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PointBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_PointBulletType)));
	LINE_NUMBER(65);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PointLaserBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_PointLaserBulletType)));
	LINE_NUMBER(66);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RailBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_RailBulletType)));
	LINE_NUMBER(67);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SapBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_SapBulletType)));
	LINE_NUMBER(68);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShrapnelBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_ShrapnelBulletType)));
	LINE_NUMBER(69);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpaceLiquidBulletType"_j))), (((jobject) &class_mindustry_entities_bullet_SpaceLiquidBulletType)));
	LINE_NUMBER(70);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ExplosionEffect"_j))), (((jobject) &class_mindustry_entities_effect_ExplosionEffect)));
	LINE_NUMBER(71);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MultiEffect"_j))), (((jobject) &class_mindustry_entities_effect_MultiEffect)));
	LINE_NUMBER(72);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NoiseEffect"_j))), (((jobject) &class_mindustry_entities_effect_NoiseEffect)));
	LINE_NUMBER(73);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ParticleEffect"_j))), (((jobject) &class_mindustry_entities_effect_ParticleEffect)));
	LINE_NUMBER(74);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RadialEffect"_j))), (((jobject) &class_mindustry_entities_effect_RadialEffect)));
	LINE_NUMBER(75);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SeqEffect"_j))), (((jobject) &class_mindustry_entities_effect_SeqEffect)));
	LINE_NUMBER(76);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SoundEffect"_j))), (((jobject) &class_mindustry_entities_effect_SoundEffect)));
	LINE_NUMBER(77);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TriangleEffect"_j))), (((jobject) &class_mindustry_entities_effect_TriangleEffect)));
	LINE_NUMBER(78);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WaveEffect"_j))), (((jobject) &class_mindustry_entities_effect_WaveEffect)));
	LINE_NUMBER(79);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WrapEffect"_j))), (((jobject) &class_mindustry_entities_effect_WrapEffect)));
	LINE_NUMBER(80);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawPart"_j))), (((jobject) &class_mindustry_entities_part_DrawPart)));
	LINE_NUMBER(81);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PartFunc"_j))), (((jobject) &class_mindustry_entities_part_DrawPart$PartFunc)));
	LINE_NUMBER(82);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PartMove"_j))), (((jobject) &class_mindustry_entities_part_DrawPart$PartMove)));
	LINE_NUMBER(83);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PartParams"_j))), (((jobject) &class_mindustry_entities_part_DrawPart$PartParams)));
	LINE_NUMBER(84);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PartProgress"_j))), (((jobject) &class_mindustry_entities_part_DrawPart$PartProgress)));
	LINE_NUMBER(85);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"EffectSpawnerPart"_j))), (((jobject) &class_mindustry_entities_part_EffectSpawnerPart)));
	LINE_NUMBER(86);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FlarePart"_j))), (((jobject) &class_mindustry_entities_part_FlarePart)));
	LINE_NUMBER(87);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HaloPart"_j))), (((jobject) &class_mindustry_entities_part_HaloPart)));
	LINE_NUMBER(88);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HoverPart"_j))), (((jobject) &class_mindustry_entities_part_HoverPart)));
	LINE_NUMBER(89);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RegionPart"_j))), (((jobject) &class_mindustry_entities_part_RegionPart)));
	LINE_NUMBER(90);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShapePart"_j))), (((jobject) &class_mindustry_entities_part_ShapePart)));
	LINE_NUMBER(91);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShootAlternate"_j))), (((jobject) &class_mindustry_entities_pattern_ShootAlternate)));
	LINE_NUMBER(92);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShootBarrel"_j))), (((jobject) &class_mindustry_entities_pattern_ShootBarrel)));
	LINE_NUMBER(93);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShootHelix"_j))), (((jobject) &class_mindustry_entities_pattern_ShootHelix)));
	LINE_NUMBER(94);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShootMulti"_j))), (((jobject) &class_mindustry_entities_pattern_ShootMulti)));
	LINE_NUMBER(95);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShootPattern"_j))), (((jobject) &class_mindustry_entities_pattern_ShootPattern)));
	LINE_NUMBER(96);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BulletHandler"_j))), (((jobject) &class_mindustry_entities_pattern_ShootPattern$BulletHandler)));
	LINE_NUMBER(97);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShootSine"_j))), (((jobject) &class_mindustry_entities_pattern_ShootSine)));
	LINE_NUMBER(98);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShootSpread"_j))), (((jobject) &class_mindustry_entities_pattern_ShootSpread)));
	LINE_NUMBER(99);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShootSummon"_j))), (((jobject) &class_mindustry_entities_pattern_ShootSummon)));
	LINE_NUMBER(100);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Objectives"_j))), (((jobject) &class_mindustry_game_Objectives)));
	LINE_NUMBER(101);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Objective"_j))), (((jobject) &class_mindustry_game_Objectives$Objective)));
	LINE_NUMBER(102);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OnPlanet"_j))), (((jobject) &class_mindustry_game_Objectives$OnPlanet)));
	LINE_NUMBER(103);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OnSector"_j))), (((jobject) &class_mindustry_game_Objectives$OnSector)));
	LINE_NUMBER(104);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Produce"_j))), (((jobject) &class_mindustry_game_Objectives$Produce)));
	LINE_NUMBER(105);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Research"_j))), (((jobject) &class_mindustry_game_Objectives$Research)));
	LINE_NUMBER(106);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SectorComplete"_j))), (((jobject) &class_mindustry_game_Objectives$SectorComplete)));
	LINE_NUMBER(107);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Category"_j))), (((jobject) &class_mindustry_type_Category)));
	LINE_NUMBER(108);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CellLiquid"_j))), (((jobject) &class_mindustry_type_CellLiquid)));
	LINE_NUMBER(109);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ErrorContent"_j))), (((jobject) &class_mindustry_type_ErrorContent)));
	LINE_NUMBER(110);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Item"_j))), (((jobject) &class_mindustry_type_Item)));
	LINE_NUMBER(111);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemSeq"_j))), (((jobject) &class_mindustry_type_ItemSeq)));
	LINE_NUMBER(112);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemStack"_j))), (((jobject) &class_mindustry_type_ItemStack)));
	LINE_NUMBER(113);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Liquid"_j))), (((jobject) &class_mindustry_type_Liquid)));
	LINE_NUMBER(114);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidStack"_j))), (((jobject) &class_mindustry_type_LiquidStack)));
	LINE_NUMBER(115);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MapLocales"_j))), (((jobject) &class_mindustry_type_MapLocales)));
	LINE_NUMBER(116);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadSeq"_j))), (((jobject) &class_mindustry_type_PayloadSeq)));
	LINE_NUMBER(117);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadStack"_j))), (((jobject) &class_mindustry_type_PayloadStack)));
	LINE_NUMBER(118);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Planet"_j))), (((jobject) &class_mindustry_type_Planet)));
	LINE_NUMBER(119);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PlanetData"_j))), (((jobject) &class_mindustry_type_Planet$PlanetData)));
	LINE_NUMBER(120);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Publishable"_j))), (((jobject) &class_mindustry_type_Publishable)));
	LINE_NUMBER(121);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Sector"_j))), (((jobject) &class_mindustry_type_Sector)));
	LINE_NUMBER(122);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SectorRect"_j))), (((jobject) &class_mindustry_type_Sector$SectorRect)));
	LINE_NUMBER(123);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SectorDifficulty"_j))), (((jobject) &class_mindustry_type_SectorDifficulty)));
	LINE_NUMBER(124);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SectorPreset"_j))), (((jobject) &class_mindustry_type_SectorPreset)));
	LINE_NUMBER(125);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StatusEffect"_j))), (((jobject) &class_mindustry_type_StatusEffect)));
	LINE_NUMBER(126);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TransitionHandler"_j))), (((jobject) &class_mindustry_type_StatusEffect$TransitionHandler)));
	LINE_NUMBER(127);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TeamEntry"_j))), (((jobject) &class_mindustry_type_TeamEntry)));
	LINE_NUMBER(128);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitType"_j))), (((jobject) &class_mindustry_type_UnitType)));
	LINE_NUMBER(129);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitEngine"_j))), (((jobject) &class_mindustry_type_UnitType$UnitEngine)));
	LINE_NUMBER(130);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Weapon"_j))), (((jobject) &class_mindustry_type_Weapon)));
	LINE_NUMBER(131);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Weather"_j))), (((jobject) &class_mindustry_type_Weather)));
	LINE_NUMBER(132);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WeatherEntry"_j))), (((jobject) &class_mindustry_type_Weather$WeatherEntry)));
	LINE_NUMBER(133);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ErekirUnitType"_j))), (((jobject) &class_mindustry_type_unit_ErekirUnitType)));
	LINE_NUMBER(134);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MissileUnitType"_j))), (((jobject) &class_mindustry_type_unit_MissileUnitType)));
	LINE_NUMBER(135);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NeoplasmUnitType"_j))), (((jobject) &class_mindustry_type_unit_NeoplasmUnitType)));
	LINE_NUMBER(136);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TankUnitType"_j))), (((jobject) &class_mindustry_type_unit_TankUnitType)));
	LINE_NUMBER(137);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BuildWeapon"_j))), (((jobject) &class_mindustry_type_weapons_BuildWeapon)));
	LINE_NUMBER(138);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MineWeapon"_j))), (((jobject) &class_mindustry_type_weapons_MineWeapon)));
	LINE_NUMBER(139);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PointDefenseBulletWeapon"_j))), (((jobject) &class_mindustry_type_weapons_PointDefenseBulletWeapon)));
	LINE_NUMBER(140);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PointDefenseWeapon"_j))), (((jobject) &class_mindustry_type_weapons_PointDefenseWeapon)));
	LINE_NUMBER(141);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RepairBeamWeapon"_j))), (((jobject) &class_mindustry_type_weapons_RepairBeamWeapon)));
	LINE_NUMBER(142);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HealBeamMount"_j))), (((jobject) &class_mindustry_type_weapons_RepairBeamWeapon$HealBeamMount)));
	LINE_NUMBER(143);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MagneticStorm"_j))), (((jobject) &class_mindustry_type_weather_MagneticStorm)));
	LINE_NUMBER(144);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ParticleWeather"_j))), (((jobject) &class_mindustry_type_weather_ParticleWeather)));
	LINE_NUMBER(145);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RainWeather"_j))), (((jobject) &class_mindustry_type_weather_RainWeather)));
	LINE_NUMBER(146);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SolarFlare"_j))), (((jobject) &class_mindustry_type_weather_SolarFlare)));
	LINE_NUMBER(147);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Attributes"_j))), (((jobject) &class_mindustry_world_blocks_Attributes)));
	LINE_NUMBER(148);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Autotiler"_j))), (((jobject) &class_mindustry_world_blocks_Autotiler)));
	LINE_NUMBER(149);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AutotilerHolder"_j))), (((jobject) &class_mindustry_world_blocks_Autotiler$AutotilerHolder)));
	LINE_NUMBER(150);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SliceMode"_j))), (((jobject) &class_mindustry_world_blocks_Autotiler$SliceMode)));
	LINE_NUMBER(151);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConstructBlock"_j))), (((jobject) &class_mindustry_world_blocks_ConstructBlock)));
	LINE_NUMBER(152);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConstructBuild"_j))), (((jobject) &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)));
	LINE_NUMBER(153);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ControlBlock"_j))), (((jobject) &class_mindustry_world_blocks_ControlBlock)));
	LINE_NUMBER(154);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ExplosionShield"_j))), (((jobject) &class_mindustry_world_blocks_ExplosionShield)));
	LINE_NUMBER(155);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemSelection"_j))), (((jobject) &class_mindustry_world_blocks_ItemSelection)));
	LINE_NUMBER(156);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LaunchAnimator"_j))), (((jobject) &class_mindustry_world_blocks_LaunchAnimator)));
	LINE_NUMBER(157);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RotBlock"_j))), (((jobject) &class_mindustry_world_blocks_RotBlock)));
	LINE_NUMBER(158);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TileBitmask"_j))), (((jobject) &class_mindustry_world_blocks_TileBitmask)));
	LINE_NUMBER(159);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitTetherBlock"_j))), (((jobject) &class_mindustry_world_blocks_UnitTetherBlock)));
	LINE_NUMBER(160);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Accelerator"_j))), (((jobject) &class_mindustry_world_blocks_campaign_Accelerator)));
	LINE_NUMBER(161);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AcceleratorBuild"_j))), (((jobject) &class_mindustry_world_blocks_campaign_Accelerator$AcceleratorBuild)));
	LINE_NUMBER(162);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LandingPad"_j))), (((jobject) &class_mindustry_world_blocks_campaign_LandingPad)));
	LINE_NUMBER(163);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LandingPadBuild"_j))), (((jobject) &class_mindustry_world_blocks_campaign_LandingPad$LandingPadBuild)));
	LINE_NUMBER(164);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LaunchPad"_j))), (((jobject) &class_mindustry_world_blocks_campaign_LaunchPad)));
	LINE_NUMBER(165);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LaunchPadBuild"_j))), (((jobject) &class_mindustry_world_blocks_campaign_LaunchPad$LaunchPadBuild)));
	LINE_NUMBER(166);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AutoDoor"_j))), (((jobject) &class_mindustry_world_blocks_defense_AutoDoor)));
	LINE_NUMBER(167);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AutoDoorBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_AutoDoor$AutoDoorBuild)));
	LINE_NUMBER(168);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BaseShield"_j))), (((jobject) &class_mindustry_world_blocks_defense_BaseShield)));
	LINE_NUMBER(169);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BaseShieldBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_BaseShield$BaseShieldBuild)));
	LINE_NUMBER(170);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BuildTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_BuildTurret)));
	LINE_NUMBER(171);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BuildTurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_BuildTurret$BuildTurretBuild)));
	LINE_NUMBER(172);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Door"_j))), (((jobject) &class_mindustry_world_blocks_defense_Door)));
	LINE_NUMBER(173);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DoorBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_Door$DoorBuild)));
	LINE_NUMBER(174);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ForceProjector"_j))), (((jobject) &class_mindustry_world_blocks_defense_ForceProjector)));
	LINE_NUMBER(175);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ForceBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_ForceProjector$ForceBuild)));
	LINE_NUMBER(176);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MendProjector"_j))), (((jobject) &class_mindustry_world_blocks_defense_MendProjector)));
	LINE_NUMBER(177);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MendBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_MendProjector$MendBuild)));
	LINE_NUMBER(178);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OverdriveProjector"_j))), (((jobject) &class_mindustry_world_blocks_defense_OverdriveProjector)));
	LINE_NUMBER(179);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OverdriveBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_OverdriveProjector$OverdriveBuild)));
	LINE_NUMBER(180);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Radar"_j))), (((jobject) &class_mindustry_world_blocks_defense_Radar)));
	LINE_NUMBER(181);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RadarBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_Radar$RadarBuild)));
	LINE_NUMBER(182);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RegenProjector"_j))), (((jobject) &class_mindustry_world_blocks_defense_RegenProjector)));
	LINE_NUMBER(183);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RegenProjectorBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_RegenProjector$RegenProjectorBuild)));
	LINE_NUMBER(184);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShieldWall"_j))), (((jobject) &class_mindustry_world_blocks_defense_ShieldWall)));
	LINE_NUMBER(185);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShieldWallBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_ShieldWall$ShieldWallBuild)));
	LINE_NUMBER(186);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShockMine"_j))), (((jobject) &class_mindustry_world_blocks_defense_ShockMine)));
	LINE_NUMBER(187);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShockMineBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_ShockMine$ShockMineBuild)));
	LINE_NUMBER(188);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShockwaveTower"_j))), (((jobject) &class_mindustry_world_blocks_defense_ShockwaveTower)));
	LINE_NUMBER(189);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShockwaveTowerBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_ShockwaveTower$ShockwaveTowerBuild)));
	LINE_NUMBER(190);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TargetDummy"_j))), (((jobject) &class_mindustry_world_blocks_defense_TargetDummy)));
	LINE_NUMBER(191);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TargetDummyBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_TargetDummy$TargetDummyBuild)));
	LINE_NUMBER(192);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Thruster"_j))), (((jobject) &class_mindustry_world_blocks_defense_Thruster)));
	LINE_NUMBER(193);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ThrusterBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_Thruster$ThrusterBuild)));
	LINE_NUMBER(194);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Wall"_j))), (((jobject) &class_mindustry_world_blocks_defense_Wall)));
	LINE_NUMBER(195);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WallBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_Wall$WallBuild)));
	LINE_NUMBER(196);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BaseTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_BaseTurret)));
	LINE_NUMBER(197);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BaseTurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_BaseTurret$BaseTurretBuild)));
	LINE_NUMBER(198);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ContinuousLiquidTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret)));
	LINE_NUMBER(199);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ContinuousLiquidTurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret$ContinuousLiquidTurretBuild)));
	LINE_NUMBER(200);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ContinuousTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_ContinuousTurret)));
	LINE_NUMBER(201);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ContinuousTurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_ContinuousTurret$ContinuousTurretBuild)));
	LINE_NUMBER(202);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_ItemTurret)));
	LINE_NUMBER(203);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemEntry"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemEntry)));
	LINE_NUMBER(204);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemTurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_ItemTurret$ItemTurretBuild)));
	LINE_NUMBER(205);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LaserTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_LaserTurret)));
	LINE_NUMBER(206);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LaserTurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_LaserTurret$LaserTurretBuild)));
	LINE_NUMBER(207);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_LiquidTurret)));
	LINE_NUMBER(208);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidTurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_LiquidTurret$LiquidTurretBuild)));
	LINE_NUMBER(209);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadAmmoTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_PayloadAmmoTurret)));
	LINE_NUMBER(210);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadTurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_PayloadAmmoTurret$PayloadTurretBuild)));
	LINE_NUMBER(211);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PointDefenseTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_PointDefenseTurret)));
	LINE_NUMBER(212);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PointDefenseBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_PointDefenseTurret$PointDefenseBuild)));
	LINE_NUMBER(213);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_PowerTurret)));
	LINE_NUMBER(214);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerTurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_PowerTurret$PowerTurretBuild)));
	LINE_NUMBER(215);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ReloadTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_ReloadTurret)));
	LINE_NUMBER(216);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ReloadTurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_ReloadTurret$ReloadTurretBuild)));
	LINE_NUMBER(217);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TractorBeamTurret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_TractorBeamTurret)));
	LINE_NUMBER(218);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TractorBeamBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_TractorBeamTurret$TractorBeamBuild)));
	LINE_NUMBER(219);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Turret"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_Turret)));
	LINE_NUMBER(220);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AmmoEntry"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_Turret$AmmoEntry)));
	LINE_NUMBER(221);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BulletEntry"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_Turret$BulletEntry)));
	LINE_NUMBER(222);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TurretBuild"_j))), (((jobject) &class_mindustry_world_blocks_defense_turrets_Turret$TurretBuild)));
	LINE_NUMBER(223);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ArmoredConveyor"_j))), (((jobject) &class_mindustry_world_blocks_distribution_ArmoredConveyor)));
	LINE_NUMBER(224);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ArmoredConveyorBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_ArmoredConveyor$ArmoredConveyorBuild)));
	LINE_NUMBER(225);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BufferedItemBridge"_j))), (((jobject) &class_mindustry_world_blocks_distribution_BufferedItemBridge)));
	LINE_NUMBER(226);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BufferedItemBridgeBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_BufferedItemBridge$BufferedItemBridgeBuild)));
	LINE_NUMBER(227);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ChainedBuilding"_j))), (((jobject) &class_mindustry_world_blocks_distribution_ChainedBuilding)));
	LINE_NUMBER(228);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Conveyor"_j))), (((jobject) &class_mindustry_world_blocks_distribution_Conveyor)));
	LINE_NUMBER(229);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConveyorBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_Conveyor$ConveyorBuild)));
	LINE_NUMBER(230);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DirectionBridge"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DirectionBridge)));
	LINE_NUMBER(231);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DirectionBridgeBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DirectionBridge$DirectionBridgeBuild)));
	LINE_NUMBER(232);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DirectionLiquidBridge"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DirectionLiquidBridge)));
	LINE_NUMBER(233);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DuctBridgeBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DirectionLiquidBridge$DuctBridgeBuild)));
	LINE_NUMBER(234);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DirectionalUnloader"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DirectionalUnloader)));
	LINE_NUMBER(235);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DirectionalUnloaderBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DirectionalUnloader$DirectionalUnloaderBuild)));
	LINE_NUMBER(236);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Duct"_j))), (((jobject) &class_mindustry_world_blocks_distribution_Duct)));
	LINE_NUMBER(237);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DuctBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_Duct$DuctBuild)));
	LINE_NUMBER(238);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DuctBridge"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DuctBridge)));
	LINE_NUMBER(239);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DuctBridgeBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DuctBridge$DuctBridgeBuild)));
	LINE_NUMBER(240);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DuctJunction"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DuctJunction)));
	LINE_NUMBER(241);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DuctJunctionBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DuctJunction$DuctJunctionBuild)));
	LINE_NUMBER(242);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DuctRouter"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DuctRouter)));
	LINE_NUMBER(243);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DuctRouterBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_DuctRouter$DuctRouterBuild)));
	LINE_NUMBER(244);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemBridge"_j))), (((jobject) &class_mindustry_world_blocks_distribution_ItemBridge)));
	LINE_NUMBER(245);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemBridgeBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_ItemBridge$ItemBridgeBuild)));
	LINE_NUMBER(246);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Junction"_j))), (((jobject) &class_mindustry_world_blocks_distribution_Junction)));
	LINE_NUMBER(247);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"JunctionBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_Junction$JunctionBuild)));
	LINE_NUMBER(248);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MassDriver"_j))), (((jobject) &class_mindustry_world_blocks_distribution_MassDriver)));
	LINE_NUMBER(249);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DriverBulletData"_j))), (((jobject) &class_mindustry_world_blocks_distribution_MassDriver$DriverBulletData)));
	LINE_NUMBER(250);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DriverState"_j))), (((jobject) &class_mindustry_world_blocks_distribution_MassDriver$DriverState)));
	LINE_NUMBER(251);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MassDriverBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_MassDriver$MassDriverBuild)));
	LINE_NUMBER(252);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OverflowDuct"_j))), (((jobject) &class_mindustry_world_blocks_distribution_OverflowDuct)));
	LINE_NUMBER(253);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OverflowDuctBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_OverflowDuct$OverflowDuctBuild)));
	LINE_NUMBER(254);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OverflowGate"_j))), (((jobject) &class_mindustry_world_blocks_distribution_OverflowGate)));
	LINE_NUMBER(255);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OverflowGateBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_OverflowGate$OverflowGateBuild)));
	LINE_NUMBER(256);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Router"_j))), (((jobject) &class_mindustry_world_blocks_distribution_Router)));
	LINE_NUMBER(257);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RouterBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_Router$RouterBuild)));
	LINE_NUMBER(258);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Sorter"_j))), (((jobject) &class_mindustry_world_blocks_distribution_Sorter)));
	LINE_NUMBER(259);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SorterBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_Sorter$SorterBuild)));
	LINE_NUMBER(260);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StackConveyor"_j))), (((jobject) &class_mindustry_world_blocks_distribution_StackConveyor)));
	LINE_NUMBER(261);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StackConveyorBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_StackConveyor$StackConveyorBuild)));
	LINE_NUMBER(262);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StackRouter"_j))), (((jobject) &class_mindustry_world_blocks_distribution_StackRouter)));
	LINE_NUMBER(263);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StackRouterBuild"_j))), (((jobject) &class_mindustry_world_blocks_distribution_StackRouter$StackRouterBuild)));
	LINE_NUMBER(264);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AirBlock"_j))), (((jobject) &class_mindustry_world_blocks_environment_AirBlock)));
	LINE_NUMBER(265);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CharacterOverlay"_j))), (((jobject) &class_mindustry_world_blocks_environment_CharacterOverlay)));
	LINE_NUMBER(266);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cliff"_j))), (((jobject) &class_mindustry_world_blocks_environment_Cliff)));
	LINE_NUMBER(267);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ColoredFloor"_j))), (((jobject) &class_mindustry_world_blocks_environment_ColoredFloor)));
	LINE_NUMBER(268);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ColoredWall"_j))), (((jobject) &class_mindustry_world_blocks_environment_ColoredWall)));
	LINE_NUMBER(269);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"EmptyFloor"_j))), (((jobject) &class_mindustry_world_blocks_environment_EmptyFloor)));
	LINE_NUMBER(270);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Floor"_j))), (((jobject) &class_mindustry_world_blocks_environment_Floor)));
	LINE_NUMBER(271);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UpdateRenderState"_j))), (((jobject) &class_mindustry_world_blocks_environment_Floor$UpdateRenderState)));
	LINE_NUMBER(272);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OreBlock"_j))), (((jobject) &class_mindustry_world_blocks_environment_OreBlock)));
	LINE_NUMBER(273);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OverlayFloor"_j))), (((jobject) &class_mindustry_world_blocks_environment_OverlayFloor)));
	LINE_NUMBER(274);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Prop"_j))), (((jobject) &class_mindustry_world_blocks_environment_Prop)));
	LINE_NUMBER(275);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RemoveOre"_j))), (((jobject) &class_mindustry_world_blocks_environment_RemoveOre)));
	LINE_NUMBER(276);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RemoveWall"_j))), (((jobject) &class_mindustry_world_blocks_environment_RemoveWall)));
	LINE_NUMBER(277);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RuneOverlay"_j))), (((jobject) &class_mindustry_world_blocks_environment_RuneOverlay)));
	LINE_NUMBER(278);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SeaBush"_j))), (((jobject) &class_mindustry_world_blocks_environment_SeaBush)));
	LINE_NUMBER(279);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Seaweed"_j))), (((jobject) &class_mindustry_world_blocks_environment_Seaweed)));
	LINE_NUMBER(280);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ShallowLiquid"_j))), (((jobject) &class_mindustry_world_blocks_environment_ShallowLiquid)));
	LINE_NUMBER(281);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SpawnBlock"_j))), (((jobject) &class_mindustry_world_blocks_environment_SpawnBlock)));
	LINE_NUMBER(282);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StaticProp"_j))), (((jobject) &class_mindustry_world_blocks_environment_StaticProp)));
	LINE_NUMBER(283);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StaticTree"_j))), (((jobject) &class_mindustry_world_blocks_environment_StaticTree)));
	LINE_NUMBER(284);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StaticWall"_j))), (((jobject) &class_mindustry_world_blocks_environment_StaticWall)));
	LINE_NUMBER(285);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SteamVent"_j))), (((jobject) &class_mindustry_world_blocks_environment_SteamVent)));
	LINE_NUMBER(286);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TallBlock"_j))), (((jobject) &class_mindustry_world_blocks_environment_TallBlock)));
	LINE_NUMBER(287);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TiledFloor"_j))), (((jobject) &class_mindustry_world_blocks_environment_TiledFloor)));
	LINE_NUMBER(288);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TiledWall"_j))), (((jobject) &class_mindustry_world_blocks_environment_TiledWall)));
	LINE_NUMBER(289);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TreeBlock"_j))), (((jobject) &class_mindustry_world_blocks_environment_TreeBlock)));
	LINE_NUMBER(290);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WobbleProp"_j))), (((jobject) &class_mindustry_world_blocks_environment_WobbleProp)));
	LINE_NUMBER(291);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HeatBlock"_j))), (((jobject) &class_mindustry_world_blocks_heat_HeatBlock)));
	LINE_NUMBER(292);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HeatConductor"_j))), (((jobject) &class_mindustry_world_blocks_heat_HeatConductor)));
	LINE_NUMBER(293);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HeatConductorBuild"_j))), (((jobject) &class_mindustry_world_blocks_heat_HeatConductor$HeatConductorBuild)));
	LINE_NUMBER(294);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HeatConsumer"_j))), (((jobject) &class_mindustry_world_blocks_heat_HeatConsumer)));
	LINE_NUMBER(295);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HeatProducer"_j))), (((jobject) &class_mindustry_world_blocks_heat_HeatProducer)));
	LINE_NUMBER(296);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HeatProducerBuild"_j))), (((jobject) &class_mindustry_world_blocks_heat_HeatProducer$HeatProducerBuild)));
	LINE_NUMBER(297);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ArmoredConduit"_j))), (((jobject) &class_mindustry_world_blocks_liquid_ArmoredConduit)));
	LINE_NUMBER(298);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ArmoredConduitBuild"_j))), (((jobject) &class_mindustry_world_blocks_liquid_ArmoredConduit$ArmoredConduitBuild)));
	LINE_NUMBER(299);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Conduit"_j))), (((jobject) &class_mindustry_world_blocks_liquid_Conduit)));
	LINE_NUMBER(300);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConduitBuild"_j))), (((jobject) &class_mindustry_world_blocks_liquid_Conduit$ConduitBuild)));
	LINE_NUMBER(301);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidBlock"_j))), (((jobject) &class_mindustry_world_blocks_liquid_LiquidBlock)));
	LINE_NUMBER(302);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidBuild"_j))), (((jobject) &class_mindustry_world_blocks_liquid_LiquidBlock$LiquidBuild)));
	LINE_NUMBER(303);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidBridge"_j))), (((jobject) &class_mindustry_world_blocks_liquid_LiquidBridge)));
	LINE_NUMBER(304);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidBridgeBuild"_j))), (((jobject) &class_mindustry_world_blocks_liquid_LiquidBridge$LiquidBridgeBuild)));
	LINE_NUMBER(305);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidJunction"_j))), (((jobject) &class_mindustry_world_blocks_liquid_LiquidJunction)));
	LINE_NUMBER(306);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidJunctionBuild"_j))), (((jobject) &class_mindustry_world_blocks_liquid_LiquidJunction$LiquidJunctionBuild)));
	LINE_NUMBER(307);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidRouter"_j))), (((jobject) &class_mindustry_world_blocks_liquid_LiquidRouter)));
	LINE_NUMBER(308);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidRouterBuild"_j))), (((jobject) &class_mindustry_world_blocks_liquid_LiquidRouter$LiquidRouterBuild)));
	LINE_NUMBER(309);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CanvasBlock"_j))), (((jobject) &class_mindustry_world_blocks_logic_CanvasBlock)));
	LINE_NUMBER(310);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CanvasBuild"_j))), (((jobject) &class_mindustry_world_blocks_logic_CanvasBlock$CanvasBuild)));
	LINE_NUMBER(311);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LogicBlock"_j))), (((jobject) &class_mindustry_world_blocks_logic_LogicBlock)));
	LINE_NUMBER(312);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LogicBuild"_j))), (((jobject) &class_mindustry_world_blocks_logic_LogicBlock$LogicBuild)));
	LINE_NUMBER(313);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LogicLink"_j))), (((jobject) &class_mindustry_world_blocks_logic_LogicBlock$LogicLink)));
	LINE_NUMBER(314);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LogicDisplay"_j))), (((jobject) &class_mindustry_world_blocks_logic_LogicDisplay)));
	LINE_NUMBER(315);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GraphicsType"_j))), (((jobject) &class_mindustry_world_blocks_logic_LogicDisplay$GraphicsType)));
	LINE_NUMBER(316);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LogicDisplayBuild"_j))), (((jobject) &class_mindustry_world_blocks_logic_LogicDisplay$LogicDisplayBuild)));
	LINE_NUMBER(317);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MemoryBlock"_j))), (((jobject) &class_mindustry_world_blocks_logic_MemoryBlock)));
	LINE_NUMBER(318);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MemoryBuild"_j))), (((jobject) &class_mindustry_world_blocks_logic_MemoryBlock$MemoryBuild)));
	LINE_NUMBER(319);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MessageBlock"_j))), (((jobject) &class_mindustry_world_blocks_logic_MessageBlock)));
	LINE_NUMBER(320);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MessageBuild"_j))), (((jobject) &class_mindustry_world_blocks_logic_MessageBlock$MessageBuild)));
	LINE_NUMBER(321);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SwitchBlock"_j))), (((jobject) &class_mindustry_world_blocks_logic_SwitchBlock)));
	LINE_NUMBER(322);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SwitchBuild"_j))), (((jobject) &class_mindustry_world_blocks_logic_SwitchBlock$SwitchBuild)));
	LINE_NUMBER(323);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TileableLogicDisplay"_j))), (((jobject) &class_mindustry_world_blocks_logic_TileableLogicDisplay)));
	LINE_NUMBER(324);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TileableLogicDisplayBuild"_j))), (((jobject) &class_mindustry_world_blocks_logic_TileableLogicDisplay$TileableLogicDisplayBuild)));
	LINE_NUMBER(325);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BlockProducer"_j))), (((jobject) &class_mindustry_world_blocks_payloads_BlockProducer)));
	LINE_NUMBER(326);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BlockProducerBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_BlockProducer$BlockProducerBuild)));
	LINE_NUMBER(327);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BuildPayload"_j))), (((jobject) &class_mindustry_world_blocks_payloads_BuildPayload)));
	LINE_NUMBER(328);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Constructor"_j))), (((jobject) &class_mindustry_world_blocks_payloads_Constructor)));
	LINE_NUMBER(329);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConstructorBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_Constructor$ConstructorBuild)));
	LINE_NUMBER(330);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Payload"_j))), (((jobject) &class_mindustry_world_blocks_payloads_Payload)));
	LINE_NUMBER(331);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadBlock"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadBlock)));
	LINE_NUMBER(332);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadBlockBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadBlock$PayloadBlockBuild)));
	LINE_NUMBER(333);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadConveyor"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadConveyor)));
	LINE_NUMBER(334);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadConveyorBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadConveyor$PayloadConveyorBuild)));
	LINE_NUMBER(335);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadDeconstructor"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadDeconstructor)));
	LINE_NUMBER(336);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadDeconstructorBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadDeconstructor$PayloadDeconstructorBuild)));
	LINE_NUMBER(337);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadLoader"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadLoader)));
	LINE_NUMBER(338);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadLoaderBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadLoader$PayloadLoaderBuild)));
	LINE_NUMBER(339);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadMassDriver"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadMassDriver)));
	LINE_NUMBER(340);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadDriverBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverBuild)));
	LINE_NUMBER(341);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadDriverState"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadDriverState)));
	LINE_NUMBER(342);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadMassDriverData"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadMassDriver$PayloadMassDriverData)));
	LINE_NUMBER(343);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadRouter"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadRouter)));
	LINE_NUMBER(344);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadRouterBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadRouter$PayloadRouterBuild)));
	LINE_NUMBER(345);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadSource"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadSource)));
	LINE_NUMBER(346);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadSourceBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadSource$PayloadSourceBuild)));
	LINE_NUMBER(347);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadUnloader"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadUnloader)));
	LINE_NUMBER(348);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadUnloaderBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadUnloader$PayloadUnloaderBuild)));
	LINE_NUMBER(349);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadVoid"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadVoid)));
	LINE_NUMBER(350);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PayloadVoidBuild"_j))), (((jobject) &class_mindustry_world_blocks_payloads_PayloadVoid$PayloadVoidBuild)));
	LINE_NUMBER(351);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitPayload"_j))), (((jobject) &class_mindustry_world_blocks_payloads_UnitPayload)));
	LINE_NUMBER(352);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Battery"_j))), (((jobject) &class_mindustry_world_blocks_power_Battery)));
	LINE_NUMBER(353);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BatteryBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_Battery$BatteryBuild)));
	LINE_NUMBER(354);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BeamNode"_j))), (((jobject) &class_mindustry_world_blocks_power_BeamNode)));
	LINE_NUMBER(355);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BeamNodeBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_BeamNode$BeamNodeBuild)));
	LINE_NUMBER(356);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeGenerator"_j))), (((jobject) &class_mindustry_world_blocks_power_ConsumeGenerator)));
	LINE_NUMBER(357);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeGeneratorBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_ConsumeGenerator$ConsumeGeneratorBuild)));
	LINE_NUMBER(358);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HeaterGenerator"_j))), (((jobject) &class_mindustry_world_blocks_power_HeaterGenerator)));
	LINE_NUMBER(359);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HeaterGeneratorBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_HeaterGenerator$HeaterGeneratorBuild)));
	LINE_NUMBER(360);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ImpactReactor"_j))), (((jobject) &class_mindustry_world_blocks_power_ImpactReactor)));
	LINE_NUMBER(361);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ImpactReactorBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_ImpactReactor$ImpactReactorBuild)));
	LINE_NUMBER(362);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LightBlock"_j))), (((jobject) &class_mindustry_world_blocks_power_LightBlock)));
	LINE_NUMBER(363);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LightBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_LightBlock$LightBuild)));
	LINE_NUMBER(364);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LongPowerNode"_j))), (((jobject) &class_mindustry_world_blocks_power_LongPowerNode)));
	LINE_NUMBER(365);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LongPowerNodeBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_LongPowerNode$LongPowerNodeBuild)));
	LINE_NUMBER(366);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NuclearReactor"_j))), (((jobject) &class_mindustry_world_blocks_power_NuclearReactor)));
	LINE_NUMBER(367);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NuclearReactorBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_NuclearReactor$NuclearReactorBuild)));
	LINE_NUMBER(368);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerBlock"_j))), (((jobject) &class_mindustry_world_blocks_power_PowerBlock)));
	LINE_NUMBER(369);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerDiode"_j))), (((jobject) &class_mindustry_world_blocks_power_PowerDiode)));
	LINE_NUMBER(370);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerDiodeBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_PowerDiode$PowerDiodeBuild)));
	LINE_NUMBER(371);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerDistributor"_j))), (((jobject) &class_mindustry_world_blocks_power_PowerDistributor)));
	LINE_NUMBER(372);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerGenerator"_j))), (((jobject) &class_mindustry_world_blocks_power_PowerGenerator)));
	LINE_NUMBER(373);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GeneratorBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_PowerGenerator$GeneratorBuild)));
	LINE_NUMBER(374);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerGraph"_j))), (((jobject) &class_mindustry_world_blocks_power_PowerGraph)));
	LINE_NUMBER(375);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerNode"_j))), (((jobject) &class_mindustry_world_blocks_power_PowerNode)));
	LINE_NUMBER(376);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerNodeBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_PowerNode$PowerNodeBuild)));
	LINE_NUMBER(377);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SolarGenerator"_j))), (((jobject) &class_mindustry_world_blocks_power_SolarGenerator)));
	LINE_NUMBER(378);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SolarGeneratorBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_SolarGenerator$SolarGeneratorBuild)));
	LINE_NUMBER(379);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ThermalGenerator"_j))), (((jobject) &class_mindustry_world_blocks_power_ThermalGenerator)));
	LINE_NUMBER(380);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ThermalGeneratorBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_ThermalGenerator$ThermalGeneratorBuild)));
	LINE_NUMBER(381);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"VariableReactor"_j))), (((jobject) &class_mindustry_world_blocks_power_VariableReactor)));
	LINE_NUMBER(382);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"VariableReactorBuild"_j))), (((jobject) &class_mindustry_world_blocks_power_VariableReactor$VariableReactorBuild)));
	LINE_NUMBER(383);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AttributeCrafter"_j))), (((jobject) &class_mindustry_world_blocks_production_AttributeCrafter)));
	LINE_NUMBER(384);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AttributeCrafterBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_AttributeCrafter$AttributeCrafterBuild)));
	LINE_NUMBER(385);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BeamDrill"_j))), (((jobject) &class_mindustry_world_blocks_production_BeamDrill)));
	LINE_NUMBER(386);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BeamDrillBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_BeamDrill$BeamDrillBuild)));
	LINE_NUMBER(387);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BurstDrill"_j))), (((jobject) &class_mindustry_world_blocks_production_BurstDrill)));
	LINE_NUMBER(388);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BurstDrillBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_BurstDrill$BurstDrillBuild)));
	LINE_NUMBER(389);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Drill"_j))), (((jobject) &class_mindustry_world_blocks_production_Drill)));
	LINE_NUMBER(390);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrillBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_Drill$DrillBuild)));
	LINE_NUMBER(391);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Fracker"_j))), (((jobject) &class_mindustry_world_blocks_production_Fracker)));
	LINE_NUMBER(392);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FrackerBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_Fracker$FrackerBuild)));
	LINE_NUMBER(393);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GenericCrafter"_j))), (((jobject) &class_mindustry_world_blocks_production_GenericCrafter)));
	LINE_NUMBER(394);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GenericCrafterBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_GenericCrafter$GenericCrafterBuild)));
	LINE_NUMBER(395);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HeatCrafter"_j))), (((jobject) &class_mindustry_world_blocks_production_HeatCrafter)));
	LINE_NUMBER(396);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HeatCrafterBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_HeatCrafter$HeatCrafterBuild)));
	LINE_NUMBER(397);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Incinerator"_j))), (((jobject) &class_mindustry_world_blocks_production_Incinerator)));
	LINE_NUMBER(398);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"IncineratorBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_Incinerator$IncineratorBuild)));
	LINE_NUMBER(399);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemIncinerator"_j))), (((jobject) &class_mindustry_world_blocks_production_ItemIncinerator)));
	LINE_NUMBER(400);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemIncineratorBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_ItemIncinerator$ItemIncineratorBuild)));
	LINE_NUMBER(401);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pump"_j))), (((jobject) &class_mindustry_world_blocks_production_Pump)));
	LINE_NUMBER(402);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PumpBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_Pump$PumpBuild)));
	LINE_NUMBER(403);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Separator"_j))), (((jobject) &class_mindustry_world_blocks_production_Separator)));
	LINE_NUMBER(404);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SeparatorBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_Separator$SeparatorBuild)));
	LINE_NUMBER(405);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SingleBlockProducer"_j))), (((jobject) &class_mindustry_world_blocks_production_SingleBlockProducer)));
	LINE_NUMBER(406);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SingleBlockProducerBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_SingleBlockProducer$SingleBlockProducerBuild)));
	LINE_NUMBER(407);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SolidPump"_j))), (((jobject) &class_mindustry_world_blocks_production_SolidPump)));
	LINE_NUMBER(408);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SolidPumpBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_SolidPump$SolidPumpBuild)));
	LINE_NUMBER(409);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WallCrafter"_j))), (((jobject) &class_mindustry_world_blocks_production_WallCrafter)));
	LINE_NUMBER(410);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WallCrafterBuild"_j))), (((jobject) &class_mindustry_world_blocks_production_WallCrafter$WallCrafterBuild)));
	LINE_NUMBER(411);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemSource"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_ItemSource)));
	LINE_NUMBER(412);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemSourceBuild"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_ItemSource$ItemSourceBuild)));
	LINE_NUMBER(413);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemVoid"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_ItemVoid)));
	LINE_NUMBER(414);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ItemVoidBuild"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_ItemVoid$ItemVoidBuild)));
	LINE_NUMBER(415);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidSource"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_LiquidSource)));
	LINE_NUMBER(416);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidSourceBuild"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_LiquidSource$LiquidSourceBuild)));
	LINE_NUMBER(417);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidVoid"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_LiquidVoid)));
	LINE_NUMBER(418);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LiquidVoidBuild"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_LiquidVoid$LiquidVoidBuild)));
	LINE_NUMBER(419);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerSource"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_PowerSource)));
	LINE_NUMBER(420);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerSourceBuild"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_PowerSource$PowerSourceBuild)));
	LINE_NUMBER(421);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PowerVoid"_j))), (((jobject) &class_mindustry_world_blocks_sandbox_PowerVoid)));
	LINE_NUMBER(422);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CoreBlock"_j))), (((jobject) &class_mindustry_world_blocks_storage_CoreBlock)));
	LINE_NUMBER(423);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CoreBuild"_j))), (((jobject) &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)));
	LINE_NUMBER(424);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StorageBlock"_j))), (((jobject) &class_mindustry_world_blocks_storage_StorageBlock)));
	LINE_NUMBER(425);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"StorageBuild"_j))), (((jobject) &class_mindustry_world_blocks_storage_StorageBlock$StorageBuild)));
	LINE_NUMBER(426);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unloader"_j))), (((jobject) &class_mindustry_world_blocks_storage_Unloader)));
	LINE_NUMBER(427);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ContainerStat"_j))), (((jobject) &class_mindustry_world_blocks_storage_Unloader$ContainerStat)));
	LINE_NUMBER(428);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnloaderBuild"_j))), (((jobject) &class_mindustry_world_blocks_storage_Unloader$UnloaderBuild)));
	LINE_NUMBER(429);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Reconstructor"_j))), (((jobject) &class_mindustry_world_blocks_units_Reconstructor)));
	LINE_NUMBER(430);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ReconstructorBuild"_j))), (((jobject) &class_mindustry_world_blocks_units_Reconstructor$ReconstructorBuild)));
	LINE_NUMBER(431);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RepairTower"_j))), (((jobject) &class_mindustry_world_blocks_units_RepairTower)));
	LINE_NUMBER(432);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RepairTowerBuild"_j))), (((jobject) &class_mindustry_world_blocks_units_RepairTower$RepairTowerBuild)));
	LINE_NUMBER(433);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RepairTurret"_j))), (((jobject) &class_mindustry_world_blocks_units_RepairTurret)));
	LINE_NUMBER(434);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RepairPointBuild"_j))), (((jobject) &class_mindustry_world_blocks_units_RepairTurret$RepairPointBuild)));
	LINE_NUMBER(435);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitAssembler"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitAssembler)));
	LINE_NUMBER(436);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AssemblerUnitPlan"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitAssembler$AssemblerUnitPlan)));
	LINE_NUMBER(437);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitAssemblerBuild"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitAssembler$UnitAssemblerBuild)));
	LINE_NUMBER(438);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"YeetData"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitAssembler$YeetData)));
	LINE_NUMBER(439);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitAssemblerModule"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitAssemblerModule)));
	LINE_NUMBER(440);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitAssemblerModuleBuild"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitAssemblerModule$UnitAssemblerModuleBuild)));
	LINE_NUMBER(441);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitBlock"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitBlock)));
	LINE_NUMBER(442);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitBuild"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitBlock$UnitBuild)));
	LINE_NUMBER(443);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitCargoLoader"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitCargoLoader)));
	LINE_NUMBER(444);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitTransportSourceBuild"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild)));
	LINE_NUMBER(445);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitCargoUnloadPoint"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitCargoUnloadPoint)));
	LINE_NUMBER(446);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitCargoUnloadPointBuild"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitCargoUnloadPoint$UnitCargoUnloadPointBuild)));
	LINE_NUMBER(447);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitFactory"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitFactory)));
	LINE_NUMBER(448);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitFactoryBuild"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitFactory$UnitFactoryBuild)));
	LINE_NUMBER(449);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UnitPlan"_j))), (((jobject) &class_mindustry_world_blocks_units_UnitFactory$UnitPlan)));
	LINE_NUMBER(450);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Consume"_j))), (((jobject) &class_mindustry_world_consumers_Consume)));
	LINE_NUMBER(451);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeCoolant"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeCoolant)));
	LINE_NUMBER(452);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeItemCharged"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeItemCharged)));
	LINE_NUMBER(453);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeItemDynamic"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeItemDynamic)));
	LINE_NUMBER(454);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeItemEfficiency"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeItemEfficiency)));
	LINE_NUMBER(455);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeItemExplode"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeItemExplode)));
	LINE_NUMBER(456);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeItemExplosive"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeItemExplosive)));
	LINE_NUMBER(457);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeItemFilter"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeItemFilter)));
	LINE_NUMBER(458);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeItemFlammable"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeItemFlammable)));
	LINE_NUMBER(459);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeItemList"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeItemList)));
	LINE_NUMBER(460);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeItemRadioactive"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeItemRadioactive)));
	LINE_NUMBER(461);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeItems"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeItems)));
	LINE_NUMBER(462);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeLiquid"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeLiquid)));
	LINE_NUMBER(463);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeLiquidBase"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeLiquidBase)));
	LINE_NUMBER(464);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeLiquidFilter"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeLiquidFilter)));
	LINE_NUMBER(465);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeLiquidFlammable"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeLiquidFlammable)));
	LINE_NUMBER(466);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeLiquids"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeLiquids)));
	LINE_NUMBER(467);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumeLiquidsDynamic"_j))), (((jobject) &class_mindustry_world_consumers_ConsumeLiquidsDynamic)));
	LINE_NUMBER(468);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumePayloadDynamic"_j))), (((jobject) &class_mindustry_world_consumers_ConsumePayloadDynamic)));
	LINE_NUMBER(469);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumePayloadFilter"_j))), (((jobject) &class_mindustry_world_consumers_ConsumePayloadFilter)));
	LINE_NUMBER(470);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumePayloads"_j))), (((jobject) &class_mindustry_world_consumers_ConsumePayloads)));
	LINE_NUMBER(471);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumePower"_j))), (((jobject) &class_mindustry_world_consumers_ConsumePower)));
	LINE_NUMBER(472);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumePowerCondition"_j))), (((jobject) &class_mindustry_world_consumers_ConsumePowerCondition)));
	LINE_NUMBER(473);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ConsumePowerDynamic"_j))), (((jobject) &class_mindustry_world_consumers_ConsumePowerDynamic)));
	LINE_NUMBER(474);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawArcSmelt"_j))), (((jobject) &class_mindustry_world_draw_DrawArcSmelt)));
	LINE_NUMBER(475);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawBlock"_j))), (((jobject) &class_mindustry_world_draw_DrawBlock)));
	LINE_NUMBER(476);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawBlockParts"_j))), (((jobject) &class_mindustry_world_draw_DrawBlockParts)));
	LINE_NUMBER(477);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawBlurSpin"_j))), (((jobject) &class_mindustry_world_draw_DrawBlurSpin)));
	LINE_NUMBER(478);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawBubbles"_j))), (((jobject) &class_mindustry_world_draw_DrawBubbles)));
	LINE_NUMBER(479);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawCells"_j))), (((jobject) &class_mindustry_world_draw_DrawCells)));
	LINE_NUMBER(480);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawCircles"_j))), (((jobject) &class_mindustry_world_draw_DrawCircles)));
	LINE_NUMBER(481);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawCrucibleFlame"_j))), (((jobject) &class_mindustry_world_draw_DrawCrucibleFlame)));
	LINE_NUMBER(482);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawCultivator"_j))), (((jobject) &class_mindustry_world_draw_DrawCultivator)));
	LINE_NUMBER(483);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawDefault"_j))), (((jobject) &class_mindustry_world_draw_DrawDefault)));
	LINE_NUMBER(484);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawFade"_j))), (((jobject) &class_mindustry_world_draw_DrawFade)));
	LINE_NUMBER(485);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawFlame"_j))), (((jobject) &class_mindustry_world_draw_DrawFlame)));
	LINE_NUMBER(486);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawFrames"_j))), (((jobject) &class_mindustry_world_draw_DrawFrames)));
	LINE_NUMBER(487);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawGlowRegion"_j))), (((jobject) &class_mindustry_world_draw_DrawGlowRegion)));
	LINE_NUMBER(488);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawHeatInput"_j))), (((jobject) &class_mindustry_world_draw_DrawHeatInput)));
	LINE_NUMBER(489);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawHeatOutput"_j))), (((jobject) &class_mindustry_world_draw_DrawHeatOutput)));
	LINE_NUMBER(490);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawHeatRegion"_j))), (((jobject) &class_mindustry_world_draw_DrawHeatRegion)));
	LINE_NUMBER(491);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawLiquidOutputs"_j))), (((jobject) &class_mindustry_world_draw_DrawLiquidOutputs)));
	LINE_NUMBER(492);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawLiquidRegion"_j))), (((jobject) &class_mindustry_world_draw_DrawLiquidRegion)));
	LINE_NUMBER(493);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawLiquidTile"_j))), (((jobject) &class_mindustry_world_draw_DrawLiquidTile)));
	LINE_NUMBER(494);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawMulti"_j))), (((jobject) &class_mindustry_world_draw_DrawMulti)));
	LINE_NUMBER(495);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawMultiWeave"_j))), (((jobject) &class_mindustry_world_draw_DrawMultiWeave)));
	LINE_NUMBER(496);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawParticles"_j))), (((jobject) &class_mindustry_world_draw_DrawParticles)));
	LINE_NUMBER(497);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawPistons"_j))), (((jobject) &class_mindustry_world_draw_DrawPistons)));
	LINE_NUMBER(498);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawPlasma"_j))), (((jobject) &class_mindustry_world_draw_DrawPlasma)));
	LINE_NUMBER(499);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawPower"_j))), (((jobject) &class_mindustry_world_draw_DrawPower)));
	LINE_NUMBER(500);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawPulseShape"_j))), (((jobject) &class_mindustry_world_draw_DrawPulseShape)));
	LINE_NUMBER(501);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawPumpLiquid"_j))), (((jobject) &class_mindustry_world_draw_DrawPumpLiquid)));
	LINE_NUMBER(502);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawRegion"_j))), (((jobject) &class_mindustry_world_draw_DrawRegion)));
	LINE_NUMBER(503);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawShape"_j))), (((jobject) &class_mindustry_world_draw_DrawShape)));
	LINE_NUMBER(504);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawSideRegion"_j))), (((jobject) &class_mindustry_world_draw_DrawSideRegion)));
	LINE_NUMBER(505);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawSoftParticles"_j))), (((jobject) &class_mindustry_world_draw_DrawSoftParticles)));
	LINE_NUMBER(506);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawSpikes"_j))), (((jobject) &class_mindustry_world_draw_DrawSpikes)));
	LINE_NUMBER(507);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawTurret"_j))), (((jobject) &class_mindustry_world_draw_DrawTurret)));
	LINE_NUMBER(508);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawWarmupRegion"_j))), (((jobject) &class_mindustry_world_draw_DrawWarmupRegion)));
	LINE_NUMBER(509);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DrawWeave"_j))), (((jobject) &class_mindustry_world_draw_DrawWeave)));
	LINE_NUMBER(510);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Block"_j))), (((jobject) &class_mindustry_world_Block)));
	LINE_NUMBER(511);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_ClassMap[] {
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

static FieldMetadata fields[] {
	{ "classes", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_mod_ClassMap_classes, "Larc/struct/ObjectMap;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_ClassMap, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_mod_ClassMap, 0, "()V", 8 },
};

Class class_mindustry_mod_ClassMap{
		.nativeName = (intptr_t) "mindustry/mod/ClassMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_ClassMap),
		.classVtable = (intptr_t) vtable_mindustry_mod_ClassMap,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ClassMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_ClassMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_ClassMap = registerClass(&class_mindustry_mod_ClassMap);

}
