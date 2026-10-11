#ifndef HEADER_mindustry_logic_LStatements$DrawStatement
#define HEADER_mindustry_logic_LStatements$DrawStatement

#include "Clearwing.h"
#include "mindustry/logic/LStatement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LStatements$DrawStatement {
	mindustry_logic_LStatement parent;
	jref F_type;
	jref F_x;
	jref F_y;
	jref F_p1;
	jref F_p2;
	jref F_p3;
	jref F_p4;
} mindustry_logic_LStatements$DrawStatement;

extern Class class_mindustry_logic_LStatements$DrawStatement;


#define VTABLE_mindustry_logic_LStatements$DrawStatement_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LStatements$DrawStatement_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LStatements$DrawStatement_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_finalize 5
typedef void (*func_mindustry_logic_LStatements$DrawStatement_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_notify 6
typedef void (*func_mindustry_logic_LStatements$DrawStatement_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_notifyAll 7
typedef void (*func_mindustry_logic_LStatements$DrawStatement_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_wait 8
typedef void (*func_mindustry_logic_LStatements$DrawStatement_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_wait_long 9
typedef void (*func_mindustry_logic_LStatements$DrawStatement_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_wait_long_int 10
typedef void (*func_mindustry_logic_LStatements$DrawStatement_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_build_arc_scene_ui_layout_Table 11
typedef void (*func_mindustry_logic_LStatements$DrawStatement_build_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction 12
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_category_R_mindustry_logic_LCategory 13
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_category_R_mindustry_logic_LCategory)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_copy_R_mindustry_logic_LStatement 14
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_copy_R_mindustry_logic_LStatement)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_useWrapping_R_boolean 15
typedef jbool (*func_mindustry_logic_LStatements$DrawStatement_useWrapping_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_hidden_R_boolean 16
typedef jbool (*func_mindustry_logic_LStatements$DrawStatement_hidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_privileged_R_boolean 17
typedef jbool (*func_mindustry_logic_LStatements$DrawStatement_privileged_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_nonPrivileged_R_boolean 18
typedef jbool (*func_mindustry_logic_LStatements$DrawStatement_nonPrivileged_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_param_arc_scene_ui_layout_Cell 19
typedef void (*func_mindustry_logic_LStatements$DrawStatement_param_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 20
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 21
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 22
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 23
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2, jobject param3, jobject param4);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell 24
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons 25
typedef void (*func_mindustry_logic_LStatements$DrawStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jobject param5);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons 26
typedef void (*func_mindustry_logic_LStatements$DrawStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean 27
typedef void (*func_mindustry_logic_LStatements$DrawStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_afterRead 28
typedef void (*func_mindustry_logic_LStatements$DrawStatement_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_write_java_lang_StringBuilder 29
typedef void (*func_mindustry_logic_LStatements$DrawStatement_write_java_lang_StringBuilder)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_setupUI 30
typedef void (*func_mindustry_logic_LStatements$DrawStatement_setupUI)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_saveUI 31
typedef void (*func_mindustry_logic_LStatements$DrawStatement_saveUI)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_typeName_R_java_lang_String 32
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_typeName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_statementKey_R_java_lang_String 33
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_statementKey_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_localizedName_R_java_lang_String 34
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_localizedName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_name_R_java_lang_String 35
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table 36
typedef void (*func_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$47_java_lang_String 37
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$47_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$46_java_lang_String 38
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$46_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$45_java_lang_String 39
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$45_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$44_arc_scene_ui_layout_Table_java_lang_String 40
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$44_arc_scene_ui_layout_Table_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$43_R_java_lang_String 41
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$43_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$42_java_lang_String 42
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$42_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$41_java_lang_String 43
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$41_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$40_java_lang_String 44
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$40_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$39_java_lang_String 45
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$39_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$38_java_lang_String 46
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$38_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$37_java_lang_String 47
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$37_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$36_java_lang_String 48
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$36_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$35_java_lang_String 49
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$35_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$34_java_lang_String 50
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$34_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$33_java_lang_String 51
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$33_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$32_java_lang_String 52
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$32_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$31_java_lang_String 53
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$31_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$30_java_lang_String 54
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$30_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$29_java_lang_String 55
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$29_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$28_java_lang_String 56
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$28_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$27_java_lang_String 57
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$27_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$26_java_lang_String 58
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$26_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$25_java_lang_String 59
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$25_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$24_java_lang_String 60
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$24_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$23_java_lang_String 61
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$23_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$22_java_lang_String 62
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$22_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$21_java_lang_String 63
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$21_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$20_java_lang_String 64
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$20_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$19_java_lang_String 65
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$19_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$18_java_lang_String 66
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$18_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$17_java_lang_String 67
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$17_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$16_java_lang_String 68
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$16_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$15_java_lang_String 69
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$15_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_arc_graphics_Color 70
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$13_java_lang_String 71
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$13_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$12_java_lang_String 72
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$12_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$11_java_lang_String 73
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$11_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$10_java_lang_String 74
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$10_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$9_java_lang_String 75
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$9_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$8_java_lang_String 76
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$8_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$7_java_lang_String 77
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$7_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$6_java_lang_String 78
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$6_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button 79
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table 80
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_world_blocks_logic_LogicDisplay$GraphicsType 81
typedef void (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_world_blocks_logic_LogicDisplay$GraphicsType)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$1_R_java_lang_CharSequence 82
typedef jobject (*func_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$1_R_java_lang_CharSequence)(jcontext ctx, jobject self);

void mark_mindustry_logic_LStatements$DrawStatement(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LStatements$DrawStatement(jcontext ctx);
void init_mindustry_logic_LStatements$DrawStatement(jcontext ctx, jobject self);
void M_mindustry_logic_LStatements$DrawStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_rebuild_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_afterRead(jcontext ctx, jobject self);
jobject M_mindustry_logic_LStatements$DrawStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_logic_LStatements$DrawStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$47_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$46_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$45_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$44_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$43_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$42_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$41_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$40_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$39_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$38_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$37_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$36_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$35_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$34_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$33_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$32_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$31_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$30_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$29_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$28_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$27_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$26_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$25_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$24_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$23_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$22_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$21_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$20_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$19_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$18_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$17_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$16_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$15_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$14_arc_scene_ui_layout_Table_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$13_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$12_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$11_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$10_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$9_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$8_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$7_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$6_java_lang_String(jcontext ctx, jobject self, jobject param0);
void SM_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$5(jcontext ctx);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$0_arc_scene_ui_layout_Table_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$2_arc_scene_ui_Button_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1);
void SM_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$4_arc_scene_ui_layout_Cell(jcontext ctx, jobject param0);
void M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$3_arc_scene_ui_layout_Table_mindustry_world_blocks_logic_LogicDisplay$GraphicsType(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_logic_LStatements$DrawStatement_lambda$rebuild$1_R_java_lang_CharSequence(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
