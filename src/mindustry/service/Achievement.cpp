#include "mindustry/service/Achievement.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ui/fragments/ConsoleFragment.h"
#include "mindustry/service/Achievement.h"
#include "mindustry/service/GameService.h"
#include "arc/util/OS.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "mindustry/core/UI.h"
#include "mindustry/service/SStat.h"

extern "C" {

jobject SF_mindustry_service_Achievement_kill1kEnemies;
jobject SF_mindustry_service_Achievement_kill100kEnemies;
jobject SF_mindustry_service_Achievement_launch100kItems;
jobject SF_mindustry_service_Achievement_produce5kMin;
jobject SF_mindustry_service_Achievement_produce50kMin;
jobject SF_mindustry_service_Achievement_win10Attack;
jobject SF_mindustry_service_Achievement_win10PvP;
jobject SF_mindustry_service_Achievement_defeatAttack5Waves;
jobject SF_mindustry_service_Achievement_launch30Times;
jobject SF_mindustry_service_Achievement_captureBackground;
jobject SF_mindustry_service_Achievement_survive100Waves;
jobject SF_mindustry_service_Achievement_researchAll;
jobject SF_mindustry_service_Achievement_shockWetEnemy;
jobject SF_mindustry_service_Achievement_killEnemyPhaseWall;
jobject SF_mindustry_service_Achievement_researchRouter;
jobject SF_mindustry_service_Achievement_place10kBlocks;
jobject SF_mindustry_service_Achievement_destroy1kBlocks;
jobject SF_mindustry_service_Achievement_overheatReactor;
jobject SF_mindustry_service_Achievement_make10maps;
jobject SF_mindustry_service_Achievement_downloadMapWorkshop;
jobject SF_mindustry_service_Achievement_publishMap;
jobject SF_mindustry_service_Achievement_defeatBoss;
jobject SF_mindustry_service_Achievement_captureAllSectors;
jobject SF_mindustry_service_Achievement_control10Sectors;
jobject SF_mindustry_service_Achievement_drop10kitems;
jobject SF_mindustry_service_Achievement_powerupImpactReactor;
jobject SF_mindustry_service_Achievement_obtainThorium;
jobject SF_mindustry_service_Achievement_obtainTitanium;
jobject SF_mindustry_service_Achievement_suicideBomb;
jobject SF_mindustry_service_Achievement_buildGroundFactory;
jobject SF_mindustry_service_Achievement_issueAttackCommand;
jobject SF_mindustry_service_Achievement_active100Units;
jobject SF_mindustry_service_Achievement_build1000Units;
jobject SF_mindustry_service_Achievement_buildAllUnits;
jobject SF_mindustry_service_Achievement_buildT5;
jobject SF_mindustry_service_Achievement_pickupT5;
jobject SF_mindustry_service_Achievement_active10Polys;
jobject SF_mindustry_service_Achievement_dieExclusion;
jobject SF_mindustry_service_Achievement_drown;
jobject SF_mindustry_service_Achievement_fillCoreAllCampaign;
jobject SF_mindustry_service_Achievement_hostServer10;
jobject SF_mindustry_service_Achievement_buildMeltdownSpectre;
jobject SF_mindustry_service_Achievement_launchItemPad;
jobject SF_mindustry_service_Achievement_chainRouters;
jobject SF_mindustry_service_Achievement_circleConveyor;
jobject SF_mindustry_service_Achievement_becomeRouter;
jobject SF_mindustry_service_Achievement_create20Schematics;
jobject SF_mindustry_service_Achievement_create500Schematics;
jobject SF_mindustry_service_Achievement_survive10WavesNoBlocks;
jobject SF_mindustry_service_Achievement_captureNoBlocksBroken;
jobject SF_mindustry_service_Achievement_useFlameAmmo;
jobject SF_mindustry_service_Achievement_coolTurret;
jobject SF_mindustry_service_Achievement_enablePixelation;
jobject SF_mindustry_service_Achievement_openWiki;
jobject SF_mindustry_service_Achievement_allTransportOneMap;
jobject SF_mindustry_service_Achievement_buildOverdriveProjector;
jobject SF_mindustry_service_Achievement_buildMendProjector;
jobject SF_mindustry_service_Achievement_buildWexWater;
jobject SF_mindustry_service_Achievement_have10mItems;
jobject SF_mindustry_service_Achievement_killEclipseDuo;
jobject SF_mindustry_service_Achievement_killMassDriver;
jobject SF_mindustry_service_Achievement_completeErekir;
jobject SF_mindustry_service_Achievement_completeSerpulo;
jobject SF_mindustry_service_Achievement_launchCoreSchematic;
jobject SF_mindustry_service_Achievement_nucleusGroundZero;
jobject SF_mindustry_service_Achievement_neoplasmWater;
jobject SF_mindustry_service_Achievement_blastFrozenUnit;
jobject SF_mindustry_service_Achievement_allBlocksSerpulo;
jobject SF_mindustry_service_Achievement_allBlocksErekir;
jobject SF_mindustry_service_Achievement_breakForceProjector;
jobject SF_mindustry_service_Achievement_researchLogic;
jobject SF_mindustry_service_Achievement_negative10kPower;
jobject SF_mindustry_service_Achievement_positive100kPower;
jobject SF_mindustry_service_Achievement_store1milPower;
jobject SF_mindustry_service_Achievement_blastGenerator;
jobject SF_mindustry_service_Achievement_neoplasiaExplosion;
jobject SF_mindustry_service_Achievement_installMod;
jobject SF_mindustry_service_Achievement_routerLanguage;
jobject SF_mindustry_service_Achievement_joinCommunityServer;
jobject SF_mindustry_service_Achievement_openConsole;
jobject SF_mindustry_service_Achievement_controlTurret;
jobject SF_mindustry_service_Achievement_dropUnitsCoreZone;
jobject SF_mindustry_service_Achievement_destroyScatterFlare;
jobject SF_mindustry_service_Achievement_boostUnit;
jobject SF_mindustry_service_Achievement_boostBuildingFloor;
jobject SF_mindustry_service_Achievement_hoverUnitLiquid;
jobject SF_mindustry_service_Achievement_break100Boulders;
jobject SF_mindustry_service_Achievement_break10000Boulders;
jobject SF_mindustry_service_Achievement_shockwaveTowerUse;
jobject SF_mindustry_service_Achievement_useAnimdustryEmoji;
jobject SF_mindustry_service_Achievement_all;
jobject SF_mindustry_service_Achievement_$VALUES;

void mark_mindustry_service_Achievement(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_service_Achievement_kill1kEnemies)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_kill1kEnemies)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_kill1kEnemies, mark, depth + 1);
		if (SF_mindustry_service_Achievement_kill100kEnemies)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_kill100kEnemies)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_kill100kEnemies, mark, depth + 1);
		if (SF_mindustry_service_Achievement_launch100kItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_launch100kItems)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_launch100kItems, mark, depth + 1);
		if (SF_mindustry_service_Achievement_produce5kMin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_produce5kMin)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_produce5kMin, mark, depth + 1);
		if (SF_mindustry_service_Achievement_produce50kMin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_produce50kMin)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_produce50kMin, mark, depth + 1);
		if (SF_mindustry_service_Achievement_win10Attack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_win10Attack)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_win10Attack, mark, depth + 1);
		if (SF_mindustry_service_Achievement_win10PvP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_win10PvP)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_win10PvP, mark, depth + 1);
		if (SF_mindustry_service_Achievement_defeatAttack5Waves)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_defeatAttack5Waves)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_defeatAttack5Waves, mark, depth + 1);
		if (SF_mindustry_service_Achievement_launch30Times)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_launch30Times)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_launch30Times, mark, depth + 1);
		if (SF_mindustry_service_Achievement_captureBackground)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_captureBackground)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_captureBackground, mark, depth + 1);
		if (SF_mindustry_service_Achievement_survive100Waves)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_survive100Waves)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_survive100Waves, mark, depth + 1);
		if (SF_mindustry_service_Achievement_researchAll)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_researchAll)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_researchAll, mark, depth + 1);
		if (SF_mindustry_service_Achievement_shockWetEnemy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_shockWetEnemy)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_shockWetEnemy, mark, depth + 1);
		if (SF_mindustry_service_Achievement_killEnemyPhaseWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_killEnemyPhaseWall)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_killEnemyPhaseWall, mark, depth + 1);
		if (SF_mindustry_service_Achievement_researchRouter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_researchRouter)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_researchRouter, mark, depth + 1);
		if (SF_mindustry_service_Achievement_place10kBlocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_place10kBlocks)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_place10kBlocks, mark, depth + 1);
		if (SF_mindustry_service_Achievement_destroy1kBlocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_destroy1kBlocks)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_destroy1kBlocks, mark, depth + 1);
		if (SF_mindustry_service_Achievement_overheatReactor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_overheatReactor)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_overheatReactor, mark, depth + 1);
		if (SF_mindustry_service_Achievement_make10maps)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_make10maps)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_make10maps, mark, depth + 1);
		if (SF_mindustry_service_Achievement_downloadMapWorkshop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_downloadMapWorkshop)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_downloadMapWorkshop, mark, depth + 1);
		if (SF_mindustry_service_Achievement_publishMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_publishMap)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_publishMap, mark, depth + 1);
		if (SF_mindustry_service_Achievement_defeatBoss)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_defeatBoss)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_defeatBoss, mark, depth + 1);
		if (SF_mindustry_service_Achievement_captureAllSectors)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_captureAllSectors)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_captureAllSectors, mark, depth + 1);
		if (SF_mindustry_service_Achievement_control10Sectors)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_control10Sectors)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_control10Sectors, mark, depth + 1);
		if (SF_mindustry_service_Achievement_drop10kitems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_drop10kitems)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_drop10kitems, mark, depth + 1);
		if (SF_mindustry_service_Achievement_powerupImpactReactor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_powerupImpactReactor)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_powerupImpactReactor, mark, depth + 1);
		if (SF_mindustry_service_Achievement_obtainThorium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_obtainThorium)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_obtainThorium, mark, depth + 1);
		if (SF_mindustry_service_Achievement_obtainTitanium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_obtainTitanium)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_obtainTitanium, mark, depth + 1);
		if (SF_mindustry_service_Achievement_suicideBomb)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_suicideBomb)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_suicideBomb, mark, depth + 1);
		if (SF_mindustry_service_Achievement_buildGroundFactory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_buildGroundFactory)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_buildGroundFactory, mark, depth + 1);
		if (SF_mindustry_service_Achievement_issueAttackCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_issueAttackCommand)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_issueAttackCommand, mark, depth + 1);
		if (SF_mindustry_service_Achievement_active100Units)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_active100Units)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_active100Units, mark, depth + 1);
		if (SF_mindustry_service_Achievement_build1000Units)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_build1000Units)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_build1000Units, mark, depth + 1);
		if (SF_mindustry_service_Achievement_buildAllUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_buildAllUnits)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_buildAllUnits, mark, depth + 1);
		if (SF_mindustry_service_Achievement_buildT5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_buildT5)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_buildT5, mark, depth + 1);
		if (SF_mindustry_service_Achievement_pickupT5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_pickupT5)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_pickupT5, mark, depth + 1);
		if (SF_mindustry_service_Achievement_active10Polys)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_active10Polys)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_active10Polys, mark, depth + 1);
		if (SF_mindustry_service_Achievement_dieExclusion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_dieExclusion)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_dieExclusion, mark, depth + 1);
		if (SF_mindustry_service_Achievement_drown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_drown)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_drown, mark, depth + 1);
		if (SF_mindustry_service_Achievement_fillCoreAllCampaign)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_fillCoreAllCampaign)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_fillCoreAllCampaign, mark, depth + 1);
		if (SF_mindustry_service_Achievement_hostServer10)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_hostServer10)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_hostServer10, mark, depth + 1);
		if (SF_mindustry_service_Achievement_buildMeltdownSpectre)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_buildMeltdownSpectre)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_buildMeltdownSpectre, mark, depth + 1);
		if (SF_mindustry_service_Achievement_launchItemPad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_launchItemPad)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_launchItemPad, mark, depth + 1);
		if (SF_mindustry_service_Achievement_chainRouters)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_chainRouters)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_chainRouters, mark, depth + 1);
		if (SF_mindustry_service_Achievement_circleConveyor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_circleConveyor)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_circleConveyor, mark, depth + 1);
		if (SF_mindustry_service_Achievement_becomeRouter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_becomeRouter)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_becomeRouter, mark, depth + 1);
		if (SF_mindustry_service_Achievement_create20Schematics)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_create20Schematics)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_create20Schematics, mark, depth + 1);
		if (SF_mindustry_service_Achievement_create500Schematics)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_create500Schematics)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_create500Schematics, mark, depth + 1);
		if (SF_mindustry_service_Achievement_survive10WavesNoBlocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_survive10WavesNoBlocks)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_survive10WavesNoBlocks, mark, depth + 1);
		if (SF_mindustry_service_Achievement_captureNoBlocksBroken)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_captureNoBlocksBroken)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_captureNoBlocksBroken, mark, depth + 1);
		if (SF_mindustry_service_Achievement_useFlameAmmo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_useFlameAmmo)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_useFlameAmmo, mark, depth + 1);
		if (SF_mindustry_service_Achievement_coolTurret)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_coolTurret)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_coolTurret, mark, depth + 1);
		if (SF_mindustry_service_Achievement_enablePixelation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_enablePixelation)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_enablePixelation, mark, depth + 1);
		if (SF_mindustry_service_Achievement_openWiki)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_openWiki)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_openWiki, mark, depth + 1);
		if (SF_mindustry_service_Achievement_allTransportOneMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_allTransportOneMap)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_allTransportOneMap, mark, depth + 1);
		if (SF_mindustry_service_Achievement_buildOverdriveProjector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_buildOverdriveProjector)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_buildOverdriveProjector, mark, depth + 1);
		if (SF_mindustry_service_Achievement_buildMendProjector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_buildMendProjector)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_buildMendProjector, mark, depth + 1);
		if (SF_mindustry_service_Achievement_buildWexWater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_buildWexWater)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_buildWexWater, mark, depth + 1);
		if (SF_mindustry_service_Achievement_have10mItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_have10mItems)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_have10mItems, mark, depth + 1);
		if (SF_mindustry_service_Achievement_killEclipseDuo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_killEclipseDuo)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_killEclipseDuo, mark, depth + 1);
		if (SF_mindustry_service_Achievement_killMassDriver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_killMassDriver)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_killMassDriver, mark, depth + 1);
		if (SF_mindustry_service_Achievement_completeErekir)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_completeErekir)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_completeErekir, mark, depth + 1);
		if (SF_mindustry_service_Achievement_completeSerpulo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_completeSerpulo)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_completeSerpulo, mark, depth + 1);
		if (SF_mindustry_service_Achievement_launchCoreSchematic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_launchCoreSchematic)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_launchCoreSchematic, mark, depth + 1);
		if (SF_mindustry_service_Achievement_nucleusGroundZero)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_nucleusGroundZero)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_nucleusGroundZero, mark, depth + 1);
		if (SF_mindustry_service_Achievement_neoplasmWater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_neoplasmWater)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_neoplasmWater, mark, depth + 1);
		if (SF_mindustry_service_Achievement_blastFrozenUnit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_blastFrozenUnit)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_blastFrozenUnit, mark, depth + 1);
		if (SF_mindustry_service_Achievement_allBlocksSerpulo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_allBlocksSerpulo)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_allBlocksSerpulo, mark, depth + 1);
		if (SF_mindustry_service_Achievement_allBlocksErekir)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_allBlocksErekir)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_allBlocksErekir, mark, depth + 1);
		if (SF_mindustry_service_Achievement_breakForceProjector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_breakForceProjector)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_breakForceProjector, mark, depth + 1);
		if (SF_mindustry_service_Achievement_researchLogic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_researchLogic)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_researchLogic, mark, depth + 1);
		if (SF_mindustry_service_Achievement_negative10kPower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_negative10kPower)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_negative10kPower, mark, depth + 1);
		if (SF_mindustry_service_Achievement_positive100kPower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_positive100kPower)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_positive100kPower, mark, depth + 1);
		if (SF_mindustry_service_Achievement_store1milPower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_store1milPower)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_store1milPower, mark, depth + 1);
		if (SF_mindustry_service_Achievement_blastGenerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_blastGenerator)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_blastGenerator, mark, depth + 1);
		if (SF_mindustry_service_Achievement_neoplasiaExplosion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_neoplasiaExplosion)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_neoplasiaExplosion, mark, depth + 1);
		if (SF_mindustry_service_Achievement_installMod)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_installMod)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_installMod, mark, depth + 1);
		if (SF_mindustry_service_Achievement_routerLanguage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_routerLanguage)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_routerLanguage, mark, depth + 1);
		if (SF_mindustry_service_Achievement_joinCommunityServer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_joinCommunityServer)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_joinCommunityServer, mark, depth + 1);
		if (SF_mindustry_service_Achievement_openConsole)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_openConsole)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_openConsole, mark, depth + 1);
		if (SF_mindustry_service_Achievement_controlTurret)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_controlTurret)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_controlTurret, mark, depth + 1);
		if (SF_mindustry_service_Achievement_dropUnitsCoreZone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_dropUnitsCoreZone)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_dropUnitsCoreZone, mark, depth + 1);
		if (SF_mindustry_service_Achievement_destroyScatterFlare)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_destroyScatterFlare)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_destroyScatterFlare, mark, depth + 1);
		if (SF_mindustry_service_Achievement_boostUnit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_boostUnit)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_boostUnit, mark, depth + 1);
		if (SF_mindustry_service_Achievement_boostBuildingFloor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_boostBuildingFloor)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_boostBuildingFloor, mark, depth + 1);
		if (SF_mindustry_service_Achievement_hoverUnitLiquid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_hoverUnitLiquid)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_hoverUnitLiquid, mark, depth + 1);
		if (SF_mindustry_service_Achievement_break100Boulders)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_break100Boulders)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_break100Boulders, mark, depth + 1);
		if (SF_mindustry_service_Achievement_break10000Boulders)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_break10000Boulders)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_break10000Boulders, mark, depth + 1);
		if (SF_mindustry_service_Achievement_shockwaveTowerUse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_shockwaveTowerUse)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_shockwaveTowerUse, mark, depth + 1);
		if (SF_mindustry_service_Achievement_useAnimdustryEmoji)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_useAnimdustryEmoji)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_useAnimdustryEmoji, mark, depth + 1);
		if (SF_mindustry_service_Achievement_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_all)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_all, mark, depth + 1);
		if (SF_mindustry_service_Achievement_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_service_Achievement_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_service_Achievement_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_service_Achievement *) object;
	if (self->F_stat)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stat)->clazz)->markFunction)((jobject) self->F_stat, mark, depth + 1);
}

