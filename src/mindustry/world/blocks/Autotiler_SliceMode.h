#ifndef HEADER_mindustry_world_blocks_Autotiler$SliceMode
#define HEADER_mindustry_world_blocks_Autotiler$SliceMode

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_blocks_Autotiler$SliceMode {
	java_lang_Enum parent;
} mindustry_world_blocks_Autotiler$SliceMode;

extern Class class_mindustry_world_blocks_Autotiler$SliceMode;

extern jobject SF_mindustry_world_blocks_Autotiler$SliceMode_none;
extern jobject SF_mindustry_world_blocks_Autotiler$SliceMode_bottom;
extern jobject SF_mindustry_world_blocks_Autotiler$SliceMode_top;
extern jobject SF_mindustry_world_blocks_Autotiler$SliceMode_$VALUES;

#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_hashCode_R_int 0
typedef jint (*func_mindustry_world_blocks_Autotiler$SliceMode_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_blocks_Autotiler$SliceMode_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_blocks_Autotiler$SliceMode_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_blocks_Autotiler$SliceMode_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_blocks_Autotiler$SliceMode_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_finalize 5
typedef void (*func_mindustry_world_blocks_Autotiler$SliceMode_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_notify 6
typedef void (*func_mindustry_world_blocks_Autotiler$SliceMode_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_notifyAll 7
typedef void (*func_mindustry_world_blocks_Autotiler$SliceMode_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_wait 8
typedef void (*func_mindustry_world_blocks_Autotiler$SliceMode_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_wait_long 9
typedef void (*func_mindustry_world_blocks_Autotiler$SliceMode_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_wait_long_int 10
typedef void (*func_mindustry_world_blocks_Autotiler$SliceMode_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_world_blocks_Autotiler$SliceMode_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_world_blocks_Autotiler$SliceMode_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_name_R_java_lang_String 13
typedef jobject (*func_mindustry_world_blocks_Autotiler$SliceMode_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_ordinal_R_int 14
typedef jint (*func_mindustry_world_blocks_Autotiler$SliceMode_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_blocks_Autotiler$SliceMode_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_world_blocks_Autotiler$SliceMode_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);

void mark_mindustry_world_blocks_Autotiler$SliceMode(jobject object, jint mark, jint depth);
void clinit_mindustry_world_blocks_Autotiler$SliceMode(jcontext ctx);
jobject SM_mindustry_world_blocks_Autotiler$SliceMode_values_R_Array1_mindustry_world_blocks_Autotiler$SliceMode(jcontext ctx);
jobject SM_mindustry_world_blocks_Autotiler$SliceMode_valueOf_java_lang_String_R_mindustry_world_blocks_Autotiler$SliceMode(jcontext ctx, jobject param0);
void init_mindustry_world_blocks_Autotiler$SliceMode_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject SM_mindustry_world_blocks_Autotiler$SliceMode_$values_R_Array1_mindustry_world_blocks_Autotiler$SliceMode(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
