#ifndef HEADER_mindustry_input_DesktopInput
#define HEADER_mindustry_input_DesktopInput

#include "Clearwing.h"
#include "mindustry/input/InputHandler.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_input_DesktopInput {
	mindustry_input_InputHandler parent;
	jref F_movement;
	jref F_cursorType;
	jint F_selectX;
	jint F_selectY;
	jint F_schemX;
	jint F_schemY;
	jint F_lastLineX;
	jint F_lastLineY;
	jint F_schematicX;
	jint F_schematicY;
	jref F_mode;
	jfloat F_selectScale;
	jref F_splan;
	jbool F_deleting;
	jbool F_shouldShoot;
	jbool F_panning;
	jbool F_movedPlan;
	jfloat F_panScale;
	jfloat F_panSpeed;
	jfloat F_panBoostSpeed;
	jlong F_selectMillis;
	jref F_prevSelected;
	jint F_lastCtrlGroup;
	jlong F_lastCtrlGroupSelectMillis;
	jlong F_lastPayloadKeyTapMillis;
	jlong F_lastPayloadKeyHoldMillis;
	jfloat F_buildPlanMouseOffsetX;
	jfloat F_buildPlanMouseOffsetY;
	jbool F_changedCursor;
	jbool F_pressedCommandRect;
} mindustry_input_DesktopInput;

extern Class class_mindustry_input_DesktopInput;


