#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/String.h"
#include "arc/graphics/Color.h"

extern "C" {

jobject SF_mindustry_graphics_Pal_water;
jobject SF_mindustry_graphics_Pal_darkOutline;
jobject SF_mindustry_graphics_Pal_thoriumPink;
jobject SF_mindustry_graphics_Pal_coalBlack;
jobject SF_mindustry_graphics_Pal_items;
jobject SF_mindustry_graphics_Pal_command;
jobject SF_mindustry_graphics_Pal_sap;
jobject SF_mindustry_graphics_Pal_sapBullet;
jobject SF_mindustry_graphics_Pal_sapBulletBack;
jobject SF_mindustry_graphics_Pal_suppress;
jobject SF_mindustry_graphics_Pal_regen;
jobject SF_mindustry_graphics_Pal_reactorPurple;
jobject SF_mindustry_graphics_Pal_reactorPurple2;
jobject SF_mindustry_graphics_Pal_spore;
jobject SF_mindustry_graphics_Pal_shield;
jobject SF_mindustry_graphics_Pal_bulletYellow;
jobject SF_mindustry_graphics_Pal_bulletYellowBack;
jobject SF_mindustry_graphics_Pal_darkMetal;
jobject SF_mindustry_graphics_Pal_darkerMetal;
jobject SF_mindustry_graphics_Pal_darkestMetal;
jobject SF_mindustry_graphics_Pal_missileYellow;
jobject SF_mindustry_graphics_Pal_missileYellowBack;
jobject SF_mindustry_graphics_Pal_meltdownHit;
jobject SF_mindustry_graphics_Pal_plastaniumBack;
jobject SF_mindustry_graphics_Pal_plastaniumFront;
jobject SF_mindustry_graphics_Pal_lightFlame;
jobject SF_mindustry_graphics_Pal_darkFlame;
jobject SF_mindustry_graphics_Pal_lightPyraFlame;
jobject SF_mindustry_graphics_Pal_darkPyraFlame;
jobject SF_mindustry_graphics_Pal_turretHeat;
jobject SF_mindustry_graphics_Pal_lightOrange;
jobject SF_mindustry_graphics_Pal_lightishOrange;
jobject SF_mindustry_graphics_Pal_lighterOrange;
jobject SF_mindustry_graphics_Pal_lightishGray;
jobject SF_mindustry_graphics_Pal_darkishGray;
jobject SF_mindustry_graphics_Pal_darkerGray;
jobject SF_mindustry_graphics_Pal_darkestGray;
jobject SF_mindustry_graphics_Pal_darkestestGray;
jobject SF_mindustry_graphics_Pal_shadow;
jobject SF_mindustry_graphics_Pal_ammo;
jobject SF_mindustry_graphics_Pal_rubble;
jobject SF_mindustry_graphics_Pal_boostTo;
jobject SF_mindustry_graphics_Pal_boostFrom;
jobject SF_mindustry_graphics_Pal_lancerLaser;
jobject SF_mindustry_graphics_Pal_stoneGray;
jobject SF_mindustry_graphics_Pal_engine;
jobject SF_mindustry_graphics_Pal_yellowBoltFront;
jobject SF_mindustry_graphics_Pal_health;
jobject SF_mindustry_graphics_Pal_heal;
jobject SF_mindustry_graphics_Pal_bar;
jobject SF_mindustry_graphics_Pal_accent;
jobject SF_mindustry_graphics_Pal_stat;
jobject SF_mindustry_graphics_Pal_negativeStat;
jobject SF_mindustry_graphics_Pal_gray;
jobject SF_mindustry_graphics_Pal_metalGrayDark;
jobject SF_mindustry_graphics_Pal_accentBack;
jobject SF_mindustry_graphics_Pal_place;
jobject SF_mindustry_graphics_Pal_remove;
jobject SF_mindustry_graphics_Pal_noplace;
jobject SF_mindustry_graphics_Pal_removeBack;
jobject SF_mindustry_graphics_Pal_placeRotate;
jobject SF_mindustry_graphics_Pal_breakInvalid;
jobject SF_mindustry_graphics_Pal_range;
jobject SF_mindustry_graphics_Pal_power;
jobject SF_mindustry_graphics_Pal_powerBar;
jobject SF_mindustry_graphics_Pal_powerLight;
jobject SF_mindustry_graphics_Pal_placing;
jobject SF_mindustry_graphics_Pal_unitFront;
jobject SF_mindustry_graphics_Pal_unitBack;
jobject SF_mindustry_graphics_Pal_lightTrail;
jobject SF_mindustry_graphics_Pal_surge;
jobject SF_mindustry_graphics_Pal_plastanium;
jobject SF_mindustry_graphics_Pal_redSpark;
jobject SF_mindustry_graphics_Pal_orangeSpark;
jobject SF_mindustry_graphics_Pal_redDust;
jobject SF_mindustry_graphics_Pal_redderDust;
jobject SF_mindustry_graphics_Pal_plasticSmoke;
jobject SF_mindustry_graphics_Pal_adminChat;
jobject SF_mindustry_graphics_Pal_neoplasmOutline;
jobject SF_mindustry_graphics_Pal_neoplasm1;
jobject SF_mindustry_graphics_Pal_neoplasmMid;
jobject SF_mindustry_graphics_Pal_neoplasm2;
jobject SF_mindustry_graphics_Pal_neoplasmAcid;
jobject SF_mindustry_graphics_Pal_neoplasmAcidGlow;
jobject SF_mindustry_graphics_Pal_logicBlocks;
jobject SF_mindustry_graphics_Pal_logicControl;
jobject SF_mindustry_graphics_Pal_logicOperations;
jobject SF_mindustry_graphics_Pal_logicIo;
jobject SF_mindustry_graphics_Pal_logicUnits;
jobject SF_mindustry_graphics_Pal_logicWorld;
jobject SF_mindustry_graphics_Pal_berylShot;
jobject SF_mindustry_graphics_Pal_tungstenShot;
jobject SF_mindustry_graphics_Pal_plasticBurn;
jobject SF_mindustry_graphics_Pal_muddy;
jobject SF_mindustry_graphics_Pal_redLight;
jobject SF_mindustry_graphics_Pal_slagOrange;
jobject SF_mindustry_graphics_Pal_techBlue;
jobject SF_mindustry_graphics_Pal_vent;
jobject SF_mindustry_graphics_Pal_vent2;
jobject SF_mindustry_graphics_Pal_copperAmmoFront;
jobject SF_mindustry_graphics_Pal_copperAmmoBack;
jobject SF_mindustry_graphics_Pal_graphiteAmmoBack;
jobject SF_mindustry_graphics_Pal_graphiteAmmoFront;
jobject SF_mindustry_graphics_Pal_siliconAmmoBack;
jobject SF_mindustry_graphics_Pal_siliconAmmoFront;
jobject SF_mindustry_graphics_Pal_glassAmmoBack;
jobject SF_mindustry_graphics_Pal_glassAmmoFront;
jobject SF_mindustry_graphics_Pal_scrapAmmoFront;
jobject SF_mindustry_graphics_Pal_scrapAmmoBack;
jobject SF_mindustry_graphics_Pal_surgeAmmoFront;
jobject SF_mindustry_graphics_Pal_surgeAmmoBack;
jobject SF_mindustry_graphics_Pal_blastAmmoBack;
jobject SF_mindustry_graphics_Pal_blastAmmoFront;
jobject SF_mindustry_graphics_Pal_thoriumAmmoBack;
jobject SF_mindustry_graphics_Pal_thoriumAmmoFront;

void mark_mindustry_graphics_Pal(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_Pal_water)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_water)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_water, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_darkOutline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_darkOutline)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_darkOutline, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_thoriumPink)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_thoriumPink)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_thoriumPink, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_coalBlack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_coalBlack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_coalBlack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_items)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_items)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_items, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_command)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_command)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_command, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_sap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_sap)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_sap, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_sapBullet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_sapBullet)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_sapBullet, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_sapBulletBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_sapBulletBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_sapBulletBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_suppress)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_suppress)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_suppress, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_regen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_regen)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_regen, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_reactorPurple)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_reactorPurple)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_reactorPurple, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_reactorPurple2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_reactorPurple2)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_reactorPurple2, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_spore)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_spore)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_spore, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_shield)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_shield)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_shield, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_bulletYellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_bulletYellow)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_bulletYellow, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_bulletYellowBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_bulletYellowBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_bulletYellowBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_darkMetal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_darkMetal)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_darkMetal, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_darkerMetal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_darkerMetal)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_darkerMetal, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_darkestMetal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_darkestMetal)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_darkestMetal, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_missileYellow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_missileYellow)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_missileYellow, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_missileYellowBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_missileYellowBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_missileYellowBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_meltdownHit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_meltdownHit)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_meltdownHit, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_plastaniumBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_plastaniumBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_plastaniumBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_plastaniumFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_plastaniumFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_plastaniumFront, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_lightFlame)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_lightFlame)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_lightFlame, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_darkFlame)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_darkFlame)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_darkFlame, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_lightPyraFlame)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_lightPyraFlame)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_lightPyraFlame, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_darkPyraFlame)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_darkPyraFlame)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_darkPyraFlame, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_turretHeat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_turretHeat)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_turretHeat, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_lightOrange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_lightOrange)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_lightOrange, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_lightishOrange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_lightishOrange)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_lightishOrange, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_lighterOrange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_lighterOrange)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_lighterOrange, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_lightishGray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_lightishGray)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_lightishGray, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_darkishGray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_darkishGray)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_darkishGray, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_darkerGray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_darkerGray)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_darkerGray, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_darkestGray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_darkestGray)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_darkestGray, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_darkestestGray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_darkestestGray)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_darkestestGray, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_shadow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_shadow)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_shadow, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_ammo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_ammo)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_ammo, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_rubble)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_rubble)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_rubble, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_boostTo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_boostTo)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_boostTo, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_boostFrom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_boostFrom)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_boostFrom, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_lancerLaser)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_lancerLaser)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_lancerLaser, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_stoneGray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_stoneGray)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_stoneGray, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_engine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_engine)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_engine, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_yellowBoltFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_yellowBoltFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_yellowBoltFront, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_health)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_health)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_health, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_heal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_heal)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_heal, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_bar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_bar)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_bar, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_accent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_accent)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_accent, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_stat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_stat)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_stat, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_negativeStat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_negativeStat)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_negativeStat, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_gray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_gray)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_gray, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_metalGrayDark)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_metalGrayDark)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_metalGrayDark, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_accentBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_accentBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_accentBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_place)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_place)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_place, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_remove)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_remove)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_remove, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_noplace)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_noplace)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_noplace, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_removeBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_removeBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_removeBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_placeRotate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_placeRotate)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_placeRotate, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_breakInvalid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_breakInvalid)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_breakInvalid, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_range)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_range)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_range, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_power)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_power)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_power, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_powerBar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_powerBar)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_powerBar, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_powerLight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_powerLight)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_powerLight, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_placing)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_placing)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_placing, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_unitFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_unitFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_unitFront, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_unitBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_unitBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_unitBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_lightTrail)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_lightTrail)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_lightTrail, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_surge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_surge)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_surge, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_plastanium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_plastanium)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_plastanium, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_redSpark)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_redSpark)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_redSpark, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_orangeSpark)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_orangeSpark)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_orangeSpark, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_redDust)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_redDust)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_redDust, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_redderDust)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_redderDust)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_redderDust, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_plasticSmoke)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_plasticSmoke)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_plasticSmoke, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_adminChat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_adminChat)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_adminChat, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_neoplasmOutline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_neoplasmOutline)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_neoplasmOutline, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_neoplasm1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_neoplasm1)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_neoplasm1, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_neoplasmMid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_neoplasmMid)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_neoplasmMid, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_neoplasm2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_neoplasm2)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_neoplasm2, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_neoplasmAcid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_neoplasmAcid)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_neoplasmAcid, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_neoplasmAcidGlow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_neoplasmAcidGlow)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_neoplasmAcidGlow, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_logicBlocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_logicBlocks)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_logicBlocks, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_logicControl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_logicControl)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_logicControl, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_logicOperations)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_logicOperations)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_logicOperations, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_logicIo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_logicIo)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_logicIo, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_logicUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_logicUnits)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_logicUnits, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_logicWorld)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_logicWorld)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_logicWorld, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_berylShot)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_berylShot)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_berylShot, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_tungstenShot)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_tungstenShot)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_tungstenShot, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_plasticBurn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_plasticBurn)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_plasticBurn, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_muddy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_muddy)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_muddy, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_redLight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_redLight)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_redLight, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_slagOrange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_slagOrange)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_slagOrange, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_techBlue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_techBlue)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_techBlue, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_vent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_vent)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_vent, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_vent2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_vent2)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_vent2, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_copperAmmoFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_copperAmmoFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_copperAmmoFront, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_copperAmmoBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_copperAmmoBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_copperAmmoBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_graphiteAmmoBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_graphiteAmmoBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_graphiteAmmoBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_graphiteAmmoFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_graphiteAmmoFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_graphiteAmmoFront, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_siliconAmmoBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_siliconAmmoBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_siliconAmmoBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_siliconAmmoFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_siliconAmmoFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_siliconAmmoFront, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_glassAmmoBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_glassAmmoBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_glassAmmoBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_glassAmmoFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_glassAmmoFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_glassAmmoFront, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_scrapAmmoFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_scrapAmmoFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_scrapAmmoFront, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_scrapAmmoBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_scrapAmmoBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_scrapAmmoBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_surgeAmmoFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_surgeAmmoFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_surgeAmmoFront, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_surgeAmmoBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_surgeAmmoBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_surgeAmmoBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_blastAmmoBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_blastAmmoBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_blastAmmoBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_blastAmmoFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_blastAmmoFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_blastAmmoFront, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_thoriumAmmoBack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_thoriumAmmoBack)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_thoriumAmmoBack, mark, depth + 1);
		if (SF_mindustry_graphics_Pal_thoriumAmmoFront)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_Pal_thoriumAmmoFront)->clazz)->markFunction)((jobject) SF_mindustry_graphics_Pal_thoriumAmmoFront, mark, depth + 1);
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
	auto self = (mindustry_graphics_Pal *) object;
}

