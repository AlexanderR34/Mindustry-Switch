#include "mindustry/input/Binding.h"
#include "java/lang/Object.h"
#include "arc/input/KeyBind_Axis.h"
#include "java/lang/String.h"
#include "mindustry/input/Binding.h"
#include "arc/input/KeyBind_KeybindValue.h"
#include "mindustry/Vars.h"
#include "arc/input/KeyBind.h"
#include "arc/input/KeyCode.h"

extern "C" {

jobject SF_mindustry_input_Binding_moveX;
jobject SF_mindustry_input_Binding_moveY;
jobject SF_mindustry_input_Binding_mouseMove;
jobject SF_mindustry_input_Binding_pan;
jobject SF_mindustry_input_Binding_boost;
jobject SF_mindustry_input_Binding_respawn;
jobject SF_mindustry_input_Binding_control;
jobject SF_mindustry_input_Binding_select;
jobject SF_mindustry_input_Binding_deselect;
jobject SF_mindustry_input_Binding_breakBlock;
jobject SF_mindustry_input_Binding_pickupCargo;
jobject SF_mindustry_input_Binding_dropCargo;
jobject SF_mindustry_input_Binding_clearBuilding;
jobject SF_mindustry_input_Binding_pauseBuilding;
jobject SF_mindustry_input_Binding_rotate;
jobject SF_mindustry_input_Binding_rotatePlaced;
jobject SF_mindustry_input_Binding_diagonalPlacement;
jobject SF_mindustry_input_Binding_pick;
jobject SF_mindustry_input_Binding_ping;
jobject SF_mindustry_input_Binding_rebuildSelect;
jobject SF_mindustry_input_Binding_schematicSelect;
jobject SF_mindustry_input_Binding_schematicFlipX;
jobject SF_mindustry_input_Binding_schematicFlipY;
jobject SF_mindustry_input_Binding_schematicMenu;
jobject SF_mindustry_input_Binding_commandMode;
jobject SF_mindustry_input_Binding_commandQueue;
jobject SF_mindustry_input_Binding_createControlGroup;
jobject SF_mindustry_input_Binding_selectAllUnits;
jobject SF_mindustry_input_Binding_selectAllUnitFactories;
jobject SF_mindustry_input_Binding_selectAllUnitTransport;
jobject SF_mindustry_input_Binding_selectAcrossScreen;
jobject SF_mindustry_input_Binding_cancelOrders;
jobject SF_mindustry_input_Binding_unitStanceHoldFire;
jobject SF_mindustry_input_Binding_unitStancePursueTarget;
jobject SF_mindustry_input_Binding_unitStancePatrol;
jobject SF_mindustry_input_Binding_unitStanceRam;
jobject SF_mindustry_input_Binding_unitStanceBoost;
jobject SF_mindustry_input_Binding_unitStanceHoldPosition;
jobject SF_mindustry_input_Binding_unitCommandMove;
jobject SF_mindustry_input_Binding_unitCommandRepair;
jobject SF_mindustry_input_Binding_unitCommandRebuild;
jobject SF_mindustry_input_Binding_unitCommandAssist;
jobject SF_mindustry_input_Binding_unitCommandMine;
jobject SF_mindustry_input_Binding_unitCommandEnterPayload;
jobject SF_mindustry_input_Binding_unitCommandLoadUnits;
jobject SF_mindustry_input_Binding_unitCommandLoadBlocks;
jobject SF_mindustry_input_Binding_unitCommandUnloadPayload;
jobject SF_mindustry_input_Binding_unitCommandLoopPayload;
jobject SF_mindustry_input_Binding_categoryPrev;
jobject SF_mindustry_input_Binding_categoryNext;
jobject SF_mindustry_input_Binding_blockSelectLeft;
jobject SF_mindustry_input_Binding_blockSelectRight;
jobject SF_mindustry_input_Binding_blockSelectUp;
jobject SF_mindustry_input_Binding_blockSelectDown;
jobject SF_mindustry_input_Binding_blockSelect01;
jobject SF_mindustry_input_Binding_blockSelect02;
jobject SF_mindustry_input_Binding_blockSelect03;
jobject SF_mindustry_input_Binding_blockSelect04;
jobject SF_mindustry_input_Binding_blockSelect05;
jobject SF_mindustry_input_Binding_blockSelect06;
jobject SF_mindustry_input_Binding_blockSelect07;
jobject SF_mindustry_input_Binding_blockSelect08;
jobject SF_mindustry_input_Binding_blockSelect09;
jobject SF_mindustry_input_Binding_blockSelect10;
jobject SF_mindustry_input_Binding_zoom;
jobject SF_mindustry_input_Binding_detachCamera;
jobject SF_mindustry_input_Binding_teleportCursor;
jobject SF_mindustry_input_Binding_menu;
jobject SF_mindustry_input_Binding_fullscreen;
jobject SF_mindustry_input_Binding_pause;
jobject SF_mindustry_input_Binding_skipWave;
jobject SF_mindustry_input_Binding_minimap;
jobject SF_mindustry_input_Binding_research;
jobject SF_mindustry_input_Binding_planetMap;
jobject SF_mindustry_input_Binding_blockInfo;
jobject SF_mindustry_input_Binding_toggleMenus;
jobject SF_mindustry_input_Binding_screenshot;
jobject SF_mindustry_input_Binding_togglePowerLines;
jobject SF_mindustry_input_Binding_toggleBlockStatus;
jobject SF_mindustry_input_Binding_playerList;
jobject SF_mindustry_input_Binding_chat;
jobject SF_mindustry_input_Binding_chatHistoryPrev;
jobject SF_mindustry_input_Binding_chatHistoryNext;
jobject SF_mindustry_input_Binding_chatScroll;
jobject SF_mindustry_input_Binding_chatMode;
jobject SF_mindustry_input_Binding_console;
jobject SF_mindustry_input_Binding_debugHitboxes;
jobject SF_mindustry_input_Binding_performanceMetrics;

void mark_mindustry_input_Binding(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_input_Binding_moveX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_moveX)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_moveX, mark, depth + 1);
		if (SF_mindustry_input_Binding_moveY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_moveY)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_moveY, mark, depth + 1);
		if (SF_mindustry_input_Binding_mouseMove)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_mouseMove)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_mouseMove, mark, depth + 1);
		if (SF_mindustry_input_Binding_pan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_pan)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_pan, mark, depth + 1);
		if (SF_mindustry_input_Binding_boost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_boost)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_boost, mark, depth + 1);
		if (SF_mindustry_input_Binding_respawn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_respawn)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_respawn, mark, depth + 1);
		if (SF_mindustry_input_Binding_control)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_control)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_control, mark, depth + 1);
		if (SF_mindustry_input_Binding_select)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_select)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_select, mark, depth + 1);
		if (SF_mindustry_input_Binding_deselect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_deselect)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_deselect, mark, depth + 1);
		if (SF_mindustry_input_Binding_breakBlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_breakBlock)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_breakBlock, mark, depth + 1);
		if (SF_mindustry_input_Binding_pickupCargo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_pickupCargo)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_pickupCargo, mark, depth + 1);
		if (SF_mindustry_input_Binding_dropCargo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_dropCargo)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_dropCargo, mark, depth + 1);
		if (SF_mindustry_input_Binding_clearBuilding)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_clearBuilding)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_clearBuilding, mark, depth + 1);
		if (SF_mindustry_input_Binding_pauseBuilding)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_pauseBuilding)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_pauseBuilding, mark, depth + 1);
		if (SF_mindustry_input_Binding_rotate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_rotate)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_rotate, mark, depth + 1);
		if (SF_mindustry_input_Binding_rotatePlaced)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_rotatePlaced)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_rotatePlaced, mark, depth + 1);
		if (SF_mindustry_input_Binding_diagonalPlacement)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_diagonalPlacement)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_diagonalPlacement, mark, depth + 1);
		if (SF_mindustry_input_Binding_pick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_pick)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_pick, mark, depth + 1);
		if (SF_mindustry_input_Binding_ping)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_ping)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_ping, mark, depth + 1);
		if (SF_mindustry_input_Binding_rebuildSelect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_rebuildSelect)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_rebuildSelect, mark, depth + 1);
		if (SF_mindustry_input_Binding_schematicSelect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_schematicSelect)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_schematicSelect, mark, depth + 1);
		if (SF_mindustry_input_Binding_schematicFlipX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_schematicFlipX)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_schematicFlipX, mark, depth + 1);
		if (SF_mindustry_input_Binding_schematicFlipY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_schematicFlipY)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_schematicFlipY, mark, depth + 1);
		if (SF_mindustry_input_Binding_schematicMenu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_schematicMenu)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_schematicMenu, mark, depth + 1);
		if (SF_mindustry_input_Binding_commandMode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_commandMode)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_commandMode, mark, depth + 1);
		if (SF_mindustry_input_Binding_commandQueue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_commandQueue)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_commandQueue, mark, depth + 1);
		if (SF_mindustry_input_Binding_createControlGroup)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_createControlGroup)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_createControlGroup, mark, depth + 1);
		if (SF_mindustry_input_Binding_selectAllUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_selectAllUnits)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_selectAllUnits, mark, depth + 1);
		if (SF_mindustry_input_Binding_selectAllUnitFactories)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_selectAllUnitFactories)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_selectAllUnitFactories, mark, depth + 1);
		if (SF_mindustry_input_Binding_selectAllUnitTransport)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_selectAllUnitTransport)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_selectAllUnitTransport, mark, depth + 1);
		if (SF_mindustry_input_Binding_selectAcrossScreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_selectAcrossScreen)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_selectAcrossScreen, mark, depth + 1);
		if (SF_mindustry_input_Binding_cancelOrders)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_cancelOrders)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_cancelOrders, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitStanceHoldFire)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitStanceHoldFire)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitStanceHoldFire, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitStancePursueTarget)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitStancePursueTarget)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitStancePursueTarget, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitStancePatrol)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitStancePatrol)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitStancePatrol, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitStanceRam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitStanceRam)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitStanceRam, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitStanceBoost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitStanceBoost)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitStanceBoost, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitStanceHoldPosition)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitStanceHoldPosition)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitStanceHoldPosition, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitCommandMove)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitCommandMove)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitCommandMove, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitCommandRepair)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitCommandRepair)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitCommandRepair, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitCommandRebuild)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitCommandRebuild)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitCommandRebuild, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitCommandAssist)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitCommandAssist)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitCommandAssist, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitCommandMine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitCommandMine)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitCommandMine, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitCommandEnterPayload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitCommandEnterPayload)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitCommandEnterPayload, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitCommandLoadUnits)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitCommandLoadUnits)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitCommandLoadUnits, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitCommandLoadBlocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitCommandLoadBlocks)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitCommandLoadBlocks, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitCommandUnloadPayload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitCommandUnloadPayload)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitCommandUnloadPayload, mark, depth + 1);
		if (SF_mindustry_input_Binding_unitCommandLoopPayload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_unitCommandLoopPayload)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_unitCommandLoopPayload, mark, depth + 1);
		if (SF_mindustry_input_Binding_categoryPrev)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_categoryPrev)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_categoryPrev, mark, depth + 1);
		if (SF_mindustry_input_Binding_categoryNext)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_categoryNext)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_categoryNext, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelectLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelectLeft)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelectLeft, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelectRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelectRight)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelectRight, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelectUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelectUp)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelectUp, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelectDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelectDown)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelectDown, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelect01)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelect01)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelect01, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelect02)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelect02)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelect02, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelect03)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelect03)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelect03, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelect04)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelect04)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelect04, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelect05)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelect05)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelect05, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelect06)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelect06)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelect06, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelect07)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelect07)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelect07, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelect08)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelect08)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelect08, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelect09)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelect09)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelect09, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockSelect10)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockSelect10)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockSelect10, mark, depth + 1);
		if (SF_mindustry_input_Binding_zoom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_zoom)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_zoom, mark, depth + 1);
		if (SF_mindustry_input_Binding_detachCamera)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_detachCamera)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_detachCamera, mark, depth + 1);
		if (SF_mindustry_input_Binding_teleportCursor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_teleportCursor)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_teleportCursor, mark, depth + 1);
		if (SF_mindustry_input_Binding_menu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_menu)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_menu, mark, depth + 1);
		if (SF_mindustry_input_Binding_fullscreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_fullscreen)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_fullscreen, mark, depth + 1);
		if (SF_mindustry_input_Binding_pause)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_pause)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_pause, mark, depth + 1);
		if (SF_mindustry_input_Binding_skipWave)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_skipWave)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_skipWave, mark, depth + 1);
		if (SF_mindustry_input_Binding_minimap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_minimap)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_minimap, mark, depth + 1);
		if (SF_mindustry_input_Binding_research)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_research)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_research, mark, depth + 1);
		if (SF_mindustry_input_Binding_planetMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_planetMap)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_planetMap, mark, depth + 1);
		if (SF_mindustry_input_Binding_blockInfo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_blockInfo)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_blockInfo, mark, depth + 1);
		if (SF_mindustry_input_Binding_toggleMenus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_toggleMenus)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_toggleMenus, mark, depth + 1);
		if (SF_mindustry_input_Binding_screenshot)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_screenshot)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_screenshot, mark, depth + 1);
		if (SF_mindustry_input_Binding_togglePowerLines)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_togglePowerLines)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_togglePowerLines, mark, depth + 1);
		if (SF_mindustry_input_Binding_toggleBlockStatus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_toggleBlockStatus)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_toggleBlockStatus, mark, depth + 1);
		if (SF_mindustry_input_Binding_playerList)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_playerList)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_playerList, mark, depth + 1);
		if (SF_mindustry_input_Binding_chat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_chat)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_chat, mark, depth + 1);
		if (SF_mindustry_input_Binding_chatHistoryPrev)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_chatHistoryPrev)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_chatHistoryPrev, mark, depth + 1);
		if (SF_mindustry_input_Binding_chatHistoryNext)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_chatHistoryNext)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_chatHistoryNext, mark, depth + 1);
		if (SF_mindustry_input_Binding_chatScroll)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_chatScroll)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_chatScroll, mark, depth + 1);
		if (SF_mindustry_input_Binding_chatMode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_chatMode)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_chatMode, mark, depth + 1);
		if (SF_mindustry_input_Binding_console)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_console)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_console, mark, depth + 1);
		if (SF_mindustry_input_Binding_debugHitboxes)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_debugHitboxes)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_debugHitboxes, mark, depth + 1);
		if (SF_mindustry_input_Binding_performanceMetrics)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_input_Binding_performanceMetrics)->clazz)->markFunction)((jobject) SF_mindustry_input_Binding_performanceMetrics, mark, depth + 1);
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
	auto self = (mindustry_input_Binding *) object;
}

