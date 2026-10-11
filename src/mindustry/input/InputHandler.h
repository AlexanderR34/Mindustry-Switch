#ifndef HEADER_mindustry_input_InputHandler
#define HEADER_mindustry_input_InputHandler

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/input/InputProcessor.h"
#include "arc/input/GestureDetector_GestureListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_input_InputHandler {
	java_lang_Object parent;
	jbool F_logicCutscene;
	jbool F_logicHideHud;
	jref F_logicCamPan;
	jfloat F_logicCamSpeed;
	jfloat F_logicCutsceneZoom;
	jref F_inputLocks;
	jref F_controlInterval;
	jref F_block;
	jbool F_overrideLineRotation;
	jint F_rotation;
	jbool F_droppingItem;
	jfloat F_itemDepositCooldown;
	jref F_uiGroup;
	jbool F_isBuilding;
	jbool F_buildWasAutoPaused;
	jbool F_wasShooting;
	jref F_controlledType;
	jfloat F_recentRespawnTimer;
	jref F_lastSchematic;
	jref F_detector;
	jref F_line;
	jref F_resultplan;
	jref F_bplan;
	jref F_linePlans;
	jref F_selectPlans;
	jref F_lastPlans;
	jref F_lastUnit;
	jref F_spectating;
	jref F_selectedUnits;
	jref F_commandBuildings;
	jbool F_commandMode;
	jbool F_commandRect;
	jbool F_tappedOne;
	jfloat F_commandRectX;
	jfloat F_commandRectY;
	jref F_controlGroups;
	jref F_plansOut;
	jref F_playerPlanTree;
	jref F_selectPlanTree;
	jref F_inv;
	jref F_config;
	jref F_planConfig;
	jref F_group;
	jref F_overlappingPlan;
	jref F_overlappingPlayer;
	jref F_allPlans;
	jref F_allSelectLines;
	jref F_allRenderPlansConfig;
} mindustry_input_InputHandler;

extern Class class_mindustry_input_InputHandler;

extern jobject SF_mindustry_input_InputHandler_queuedCommands;
extern jfloat SF_mindustry_input_InputHandler_playerSelectRange;
extern jfloat SF_mindustry_input_InputHandler_unitSelectRadScl;
extern jobject SF_mindustry_input_InputHandler_stancesOut;
extern jobject SF_mindustry_input_InputHandler_removed;
extern jobject SF_mindustry_input_InputHandler_intSet;
extern jint SF_mindustry_input_InputHandler_maxLength;
extern jobject SF_mindustry_input_InputHandler_r1;
extern jobject SF_mindustry_input_InputHandler_r2;
extern jobject SF_mindustry_input_InputHandler_tmpUnits;
extern jobject SF_mindustry_input_InputHandler_tmpBuildings;
extern jobject SF_mindustry_input_InputHandler_controlGroupBindings;
extern jobject SF_mindustry_input_InputHandler_sameQuadPlan;
extern jobject SF_mindustry_input_InputHandler_sameQuadPlanFinder;
extern jobject SF_mindustry_input_InputHandler_vpIgnore;
extern jobject SF_mindustry_input_InputHandler_vpBlock;
extern jint SF_mindustry_input_InputHandler_vpX;
extern jint SF_mindustry_input_InputHandler_vpY;
extern jobject SF_mindustry_input_InputHandler_vpPredicate;

