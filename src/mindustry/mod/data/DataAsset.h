#ifndef HEADER_mindustry_mod_data_DataAsset
#define HEADER_mindustry_mod_data_DataAsset

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_data_DataAsset {
	java_lang_Object parent;
	jref F_overrideCacheFile;
	jref F_path;
	jref F_name;
	jref F_byteHash;
	jref F_stringHash;
} mindustry_mod_data_DataAsset;

extern Class class_mindustry_mod_data_DataAsset;


#define VTABLE_mindustry_mod_data_DataAsset_hashCode_R_int 0
typedef jint (*func_mindustry_mod_data_DataAsset_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_data_DataAsset_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_data_DataAsset_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_data_DataAsset_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_data_DataAsset_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_data_DataAsset_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_finalize 5
typedef void (*func_mindustry_mod_data_DataAsset_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_notify 6
typedef void (*func_mindustry_mod_data_DataAsset_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_notifyAll 7
typedef void (*func_mindustry_mod_data_DataAsset_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_wait 8
typedef void (*func_mindustry_mod_data_DataAsset_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_wait_long 9
typedef void (*func_mindustry_mod_data_DataAsset_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_data_DataAsset_wait_long_int 10
typedef void (*func_mindustry_mod_data_DataAsset_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_data_DataAsset_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_mod_data_DataAsset_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_data_DataAsset_updateData_Array1_byte 12
typedef void (*func_mindustry_mod_data_DataAsset_updateData_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_data_DataAsset_setHash_Array1_byte 13
typedef void (*func_mindustry_mod_data_DataAsset_setHash_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_data_DataAsset_setPath_java_lang_String 14
typedef void (*func_mindustry_mod_data_DataAsset_setPath_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType 15
typedef jobject (*func_mindustry_mod_data_DataAsset_getType_R_mindustry_mod_data_DataAssetType)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_getFullPath_R_java_lang_String 16
typedef jobject (*func_mindustry_mod_data_DataAsset_getFullPath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_getData_R_Array1_byte 17
typedef jobject (*func_mindustry_mod_data_DataAsset_getData_R_Array1_byte)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean 18
typedef jbool (*func_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_isCached_R_boolean 19
typedef jbool (*func_mindustry_mod_data_DataAsset_isCached_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi 20
typedef jobject (*func_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi 21
typedef jobject (*func_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAsset_readFromZip_java_lang_String_arc_files_Fi 22
typedef void (*func_mindustry_mod_data_DataAsset_readFromZip_java_lang_String_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_data_DataAsset_readOverride_java_lang_String_arc_files_Fi 23
typedef void (*func_mindustry_mod_data_DataAsset_readOverride_java_lang_String_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_mod_data_DataAsset_read_java_io_DataInput 24
typedef void (*func_mindustry_mod_data_DataAsset_read_java_io_DataInput)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_data_DataAsset_write_java_io_DataOutput 25
typedef void (*func_mindustry_mod_data_DataAsset_write_java_io_DataOutput)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_data_DataAsset_compareTo_mindustry_mod_data_DataAsset_R_int 26
typedef jint (*func_mindustry_mod_data_DataAsset_compareTo_mindustry_mod_data_DataAsset_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_mod_data_DataAsset(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_data_DataAsset(jcontext ctx);
void init_mindustry_mod_data_DataAsset(jcontext ctx, jobject self);
void M_mindustry_mod_data_DataAsset_updateData_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_data_DataAsset_setHash_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_data_DataAsset_setPath_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_data_DataAsset_getFullPath_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_mod_data_DataAsset_getData_R_Array1_byte(jcontext ctx, jobject self);
jbool M_mindustry_mod_data_DataAsset_isAlwaysEmbedded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_mod_data_DataAsset_isCached_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_mod_data_DataAsset_getCacheFileNoNull_R_arc_files_Fi(jcontext ctx, jobject self);
jobject M_mindustry_mod_data_DataAsset_getCacheFile_R_arc_files_Fi(jcontext ctx, jobject self);
void M_mindustry_mod_data_DataAsset_readFromZip_java_lang_String_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_mod_data_DataAsset_readOverride_java_lang_String_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_mindustry_mod_data_DataAsset_read_java_io_DataInput(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_data_DataAsset_write_java_io_DataOutput(jcontext ctx, jobject self, jobject param0);
jbool SM_mindustry_mod_data_DataAsset_validPath_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jobject M_mindustry_mod_data_DataAsset_toString_R_java_lang_String(jcontext ctx, jobject self);
jint M_mindustry_mod_data_DataAsset_compareTo_mindustry_mod_data_DataAsset_R_int(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_mod_data_DataAsset_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
