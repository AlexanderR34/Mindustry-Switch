#ifndef HEADER_mindustry_editor_EditorTool$6
#define HEADER_mindustry_editor_EditorTool$6

#include "Clearwing.h"
#include "mindustry/editor/EditorTool.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_EditorTool$6 {
	mindustry_editor_EditorTool parent;
	jdouble F_chance;
} mindustry_editor_EditorTool$6;

extern Class class_mindustry_editor_EditorTool$6;


#define VTABLE_mindustry_editor_EditorTool$6_hashCode_R_int 0
typedef jint (*func_mindustry_editor_EditorTool$6_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_EditorTool$6_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$6_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_EditorTool$6_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_EditorTool$6_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_EditorTool$6_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_finalize 5
typedef void (*func_mindustry_editor_EditorTool$6_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_notify 6
typedef void (*func_mindustry_editor_EditorTool$6_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_notifyAll 7
typedef void (*func_mindustry_editor_EditorTool$6_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_wait 8
typedef void (*func_mindustry_editor_EditorTool$6_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_wait_long 9
typedef void (*func_mindustry_editor_EditorTool$6_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_EditorTool$6_wait_long_int 10
typedef void (*func_mindustry_editor_EditorTool$6_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_EditorTool$6_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_editor_EditorTool$6_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$6_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_editor_EditorTool$6_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$6_name_R_java_lang_String 13
typedef jobject (*func_mindustry_editor_EditorTool$6_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_ordinal_R_int 14
typedef jint (*func_mindustry_editor_EditorTool$6_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_editor_EditorTool$6_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$6_touched_int_int 16
typedef void (*func_mindustry_editor_EditorTool$6_touched_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorTool$6_touchedLine_int_int_int_int 17
typedef void (*func_mindustry_editor_EditorTool$6_touchedLine_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_editor_EditorTool$6_lambda$touched$2_mindustry_world_Tile_R_boolean 18
typedef jbool (*func_mindustry_editor_EditorTool$6_lambda$touched$2_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$6_lambda$touched$1_mindustry_world_Tile_R_boolean 19
typedef jbool (*func_mindustry_editor_EditorTool$6_lambda$touched$1_mindustry_world_Tile_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$6_lambda$touched$0_mindustry_world_Tile 20
typedef void (*func_mindustry_editor_EditorTool$6_lambda$touched$0_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_editor_EditorTool$6(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_EditorTool$6(jcontext ctx);
void init_mindustry_editor_EditorTool$6_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void M_mindustry_editor_EditorTool$6_touched_int_int(jcontext ctx, jobject self, jint param0, jint param1);
jbool M_mindustry_editor_EditorTool$6_lambda$touched$2_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_editor_EditorTool$6_lambda$touched$1_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_mindustry_editor_EditorTool$6_lambda$touched$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