#define VTABLE_mindustry_input_InputHandler_hashCode_R_int 0
typedef jint (*func_mindustry_input_InputHandler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_input_InputHandler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_input_InputHandler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_input_InputHandler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_input_InputHandler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_finalize 5
typedef void (*func_mindustry_input_InputHandler_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_notify 6
typedef void (*func_mindustry_input_InputHandler_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_notifyAll 7
typedef void (*func_mindustry_input_InputHandler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_wait 8
typedef void (*func_mindustry_input_InputHandler_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_wait_long 9
typedef void (*func_mindustry_input_InputHandler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_input_InputHandler_wait_long_int 10
typedef void (*func_mindustry_input_InputHandler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_input_InputHandler_keyDown_arc_input_KeyCode_R_boolean 11
typedef jbool (*func_mindustry_input_InputHandler_keyDown_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_keyUp_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_mindustry_input_InputHandler_keyUp_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_keyTyped_char_R_boolean 13
typedef jbool (*func_mindustry_input_InputHandler_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_mindustry_input_InputHandler_touchDown_int_int_int_arc_input_KeyCode_R_boolean 14
typedef jbool (*func_mindustry_input_InputHandler_touchDown_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_InputHandler_touchUp_int_int_int_arc_input_KeyCode_R_boolean 15
typedef jbool (*func_mindustry_input_InputHandler_touchUp_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_InputHandler_touchDragged_int_int_int_R_boolean 16
typedef jbool (*func_mindustry_input_InputHandler_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_mindustry_input_InputHandler_mouseMoved_int_int_R_boolean 17
typedef jbool (*func_mindustry_input_InputHandler_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_InputHandler_scrolled_float_float_R_boolean 18
typedef jbool (*func_mindustry_input_InputHandler_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_InputHandler_touchDown_float_float_int_arc_input_KeyCode_R_boolean 19
typedef jbool (*func_mindustry_input_InputHandler_touchDown_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_InputHandler_tap_float_float_int_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_mindustry_input_InputHandler_tap_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_InputHandler_longPress_float_float_R_boolean 21
typedef jbool (*func_mindustry_input_InputHandler_longPress_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_InputHandler_fling_float_float_arc_input_KeyCode_R_boolean 22
typedef jbool (*func_mindustry_input_InputHandler_fling_float_float_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_input_InputHandler_pan_float_float_float_float_R_boolean 23
typedef jbool (*func_mindustry_input_InputHandler_pan_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_input_InputHandler_panStop_float_float_int_arc_input_KeyCode_R_boolean 24
typedef jbool (*func_mindustry_input_InputHandler_panStop_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_InputHandler_zoom_float_float_R_boolean 25
typedef jbool (*func_mindustry_input_InputHandler_zoom_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_InputHandler_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean 26
typedef jbool (*func_mindustry_input_InputHandler_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_input_InputHandler_pinchStop 27
typedef void (*func_mindustry_input_InputHandler_pinchStop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_initQuadtrees 28
typedef void (*func_mindustry_input_InputHandler_initQuadtrees)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_createPlanLists 29
typedef void (*func_mindustry_input_InputHandler_createPlanLists)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_updateSelectQuadtree 30
typedef void (*func_mindustry_input_InputHandler_updateSelectQuadtree)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_addLock_arc_func_Boolp 31
typedef void (*func_mindustry_input_InputHandler_addLock_arc_func_Boolp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_locked_R_boolean 32
typedef jbool (*func_mindustry_input_InputHandler_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable 33
typedef jobject (*func_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_isUsingSchematic_R_boolean 34
typedef jbool (*func_mindustry_input_InputHandler_isUsingSchematic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_spectate_mindustry_gen_Unit 35
typedef void (*func_mindustry_input_InputHandler_spectate_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_reset 36
typedef void (*func_mindustry_input_InputHandler_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq 37
typedef void (*func_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_update 38
typedef void (*func_mindustry_input_InputHandler_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_checkUnit 39
typedef void (*func_mindustry_input_InputHandler_checkUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_tryPickupPayload 40
typedef void (*func_mindustry_input_InputHandler_tryPickupPayload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_tryDropPayload 41
typedef void (*func_mindustry_input_InputHandler_tryDropPayload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_getMouseX_R_float 42
typedef jfloat (*func_mindustry_input_InputHandler_getMouseX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_getMouseY_R_float 43
typedef jfloat (*func_mindustry_input_InputHandler_getMouseY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table 44
typedef void (*func_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_buildUI_arc_scene_Group 45
typedef void (*func_mindustry_input_InputHandler_buildUI_arc_scene_Group)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_updateState 46
typedef void (*func_mindustry_input_InputHandler_updateState)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_multiUnitSelect_R_boolean 47
typedef jbool (*func_mindustry_input_InputHandler_multiUnitSelect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_selectUnitsRect 48
typedef void (*func_mindustry_input_InputHandler_selectUnitsRect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_selectTypedUnits 49
typedef void (*func_mindustry_input_InputHandler_selectTypedUnits)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_tapCommandUnit 50
typedef void (*func_mindustry_input_InputHandler_tapCommandUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_commandTap_float_float 51
typedef void (*func_mindustry_input_InputHandler_commandTap_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_InputHandler_commandTap_float_float_boolean 52
typedef void (*func_mindustry_input_InputHandler_commandTap_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit 53
typedef void (*func_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building 54
typedef void (*func_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_drawCommanded 55
typedef void (*func_mindustry_input_InputHandler_drawCommanded)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_drawCommandedTargets 56
typedef void (*func_mindustry_input_InputHandler_drawCommandedTargets)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_drawCommanded_boolean 57
typedef void (*func_mindustry_input_InputHandler_drawCommanded_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_input_InputHandler_drawUnitSelection 58
typedef void (*func_mindustry_input_InputHandler_drawUnitSelection)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_drawOtherBuildPlans 59
typedef void (*func_mindustry_input_InputHandler_drawOtherBuildPlans)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_drawBuildPlans 60
typedef void (*func_mindustry_input_InputHandler_drawBuildPlans)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_drawBottom 61
typedef void (*func_mindustry_input_InputHandler_drawBottom)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_drawTop 62
typedef void (*func_mindustry_input_InputHandler_drawTop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_drawOverSelect 63
typedef void (*func_mindustry_input_InputHandler_drawOverSelect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color 64
typedef void (*func_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define VTABLE_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan 65
typedef void (*func_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_drawOverlapCheck_mindustry_world_Block_int_int_boolean 66
typedef void (*func_mindustry_input_InputHandler_drawOverlapCheck_mindustry_world_Block_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean 67
typedef jbool (*func_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_drawBreaking_int_int 68
typedef void (*func_mindustry_input_InputHandler_drawBreaking_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic 69
typedef void (*func_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic_boolean 70
typedef void (*func_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_InputHandler_showSchematicSave 71
typedef void (*func_mindustry_input_InputHandler_showSchematicSave)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_rotatePlans_arc_struct_Seq_int 72
typedef void (*func_mindustry_input_InputHandler_rotatePlans_arc_struct_Seq_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_input_InputHandler_flipPlans_arc_struct_Seq_boolean 73
typedef void (*func_mindustry_input_InputHandler_flipPlans_arc_struct_Seq_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_InputHandler_schemOriginX_R_int 74
typedef jint (*func_mindustry_input_InputHandler_schemOriginX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_schemOriginY_R_int 75
typedef jint (*func_mindustry_input_InputHandler_schemOriginY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_getPlan_int_int_R_mindustry_entities_units_BuildPlan 76
typedef jobject (*func_mindustry_input_InputHandler_getPlan_int_int_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan 77
typedef jobject (*func_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int 78
typedef void (*func_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean 79
typedef void (*func_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
#define VTABLE_mindustry_input_InputHandler_drawRebuildSelection_int_int_int_int 80
typedef void (*func_mindustry_input_InputHandler_drawRebuildSelection_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int 81
typedef void (*func_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_InputHandler_drawSelection_int_int_int_int_int 82
typedef void (*func_mindustry_input_InputHandler_drawSelection_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean 83
typedef void (*func_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jobject param6, jbool param7);
#define VTABLE_mindustry_input_InputHandler_flushSelectPlans_arc_struct_Seq 84
typedef void (*func_mindustry_input_InputHandler_flushSelectPlans_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_flushPlansReverse_arc_struct_Seq 85
typedef void (*func_mindustry_input_InputHandler_flushPlansReverse_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_flushPlans_arc_struct_Seq 86
typedef void (*func_mindustry_input_InputHandler_flushPlans_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan 87
typedef void (*func_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean 88
typedef void (*func_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan 89
typedef void (*func_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean 90
typedef void (*func_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_InputHandler_drawPlan_int_int_mindustry_world_Block_int 91
typedef void (*func_mindustry_input_InputHandler_drawPlan_int_int_mindustry_world_Block_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int 92
typedef void (*func_mindustry_input_InputHandler_removeSelection_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int_int 93
typedef void (*func_mindustry_input_InputHandler_removeSelection_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean 94
typedef void (*func_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4);
#define VTABLE_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int 95
typedef void (*func_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4, jint param5);
#define VTABLE_mindustry_input_InputHandler_updateLine_int_int_int_int 96
typedef void (*func_mindustry_input_InputHandler_updateLine_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_InputHandler_updateLine_int_int 97
typedef void (*func_mindustry_input_InputHandler_updateLine_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_InputHandler_checkConfigTap_R_boolean 98
typedef jbool (*func_mindustry_input_InputHandler_checkConfigTap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_tileTapped_mindustry_gen_Building_R_boolean 99
typedef jbool (*func_mindustry_input_InputHandler_tileTapped_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_tryTapPlayer_float_float_R_boolean 100
typedef jbool (*func_mindustry_input_InputHandler_tryTapPlayer_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean 101
typedef jbool (*func_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_InputHandler_tryBeginMine_mindustry_world_Tile_R_boolean 102
typedef jbool (*func_mindustry_input_InputHandler_tryBeginMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_tryStopMine_R_boolean 103
typedef jbool (*func_mindustry_input_InputHandler_tryStopMine_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_tryStopMine_mindustry_world_Tile_R_boolean 104
typedef jbool (*func_mindustry_input_InputHandler_tryStopMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean 105
typedef jbool (*func_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean 106
typedef jbool (*func_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean 107
typedef jbool (*func_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_tileAt_float_float_R_mindustry_world_Tile 108
typedef jobject (*func_mindustry_input_InputHandler_tileAt_float_float_R_mindustry_world_Tile)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_InputHandler_rawTileX_R_int 109
typedef jint (*func_mindustry_input_InputHandler_rawTileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_rawTileY_R_int 110
typedef jint (*func_mindustry_input_InputHandler_rawTileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_tileX_float_R_int 111
typedef jint (*func_mindustry_input_InputHandler_tileX_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_input_InputHandler_tileY_float_R_int 112
typedef jint (*func_mindustry_input_InputHandler_tileY_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2 113
typedef void (*func_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_selectedBlock_R_boolean 114
typedef jbool (*func_mindustry_input_InputHandler_selectedBlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_isPlacing_R_boolean 115
typedef jbool (*func_mindustry_input_InputHandler_isPlacing_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_isBreaking_R_boolean 116
typedef jbool (*func_mindustry_input_InputHandler_isBreaking_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_isRebuildSelecting_R_boolean 117
typedef jbool (*func_mindustry_input_InputHandler_isRebuildSelecting_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_mouseAngle_float_float_R_float 118
typedef jfloat (*func_mindustry_input_InputHandler_mouseAngle_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit 119
typedef jobject (*func_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building 120
typedef jobject (*func_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit 121
typedef jobject (*func_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit 122
typedef jobject (*func_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq 123
typedef jobject (*func_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq 124
typedef jobject (*func_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq 125
typedef jobject (*func_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_input_InputHandler_remove 126
typedef void (*func_mindustry_input_InputHandler_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_add 127
typedef void (*func_mindustry_input_InputHandler_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_canShoot_R_boolean 128
typedef jbool (*func_mindustry_input_InputHandler_canShoot_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_onConfigurable_R_boolean 129
typedef jbool (*func_mindustry_input_InputHandler_onConfigurable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_isDroppingItem_R_boolean 130
typedef jbool (*func_mindustry_input_InputHandler_isDroppingItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_canDropItem_R_boolean 131
typedef jbool (*func_mindustry_input_InputHandler_canDropItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_tryDropItems_mindustry_gen_Building_float_float 132
typedef void (*func_mindustry_input_InputHandler_tryDropItems_mindustry_gen_Building_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean 133
typedef jbool (*func_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_rebuildArea_int_int_int_int 134
typedef void (*func_mindustry_input_InputHandler_rebuildArea_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_InputHandler_tryBreakBlock_int_int 135
typedef void (*func_mindustry_input_InputHandler_tryBreakBlock_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean 136
typedef jbool (*func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean 137
typedef jbool (*func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4);
#define VTABLE_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean 138
typedef jbool (*func_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4, jbool param5);
#define VTABLE_mindustry_input_InputHandler_validBreak_int_int_R_boolean 139
typedef jbool (*func_mindustry_input_InputHandler_validBreak_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_InputHandler_breakBlock_int_int 140
typedef void (*func_mindustry_input_InputHandler_breakBlock_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int 141
typedef void (*func_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean 142
typedef void (*func_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jbool param4);
#define VTABLE_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons 143
typedef void (*func_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);
#define VTABLE_mindustry_input_InputHandler_lambda$updateLine$1_mindustry_entities_units_BuildPlan 144
typedef void (*func_mindustry_input_InputHandler_lambda$updateLine$1_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine 145
typedef void (*func_mindustry_input_InputHandler_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$0_mindustry_gen_Player 146
typedef void (*func_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$0_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan 147
typedef void (*func_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_input_InputHandler_lambda$drawCommanded$2 148
typedef void (*func_mindustry_input_InputHandler_lambda$drawCommanded$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_lambda$drawCommanded$1 149
typedef void (*func_mindustry_input_InputHandler_lambda$drawCommanded$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_lambda$drawCommanded$0 150
typedef void (*func_mindustry_input_InputHandler_lambda$drawCommanded$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_InputHandler_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean 151
typedef jbool (*func_mindustry_input_InputHandler_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_lambda$update$1_mindustry_gen_Unit_R_boolean 152
typedef jbool (*func_mindustry_input_InputHandler_lambda$update$1_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_lambda$new$5_mindustry_game_EventType$ResetEvent 153
typedef void (*func_mindustry_input_InputHandler_lambda$new$5_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_lambda$new$4_mindustry_game_EventType$WorldLoadEvent 154
typedef void (*func_mindustry_input_InputHandler_lambda$new$4_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_InputHandler_lambda$new$1_R_boolean 155
typedef jbool (*func_mindustry_input_InputHandler_lambda$new$1_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_input_InputHandler(jobject object, jint mark, jint depth);
void clinit_mindustry_input_InputHandler(jcontext ctx);
void init_mindustry_input_InputHandler(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_initQuadtrees(jcontext ctx, jobject self);
void SM_mindustry_input_InputHandler_transferItemEffect_mindustry_type_Item_float_float_mindustry_gen_Itemsc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_input_InputHandler_takeItems_mindustry_gen_Building_mindustry_type_Item_int_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3);
void SM_mindustry_input_InputHandler_transferItemToUnit_mindustry_type_Item_float_float_mindustry_gen_Itemsc(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_input_InputHandler_setItem_mindustry_gen_Building_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jint param2);
void SM_mindustry_input_InputHandler_setItems_mindustry_gen_Building_Array1_mindustry_type_ItemStack(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_setTileItems_mindustry_type_Item_int_Array1_int(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_input_InputHandler_clearItems_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_input_InputHandler_setLiquid_mindustry_gen_Building_mindustry_type_Liquid_float(jcontext ctx, jobject param0, jobject param1, jfloat param2);
void SM_mindustry_input_InputHandler_setLiquids_mindustry_gen_Building_Array1_mindustry_type_LiquidStack(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_setTileLiquids_mindustry_type_Liquid_float_Array1_int(jcontext ctx, jobject param0, jfloat param1, jobject param2);
void SM_mindustry_input_InputHandler_clearLiquids_mindustry_gen_Building(jcontext ctx, jobject param0);
void SM_mindustry_input_InputHandler_transferItemTo_mindustry_gen_Unit_mindustry_type_Item_int_float_float_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1, jint param2, jfloat param3, jfloat param4, jobject param5);
void SM_mindustry_input_InputHandler_deletePlans_mindustry_gen_Player_Array1_int(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_pingLocation_mindustry_gen_Player_float_float_java_lang_String(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jobject param3);
void SM_mindustry_input_InputHandler_createItemTransfer_mindustry_type_Item_int_float_float_arc_math_geom_Position_java_lang_Runnable(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jobject param4, jobject param5);
void SM_mindustry_input_InputHandler_commandUnits_mindustry_gen_Player_Array1_int_mindustry_gen_Building_mindustry_gen_Unit_arc_math_geom_Vec2_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jbool param5, jbool param6);
void SM_mindustry_input_InputHandler_setUnitCommand_mindustry_gen_Player_Array1_int_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_input_InputHandler_setUnitStanceChunked_arc_struct_IntSeq_mindustry_ai_UnitStance_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
void SM_mindustry_input_InputHandler_setUnitCommandChunked_arc_struct_IntSeq_mindustry_ai_UnitCommand(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_setUnitStance_mindustry_gen_Player_Array1_int_mindustry_ai_UnitStance_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3);
void SM_mindustry_input_InputHandler_commandBuilding_mindustry_gen_Player_Array1_int_arc_math_geom_Vec2(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_input_InputHandler_requestItem_mindustry_gen_Player_mindustry_gen_Building_mindustry_type_Item_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3);
void SM_mindustry_input_InputHandler_transferInventory_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_removeQueueBlock_int_int_boolean(jcontext ctx, jint param0, jint param1, jbool param2);
void SM_mindustry_input_InputHandler_requestUnitPayload_mindustry_gen_Player_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_requestBuildPayload_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_pickedUnitPayload_mindustry_gen_Unit_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_pickedBuildPayload_mindustry_gen_Unit_mindustry_gen_Building_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
void SM_mindustry_input_InputHandler_requestDropPayload_mindustry_gen_Player_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
void SM_mindustry_input_InputHandler_payloadDropped_mindustry_gen_Unit_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2);
void SM_mindustry_input_InputHandler_unitEnteredPayload_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_dropItem_mindustry_gen_Player_float(jcontext ctx, jobject param0, jfloat param1);
void SM_mindustry_input_InputHandler_rotateBlock_mindustry_gen_Player_mindustry_gen_Building_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2);
void SM_mindustry_input_InputHandler_tileConfig_mindustry_gen_Player_mindustry_gen_Building_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_input_InputHandler_tileTap_mindustry_gen_Player_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_buildingControlSelect_mindustry_gen_Player_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_unitBuildingControlSelect_mindustry_gen_Unit_mindustry_gen_Building(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_unitControl_mindustry_gen_Player_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_unitClear_mindustry_gen_Player(jcontext ctx, jobject param0);
void M_mindustry_input_InputHandler_createPlanLists(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_updateSelectQuadtree(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_addLock_arc_func_Boolp(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_InputHandler_locked_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_input_InputHandler_allPlans_R_arc_util_Eachable(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_isUsingSchematic_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_spectate_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_reset(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_getSyncedPlans_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_update(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_checkUnit(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_tryPickupPayload(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_tryDropPayload(jcontext ctx, jobject self);
jfloat M_mindustry_input_InputHandler_getMouseX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_input_InputHandler_getMouseY_R_float(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_buildPlacementUI_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_buildUI_arc_scene_Group(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_updateState(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_multiUnitSelect_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_selectUnitsRect(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_selectTypedUnits(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_tapCommandUnit(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_commandTap_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_input_InputHandler_commandTap_float_float_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
void M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_drawCommand_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_drawCommanded(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_drawCommandedTargets(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_drawCommanded_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_input_InputHandler_drawUnitSelection(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_drawOtherBuildPlans(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_drawBuildPlans(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_drawBottom(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_drawTop(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_drawOverSelect(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
void M_mindustry_input_InputHandler_drawBreaking_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_drawOverlapCheck_mindustry_world_Block_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
jbool M_mindustry_input_InputHandler_planMatches_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_drawBreaking_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_input_InputHandler_useSchematic_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_showSchematicSave(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_rotatePlans_arc_struct_Seq_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_input_InputHandler_flipPlans_arc_struct_Seq_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jint M_mindustry_input_InputHandler_schemOriginX_R_int(jcontext ctx, jobject self);
jint M_mindustry_input_InputHandler_schemOriginY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_input_InputHandler_getPlan_int_int_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jint param0, jint param1);
jobject M_mindustry_input_InputHandler_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
void M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
void M_mindustry_input_InputHandler_drawRebuildSelection_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_input_InputHandler_drawBreakSelection_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_mindustry_input_InputHandler_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jobject param6, jbool param7);
void M_mindustry_input_InputHandler_flushSelectPlans_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_flushPlansReverse_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_flushPlans_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_drawOverPlan_mindustry_entities_units_BuildPlan_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_drawPlan_mindustry_entities_units_BuildPlan_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_mindustry_input_InputHandler_drawPlan_int_int_mindustry_world_Block_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
void M_mindustry_input_InputHandler_removeSelection_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_input_InputHandler_removeSelection_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
void M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4);
void M_mindustry_input_InputHandler_removeSelection_int_int_int_int_boolean_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4, jint param5);
void M_mindustry_input_InputHandler_updateLine_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_input_InputHandler_updateLine_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_input_InputHandler_checkConfigTap_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_tileTapped_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_InputHandler_tryTapPlayer_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_mindustry_input_InputHandler_canTapPlayer_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_mindustry_input_InputHandler_tryBeginMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_InputHandler_tryStopMine_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_tryStopMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_InputHandler_tryRepairDerelict_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_InputHandler_canRepairDerelict_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_InputHandler_canMine_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_input_InputHandler_tileAt_float_float_R_mindustry_world_Tile(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jint M_mindustry_input_InputHandler_rawTileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_input_InputHandler_rawTileY_R_int(jcontext ctx, jobject self);
jint M_mindustry_input_InputHandler_tileX_float_R_int(jcontext ctx, jobject self, jfloat param0);
jint M_mindustry_input_InputHandler_tileY_float_R_int(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_InputHandler_selectedBlock_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_isPlacing_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_isBreaking_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_isRebuildSelecting_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_input_InputHandler_mouseAngle_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_input_InputHandler_selectedUnit_R_mindustry_gen_Unit(jcontext ctx, jobject self);
jobject M_mindustry_input_InputHandler_selectedControlBuild_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_input_InputHandler_selectedCommandUnit_float_float_R_mindustry_gen_Unit(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_input_InputHandler_selectedEnemyUnit_float_float_R_mindustry_gen_Unit(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jobject M_mindustry_input_InputHandler_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jobject M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
jobject M_mindustry_input_InputHandler_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_mindustry_input_InputHandler_remove(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_add(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_canShoot_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_onConfigurable_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_isDroppingItem_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_InputHandler_canDropItem_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_tryDropItems_mindustry_gen_Building_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
jbool M_mindustry_input_InputHandler_canDepositItem_mindustry_gen_Building_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_rebuildArea_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_input_InputHandler_tryBreakBlock_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
jbool M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4);
jbool M_mindustry_input_InputHandler_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4, jbool param5);
jbool M_mindustry_input_InputHandler_validBreak_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_input_InputHandler_breakBlock_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_mindustry_input_InputHandler_drawArrow_mindustry_world_Block_int_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jbool param4);
void M_mindustry_input_InputHandler_iterateLine_int_int_int_int_arc_func_Cons(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);
jbool SM_mindustry_input_InputHandler_lambda$static$1_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_InputHandler_lambda$add$0_arc_input_InputProcessor_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_InputHandler_lambda$selectedCommandUnits$1_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_InputHandler_lambda$selectedCommandUnits$0_arc_func_Boolf_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$selectedCommandBuildings$0_mindustry_gen_Building(jcontext ctx, jobject param0);
jfloat SM_mindustry_input_InputHandler_lambda$selectedEnemyUnit$1_float_float_mindustry_gen_Unit_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2);
jbool SM_mindustry_input_InputHandler_lambda$selectedEnemyUnit$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
jfloat SM_mindustry_input_InputHandler_lambda$selectedCommandUnit$1_float_float_mindustry_gen_Unit_R_float(jcontext ctx, jfloat param0, jfloat param1, jobject param2);
jbool SM_mindustry_input_InputHandler_lambda$selectedCommandUnit$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_InputHandler_lambda$selectedUnit$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_input_InputHandler_lambda$updateLine$1_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_input_InputHandler_lambda$removeSelection$0_mindustry_world_Tile_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_input_InputHandler_lambda$getPlan$0_mindustry_entities_units_BuildPlan_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$flipPlans$0_boolean_int_mindustry_entities_units_BuildPlan(jcontext ctx, jbool param0, jint param1, jobject param2);
void SM_mindustry_input_InputHandler_lambda$flipPlans$1_boolean_mindustry_entities_units_BuildPlan_arc_math_geom_Point2(jcontext ctx, jbool param0, jobject param1, jobject param2);
void SM_mindustry_input_InputHandler_lambda$rotatePlans$0_int_int_int_mindustry_entities_units_BuildPlan(jcontext ctx, jint param0, jint param1, jint param2, jobject param3);
void SM_mindustry_input_InputHandler_lambda$rotatePlans$1_float_int_arc_math_geom_Point2(jcontext ctx, jfloat param0, jint param1, jobject param2);
void SM_mindustry_input_InputHandler_lambda$showSchematicSave$0_mindustry_game_Schematic_java_lang_String(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$showSchematicSave$2_mindustry_game_Schematic_mindustry_game_Schematic(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_input_InputHandler_lambda$showSchematicSave$1_java_lang_String_mindustry_game_Schematic_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$0_mindustry_gen_Player(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jbool SM_mindustry_input_InputHandler_lambda$static$0_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_InputHandler_lambda$drawCommanded$3_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_input_InputHandler_lambda$drawCommanded$2(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_lambda$drawCommanded$1(jcontext ctx, jobject self);
void M_mindustry_input_InputHandler_lambda$drawCommanded$0(jcontext ctx, jobject self);
jint SM_mindustry_input_InputHandler_lambda$commandTap$0_mindustry_gen_Building_R_int(jcontext ctx, jobject param0);
jbool SM_mindustry_input_InputHandler_lambda$selectTypedUnits$0_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_input_InputHandler_lambda$tryPickupPayload$0_mindustry_gen_Payloadc_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool M_mindustry_input_InputHandler_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_InputHandler_lambda$update$1_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_input_InputHandler_lambda$update$0_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_input_InputHandler_lambda$unitClear$0_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0);
void SM_mindustry_input_InputHandler_lambda$unitControl$1_mindustry_gen_Unit(jcontext ctx, jobject param0);
void SM_mindustry_input_InputHandler_lambda$unitControl$0_mindustry_gen_Unit_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$buildingControlSelect$0_mindustry_gen_Building_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$tileConfig$0_java_lang_Object_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$rotateBlock$0_mindustry_gen_Building_boolean_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jbool param1, jobject param2);
void SM_mindustry_input_InputHandler_lambda$requestDropPayload$0_mindustry_gen_Payloadc_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$requestBuildPayload$0_mindustry_gen_Unit_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$transferInventory$0_mindustry_gen_Player_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$requestItem$0_mindustry_type_Item_int_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jint param1, jobject param2);
void SM_mindustry_input_InputHandler_lambda$commandBuilding$0_Array1_int_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$setUnitStance$0_Array1_int_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$setUnitCommandChunked$0_mindustry_ai_UnitCommand_Array1_int(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$setUnitStanceChunked$0_mindustry_ai_UnitStance_boolean_Array1_int(jcontext ctx, jobject param0, jbool param1, jobject param2);
void SM_mindustry_input_InputHandler_lambda$setUnitCommand$0_Array1_int_mindustry_ai_UnitCommand_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_input_InputHandler_lambda$commandUnits$0_Array1_int_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$pingLocation$0_float_float_java_lang_String_mindustry_net_Administration$PlayerAction(jcontext ctx, jfloat param0, jfloat param1, jobject param2, jobject param3);
void SM_mindustry_input_InputHandler_lambda$deletePlans$0_Array1_int_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$transferItemTo$0_mindustry_type_Item_int_float_float_mindustry_gen_Building(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3, jobject param4);
void SM_mindustry_input_InputHandler_lambda$transferItemTo$1(jcontext ctx);
void SM_mindustry_input_InputHandler_lambda$transferItemToUnit$0_mindustry_gen_Itemsc_mindustry_type_Item(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_InputHandler_lambda$takeItems$0_mindustry_type_Item_mindustry_gen_Building_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1, jobject param2);
void M_mindustry_input_InputHandler_lambda$new$5_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_InputHandler_lambda$new$4_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_input_InputHandler_lambda$new$2_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx, jobject param0);
jbool SM_mindustry_input_InputHandler_lambda$new$3_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0);
jbool M_mindustry_input_InputHandler_lambda$new$1_R_boolean(jcontext ctx, jobject self);
jbool SM_mindustry_input_InputHandler_lambda$new$0_R_boolean(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
