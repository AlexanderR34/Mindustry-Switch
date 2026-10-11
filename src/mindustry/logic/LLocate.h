#ifndef HEADER_mindustry_logic_LLocate
#define HEADER_mindustry_logic_LLocate

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_logic_LLocate {
	java_lang_Enum parent;
} mindustry_logic_LLocate;

extern Class class_mindustry_logic_LLocate;

extern jobject SF_mindustry_logic_LLocate_ore;
extern jobject SF_mindustry_logic_LLocate_building;
extern jobject SF_mindustry_logic_LLocate_spawn;
extern jobject SF_mindustry_logic_LLocate_damaged;
extern jobject SF_mindustry_logic_LLocate_all;
extern jobject SF_mindustry_logic_LLocate_$VALUES;

#define VTABLE_mindustry_logic_LLocate_hashCode_R_int 0
typedef jint (*func_mindustry_logic_LLocate_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LLocate_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_logic_LLocate_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LLocate_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_logic_LLocate_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LLocate_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_logic_LLocate_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LLocate_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_logic_LLocate_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LLocate_finalize 5
typedef void (*func_mindustry_logic_LLocate_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LLocate_notify 6
typedef void (*func_mindustry_logic_LLocate_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LLocate_notifyAll 7
typedef void (*func_mindustry_logic_LLocate_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LLocate_wait 8
typedef void (*func_mindustry_logic_LLocate_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LLocate_wait_long 9
typedef void (*func_mindustry_logic_LLocate_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_logic_LLocate_wait_long_int 10
typedef void (*func_mindustry_logic_LLocate_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_logic_LLocate_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_logic_LLocate_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LLocate_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_logic_LLocate_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_logic_LLocate_name_R_java_lang_String 13
typedef jobject (*func_mindustry_logic_LLocate_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LLocate_ordinal_R_int 14
typedef jint (*func_mindustry_logic_LLocate_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_logic_LLocate_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_logic_LLocate_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_logic_LLocate(jobject object, jint mark, jint depth);
void clinit_mindustry_logic_LLocate(jcontext ctx);
jobject SM_mindustry_logic_LLocate_values_R_Array1_mindustry_logic_LLocate(jcontext ctx);
jobject SM_mindustry_logic_LLocate_valueOf_java_lang_String_R_mindustry_logic_LLocate(jcontext ctx, jobject param0);
void init_mindustry_logic_LLocate_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_logic_LLocate_$values_R_Array1_mindustry_logic_LLocate(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
