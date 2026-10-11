#ifndef HEADER_java_security_Provider
#define HEADER_java_security_Provider

#include "Clearwing.h"
#include "java/util/Properties.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_security_Provider {
	java_util_Properties parent;
	jdouble F_version;
	jref F_name;
	jref F_versionStr;
	jref F_info;
} java_security_Provider;

extern Class class_java_security_Provider;


#define VTABLE_java_security_Provider_hashCode_R_int 0
typedef jint (*func_java_security_Provider_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_security_Provider_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_clone_R_java_lang_Object 2
typedef jobject (*func_java_security_Provider_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_getClass_R_java_lang_Class 3
typedef jobject (*func_java_security_Provider_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_toString_R_java_lang_String 4
typedef jobject (*func_java_security_Provider_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_finalize 5
typedef void (*func_java_security_Provider_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_notify 6
typedef void (*func_java_security_Provider_notify)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_notifyAll 7
typedef void (*func_java_security_Provider_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_wait 8
typedef void (*func_java_security_Provider_wait)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_wait_long 9
typedef void (*func_java_security_Provider_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_security_Provider_wait_long_int 10
typedef void (*func_java_security_Provider_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_security_Provider_clear 11
typedef void (*func_java_security_Provider_clear)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_security_Provider_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_security_Provider_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_entrySet_R_java_util_Set 14
typedef jobject (*func_java_security_Provider_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_security_Provider_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_isEmpty_R_boolean 16
typedef jbool (*func_java_security_Provider_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_keySet_R_java_util_Set 17
typedef jobject (*func_java_security_Provider_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_security_Provider_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_putAll_java_util_Map 19
typedef void (*func_java_security_Provider_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_security_Provider_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_security_Provider_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_security_Provider_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_security_Provider_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_security_Provider_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_security_Provider_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_security_Provider_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_security_Provider_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_security_Provider_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_security_Provider_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_security_Provider_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_security_Provider_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_security_Provider_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_security_Provider_size_R_int 32
typedef jint (*func_java_security_Provider_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_values_R_java_util_Collection 33
typedef jobject (*func_java_security_Provider_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_newElementArray_int_R_Array1_java_util_HashMap$Entry 34
typedef jobject (*func_java_security_Provider_newElementArray_int_R_Array1_java_util_HashMap$Entry)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_security_Provider_computeThreshold 35
typedef void (*func_java_security_Provider_computeThreshold)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_getEntry_java_lang_Object_R_java_util_HashMap$Entry 36
typedef jobject (*func_java_security_Provider_getEntry_java_lang_Object_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry 37
typedef jobject (*func_java_security_Provider_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_Provider_findNullKeyEntry_R_java_util_HashMap$Entry 38
typedef jobject (*func_java_security_Provider_findNullKeyEntry_R_java_util_HashMap$Entry)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object 39
typedef jobject (*func_java_security_Provider_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry 40
typedef jobject (*func_java_security_Provider_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
#define VTABLE_java_security_Provider_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry 41
typedef jobject (*func_java_security_Provider_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_security_Provider_putAllImpl_java_util_Map 42
typedef void (*func_java_security_Provider_putAllImpl_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_rehash_int 43
typedef void (*func_java_security_Provider_rehash_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_security_Provider_rehash 44
typedef void (*func_java_security_Provider_rehash)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_removeEntry_java_util_HashMap$Entry 45
typedef void (*func_java_security_Provider_removeEntry_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_removeEntry_java_lang_Object_R_java_util_HashMap$Entry 46
typedef jobject (*func_java_security_Provider_removeEntry_java_lang_Object_R_java_util_HashMap$Entry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_dumpString_java_lang_StringBuilder_java_lang_String_boolean 47
typedef void (*func_java_security_Provider_dumpString_java_lang_StringBuilder_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_java_security_Provider_getProperty_java_lang_String_R_java_lang_String 48
typedef jobject (*func_java_security_Provider_getProperty_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_getProperty_java_lang_String_java_lang_String_R_java_lang_String 49
typedef jobject (*func_java_security_Provider_getProperty_java_lang_String_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_load_java_io_InputStream 50
typedef void (*func_java_security_Provider_load_java_io_InputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_load_java_io_Reader 51
typedef void (*func_java_security_Provider_load_java_io_Reader)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_security_Provider_propertyNames_R_java_util_Enumeration 52
typedef jobject (*func_java_security_Provider_propertyNames_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_stringPropertyNames_R_java_util_Set 53
typedef jobject (*func_java_security_Provider_stringPropertyNames_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_selectProperties_java_util_Hashtable_boolean 54
typedef void (*func_java_security_Provider_selectProperties_java_util_Hashtable_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_security_Provider_save_java_io_OutputStream_java_lang_String 55
typedef void (*func_java_security_Provider_save_java_io_OutputStream_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_setProperty_java_lang_String_java_lang_String_R_java_lang_Object 56
typedef jobject (*func_java_security_Provider_setProperty_java_lang_String_java_lang_String_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_store_java_io_OutputStream_java_lang_String 57
typedef void (*func_java_security_Provider_store_java_io_OutputStream_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_store_java_io_Writer_java_lang_String 58
typedef void (*func_java_security_Provider_store_java_io_Writer_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_security_Provider_getName_R_java_lang_String 59
typedef jobject (*func_java_security_Provider_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_getVersion_R_double 60
typedef jdouble (*func_java_security_Provider_getVersion_R_double)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_getVersionStr_R_java_lang_String 61
typedef jobject (*func_java_security_Provider_getVersionStr_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_security_Provider_getInfo_R_java_lang_String 62
typedef jobject (*func_java_security_Provider_getInfo_R_java_lang_String)(jcontext ctx, jobject self);

void mark_java_security_Provider(jobject object, jint mark, jint depth);
void clinit_java_security_Provider(jcontext ctx);
void init_java_security_Provider_java_lang_String_double_java_lang_String(jcontext ctx, jobject self, jobject param0, jdouble param1, jobject param2);
void init_java_security_Provider_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
jobject M_java_security_Provider_getName_R_java_lang_String(jcontext ctx, jobject self);
jdouble M_java_security_Provider_getVersion_R_double(jcontext ctx, jobject self);
jobject M_java_security_Provider_getVersionStr_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_security_Provider_getInfo_R_java_lang_String(jcontext ctx, jobject self);
jdouble SM_java_security_Provider_parseVersionStr_java_lang_String_R_double(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