jobject SM_mindustry_service_Achievement_values_R_Array1_mindustry_service_Achievement(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/Achievement:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_Achievement(ctx);
	{
	LINE_NUMBER(7);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = (jobject)SF_mindustry_service_Achievement_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_service_Achievement, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_service_Achievement_valueOf_java_lang_String_R_mindustry_service_Achievement(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/Achievement:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_Achievement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_service_Achievement)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_service_Achievement, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/Achievement:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_Achievement(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(123);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(118);
	((mindustry_service_Achievement *) NULL_CHECK((frame[0].o)))->F_completed = (jint(0));
	LINE_NUMBER(124);
	((mindustry_service_Achievement *) NULL_CHECK((frame[0].o)))->F_stat = (jref) (frame[3].o);
	LINE_NUMBER(125);
	((mindustry_service_Achievement *) NULL_CHECK((frame[0].o)))->F_statGoal = (frame[4].i);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_service_Achievement_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/Achievement:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_Achievement(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(129);
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jobject(nullptr)), (jint(0)));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_service_Achievement_complete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/Achievement:complete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_mindustry_service_Achievement_isAchieved_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_Achievement_isAchieved_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(135);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_consolefrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ConsoleFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_arc_util_OS(ctx);
	sp[0].o = (jobject)SF_arc_util_OS_username;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"anuke"_j))));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_openConsole;
	if (sp[0].o == sp[1].o) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(137);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_service;
	sp[1].o = (jobject)((func_mindustry_service_Achievement_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_Achievement_name_R_java_lang_String])(ctx, (frame[0].o));
	((func_mindustry_service_GameService_completeAchievement_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_completeAchievement_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(138);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_service;
	((func_mindustry_service_GameService_storeStats) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_storeStats])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_Achievement_uncomplete(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/Achievement:uncomplete", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	jint temp0 = (jint)((func_mindustry_service_Achievement_isAchieved_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_Achievement_isAchieved_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(144);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_service;
	sp[1].o = (jobject)((func_mindustry_service_Achievement_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_Achievement_name_R_java_lang_String])(ctx, (frame[0].o));
	((func_mindustry_service_GameService_clearAchievement_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_GameService_clearAchievement_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(145);
	((mindustry_service_Achievement *) NULL_CHECK((frame[0].o)))->F_completed = (jint(0));
	}
label_1:;
	LINE_NUMBER(147);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_service_Achievement_checkCompletion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/Achievement:checkCompletion", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_mindustry_service_Achievement_isAchieved_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_Achievement_isAchieved_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_service_Achievement *) NULL_CHECK((frame[0].o)))->F_stat;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_service_Achievement *) NULL_CHECK((frame[0].o)))->F_stat;
	jint temp0 = (jint)((func_mindustry_service_SStat_get_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_service_SStat_get_R_int])(ctx, sp[0].o);
	if (temp0 < ((jint)((mindustry_service_Achievement *) NULL_CHECK((frame[0].o)))->F_statGoal)) goto label_1;
	}
	{
	LINE_NUMBER(151);
	((func_mindustry_service_Achievement_complete) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_Achievement_complete])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(153);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_service_Achievement_isAchieved_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/Achievement:isAchieved", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	if (((jint)((mindustry_service_Achievement *) NULL_CHECK((frame[0].o)))->F_completed) == 0) goto label_1;
	}
	{
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_service;
	sp[2].o = (jobject)((func_mindustry_service_Achievement_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_service_Achievement_name_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_service_GameService_isAchieved_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_service_GameService_isAchieved_java_lang_String_R_boolean])(ctx, sp[1].o, sp[2].o);
	((mindustry_service_Achievement *) NULL_CHECK(sp[0].o))->F_completed = temp0;
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_service_Achievement_$values_R_Array1_mindustry_service_Achievement(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/Achievement:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_Achievement(ctx);
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_service_Achievement, (90));
	jint temp0 = jint(0);
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_kill1kEnemies;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_kill100kEnemies;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_launch100kItems;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_produce5kMin;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_produce50kMin;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_win10Attack;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_win10PvP;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_defeatAttack5Waves;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_launch30Times;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_captureBackground;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_survive100Waves;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_researchAll;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_shockWetEnemy;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_killEnemyPhaseWall;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_researchRouter;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_place10kBlocks;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_destroy1kBlocks;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_overheatReactor;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_make10maps;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_downloadMapWorkshop;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_publishMap;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_defeatBoss;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_captureAllSectors;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_control10Sectors;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_drop10kitems;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_powerupImpactReactor;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_obtainThorium;
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 27;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_obtainTitanium;
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 28;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_suicideBomb;
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 29;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_buildGroundFactory;
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 30;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_issueAttackCommand;
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 31;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_active100Units;
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 32;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_build1000Units;
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 33;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_buildAllUnits;
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 34;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_buildT5;
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp35 = 35;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_pickupT5;
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = 36;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_active10Polys;
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp37 = 37;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_dieExclusion;
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp38 = 38;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_drown;
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = 39;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_fillCoreAllCampaign;
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp40 = 40;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_hostServer10;
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp41 = 41;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_buildMeltdownSpectre;
	ARRAY_ACCESS(jobject, sp[0].o, temp41) = sp[1].o;
	jint temp42 = 42;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_launchItemPad;
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp43 = 43;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_chainRouters;
	ARRAY_ACCESS(jobject, sp[0].o, temp43) = sp[1].o;
	jint temp44 = 44;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_circleConveyor;
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp45 = 45;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_becomeRouter;
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	jint temp46 = 46;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_create20Schematics;
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp47 = 47;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_create500Schematics;
	ARRAY_ACCESS(jobject, sp[0].o, temp47) = sp[1].o;
	jint temp48 = 48;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_survive10WavesNoBlocks;
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp49 = 49;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_captureNoBlocksBroken;
	ARRAY_ACCESS(jobject, sp[0].o, temp49) = sp[1].o;
	jint temp50 = 50;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_useFlameAmmo;
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp51 = 51;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_coolTurret;
	ARRAY_ACCESS(jobject, sp[0].o, temp51) = sp[1].o;
	jint temp52 = 52;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_enablePixelation;
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	jint temp53 = 53;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_openWiki;
	ARRAY_ACCESS(jobject, sp[0].o, temp53) = sp[1].o;
	jint temp54 = 54;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_allTransportOneMap;
	ARRAY_ACCESS(jobject, sp[0].o, temp54) = sp[1].o;
	jint temp55 = 55;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_buildOverdriveProjector;
	ARRAY_ACCESS(jobject, sp[0].o, temp55) = sp[1].o;
	jint temp56 = 56;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_buildMendProjector;
	ARRAY_ACCESS(jobject, sp[0].o, temp56) = sp[1].o;
	jint temp57 = 57;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_buildWexWater;
	ARRAY_ACCESS(jobject, sp[0].o, temp57) = sp[1].o;
	jint temp58 = 58;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_have10mItems;
	ARRAY_ACCESS(jobject, sp[0].o, temp58) = sp[1].o;
	jint temp59 = 59;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_killEclipseDuo;
	ARRAY_ACCESS(jobject, sp[0].o, temp59) = sp[1].o;
	jint temp60 = 60;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_killMassDriver;
	ARRAY_ACCESS(jobject, sp[0].o, temp60) = sp[1].o;
	jint temp61 = 61;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_completeErekir;
	ARRAY_ACCESS(jobject, sp[0].o, temp61) = sp[1].o;
	jint temp62 = 62;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_completeSerpulo;
	ARRAY_ACCESS(jobject, sp[0].o, temp62) = sp[1].o;
	jint temp63 = 63;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_launchCoreSchematic;
	ARRAY_ACCESS(jobject, sp[0].o, temp63) = sp[1].o;
	jint temp64 = 64;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_nucleusGroundZero;
	ARRAY_ACCESS(jobject, sp[0].o, temp64) = sp[1].o;
	jint temp65 = 65;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_neoplasmWater;
	ARRAY_ACCESS(jobject, sp[0].o, temp65) = sp[1].o;
	jint temp66 = 66;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_blastFrozenUnit;
	ARRAY_ACCESS(jobject, sp[0].o, temp66) = sp[1].o;
	jint temp67 = 67;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_allBlocksSerpulo;
	ARRAY_ACCESS(jobject, sp[0].o, temp67) = sp[1].o;
	jint temp68 = 68;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_allBlocksErekir;
	ARRAY_ACCESS(jobject, sp[0].o, temp68) = sp[1].o;
	jint temp69 = 69;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_breakForceProjector;
	ARRAY_ACCESS(jobject, sp[0].o, temp69) = sp[1].o;
	jint temp70 = 70;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_researchLogic;
	ARRAY_ACCESS(jobject, sp[0].o, temp70) = sp[1].o;
	jint temp71 = 71;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_negative10kPower;
	ARRAY_ACCESS(jobject, sp[0].o, temp71) = sp[1].o;
	jint temp72 = 72;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_positive100kPower;
	ARRAY_ACCESS(jobject, sp[0].o, temp72) = sp[1].o;
	jint temp73 = 73;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_store1milPower;
	ARRAY_ACCESS(jobject, sp[0].o, temp73) = sp[1].o;
	jint temp74 = 74;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_blastGenerator;
	ARRAY_ACCESS(jobject, sp[0].o, temp74) = sp[1].o;
	jint temp75 = 75;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_neoplasiaExplosion;
	ARRAY_ACCESS(jobject, sp[0].o, temp75) = sp[1].o;
	jint temp76 = 76;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_installMod;
	ARRAY_ACCESS(jobject, sp[0].o, temp76) = sp[1].o;
	jint temp77 = 77;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_routerLanguage;
	ARRAY_ACCESS(jobject, sp[0].o, temp77) = sp[1].o;
	jint temp78 = 78;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_joinCommunityServer;
	ARRAY_ACCESS(jobject, sp[0].o, temp78) = sp[1].o;
	jint temp79 = 79;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_openConsole;
	ARRAY_ACCESS(jobject, sp[0].o, temp79) = sp[1].o;
	jint temp80 = 80;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_controlTurret;
	ARRAY_ACCESS(jobject, sp[0].o, temp80) = sp[1].o;
	jint temp81 = 81;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_dropUnitsCoreZone;
	ARRAY_ACCESS(jobject, sp[0].o, temp81) = sp[1].o;
	jint temp82 = 82;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_destroyScatterFlare;
	ARRAY_ACCESS(jobject, sp[0].o, temp82) = sp[1].o;
	jint temp83 = 83;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_boostUnit;
	ARRAY_ACCESS(jobject, sp[0].o, temp83) = sp[1].o;
	jint temp84 = 84;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_boostBuildingFloor;
	ARRAY_ACCESS(jobject, sp[0].o, temp84) = sp[1].o;
	jint temp85 = 85;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_hoverUnitLiquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp85) = sp[1].o;
	jint temp86 = 86;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_break100Boulders;
	ARRAY_ACCESS(jobject, sp[0].o, temp86) = sp[1].o;
	jint temp87 = 87;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_break10000Boulders;
	ARRAY_ACCESS(jobject, sp[0].o, temp87) = sp[1].o;
	jint temp88 = 88;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_shockwaveTowerUse;
	ARRAY_ACCESS(jobject, sp[0].o, temp88) = sp[1].o;
	jint temp89 = 89;
	clinit_mindustry_service_Achievement(ctx);
	sp[1].o = (jobject)SF_mindustry_service_Achievement_useAnimdustryEmoji;
	ARRAY_ACCESS(jobject, sp[0].o, temp89) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_service_Achievement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/service/Achievement:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_service_Achievement(ctx);
	{
	LINE_NUMBER(8);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"kill1kEnemies"_j));
	jint temp0 = jint(0);
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_unitsDestroyed;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, (1000));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_kill1kEnemies = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"kill100kEnemies"_j));
	jint temp1 = jint(1);
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_unitsDestroyed;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp1, sp[2].o, (jint(100000)));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_kill100kEnemies = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"launch100kItems"_j));
	jint temp2 = jint(2);
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_itemsLaunched;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp2, sp[2].o, (jint(100000)));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_launch100kItems = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"produce5kMin"_j));
	jint temp3 = jint(3);
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_maxProduction;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp3, sp[2].o, (5000));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_produce5kMin = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"produce50kMin"_j));
	jint temp4 = jint(4);
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_maxProduction;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp4, sp[2].o, (jint(50000)));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_produce50kMin = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"win10Attack"_j));
	jint temp5 = jint(5);
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_attacksWon;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp5, sp[2].o, (10));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_win10Attack = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"win10PvP"_j));
	jint temp6 = 6;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_pvpsWon;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp6, sp[2].o, (10));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_win10PvP = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"defeatAttack5Waves"_j))), (7));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_defeatAttack5Waves = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"launch30Times"_j));
	jint temp7 = 8;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_timesLaunched;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp7, sp[2].o, (30));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_launch30Times = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"captureBackground"_j))), (9));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_captureBackground = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"survive100Waves"_j));
	jint temp8 = 10;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_maxWavesSurvived;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp8, sp[2].o, (100));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_survive100Waves = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"researchAll"_j))), (11));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_researchAll = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shockWetEnemy"_j))), (12));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_shockWetEnemy = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"killEnemyPhaseWall"_j))), (13));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_killEnemyPhaseWall = sp[0].o;
	LINE_NUMBER(23);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"researchRouter"_j))), (14));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_researchRouter = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"place10kBlocks"_j));
	jint temp9 = 15;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_blocksBuilt;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp9, sp[2].o, (10000));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_place10kBlocks = sp[0].o;
	LINE_NUMBER(25);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"destroy1kBlocks"_j));
	jint temp10 = 16;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_blocksDestroyed;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp10, sp[2].o, (1000));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_destroy1kBlocks = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"overheatReactor"_j));
	jint temp11 = 17;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_reactorsOverheated;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp11, sp[2].o, (jint(1)));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_overheatReactor = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"make10maps"_j));
	jint temp12 = 18;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_mapsMade;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp12, sp[2].o, (10));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_make10maps = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"downloadMapWorkshop"_j))), (19));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_downloadMapWorkshop = sp[0].o;
	LINE_NUMBER(29);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"publishMap"_j));
	jint temp13 = 20;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_mapsPublished;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp13, sp[2].o, (jint(1)));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_publishMap = sp[0].o;
	LINE_NUMBER(30);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"defeatBoss"_j));
	jint temp14 = 21;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_bossesDefeated;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp14, sp[2].o, (jint(1)));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_defeatBoss = sp[0].o;
	LINE_NUMBER(31);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"captureAllSectors"_j))), (22));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_captureAllSectors = sp[0].o;
	LINE_NUMBER(32);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"control10Sectors"_j));
	jint temp15 = 23;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_sectorsControlled;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp15, sp[2].o, (10));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_control10Sectors = sp[0].o;
	LINE_NUMBER(33);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"drop10kitems"_j))), (24));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_drop10kitems = sp[0].o;
	LINE_NUMBER(34);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"powerupImpactReactor"_j))), (25));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_powerupImpactReactor = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"obtainThorium"_j))), (26));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_obtainThorium = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"obtainTitanium"_j))), (27));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_obtainTitanium = sp[0].o;
	LINE_NUMBER(37);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"suicideBomb"_j))), (28));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_suicideBomb = sp[0].o;
	LINE_NUMBER(38);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildGroundFactory"_j))), (29));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_buildGroundFactory = sp[0].o;
	LINE_NUMBER(39);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"issueAttackCommand"_j))), (30));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_issueAttackCommand = sp[0].o;
	LINE_NUMBER(40);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"active100Units"_j));
	jint temp16 = 31;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_maxUnitActive;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp16, sp[2].o, (100));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_active100Units = sp[0].o;
	LINE_NUMBER(41);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"build1000Units"_j));
	jint temp17 = 32;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_unitsBuilt;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp17, sp[2].o, (1000));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_build1000Units = sp[0].o;
	LINE_NUMBER(42);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buildAllUnits"_j));
	jint temp18 = 33;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_unitTypesBuilt;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp18, sp[2].o, (50));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_buildAllUnits = sp[0].o;
	LINE_NUMBER(43);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildT5"_j))), (34));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_buildT5 = sp[0].o;
	LINE_NUMBER(44);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pickupT5"_j))), (35));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_pickupT5 = sp[0].o;
	LINE_NUMBER(45);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"active10Polys"_j))), (36));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_active10Polys = sp[0].o;
	LINE_NUMBER(46);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dieExclusion"_j))), (37));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_dieExclusion = sp[0].o;
	LINE_NUMBER(47);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"drown"_j))), (38));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_drown = sp[0].o;
	LINE_NUMBER(48);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fillCoreAllCampaign"_j))), (39));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_fillCoreAllCampaign = sp[0].o;
	LINE_NUMBER(49);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"hostServer10"_j));
	jint temp19 = 40;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_maxPlayersServer;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp19, sp[2].o, (10));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_hostServer10 = sp[0].o;
	LINE_NUMBER(50);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildMeltdownSpectre"_j))), (41));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_buildMeltdownSpectre = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"launchItemPad"_j))), (42));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_launchItemPad = sp[0].o;
	LINE_NUMBER(52);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"chainRouters"_j))), (43));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_chainRouters = sp[0].o;
	LINE_NUMBER(53);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"circleConveyor"_j))), (44));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_circleConveyor = sp[0].o;
	LINE_NUMBER(54);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"becomeRouter"_j))), (45));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_becomeRouter = sp[0].o;
	LINE_NUMBER(55);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"create20Schematics"_j));
	jint temp20 = 46;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_schematicsCreated;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp20, sp[2].o, (20));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_create20Schematics = sp[0].o;
	LINE_NUMBER(56);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"create500Schematics"_j));
	jint temp21 = 47;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_schematicsCreated;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp21, sp[2].o, (500));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_create500Schematics = sp[0].o;
	LINE_NUMBER(57);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"survive10WavesNoBlocks"_j))), (48));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_survive10WavesNoBlocks = sp[0].o;
	LINE_NUMBER(58);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"captureNoBlocksBroken"_j))), (49));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_captureNoBlocksBroken = sp[0].o;
	LINE_NUMBER(59);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"useFlameAmmo"_j))), (50));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_useFlameAmmo = sp[0].o;
	LINE_NUMBER(60);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"coolTurret"_j))), (51));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_coolTurret = sp[0].o;
	LINE_NUMBER(61);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"enablePixelation"_j))), (52));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_enablePixelation = sp[0].o;
	LINE_NUMBER(62);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"openWiki"_j))), (53));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_openWiki = sp[0].o;
	LINE_NUMBER(63);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"allTransportOneMap"_j))), (54));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_allTransportOneMap = sp[0].o;
	LINE_NUMBER(64);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildOverdriveProjector"_j))), (55));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_buildOverdriveProjector = sp[0].o;
	LINE_NUMBER(65);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildMendProjector"_j))), (56));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_buildMendProjector = sp[0].o;
	LINE_NUMBER(66);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildWexWater"_j))), (57));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_buildWexWater = sp[0].o;
	LINE_NUMBER(68);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"have10mItems"_j));
	jint temp22 = 58;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_totalCampaignItems;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp22, sp[2].o, (jint(10000000)));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_have10mItems = sp[0].o;
	LINE_NUMBER(69);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"killEclipseDuo"_j))), (59));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_killEclipseDuo = sp[0].o;
	LINE_NUMBER(70);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"killMassDriver"_j))), (60));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_killMassDriver = sp[0].o;
	LINE_NUMBER(72);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"completeErekir"_j))), (61));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_completeErekir = sp[0].o;
	LINE_NUMBER(73);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"completeSerpulo"_j))), (62));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_completeSerpulo = sp[0].o;
	LINE_NUMBER(75);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"launchCoreSchematic"_j))), (63));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_launchCoreSchematic = sp[0].o;
	LINE_NUMBER(76);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nucleusGroundZero"_j))), (64));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_nucleusGroundZero = sp[0].o;
	LINE_NUMBER(78);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"neoplasmWater"_j))), (65));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_neoplasmWater = sp[0].o;
	LINE_NUMBER(79);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blastFrozenUnit"_j))), (66));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_blastFrozenUnit = sp[0].o;
	LINE_NUMBER(81);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"allBlocksSerpulo"_j))), (67));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_allBlocksSerpulo = sp[0].o;
	LINE_NUMBER(82);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"allBlocksErekir"_j))), (68));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_allBlocksErekir = sp[0].o;
	LINE_NUMBER(84);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"breakForceProjector"_j))), (69));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_breakForceProjector = sp[0].o;
	LINE_NUMBER(85);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"researchLogic"_j))), (70));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_researchLogic = sp[0].o;
	LINE_NUMBER(87);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"negative10kPower"_j))), (71));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_negative10kPower = sp[0].o;
	LINE_NUMBER(88);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"positive100kPower"_j))), (72));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_positive100kPower = sp[0].o;
	LINE_NUMBER(89);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"store1milPower"_j))), (73));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_store1milPower = sp[0].o;
	LINE_NUMBER(91);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blastGenerator"_j))), (74));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_blastGenerator = sp[0].o;
	LINE_NUMBER(92);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"neoplasiaExplosion"_j))), (75));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_neoplasiaExplosion = sp[0].o;
	LINE_NUMBER(94);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"installMod"_j))), (76));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_installMod = sp[0].o;
	LINE_NUMBER(95);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"routerLanguage"_j))), (77));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_routerLanguage = sp[0].o;
	LINE_NUMBER(96);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"joinCommunityServer"_j))), (78));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_joinCommunityServer = sp[0].o;
	LINE_NUMBER(97);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"openConsole"_j))), (79));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_openConsole = sp[0].o;
	LINE_NUMBER(99);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"controlTurret"_j))), (80));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_controlTurret = sp[0].o;
	LINE_NUMBER(100);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dropUnitsCoreZone"_j))), (81));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_dropUnitsCoreZone = sp[0].o;
	LINE_NUMBER(101);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"destroyScatterFlare"_j))), (82));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_destroyScatterFlare = sp[0].o;
	LINE_NUMBER(102);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boostUnit"_j))), (83));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_boostUnit = sp[0].o;
	LINE_NUMBER(103);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boostBuildingFloor"_j))), (84));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_boostBuildingFloor = sp[0].o;
	LINE_NUMBER(105);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hoverUnitLiquid"_j))), (85));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_hoverUnitLiquid = sp[0].o;
	LINE_NUMBER(107);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"break100Boulders"_j));
	jint temp23 = 86;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_bouldersDeconstructed;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp23, sp[2].o, (100));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_break100Boulders = sp[0].o;
	LINE_NUMBER(108);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"break10000Boulders"_j));
	jint temp24 = 87;
	clinit_mindustry_service_SStat(ctx);
	sp[2].o = (jobject)SF_mindustry_service_SStat_bouldersDeconstructed;
	init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int(ctx, sp[0].o, sp[1].o, temp24, sp[2].o, (10000));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_break10000Boulders = sp[0].o;
	LINE_NUMBER(110);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shockwaveTowerUse"_j))), (88));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_shockwaveTowerUse = sp[0].o;
	LINE_NUMBER(112);
	clinit_mindustry_service_Achievement(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_service_Achievement);
	init_mindustry_service_Achievement_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"useAnimdustryEmoji"_j))), (89));
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_useAnimdustryEmoji = sp[0].o;
	LINE_NUMBER(7);
	sp[0].o = (jobject)SM_mindustry_service_Achievement_$values_R_Array1_mindustry_service_Achievement(ctx);
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_$VALUES = sp[0].o;
	LINE_NUMBER(120);
	sp[0].o = (jobject)SM_mindustry_service_Achievement_values_R_Array1_mindustry_service_Achievement(ctx);
	clinit_mindustry_service_Achievement(ctx);
	SF_mindustry_service_Achievement_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_service_Achievement[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_mindustry_service_Achievement_complete,
	(void *) M_mindustry_service_Achievement_uncomplete,
	(void *) M_mindustry_service_Achievement_checkCompletion,
	(void *) M_mindustry_service_Achievement_isAchieved_R_boolean,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "complete", "()V" },
	{ "uncomplete", "()V" },
	{ "checkCompletion", "()V" },
	{ "isAchieved", "()Z" },
};

