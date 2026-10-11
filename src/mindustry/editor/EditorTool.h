#ifndef HEADER_mindustry_editor_EditorTool
#define HEADER_mindustry_editor_EditorTool

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_EditorTool {
	java_lang_Enum parent;
	jref F_altModes;
	jref F_key;
	jint F_mode;
	jbool F_edit;
	jbool F_draggable;
} mindustry_editor_EditorTool;

extern Class class_mindustry_editor_EditorTool;

extern jobject SF_mindustry_editor_EditorTool_zoom;
extern jobject SF_mindustry_editor_EditorTool_pick;
extern jobject SF_mindustry_editor_EditorTool_line;
extern jobject SF_mindustry_editor_EditorTool_pencil;
extern jobject SF_mindustry_editor_EditorTool_eraser;
extern jobject SF_mindustry_editor_EditorTool_fill;
extern jobject SF_mindustry_editor_EditorTool_spray;
extern jobject SF_mindustry_editor_EditorTool_all;
extern jobject SF_mindustry_editor_EditorTool_$VALUES;

#define VTABLE_mindustry_editor_EditorTool_hashCode_R_int 0
typedef jint (*func_mindustry_editor_EditorTool_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_EditorTool_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_EditorTool_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_EditorTool_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_EditorTool_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_finalize 5
typedef void (*func_mindustry_editor_EditorTool_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_notify 6
typedef void (*func_mindustry_editor_EditorTool_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_notifyAll 7
typedef void (*func_mindustry_editor_EditorTool_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_wait 8
typedef void (*func_mindustry_editor_EditorTool_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_wait_long 9
typedef void (*func_mindustry_editor_EditorTool_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_EditorTool_wait_long_int 10
typedef void (*func_mindustry_editor_EditorTool_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_EditorTool_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_editor_EditorTool_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_editor_EditorTool_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_EditorTool_name_R_java_lang_String 13
typedef jobject (*func_mindustry_editor_EditorTool_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_ordinal_R_int 14
typedef jint (*func_mindustry_editor_EditorTool_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_editor_EditorTool_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_EditorTool_touched_int_int 16
typedef void (*func_mindustry_editor_EditorTool_touched_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_editor_EditorTool_touchedLine_int_int_int_int 17
typedef void (*func_mindustry_editor_EditorTool_touchedLine_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

void mark_mindustry_editor_EditorTool(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_EditorTool(jcontext ctx);
jobject SM_mindustry_editor_EditorTool_values_R_Array1_mindustry_editor_EditorTool(jcontext ctx);
jobject SM_mindustry_editor_EditorTool_valueOf_java_lang_String_R_mindustry_editor_EditorTool(jcontext ctx, jobject param0);
void init_mindustry_editor_EditorTool_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void init_mindustry_editor_EditorTool_java_lang_String_int_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
void init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3);
void M_mindustry_editor_EditorTool_touched_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_editor_EditorTool_touchedLine_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
jobject SM_mindustry_editor_EditorTool_$values_R_Array1_mindustry_editor_EditorTool(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
