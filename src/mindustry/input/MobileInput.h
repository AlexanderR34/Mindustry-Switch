#ifndef HEADER_mindustry_input_MobileInput
#define HEADER_mindustry_input_MobileInput

#include "Clearwing.h"
#include "mindustry/input/InputHandler.h"
#include "arc/input/GestureDetector_GestureListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_input_MobileInput {
	mindustry_input_InputHandler parent;
	jfloat F_edgePan;
	jref F_vector;
	jref F_movement;
	jref F_targetPos;
	jfloat F_lastZoom;
	jint F_lineStartX;
	jint F_lineStartY;
	jint F_lastLineX;
	jint F_lastLineY;
	jfloat F_lineScale;
	jfloat F_crosshairScale;
	jref F_lastTarget;
	jfloat F_shiftDeltaX;
	jfloat F_shiftDeltaY;
	jref F_removals;
	jbool F_selecting;
	jbool F_lineMode;
	jbool F_schematicMode;
	jbool F_rebuildMode;
	jbool F_queueCommandMode;
	jref F_mode;
	jref F_lastBlock;
	jref F_lastPlaced;
	jbool F_down;
	jbool F_manualShooting;
	jref F_target;
	jref F_payloadTarget;
	jref F_unitTapped;
	jref F_buildingTapped;
} mindustry_input_MobileInput;

extern Class class_mindustry_input_MobileInput;

extern jfloat SF_mindustry_input_MobileInput_maxPanSpeed;

