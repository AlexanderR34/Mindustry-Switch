#ifndef HEADER_mindustry_editor_EditorTool$5
#define HEADER_mindustry_editor_EditorTool$5

#include "Clearwing.h"
#include "mindustry/editor/EditorTool.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_EditorTool$5 {
	mindustry_editor_EditorTool parent;
	jref F_stack;
} mindustry_editor_EditorTool$5;

extern Class class_mindustry_editor_EditorTool$5;


#define VTABLE_mindustry_editor_EditorTool$5_hashCode_R_int 0
typedef jint (*func_mindustry_editor_EditorTool$5_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_EditorTool$5_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$5_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_EditorTool$5_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_EditorTool$5_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_EditorTool$5_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_finalize 5
typedef void (*func_mindustry_editor_EditorTool$5_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_notify 6
typedef void (*func_mindustry_editor_EditorTool$5_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_notifyAll 7
typedef void (*func_mindustry_editor_EditorTool$5_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_wait 8
typedef void (*func_mindustry_editor_EditorTool$5_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_wait_long 9
typedef void (*func_mindustry_editor_EditorTool$5_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_EditorTool$5_wait_long_int 10
typedef void (*func_mindustry_editor_EditorTool$5_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_EditorTool$5_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_editor_EditorTool$5_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$5_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_editor_EditorTool$5_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$5_name_R_java_lang_String 13
typedef jobject (*func_mindustry_editor_EditorTool$5_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_ordinal_R_int 14
typedef jint (*func_mindustry_editor_EditorTool$5_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_editor_EditorTool$5_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$5_touched_int_int 16
typedef void (*func_mindustry_editor_EditorTool$5_touched_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorTool$5_touchedLine_int_int_int_int 17
typedef void (*func_mindustry_editor_EditorTool$5_touchedLine_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons 18
typedef void (*func_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons)(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jobject param4);

void mark_mindustry_editor_EditorTool$5(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_EditorTool$5(jcontext ctx);
void init_mindustry_editor_EditorTool$5_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void M_mindustry_editor_EditorTool$5_touched_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_EditorTool$5_fill_int_int_boolean_arc_func_Boolf_arc_func_Cons(jcontext ctx, jobject self, jint param0, jint param1, jbool param2, jobject param3, jobject param4);
void SM_mindustry_editor_EditorTool$5_lambda$touched$16_mindustry_world_Tile(jcontext ctx, jobject param0);
jbool SM_mindustry_editor_EditorTool$5_lambda$touched$15_mindustry_world_Block_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2);
void SM_mindustry_editor_EditorTool$5_lambda$touched$14_arc_struct_Bits_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_editor_EditorTool$5_lambda$touched$13_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_editor_EditorTool$5_lambda$touched$12_mindustry_world_Tile(jcontext ctx, jobject param0);
jbool SM_mindustry_editor_EditorTool$5_lambda$touched$11_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_editor_EditorTool$5_lambda$touched$10_mindustry_world_Tile(jcontext ctx, jobject param0);
jbool SM_mindustry_editor_EditorTool$5_lambda$touched$9_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_editor_EditorTool$5_lambda$touched$8_mindustry_world_Tile(jcontext ctx, jobject param0);
jbool SM_mindustry_editor_EditorTool$5_lambda$touched$7_mindustry_game_Team_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_editor_EditorTool$5_lambda$touched$6_arc_func_Cons_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_editor_EditorTool$5_lambda$touched$5_mindustry_world_Tile(jcontext ctx, jobject param0);
jbool SM_mindustry_editor_EditorTool$5_lambda$touched$4_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_editor_EditorTool$5_lambda$touched$3_mindustry_world_Tile(jcontext ctx, jobject param0);
jbool SM_mindustry_editor_EditorTool$5_lambda$touched$2_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_editor_EditorTool$5_lambda$touched$1_mindustry_world_Tile(jcontext ctx, jobject param0);
jbool SM_mindustry_editor_EditorTool$5_lambda$touched$0_mindustry_world_Block_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
