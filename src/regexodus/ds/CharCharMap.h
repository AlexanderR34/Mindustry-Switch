#ifndef HEADER_regexodus_ds_CharCharMap
#define HEADER_regexodus_ds_CharCharMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Serializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct regexodus_ds_CharCharMap {
	java_lang_Object parent;
	jint F_size;
	jref F_keyTable;
	jref F_valueTable;
	jbool F_hasZeroValue;
	jchar F_zeroValue;
	jfloat F_loadFactor;
	jint F_threshold;
	jint F_shift;
	jint F_mask;
	jchar F_defaultReturnValue;
} regexodus_ds_CharCharMap;

extern Class class_regexodus_ds_CharCharMap;

extern jlong SF_regexodus_ds_CharCharMap_serialVersionUID;

#define VTABLE_regexodus_ds_CharCharMap_hashCode_R_int 0
typedef jint (*func_regexodus_ds_CharCharMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_regexodus_ds_CharCharMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_ds_CharCharMap_clone_R_java_lang_Object 2
typedef jobject (*func_regexodus_ds_CharCharMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_getClass_R_java_lang_Class 3
typedef jobject (*func_regexodus_ds_CharCharMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_toString_R_java_lang_String 4
typedef jobject (*func_regexodus_ds_CharCharMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_finalize 5
typedef void (*func_regexodus_ds_CharCharMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_notify 6
typedef void (*func_regexodus_ds_CharCharMap_notify)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_notifyAll 7
typedef void (*func_regexodus_ds_CharCharMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_wait 8
typedef void (*func_regexodus_ds_CharCharMap_wait)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_wait_long 9
typedef void (*func_regexodus_ds_CharCharMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_regexodus_ds_CharCharMap_wait_long_int 10
typedef void (*func_regexodus_ds_CharCharMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_regexodus_ds_CharCharMap_clone_R_regexodus_ds_CharCharMap 11
typedef jobject (*func_regexodus_ds_CharCharMap_clone_R_regexodus_ds_CharCharMap)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_place_char_R_int 12
typedef jint (*func_regexodus_ds_CharCharMap_place_char_R_int)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_regexodus_ds_CharCharMap_locateKey_char_R_int 13
typedef jint (*func_regexodus_ds_CharCharMap_locateKey_char_R_int)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_regexodus_ds_CharCharMap_put_char_char_R_char 14
typedef jchar (*func_regexodus_ds_CharCharMap_put_char_char_R_char)(jcontext ctx, jobject self, jchar param0, jchar param1);
#define VTABLE_regexodus_ds_CharCharMap_putOrDefault_char_char_char_R_char 15
typedef jchar (*func_regexodus_ds_CharCharMap_putOrDefault_char_char_char_R_char)(jcontext ctx, jobject self, jchar param0, jchar param1, jchar param2);
#define VTABLE_regexodus_ds_CharCharMap_putAll_regexodus_ds_CharCharMap 16
typedef void (*func_regexodus_ds_CharCharMap_putAll_regexodus_ds_CharCharMap)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char 17
typedef void (*func_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char_int 18
typedef void (*func_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char_int)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
#define VTABLE_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int 19
typedef void (*func_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jint param4);
#define VTABLE_regexodus_ds_CharCharMap_putResize_char_char 20
typedef void (*func_regexodus_ds_CharCharMap_putResize_char_char)(jcontext ctx, jobject self, jchar param0, jchar param1);
#define VTABLE_regexodus_ds_CharCharMap_get_char_R_char 21
typedef jchar (*func_regexodus_ds_CharCharMap_get_char_R_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_regexodus_ds_CharCharMap_getOrDefault_char_char_R_char 22
typedef jchar (*func_regexodus_ds_CharCharMap_getOrDefault_char_char_R_char)(jcontext ctx, jobject self, jchar param0, jchar param1);
#define VTABLE_regexodus_ds_CharCharMap_remove_char_R_char 23
typedef jchar (*func_regexodus_ds_CharCharMap_remove_char_R_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_regexodus_ds_CharCharMap_notEmpty_R_boolean 24
typedef jbool (*func_regexodus_ds_CharCharMap_notEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_size_R_int 25
typedef jint (*func_regexodus_ds_CharCharMap_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_isEmpty_R_boolean 26
typedef jbool (*func_regexodus_ds_CharCharMap_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_defaultReturnValue_R_char 27
typedef jchar (*func_regexodus_ds_CharCharMap_defaultReturnValue_R_char)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_defaultReturnValue_char 28
typedef void (*func_regexodus_ds_CharCharMap_defaultReturnValue_char)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_regexodus_ds_CharCharMap_shrink_int 29
typedef void (*func_regexodus_ds_CharCharMap_shrink_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_ds_CharCharMap_clear_int 30
typedef void (*func_regexodus_ds_CharCharMap_clear_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_ds_CharCharMap_clear 31
typedef void (*func_regexodus_ds_CharCharMap_clear)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_containsValue_char_R_boolean 32
typedef jbool (*func_regexodus_ds_CharCharMap_containsValue_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_regexodus_ds_CharCharMap_containsKey_char_R_boolean 33
typedef jbool (*func_regexodus_ds_CharCharMap_containsKey_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define VTABLE_regexodus_ds_CharCharMap_findKey_char_char_R_char 34
typedef jchar (*func_regexodus_ds_CharCharMap_findKey_char_char_R_char)(jcontext ctx, jobject self, jchar param0, jchar param1);
#define VTABLE_regexodus_ds_CharCharMap_ensureCapacity_int 35
typedef void (*func_regexodus_ds_CharCharMap_ensureCapacity_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_ds_CharCharMap_resize_int 36
typedef void (*func_regexodus_ds_CharCharMap_resize_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_regexodus_ds_CharCharMap_getLoadFactor_R_float 37
typedef jfloat (*func_regexodus_ds_CharCharMap_getLoadFactor_R_float)(jcontext ctx, jobject self);
#define VTABLE_regexodus_ds_CharCharMap_setLoadFactor_float 38
typedef void (*func_regexodus_ds_CharCharMap_setLoadFactor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_regexodus_ds_CharCharMap_toString_java_lang_String_R_java_lang_String 39
typedef jobject (*func_regexodus_ds_CharCharMap_toString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String 40
typedef jobject (*func_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_regexodus_ds_CharCharMap_putIfAbsent_char_char_R_char 41
typedef jchar (*func_regexodus_ds_CharCharMap_putIfAbsent_char_char_R_char)(jcontext ctx, jobject self, jchar param0, jchar param1);
#define VTABLE_regexodus_ds_CharCharMap_replace_char_char_char_R_boolean 42
typedef jbool (*func_regexodus_ds_CharCharMap_replace_char_char_char_R_boolean)(jcontext ctx, jobject self, jchar param0, jchar param1, jchar param2);
#define VTABLE_regexodus_ds_CharCharMap_replace_char_char_R_char 43
typedef jchar (*func_regexodus_ds_CharCharMap_replace_char_char_R_char)(jcontext ctx, jobject self, jchar param0, jchar param1);

void mark_regexodus_ds_CharCharMap(jobject object, jint mark, jint depth);
void clinit_regexodus_ds_CharCharMap(jcontext ctx);
jint SM_regexodus_ds_CharCharMap_tableSize_int_float_R_int(jcontext ctx, jint param0, jfloat param1);
void init_regexodus_ds_CharCharMap(jcontext ctx, jobject self);
void init_regexodus_ds_CharCharMap_int(jcontext ctx, jobject self, jint param0);
void init_regexodus_ds_CharCharMap_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void init_regexodus_ds_CharCharMap_regexodus_ds_CharCharMap(jcontext ctx, jobject self, jobject param0);
void init_regexodus_ds_CharCharMap_Array1_char_Array1_char(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_regexodus_ds_CharCharMap_clone_R_regexodus_ds_CharCharMap(jcontext ctx, jobject self);
jint M_regexodus_ds_CharCharMap_place_char_R_int(jcontext ctx, jobject self, jchar param0);
jint M_regexodus_ds_CharCharMap_locateKey_char_R_int(jcontext ctx, jobject self, jchar param0);
jchar M_regexodus_ds_CharCharMap_put_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1);
jchar M_regexodus_ds_CharCharMap_putOrDefault_char_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1, jchar param2);
void M_regexodus_ds_CharCharMap_putAll_regexodus_ds_CharCharMap(jcontext ctx, jobject self, jobject param0);
void M_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_regexodus_ds_CharCharMap_putAll_Array1_char_Array1_char_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2);
void M_regexodus_ds_CharCharMap_putAll_Array1_char_int_Array1_char_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jint param4);
void M_regexodus_ds_CharCharMap_putResize_char_char(jcontext ctx, jobject self, jchar param0, jchar param1);
jchar M_regexodus_ds_CharCharMap_get_char_R_char(jcontext ctx, jobject self, jchar param0);
jchar M_regexodus_ds_CharCharMap_getOrDefault_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1);
jchar M_regexodus_ds_CharCharMap_remove_char_R_char(jcontext ctx, jobject self, jchar param0);
jbool M_regexodus_ds_CharCharMap_notEmpty_R_boolean(jcontext ctx, jobject self);
jint M_regexodus_ds_CharCharMap_size_R_int(jcontext ctx, jobject self);
jbool M_regexodus_ds_CharCharMap_isEmpty_R_boolean(jcontext ctx, jobject self);
jchar M_regexodus_ds_CharCharMap_defaultReturnValue_R_char(jcontext ctx, jobject self);
void M_regexodus_ds_CharCharMap_defaultReturnValue_char(jcontext ctx, jobject self, jchar param0);
void M_regexodus_ds_CharCharMap_shrink_int(jcontext ctx, jobject self, jint param0);
void M_regexodus_ds_CharCharMap_clear_int(jcontext ctx, jobject self, jint param0);
void M_regexodus_ds_CharCharMap_clear(jcontext ctx, jobject self);
jbool M_regexodus_ds_CharCharMap_containsValue_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jbool M_regexodus_ds_CharCharMap_containsKey_char_R_boolean(jcontext ctx, jobject self, jchar param0);
jchar M_regexodus_ds_CharCharMap_findKey_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1);
void M_regexodus_ds_CharCharMap_ensureCapacity_int(jcontext ctx, jobject self, jint param0);
void M_regexodus_ds_CharCharMap_resize_int(jcontext ctx, jobject self, jint param0);
jfloat M_regexodus_ds_CharCharMap_getLoadFactor_R_float(jcontext ctx, jobject self);
void M_regexodus_ds_CharCharMap_setLoadFactor_float(jcontext ctx, jobject self, jfloat param0);
jint M_regexodus_ds_CharCharMap_hashCode_R_int(jcontext ctx, jobject self);
jbool M_regexodus_ds_CharCharMap_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_ds_CharCharMap_toString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_regexodus_ds_CharCharMap_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_regexodus_ds_CharCharMap_toString_java_lang_String_boolean_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1);
jchar M_regexodus_ds_CharCharMap_putIfAbsent_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1);
jbool M_regexodus_ds_CharCharMap_replace_char_char_char_R_boolean(jcontext ctx, jobject self, jchar param0, jchar param1, jchar param2);
jchar M_regexodus_ds_CharCharMap_replace_char_char_R_char(jcontext ctx, jobject self, jchar param0, jchar param1);
jobject M_regexodus_ds_CharCharMap_clone_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