#define VTABLE_mindustry_input_MobileInput_hashCode_R_int 0
typedef jint (*func_mindustry_input_MobileInput_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_input_MobileInput_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_input_MobileInput_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_input_MobileInput_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_input_MobileInput_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_finalize 5
typedef void (*func_mindustry_input_MobileInput_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_notify 6
typedef void (*func_mindustry_input_MobileInput_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_notifyAll 7
typedef void (*func_mindustry_input_MobileInput_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_wait 8
typedef void (*func_mindustry_input_MobileInput_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_wait_long 9
typedef void (*func_mindustry_input_MobileInput_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_input_MobileInput_wait_long_int 10
typedef void (*func_mindustry_input_MobileInput_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_input_MobileInput_keyDown_arc_input_KeyCode_R_boolean 11
typedef jbool (*func_mindustry_input_MobileInput_keyDown_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_keyUp_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_mindustry_input_MobileInput_keyUp_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_keyTyped_char_R_boolean 13
typedef jbool (*func_mindustry_input_MobileInput_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_mindustry_input_MobileInput_touchDown_int_int_int_arc_input_KeyCode_R_boolean 14
typedef jbool (*func_mindustry_input_MobileInput_touchDown_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_MobileInput_touchUp_int_int_int_arc_input_KeyCode_R_boolean 15
typedef jbool (*func_mindustry_input_MobileInput_touchUp_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_MobileInput_touchDragged_int_int_int_R_boolean 16
typedef jbool (*func_mindustry_input_MobileInput_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_mindustry_input_MobileInput_mouseMoved_int_int_R_boolean 17
typedef jbool (*func_mindustry_input_MobileInput_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_MobileInput_scrolled_float_float_R_boolean 18
typedef jbool (*func_mindustry_input_MobileInput_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_touchDown_float_float_int_arc_input_KeyCode_R_boolean 19
typedef jbool (*func_mindustry_input_MobileInput_touchDown_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_MobileInput_tap_float_float_int_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_mindustry_input_MobileInput_tap_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_MobileInput_longPress_float_float_R_boolean 21
typedef jbool (*func_mindustry_input_MobileInput_longPress_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_fling_float_float_arc_input_KeyCode_R_boolean 22
typedef jbool (*func_mindustry_input_MobileInput_fling_float_float_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_input_MobileInput_pan_float_float_float_float_R_boolean 23
typedef jbool (*func_mindustry_input_MobileInput_pan_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_input_MobileInput_panStop_float_float_int_arc_input_KeyCode_R_boolean 24
typedef jbool (*func_mindustry_input_MobileInput_panStop_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_MobileInput_zoom_float_float_R_boolean 25
typedef jbool (*func_mindustry_input_MobileInput_zoom_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean 26
typedef jbool (*func_mindustry_input_MobileInput_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_input_MobileInput_pinchStop 27
typedef void (*func_mindustry_input_MobileInput_pinchStop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_initQuadtrees 28
typedef void (*func_mindustry_input_MobileInput_initQuadtrees)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_createPlanLists 29
typedef void (*func_mindustry_input_MobileInput_createPlanLists)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_updateSelectQuadtree 30
typedef void (*func_mindustry_input_MobileInput_updateSelectQuadtree)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_addLock_arc_func_Boolp 31
typedef void (*func_mindustry_input_MobileInput_addLock_arc_func_Boolp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_locked_R_boolean 32
typedef jbool (*func_mindustry_input_MobileInput_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_allPlans_R_arc_util_Eachable 33
typedef jobject (*func_mindustry_input_MobileInput_allPlans_R_arc_util_Eachable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_isUsingSchematic_R_boolean 34
typedef jbool (*func_mindustry_input_MobileInput_isUsingSchematic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_spectate_mindustry_gen_Unit 35
typedef void (*func_mindustry_input_MobileInput_spectate_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_reset 36
typedef void (*func_mindustry_input_MobileInput_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_getSyncedPlans_arc_struct_Seq 37
typedef void (*func_mindustry_input_MobileInput_getSyncedPlans_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_update 38
typedef void (*func_mindustry_input_MobileInput_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_checkUnit 39
typedef void (*func_mindustry_input_MobileInput_checkUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_tryPickupPayload 40
typedef void (*func_mindustry_input_MobileInput_tryPickupPayload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_tryDropPayload 41
typedef void (*func_mindustry_input_MobileInput_tryDropPayload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_getMouseX_R_float 42
typedef jfloat (*func_mindustry_input_MobileInput_getMouseX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_getMouseY_R_float 43
typedef jfloat (*func_mindustry_input_MobileInput_getMouseY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_buildPlacementUI_arc_scene_ui_layout_Table 44
typedef void (*func_mindustry_input_MobileInput_buildPlacementUI_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_buildUI_arc_scene_Group 45
typedef void (*func_mindustry_input_MobileInput_buildUI_arc_scene_Group)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_updateState 46
typedef void (*func_mindustry_input_MobileInput_updateState)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_multiUnitSelect_R_boolean 47
typedef jbool (*func_mindustry_input_MobileInput_multiUnitSelect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_selectUnitsRect 48
typedef void (*func_mindustry_input_MobileInput_selectUnitsRect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_selectTypedUnits 49
typedef void (*func_mindustry_input_MobileInput_selectTypedUnits)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_tapCommandUnit 50
typedef void (*func_mindustry_input_MobileInput_tapCommandUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_commandTap_float_float 51
typedef void (*func_mindustry_input_MobileInput_commandTap_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_commandTap_float_float_boolean 52
typedef void (*func_mindustry_input_MobileInput_commandTap_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_input_MobileInput_drawCommand_mindustry_gen_Unit 53
typedef void (*func_mindustry_input_MobileInput_drawCommand_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_drawCommand_mindustry_gen_Building 54
typedef void (*func_mindustry_input_MobileInput_drawCommand_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_drawCommanded 55
typedef void (*func_mindustry_input_MobileInput_drawCommanded)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_drawCommandedTargets 56
typedef void (*func_mindustry_input_MobileInput_drawCommandedTargets)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_drawCommanded_boolean 57
typedef void (*func_mindustry_input_MobileInput_drawCommanded_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_input_MobileInput_drawUnitSelection 58
typedef void (*func_mindustry_input_MobileInput_drawUnitSelection)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_drawOtherBuildPlans 59
typedef void (*func_mindustry_input_MobileInput_drawOtherBuildPlans)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_drawBuildPlans 60
typedef void (*func_mindustry_input_MobileInput_drawBuildPlans)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_drawBottom 61
typedef void (*func_mindustry_input_MobileInput_drawBottom)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_drawTop 62
typedef void (*func_mindustry_input_MobileInput_drawTop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_drawOverSelect 63
typedef void (*func_mindustry_input_MobileInput_drawOverSelect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color 64
typedef void (*func_mindustry_input_MobileInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define VTABLE_mindustry_input_MobileInput_drawBreaking_mindustry_entities_units_BuildPlan 65
typedef void (*func_mindustry_input_MobileInput_drawBreaking_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_drawOverlapCheck_mindustry_world_Block_int_int_boolean 66
typedef void (*func_mindustry_input_MobileInput_drawOverlapCheck_mindustry_world_Block_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_mindustry_input_MobileInput_planMatches_mindustry_entities_units_BuildPlan_R_boolean 67
typedef jbool (*func_mindustry_input_MobileInput_planMatches_mindustry_entities_units_BuildPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_drawBreaking_int_int 68
typedef void (*func_mindustry_input_MobileInput_drawBreaking_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic 69
typedef void (*func_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic_boolean 70
typedef void (*func_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_MobileInput_showSchematicSave 71
typedef void (*func_mindustry_input_MobileInput_showSchematicSave)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_rotatePlans_arc_struct_Seq_int 72
typedef void (*func_mindustry_input_MobileInput_rotatePlans_arc_struct_Seq_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_input_MobileInput_flipPlans_arc_struct_Seq_boolean 73
typedef void (*func_mindustry_input_MobileInput_flipPlans_arc_struct_Seq_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_MobileInput_schemOriginX_R_int 74
typedef jint (*func_mindustry_input_MobileInput_schemOriginX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_schemOriginY_R_int 75
typedef jint (*func_mindustry_input_MobileInput_schemOriginY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan 76
typedef jobject (*func_mindustry_input_MobileInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_MobileInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan 77
typedef jobject (*func_mindustry_input_MobileInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_MobileInput_drawBreakSelection_int_int_int_int_int 78
typedef void (*func_mindustry_input_MobileInput_drawBreakSelection_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_input_MobileInput_drawBreakSelection_int_int_int_int_int_boolean 79
typedef void (*func_mindustry_input_MobileInput_drawBreakSelection_int_int_int_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
#define VTABLE_mindustry_input_MobileInput_drawRebuildSelection_int_int_int_int 80
typedef void (*func_mindustry_input_MobileInput_drawRebuildSelection_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_MobileInput_drawBreakSelection_int_int_int_int 81
typedef void (*func_mindustry_input_MobileInput_drawBreakSelection_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_MobileInput_drawSelection_int_int_int_int_int 82
typedef void (*func_mindustry_input_MobileInput_drawSelection_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_input_MobileInput_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean 83
typedef void (*func_mindustry_input_MobileInput_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jobject param6, jbool param7);
#define VTABLE_mindustry_input_MobileInput_flushSelectPlans_arc_struct_Seq 84
typedef void (*func_mindustry_input_MobileInput_flushSelectPlans_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_flushPlansReverse_arc_struct_Seq 85
typedef void (*func_mindustry_input_MobileInput_flushPlansReverse_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_flushPlans_arc_struct_Seq 86
typedef void (*func_mindustry_input_MobileInput_flushPlans_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_drawOverPlan_mindustry_entities_units_BuildPlan 87
typedef void (*func_mindustry_input_MobileInput_drawOverPlan_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_drawOverPlan_mindustry_entities_units_BuildPlan_boolean 88
typedef void (*func_mindustry_input_MobileInput_drawOverPlan_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan 89
typedef void (*func_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan_boolean 90
typedef void (*func_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_MobileInput_drawPlan_int_int_mindustry_world_Block_int 91
typedef void (*func_mindustry_input_MobileInput_drawPlan_int_int_mindustry_world_Block_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_mindustry_input_MobileInput_removeSelection_int_int_int_int 92
typedef void (*func_mindustry_input_MobileInput_removeSelection_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_MobileInput_removeSelection_int_int_int_int_int 93
typedef void (*func_mindustry_input_MobileInput_removeSelection_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_input_MobileInput_removeSelection_int_int_int_int_boolean 94
typedef void (*func_mindustry_input_MobileInput_removeSelection_int_int_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4);
#define VTABLE_mindustry_input_MobileInput_removeSelection_int_int_int_int_boolean_int 95
typedef void (*func_mindustry_input_MobileInput_removeSelection_int_int_int_int_boolean_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4, jint param5);
#define VTABLE_mindustry_input_MobileInput_updateLine_int_int_int_int 96
typedef void (*func_mindustry_input_MobileInput_updateLine_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_MobileInput_updateLine_int_int 97
typedef void (*func_mindustry_input_MobileInput_updateLine_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_MobileInput_checkConfigTap_R_boolean 98
typedef jbool (*func_mindustry_input_MobileInput_checkConfigTap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_tileTapped_mindustry_gen_Building_R_boolean 99
typedef jbool (*func_mindustry_input_MobileInput_tileTapped_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_tryTapPlayer_float_float_R_boolean 100
typedef jbool (*func_mindustry_input_MobileInput_tryTapPlayer_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_canTapPlayer_float_float_R_boolean 101
typedef jbool (*func_mindustry_input_MobileInput_canTapPlayer_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_tryBeginMine_mindustry_world_Tile_R_boolean 102
typedef jbool (*func_mindustry_input_MobileInput_tryBeginMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_tryStopMine_R_boolean 103
typedef jbool (*func_mindustry_input_MobileInput_tryStopMine_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_tryStopMine_mindustry_world_Tile_R_boolean 104
typedef jbool (*func_mindustry_input_MobileInput_tryStopMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_tryRepairDerelict_mindustry_world_Tile_R_boolean 105
typedef jbool (*func_mindustry_input_MobileInput_tryRepairDerelict_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_canRepairDerelict_mindustry_world_Tile_R_boolean 106
typedef jbool (*func_mindustry_input_MobileInput_canRepairDerelict_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_canMine_mindustry_world_Tile_R_boolean 107
typedef jbool (*func_mindustry_input_MobileInput_canMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_tileAt_float_float_R_mindustry_world_Tile 108
typedef jobject (*func_mindustry_input_MobileInput_tileAt_float_float_R_mindustry_world_Tile)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_rawTileX_R_int 109
typedef jint (*func_mindustry_input_MobileInput_rawTileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_rawTileY_R_int 110
typedef jint (*func_mindustry_input_MobileInput_rawTileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_tileX_float_R_int 111
typedef jint (*func_mindustry_input_MobileInput_tileX_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_input_MobileInput_tileY_float_R_int 112
typedef jint (*func_mindustry_input_MobileInput_tileY_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_input_MobileInput_panCamera_arc_math_geom_Vec2 113
typedef void (*func_mindustry_input_MobileInput_panCamera_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_selectedBlock_R_boolean 114
typedef jbool (*func_mindustry_input_MobileInput_selectedBlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_isPlacing_R_boolean 115
typedef jbool (*func_mindustry_input_MobileInput_isPlacing_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_isBreaking_R_boolean 116
typedef jbool (*func_mindustry_input_MobileInput_isBreaking_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_isRebuildSelecting_R_boolean 117
typedef jbool (*func_mindustry_input_MobileInput_isRebuildSelecting_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_mouseAngle_float_float_R_float 118
typedef jfloat (*func_mindustry_input_MobileInput_mouseAngle_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_selectedUnit_R_mindustry_gen_Unit 119
typedef jobject (*func_mindustry_input_MobileInput_selectedUnit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_selectedControlBuild_R_mindustry_gen_Building 120
typedef jobject (*func_mindustry_input_MobileInput_selectedControlBuild_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_selectedCommandUnit_float_float_R_mindustry_gen_Unit 121
typedef jobject (*func_mindustry_input_MobileInput_selectedCommandUnit_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_selectedEnemyUnit_float_float_R_mindustry_gen_Unit 122
typedef jobject (*func_mindustry_input_MobileInput_selectedEnemyUnit_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq 123
typedef jobject (*func_mindustry_input_MobileInput_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_input_MobileInput_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq 124
typedef jobject (*func_mindustry_input_MobileInput_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_input_MobileInput_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq 125
typedef jobject (*func_mindustry_input_MobileInput_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_input_MobileInput_remove 126
typedef void (*func_mindustry_input_MobileInput_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_add 127
typedef void (*func_mindustry_input_MobileInput_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_canShoot_R_boolean 128
typedef jbool (*func_mindustry_input_MobileInput_canShoot_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_onConfigurable_R_boolean 129
typedef jbool (*func_mindustry_input_MobileInput_onConfigurable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_isDroppingItem_R_boolean 130
typedef jbool (*func_mindustry_input_MobileInput_isDroppingItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_canDropItem_R_boolean 131
typedef jbool (*func_mindustry_input_MobileInput_canDropItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_tryDropItems_mindustry_gen_Building_float_float 132
typedef void (*func_mindustry_input_MobileInput_tryDropItems_mindustry_gen_Building_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_input_MobileInput_canDepositItem_mindustry_gen_Building_R_boolean 133
typedef jbool (*func_mindustry_input_MobileInput_canDepositItem_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_rebuildArea_int_int_int_int 134
typedef void (*func_mindustry_input_MobileInput_rebuildArea_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_MobileInput_tryBreakBlock_int_int 135
typedef void (*func_mindustry_input_MobileInput_tryBreakBlock_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean 136
typedef jbool (*func_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean 137
typedef jbool (*func_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4);
#define VTABLE_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean 138
typedef jbool (*func_mindustry_input_MobileInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4, jbool param5);
#define VTABLE_mindustry_input_MobileInput_validBreak_int_int_R_boolean 139
typedef jbool (*func_mindustry_input_MobileInput_validBreak_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_MobileInput_breakBlock_int_int 140
typedef void (*func_mindustry_input_MobileInput_breakBlock_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_MobileInput_drawArrow_mindustry_world_Block_int_int_int 141
typedef void (*func_mindustry_input_MobileInput_drawArrow_mindustry_world_Block_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_MobileInput_drawArrow_mindustry_world_Block_int_int_int_boolean 142
typedef void (*func_mindustry_input_MobileInput_drawArrow_mindustry_world_Block_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jbool param4);
#define VTABLE_mindustry_input_MobileInput_iterateLine_int_int_int_int_arc_func_Cons 143
typedef void (*func_mindustry_input_MobileInput_iterateLine_int_int_int_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);
#define VTABLE_mindustry_input_MobileInput_lambda$updateLine$1_mindustry_entities_units_BuildPlan 144
typedef void (*func_mindustry_input_MobileInput_lambda$updateLine$1_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine 145
typedef void (*func_mindustry_input_MobileInput_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$drawOtherBuildPlans$0_mindustry_gen_Player 146
typedef void (*func_mindustry_input_MobileInput_lambda$drawOtherBuildPlans$0_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan 147
typedef void (*func_mindustry_input_MobileInput_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_input_MobileInput_lambda$drawCommanded$2 148
typedef void (*func_mindustry_input_MobileInput_lambda$drawCommanded$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$drawCommanded$1 149
typedef void (*func_mindustry_input_MobileInput_lambda$drawCommanded$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$drawCommanded$0 150
typedef void (*func_mindustry_input_MobileInput_lambda$drawCommanded$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean 151
typedef jbool (*func_mindustry_input_MobileInput_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$update$1_mindustry_gen_Unit_R_boolean 152
typedef jbool (*func_mindustry_input_MobileInput_lambda$update$1_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$new$5_mindustry_game_EventType$ResetEvent 153
typedef void (*func_mindustry_input_MobileInput_lambda$new$5_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$new$4_mindustry_game_EventType$WorldLoadEvent 154
typedef void (*func_mindustry_input_MobileInput_lambda$new$4_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$new$1_R_boolean 155
typedef jbool (*func_mindustry_input_MobileInput_lambda$new$1_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_checkTargets_float_float 156
typedef void (*func_mindustry_input_MobileInput_checkTargets_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean 157
typedef jbool (*func_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_checkOverlapPlacement_int_int_mindustry_world_Block_R_boolean 158
typedef jbool (*func_mindustry_input_MobileInput_checkOverlapPlacement_int_int_mindustry_world_Block_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
#define VTABLE_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan 159
typedef jobject (*func_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_removePlan_mindustry_entities_units_BuildPlan 160
typedef void (*func_mindustry_input_MobileInput_removePlan_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_isLinePlacing_R_boolean 161
typedef jbool (*func_mindustry_input_MobileInput_isLinePlacing_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_isAreaBreaking_R_boolean 162
typedef jbool (*func_mindustry_input_MobileInput_isAreaBreaking_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_showCancel_R_boolean 163
typedef jbool (*func_mindustry_input_MobileInput_showCancel_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_hasSchematic_R_boolean 164
typedef jbool (*func_mindustry_input_MobileInput_hasSchematic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_autoPan 165
typedef void (*func_mindustry_input_MobileInput_autoPan)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_updateMovement_mindustry_gen_Unit 166
typedef void (*func_mindustry_input_MobileInput_updateMovement_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$14_arc_scene_ui_layout_Table 167
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$14_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$16_arc_scene_ui_layout_Table 168
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$16_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$21 169
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$21)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$20 170
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$20)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$19 171
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$19)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$18 172
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$18)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$17_arc_scene_ui_ImageButton_R_boolean 173
typedef jbool (*func_mindustry_input_MobileInput_lambda$buildUI$17_arc_scene_ui_ImageButton_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$15_R_boolean 174
typedef jbool (*func_mindustry_input_MobileInput_lambda$buildUI$15_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$4_arc_scene_ui_layout_Table 175
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$4_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$12_R_float 176
typedef jfloat (*func_mindustry_input_MobileInput_lambda$buildUI$12_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean 177
typedef jbool (*func_mindustry_input_MobileInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$9 178
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$9)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$8_R_boolean 179
typedef jbool (*func_mindustry_input_MobileInput_lambda$buildUI$8_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$7_arc_scene_ui_TextButton_R_boolean 180
typedef jbool (*func_mindustry_input_MobileInput_lambda$buildUI$7_arc_scene_ui_TextButton_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$6 181
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$6)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$5_R_boolean 182
typedef jbool (*func_mindustry_input_MobileInput_lambda$buildUI$5_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$0_arc_scene_ui_layout_Table 183
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$0_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$3_arc_scene_ui_ImageButton_R_boolean 184
typedef jbool (*func_mindustry_input_MobileInput_lambda$buildUI$3_arc_scene_ui_ImageButton_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$2 185
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildUI$1 186
typedef void (*func_mindustry_input_MobileInput_lambda$buildUI$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$9_arc_scene_ui_ImageButton 187
typedef void (*func_mindustry_input_MobileInput_lambda$buildPlacementUI$9_arc_scene_ui_ImageButton)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$8_R_boolean 188
typedef jbool (*func_mindustry_input_MobileInput_lambda$buildPlacementUI$8_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$6 189
typedef void (*func_mindustry_input_MobileInput_lambda$buildPlacementUI$6)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$5_arc_scene_ui_ImageButton 190
typedef void (*func_mindustry_input_MobileInput_lambda$buildPlacementUI$5_arc_scene_ui_ImageButton)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$4 191
typedef void (*func_mindustry_input_MobileInput_lambda$buildPlacementUI$4)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$1_arc_scene_ui_ImageButton 192
typedef void (*func_mindustry_input_MobileInput_lambda$buildPlacementUI$1_arc_scene_ui_ImageButton)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_MobileInput_lambda$buildPlacementUI$0 193
typedef void (*func_mindustry_input_MobileInput_lambda$buildPlacementUI$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_MobileInput_lambda$new$0_mindustry_game_EventType$UnitDestroyEvent 194
typedef void (*func_mindustry_input_MobileInput_lambda$new$0_mindustry_game_EventType$UnitDestroyEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_input_MobileInput(jobject object, jint mark, jint depth);
void clinit_mindustry_input_MobileInput(jcontext ctx);
void init_mindustry_input_MobileInput(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_checkTargets_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_mindustry_input_MobileInput_hasPlan_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_MobileInput_checkOverlapPlacement_int_int_mindustry_world_Block_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jobject param2);
jobject M_mindustry_input_MobileInput_getPlan_mindustry_world_Tile_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_MobileInput_removePlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_MobileInput_isLinePlacing_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_MobileInput_isAreaBreaking_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_buildPlacementUI_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_MobileInput_showCancel_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_MobileInput_hasSchematic_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_buildUI_arc_scene_Group(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_MobileInput_drawBottom(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_drawTop(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_drawOverSelect(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_drawPlan_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_MobileInput_isRebuildSelecting_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_input_MobileInput_schemOriginX_R_int(jcontext ctx, jobject self);
jint M_mindustry_input_MobileInput_schemOriginY_R_int(jcontext ctx, jobject self);
jbool M_mindustry_input_MobileInput_isPlacing_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_MobileInput_isBreaking_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_useSchematic_mindustry_game_Schematic_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_mindustry_input_MobileInput_touchDown_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_mindustry_input_MobileInput_touchUp_int_int_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
jbool M_mindustry_input_MobileInput_longPress_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
jbool M_mindustry_input_MobileInput_tap_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
void M_mindustry_input_MobileInput_updateState(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_reset(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_getSyncedPlans_arc_struct_Seq(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_MobileInput_update(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_autoPan(jcontext ctx, jobject self);
jbool M_mindustry_input_MobileInput_pan_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jbool M_mindustry_input_MobileInput_panStop_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
jbool M_mindustry_input_MobileInput_zoom_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_input_MobileInput_updateMovement_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_input_MobileInput_lambda$updateMovement$2_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_MobileInput_lambda$updateMovement$1_mindustry_type_UnitType_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_input_MobileInput_lambda$updateMovement$0_mindustry_type_UnitType_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_input_MobileInput_lambda$update$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_MobileInput_lambda$longPress$0_mindustry_gen_Payloadc_arc_math_geom_Vec2_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_input_MobileInput_lambda$schemOriginY$0_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0);
void SM_mindustry_input_MobileInput_lambda$schemOriginX$0_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0);
void M_mindustry_input_MobileInput_lambda$buildUI$14_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_MobileInput_lambda$buildUI$16_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_input_MobileInput_lambda$buildUI$22_arc_scene_ui_ImageButton(jcontext ctx, jobject param0);
void M_mindustry_input_MobileInput_lambda$buildUI$21(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_lambda$buildUI$20(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_lambda$buildUI$19(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_lambda$buildUI$18(jcontext ctx, jobject self);
jbool M_mindustry_input_MobileInput_lambda$buildUI$17_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_MobileInput_lambda$buildUI$15_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_lambda$buildUI$4_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_input_MobileInput_lambda$buildUI$13_float_float_float_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
jfloat M_mindustry_input_MobileInput_lambda$buildUI$12_R_float(jcontext ctx, jobject self);
jbool SM_mindustry_input_MobileInput_lambda$buildUI$11_R_boolean(jcontext ctx);
jbool M_mindustry_input_MobileInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_MobileInput_lambda$buildUI$9(jcontext ctx, jobject self);
jbool M_mindustry_input_MobileInput_lambda$buildUI$8_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_input_MobileInput_lambda$buildUI$7_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_MobileInput_lambda$buildUI$6(jcontext ctx, jobject self);
jbool M_mindustry_input_MobileInput_lambda$buildUI$5_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_lambda$buildUI$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_MobileInput_lambda$buildUI$3_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_MobileInput_lambda$buildUI$2(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_lambda$buildUI$1(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_lambda$buildPlacementUI$9_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_input_MobileInput_lambda$buildPlacementUI$10_R_boolean(jcontext ctx);
jbool M_mindustry_input_MobileInput_lambda$buildPlacementUI$8_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_MobileInput_lambda$buildPlacementUI$6(jcontext ctx, jobject self);
jbool SM_mindustry_input_MobileInput_lambda$buildPlacementUI$7_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_input_MobileInput_lambda$buildPlacementUI$5_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_MobileInput_lambda$buildPlacementUI$4(jcontext ctx, jobject self);
void SM_mindustry_input_MobileInput_lambda$buildPlacementUI$3_arc_scene_ui_ImageButton(jcontext ctx, jobject param0);
void SM_mindustry_input_MobileInput_lambda$buildPlacementUI$2(jcontext ctx);
void M_mindustry_input_MobileInput_lambda$buildPlacementUI$1_arc_scene_ui_ImageButton(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_MobileInput_lambda$buildPlacementUI$0(jcontext ctx, jobject self);
jbool SM_mindustry_input_MobileInput_lambda$checkTargets$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_input_MobileInput_lambda$new$0_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_input_MobileInput_lambda$new$1_mindustry_type_Weapon_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
