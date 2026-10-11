#ifndef HEADER_arc_Settings
#define HEADER_arc_Settings

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Settings {
	java_lang_Object parent;
	jref F_dataDirectory;
	jref F_appName;
	jref F_defaults;
	jref F_values;
	jbool F_modified;
	jref F_errorHandler;
	jbool F_hasErrored;
	jbool F_shouldAutosave;
	jbool F_loaded;
	jbool F_writeCompressed;
	jlong F_lastBackupTime;
	jref F_executor;
	jref F_byteStream;
	jref F_byteInputStream;
	jref F_ureader;
	jref F_json;
} arc_Settings;

extern Class class_arc_Settings;

extern jbyte SF_arc_Settings_typeBool;
extern jbyte SF_arc_Settings_typeInt;
extern jbyte SF_arc_Settings_typeLong;
extern jbyte SF_arc_Settings_typeFloat;
extern jbyte SF_arc_Settings_typeString;
extern jbyte SF_arc_Settings_typeBinary;
extern jint SF_arc_Settings_maxBackups;
extern jint SF_arc_Settings_minBackupIntervalMs;

#define VTABLE_arc_Settings_hashCode_R_int 0
typedef jint (*func_arc_Settings_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_Settings_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_clone_R_java_lang_Object 2
typedef jobject (*func_arc_Settings_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_Settings_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_toString_R_java_lang_String 4
typedef jobject (*func_arc_Settings_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_finalize 5
typedef void (*func_arc_Settings_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_notify 6
typedef void (*func_arc_Settings_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_notifyAll 7
typedef void (*func_arc_Settings_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_wait 8
typedef void (*func_arc_Settings_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_wait_long 9
typedef void (*func_arc_Settings_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_Settings_wait_long_int 10
typedef void (*func_arc_Settings_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_Settings_setJson_arc_util_serialization_Json 11
typedef void (*func_arc_Settings_setJson_arc_util_serialization_Json)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_setCompressed_boolean 12
typedef void (*func_arc_Settings_setCompressed_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_Settings_getAppName_R_java_lang_String 13
typedef jobject (*func_arc_Settings_getAppName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_setAppName_java_lang_String 14
typedef void (*func_arc_Settings_setAppName_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_setErrorHandler_arc_func_Cons 15
typedef void (*func_arc_Settings_setErrorHandler_arc_func_Cons)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_setAutosave_boolean 16
typedef void (*func_arc_Settings_setAutosave_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_arc_Settings_modified_R_boolean 17
typedef jbool (*func_arc_Settings_modified_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_load 18
typedef void (*func_arc_Settings_load)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_forceSave 19
typedef void (*func_arc_Settings_forceSave)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_manualSave 20
typedef void (*func_arc_Settings_manualSave)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_autosave 21
typedef void (*func_arc_Settings_autosave)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_loadValues 22
typedef void (*func_arc_Settings_loadValues)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_loadValues_arc_files_Fi 23
typedef void (*func_arc_Settings_loadValues_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_saveValues 24
typedef void (*func_arc_Settings_saveValues)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_getSettingsFile_R_arc_files_Fi 25
typedef jobject (*func_arc_Settings_getSettingsFile_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_getBackupFolder_R_arc_files_Fi 26
typedef jobject (*func_arc_Settings_getBackupFolder_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_getBackupSettingsFile_R_arc_files_Fi 27
typedef jobject (*func_arc_Settings_getBackupSettingsFile_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_getDataDirectory_R_arc_files_Fi 28
typedef jobject (*func_arc_Settings_getDataDirectory_R_arc_files_Fi)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_setDataDirectory_arc_files_Fi 29
typedef void (*func_arc_Settings_setDataDirectory_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_defaults_Array1_java_lang_Object 30
typedef void (*func_arc_Settings_defaults_Array1_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_clear 31
typedef void (*func_arc_Settings_clear)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_getDefault_java_lang_String_R_java_lang_Object 32
typedef jobject (*func_arc_Settings_getDefault_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_has_java_lang_String_R_boolean 33
typedef jbool (*func_arc_Settings_has_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object 34
typedef jobject (*func_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_Settings_isModified_R_boolean 35
typedef jbool (*func_arc_Settings_isModified_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Object 36
typedef void (*func_arc_Settings_putJson_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object 37
typedef void (*func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object 38
typedef jobject (*func_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
#define VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object 39
typedef jobject (*func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_Settings_getFloat_java_lang_String_float_R_float 40
typedef jfloat (*func_arc_Settings_getFloat_java_lang_String_float_R_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_Settings_getLong_java_lang_String_long_R_long 41
typedef jlong (*func_arc_Settings_getLong_java_lang_String_long_R_long)(jcontext ctx, jobject self, jobject param0, jlong param1);
#define VTABLE_arc_Settings_getLong_java_lang_String_R_java_lang_Long 42
typedef jobject (*func_arc_Settings_getLong_java_lang_String_R_java_lang_Long)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_getInt_java_lang_String_int_R_int 43
typedef jint (*func_arc_Settings_getInt_java_lang_String_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean 44
typedef jbool (*func_arc_Settings_getBool_java_lang_String_boolean_R_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_arc_Settings_getBytes_java_lang_String_Array1_byte_R_Array1_byte 45
typedef jobject (*func_arc_Settings_getBytes_java_lang_String_Array1_byte_R_Array1_byte)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String 46
typedef jobject (*func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_Settings_getFloat_java_lang_String_R_float 47
typedef jfloat (*func_arc_Settings_getFloat_java_lang_String_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_getInt_java_lang_String_R_int 48
typedef jint (*func_arc_Settings_getInt_java_lang_String_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_getBool_java_lang_String_R_boolean 49
typedef jbool (*func_arc_Settings_getBool_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable 50
typedef void (*func_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_Settings_getBoolOnce_java_lang_String_R_boolean 51
typedef jbool (*func_arc_Settings_getBoolOnce_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_getBytes_java_lang_String_R_Array1_byte 52
typedef jobject (*func_arc_Settings_getBytes_java_lang_String_R_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_getString_java_lang_String_R_java_lang_String 53
typedef jobject (*func_arc_Settings_getString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_putAll_arc_struct_ObjectMap 54
typedef void (*func_arc_Settings_putAll_arc_struct_ObjectMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_toggle_java_lang_String 55
typedef void (*func_arc_Settings_toggle_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_putInt_java_lang_String_int 56
typedef void (*func_arc_Settings_putInt_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_arc_Settings_putFloat_java_lang_String_float 57
typedef void (*func_arc_Settings_putFloat_java_lang_String_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_arc_Settings_put_java_lang_String_java_lang_Object 58
typedef void (*func_arc_Settings_put_java_lang_String_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_Settings_remove_java_lang_String 59
typedef void (*func_arc_Settings_remove_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_Settings_keys_R_java_lang_Iterable 60
typedef jobject (*func_arc_Settings_keys_R_java_lang_Iterable)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_keySize_R_int 61
typedef jint (*func_arc_Settings_keySize_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_Settings_lambda$saveValues$0_arc_files_Fi 62
typedef void (*func_arc_Settings_lambda$saveValues$0_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);

void mark_arc_Settings(jobject object, jint mark, jint depth);
void clinit_arc_Settings(jcontext ctx);
void init_arc_Settings(jcontext ctx, jobject self);
void M_arc_Settings_setJson_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0);
void M_arc_Settings_setCompressed_boolean(jcontext ctx, jobject self, jbool param0);
jobject M_arc_Settings_getAppName_R_java_lang_String(jcontext ctx, jobject self);
void M_arc_Settings_setAppName_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_Settings_setErrorHandler_arc_func_Cons(jcontext ctx, jobject self, jobject param0);
void M_arc_Settings_setAutosave_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_arc_Settings_modified_R_boolean(jcontext ctx, jobject self);
void M_arc_Settings_load(jcontext ctx, jobject self);
void M_arc_Settings_forceSave(jcontext ctx, jobject self);
void M_arc_Settings_manualSave(jcontext ctx, jobject self);
void M_arc_Settings_autosave(jcontext ctx, jobject self);
void M_arc_Settings_loadValues(jcontext ctx, jobject self);
void M_arc_Settings_loadValues_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_arc_Settings_saveValues(jcontext ctx, jobject self);
jobject M_arc_Settings_getSettingsFile_R_arc_files_Fi(jcontext ctx, jobject self);
jobject M_arc_Settings_getBackupFolder_R_arc_files_Fi(jcontext ctx, jobject self);
jobject M_arc_Settings_getBackupSettingsFile_R_arc_files_Fi(jcontext ctx, jobject self);
jobject M_arc_Settings_getDataDirectory_R_arc_files_Fi(jcontext ctx, jobject self);
void M_arc_Settings_setDataDirectory_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
void M_arc_Settings_defaults_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_arc_Settings_clear(jcontext ctx, jobject self);
jobject M_arc_Settings_getDefault_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_arc_Settings_has_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_Settings_isModified_R_boolean(jcontext ctx, jobject self);
void M_arc_Settings_putJson_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
jobject M_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jfloat M_arc_Settings_getFloat_java_lang_String_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jlong M_arc_Settings_getLong_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1);
jobject M_arc_Settings_getLong_java_lang_String_R_java_lang_Long(jcontext ctx, jobject self, jobject param0);
jint M_arc_Settings_getInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1);
jbool M_arc_Settings_getBool_java_lang_String_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_arc_Settings_getBytes_java_lang_String_Array1_byte_R_Array1_byte(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jfloat M_arc_Settings_getFloat_java_lang_String_R_float(jcontext ctx, jobject self, jobject param0);
jint M_arc_Settings_getInt_java_lang_String_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_arc_Settings_getBool_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
void M_arc_Settings_getBoolOnce_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_Settings_getBoolOnce_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Settings_getBytes_java_lang_String_R_Array1_byte(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Settings_getString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_Settings_putAll_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0);
void M_arc_Settings_toggle_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_Settings_putInt_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_arc_Settings_putFloat_java_lang_String_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
void M_arc_Settings_put_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_Settings_remove_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Settings_keys_R_java_lang_Iterable(jcontext ctx, jobject self);
jint M_arc_Settings_keySize_R_int(jcontext ctx, jobject self);
void M_arc_Settings_lambda$saveValues$0_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jlong SM_arc_Settings_lambda$saveValues$1_arc_files_Fi_R_long(jcontext ctx, jobject param0);
jlong SM_arc_Settings_lambda$loadValues$0_arc_files_Fi_R_long(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
