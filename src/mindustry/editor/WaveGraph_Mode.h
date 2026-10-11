#ifndef HEADER_mindustry_editor_WaveGraph$Mode
#define HEADER_mindustry_editor_WaveGraph$Mode

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_editor_WaveGraph$Mode {
	java_lang_Enum parent;
} mindustry_editor_WaveGraph$Mode;

extern Class class_mindustry_editor_WaveGraph$Mode;

extern jobject SF_mindustry_editor_WaveGraph$Mode_counts;
extern jobject SF_mindustry_editor_WaveGraph$Mode_totals;
extern jobject SF_mindustry_editor_WaveGraph$Mode_health;
extern jobject SF_mindustry_editor_WaveGraph$Mode_all;
extern jobject SF_mindustry_editor_WaveGraph$Mode_$VALUES;

#define VTABLE_mindustry_editor_WaveGraph$Mode_hashCode_R_int 0
typedef jint (*func_mindustry_editor_WaveGraph$Mode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveGraph$Mode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_editor_WaveGraph$Mode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_WaveGraph$Mode_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_editor_WaveGraph$Mode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveGraph$Mode_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_editor_WaveGraph$Mode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveGraph$Mode_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_editor_WaveGraph$Mode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveGraph$Mode_finalize 5
typedef void (*func_mindustry_editor_WaveGraph$Mode_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveGraph$Mode_notify 6
typedef void (*func_mindustry_editor_WaveGraph$Mode_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveGraph$Mode_notifyAll 7
typedef void (*func_mindustry_editor_WaveGraph$Mode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveGraph$Mode_wait 8
typedef void (*func_mindustry_editor_WaveGraph$Mode_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveGraph$Mode_wait_long 9
typedef void (*func_mindustry_editor_WaveGraph$Mode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_editor_WaveGraph$Mode_wait_long_int 10
typedef void (*func_mindustry_editor_WaveGraph$Mode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_editor_WaveGraph$Mode_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_editor_WaveGraph$Mode_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_WaveGraph$Mode_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_editor_WaveGraph$Mode_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_editor_WaveGraph$Mode_name_R_java_lang_String 13
typedef jobject (*func_mindustry_editor_WaveGraph$Mode_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveGraph$Mode_ordinal_R_int 14
typedef jint (*func_mindustry_editor_WaveGraph$Mode_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_editor_WaveGraph$Mode_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_editor_WaveGraph$Mode_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_editor_WaveGraph$Mode(jobject object, jint mark, jint depth);
void clinit_mindustry_editor_WaveGraph$Mode(jcontext ctx);
jobject SM_mindustry_editor_WaveGraph$Mode_values_R_Array1_mindustry_editor_WaveGraph$Mode(jcontext ctx);
jobject SM_mindustry_editor_WaveGraph$Mode_valueOf_java_lang_String_R_mindustry_editor_WaveGraph$Mode(jcontext ctx, jobject param0);
void init_mindustry_editor_WaveGraph$Mode_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_editor_WaveGraph$Mode_$values_R_Array1_mindustry_editor_WaveGraph$Mode(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
