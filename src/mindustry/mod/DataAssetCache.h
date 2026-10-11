#ifndef HEADER_mindustry_mod_DataAssetCache
#define HEADER_mindustry_mod_DataAssetCache

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_DataAssetCache {
	java_lang_Object parent;
	jref F_hashToFile;
} mindustry_mod_DataAssetCache;

extern Class class_mindustry_mod_DataAssetCache;

extern jobject SF_mindustry_mod_DataAssetCache_base32Alphabet;

#define VTABLE_mindustry_mod_DataAssetCache_hashCode_R_int 0
typedef jint (*func_mindustry_mod_DataAssetCache_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAssetCache_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_DataAssetCache_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataAssetCache_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_DataAssetCache_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAssetCache_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_DataAssetCache_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAssetCache_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_DataAssetCache_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAssetCache_finalize 5
typedef void (*func_mindustry_mod_DataAssetCache_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAssetCache_notify 6
typedef void (*func_mindustry_mod_DataAssetCache_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAssetCache_notifyAll 7
typedef void (*func_mindustry_mod_DataAssetCache_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAssetCache_wait 8
typedef void (*func_mindustry_mod_DataAssetCache_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAssetCache_wait_long 9
typedef void (*func_mindustry_mod_DataAssetCache_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_DataAssetCache_wait_long_int 10
typedef void (*func_mindustry_mod_DataAssetCache_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_DataAssetCache_load 11
typedef void (*func_mindustry_mod_DataAssetCache_load)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_DataAssetCache_addOverride_java_lang_String_arc_files_Fi 12
typedef void (*func_mindustry_mod_DataAssetCache_addOverride_java_lang_String_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte 13
typedef jobject (*func_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean 14
typedef jbool (*func_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi 15
typedef jobject (*func_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_DataAssetCache_get_Array1_byte_R_arc_files_Fi 16
typedef jobject (*func_mindustry_mod_DataAssetCache_get_Array1_byte_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_mod_DataAssetCache(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_DataAssetCache(jcontext ctx);
void init_mindustry_mod_DataAssetCache(jcontext ctx, jobject self);
void M_mindustry_mod_DataAssetCache_load(jcontext ctx, jobject self);
void M_mindustry_mod_DataAssetCache_addOverride_java_lang_String_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_mod_DataAssetCache_add_Array1_byte_R_Array1_byte(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_mod_DataAssetCache_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_DataAssetCache_get_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_DataAssetCache_get_Array1_byte_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject SM_mindustry_mod_DataAssetCache_encodeHash_Array1_byte_R_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
