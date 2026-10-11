#include "mindustry/logic/LAccess.h"
#include "mindustry/logic/LAccess_invoke_arc_func_Cons_1.h"
#include "mindustry/logic/LAccess.h"
#include "java/lang/Enum.h"
#include "mindustry/logic/LAccess_invoke_arc_func_Boolf_5.h"
#include "mindustry/logic/LAccess_invoke_arc_func_Boolf_4.h"
#include "mindustry/logic/LAccess_invoke_arc_func_Boolf_3.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/struct/ObjectSet.h"
#include "java/lang/Class.h"
#include "arc/func/Boolf.h"

extern "C" {

jobject SF_mindustry_logic_LAccess_totalItems;
jobject SF_mindustry_logic_LAccess_firstItem;
jobject SF_mindustry_logic_LAccess_totalLiquids;
jobject SF_mindustry_logic_LAccess_totalPower;
jobject SF_mindustry_logic_LAccess_itemCapacity;
jobject SF_mindustry_logic_LAccess_liquidCapacity;
jobject SF_mindustry_logic_LAccess_powerCapacity;
jobject SF_mindustry_logic_LAccess_powerNetStored;
jobject SF_mindustry_logic_LAccess_powerNetCapacity;
jobject SF_mindustry_logic_LAccess_powerNetIn;
jobject SF_mindustry_logic_LAccess_powerNetOut;
jobject SF_mindustry_logic_LAccess_ammo;
jobject SF_mindustry_logic_LAccess_ammoCapacity;
jobject SF_mindustry_logic_LAccess_currentAmmoType;
jobject SF_mindustry_logic_LAccess_memoryCapacity;
jobject SF_mindustry_logic_LAccess_health;
jobject SF_mindustry_logic_LAccess_maxHealth;
jobject SF_mindustry_logic_LAccess_heat;
jobject SF_mindustry_logic_LAccess_shield;
jobject SF_mindustry_logic_LAccess_armor;
jobject SF_mindustry_logic_LAccess_efficiency;
jobject SF_mindustry_logic_LAccess_progress;
jobject SF_mindustry_logic_LAccess_timescale;
jobject SF_mindustry_logic_LAccess_rotation;
jobject SF_mindustry_logic_LAccess_x;
jobject SF_mindustry_logic_LAccess_y;
jobject SF_mindustry_logic_LAccess_velocityX;
jobject SF_mindustry_logic_LAccess_velocityY;
jobject SF_mindustry_logic_LAccess_shootX;
jobject SF_mindustry_logic_LAccess_shootY;
jobject SF_mindustry_logic_LAccess_cameraX;
jobject SF_mindustry_logic_LAccess_cameraY;
jobject SF_mindustry_logic_LAccess_cameraWidth;
jobject SF_mindustry_logic_LAccess_cameraHeight;
jobject SF_mindustry_logic_LAccess_displayWidth;
jobject SF_mindustry_logic_LAccess_displayHeight;
jobject SF_mindustry_logic_LAccess_bufferSize;
jobject SF_mindustry_logic_LAccess_operations;
jobject SF_mindustry_logic_LAccess_size;
jobject SF_mindustry_logic_LAccess_solid;
jobject SF_mindustry_logic_LAccess_dead;
jobject SF_mindustry_logic_LAccess_range;
jobject SF_mindustry_logic_LAccess_shooting;
jobject SF_mindustry_logic_LAccess_boosting;
jobject SF_mindustry_logic_LAccess_mineX;
jobject SF_mindustry_logic_LAccess_mineY;
jobject SF_mindustry_logic_LAccess_mining;
jobject SF_mindustry_logic_LAccess_buildX;
jobject SF_mindustry_logic_LAccess_buildY;
jobject SF_mindustry_logic_LAccess_pingX;
jobject SF_mindustry_logic_LAccess_pingY;
jobject SF_mindustry_logic_LAccess_pingText;
jobject SF_mindustry_logic_LAccess_building;
jobject SF_mindustry_logic_LAccess_breaking;
jobject SF_mindustry_logic_LAccess_speed;
jobject SF_mindustry_logic_LAccess_team;
jobject SF_mindustry_logic_LAccess_type;
jobject SF_mindustry_logic_LAccess_flag;
jobject SF_mindustry_logic_LAccess_flying;
jobject SF_mindustry_logic_LAccess_controlled;
jobject SF_mindustry_logic_LAccess_controller;
jobject SF_mindustry_logic_LAccess_name;
jobject SF_mindustry_logic_LAccess_payloadCount;
jobject SF_mindustry_logic_LAccess_payloadType;
jobject SF_mindustry_logic_LAccess_totalPayload;
jobject SF_mindustry_logic_LAccess_payloadCapacity;
jobject SF_mindustry_logic_LAccess_maxUnits;
jobject SF_mindustry_logic_LAccess_id;
jobject SF_mindustry_logic_LAccess_selectedBlock;
jobject SF_mindustry_logic_LAccess_selectedRotation;
jobject SF_mindustry_logic_LAccess_bulletLifetime;
jobject SF_mindustry_logic_LAccess_bulletTime;
jobject SF_mindustry_logic_LAccess_enabled;
jobject SF_mindustry_logic_LAccess_shoot;
jobject SF_mindustry_logic_LAccess_shootp;
jobject SF_mindustry_logic_LAccess_config;
jobject SF_mindustry_logic_LAccess_color;
jobject SF_mindustry_logic_LAccess_privilegedAccess;
jobject SF_mindustry_logic_LAccess_all;
jobject SF_mindustry_logic_LAccess_senseable;
jobject SF_mindustry_logic_LAccess_senseablePrivileged;
jobject SF_mindustry_logic_LAccess_controls;
jobject SF_mindustry_logic_LAccess_settable;
jobject SF_mindustry_logic_LAccess_$VALUES;

void mark_mindustry_logic_LAccess(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LAccess_totalItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_totalItems)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_totalItems, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_firstItem)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_firstItem)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_firstItem, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_totalLiquids)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_totalLiquids)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_totalLiquids, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_totalPower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_totalPower)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_totalPower, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_itemCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_itemCapacity)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_itemCapacity, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_liquidCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_liquidCapacity)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_liquidCapacity, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_powerCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_powerCapacity)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_powerCapacity, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_powerNetStored)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_powerNetStored)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_powerNetStored, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_powerNetCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_powerNetCapacity)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_powerNetCapacity, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_powerNetIn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_powerNetIn)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_powerNetIn, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_powerNetOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_powerNetOut)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_powerNetOut, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_ammo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_ammo)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_ammo, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_ammoCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_ammoCapacity)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_ammoCapacity, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_currentAmmoType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_currentAmmoType)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_currentAmmoType, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_memoryCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_memoryCapacity)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_memoryCapacity, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_health)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_health)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_health, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_maxHealth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_maxHealth)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_maxHealth, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_heat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_heat)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_heat, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_shield)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_shield)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_shield, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_armor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_armor)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_armor, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_efficiency)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_efficiency)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_efficiency, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_progress)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_progress)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_progress, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_timescale)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_timescale)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_timescale, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_rotation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_rotation)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_rotation, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_x)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_x)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_x, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_y)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_y)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_y, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_velocityX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_velocityX)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_velocityX, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_velocityY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_velocityY)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_velocityY, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_shootX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_shootX)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_shootX, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_shootY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_shootY)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_shootY, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_cameraX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_cameraX)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_cameraX, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_cameraY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_cameraY)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_cameraY, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_cameraWidth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_cameraWidth)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_cameraWidth, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_cameraHeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_cameraHeight)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_cameraHeight, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_displayWidth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_displayWidth)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_displayWidth, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_displayHeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_displayHeight)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_displayHeight, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_bufferSize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_bufferSize)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_bufferSize, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_operations)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_operations)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_operations, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_size)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_size)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_size, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_solid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_solid)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_solid, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_dead)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_dead)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_dead, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_range)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_range)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_range, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_shooting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_shooting)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_shooting, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_boosting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_boosting)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_boosting, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_mineX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_mineX)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_mineX, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_mineY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_mineY)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_mineY, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_mining)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_mining)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_mining, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_buildX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_buildX)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_buildX, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_buildY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_buildY)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_buildY, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_pingX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_pingX)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_pingX, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_pingY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_pingY)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_pingY, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_pingText)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_pingText)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_pingText, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_building)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_building)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_building, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_breaking)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_breaking)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_breaking, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_speed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_speed)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_speed, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_team)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_team)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_team, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_type)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_type)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_type, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_flag)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_flag)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_flag, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_flying)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_flying)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_flying, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_controlled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_controlled)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_controlled, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_controller)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_controller)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_controller, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_name)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_name)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_name, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_payloadCount)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_payloadCount)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_payloadCount, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_payloadType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_payloadType)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_payloadType, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_totalPayload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_totalPayload)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_totalPayload, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_payloadCapacity)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_payloadCapacity)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_payloadCapacity, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_maxUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_maxUnits)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_maxUnits, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_id)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_id)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_id, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_selectedBlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_selectedBlock)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_selectedBlock, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_selectedRotation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_selectedRotation)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_selectedRotation, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_bulletLifetime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_bulletLifetime)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_bulletLifetime, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_bulletTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_bulletTime)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_bulletTime, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_enabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_enabled)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_enabled, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_shoot)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_shoot)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_shoot, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_shootp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_shootp)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_shootp, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_config)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_config)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_config, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_color)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_color)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_color, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_privilegedAccess)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_privilegedAccess)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_privilegedAccess, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_all, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_senseable)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_senseable)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_senseable, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_senseablePrivileged)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_senseablePrivileged)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_senseablePrivileged, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_controls)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_controls)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_controls, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_settable)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_settable)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_settable, mark, depth + 1);
		if (SF_mindustry_logic_LAccess_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LAccess_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_LAccess_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_logic_LAccess *) object;
	if (self->F_params)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_params)->clazz)->markFunction)((jobject) self->F_params, mark, depth + 1);
}

