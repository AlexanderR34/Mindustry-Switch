#include "mindustry/world/meta/Stat.h"
#include "java/lang/Object.h"
#include "mindustry/world/meta/Stat.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/util/Locale.h"
#include "mindustry/world/meta/StatCat.h"

extern "C" {

jobject SF_mindustry_world_meta_Stat_all;
jobject SF_mindustry_world_meta_Stat_health;
jobject SF_mindustry_world_meta_Stat_armor;
jobject SF_mindustry_world_meta_Stat_size;
jobject SF_mindustry_world_meta_Stat_displaySize;
jobject SF_mindustry_world_meta_Stat_buildTime;
jobject SF_mindustry_world_meta_Stat_buildCost;
jobject SF_mindustry_world_meta_Stat_memoryCapacity;
jobject SF_mindustry_world_meta_Stat_explosiveness;
jobject SF_mindustry_world_meta_Stat_flammability;
jobject SF_mindustry_world_meta_Stat_radioactivity;
jobject SF_mindustry_world_meta_Stat_charge;
jobject SF_mindustry_world_meta_Stat_heatCapacity;
jobject SF_mindustry_world_meta_Stat_viscosity;
jobject SF_mindustry_world_meta_Stat_temperature;
jobject SF_mindustry_world_meta_Stat_flying;
jobject SF_mindustry_world_meta_Stat_speed;
jobject SF_mindustry_world_meta_Stat_buildSpeed;
jobject SF_mindustry_world_meta_Stat_mineSpeed;
jobject SF_mindustry_world_meta_Stat_mineTier;
jobject SF_mindustry_world_meta_Stat_payloadCapacity;
jobject SF_mindustry_world_meta_Stat_baseDeflectChance;
jobject SF_mindustry_world_meta_Stat_lightningChance;
jobject SF_mindustry_world_meta_Stat_lightningDamage;
jobject SF_mindustry_world_meta_Stat_abilities;
jobject SF_mindustry_world_meta_Stat_canBoost;
jobject SF_mindustry_world_meta_Stat_boostingSpeed;
jobject SF_mindustry_world_meta_Stat_maxUnits;
jobject SF_mindustry_world_meta_Stat_damageMultiplier;
jobject SF_mindustry_world_meta_Stat_healthMultiplier;
jobject SF_mindustry_world_meta_Stat_speedMultiplier;
jobject SF_mindustry_world_meta_Stat_reloadMultiplier;
jobject SF_mindustry_world_meta_Stat_buildSpeedMultiplier;
jobject SF_mindustry_world_meta_Stat_reactive;
jobject SF_mindustry_world_meta_Stat_healing;
jobject SF_mindustry_world_meta_Stat_immunities;
jobject SF_mindustry_world_meta_Stat_itemCapacity;
jobject SF_mindustry_world_meta_Stat_itemsMoved;
jobject SF_mindustry_world_meta_Stat_launchTime;
jobject SF_mindustry_world_meta_Stat_maxConsecutive;
jobject SF_mindustry_world_meta_Stat_liquidCapacity;
jobject SF_mindustry_world_meta_Stat_powerCapacity;
jobject SF_mindustry_world_meta_Stat_powerUse;
jobject SF_mindustry_world_meta_Stat_powerDamage;
jobject SF_mindustry_world_meta_Stat_powerRange;
jobject SF_mindustry_world_meta_Stat_powerConnections;
jobject SF_mindustry_world_meta_Stat_basePowerGeneration;
jobject SF_mindustry_world_meta_Stat_meltdownTime;
jobject SF_mindustry_world_meta_Stat_warmupTime;
jobject SF_mindustry_world_meta_Stat_tiles;
jobject SF_mindustry_world_meta_Stat_input;
jobject SF_mindustry_world_meta_Stat_output;
jobject SF_mindustry_world_meta_Stat_productionTime;
jobject SF_mindustry_world_meta_Stat_maxEfficiency;
jobject SF_mindustry_world_meta_Stat_drillTier;
jobject SF_mindustry_world_meta_Stat_drillSpeed;
jobject SF_mindustry_world_meta_Stat_linkRange;
jobject SF_mindustry_world_meta_Stat_instructions;
jobject SF_mindustry_world_meta_Stat_weapons;
jobject SF_mindustry_world_meta_Stat_bullet;
jobject SF_mindustry_world_meta_Stat_speedIncrease;
jobject SF_mindustry_world_meta_Stat_repairTime;
jobject SF_mindustry_world_meta_Stat_repairSpeed;
jobject SF_mindustry_world_meta_Stat_range;
jobject SF_mindustry_world_meta_Stat_shootRange;
jobject SF_mindustry_world_meta_Stat_inaccuracy;
jobject SF_mindustry_world_meta_Stat_shots;
jobject SF_mindustry_world_meta_Stat_reload;
jobject SF_mindustry_world_meta_Stat_crushDamage;
jobject SF_mindustry_world_meta_Stat_legSplashDamage;
jobject SF_mindustry_world_meta_Stat_targetsAir;
jobject SF_mindustry_world_meta_Stat_targetsGround;
jobject SF_mindustry_world_meta_Stat_damage;
jobject SF_mindustry_world_meta_Stat_status;
jobject SF_mindustry_world_meta_Stat_frequency;
jobject SF_mindustry_world_meta_Stat_ammo;
jobject SF_mindustry_world_meta_Stat_ammoCapacity;
jobject SF_mindustry_world_meta_Stat_ammoUse;
jobject SF_mindustry_world_meta_Stat_shieldHealth;
jobject SF_mindustry_world_meta_Stat_cooldownTime;
jobject SF_mindustry_world_meta_Stat_regenerationRate;
jobject SF_mindustry_world_meta_Stat_activationTime;
jobject SF_mindustry_world_meta_Stat_moduleTier;
jobject SF_mindustry_world_meta_Stat_unitType;
jobject SF_mindustry_world_meta_Stat_receiveRate;
jobject SF_mindustry_world_meta_Stat_booster;
jobject SF_mindustry_world_meta_Stat_boostEffect;
jobject SF_mindustry_world_meta_Stat_affinities;
jobject SF_mindustry_world_meta_Stat_opposites;

void mark_mindustry_world_meta_Stat(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_meta_Stat_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_all)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_all, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_health)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_health)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_health, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_armor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_armor)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_armor, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_size)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_size)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_size, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_displaySize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_displaySize)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_displaySize, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_buildTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_buildTime)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_buildTime, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_buildCost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_buildCost)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_buildCost, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_memoryCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_memoryCapacity)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_memoryCapacity, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_explosiveness)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_explosiveness)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_explosiveness, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_flammability)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_flammability)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_flammability, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_radioactivity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_radioactivity)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_radioactivity, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_charge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_charge)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_charge, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_heatCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_heatCapacity)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_heatCapacity, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_viscosity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_viscosity)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_viscosity, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_temperature)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_temperature)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_temperature, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_flying)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_flying)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_flying, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_speed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_speed)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_speed, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_buildSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_buildSpeed)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_buildSpeed, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_mineSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_mineSpeed)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_mineSpeed, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_mineTier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_mineTier)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_mineTier, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_payloadCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_payloadCapacity)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_payloadCapacity, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_baseDeflectChance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_baseDeflectChance)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_baseDeflectChance, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_lightningChance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_lightningChance)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_lightningChance, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_lightningDamage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_lightningDamage)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_lightningDamage, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_abilities)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_abilities)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_abilities, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_canBoost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_canBoost)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_canBoost, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_boostingSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_boostingSpeed)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_boostingSpeed, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_maxUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_maxUnits)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_maxUnits, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_damageMultiplier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_damageMultiplier)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_damageMultiplier, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_healthMultiplier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_healthMultiplier)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_healthMultiplier, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_speedMultiplier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_speedMultiplier)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_speedMultiplier, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_reloadMultiplier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_reloadMultiplier)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_reloadMultiplier, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_buildSpeedMultiplier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_buildSpeedMultiplier)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_buildSpeedMultiplier, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_reactive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_reactive)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_reactive, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_healing)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_healing)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_healing, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_immunities)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_immunities)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_immunities, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_itemCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_itemCapacity)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_itemCapacity, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_itemsMoved)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_itemsMoved)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_itemsMoved, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_launchTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_launchTime)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_launchTime, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_maxConsecutive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_maxConsecutive)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_maxConsecutive, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_liquidCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_liquidCapacity)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_liquidCapacity, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_powerCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_powerCapacity)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_powerCapacity, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_powerUse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_powerUse)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_powerUse, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_powerDamage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_powerDamage)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_powerDamage, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_powerRange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_powerRange)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_powerRange, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_powerConnections)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_powerConnections)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_powerConnections, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_basePowerGeneration)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_basePowerGeneration)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_basePowerGeneration, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_meltdownTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_meltdownTime)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_meltdownTime, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_warmupTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_warmupTime)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_warmupTime, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_tiles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_tiles)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_tiles, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_input)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_input)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_input, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_output)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_output)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_output, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_productionTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_productionTime)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_productionTime, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_maxEfficiency)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_maxEfficiency)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_maxEfficiency, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_drillTier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_drillTier)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_drillTier, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_drillSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_drillSpeed)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_drillSpeed, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_linkRange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_linkRange)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_linkRange, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_instructions)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_instructions)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_instructions, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_weapons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_weapons)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_weapons, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_bullet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_bullet)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_bullet, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_speedIncrease)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_speedIncrease)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_speedIncrease, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_repairTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_repairTime)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_repairTime, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_repairSpeed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_repairSpeed)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_repairSpeed, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_range)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_range)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_range, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_shootRange)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_shootRange)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_shootRange, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_inaccuracy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_inaccuracy)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_inaccuracy, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_shots)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_shots)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_shots, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_reload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_reload)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_reload, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_crushDamage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_crushDamage)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_crushDamage, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_legSplashDamage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_legSplashDamage)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_legSplashDamage, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_targetsAir)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_targetsAir)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_targetsAir, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_targetsGround)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_targetsGround)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_targetsGround, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_damage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_damage)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_damage, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_status)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_status)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_status, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_frequency)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_frequency)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_frequency, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_ammo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_ammo)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_ammo, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_ammoCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_ammoCapacity)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_ammoCapacity, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_ammoUse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_ammoUse)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_ammoUse, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_shieldHealth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_shieldHealth)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_shieldHealth, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_cooldownTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_cooldownTime)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_cooldownTime, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_regenerationRate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_regenerationRate)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_regenerationRate, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_activationTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_activationTime)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_activationTime, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_moduleTier)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_moduleTier)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_moduleTier, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_unitType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_unitType)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_unitType, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_receiveRate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_receiveRate)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_receiveRate, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_booster)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_booster)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_booster, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_boostEffect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_boostEffect)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_boostEffect, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_affinities)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_affinities)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_affinities, mark, depth + 1);
		if (SF_mindustry_world_meta_Stat_opposites)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_Stat_opposites)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_Stat_opposites, mark, depth + 1);
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
	auto self = (mindustry_world_meta_Stat *) object;
	if (self->F_category)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_category)->clazz)->markFunction)((jobject) self->F_category, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stat:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Stat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(115);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(116);
	((mindustry_world_meta_Stat *) NULL_CHECK((frame[0].o)))->F_category = (jref) (frame[2].o);
	LINE_NUMBER(117);
	((mindustry_world_meta_Stat *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(118);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_meta_Stat(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_Stat_all;
	((mindustry_world_meta_Stat *) NULL_CHECK(sp[0].o))->F_id = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size);
	LINE_NUMBER(119);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = (jobject)SF_mindustry_world_meta_Stat_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_meta_Stat_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stat:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Stat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_general;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_meta_Stat_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stat:localized", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_world_meta_Stat *) NULL_CHECK((frame[0].o)))->F_name;
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_ROOT;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"stat.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_meta_Stat_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stat:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_world_meta_Stat *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_meta_Stat_compareTo_mindustry_world_meta_Stat_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stat:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return (((jint)((mindustry_world_meta_Stat *) NULL_CHECK((frame[0].o)))->F_id) - ((jint)((mindustry_world_meta_Stat *) NULL_CHECK((frame[1].o)))->F_id));
	}

	popStackFrame(ctx);
}

jint M_mindustry_world_meta_Stat_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stat:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(9);
	jint temp0 = (jint)((func_mindustry_world_meta_Stat_compareTo_mindustry_world_meta_Stat_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_meta_Stat_compareTo_mindustry_world_meta_Stat_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_world_meta_Stat, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_meta_Stat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/Stat:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_Stat(ctx);
	{
	LINE_NUMBER(10);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_all = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"health"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_health = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"armor"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_armor = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_size = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"displaySize"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_displaySize = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildTime"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_buildTime = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildCost"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_buildCost = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"memoryCapacity"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_memoryCapacity = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"explosiveness"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_explosiveness = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"flammability"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_flammability = sp[0].o;
	LINE_NUMBER(23);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"radioactivity"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_radioactivity = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"charge"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_charge = sp[0].o;
	LINE_NUMBER(25);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"heatCapacity"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_heatCapacity = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"viscosity"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_viscosity = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"temperature"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_temperature = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"flying"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_flying = sp[0].o;
	LINE_NUMBER(29);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"speed"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_speed = sp[0].o;
	LINE_NUMBER(30);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildSpeed"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_buildSpeed = sp[0].o;
	LINE_NUMBER(31);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mineSpeed"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_mineSpeed = sp[0].o;
	LINE_NUMBER(32);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mineTier"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_mineTier = sp[0].o;
	LINE_NUMBER(33);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"payloadCapacity"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_payloadCapacity = sp[0].o;
	LINE_NUMBER(34);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"baseDeflectChance"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_baseDeflectChance = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lightningChance"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_lightningChance = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lightningDamage"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_lightningDamage = sp[0].o;
	LINE_NUMBER(37);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"abilities"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_abilities = sp[0].o;
	LINE_NUMBER(38);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"canBoost"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_canBoost = sp[0].o;
	LINE_NUMBER(39);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boostingspeed"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_boostingSpeed = sp[0].o;
	LINE_NUMBER(40);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxUnits"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_maxUnits = sp[0].o;
	LINE_NUMBER(42);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"damageMultiplier"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_damageMultiplier = sp[0].o;
	LINE_NUMBER(43);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"healthMultiplier"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_healthMultiplier = sp[0].o;
	LINE_NUMBER(44);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"speedMultiplier"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_speedMultiplier = sp[0].o;
	LINE_NUMBER(45);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reloadMultiplier"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_reloadMultiplier = sp[0].o;
	LINE_NUMBER(46);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"buildSpeedMultiplier"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_buildSpeedMultiplier = sp[0].o;
	LINE_NUMBER(47);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reactive"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_reactive = sp[0].o;
	LINE_NUMBER(48);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"healing"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_healing = sp[0].o;
	LINE_NUMBER(49);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	init_mindustry_world_meta_Stat_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"immunities"_j))));
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_immunities = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"itemCapacity"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_items;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_itemCapacity = sp[0].o;
	LINE_NUMBER(52);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"itemsMoved"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_items;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_itemsMoved = sp[0].o;
	LINE_NUMBER(53);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"launchTime"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_items;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_launchTime = sp[0].o;
	LINE_NUMBER(54);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maxConsecutive"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_items;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_maxConsecutive = sp[0].o;
	LINE_NUMBER(56);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"liquidCapacity"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_liquids;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_liquidCapacity = sp[0].o;
	LINE_NUMBER(58);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerCapacity"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_power;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_powerCapacity = sp[0].o;
	LINE_NUMBER(59);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerUse"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_power;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_powerUse = sp[0].o;
	LINE_NUMBER(60);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerDamage"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_power;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_powerDamage = sp[0].o;
	LINE_NUMBER(61);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerRange"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_power;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_powerRange = sp[0].o;
	LINE_NUMBER(62);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerConnections"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_power;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_powerConnections = sp[0].o;
	LINE_NUMBER(63);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"basePowerGeneration"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_power;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_basePowerGeneration = sp[0].o;
	LINE_NUMBER(64);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"meltdownTime"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_power;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_meltdownTime = sp[0].o;
	LINE_NUMBER(65);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"warmupTime"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_power;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_warmupTime = sp[0].o;
	LINE_NUMBER(67);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tiles"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_crafting;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_tiles = sp[0].o;
	LINE_NUMBER(68);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"input"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_crafting;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_input = sp[0].o;
	LINE_NUMBER(69);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"output"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_crafting;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_output = sp[0].o;
	LINE_NUMBER(70);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"productionTime"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_crafting;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_productionTime = sp[0].o;
	LINE_NUMBER(71);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maxEfficiency"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_crafting;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_maxEfficiency = sp[0].o;
	LINE_NUMBER(72);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"drillTier"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_crafting;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_drillTier = sp[0].o;
	LINE_NUMBER(73);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"drillSpeed"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_crafting;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_drillSpeed = sp[0].o;
	LINE_NUMBER(74);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"linkRange"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_crafting;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_linkRange = sp[0].o;
	LINE_NUMBER(75);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"instructions"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_crafting;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_instructions = sp[0].o;
	LINE_NUMBER(77);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"weapons"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_weapons = sp[0].o;
	LINE_NUMBER(78);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bullet"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_bullet = sp[0].o;
	LINE_NUMBER(80);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"speedIncrease"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_speedIncrease = sp[0].o;
	LINE_NUMBER(81);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"repairTime"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_repairTime = sp[0].o;
	LINE_NUMBER(82);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"repairSpeed"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_repairSpeed = sp[0].o;
	LINE_NUMBER(83);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"range"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_range = sp[0].o;
	LINE_NUMBER(84);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shootRange"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_shootRange = sp[0].o;
	LINE_NUMBER(85);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"inaccuracy"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_inaccuracy = sp[0].o;
	LINE_NUMBER(86);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shots"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_shots = sp[0].o;
	LINE_NUMBER(87);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"reload"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_reload = sp[0].o;
	LINE_NUMBER(88);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"crushDamage"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_crushDamage = sp[0].o;
	LINE_NUMBER(89);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"legSplashDamage"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_legSplashDamage = sp[0].o;
	LINE_NUMBER(90);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"targetsAir"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_targetsAir = sp[0].o;
	LINE_NUMBER(91);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"targetsGround"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_targetsGround = sp[0].o;
	LINE_NUMBER(92);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"damage"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_damage = sp[0].o;
	LINE_NUMBER(93);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"status"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_status = sp[0].o;
	LINE_NUMBER(94);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"frequency"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_frequency = sp[0].o;
	LINE_NUMBER(95);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ammo"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_ammo = sp[0].o;
	LINE_NUMBER(96);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ammoCapacity"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_ammoCapacity = sp[0].o;
	LINE_NUMBER(97);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ammoUse"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_ammoUse = sp[0].o;
	LINE_NUMBER(98);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shieldHealth"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_shieldHealth = sp[0].o;
	LINE_NUMBER(99);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cooldownTime"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_cooldownTime = sp[0].o;
	LINE_NUMBER(100);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"regenerationRate"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_regenerationRate = sp[0].o;
	LINE_NUMBER(101);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"activationTime"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_activationTime = sp[0].o;
	LINE_NUMBER(102);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"moduletier"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_moduleTier = sp[0].o;
	LINE_NUMBER(103);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unittype"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_unitType = sp[0].o;
	LINE_NUMBER(104);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"receiveRate"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_function;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_receiveRate = sp[0].o;
	LINE_NUMBER(106);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"booster"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_optional;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_booster = sp[0].o;
	LINE_NUMBER(107);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"boostEffect"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_optional;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_boostEffect = sp[0].o;
	LINE_NUMBER(108);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"affinities"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_optional;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_affinities = sp[0].o;
	LINE_NUMBER(109);
	clinit_mindustry_world_meta_Stat(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_Stat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"opposites"_j));
	clinit_mindustry_world_meta_StatCat(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_StatCat_optional;
	init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_world_meta_Stat(ctx);
	SF_mindustry_world_meta_Stat_opposites = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_meta_Stat[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_world_meta_Stat_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_world_meta_Stat_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_meta_Stat_localized_R_java_lang_String,
	(void *) M_mindustry_world_meta_Stat_compareTo_mindustry_world_meta_Stat_R_int,
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
	{ "localized", "()Ljava/lang/String;" },
	{ "compareTo", "(Lmindustry/world/meta/Stat;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "all", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_world_meta_Stat_all, "Larc/struct/Seq;", 25 },
	{ "health", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_health, "Lmindustry/world/meta/Stat;", 25 },
	{ "armor", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_armor, "Lmindustry/world/meta/Stat;", 25 },
	{ "size", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_size, "Lmindustry/world/meta/Stat;", 25 },
	{ "displaySize", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_displaySize, "Lmindustry/world/meta/Stat;", 25 },
	{ "buildTime", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_buildTime, "Lmindustry/world/meta/Stat;", 25 },
	{ "buildCost", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_buildCost, "Lmindustry/world/meta/Stat;", 25 },
	{ "memoryCapacity", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_memoryCapacity, "Lmindustry/world/meta/Stat;", 25 },
	{ "explosiveness", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_explosiveness, "Lmindustry/world/meta/Stat;", 25 },
	{ "flammability", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_flammability, "Lmindustry/world/meta/Stat;", 25 },
	{ "radioactivity", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_radioactivity, "Lmindustry/world/meta/Stat;", 25 },
	{ "charge", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_charge, "Lmindustry/world/meta/Stat;", 25 },
	{ "heatCapacity", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_heatCapacity, "Lmindustry/world/meta/Stat;", 25 },
	{ "viscosity", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_viscosity, "Lmindustry/world/meta/Stat;", 25 },
	{ "temperature", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_temperature, "Lmindustry/world/meta/Stat;", 25 },
	{ "flying", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_flying, "Lmindustry/world/meta/Stat;", 25 },
	{ "speed", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_speed, "Lmindustry/world/meta/Stat;", 25 },
	{ "buildSpeed", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_buildSpeed, "Lmindustry/world/meta/Stat;", 25 },
	{ "mineSpeed", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_mineSpeed, "Lmindustry/world/meta/Stat;", 25 },
	{ "mineTier", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_mineTier, "Lmindustry/world/meta/Stat;", 25 },
	{ "payloadCapacity", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_payloadCapacity, "Lmindustry/world/meta/Stat;", 25 },
	{ "baseDeflectChance", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_baseDeflectChance, "Lmindustry/world/meta/Stat;", 25 },
	{ "lightningChance", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_lightningChance, "Lmindustry/world/meta/Stat;", 25 },
	{ "lightningDamage", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_lightningDamage, "Lmindustry/world/meta/Stat;", 25 },
	{ "abilities", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_abilities, "Lmindustry/world/meta/Stat;", 25 },
	{ "canBoost", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_canBoost, "Lmindustry/world/meta/Stat;", 25 },
	{ "boostingSpeed", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_boostingSpeed, "Lmindustry/world/meta/Stat;", 25 },
	{ "maxUnits", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_maxUnits, "Lmindustry/world/meta/Stat;", 25 },
	{ "damageMultiplier", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_damageMultiplier, "Lmindustry/world/meta/Stat;", 25 },
	{ "healthMultiplier", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_healthMultiplier, "Lmindustry/world/meta/Stat;", 25 },
	{ "speedMultiplier", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_speedMultiplier, "Lmindustry/world/meta/Stat;", 25 },
	{ "reloadMultiplier", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_reloadMultiplier, "Lmindustry/world/meta/Stat;", 25 },
	{ "buildSpeedMultiplier", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_buildSpeedMultiplier, "Lmindustry/world/meta/Stat;", 25 },
	{ "reactive", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_reactive, "Lmindustry/world/meta/Stat;", 25 },
	{ "healing", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_healing, "Lmindustry/world/meta/Stat;", 25 },
	{ "immunities", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_immunities, "Lmindustry/world/meta/Stat;", 25 },
	{ "itemCapacity", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_itemCapacity, "Lmindustry/world/meta/Stat;", 25 },
	{ "itemsMoved", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_itemsMoved, "Lmindustry/world/meta/Stat;", 25 },
	{ "launchTime", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_launchTime, "Lmindustry/world/meta/Stat;", 25 },
	{ "maxConsecutive", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_maxConsecutive, "Lmindustry/world/meta/Stat;", 25 },
	{ "liquidCapacity", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_liquidCapacity, "Lmindustry/world/meta/Stat;", 25 },
	{ "powerCapacity", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_powerCapacity, "Lmindustry/world/meta/Stat;", 25 },
	{ "powerUse", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_powerUse, "Lmindustry/world/meta/Stat;", 25 },
	{ "powerDamage", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_powerDamage, "Lmindustry/world/meta/Stat;", 25 },
	{ "powerRange", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_powerRange, "Lmindustry/world/meta/Stat;", 25 },
	{ "powerConnections", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_powerConnections, "Lmindustry/world/meta/Stat;", 25 },
	{ "basePowerGeneration", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_basePowerGeneration, "Lmindustry/world/meta/Stat;", 25 },
	{ "meltdownTime", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_meltdownTime, "Lmindustry/world/meta/Stat;", 25 },
	{ "warmupTime", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_warmupTime, "Lmindustry/world/meta/Stat;", 25 },
	{ "tiles", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_tiles, "Lmindustry/world/meta/Stat;", 25 },
	{ "input", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_input, "Lmindustry/world/meta/Stat;", 25 },
	{ "output", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_output, "Lmindustry/world/meta/Stat;", 25 },
	{ "productionTime", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_productionTime, "Lmindustry/world/meta/Stat;", 25 },
	{ "maxEfficiency", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_maxEfficiency, "Lmindustry/world/meta/Stat;", 25 },
	{ "drillTier", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_drillTier, "Lmindustry/world/meta/Stat;", 25 },
	{ "drillSpeed", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_drillSpeed, "Lmindustry/world/meta/Stat;", 25 },
	{ "linkRange", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_linkRange, "Lmindustry/world/meta/Stat;", 25 },
	{ "instructions", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_instructions, "Lmindustry/world/meta/Stat;", 25 },
	{ "weapons", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_weapons, "Lmindustry/world/meta/Stat;", 25 },
	{ "bullet", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_bullet, "Lmindustry/world/meta/Stat;", 25 },
	{ "speedIncrease", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_speedIncrease, "Lmindustry/world/meta/Stat;", 25 },
	{ "repairTime", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_repairTime, "Lmindustry/world/meta/Stat;", 25 },
	{ "repairSpeed", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_repairSpeed, "Lmindustry/world/meta/Stat;", 25 },
	{ "range", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_range, "Lmindustry/world/meta/Stat;", 25 },
	{ "shootRange", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_shootRange, "Lmindustry/world/meta/Stat;", 25 },
	{ "inaccuracy", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_inaccuracy, "Lmindustry/world/meta/Stat;", 25 },
	{ "shots", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_shots, "Lmindustry/world/meta/Stat;", 25 },
	{ "reload", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_reload, "Lmindustry/world/meta/Stat;", 25 },
	{ "crushDamage", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_crushDamage, "Lmindustry/world/meta/Stat;", 25 },
	{ "legSplashDamage", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_legSplashDamage, "Lmindustry/world/meta/Stat;", 25 },
	{ "targetsAir", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_targetsAir, "Lmindustry/world/meta/Stat;", 25 },
	{ "targetsGround", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_targetsGround, "Lmindustry/world/meta/Stat;", 25 },
	{ "damage", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_damage, "Lmindustry/world/meta/Stat;", 25 },
	{ "status", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_status, "Lmindustry/world/meta/Stat;", 25 },
	{ "frequency", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_frequency, "Lmindustry/world/meta/Stat;", 25 },
	{ "ammo", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_ammo, "Lmindustry/world/meta/Stat;", 25 },
	{ "ammoCapacity", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_ammoCapacity, "Lmindustry/world/meta/Stat;", 25 },
	{ "ammoUse", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_ammoUse, "Lmindustry/world/meta/Stat;", 25 },
	{ "shieldHealth", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_shieldHealth, "Lmindustry/world/meta/Stat;", 25 },
	{ "cooldownTime", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_cooldownTime, "Lmindustry/world/meta/Stat;", 25 },
	{ "regenerationRate", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_regenerationRate, "Lmindustry/world/meta/Stat;", 25 },
	{ "activationTime", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_activationTime, "Lmindustry/world/meta/Stat;", 25 },
	{ "moduleTier", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_moduleTier, "Lmindustry/world/meta/Stat;", 25 },
	{ "unitType", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_unitType, "Lmindustry/world/meta/Stat;", 25 },
	{ "receiveRate", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_receiveRate, "Lmindustry/world/meta/Stat;", 25 },
	{ "booster", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_booster, "Lmindustry/world/meta/Stat;", 25 },
	{ "boostEffect", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_boostEffect, "Lmindustry/world/meta/Stat;", 25 },
	{ "affinities", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_affinities, "Lmindustry/world/meta/Stat;", 25 },
	{ "opposites", &class_mindustry_world_meta_Stat, (intptr_t) &SF_mindustry_world_meta_Stat_opposites, "Lmindustry/world/meta/Stat;", 25 },
	{ "category", &class_mindustry_world_meta_StatCat, offsetof(mindustry_world_meta_Stat, F_category), "Lmindustry/world/meta/StatCat;", 17 },
	{ "name", &class_java_lang_String, offsetof(mindustry_world_meta_Stat, F_name), "Ljava/lang/String;", 17 },
	{ "id", &class_int, offsetof(mindustry_world_meta_Stat, F_id), "I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_meta_Stat_java_lang_String_mindustry_world_meta_StatCat, 0, "(Ljava/lang/String;Lmindustry/world/meta/StatCat;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_meta_Stat_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "localized", (intptr_t) M_mindustry_world_meta_Stat_localized_R_java_lang_String, VTABLE_mindustry_world_meta_Stat_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_mindustry_world_meta_Stat_toString_R_java_lang_String, VTABLE_mindustry_world_meta_Stat_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_world_meta_Stat_compareTo_mindustry_world_meta_Stat_R_int, VTABLE_mindustry_world_meta_Stat_compareTo_mindustry_world_meta_Stat_R_int, "(Lmindustry/world/meta/Stat;)I", 1 },
	{ "compareTo", (intptr_t) M_mindustry_world_meta_Stat_compareTo_java_lang_Object_R_int, VTABLE_mindustry_world_meta_Stat_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_meta_Stat, 0, "()V", 8 },
};

Class class_mindustry_world_meta_Stat{
		.nativeName = (intptr_t) "mindustry/world/meta/Stat",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_meta_Stat),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_Stat,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_Stat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_meta_Stat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 92,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_Stat = registerClass(&class_mindustry_world_meta_Stat);

}