#define VTABLE_mindustry_input_DesktopInput_hashCode_R_int 0
typedef jint (*func_mindustry_input_DesktopInput_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_input_DesktopInput_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_input_DesktopInput_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_input_DesktopInput_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_input_DesktopInput_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_finalize 5
typedef void (*func_mindustry_input_DesktopInput_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_notify 6
typedef void (*func_mindustry_input_DesktopInput_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_notifyAll 7
typedef void (*func_mindustry_input_DesktopInput_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_wait 8
typedef void (*func_mindustry_input_DesktopInput_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_wait_long 9
typedef void (*func_mindustry_input_DesktopInput_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_input_DesktopInput_wait_long_int 10
typedef void (*func_mindustry_input_DesktopInput_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_input_DesktopInput_keyDown_arc_input_KeyCode_R_boolean 11
typedef jbool (*func_mindustry_input_DesktopInput_keyDown_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_keyUp_arc_input_KeyCode_R_boolean 12
typedef jbool (*func_mindustry_input_DesktopInput_keyUp_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_keyTyped_char_R_boolean 13
typedef jbool (*func_mindustry_input_DesktopInput_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_mindustry_input_DesktopInput_touchDown_int_int_int_arc_input_KeyCode_R_boolean 14
typedef jbool (*func_mindustry_input_DesktopInput_touchDown_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_DesktopInput_touchUp_int_int_int_arc_input_KeyCode_R_boolean 15
typedef jbool (*func_mindustry_input_DesktopInput_touchUp_int_int_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_DesktopInput_touchDragged_int_int_int_R_boolean 16
typedef jbool (*func_mindustry_input_DesktopInput_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define VTABLE_mindustry_input_DesktopInput_mouseMoved_int_int_R_boolean 17
typedef jbool (*func_mindustry_input_DesktopInput_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_DesktopInput_scrolled_float_float_R_boolean 18
typedef jbool (*func_mindustry_input_DesktopInput_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_DesktopInput_touchDown_float_float_int_arc_input_KeyCode_R_boolean 19
typedef jbool (*func_mindustry_input_DesktopInput_touchDown_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_DesktopInput_tap_float_float_int_arc_input_KeyCode_R_boolean 20
typedef jbool (*func_mindustry_input_DesktopInput_tap_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_DesktopInput_longPress_float_float_R_boolean 21
typedef jbool (*func_mindustry_input_DesktopInput_longPress_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_DesktopInput_fling_float_float_arc_input_KeyCode_R_boolean 22
typedef jbool (*func_mindustry_input_DesktopInput_fling_float_float_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jobject param2);
#define VTABLE_mindustry_input_DesktopInput_pan_float_float_float_float_R_boolean 23
typedef jbool (*func_mindustry_input_DesktopInput_pan_float_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_input_DesktopInput_panStop_float_float_int_arc_input_KeyCode_R_boolean 24
typedef jbool (*func_mindustry_input_DesktopInput_panStop_float_float_int_arc_input_KeyCode_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_DesktopInput_zoom_float_float_R_boolean 25
typedef jbool (*func_mindustry_input_DesktopInput_zoom_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_DesktopInput_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean 26
typedef jbool (*func_mindustry_input_DesktopInput_pinch_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_input_DesktopInput_pinchStop 27
typedef void (*func_mindustry_input_DesktopInput_pinchStop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_initQuadtrees 28
typedef void (*func_mindustry_input_DesktopInput_initQuadtrees)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_createPlanLists 29
typedef void (*func_mindustry_input_DesktopInput_createPlanLists)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_updateSelectQuadtree 30
typedef void (*func_mindustry_input_DesktopInput_updateSelectQuadtree)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_addLock_arc_func_Boolp 31
typedef void (*func_mindustry_input_DesktopInput_addLock_arc_func_Boolp)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_locked_R_boolean 32
typedef jbool (*func_mindustry_input_DesktopInput_locked_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_allPlans_R_arc_util_Eachable 33
typedef jobject (*func_mindustry_input_DesktopInput_allPlans_R_arc_util_Eachable)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_isUsingSchematic_R_boolean 34
typedef jbool (*func_mindustry_input_DesktopInput_isUsingSchematic_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_spectate_mindustry_gen_Unit 35
typedef void (*func_mindustry_input_DesktopInput_spectate_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_reset 36
typedef void (*func_mindustry_input_DesktopInput_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_getSyncedPlans_arc_struct_Seq 37
typedef void (*func_mindustry_input_DesktopInput_getSyncedPlans_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_update 38
typedef void (*func_mindustry_input_DesktopInput_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_checkUnit 39
typedef void (*func_mindustry_input_DesktopInput_checkUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_tryPickupPayload 40
typedef void (*func_mindustry_input_DesktopInput_tryPickupPayload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_tryDropPayload 41
typedef void (*func_mindustry_input_DesktopInput_tryDropPayload)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_getMouseX_R_float 42
typedef jfloat (*func_mindustry_input_DesktopInput_getMouseX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_getMouseY_R_float 43
typedef jfloat (*func_mindustry_input_DesktopInput_getMouseY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_buildPlacementUI_arc_scene_ui_layout_Table 44
typedef void (*func_mindustry_input_DesktopInput_buildPlacementUI_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_buildUI_arc_scene_Group 45
typedef void (*func_mindustry_input_DesktopInput_buildUI_arc_scene_Group)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_updateState 46
typedef void (*func_mindustry_input_DesktopInput_updateState)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_multiUnitSelect_R_boolean 47
typedef jbool (*func_mindustry_input_DesktopInput_multiUnitSelect_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_selectUnitsRect 48
typedef void (*func_mindustry_input_DesktopInput_selectUnitsRect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_selectTypedUnits 49
typedef void (*func_mindustry_input_DesktopInput_selectTypedUnits)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_tapCommandUnit 50
typedef void (*func_mindustry_input_DesktopInput_tapCommandUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_commandTap_float_float 51
typedef void (*func_mindustry_input_DesktopInput_commandTap_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_DesktopInput_commandTap_float_float_boolean 52
typedef void (*func_mindustry_input_DesktopInput_commandTap_float_float_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2);
#define VTABLE_mindustry_input_DesktopInput_drawCommand_mindustry_gen_Unit 53
typedef void (*func_mindustry_input_DesktopInput_drawCommand_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_drawCommand_mindustry_gen_Building 54
typedef void (*func_mindustry_input_DesktopInput_drawCommand_mindustry_gen_Building)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_drawCommanded 55
typedef void (*func_mindustry_input_DesktopInput_drawCommanded)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_drawCommandedTargets 56
typedef void (*func_mindustry_input_DesktopInput_drawCommandedTargets)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_drawCommanded_boolean 57
typedef void (*func_mindustry_input_DesktopInput_drawCommanded_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_input_DesktopInput_drawUnitSelection 58
typedef void (*func_mindustry_input_DesktopInput_drawUnitSelection)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_drawOtherBuildPlans 59
typedef void (*func_mindustry_input_DesktopInput_drawOtherBuildPlans)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_drawBuildPlans 60
typedef void (*func_mindustry_input_DesktopInput_drawBuildPlans)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_drawBottom 61
typedef void (*func_mindustry_input_DesktopInput_drawBottom)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_drawTop 62
typedef void (*func_mindustry_input_DesktopInput_drawTop)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_drawOverSelect 63
typedef void (*func_mindustry_input_DesktopInput_drawOverSelect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color 64
typedef void (*func_mindustry_input_DesktopInput_drawSelected_int_int_mindustry_world_Block_arc_graphics_Color)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jobject param3);
#define VTABLE_mindustry_input_DesktopInput_drawBreaking_mindustry_entities_units_BuildPlan 65
typedef void (*func_mindustry_input_DesktopInput_drawBreaking_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_drawOverlapCheck_mindustry_world_Block_int_int_boolean 66
typedef void (*func_mindustry_input_DesktopInput_drawOverlapCheck_mindustry_world_Block_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_mindustry_input_DesktopInput_planMatches_mindustry_entities_units_BuildPlan_R_boolean 67
typedef jbool (*func_mindustry_input_DesktopInput_planMatches_mindustry_entities_units_BuildPlan_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_drawBreaking_int_int 68
typedef void (*func_mindustry_input_DesktopInput_drawBreaking_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic 69
typedef void (*func_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic_boolean 70
typedef void (*func_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_DesktopInput_showSchematicSave 71
typedef void (*func_mindustry_input_DesktopInput_showSchematicSave)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_rotatePlans_arc_struct_Seq_int 72
typedef void (*func_mindustry_input_DesktopInput_rotatePlans_arc_struct_Seq_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_input_DesktopInput_flipPlans_arc_struct_Seq_boolean 73
typedef void (*func_mindustry_input_DesktopInput_flipPlans_arc_struct_Seq_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_DesktopInput_schemOriginX_R_int 74
typedef jint (*func_mindustry_input_DesktopInput_schemOriginX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_schemOriginY_R_int 75
typedef jint (*func_mindustry_input_DesktopInput_schemOriginY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan 76
typedef jobject (*func_mindustry_input_DesktopInput_getPlan_int_int_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_DesktopInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan 77
typedef jobject (*func_mindustry_input_DesktopInput_getPlan_int_int_int_mindustry_entities_units_BuildPlan_R_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3);
#define VTABLE_mindustry_input_DesktopInput_drawBreakSelection_int_int_int_int_int 78
typedef void (*func_mindustry_input_DesktopInput_drawBreakSelection_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_input_DesktopInput_drawBreakSelection_int_int_int_int_int_boolean 79
typedef void (*func_mindustry_input_DesktopInput_drawBreakSelection_int_int_int_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jbool param5);
#define VTABLE_mindustry_input_DesktopInput_drawRebuildSelection_int_int_int_int 80
typedef void (*func_mindustry_input_DesktopInput_drawRebuildSelection_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_DesktopInput_drawBreakSelection_int_int_int_int 81
typedef void (*func_mindustry_input_DesktopInput_drawBreakSelection_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_DesktopInput_drawSelection_int_int_int_int_int 82
typedef void (*func_mindustry_input_DesktopInput_drawSelection_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_input_DesktopInput_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean 83
typedef void (*func_mindustry_input_DesktopInput_drawSelection_int_int_int_int_int_arc_graphics_Color_arc_graphics_Color_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jobject param5, jobject param6, jbool param7);
#define VTABLE_mindustry_input_DesktopInput_flushSelectPlans_arc_struct_Seq 84
typedef void (*func_mindustry_input_DesktopInput_flushSelectPlans_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_flushPlansReverse_arc_struct_Seq 85
typedef void (*func_mindustry_input_DesktopInput_flushPlansReverse_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_flushPlans_arc_struct_Seq 86
typedef void (*func_mindustry_input_DesktopInput_flushPlans_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_drawOverPlan_mindustry_entities_units_BuildPlan 87
typedef void (*func_mindustry_input_DesktopInput_drawOverPlan_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_drawOverPlan_mindustry_entities_units_BuildPlan_boolean 88
typedef void (*func_mindustry_input_DesktopInput_drawOverPlan_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_DesktopInput_drawPlan_mindustry_entities_units_BuildPlan 89
typedef void (*func_mindustry_input_DesktopInput_drawPlan_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_drawPlan_mindustry_entities_units_BuildPlan_boolean 90
typedef void (*func_mindustry_input_DesktopInput_drawPlan_mindustry_entities_units_BuildPlan_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_input_DesktopInput_drawPlan_int_int_mindustry_world_Block_int 91
typedef void (*func_mindustry_input_DesktopInput_drawPlan_int_int_mindustry_world_Block_int)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_mindustry_input_DesktopInput_removeSelection_int_int_int_int 92
typedef void (*func_mindustry_input_DesktopInput_removeSelection_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_DesktopInput_removeSelection_int_int_int_int_int 93
typedef void (*func_mindustry_input_DesktopInput_removeSelection_int_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_mindustry_input_DesktopInput_removeSelection_int_int_int_int_boolean 94
typedef void (*func_mindustry_input_DesktopInput_removeSelection_int_int_int_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4);
#define VTABLE_mindustry_input_DesktopInput_removeSelection_int_int_int_int_boolean_int 95
typedef void (*func_mindustry_input_DesktopInput_removeSelection_int_int_int_int_boolean_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jbool param4, jint param5);
#define VTABLE_mindustry_input_DesktopInput_updateLine_int_int_int_int 96
typedef void (*func_mindustry_input_DesktopInput_updateLine_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_DesktopInput_updateLine_int_int 97
typedef void (*func_mindustry_input_DesktopInput_updateLine_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_DesktopInput_checkConfigTap_R_boolean 98
typedef jbool (*func_mindustry_input_DesktopInput_checkConfigTap_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_tileTapped_mindustry_gen_Building_R_boolean 99
typedef jbool (*func_mindustry_input_DesktopInput_tileTapped_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_tryTapPlayer_float_float_R_boolean 100
typedef jbool (*func_mindustry_input_DesktopInput_tryTapPlayer_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_DesktopInput_canTapPlayer_float_float_R_boolean 101
typedef jbool (*func_mindustry_input_DesktopInput_canTapPlayer_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_DesktopInput_tryBeginMine_mindustry_world_Tile_R_boolean 102
typedef jbool (*func_mindustry_input_DesktopInput_tryBeginMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_tryStopMine_R_boolean 103
typedef jbool (*func_mindustry_input_DesktopInput_tryStopMine_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_tryStopMine_mindustry_world_Tile_R_boolean 104
typedef jbool (*func_mindustry_input_DesktopInput_tryStopMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_tryRepairDerelict_mindustry_world_Tile_R_boolean 105
typedef jbool (*func_mindustry_input_DesktopInput_tryRepairDerelict_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_canRepairDerelict_mindustry_world_Tile_R_boolean 106
typedef jbool (*func_mindustry_input_DesktopInput_canRepairDerelict_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_canMine_mindustry_world_Tile_R_boolean 107
typedef jbool (*func_mindustry_input_DesktopInput_canMine_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_tileAt_float_float_R_mindustry_world_Tile 108
typedef jobject (*func_mindustry_input_DesktopInput_tileAt_float_float_R_mindustry_world_Tile)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_DesktopInput_rawTileX_R_int 109
typedef jint (*func_mindustry_input_DesktopInput_rawTileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_rawTileY_R_int 110
typedef jint (*func_mindustry_input_DesktopInput_rawTileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_tileX_float_R_int 111
typedef jint (*func_mindustry_input_DesktopInput_tileX_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_input_DesktopInput_tileY_float_R_int 112
typedef jint (*func_mindustry_input_DesktopInput_tileY_float_R_int)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_input_DesktopInput_panCamera_arc_math_geom_Vec2 113
typedef void (*func_mindustry_input_DesktopInput_panCamera_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_selectedBlock_R_boolean 114
typedef jbool (*func_mindustry_input_DesktopInput_selectedBlock_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_isPlacing_R_boolean 115
typedef jbool (*func_mindustry_input_DesktopInput_isPlacing_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_isBreaking_R_boolean 116
typedef jbool (*func_mindustry_input_DesktopInput_isBreaking_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_isRebuildSelecting_R_boolean 117
typedef jbool (*func_mindustry_input_DesktopInput_isRebuildSelecting_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_mouseAngle_float_float_R_float 118
typedef jfloat (*func_mindustry_input_DesktopInput_mouseAngle_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_DesktopInput_selectedUnit_R_mindustry_gen_Unit 119
typedef jobject (*func_mindustry_input_DesktopInput_selectedUnit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_selectedControlBuild_R_mindustry_gen_Building 120
typedef jobject (*func_mindustry_input_DesktopInput_selectedControlBuild_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_selectedCommandUnit_float_float_R_mindustry_gen_Unit 121
typedef jobject (*func_mindustry_input_DesktopInput_selectedCommandUnit_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_DesktopInput_selectedEnemyUnit_float_float_R_mindustry_gen_Unit 122
typedef jobject (*func_mindustry_input_DesktopInput_selectedEnemyUnit_float_float_R_mindustry_gen_Unit)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_input_DesktopInput_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq 123
typedef jobject (*func_mindustry_input_DesktopInput_selectedCommandBuildings_float_float_float_float_R_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_input_DesktopInput_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq 124
typedef jobject (*func_mindustry_input_DesktopInput_selectedCommandUnits_float_float_float_float_arc_func_Boolf_R_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4);
#define VTABLE_mindustry_input_DesktopInput_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq 125
typedef jobject (*func_mindustry_input_DesktopInput_selectedCommandUnits_float_float_float_float_R_arc_struct_Seq)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_mindustry_input_DesktopInput_remove 126
typedef void (*func_mindustry_input_DesktopInput_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_add 127
typedef void (*func_mindustry_input_DesktopInput_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_canShoot_R_boolean 128
typedef jbool (*func_mindustry_input_DesktopInput_canShoot_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_onConfigurable_R_boolean 129
typedef jbool (*func_mindustry_input_DesktopInput_onConfigurable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_isDroppingItem_R_boolean 130
typedef jbool (*func_mindustry_input_DesktopInput_isDroppingItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_canDropItem_R_boolean 131
typedef jbool (*func_mindustry_input_DesktopInput_canDropItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_tryDropItems_mindustry_gen_Building_float_float 132
typedef void (*func_mindustry_input_DesktopInput_tryDropItems_mindustry_gen_Building_float_float)(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_input_DesktopInput_canDepositItem_mindustry_gen_Building_R_boolean 133
typedef jbool (*func_mindustry_input_DesktopInput_canDepositItem_mindustry_gen_Building_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_rebuildArea_int_int_int_int 134
typedef void (*func_mindustry_input_DesktopInput_rebuildArea_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_DesktopInput_tryBreakBlock_int_int 135
typedef void (*func_mindustry_input_DesktopInput_tryBreakBlock_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_DesktopInput_validPlace_int_int_mindustry_world_Block_int_R_boolean 136
typedef jbool (*func_mindustry_input_DesktopInput_validPlace_int_int_mindustry_world_Block_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3);
#define VTABLE_mindustry_input_DesktopInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean 137
typedef jbool (*func_mindustry_input_DesktopInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4);
#define VTABLE_mindustry_input_DesktopInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean 138
typedef jbool (*func_mindustry_input_DesktopInput_validPlace_int_int_mindustry_world_Block_int_mindustry_entities_units_BuildPlan_boolean_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jobject param2, jint param3, jobject param4, jbool param5);
#define VTABLE_mindustry_input_DesktopInput_validBreak_int_int_R_boolean 139
typedef jbool (*func_mindustry_input_DesktopInput_validBreak_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_DesktopInput_breakBlock_int_int 140
typedef void (*func_mindustry_input_DesktopInput_breakBlock_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_input_DesktopInput_drawArrow_mindustry_world_Block_int_int_int 141
typedef void (*func_mindustry_input_DesktopInput_drawArrow_mindustry_world_Block_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_input_DesktopInput_drawArrow_mindustry_world_Block_int_int_int_boolean 142
typedef void (*func_mindustry_input_DesktopInput_drawArrow_mindustry_world_Block_int_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jbool param4);
#define VTABLE_mindustry_input_DesktopInput_iterateLine_int_int_int_int_arc_func_Cons 143
typedef void (*func_mindustry_input_DesktopInput_iterateLine_int_int_int_int_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);
#define VTABLE_mindustry_input_DesktopInput_lambda$updateLine$1_mindustry_entities_units_BuildPlan 144
typedef void (*func_mindustry_input_DesktopInput_lambda$updateLine$1_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine 145
typedef void (*func_mindustry_input_DesktopInput_lambda$updateLine$0_mindustry_input_InputHandler$PlaceLine)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$drawOtherBuildPlans$0_mindustry_gen_Player 146
typedef void (*func_mindustry_input_DesktopInput_lambda$drawOtherBuildPlans$0_mindustry_gen_Player)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan 147
typedef void (*func_mindustry_input_DesktopInput_lambda$drawOtherBuildPlans$1_mindustry_entities_units_BuildPlan_mindustry_gen_Player_mindustry_entities_units_BuildPlan)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_input_DesktopInput_lambda$drawCommanded$2 148
typedef void (*func_mindustry_input_DesktopInput_lambda$drawCommanded$2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_lambda$drawCommanded$1 149
typedef void (*func_mindustry_input_DesktopInput_lambda$drawCommanded$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_lambda$drawCommanded$0 150
typedef void (*func_mindustry_input_DesktopInput_lambda$drawCommanded$0)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean 151
typedef jbool (*func_mindustry_input_DesktopInput_lambda$checkUnit$0_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$update$1_mindustry_gen_Unit_R_boolean 152
typedef jbool (*func_mindustry_input_DesktopInput_lambda$update$1_mindustry_gen_Unit_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$new$5_mindustry_game_EventType$ResetEvent 153
typedef void (*func_mindustry_input_DesktopInput_lambda$new$5_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$new$4_mindustry_game_EventType$WorldLoadEvent 154
typedef void (*func_mindustry_input_DesktopInput_lambda$new$4_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$new$1_R_boolean 155
typedef jbool (*func_mindustry_input_DesktopInput_lambda$new$1_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_showHint_R_boolean 156
typedef jbool (*func_mindustry_input_DesktopInput_showHint_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_pollInputNoPlayer 157
typedef void (*func_mindustry_input_DesktopInput_pollInputNoPlayer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_pollInputPlayer 158
typedef void (*func_mindustry_input_DesktopInput_pollInputPlayer)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_updateMovement_mindustry_gen_Unit 159
typedef void (*func_mindustry_input_DesktopInput_updateMovement_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$update$5_int 160
typedef void (*func_mindustry_input_DesktopInput_lambda$update$5_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$buildUI$4_arc_scene_ui_layout_Table 161
typedef void (*func_mindustry_input_DesktopInput_lambda$buildUI$4_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$buildUI$6_arc_scene_ui_layout_Table 162
typedef void (*func_mindustry_input_DesktopInput_lambda$buildUI$6_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$buildUI$9_arc_scene_ui_layout_Table 163
typedef void (*func_mindustry_input_DesktopInput_lambda$buildUI$9_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean 164
typedef jbool (*func_mindustry_input_DesktopInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$buildUI$5_R_boolean 165
typedef jbool (*func_mindustry_input_DesktopInput_lambda$buildUI$5_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_input_DesktopInput_lambda$buildUI$0_arc_scene_ui_layout_Table 166
typedef void (*func_mindustry_input_DesktopInput_lambda$buildUI$0_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$buildUI$2_arc_scene_ui_layout_Table 167
typedef void (*func_mindustry_input_DesktopInput_lambda$buildUI$2_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$buildUI$3_java_lang_StringBuilder_R_java_lang_CharSequence 168
typedef jobject (*func_mindustry_input_DesktopInput_lambda$buildUI$3_java_lang_StringBuilder_R_java_lang_CharSequence)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_input_DesktopInput_lambda$buildUI$1_arc_scene_ui_layout_Table_R_boolean 169
typedef jbool (*func_mindustry_input_DesktopInput_lambda$buildUI$1_arc_scene_ui_layout_Table_R_boolean)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_input_DesktopInput(jobject object, jint mark, jint depth);
void clinit_mindustry_input_DesktopInput(jcontext ctx);
void init_mindustry_input_DesktopInput(jcontext ctx, jobject self);
jbool M_mindustry_input_DesktopInput_showHint_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_DesktopInput_reset(jcontext ctx, jobject self);
void M_mindustry_input_DesktopInput_buildUI_arc_scene_Group(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_DesktopInput_drawTop(jcontext ctx, jobject self);
void M_mindustry_input_DesktopInput_drawBottom(jcontext ctx, jobject self);
void M_mindustry_input_DesktopInput_update(jcontext ctx, jobject self);
void M_mindustry_input_DesktopInput_useSchematic_mindustry_game_Schematic_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jbool M_mindustry_input_DesktopInput_isBreaking_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_DesktopInput_buildPlacementUI_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_DesktopInput_pollInputNoPlayer(jcontext ctx, jobject self);
void M_mindustry_input_DesktopInput_pollInputPlayer(jcontext ctx, jobject self);
jbool M_mindustry_input_DesktopInput_tap_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
jbool M_mindustry_input_DesktopInput_touchDown_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jobject param3);
jbool M_mindustry_input_DesktopInput_selectedBlock_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_input_DesktopInput_getMouseX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_input_DesktopInput_getMouseY_R_float(jcontext ctx, jobject self);
void M_mindustry_input_DesktopInput_updateState(jcontext ctx, jobject self);
void M_mindustry_input_DesktopInput_panCamera_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_DesktopInput_updateMovement_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_input_DesktopInput_lambda$pollInputPlayer$1_mindustry_gen_Unit_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_input_DesktopInput_lambda$pollInputPlayer$0_int_int_mindustry_entities_units_BuildPlan(jcontext ctx, jint param0, jint param1, jobject param2);
jbool SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$5_R_boolean(jcontext ctx);
void SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$4(jcontext ctx);
jbool SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$3_R_boolean(jcontext ctx);
void SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$2(jcontext ctx);
void SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$1(jcontext ctx);
void SM_mindustry_input_DesktopInput_lambda$buildPlacementUI$0(jcontext ctx);
void SM_mindustry_input_DesktopInput_lambda$update$6_java_lang_String(jcontext ctx, jobject param0);
void M_mindustry_input_DesktopInput_lambda$update$5_int(jcontext ctx, jobject self, jint param0);
jint SM_mindustry_input_DesktopInput_lambda$update$4_mindustry_gen_Unit_R_int(jcontext ctx, jobject param0);
jbool SM_mindustry_input_DesktopInput_lambda$update$3_mindustry_gen_Building_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_DesktopInput_lambda$update$2_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_DesktopInput_lambda$update$1_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_input_DesktopInput_lambda$update$0_mindustry_gen_Unit_R_boolean(jcontext ctx, jobject param0);
void M_mindustry_input_DesktopInput_lambda$buildUI$4_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_DesktopInput_lambda$buildUI$6_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_DesktopInput_lambda$buildUI$9_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_DesktopInput_lambda$buildUI$10_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_input_DesktopInput_lambda$buildUI$8_R_boolean(jcontext ctx);
jobject SM_mindustry_input_DesktopInput_lambda$buildUI$7_R_java_lang_CharSequence(jcontext ctx);
jbool M_mindustry_input_DesktopInput_lambda$buildUI$5_R_boolean(jcontext ctx, jobject self);
void M_mindustry_input_DesktopInput_lambda$buildUI$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_input_DesktopInput_lambda$buildUI$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_input_DesktopInput_lambda$buildUI$3_java_lang_StringBuilder_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_input_DesktopInput_lambda$buildUI$1_arc_scene_ui_layout_Table_R_boolean(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
