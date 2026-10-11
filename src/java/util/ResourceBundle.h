#ifndef HEADER_java_util_ResourceBundle
#define HEADER_java_util_ResourceBundle

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_ResourceBundle {
	java_lang_Object parent;
} java_util_ResourceBundle;

extern Class class_java_util_ResourceBundle;


#define VTABLE_java_util_ResourceBundle_hashCode_R_int 0
typedef jint (*func_java_util_ResourceBundle_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_ResourceBundle_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_ResourceBundle_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_ResourceBundle_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_ResourceBundle_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_ResourceBundle_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_ResourceBundle_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_ResourceBundle_toString_R_java_lang_String 4
typedef jobject (*func_java_util_ResourceBundle_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_ResourceBundle_finalize 5
typedef void (*func_java_util_ResourceBundle_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_ResourceBundle_notify 6
typedef void (*func_java_util_ResourceBundle_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_ResourceBundle_notifyAll 7
typedef void (*func_java_util_ResourceBundle_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_ResourceBundle_wait 8
typedef void (*func_java_util_ResourceBundle_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_ResourceBundle_wait_long 9
typedef void (*func_java_util_ResourceBundle_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_ResourceBundle_wait_long_int 10
typedef void (*func_java_util_ResourceBundle_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_ResourceBundle_getKeys_R_java_util_Enumeration 11
typedef jobject (*func_java_util_ResourceBundle_getKeys_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_util_ResourceBundle_getString_java_lang_String_R_java_lang_String 12
typedef jobject (*func_java_util_ResourceBundle_getString_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_java_util_ResourceBundle(jobject object, jint mark, jint depth);
void clinit_java_util_ResourceBundle(jcontext ctx);
void init_java_util_ResourceBundle(jcontext ctx, jobject self);
jobject SM_java_util_ResourceBundle_getBundle_java_lang_String_java_util_Locale_java_lang_ClassLoader_R_java_util_ResourceBundle(jcontext ctx, jobject param0, jobject param1, jobject param2);
jobject SM_java_util_ResourceBundle_getBundle_java_lang_String_java_util_Locale_R_java_util_ResourceBundle(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_util_ResourceBundle_getBundle_java_lang_String_R_java_util_ResourceBundle(jcontext ctx, jobject param0);
jobject M_java_util_ResourceBundle_getKeys_R_java_util_Enumeration(jcontext ctx, jobject self);
jobject M_java_util_ResourceBundle_getString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