jobject SM_mindustry_logic_LAccess_values_R_Array1_mindustry_logic_LAccess(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAccess:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAccess(ctx);
	{
	LINE_NUMBER(6);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAccess_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_LAccess, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LAccess_valueOf_java_lang_String_R_mindustry_logic_LAccess(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAccess:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAccess(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(6);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_LAccess)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LAccess, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAccess:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAccess(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(104);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(105);
	((mindustry_logic_LAccess *) NULL_CHECK((frame[0].o)))->F_params = (jref) (frame[3].o);
	LINE_NUMBER(106);
	((mindustry_logic_LAccess *) NULL_CHECK((frame[0].o)))->F_isObj = (jint(0));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LAccess_java_lang_String_int_boolean_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAccess:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAccess(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(109);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(110);
	((mindustry_logic_LAccess *) NULL_CHECK((frame[0].o)))->F_params = (jref) (frame[4].o);
	LINE_NUMBER(111);
	((mindustry_logic_LAccess *) NULL_CHECK((frame[0].o)))->F_isObj = (frame[3].i);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LAccess_$values_R_Array1_mindustry_logic_LAccess(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAccess:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAccess(ctx);
	{
	LINE_NUMBER(6);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_LAccess, (77));
	jint temp0 = jint(0);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_totalItems;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_firstItem;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_totalLiquids;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_totalPower;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_itemCapacity;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_liquidCapacity;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_powerCapacity;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_powerNetStored;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_powerNetCapacity;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_powerNetIn;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_powerNetOut;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_ammo;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_ammoCapacity;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_currentAmmoType;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_memoryCapacity;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_health;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_maxHealth;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_heat;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_shield;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_armor;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_efficiency;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_progress;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_timescale;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_rotation;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_x;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_y;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_velocityX;
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 27;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_velocityY;
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 28;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_shootX;
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 29;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_shootY;
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 30;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_cameraX;
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 31;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_cameraY;
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 32;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_cameraWidth;
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 33;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_cameraHeight;
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 34;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_displayWidth;
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp35 = 35;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_displayHeight;
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = 36;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_bufferSize;
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp37 = 37;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_operations;
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp38 = 38;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_size;
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = 39;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_solid;
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp40 = 40;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_dead;
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp41 = 41;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_range;
	ARRAY_ACCESS(jobject, sp[0].o, temp41) = sp[1].o;
	jint temp42 = 42;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_shooting;
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp43 = 43;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_boosting;
	ARRAY_ACCESS(jobject, sp[0].o, temp43) = sp[1].o;
	jint temp44 = 44;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_mineX;
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp45 = 45;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_mineY;
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	jint temp46 = 46;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_mining;
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp47 = 47;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_buildX;
	ARRAY_ACCESS(jobject, sp[0].o, temp47) = sp[1].o;
	jint temp48 = 48;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_buildY;
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp49 = 49;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_pingX;
	ARRAY_ACCESS(jobject, sp[0].o, temp49) = sp[1].o;
	jint temp50 = 50;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_pingY;
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp51 = 51;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_pingText;
	ARRAY_ACCESS(jobject, sp[0].o, temp51) = sp[1].o;
	jint temp52 = 52;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_building;
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	jint temp53 = 53;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_breaking;
	ARRAY_ACCESS(jobject, sp[0].o, temp53) = sp[1].o;
	jint temp54 = 54;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_speed;
	ARRAY_ACCESS(jobject, sp[0].o, temp54) = sp[1].o;
	jint temp55 = 55;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_team;
	ARRAY_ACCESS(jobject, sp[0].o, temp55) = sp[1].o;
	jint temp56 = 56;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_type;
	ARRAY_ACCESS(jobject, sp[0].o, temp56) = sp[1].o;
	jint temp57 = 57;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_flag;
	ARRAY_ACCESS(jobject, sp[0].o, temp57) = sp[1].o;
	jint temp58 = 58;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_flying;
	ARRAY_ACCESS(jobject, sp[0].o, temp58) = sp[1].o;
	jint temp59 = 59;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_controlled;
	ARRAY_ACCESS(jobject, sp[0].o, temp59) = sp[1].o;
	jint temp60 = 60;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_controller;
	ARRAY_ACCESS(jobject, sp[0].o, temp60) = sp[1].o;
	jint temp61 = 61;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_name;
	ARRAY_ACCESS(jobject, sp[0].o, temp61) = sp[1].o;
	jint temp62 = 62;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_payloadCount;
	ARRAY_ACCESS(jobject, sp[0].o, temp62) = sp[1].o;
	jint temp63 = 63;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_payloadType;
	ARRAY_ACCESS(jobject, sp[0].o, temp63) = sp[1].o;
	jint temp64 = 64;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_totalPayload;
	ARRAY_ACCESS(jobject, sp[0].o, temp64) = sp[1].o;
	jint temp65 = 65;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_payloadCapacity;
	ARRAY_ACCESS(jobject, sp[0].o, temp65) = sp[1].o;
	jint temp66 = 66;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_maxUnits;
	ARRAY_ACCESS(jobject, sp[0].o, temp66) = sp[1].o;
	jint temp67 = 67;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_id;
	ARRAY_ACCESS(jobject, sp[0].o, temp67) = sp[1].o;
	jint temp68 = 68;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_selectedBlock;
	ARRAY_ACCESS(jobject, sp[0].o, temp68) = sp[1].o;
	jint temp69 = 69;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_selectedRotation;
	ARRAY_ACCESS(jobject, sp[0].o, temp69) = sp[1].o;
	jint temp70 = 70;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_bulletLifetime;
	ARRAY_ACCESS(jobject, sp[0].o, temp70) = sp[1].o;
	jint temp71 = 71;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_bulletTime;
	ARRAY_ACCESS(jobject, sp[0].o, temp71) = sp[1].o;
	jint temp72 = 72;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_enabled;
	ARRAY_ACCESS(jobject, sp[0].o, temp72) = sp[1].o;
	jint temp73 = 73;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_shoot;
	ARRAY_ACCESS(jobject, sp[0].o, temp73) = sp[1].o;
	jint temp74 = 74;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_shootp;
	ARRAY_ACCESS(jobject, sp[0].o, temp74) = sp[1].o;
	jint temp75 = 75;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_config;
	ARRAY_ACCESS(jobject, sp[0].o, temp75) = sp[1].o;
	jint temp76 = 76;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_color;
	ARRAY_ACCESS(jobject, sp[0].o, temp76) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LAccess_lambda$static$3_mindustry_logic_LAccess(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAccess:lambda$static$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAccess(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(101);
	sp[0].o = frame[0].o;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_privilegedAccess;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[1].o, (frame[0].o));
	((mindustry_logic_LAccess *) NULL_CHECK(sp[0].o))->F_privileged = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LAccess_lambda$static$2_mindustry_logic_LAccess_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAccess:lambda$static$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAccess(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_logic_LAccess *) NULL_CHECK((frame[0].o)))->F_params;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= 0) goto label_1;
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

jbool SM_mindustry_logic_LAccess_lambda$static$1_mindustry_logic_LAccess_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAccess:lambda$static$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAccess(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_logic_LAccess *) NULL_CHECK((frame[0].o)))->F_params;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (jint(1))) goto label_1;
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

jbool SM_mindustry_logic_LAccess_lambda$static$0_mindustry_logic_LAccess_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAccess:lambda$static$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAccess(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_logic_LAccess *) NULL_CHECK((frame[0].o)))->F_params;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) > (jint(1))) goto label_1;
	}
	{
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAccess_privilegedAccess;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
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

void clinit_mindustry_logic_LAccess(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[9];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LAccess:<clinit>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LAccess(ctx);
	{
	LINE_NUMBER(7);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"totalItems"_j));
	jint temp0 = jint(0);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_totalItems = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"firstItem"_j));
	jint temp1 = jint(1);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_firstItem = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"totalLiquids"_j));
	jint temp2 = jint(2);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_totalLiquids = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"totalPower"_j));
	jint temp3 = jint(3);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_totalPower = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"itemCapacity"_j));
	jint temp4 = jint(4);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp4, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_itemCapacity = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"liquidCapacity"_j));
	jint temp5 = jint(5);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp5, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_liquidCapacity = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerCapacity"_j));
	jint temp6 = 6;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp6, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_powerCapacity = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerNetStored"_j));
	jint temp7 = 7;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp7, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_powerNetStored = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerNetCapacity"_j));
	jint temp8 = 8;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp8, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_powerNetCapacity = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerNetIn"_j));
	jint temp9 = 9;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp9, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_powerNetIn = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerNetOut"_j));
	jint temp10 = 10;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp10, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_powerNetOut = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ammo"_j));
	jint temp11 = 11;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp11, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_ammo = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ammoCapacity"_j));
	jint temp12 = 12;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp12, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_ammoCapacity = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"currentAmmoType"_j));
	jint temp13 = 13;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp13, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_currentAmmoType = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"memoryCapacity"_j));
	jint temp14 = 14;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp14, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_memoryCapacity = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"health"_j));
	jint temp15 = 15;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp15, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_health = sp[0].o;
	LINE_NUMBER(23);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maxHealth"_j));
	jint temp16 = 16;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp16, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_maxHealth = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"heat"_j));
	jint temp17 = 17;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp17, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_heat = sp[0].o;
	LINE_NUMBER(25);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shield"_j));
	jint temp18 = 18;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp18, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_shield = sp[0].o;
	LINE_NUMBER(26);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"armor"_j));
	jint temp19 = 19;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp19, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_armor = sp[0].o;
	LINE_NUMBER(27);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"efficiency"_j));
	jint temp20 = 20;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp20, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_efficiency = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"progress"_j));
	jint temp21 = 21;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp21, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_progress = sp[0].o;
	LINE_NUMBER(29);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"timescale"_j));
	jint temp22 = 22;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp22, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_timescale = sp[0].o;
	LINE_NUMBER(30);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rotation"_j));
	jint temp23 = 23;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp23, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_rotation = sp[0].o;
	LINE_NUMBER(31);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	jint temp24 = 24;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp24, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_x = sp[0].o;
	LINE_NUMBER(32);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	jint temp25 = 25;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp25, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_y = sp[0].o;
	LINE_NUMBER(33);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"velocityX"_j));
	jint temp26 = 26;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp26, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_velocityX = sp[0].o;
	LINE_NUMBER(34);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"velocityY"_j));
	jint temp27 = 27;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp27, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_velocityY = sp[0].o;
	LINE_NUMBER(35);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shootX"_j));
	jint temp28 = 28;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp28, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_shootX = sp[0].o;
	LINE_NUMBER(36);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shootY"_j));
	jint temp29 = 29;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp29, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_shootY = sp[0].o;
	LINE_NUMBER(37);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cameraX"_j));
	jint temp30 = 30;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp30, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_cameraX = sp[0].o;
	LINE_NUMBER(38);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cameraY"_j));
	jint temp31 = 31;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp31, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_cameraY = sp[0].o;
	LINE_NUMBER(39);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cameraWidth"_j));
	jint temp32 = 32;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp32, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_cameraWidth = sp[0].o;
	LINE_NUMBER(40);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cameraHeight"_j));
	jint temp33 = 33;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp33, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_cameraHeight = sp[0].o;
	LINE_NUMBER(41);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"displayWidth"_j));
	jint temp34 = 34;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp34, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_displayWidth = sp[0].o;
	LINE_NUMBER(42);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"displayHeight"_j));
	jint temp35 = 35;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp35, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_displayHeight = sp[0].o;
	LINE_NUMBER(43);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bufferSize"_j));
	jint temp36 = 36;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp36, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_bufferSize = sp[0].o;
	LINE_NUMBER(44);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"operations"_j));
	jint temp37 = 37;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp37, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_operations = sp[0].o;
	LINE_NUMBER(45);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"size"_j));
	jint temp38 = 38;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp38, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_size = sp[0].o;
	LINE_NUMBER(46);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"solid"_j));
	jint temp39 = 39;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp39, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_solid = sp[0].o;
	LINE_NUMBER(47);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"dead"_j));
	jint temp40 = 40;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp40, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_dead = sp[0].o;
	LINE_NUMBER(48);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"range"_j));
	jint temp41 = 41;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp41, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_range = sp[0].o;
	LINE_NUMBER(49);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shooting"_j));
	jint temp42 = 42;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp42, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_shooting = sp[0].o;
	LINE_NUMBER(50);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"boosting"_j));
	jint temp43 = 43;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp43, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_boosting = sp[0].o;
	LINE_NUMBER(51);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mineX"_j));
	jint temp44 = 44;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp44, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_mineX = sp[0].o;
	LINE_NUMBER(52);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mineY"_j));
	jint temp45 = 45;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp45, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_mineY = sp[0].o;
	LINE_NUMBER(53);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mining"_j));
	jint temp46 = 46;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp46, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_mining = sp[0].o;
	LINE_NUMBER(54);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buildX"_j));
	jint temp47 = 47;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp47, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_buildX = sp[0].o;
	LINE_NUMBER(55);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"buildY"_j));
	jint temp48 = 48;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp48, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_buildY = sp[0].o;
	LINE_NUMBER(56);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pingX"_j));
	jint temp49 = 49;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp49, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_pingX = sp[0].o;
	LINE_NUMBER(57);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pingY"_j));
	jint temp50 = 50;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp50, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_pingY = sp[0].o;
	LINE_NUMBER(58);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pingText"_j));
	jint temp51 = 51;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp51, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_pingText = sp[0].o;
	LINE_NUMBER(59);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"building"_j));
	jint temp52 = 52;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp52, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_building = sp[0].o;
	LINE_NUMBER(60);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"breaking"_j));
	jint temp53 = 53;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp53, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_breaking = sp[0].o;
	LINE_NUMBER(61);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"speed"_j));
	jint temp54 = 54;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp54, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_speed = sp[0].o;
	LINE_NUMBER(62);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"team"_j));
	jint temp55 = 55;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp55, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_team = sp[0].o;
	LINE_NUMBER(63);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"type"_j));
	jint temp56 = 56;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp56, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_type = sp[0].o;
	LINE_NUMBER(64);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"flag"_j));
	jint temp57 = 57;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp57, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_flag = sp[0].o;
	LINE_NUMBER(65);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"flying"_j));
	jint temp58 = 58;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp58, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_flying = sp[0].o;
	LINE_NUMBER(66);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controlled"_j));
	jint temp59 = 59;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp59, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_controlled = sp[0].o;
	LINE_NUMBER(67);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"controller"_j));
	jint temp60 = 60;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp60, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_controller = sp[0].o;
	LINE_NUMBER(68);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"name"_j));
	jint temp61 = 61;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp61, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_name = sp[0].o;
	LINE_NUMBER(69);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"payloadCount"_j));
	jint temp62 = 62;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp62, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_payloadCount = sp[0].o;
	LINE_NUMBER(70);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"payloadType"_j));
	jint temp63 = 63;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp63, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_payloadType = sp[0].o;
	LINE_NUMBER(71);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"totalPayload"_j));
	jint temp64 = 64;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp64, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_totalPayload = sp[0].o;
	LINE_NUMBER(72);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"payloadCapacity"_j));
	jint temp65 = 65;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp65, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_payloadCapacity = sp[0].o;
	LINE_NUMBER(73);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maxUnits"_j));
	jint temp66 = 66;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp66, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_maxUnits = sp[0].o;
	LINE_NUMBER(74);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"id"_j));
	jint temp67 = 67;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp67, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_id = sp[0].o;
	LINE_NUMBER(75);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"selectedBlock"_j));
	jint temp68 = 68;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp68, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_selectedBlock = sp[0].o;
	LINE_NUMBER(76);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"selectedRotation"_j));
	jint temp69 = 69;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp69, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_selectedRotation = sp[0].o;
	LINE_NUMBER(77);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bulletLifetime"_j));
	jint temp70 = 70;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp70, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_bulletLifetime = sp[0].o;
	LINE_NUMBER(78);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bulletTime"_j));
	jint temp71 = 71;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp71, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_bulletTime = sp[0].o;
	LINE_NUMBER(81);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enabled"_j));
	jint temp72 = 72;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"to"_j)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp72, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_enabled = sp[0].o;
	LINE_NUMBER(82);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shoot"_j));
	jint temp73 = 73;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"shoot"_j)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp73, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_shoot = sp[0].o;
	LINE_NUMBER(83);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"shootp"_j));
	jint temp74 = 74;
	jint temp75 = jint(1);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"unit"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"shoot"_j)));
	init_mindustry_logic_LAccess_java_lang_String_int_boolean_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp74, temp75, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_shootp = sp[0].o;
	LINE_NUMBER(84);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"config"_j));
	jint temp76 = 75;
	jint temp77 = jint(1);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"to"_j)));
	init_mindustry_logic_LAccess_java_lang_String_int_boolean_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp76, temp77, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_config = sp[0].o;
	LINE_NUMBER(85);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LAccess);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"color"_j));
	jint temp78 = 76;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"to"_j)));
	init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp78, sp[2].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_color = sp[0].o;
	LINE_NUMBER(6);
	sp[0].o = (jobject)SM_mindustry_logic_LAccess_$values_R_Array1_mindustry_logic_LAccess(ctx);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_$VALUES = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_LAccess, (jint(4)));
	jint temp79 = jint(0);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_cameraX;
	ARRAY_ACCESS(jobject, sp[0].o, temp79) = sp[1].o;
	jint temp80 = jint(1);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_cameraY;
	ARRAY_ACCESS(jobject, sp[0].o, temp80) = sp[1].o;
	jint temp81 = jint(2);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_cameraWidth;
	ARRAY_ACCESS(jobject, sp[0].o, temp81) = sp[1].o;
	jint temp82 = jint(3);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_cameraHeight;
	ARRAY_ACCESS(jobject, sp[0].o, temp82) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_ObjectSet_with_Array1_java_lang_Object_R_arc_struct_ObjectSet(ctx, sp[0].o);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_privilegedAccess = sp[0].o;
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_mindustry_logic_LAccess_values_R_Array1_mindustry_logic_LAccess(ctx);
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_all = sp[0].o;
	LINE_NUMBER(95);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAccess_all;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LAccess_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_logic_LAccess_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_logic_LAccess_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_struct_Seq_select_Array1_java_lang_Object_arc_func_Boolf_R_arc_struct_Seq(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_logic_LAccess)));
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_senseable = (checkCast(ctx, getArrayClass(&class_mindustry_logic_LAccess, 1), sp[0].o));
	LINE_NUMBER(96);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAccess_all;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LAccess_invoke_arc_func_Boolf_4(ctx);
		auto proxy = (mindustry_logic_LAccess_invoke_arc_func_Boolf_4 *) gcAlloc(ctx, &class_mindustry_logic_LAccess_invoke_arc_func_Boolf_4);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_struct_Seq_select_Array1_java_lang_Object_arc_func_Boolf_R_arc_struct_Seq(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_logic_LAccess)));
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_senseablePrivileged = (checkCast(ctx, getArrayClass(&class_mindustry_logic_LAccess, 1), sp[0].o));
	LINE_NUMBER(97);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAccess_all;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LAccess_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_logic_LAccess_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_logic_LAccess_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_struct_Seq_select_Array1_java_lang_Object_arc_func_Boolf_R_arc_struct_Seq(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_logic_LAccess)));
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_controls = (checkCast(ctx, getArrayClass(&class_mindustry_logic_LAccess, 1), sp[0].o));
	LINE_NUMBER(98);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_LAccess, (15));
	jint temp83 = jint(0);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_x;
	ARRAY_ACCESS(jobject, sp[0].o, temp83) = sp[1].o;
	jint temp84 = jint(1);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_y;
	ARRAY_ACCESS(jobject, sp[0].o, temp84) = sp[1].o;
	jint temp85 = jint(2);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_velocityX;
	ARRAY_ACCESS(jobject, sp[0].o, temp85) = sp[1].o;
	jint temp86 = jint(3);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_velocityY;
	ARRAY_ACCESS(jobject, sp[0].o, temp86) = sp[1].o;
	jint temp87 = jint(4);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_rotation;
	ARRAY_ACCESS(jobject, sp[0].o, temp87) = sp[1].o;
	jint temp88 = jint(5);
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_speed;
	ARRAY_ACCESS(jobject, sp[0].o, temp88) = sp[1].o;
	jint temp89 = 6;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_armor;
	ARRAY_ACCESS(jobject, sp[0].o, temp89) = sp[1].o;
	jint temp90 = 7;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_health;
	ARRAY_ACCESS(jobject, sp[0].o, temp90) = sp[1].o;
	jint temp91 = 8;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_shield;
	ARRAY_ACCESS(jobject, sp[0].o, temp91) = sp[1].o;
	jint temp92 = 9;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_team;
	ARRAY_ACCESS(jobject, sp[0].o, temp92) = sp[1].o;
	jint temp93 = 10;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_flag;
	ARRAY_ACCESS(jobject, sp[0].o, temp93) = sp[1].o;
	jint temp94 = 11;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_totalPower;
	ARRAY_ACCESS(jobject, sp[0].o, temp94) = sp[1].o;
	jint temp95 = 12;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_payloadType;
	ARRAY_ACCESS(jobject, sp[0].o, temp95) = sp[1].o;
	jint temp96 = 13;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_bulletTime;
	ARRAY_ACCESS(jobject, sp[0].o, temp96) = sp[1].o;
	jint temp97 = 14;
	clinit_mindustry_logic_LAccess(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LAccess_bulletLifetime;
	ARRAY_ACCESS(jobject, sp[0].o, temp97) = sp[1].o;
	clinit_mindustry_logic_LAccess(ctx);
	SF_mindustry_logic_LAccess_settable = sp[0].o;
	LINE_NUMBER(101);
	clinit_mindustry_logic_LAccess(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LAccess_privilegedAccess;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LAccess_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_logic_LAccess_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_logic_LAccess_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectSet_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LAccess[] {
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
};

static FieldMetadata fields[] {
	{ "totalItems", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_totalItems, "Lmindustry/logic/LAccess;", 16409 },
	{ "firstItem", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_firstItem, "Lmindustry/logic/LAccess;", 16409 },
	{ "totalLiquids", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_totalLiquids, "Lmindustry/logic/LAccess;", 16409 },
	{ "totalPower", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_totalPower, "Lmindustry/logic/LAccess;", 16409 },
	{ "itemCapacity", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_itemCapacity, "Lmindustry/logic/LAccess;", 16409 },
	{ "liquidCapacity", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_liquidCapacity, "Lmindustry/logic/LAccess;", 16409 },
	{ "powerCapacity", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_powerCapacity, "Lmindustry/logic/LAccess;", 16409 },
	{ "powerNetStored", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_powerNetStored, "Lmindustry/logic/LAccess;", 16409 },
	{ "powerNetCapacity", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_powerNetCapacity, "Lmindustry/logic/LAccess;", 16409 },
	{ "powerNetIn", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_powerNetIn, "Lmindustry/logic/LAccess;", 16409 },
	{ "powerNetOut", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_powerNetOut, "Lmindustry/logic/LAccess;", 16409 },
	{ "ammo", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_ammo, "Lmindustry/logic/LAccess;", 16409 },
	{ "ammoCapacity", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_ammoCapacity, "Lmindustry/logic/LAccess;", 16409 },
	{ "currentAmmoType", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_currentAmmoType, "Lmindustry/logic/LAccess;", 16409 },
	{ "memoryCapacity", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_memoryCapacity, "Lmindustry/logic/LAccess;", 16409 },
	{ "health", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_health, "Lmindustry/logic/LAccess;", 16409 },
	{ "maxHealth", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_maxHealth, "Lmindustry/logic/LAccess;", 16409 },
	{ "heat", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_heat, "Lmindustry/logic/LAccess;", 16409 },
	{ "shield", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_shield, "Lmindustry/logic/LAccess;", 16409 },
	{ "armor", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_armor, "Lmindustry/logic/LAccess;", 16409 },
	{ "efficiency", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_efficiency, "Lmindustry/logic/LAccess;", 16409 },
	{ "progress", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_progress, "Lmindustry/logic/LAccess;", 16409 },
	{ "timescale", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_timescale, "Lmindustry/logic/LAccess;", 16409 },
	{ "rotation", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_rotation, "Lmindustry/logic/LAccess;", 16409 },
	{ "x", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_x, "Lmindustry/logic/LAccess;", 16409 },
	{ "y", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_y, "Lmindustry/logic/LAccess;", 16409 },
	{ "velocityX", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_velocityX, "Lmindustry/logic/LAccess;", 16409 },
	{ "velocityY", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_velocityY, "Lmindustry/logic/LAccess;", 16409 },
	{ "shootX", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_shootX, "Lmindustry/logic/LAccess;", 16409 },
	{ "shootY", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_shootY, "Lmindustry/logic/LAccess;", 16409 },
	{ "cameraX", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_cameraX, "Lmindustry/logic/LAccess;", 16409 },
	{ "cameraY", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_cameraY, "Lmindustry/logic/LAccess;", 16409 },
	{ "cameraWidth", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_cameraWidth, "Lmindustry/logic/LAccess;", 16409 },
	{ "cameraHeight", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_cameraHeight, "Lmindustry/logic/LAccess;", 16409 },
	{ "displayWidth", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_displayWidth, "Lmindustry/logic/LAccess;", 16409 },
	{ "displayHeight", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_displayHeight, "Lmindustry/logic/LAccess;", 16409 },
	{ "bufferSize", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_bufferSize, "Lmindustry/logic/LAccess;", 16409 },
	{ "operations", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_operations, "Lmindustry/logic/LAccess;", 16409 },
	{ "size", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_size, "Lmindustry/logic/LAccess;", 16409 },
	{ "solid", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_solid, "Lmindustry/logic/LAccess;", 16409 },
	{ "dead", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_dead, "Lmindustry/logic/LAccess;", 16409 },
	{ "range", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_range, "Lmindustry/logic/LAccess;", 16409 },
	{ "shooting", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_shooting, "Lmindustry/logic/LAccess;", 16409 },
	{ "boosting", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_boosting, "Lmindustry/logic/LAccess;", 16409 },
	{ "mineX", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_mineX, "Lmindustry/logic/LAccess;", 16409 },
	{ "mineY", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_mineY, "Lmindustry/logic/LAccess;", 16409 },
	{ "mining", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_mining, "Lmindustry/logic/LAccess;", 16409 },
	{ "buildX", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_buildX, "Lmindustry/logic/LAccess;", 16409 },
	{ "buildY", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_buildY, "Lmindustry/logic/LAccess;", 16409 },
	{ "pingX", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_pingX, "Lmindustry/logic/LAccess;", 16409 },
	{ "pingY", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_pingY, "Lmindustry/logic/LAccess;", 16409 },
	{ "pingText", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_pingText, "Lmindustry/logic/LAccess;", 16409 },
	{ "building", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_building, "Lmindustry/logic/LAccess;", 16409 },
	{ "breaking", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_breaking, "Lmindustry/logic/LAccess;", 16409 },
	{ "speed", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_speed, "Lmindustry/logic/LAccess;", 16409 },
	{ "team", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_team, "Lmindustry/logic/LAccess;", 16409 },
	{ "type", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_type, "Lmindustry/logic/LAccess;", 16409 },
	{ "flag", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_flag, "Lmindustry/logic/LAccess;", 16409 },
	{ "flying", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_flying, "Lmindustry/logic/LAccess;", 16409 },
	{ "controlled", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_controlled, "Lmindustry/logic/LAccess;", 16409 },
	{ "controller", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_controller, "Lmindustry/logic/LAccess;", 16409 },
	{ "name", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_name, "Lmindustry/logic/LAccess;", 16409 },
	{ "payloadCount", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_payloadCount, "Lmindustry/logic/LAccess;", 16409 },
	{ "payloadType", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_payloadType, "Lmindustry/logic/LAccess;", 16409 },
	{ "totalPayload", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_totalPayload, "Lmindustry/logic/LAccess;", 16409 },
	{ "payloadCapacity", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_payloadCapacity, "Lmindustry/logic/LAccess;", 16409 },
	{ "maxUnits", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_maxUnits, "Lmindustry/logic/LAccess;", 16409 },
	{ "id", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_id, "Lmindustry/logic/LAccess;", 16409 },
	{ "selectedBlock", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_selectedBlock, "Lmindustry/logic/LAccess;", 16409 },
	{ "selectedRotation", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_selectedRotation, "Lmindustry/logic/LAccess;", 16409 },
	{ "bulletLifetime", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_bulletLifetime, "Lmindustry/logic/LAccess;", 16409 },
	{ "bulletTime", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_bulletTime, "Lmindustry/logic/LAccess;", 16409 },
	{ "enabled", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_enabled, "Lmindustry/logic/LAccess;", 16409 },
	{ "shoot", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_shoot, "Lmindustry/logic/LAccess;", 16409 },
	{ "shootp", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_shootp, "Lmindustry/logic/LAccess;", 16409 },
	{ "config", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_config, "Lmindustry/logic/LAccess;", 16409 },
	{ "color", &class_mindustry_logic_LAccess, (intptr_t) &SF_mindustry_logic_LAccess_color, "Lmindustry/logic/LAccess;", 16409 },
	{ "params", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_logic_LAccess, F_params), "[Ljava/lang/String;", 17 },
	{ "isObj", &class_boolean, offsetof(mindustry_logic_LAccess, F_isObj), "Z", 17 },
	{ "privileged", &class_boolean, offsetof(mindustry_logic_LAccess, F_privileged), "Z", 1 },
	{ "privilegedAccess", &class_arc_struct_ObjectSet, (intptr_t) &SF_mindustry_logic_LAccess_privilegedAccess, "Larc/struct/ObjectSet;", 26 },
	{ "all", getArrayClass(&class_mindustry_logic_LAccess, 1), (intptr_t) &SF_mindustry_logic_LAccess_all, "[Lmindustry/logic/LAccess;", 25 },
	{ "senseable", getArrayClass(&class_mindustry_logic_LAccess, 1), (intptr_t) &SF_mindustry_logic_LAccess_senseable, "[Lmindustry/logic/LAccess;", 25 },
	{ "senseablePrivileged", getArrayClass(&class_mindustry_logic_LAccess, 1), (intptr_t) &SF_mindustry_logic_LAccess_senseablePrivileged, "[Lmindustry/logic/LAccess;", 25 },
	{ "controls", getArrayClass(&class_mindustry_logic_LAccess, 1), (intptr_t) &SF_mindustry_logic_LAccess_controls, "[Lmindustry/logic/LAccess;", 25 },
	{ "settable", getArrayClass(&class_mindustry_logic_LAccess, 1), (intptr_t) &SF_mindustry_logic_LAccess_settable, "[Lmindustry/logic/LAccess;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_LAccess, 1), (intptr_t) &SF_mindustry_logic_LAccess_$VALUES, "[Lmindustry/logic/LAccess;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_LAccess_values_R_Array1_mindustry_logic_LAccess, 0, "()[Lmindustry/logic/LAccess;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_LAccess_valueOf_java_lang_String_R_mindustry_logic_LAccess, 0, "(Ljava/lang/String;)Lmindustry/logic/LAccess;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_LAccess_java_lang_String_int_Array1_java_lang_String, 0, "(Ljava/lang/String;I[Ljava/lang/String;)V", 130 },
	{ "<init>", (intptr_t) init_mindustry_logic_LAccess_java_lang_String_int_boolean_Array1_java_lang_String, 0, "(Ljava/lang/String;IZ[Ljava/lang/String;)V", 130 },
	{ "$values", (intptr_t) SM_mindustry_logic_LAccess_$values_R_Array1_mindustry_logic_LAccess, 0, "()[Lmindustry/logic/LAccess;", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_logic_LAccess_lambda$static$3_mindustry_logic_LAccess, 0, "(Lmindustry/logic/LAccess;)V", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_logic_LAccess_lambda$static$2_mindustry_logic_LAccess_R_boolean, 0, "(Lmindustry/logic/LAccess;)Z", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_logic_LAccess_lambda$static$1_mindustry_logic_LAccess_R_boolean, 0, "(Lmindustry/logic/LAccess;)Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_logic_LAccess_lambda$static$0_mindustry_logic_LAccess_R_boolean, 0, "(Lmindustry/logic/LAccess;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LAccess, 0, "()V", 8 },
};

Class class_mindustry_logic_LAccess{
		.nativeName = (intptr_t) "mindustry/logic/LAccess",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_LAccess),
		.classVtable = (intptr_t) vtable_mindustry_logic_LAccess,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LAccess,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LAccess,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 87,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LAccess = registerClass(&class_mindustry_logic_LAccess);

}