void init_mindustry_input_Binding(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Binding:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Binding(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_input_Binding_init(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/input/Binding:init", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_input_Binding(ctx);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_input_Binding(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/input/Binding:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_input_Binding(ctx);
	{
	LINE_NUMBER(10);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"move_x"_j));
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_a;
	clinit_arc_input_KeyCode(ctx);
	sp[3].o = (jobject)SF_arc_input_KeyCode_d;
	init_arc_input_KeyBind$Axis_arc_input_KeyCode_arc_input_KeyCode(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"general"_j))));
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_moveX = sp[0].o;
	LINE_NUMBER(11);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"move_y"_j));
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_s;
	clinit_arc_input_KeyCode(ctx);
	sp[3].o = (jobject)SF_arc_input_KeyCode_w;
	init_arc_input_KeyBind$Axis_arc_input_KeyCode_arc_input_KeyCode(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_moveY = sp[0].o;
	LINE_NUMBER(12);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"mouse_move"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseBack;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_mouseMove = sp[0].o;
	LINE_NUMBER(13);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pan"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseForward;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_pan = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"boost"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_boost = sp[0].o;
	LINE_NUMBER(16);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"respawn"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_v;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_respawn = sp[0].o;
	LINE_NUMBER(17);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"control"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controlLeft;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_control = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"select"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_select = sp[0].o;
	LINE_NUMBER(19);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"deselect"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_deselect = sp[0].o;
	LINE_NUMBER(20);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"break_block"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_breakBlock = sp[0].o;
	LINE_NUMBER(22);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pickupCargo"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_leftBracket;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_pickupCargo = sp[0].o;
	LINE_NUMBER(23);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"dropCargo"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_rightBracket;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_dropCargo = sp[0].o;
	LINE_NUMBER(25);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"clear_building"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_q;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_clearBuilding = sp[0].o;
	LINE_NUMBER(26);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pause_building"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_e;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_pauseBuilding = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"rotate"_j));
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_scroll;
	init_arc_input_KeyBind$Axis_arc_input_KeyCode(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_rotate = sp[0].o;
	LINE_NUMBER(28);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"rotateplaced"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_r;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_rotatePlaced = sp[0].o;
	LINE_NUMBER(29);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"diagonal_placement"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controlLeft;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_diagonalPlacement = sp[0].o;
	LINE_NUMBER(30);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pick"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_pick = sp[0].o;
	LINE_NUMBER(31);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"ping"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_p;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_ping = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"rebuild_select"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_b;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_rebuildSelect = sp[0].o;
	LINE_NUMBER(34);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"schematic_select"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_schematicSelect = sp[0].o;
	LINE_NUMBER(35);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"schematic_flip_x"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_z;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_schematicFlipX = sp[0].o;
	LINE_NUMBER(36);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"schematic_flip_y"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_x;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_schematicFlipY = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"schematic_menu"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_t;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_schematicMenu = sp[0].o;
	LINE_NUMBER(39);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"command_mode"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_shiftLeft;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"command"_j))));
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_commandMode = sp[0].o;
	LINE_NUMBER(40);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"command_queue"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_commandQueue = sp[0].o;
	LINE_NUMBER(41);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"create_control_group"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_controlLeft;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_createControlGroup = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"select_all_units"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_g;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_selectAllUnits = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"select_all_unit_factories"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_h;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_selectAllUnitFactories = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"select_all_unit_transport"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_selectAllUnitTransport = sp[0].o;
	LINE_NUMBER(46);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"select_across_screen"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_altLeft;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_selectAcrossScreen = sp[0].o;
	LINE_NUMBER(48);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"cancel_orders"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_cancelOrders = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_stance_hold_fire"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitStanceHoldFire = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_stance_pursue_target"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitStancePursueTarget = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_stance_patrol"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitStancePatrol = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_stance_ram"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitStanceRam = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_stance_boost"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitStanceBoost = sp[0].o;
	LINE_NUMBER(55);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_stance_hold_position"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitStanceHoldPosition = sp[0].o;
	LINE_NUMBER(57);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_command_move"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitCommandMove = sp[0].o;
	LINE_NUMBER(58);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_command_repair"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitCommandRepair = sp[0].o;
	LINE_NUMBER(59);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_command_rebuild"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitCommandRebuild = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_command_assist"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitCommandAssist = sp[0].o;
	LINE_NUMBER(61);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_command_mine"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitCommandMine = sp[0].o;
	LINE_NUMBER(62);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_command_enter_payload"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitCommandEnterPayload = sp[0].o;
	LINE_NUMBER(63);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_command_load_units"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitCommandLoadUnits = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_command_load_blocks"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitCommandLoadBlocks = sp[0].o;
	LINE_NUMBER(65);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_command_unload_payload"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitCommandUnloadPayload = sp[0].o;
	LINE_NUMBER(66);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"unit_command_loop_payload"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_unitCommandLoopPayload = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"category_prev"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_comma;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"blocks"_j))));
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_categoryPrev = sp[0].o;
	LINE_NUMBER(69);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"category_next"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_period;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_categoryNext = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_left"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_left;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelectLeft = sp[0].o;
	LINE_NUMBER(72);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_right"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_right;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelectRight = sp[0].o;
	LINE_NUMBER(73);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_up"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_up;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelectUp = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_down"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_down;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelectDown = sp[0].o;
	LINE_NUMBER(75);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_01"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num1;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelect01 = sp[0].o;
	LINE_NUMBER(76);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_02"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num2;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelect02 = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_03"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num3;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelect03 = sp[0].o;
	LINE_NUMBER(78);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_04"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num4;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelect04 = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_05"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num5;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelect05 = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_06"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num6;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelect06 = sp[0].o;
	LINE_NUMBER(81);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_07"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num7;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelect07 = sp[0].o;
	LINE_NUMBER(82);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_08"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num8;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelect08 = sp[0].o;
	LINE_NUMBER(83);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_09"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num9;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelect09 = sp[0].o;
	LINE_NUMBER(84);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_select_10"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_num0;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockSelect10 = sp[0].o;
	LINE_NUMBER(86);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"zoom"_j));
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_scroll;
	init_arc_input_KeyBind$Axis_arc_input_KeyCode(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"view"_j))));
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_zoom = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"detach_camera"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_detachCamera = sp[0].o;
	LINE_NUMBER(88);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"teleport_cursor"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_teleportCursor = sp[0].o;
	LINE_NUMBER(89);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"menu"_j));
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_android) == 0) goto label_68;
	}
	clinit_arc_input_KeyCode(ctx);
	(sp++)->o = SF_arc_input_KeyCode_back;
	goto label_69;
