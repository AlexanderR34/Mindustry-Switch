#ifndef HEADER_mindustry_editor_EditorTool$1
#define HEADER_mindustry_editor_EditorTool$1

#include "Clearwing.h"
#include "mindustry/editor/EditorTool.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_EditorTool$1 {
	mindustry_editor_EditorTool parent;
} mindustry_editor_EditorTool$1;

extern Class class_mindustry_editor_EditorTool$1;


#define VTABLE_mindustry_editor_EditorTool$1_hashCode_R_int 0
typedef jint (*func_mindustry_editor_EditorTool$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_EditorTool$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_EditorTool$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_EditorTool$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_EditorTool$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_finalize 5
typedef void (*func_mindustry_editor_EditorTool$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_notify 6
typedef void (*func_mindustry_editor_EditorTool$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_notifyAll 7
typedef void (*func_mindustry_editor_EditorTool$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_wait 8
typedef void (*func_mindustry_editor_EditorTool$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_wait_long 9
typedef void (*func_mindustry_editor_EditorTool$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_EditorTool$1_wait_long_int 10
typedef void (*func_mindustry_editor_EditorTool$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_EditorTool$1_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_editor_EditorTool$1_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$1_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_editor_EditorTool$1_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool$1_name_R_java_lang_String 13
typedef jobject (*func_mindustry_editor_EditorTool$1_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_ordinal_R_int 14
typedef jint (*func_mindustry_editor_EditorTool$1_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_editor_EditorTool$1_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool$1_touched_int_int 16
typedef void (*func_mindustry_editor_EditorTool$1_touched_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorTool$1_touchedLine_int_int_int_int 17
typedef void (*func_mindustry_editor_EditorTool$1_touchedLine_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

void mark_mindustry_editor_EditorTool$1(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_EditorTool$1(jcontext ctx);
void init_mindustry_editor_EditorTool$1_java_lang_String_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void M_mindustry_editor_EditorTool$1_touched_int_int(jcontext ctx, jobject self, jint param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
