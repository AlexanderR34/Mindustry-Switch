#ifndef HEADER_mindustry_mod_data_DataAssetType
#define HEADER_mindustry_mod_data_DataAssetType

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_data_DataAssetType {
	java_lang_Enum parent;
	jref F_folder;
	jref F_extensions;
	jref F_constructor;
	jbool F_embedded;
} mindustry_mod_data_DataAssetType;

extern Class class_mindustry_mod_data_DataAssetType;

extern jobject SF_mindustry_mod_data_DataAssetType_patch;
extern jobject SF_mindustry_mod_data_DataAssetType_content;
extern jobject SF_mindustry_mod_data_DataAssetType_bundle;
extern jobject SF_mindustry_mod_data_DataAssetType_image;
extern jobject SF_mindustry_mod_data_DataAssetType_sound;
extern jobject SF_mindustry_mod_data_DataAssetType_music;
extern jobject SF_mindustry_mod_data_DataAssetType_all;
extern jobject SF_mindustry_mod_data_DataAssetType_$VALUES;

#define VTABLE_mindustry_mod_data_DataAssetType_hashCode_R_int 0
typedef jint (*func_mindustry_mod_data_DataAssetType_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_data_DataAssetType_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_data_DataAssetType_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_data_DataAssetType_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_data_DataAssetType_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_data_DataAssetType_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_finalize 5
typedef void (*func_mindustry_mod_data_DataAssetType_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_notify 6
typedef void (*func_mindustry_mod_data_DataAssetType_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_notifyAll 7
typedef void (*func_mindustry_mod_data_DataAssetType_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_wait 8
typedef void (*func_mindustry_mod_data_DataAssetType_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_wait_long 9
typedef void (*func_mindustry_mod_data_DataAssetType_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_data_DataAssetType_wait_long_int 10
typedef void (*func_mindustry_mod_data_DataAssetType_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_data_DataAssetType_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_mod_data_DataAssetType_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_data_DataAssetType_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_mod_data_DataAssetType_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_data_DataAssetType_name_R_java_lang_String 13
typedef jobject (*func_mindustry_mod_data_DataAssetType_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_ordinal_R_int 14
typedef jint (*func_mindustry_mod_data_DataAssetType_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_mod_data_DataAssetType_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset 16
typedef jobject (*func_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_data_DataAssetType_localized_R_java_lang_String 17
typedef jobject (*func_mindustry_mod_data_DataAssetType_localized_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_mod_data_DataAssetType(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_data_DataAssetType(jcontext ctx);
jobject SM_mindustry_mod_data_DataAssetType_values_R_Array1_mindustry_mod_data_DataAssetType(jcontext ctx);
jobject SM_mindustry_mod_data_DataAssetType_valueOf_java_lang_String_R_mindustry_mod_data_DataAssetType(jcontext ctx, jobject param0);
void init_mindustry_mod_data_DataAssetType_java_lang_String_int_java_lang_String_arc_struct_Seq_arc_func_Prov_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3, jobject param4, jbool param5);
jobject M_mindustry_mod_data_DataAssetType_create_R_mindustry_mod_data_DataAsset(jcontext ctx, jobject self);
jobject M_mindustry_mod_data_DataAssetType_localized_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_mindustry_mod_data_DataAssetType_$values_R_Array1_mindustry_mod_data_DataAssetType(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