label_68:;
	clinit_arc_input_KeyCode(ctx);
	(sp++)->o = SF_arc_input_KeyCode_escape;
label_69:;
	{
	sp -= 2;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_menu = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"fullscreen"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f11;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_fullscreen = sp[0].o;
	LINE_NUMBER(91);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"pause"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_space;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_pause = sp[0].o;
	LINE_NUMBER(92);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"skip_wave"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_skipWave = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"minimap"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_m;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_minimap = sp[0].o;
	LINE_NUMBER(94);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"research"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_j;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_research = sp[0].o;
	LINE_NUMBER(95);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"planet_map"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_n;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_planetMap = sp[0].o;
	LINE_NUMBER(96);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"block_info"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f1;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_blockInfo = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"toggle_menus"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_c;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_toggleMenus = sp[0].o;
	LINE_NUMBER(98);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"screenshot"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f12;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_screenshot = sp[0].o;
	LINE_NUMBER(99);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"toggle_power_lines"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f5;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_togglePowerLines = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"toggle_block_status"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f6;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_toggleBlockStatus = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"player_list"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_tab;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_java_lang_String_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"multiplayer"_j))));
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_playerList = sp[0].o;
	LINE_NUMBER(102);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"chat"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_enter;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_chat = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"chat_history_prev"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_up;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_chatHistoryPrev = sp[0].o;
	LINE_NUMBER(104);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"chat_history_next"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_down;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_chatHistoryNext = sp[0].o;
	LINE_NUMBER(105);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"chat_scroll"_j));
	clinit_arc_input_KeyBind$Axis(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_input_KeyBind$Axis);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_scroll;
	init_arc_input_KeyBind$Axis_arc_input_KeyCode(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_chatScroll = sp[0].o;
	LINE_NUMBER(106);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"chat_mode"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_tab;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_chatMode = sp[0].o;
	LINE_NUMBER(107);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"console"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_f8;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_console = sp[0].o;
	LINE_NUMBER(108);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"debug_hitboxes"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_debugHitboxes = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"performance_metrics"_j));
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	sp[0].o = (jobject)SM_arc_input_KeyBind_add_java_lang_String_arc_input_KeyBind$KeybindValue_R_arc_input_KeyBind(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_input_Binding(ctx);
	SF_mindustry_input_Binding_performanceMetrics = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_input_Binding[] {
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
	{ "moveX", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_moveX, "Larc/input/KeyBind;", 25 },
	{ "moveY", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_moveY, "Larc/input/KeyBind;", 25 },
	{ "mouseMove", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_mouseMove, "Larc/input/KeyBind;", 25 },
	{ "pan", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_pan, "Larc/input/KeyBind;", 25 },
	{ "boost", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_boost, "Larc/input/KeyBind;", 25 },
	{ "respawn", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_respawn, "Larc/input/KeyBind;", 25 },
	{ "control", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_control, "Larc/input/KeyBind;", 25 },
	{ "select", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_select, "Larc/input/KeyBind;", 25 },
	{ "deselect", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_deselect, "Larc/input/KeyBind;", 25 },
	{ "breakBlock", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_breakBlock, "Larc/input/KeyBind;", 25 },
	{ "pickupCargo", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_pickupCargo, "Larc/input/KeyBind;", 25 },
	{ "dropCargo", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_dropCargo, "Larc/input/KeyBind;", 25 },
	{ "clearBuilding", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_clearBuilding, "Larc/input/KeyBind;", 25 },
	{ "pauseBuilding", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_pauseBuilding, "Larc/input/KeyBind;", 25 },
	{ "rotate", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_rotate, "Larc/input/KeyBind;", 25 },
	{ "rotatePlaced", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_rotatePlaced, "Larc/input/KeyBind;", 25 },
	{ "diagonalPlacement", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_diagonalPlacement, "Larc/input/KeyBind;", 25 },
	{ "pick", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_pick, "Larc/input/KeyBind;", 25 },
	{ "ping", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_ping, "Larc/input/KeyBind;", 25 },
	{ "rebuildSelect", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_rebuildSelect, "Larc/input/KeyBind;", 25 },
	{ "schematicSelect", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_schematicSelect, "Larc/input/KeyBind;", 25 },
	{ "schematicFlipX", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_schematicFlipX, "Larc/input/KeyBind;", 25 },
	{ "schematicFlipY", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_schematicFlipY, "Larc/input/KeyBind;", 25 },
	{ "schematicMenu", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_schematicMenu, "Larc/input/KeyBind;", 25 },
	{ "commandMode", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_commandMode, "Larc/input/KeyBind;", 25 },
	{ "commandQueue", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_commandQueue, "Larc/input/KeyBind;", 25 },
	{ "createControlGroup", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_createControlGroup, "Larc/input/KeyBind;", 25 },
	{ "selectAllUnits", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_selectAllUnits, "Larc/input/KeyBind;", 25 },
	{ "selectAllUnitFactories", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_selectAllUnitFactories, "Larc/input/KeyBind;", 25 },
	{ "selectAllUnitTransport", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_selectAllUnitTransport, "Larc/input/KeyBind;", 25 },
	{ "selectAcrossScreen", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_selectAcrossScreen, "Larc/input/KeyBind;", 25 },
	{ "cancelOrders", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_cancelOrders, "Larc/input/KeyBind;", 25 },
	{ "unitStanceHoldFire", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitStanceHoldFire, "Larc/input/KeyBind;", 25 },
	{ "unitStancePursueTarget", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitStancePursueTarget, "Larc/input/KeyBind;", 25 },
	{ "unitStancePatrol", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitStancePatrol, "Larc/input/KeyBind;", 25 },
	{ "unitStanceRam", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitStanceRam, "Larc/input/KeyBind;", 25 },
	{ "unitStanceBoost", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitStanceBoost, "Larc/input/KeyBind;", 25 },
	{ "unitStanceHoldPosition", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitStanceHoldPosition, "Larc/input/KeyBind;", 25 },
	{ "unitCommandMove", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitCommandMove, "Larc/input/KeyBind;", 25 },
	{ "unitCommandRepair", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitCommandRepair, "Larc/input/KeyBind;", 25 },
	{ "unitCommandRebuild", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitCommandRebuild, "Larc/input/KeyBind;", 25 },
	{ "unitCommandAssist", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitCommandAssist, "Larc/input/KeyBind;", 25 },
	{ "unitCommandMine", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitCommandMine, "Larc/input/KeyBind;", 25 },
	{ "unitCommandEnterPayload", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitCommandEnterPayload, "Larc/input/KeyBind;", 25 },
	{ "unitCommandLoadUnits", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitCommandLoadUnits, "Larc/input/KeyBind;", 25 },
	{ "unitCommandLoadBlocks", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitCommandLoadBlocks, "Larc/input/KeyBind;", 25 },
	{ "unitCommandUnloadPayload", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitCommandUnloadPayload, "Larc/input/KeyBind;", 25 },
	{ "unitCommandLoopPayload", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_unitCommandLoopPayload, "Larc/input/KeyBind;", 25 },
	{ "categoryPrev", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_categoryPrev, "Larc/input/KeyBind;", 25 },
	{ "categoryNext", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_categoryNext, "Larc/input/KeyBind;", 25 },
	{ "blockSelectLeft", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelectLeft, "Larc/input/KeyBind;", 25 },
	{ "blockSelectRight", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelectRight, "Larc/input/KeyBind;", 25 },
	{ "blockSelectUp", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelectUp, "Larc/input/KeyBind;", 25 },
	{ "blockSelectDown", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelectDown, "Larc/input/KeyBind;", 25 },
	{ "blockSelect01", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelect01, "Larc/input/KeyBind;", 25 },
	{ "blockSelect02", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelect02, "Larc/input/KeyBind;", 25 },
	{ "blockSelect03", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelect03, "Larc/input/KeyBind;", 25 },
	{ "blockSelect04", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelect04, "Larc/input/KeyBind;", 25 },
	{ "blockSelect05", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelect05, "Larc/input/KeyBind;", 25 },
	{ "blockSelect06", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelect06, "Larc/input/KeyBind;", 25 },
	{ "blockSelect07", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelect07, "Larc/input/KeyBind;", 25 },
	{ "blockSelect08", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelect08, "Larc/input/KeyBind;", 25 },
	{ "blockSelect09", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelect09, "Larc/input/KeyBind;", 25 },
	{ "blockSelect10", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockSelect10, "Larc/input/KeyBind;", 25 },
	{ "zoom", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_zoom, "Larc/input/KeyBind;", 25 },
	{ "detachCamera", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_detachCamera, "Larc/input/KeyBind;", 25 },
	{ "teleportCursor", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_teleportCursor, "Larc/input/KeyBind;", 25 },
	{ "menu", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_menu, "Larc/input/KeyBind;", 25 },
	{ "fullscreen", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_fullscreen, "Larc/input/KeyBind;", 25 },
	{ "pause", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_pause, "Larc/input/KeyBind;", 25 },
	{ "skipWave", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_skipWave, "Larc/input/KeyBind;", 25 },
	{ "minimap", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_minimap, "Larc/input/KeyBind;", 25 },
	{ "research", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_research, "Larc/input/KeyBind;", 25 },
	{ "planetMap", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_planetMap, "Larc/input/KeyBind;", 25 },
	{ "blockInfo", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_blockInfo, "Larc/input/KeyBind;", 25 },
	{ "toggleMenus", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_toggleMenus, "Larc/input/KeyBind;", 25 },
	{ "screenshot", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_screenshot, "Larc/input/KeyBind;", 25 },
	{ "togglePowerLines", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_togglePowerLines, "Larc/input/KeyBind;", 25 },
	{ "toggleBlockStatus", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_toggleBlockStatus, "Larc/input/KeyBind;", 25 },
	{ "playerList", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_playerList, "Larc/input/KeyBind;", 25 },
	{ "chat", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_chat, "Larc/input/KeyBind;", 25 },
	{ "chatHistoryPrev", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_chatHistoryPrev, "Larc/input/KeyBind;", 25 },
	{ "chatHistoryNext", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_chatHistoryNext, "Larc/input/KeyBind;", 25 },
	{ "chatScroll", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_chatScroll, "Larc/input/KeyBind;", 25 },
	{ "chatMode", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_chatMode, "Larc/input/KeyBind;", 25 },
	{ "console", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_console, "Larc/input/KeyBind;", 25 },
	{ "debugHitboxes", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_debugHitboxes, "Larc/input/KeyBind;", 25 },
	{ "performanceMetrics", &class_arc_input_KeyBind, (intptr_t) &SF_mindustry_input_Binding_performanceMetrics, "Larc/input/KeyBind;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_input_Binding, 0, "()V", 1 },
	{ "init", (intptr_t) SM_mindustry_input_Binding_init, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_input_Binding, 0, "()V", 8 },
};

Class class_mindustry_input_Binding{
		.nativeName = (intptr_t) "mindustry/input/Binding",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_input_Binding),
		.classVtable = (intptr_t) vtable_mindustry_input_Binding,
		.staticInitializer = (intptr_t) clinit_mindustry_input_Binding,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_input_Binding,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 88,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_input_Binding = registerClass(&class_mindustry_input_Binding);

}
