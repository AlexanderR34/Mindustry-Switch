#ifndef HEADER_mindustry_mod_DataPatcher$1
#define HEADER_mindustry_mod_DataPatcher$1

#include "Clearwing.h"
#include "mindustry/mod/Mods_ModMeta.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_DataPatcher$1 {
	mindustry_mod_Mods$ModMeta parent;
} mindustry_mod_DataPatcher$1;

extern Class class_mindustry_mod_DataPatcher$1;


#define VTABLE_mindustry_mod_DataPatcher$1_hashCode_R_int 0
typedef jint (*func_mindustry_mod_DataPatcher$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_DataPatcher$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataPatcher$1_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_DataPatcher$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_DataPatcher$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_DataPatcher$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_finalize 5
typedef void (*func_mindustry_mod_DataPatcher$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_notify 6
typedef void (*func_mindustry_mod_DataPatcher$1_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_notifyAll 7
typedef void (*func_mindustry_mod_DataPatcher$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_wait 8
typedef void (*func_mindustry_mod_DataPatcher$1_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_wait_long 9
typedef void (*func_mindustry_mod_DataPatcher$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_DataPatcher$1_wait_long_int 10
typedef void (*func_mindustry_mod_DataPatcher$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_DataPatcher$1_isBlacklisted_R_boolean 11
typedef jbool (*func_mindustry_mod_DataPatcher$1_isBlacklisted_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_shortDescription_R_java_lang_String 12
typedef jobject (*func_mindustry_mod_DataPatcher$1_shortDescription_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_cleanup 13
typedef void (*func_mindustry_mod_DataPatcher$1_cleanup)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataPatcher$1_getMinMajor_R_int 14
typedef jint (*func_mindustry_mod_DataPatcher$1_getMinMajor_R_int)(jcontext ctx, jobject self);

void mark_mindustry_mod_DataPatcher$1(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_DataPatcher$1(jcontext ctx);
void init_mindustry_mod_DataPatcher$1(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
