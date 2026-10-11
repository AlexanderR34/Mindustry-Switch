#ifndef HEADER_mindustry_ui_dialogs_PlanetDialog$Mode
#define HEADER_mindustry_ui_dialogs_PlanetDialog$Mode

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ui_dialogs_PlanetDialog$Mode {
	java_lang_Enum parent;
} mindustry_ui_dialogs_PlanetDialog$Mode;

extern Class class_mindustry_ui_dialogs_PlanetDialog$Mode;

extern jobject SF_mindustry_ui_dialogs_PlanetDialog$Mode_look;
extern jobject SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
extern jobject SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
extern jobject SF_mindustry_ui_dialogs_PlanetDialog$Mode_$VALUES;

#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_hashCode_R_int 0
typedef jint (*func_mindustry_ui_dialogs_PlanetDialog$Mode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ui_dialogs_PlanetDialog$Mode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$Mode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$Mode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$Mode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_finalize 5
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$Mode_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_notify 6
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$Mode_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_notifyAll 7
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$Mode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_wait 8
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$Mode_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_wait_long 9
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$Mode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_wait_long_int 10
typedef void (*func_mindustry_ui_dialogs_PlanetDialog$Mode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_ui_dialogs_PlanetDialog$Mode_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_ui_dialogs_PlanetDialog$Mode_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_name_R_java_lang_String 13
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$Mode_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_ordinal_R_int 14
typedef jint (*func_mindustry_ui_dialogs_PlanetDialog$Mode_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ui_dialogs_PlanetDialog$Mode_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_ui_dialogs_PlanetDialog$Mode_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_ui_dialogs_PlanetDialog$Mode(jobject object, jint mark, jint depth);
void clinit_mindustry_ui_dialogs_PlanetDialog$Mode(jcontext ctx);
jobject SM_mindustry_ui_dialogs_PlanetDialog$Mode_values_R_Array1_mindustry_ui_dialogs_PlanetDialog$Mode(jcontext ctx);
jobject SM_mindustry_ui_dialogs_PlanetDialog$Mode_valueOf_java_lang_String_R_mindustry_ui_dialogs_PlanetDialog$Mode(jcontext ctx, jobject param0);
void init_mindustry_ui_dialogs_PlanetDialog$Mode_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_ui_dialogs_PlanetDialog$Mode_$values_R_Array1_mindustry_ui_dialogs_PlanetDialog$Mode(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
