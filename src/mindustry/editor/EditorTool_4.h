#ifndef HEADER_mindustry_editor_EditorTool$4
#define HEADER_mindustry_editor_EditorTool$4

#include "Clearwing.h"
#include "mindustry/editor/EditorTool.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_EditorTool$4 {
	mindustry_editor_EditorTool parent;
} mindustry_editor_EditorTool$4;

extern Class class_mindustry_editor_EditorTool$4;


#define VTABLE_mindustry_editor_EditorTool$4_hashCode_R_int 0
typedef jint (*func_mindustry_editor_EditorTool$4_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_EditorTool$4_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$4_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_EditorTool$4_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_EditorTool$4_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_EditorTool$4_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_finalize 5
typedef void (*func_mindustry_editor_EditorTool$4_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_notify 6
typedef void (*func_mindustry_editor_EditorTool$4_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_notifyAll 7
typedef void (*func_mindustry_editor_EditorTool$4_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_wait 8
typedef void (*func_mindustry_editor_EditorTool$4_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_wait_long 9
typedef void (*func_mindustry_editor_EditorTool$4_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_EditorTool$4_wait_long_int 10
typedef void (*func_mindustry_editor_EditorTool$4_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_EditorTool$4_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_editor_EditorTool$4_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$4_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_editor_EditorTool$4_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$4_name_R_java_lang_String 13
typedef jobject (*func_mindustry_editor_EditorTool$4_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_ordinal_R_int 14
typedef jint (*func_mindustry_editor_EditorTool$4_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_editor_EditorTool$4_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$4_touched_int_int 16
typedef void (*func_mindustry_editor_EditorTool$4_touched_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorTool$4_touchedLine_int_int_int_int 17
typedef void (*func_mindustry_editor_EditorTool$4_touchedLine_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_editor_EditorTool$4_lambda$touched$0_mindustry_world_Tile 18
typedef void (*func_mindustry_editor_EditorTool$4_lambda$touched$0_mindustry_world_Tile)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_editor_EditorTool$4(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_EditorTool$4(jcontext ctx);
void init_mindustry_editor_EditorTool$4_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void M_mindustry_editor_EditorTool$4_touched_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_EditorTool$4_lambda$touched$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