void init_mindustry_graphics_Pal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Pal:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Pal(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_Pal(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Pal:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Pal(ctx);
	{
	LINE_NUMBER(8);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"596ab8"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_water = sp[0].o;
	LINE_NUMBER(9);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"2d2f39"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_darkOutline = sp[0].o;
	LINE_NUMBER(10);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f9a3c7"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_thoriumPink = sp[0].o;
	LINE_NUMBER(11);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"272727"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_coalBlack = sp[0].o;
	LINE_NUMBER(13);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"2ea756"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_items = sp[0].o;
	LINE_NUMBER(14);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"eab678"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_command = sp[0].o;
	LINE_NUMBER(16);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"665c9f"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_sap = sp[0].o;
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"bf92f9"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_sapBullet = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"6d56bf"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_sapBulletBack = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_sap;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(1.6f)));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_suppress = sp[0].o;
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d1efff"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_regen = sp[0].o;
	LINE_NUMBER(24);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"bf92f9"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_reactorPurple = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"8a73c6"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_reactorPurple2 = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"7457ce"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_spore = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(0.7f)));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_shield = sp[0].o;
	LINE_NUMBER(31);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"fff8e8"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_bulletYellow = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f9c27a"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_bulletYellowBack = sp[0].o;
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"6e7080"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_darkMetal = sp[0].o;
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"565666"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_darkerMetal = sp[0].o;
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"38393f"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_darkestMetal = sp[0].o;
	LINE_NUMBER(38);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd2ae"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_missileYellow = sp[0].o;
	LINE_NUMBER(39);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e58956"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_missileYellowBack = sp[0].o;
	LINE_NUMBER(41);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffb98b"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_meltdownHit = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d8d97f"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_plastaniumBack = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"fffac6"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_plastaniumFront = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffdd55"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_lightFlame = sp[0].o;
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"db401c"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_darkFlame = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffb855"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_lightPyraFlame = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"db661c"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_darkPyraFlame = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ab3400"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_turretHeat = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f68021"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_lightOrange = sp[0].o;
	LINE_NUMBER(55);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f8ad42"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_lightishOrange = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f6e096"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_lighterOrange = sp[0].o;
	LINE_NUMBER(58);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a2a2a2"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_lightishGray = sp[0].o;
	LINE_NUMBER(59);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0.3f)), (jfloat(0.3f)), (jfloat(0.3f)), (jfloat(1)));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_darkishGray = sp[0].o;
	LINE_NUMBER(60);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0.2f)), (jfloat(0.2f)), (jfloat(0.2f)), (jfloat(1)));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_darkerGray = sp[0].o;
	LINE_NUMBER(61);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0.1f)), (jfloat(0.1f)), (jfloat(0.1f)), (jfloat(1)));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_darkestGray = sp[0].o;
	LINE_NUMBER(62);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0.05f)), (jfloat(0.05f)), (jfloat(0.05f)), (jfloat(1)));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_darkestestGray = sp[0].o;
	LINE_NUMBER(63);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0.22f)));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_shadow = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff8947"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_ammo = sp[0].o;
	LINE_NUMBER(65);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"1c1817"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_rubble = sp[0].o;
	LINE_NUMBER(67);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffad4d"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_boostTo = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff7f57"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_boostFrom = sp[0].o;
	LINE_NUMBER(70);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a9d8ff"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_lancerLaser = sp[0].o;
	LINE_NUMBER(72);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"8f8f8f"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_stoneGray = sp[0].o;
	LINE_NUMBER(73);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffbb64"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_engine = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd27e"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_yellowBoltFront = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff341c"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_health = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"98ffa9"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_heal = sp[0].o;
	LINE_NUMBER(78);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_slate;
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_bar = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_accent = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffd37f"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_stat = sp[0].o;
	LINE_NUMBER(81);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e55454"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_negativeStat = sp[0].o;
	LINE_NUMBER(82);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"454545"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_gray = sp[0].o;
	LINE_NUMBER(83);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"6e7080"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_metalGrayDark = sp[0].o;
	LINE_NUMBER(84);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d4816b"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_accentBack = sp[0].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"6335f8"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_place = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e55454"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_remove = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffa697"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_noplace = sp[0].o;
	LINE_NUMBER(88);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a73e3e"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_removeBack = sp[0].o;
	LINE_NUMBER(89);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_placeRotate = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d44b3d"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_breakInvalid = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f4ba6e"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_range = sp[0].o;
	LINE_NUMBER(92);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"fbad67"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_power = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ec7b4c"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_powerBar = sp[0].o;
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"fbd367"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_powerLight = sp[0].o;
	LINE_NUMBER(95);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_accent;
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_placing = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffa665"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_unitFront = sp[0].o;
	LINE_NUMBER(98);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d06b53"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_unitBack = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffe2a9"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_lightTrail = sp[0].o;
	LINE_NUMBER(102);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f3e979"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_surge = sp[0].o;
	LINE_NUMBER(104);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a1b46e"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_plastanium = sp[0].o;
	LINE_NUMBER(106);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"fbb97f"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_redSpark = sp[0].o;
	LINE_NUMBER(107);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d2b29c"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_orangeSpark = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffa480"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_redDust = sp[0].o;
	LINE_NUMBER(110);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff7b69"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_redderDust = sp[0].o;
	LINE_NUMBER(112);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f1e479"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_plasticSmoke = sp[0].o;
	LINE_NUMBER(114);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ff4000"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_adminChat = sp[0].o;
	LINE_NUMBER(116);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"2e191d"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_neoplasmOutline = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f98f4a"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_neoplasm1 = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e05438"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_neoplasmMid = sp[0].o;
	LINE_NUMBER(120);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"9e172c"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_neoplasm2 = sp[0].o;
	LINE_NUMBER(121);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"8ead44"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_neoplasmAcid = sp[0].o;
	LINE_NUMBER(122);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"68e43e"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_neoplasmAcidGlow = sp[0].o;
	LINE_NUMBER(124);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d4816b"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_logicBlocks = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"6bb2b2"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_logicControl = sp[0].o;
	LINE_NUMBER(126);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"877bad"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_logicOperations = sp[0].o;
	LINE_NUMBER(127);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a08a8a"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_logicIo = sp[0].o;
	LINE_NUMBER(128);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"c7b59d"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_logicUnits = sp[0].o;
	LINE_NUMBER(129);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"6b84d4"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_logicWorld = sp[0].o;
	LINE_NUMBER(131);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"b1dd7e"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_berylShot = sp[0].o;
	LINE_NUMBER(132);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"768a9a"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_tungstenShot = sp[0].o;
	LINE_NUMBER(134);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e9ead3"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_plasticBurn = sp[0].o;
	LINE_NUMBER(136);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"432722"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_muddy = sp[0].o;
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"feb380"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_redLight = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffa166"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_slagOrange = sp[0].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"8ca9e8"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_techBlue = sp[0].o;
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"6b4e4e"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_vent = sp[0].o;
	LINE_NUMBER(143);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"3b2a2a"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_vent2 = sp[0].o;
	LINE_NUMBER(145);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"eac1a8"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_copperAmmoFront = sp[0].o;
	LINE_NUMBER(146);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d39169"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_copperAmmoBack = sp[0].o;
	LINE_NUMBER(148);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"7d89d8"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_graphiteAmmoBack = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"dae1ee"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_graphiteAmmoFront = sp[0].o;
	LINE_NUMBER(151);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"707594"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_siliconAmmoBack = sp[0].o;
	LINE_NUMBER(152);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"999ba0"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_siliconAmmoFront = sp[0].o;
	LINE_NUMBER(154);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"b9c9df"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_glassAmmoBack = sp[0].o;
	LINE_NUMBER(155);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffffff"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_glassAmmoFront = sp[0].o;
	LINE_NUMBER(157);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f5e0cc"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_scrapAmmoFront = sp[0].o;
	LINE_NUMBER(158);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"d8887e"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_scrapAmmoBack = sp[0].o;
	LINE_NUMBER(160);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_surgeAmmoFront = sp[0].o;
	LINE_NUMBER(161);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_surge;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_surgeAmmoBack = sp[0].o;
	LINE_NUMBER(163);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"e9665b"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_blastAmmoBack = sp[0].o;
	LINE_NUMBER(164);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"eeab89"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_blastAmmoFront = sp[0].o;
	LINE_NUMBER(166);
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f595be"_j))));
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_thoriumAmmoBack = sp[0].o;
	LINE_NUMBER(167);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	sp[0].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	SF_mindustry_graphics_Pal_thoriumAmmoFront = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Pal[] {
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
	{ "water", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_water, "Larc/graphics/Color;", 9 },
	{ "darkOutline", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_darkOutline, "Larc/graphics/Color;", 9 },
	{ "thoriumPink", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_thoriumPink, "Larc/graphics/Color;", 9 },
	{ "coalBlack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_coalBlack, "Larc/graphics/Color;", 9 },
	{ "items", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_items, "Larc/graphics/Color;", 9 },
	{ "command", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_command, "Larc/graphics/Color;", 9 },
	{ "sap", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_sap, "Larc/graphics/Color;", 9 },
	{ "sapBullet", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_sapBullet, "Larc/graphics/Color;", 9 },
	{ "sapBulletBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_sapBulletBack, "Larc/graphics/Color;", 9 },
	{ "suppress", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_suppress, "Larc/graphics/Color;", 9 },
	{ "regen", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_regen, "Larc/graphics/Color;", 9 },
	{ "reactorPurple", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_reactorPurple, "Larc/graphics/Color;", 9 },
	{ "reactorPurple2", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_reactorPurple2, "Larc/graphics/Color;", 9 },
	{ "spore", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_spore, "Larc/graphics/Color;", 9 },
	{ "shield", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_shield, "Larc/graphics/Color;", 9 },
	{ "bulletYellow", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_bulletYellow, "Larc/graphics/Color;", 9 },
	{ "bulletYellowBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_bulletYellowBack, "Larc/graphics/Color;", 9 },
	{ "darkMetal", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_darkMetal, "Larc/graphics/Color;", 9 },
	{ "darkerMetal", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_darkerMetal, "Larc/graphics/Color;", 9 },
	{ "darkestMetal", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_darkestMetal, "Larc/graphics/Color;", 9 },
	{ "missileYellow", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_missileYellow, "Larc/graphics/Color;", 9 },
	{ "missileYellowBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_missileYellowBack, "Larc/graphics/Color;", 9 },
	{ "meltdownHit", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_meltdownHit, "Larc/graphics/Color;", 9 },
	{ "plastaniumBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_plastaniumBack, "Larc/graphics/Color;", 9 },
	{ "plastaniumFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_plastaniumFront, "Larc/graphics/Color;", 9 },
	{ "lightFlame", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_lightFlame, "Larc/graphics/Color;", 9 },
	{ "darkFlame", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_darkFlame, "Larc/graphics/Color;", 9 },
	{ "lightPyraFlame", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_lightPyraFlame, "Larc/graphics/Color;", 9 },
	{ "darkPyraFlame", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_darkPyraFlame, "Larc/graphics/Color;", 9 },
	{ "turretHeat", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_turretHeat, "Larc/graphics/Color;", 9 },
	{ "lightOrange", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_lightOrange, "Larc/graphics/Color;", 9 },
	{ "lightishOrange", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_lightishOrange, "Larc/graphics/Color;", 9 },
	{ "lighterOrange", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_lighterOrange, "Larc/graphics/Color;", 9 },
	{ "lightishGray", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_lightishGray, "Larc/graphics/Color;", 9 },
	{ "darkishGray", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_darkishGray, "Larc/graphics/Color;", 9 },
	{ "darkerGray", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_darkerGray, "Larc/graphics/Color;", 9 },
	{ "darkestGray", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_darkestGray, "Larc/graphics/Color;", 9 },
	{ "darkestestGray", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_darkestestGray, "Larc/graphics/Color;", 9 },
	{ "shadow", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_shadow, "Larc/graphics/Color;", 9 },
	{ "ammo", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_ammo, "Larc/graphics/Color;", 9 },
	{ "rubble", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_rubble, "Larc/graphics/Color;", 9 },
	{ "boostTo", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_boostTo, "Larc/graphics/Color;", 9 },
	{ "boostFrom", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_boostFrom, "Larc/graphics/Color;", 9 },
	{ "lancerLaser", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_lancerLaser, "Larc/graphics/Color;", 9 },
	{ "stoneGray", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_stoneGray, "Larc/graphics/Color;", 9 },
	{ "engine", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_engine, "Larc/graphics/Color;", 9 },
	{ "yellowBoltFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_yellowBoltFront, "Larc/graphics/Color;", 9 },
	{ "health", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_health, "Larc/graphics/Color;", 9 },
	{ "heal", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_heal, "Larc/graphics/Color;", 9 },
	{ "bar", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_bar, "Larc/graphics/Color;", 9 },
	{ "accent", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_accent, "Larc/graphics/Color;", 9 },
	{ "stat", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_stat, "Larc/graphics/Color;", 9 },
	{ "negativeStat", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_negativeStat, "Larc/graphics/Color;", 9 },
	{ "gray", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_gray, "Larc/graphics/Color;", 9 },
	{ "metalGrayDark", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_metalGrayDark, "Larc/graphics/Color;", 9 },
	{ "accentBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_accentBack, "Larc/graphics/Color;", 9 },
	{ "place", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_place, "Larc/graphics/Color;", 9 },
	{ "remove", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_remove, "Larc/graphics/Color;", 9 },
	{ "noplace", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_noplace, "Larc/graphics/Color;", 9 },
	{ "removeBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_removeBack, "Larc/graphics/Color;", 9 },
	{ "placeRotate", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_placeRotate, "Larc/graphics/Color;", 9 },
	{ "breakInvalid", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_breakInvalid, "Larc/graphics/Color;", 9 },
	{ "range", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_range, "Larc/graphics/Color;", 9 },
	{ "power", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_power, "Larc/graphics/Color;", 9 },
	{ "powerBar", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_powerBar, "Larc/graphics/Color;", 9 },
	{ "powerLight", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_powerLight, "Larc/graphics/Color;", 9 },
	{ "placing", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_placing, "Larc/graphics/Color;", 9 },
	{ "unitFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_unitFront, "Larc/graphics/Color;", 9 },
	{ "unitBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_unitBack, "Larc/graphics/Color;", 9 },
	{ "lightTrail", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_lightTrail, "Larc/graphics/Color;", 9 },
	{ "surge", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_surge, "Larc/graphics/Color;", 9 },
	{ "plastanium", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_plastanium, "Larc/graphics/Color;", 9 },
	{ "redSpark", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_redSpark, "Larc/graphics/Color;", 9 },
	{ "orangeSpark", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_orangeSpark, "Larc/graphics/Color;", 9 },
	{ "redDust", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_redDust, "Larc/graphics/Color;", 9 },
	{ "redderDust", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_redderDust, "Larc/graphics/Color;", 9 },
	{ "plasticSmoke", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_plasticSmoke, "Larc/graphics/Color;", 9 },
	{ "adminChat", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_adminChat, "Larc/graphics/Color;", 9 },
	{ "neoplasmOutline", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_neoplasmOutline, "Larc/graphics/Color;", 9 },
	{ "neoplasm1", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_neoplasm1, "Larc/graphics/Color;", 9 },
	{ "neoplasmMid", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_neoplasmMid, "Larc/graphics/Color;", 9 },
	{ "neoplasm2", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_neoplasm2, "Larc/graphics/Color;", 9 },
	{ "neoplasmAcid", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_neoplasmAcid, "Larc/graphics/Color;", 9 },
	{ "neoplasmAcidGlow", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_neoplasmAcidGlow, "Larc/graphics/Color;", 9 },
	{ "logicBlocks", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_logicBlocks, "Larc/graphics/Color;", 9 },
	{ "logicControl", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_logicControl, "Larc/graphics/Color;", 9 },
	{ "logicOperations", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_logicOperations, "Larc/graphics/Color;", 9 },
	{ "logicIo", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_logicIo, "Larc/graphics/Color;", 9 },
	{ "logicUnits", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_logicUnits, "Larc/graphics/Color;", 9 },
	{ "logicWorld", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_logicWorld, "Larc/graphics/Color;", 9 },
	{ "berylShot", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_berylShot, "Larc/graphics/Color;", 9 },
	{ "tungstenShot", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_tungstenShot, "Larc/graphics/Color;", 9 },
	{ "plasticBurn", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_plasticBurn, "Larc/graphics/Color;", 9 },
	{ "muddy", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_muddy, "Larc/graphics/Color;", 9 },
	{ "redLight", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_redLight, "Larc/graphics/Color;", 9 },
	{ "slagOrange", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_slagOrange, "Larc/graphics/Color;", 9 },
	{ "techBlue", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_techBlue, "Larc/graphics/Color;", 9 },
	{ "vent", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_vent, "Larc/graphics/Color;", 9 },
	{ "vent2", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_vent2, "Larc/graphics/Color;", 9 },
	{ "copperAmmoFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_copperAmmoFront, "Larc/graphics/Color;", 9 },
	{ "copperAmmoBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_copperAmmoBack, "Larc/graphics/Color;", 9 },
	{ "graphiteAmmoBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_graphiteAmmoBack, "Larc/graphics/Color;", 9 },
	{ "graphiteAmmoFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_graphiteAmmoFront, "Larc/graphics/Color;", 9 },
	{ "siliconAmmoBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_siliconAmmoBack, "Larc/graphics/Color;", 9 },
	{ "siliconAmmoFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_siliconAmmoFront, "Larc/graphics/Color;", 9 },
	{ "glassAmmoBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_glassAmmoBack, "Larc/graphics/Color;", 9 },
	{ "glassAmmoFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_glassAmmoFront, "Larc/graphics/Color;", 9 },
	{ "scrapAmmoFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_scrapAmmoFront, "Larc/graphics/Color;", 9 },
	{ "scrapAmmoBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_scrapAmmoBack, "Larc/graphics/Color;", 9 },
	{ "surgeAmmoFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_surgeAmmoFront, "Larc/graphics/Color;", 9 },
	{ "surgeAmmoBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_surgeAmmoBack, "Larc/graphics/Color;", 9 },
	{ "blastAmmoBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_blastAmmoBack, "Larc/graphics/Color;", 9 },
	{ "blastAmmoFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_blastAmmoFront, "Larc/graphics/Color;", 9 },
	{ "thoriumAmmoBack", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_thoriumAmmoBack, "Larc/graphics/Color;", 9 },
	{ "thoriumAmmoFront", &class_arc_graphics_Color, (intptr_t) &SF_mindustry_graphics_Pal_thoriumAmmoFront, "Larc/graphics/Color;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Pal, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_Pal, 0, "()V", 8 },
};

Class class_mindustry_graphics_Pal{
		.nativeName = (intptr_t) "mindustry/graphics/Pal",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Pal),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Pal,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Pal,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Pal,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 115,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Pal = registerClass(&class_mindustry_graphics_Pal);

}
