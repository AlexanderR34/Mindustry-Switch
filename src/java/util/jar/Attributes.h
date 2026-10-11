#ifndef HEADER_java_util_jar_Attributes
#define HEADER_java_util_jar_Attributes

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "java/util/Map.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_jar_Attributes {
	java_lang_Object parent;
	jref F_map;
} java_util_jar_Attributes;

extern Class class_java_util_jar_Attributes;


#define VTABLE_java_util_jar_Attributes_hashCode_R_int 0
typedef jint (*func_java_util_jar_Attributes_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_jar_Attributes_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_jar_Attributes_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_jar_Attributes_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_toString_R_java_lang_String 4
typedef jobject (*func_java_util_jar_Attributes_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_finalize 5
typedef void (*func_java_util_jar_Attributes_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_notify 6
typedef void (*func_java_util_jar_Attributes_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_notifyAll 7
typedef void (*func_java_util_jar_Attributes_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_wait 8
typedef void (*func_java_util_jar_Attributes_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_wait_long 9
typedef void (*func_java_util_jar_Attributes_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_jar_Attributes_wait_long_int 10
typedef void (*func_java_util_jar_Attributes_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_jar_Attributes_clear 11
typedef void (*func_java_util_jar_Attributes_clear)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_containsKey_java_lang_Object_R_boolean 12
typedef jbool (*func_java_util_jar_Attributes_containsKey_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes_containsValue_java_lang_Object_R_boolean 13
typedef jbool (*func_java_util_jar_Attributes_containsValue_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes_entrySet_R_java_util_Set 14
typedef jobject (*func_java_util_jar_Attributes_entrySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_get_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_jar_Attributes_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes_isEmpty_R_boolean 16
typedef jbool (*func_java_util_jar_Attributes_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_keySet_R_java_util_Set 17
typedef jobject (*func_java_util_jar_Attributes_keySet_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_put_java_lang_Object_java_lang_Object_R_java_lang_Object 18
typedef jobject (*func_java_util_jar_Attributes_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_jar_Attributes_putAll_java_util_Map 19
typedef void (*func_java_util_jar_Attributes_putAll_java_util_Map)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object 20
typedef jobject (*func_java_util_jar_Attributes_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_jar_Attributes_remove_java_lang_Object_R_java_lang_Object 21
typedef jobject (*func_java_util_jar_Attributes_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes_remove_java_lang_Object_java_lang_Object_R_boolean 22
typedef jbool (*func_java_util_jar_Attributes_remove_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_jar_Attributes_replace_java_lang_Object_java_lang_Object_R_java_lang_Object 23
typedef jobject (*func_java_util_jar_Attributes_replace_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_jar_Attributes_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean 24
typedef jbool (*func_java_util_jar_Attributes_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_jar_Attributes_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object 25
typedef jobject (*func_java_util_jar_Attributes_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_jar_Attributes_forEach_java_util_function_BiConsumer 26
typedef void (*func_java_util_jar_Attributes_forEach_java_util_function_BiConsumer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes_replaceAll_java_util_function_BiFunction 27
typedef void (*func_java_util_jar_Attributes_replaceAll_java_util_function_BiFunction)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object 28
typedef jobject (*func_java_util_jar_Attributes_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_jar_Attributes_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 29
typedef jobject (*func_java_util_jar_Attributes_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_jar_Attributes_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 30
typedef jobject (*func_java_util_jar_Attributes_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_jar_Attributes_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object 31
typedef jobject (*func_java_util_jar_Attributes_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_java_util_jar_Attributes_size_R_int 32
typedef jint (*func_java_util_jar_Attributes_size_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_values_R_java_util_Collection 33
typedef jobject (*func_java_util_jar_Attributes_values_R_java_util_Collection)(jcontext ctx, jobject self);
#define VTABLE_java_util_jar_Attributes_getValue_java_util_jar_Attributes$Name_R_java_lang_String 34
typedef jobject (*func_java_util_jar_Attributes_getValue_java_util_jar_Attributes$Name_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String 35
typedef jobject (*func_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_jar_Attributes_putValue_java_lang_String_java_lang_String_R_java_lang_String 36
typedef jobject (*func_java_util_jar_Attributes_putValue_java_lang_String_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_java_util_jar_Attributes(jobject object, jint mark, jint depth);
void clinit_java_util_jar_Attributes(jcontext ctx);
void init_java_util_jar_Attributes(jcontext ctx, jobject self);
void init_java_util_jar_Attributes_java_util_jar_Attributes(jcontext ctx, jobject self, jobject param0);
void init_java_util_jar_Attributes_int(jcontext ctx, jobject self, jint param0);
void M_java_util_jar_Attributes_clear(jcontext ctx, jobject self);
jbool M_java_util_jar_Attributes_containsKey_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_jar_Attributes_containsValue_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_jar_Attributes_entrySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_jar_Attributes_get_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_java_util_jar_Attributes_isEmpty_R_boolean(jcontext ctx, jobject self);
jobject M_java_util_jar_Attributes_keySet_R_java_util_Set(jcontext ctx, jobject self);
jobject M_java_util_jar_Attributes_put_java_lang_Object_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_java_util_jar_Attributes_putAll_java_util_Map(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_jar_Attributes_remove_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jint M_java_util_jar_Attributes_size_R_int(jcontext ctx, jobject self);
jobject M_java_util_jar_Attributes_values_R_java_util_Collection(jcontext ctx, jobject self);
jobject M_java_util_jar_Attributes_clone_R_java_lang_Object(jcontext ctx, jobject self);
jint M_java_util_jar_Attributes_hashCode_R_int(jcontext ctx, jobject self);
jbool M_java_util_jar_Attributes_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_jar_Attributes_getValue_java_util_jar_Attributes$Name_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_jar_Attributes_getValue_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_jar_Attributes_putValue_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