static FieldMetadata fields[] {
	{ "kill1kEnemies", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_kill1kEnemies, "Lmindustry/service/Achievement;", 16409 },
	{ "kill100kEnemies", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_kill100kEnemies, "Lmindustry/service/Achievement;", 16409 },
	{ "launch100kItems", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_launch100kItems, "Lmindustry/service/Achievement;", 16409 },
	{ "produce5kMin", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_produce5kMin, "Lmindustry/service/Achievement;", 16409 },
	{ "produce50kMin", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_produce50kMin, "Lmindustry/service/Achievement;", 16409 },
	{ "win10Attack", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_win10Attack, "Lmindustry/service/Achievement;", 16409 },
	{ "win10PvP", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_win10PvP, "Lmindustry/service/Achievement;", 16409 },
	{ "defeatAttack5Waves", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_defeatAttack5Waves, "Lmindustry/service/Achievement;", 16409 },
	{ "launch30Times", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_launch30Times, "Lmindustry/service/Achievement;", 16409 },
	{ "captureBackground", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_captureBackground, "Lmindustry/service/Achievement;", 16409 },
	{ "survive100Waves", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_survive100Waves, "Lmindustry/service/Achievement;", 16409 },
	{ "researchAll", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_researchAll, "Lmindustry/service/Achievement;", 16409 },
	{ "shockWetEnemy", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_shockWetEnemy, "Lmindustry/service/Achievement;", 16409 },
	{ "killEnemyPhaseWall", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_killEnemyPhaseWall, "Lmindustry/service/Achievement;", 16409 },
	{ "researchRouter", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_researchRouter, "Lmindustry/service/Achievement;", 16409 },
	{ "place10kBlocks", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_place10kBlocks, "Lmindustry/service/Achievement;", 16409 },
	{ "destroy1kBlocks", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_destroy1kBlocks, "Lmindustry/service/Achievement;", 16409 },
	{ "overheatReactor", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_overheatReactor, "Lmindustry/service/Achievement;", 16409 },
	{ "make10maps", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_make10maps, "Lmindustry/service/Achievement;", 16409 },
	{ "downloadMapWorkshop", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_downloadMapWorkshop, "Lmindustry/service/Achievement;", 16409 },
	{ "publishMap", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_publishMap, "Lmindustry/service/Achievement;", 16409 },
	{ "defeatBoss", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_defeatBoss, "Lmindustry/service/Achievement;", 16409 },
	{ "captureAllSectors", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_captureAllSectors, "Lmindustry/service/Achievement;", 16409 },
	{ "control10Sectors", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_control10Sectors, "Lmindustry/service/Achievement;", 16409 },
	{ "drop10kitems", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_drop10kitems, "Lmindustry/service/Achievement;", 16409 },
	{ "powerupImpactReactor", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_powerupImpactReactor, "Lmindustry/service/Achievement;", 16409 },
	{ "obtainThorium", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_obtainThorium, "Lmindustry/service/Achievement;", 16409 },
	{ "obtainTitanium", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_obtainTitanium, "Lmindustry/service/Achievement;", 16409 },
	{ "suicideBomb", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_suicideBomb, "Lmindustry/service/Achievement;", 16409 },
	{ "buildGroundFactory", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_buildGroundFactory, "Lmindustry/service/Achievement;", 16409 },
	{ "issueAttackCommand", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_issueAttackCommand, "Lmindustry/service/Achievement;", 16409 },
	{ "active100Units", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_active100Units, "Lmindustry/service/Achievement;", 16409 },
	{ "build1000Units", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_build1000Units, "Lmindustry/service/Achievement;", 16409 },
	{ "buildAllUnits", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_buildAllUnits, "Lmindustry/service/Achievement;", 16409 },
	{ "buildT5", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_buildT5, "Lmindustry/service/Achievement;", 16409 },
	{ "pickupT5", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_pickupT5, "Lmindustry/service/Achievement;", 16409 },
	{ "active10Polys", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_active10Polys, "Lmindustry/service/Achievement;", 16409 },
	{ "dieExclusion", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_dieExclusion, "Lmindustry/service/Achievement;", 16409 },
	{ "drown", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_drown, "Lmindustry/service/Achievement;", 16409 },
	{ "fillCoreAllCampaign", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_fillCoreAllCampaign, "Lmindustry/service/Achievement;", 16409 },
	{ "hostServer10", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_hostServer10, "Lmindustry/service/Achievement;", 16409 },
	{ "buildMeltdownSpectre", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_buildMeltdownSpectre, "Lmindustry/service/Achievement;", 16409 },
	{ "launchItemPad", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_launchItemPad, "Lmindustry/service/Achievement;", 16409 },
	{ "chainRouters", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_chainRouters, "Lmindustry/service/Achievement;", 16409 },
	{ "circleConveyor", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_circleConveyor, "Lmindustry/service/Achievement;", 16409 },
	{ "becomeRouter", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_becomeRouter, "Lmindustry/service/Achievement;", 16409 },
	{ "create20Schematics", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_create20Schematics, "Lmindustry/service/Achievement;", 16409 },
	{ "create500Schematics", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_create500Schematics, "Lmindustry/service/Achievement;", 16409 },
	{ "survive10WavesNoBlocks", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_survive10WavesNoBlocks, "Lmindustry/service/Achievement;", 16409 },
	{ "captureNoBlocksBroken", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_captureNoBlocksBroken, "Lmindustry/service/Achievement;", 16409 },
	{ "useFlameAmmo", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_useFlameAmmo, "Lmindustry/service/Achievement;", 16409 },
	{ "coolTurret", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_coolTurret, "Lmindustry/service/Achievement;", 16409 },
	{ "enablePixelation", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_enablePixelation, "Lmindustry/service/Achievement;", 16409 },
	{ "openWiki", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_openWiki, "Lmindustry/service/Achievement;", 16409 },
	{ "allTransportOneMap", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_allTransportOneMap, "Lmindustry/service/Achievement;", 16409 },
	{ "buildOverdriveProjector", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_buildOverdriveProjector, "Lmindustry/service/Achievement;", 16409 },
	{ "buildMendProjector", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_buildMendProjector, "Lmindustry/service/Achievement;", 16409 },
	{ "buildWexWater", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_buildWexWater, "Lmindustry/service/Achievement;", 16409 },
	{ "have10mItems", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_have10mItems, "Lmindustry/service/Achievement;", 16409 },
	{ "killEclipseDuo", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_killEclipseDuo, "Lmindustry/service/Achievement;", 16409 },
	{ "killMassDriver", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_killMassDriver, "Lmindustry/service/Achievement;", 16409 },
	{ "completeErekir", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_completeErekir, "Lmindustry/service/Achievement;", 16409 },
	{ "completeSerpulo", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_completeSerpulo, "Lmindustry/service/Achievement;", 16409 },
	{ "launchCoreSchematic", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_launchCoreSchematic, "Lmindustry/service/Achievement;", 16409 },
	{ "nucleusGroundZero", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_nucleusGroundZero, "Lmindustry/service/Achievement;", 16409 },
	{ "neoplasmWater", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_neoplasmWater, "Lmindustry/service/Achievement;", 16409 },
	{ "blastFrozenUnit", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_blastFrozenUnit, "Lmindustry/service/Achievement;", 16409 },
	{ "allBlocksSerpulo", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_allBlocksSerpulo, "Lmindustry/service/Achievement;", 16409 },
	{ "allBlocksErekir", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_allBlocksErekir, "Lmindustry/service/Achievement;", 16409 },
	{ "breakForceProjector", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_breakForceProjector, "Lmindustry/service/Achievement;", 16409 },
	{ "researchLogic", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_researchLogic, "Lmindustry/service/Achievement;", 16409 },
	{ "negative10kPower", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_negative10kPower, "Lmindustry/service/Achievement;", 16409 },
	{ "positive100kPower", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_positive100kPower, "Lmindustry/service/Achievement;", 16409 },
	{ "store1milPower", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_store1milPower, "Lmindustry/service/Achievement;", 16409 },
	{ "blastGenerator", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_blastGenerator, "Lmindustry/service/Achievement;", 16409 },
	{ "neoplasiaExplosion", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_neoplasiaExplosion, "Lmindustry/service/Achievement;", 16409 },
	{ "installMod", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_installMod, "Lmindustry/service/Achievement;", 16409 },
	{ "routerLanguage", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_routerLanguage, "Lmindustry/service/Achievement;", 16409 },
	{ "joinCommunityServer", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_joinCommunityServer, "Lmindustry/service/Achievement;", 16409 },
	{ "openConsole", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_openConsole, "Lmindustry/service/Achievement;", 16409 },
	{ "controlTurret", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_controlTurret, "Lmindustry/service/Achievement;", 16409 },
	{ "dropUnitsCoreZone", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_dropUnitsCoreZone, "Lmindustry/service/Achievement;", 16409 },
	{ "destroyScatterFlare", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_destroyScatterFlare, "Lmindustry/service/Achievement;", 16409 },
	{ "boostUnit", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_boostUnit, "Lmindustry/service/Achievement;", 16409 },
	{ "boostBuildingFloor", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_boostBuildingFloor, "Lmindustry/service/Achievement;", 16409 },
	{ "hoverUnitLiquid", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_hoverUnitLiquid, "Lmindustry/service/Achievement;", 16409 },
	{ "break100Boulders", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_break100Boulders, "Lmindustry/service/Achievement;", 16409 },
	{ "break10000Boulders", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_break10000Boulders, "Lmindustry/service/Achievement;", 16409 },
	{ "shockwaveTowerUse", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_shockwaveTowerUse, "Lmindustry/service/Achievement;", 16409 },
	{ "useAnimdustryEmoji", &class_mindustry_service_Achievement, (intptr_t) &SF_mindustry_service_Achievement_useAnimdustryEmoji, "Lmindustry/service/Achievement;", 16409 },
	{ "stat", &class_mindustry_service_SStat, offsetof(mindustry_service_Achievement, F_stat), "Lmindustry/service/SStat;", 18 },
	{ "statGoal", &class_int, offsetof(mindustry_service_Achievement, F_statGoal), "I", 18 },
	{ "completed", &class_boolean, offsetof(mindustry_service_Achievement, F_completed), "Z", 2 },
	{ "all", getArrayClass(&class_mindustry_service_Achievement, 1), (intptr_t) &SF_mindustry_service_Achievement_all, "[Lmindustry/service/Achievement;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_service_Achievement, 1), (intptr_t) &SF_mindustry_service_Achievement_$VALUES, "[Lmindustry/service/Achievement;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_service_Achievement_values_R_Array1_mindustry_service_Achievement, 0, "()[Lmindustry/service/Achievement;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_service_Achievement_valueOf_java_lang_String_R_mindustry_service_Achievement, 0, "(Ljava/lang/String;)Lmindustry/service/Achievement;", 9 },
	{ "<init>", (intptr_t) init_mindustry_service_Achievement_java_lang_String_int_mindustry_service_SStat_int, 0, "(Ljava/lang/String;ILmindustry/service/SStat;I)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_service_Achievement_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "complete", (intptr_t) M_mindustry_service_Achievement_complete, VTABLE_mindustry_service_Achievement_complete, "()V", 1 },
	{ "uncomplete", (intptr_t) M_mindustry_service_Achievement_uncomplete, VTABLE_mindustry_service_Achievement_uncomplete, "()V", 1 },
	{ "checkCompletion", (intptr_t) M_mindustry_service_Achievement_checkCompletion, VTABLE_mindustry_service_Achievement_checkCompletion, "()V", 1 },
	{ "isAchieved", (intptr_t) M_mindustry_service_Achievement_isAchieved_R_boolean, VTABLE_mindustry_service_Achievement_isAchieved_R_boolean, "()Z", 1 },
	{ "$values", (intptr_t) SM_mindustry_service_Achievement_$values_R_Array1_mindustry_service_Achievement, 0, "()[Lmindustry/service/Achievement;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_service_Achievement, 0, "()V", 8 },
};

Class class_mindustry_service_Achievement{
		.nativeName = (intptr_t) "mindustry/service/Achievement",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_service_Achievement),
		.classVtable = (intptr_t) vtable_mindustry_service_Achievement,
		.staticInitializer = (intptr_t) clinit_mindustry_service_Achievement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_service_Achievement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 95,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_service_Achievement = registerClass(&class_mindustry_service_Achievement);

}
