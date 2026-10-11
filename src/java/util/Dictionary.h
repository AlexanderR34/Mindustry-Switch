#ifndef HEADER_java_util_Dictionary
#define HEADER_java_util_Dictionary

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_Dictionary {
	java_lang_Object parent;
} java_util_Dictionary;

extern Class class_java_util_Dictionary;


#define VTABLE_java_util_Dictionary_hashCode_R_int 0
typedef jint (*func_java_util_Dictionary_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_Dictionary_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Dictionary_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_Dictionary_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_Dictionary_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_toString_R_java_lang_String 4
typedef jobject (*func_java_util_Dictionary_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_finalize 5
typedef void (*func_java_util_Dictionary_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_notify 6
typedef void (*func_java_util_Dictionary_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_notifyAll 7
typedef void (*func_java_util_Dictionary_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_wait 8
typedef void (*func_java_util_Dictionary_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_wait_long 9
typedef void (*func_java_util_Dictionary_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_Dictionary_wait_long_int 10
typedef void (*func_java_util_Dictionary_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_Dictionary_elements_R_java_util_Enumeration 11
typedef jobject (*func_java_util_Dictionary_elements_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_get_java_lang_Object_R_java_lang_Object 12
typedef jobject (*func_java_util_Dictionary_get_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Dictionary_isEmpty_R_boolean 13
typedef jbool (*func_java_util_Dictionary_isEmpty_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_keys_R_java_util_Enumeration 14
typedef jobject (*func_java_util_Dictionary_keys_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_util_Dictionary_put_java_lang_Object_java_lang_Object_R_java_lang_Object 15
typedef jobject (*func_java_util_Dictionary_put_java_lang_Object_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_util_Dictionary_remove_java_lang_Object_R_java_lang_Object 16
typedef jobject (*func_java_util_Dictionary_remove_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_Dictionary_size_R_int 17
typedef jint (*func_java_util_Dictionary_size_R_int)(jcontext ctx, jobject self);

void mark_java_util_Dictionary(jobject object, jint mark, jint depth);
void clinit_java_util_Dictionary(jcontext ctx);
void init_java_util_Dictionary(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
