#ifndef HEADER_java_lang_ClassLoader
#define HEADER_java_lang_ClassLoader

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_ClassLoader {
	java_lang_Object parent;
	jref F_parent;
} java_lang_ClassLoader;

extern Class class_java_lang_ClassLoader;

extern jobject SF_java_lang_ClassLoader_systemClassLoader;

#define VTABLE_java_lang_ClassLoader_hashCode_R_int 0
typedef jint (*func_java_lang_ClassLoader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassLoader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_ClassLoader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassLoader_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_ClassLoader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassLoader_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_ClassLoader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassLoader_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_ClassLoader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassLoader_finalize 5
typedef void (*func_java_lang_ClassLoader_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassLoader_notify 6
typedef void (*func_java_lang_ClassLoader_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassLoader_notifyAll 7
typedef void (*func_java_lang_ClassLoader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassLoader_wait 8
typedef void (*func_java_lang_ClassLoader_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassLoader_wait_long 9
typedef void (*func_java_lang_ClassLoader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_ClassLoader_wait_long_int 10
typedef void (*func_java_lang_ClassLoader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_ClassLoader_getParent_R_java_lang_ClassLoader 11
typedef jobject (*func_java_lang_ClassLoader_getParent_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_java_lang_ClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream 12
typedef jobject (*func_java_lang_ClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class 13
typedef jobject (*func_java_lang_ClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class 14
typedef jobject (*func_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassLoader_getResource_java_lang_String_R_java_net_URL 15
typedef jobject (*func_java_lang_ClassLoader_getResource_java_lang_String_R_java_net_URL)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration 16
typedef jobject (*func_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class 17
typedef jobject (*func_java_lang_ClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassLoader_findClass_java_lang_String_R_java_lang_Class 18
typedef jobject (*func_java_lang_ClassLoader_findClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassLoader_findSystemClass_java_lang_String_R_java_lang_Class 19
typedef jobject (*func_java_lang_ClassLoader_findSystemClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_ClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class 20
typedef jobject (*func_java_lang_ClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_java_lang_ClassLoader_resolveClass_java_lang_Class 21
typedef void (*func_java_lang_ClassLoader_resolveClass_java_lang_Class)(jcontext ctx, jobject self, jobject param0);

void mark_java_lang_ClassLoader(jobject object, jint mark, jint depth);
void clinit_java_lang_ClassLoader(jcontext ctx);
void init_java_lang_ClassLoader(jcontext ctx, jobject self);
void init_java_lang_ClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_ClassLoader_getParent_R_java_lang_ClassLoader(jcontext ctx, jobject self);
jobject SM_java_lang_ClassLoader_getSystemClassLoader_R_java_lang_ClassLoader(jcontext ctx);
jobject M_java_lang_ClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
jobject SM_java_lang_ClassLoader_getSystemResource_java_lang_String_R_java_net_URL(jcontext ctx, jobject param0);
jobject SM_java_lang_ClassLoader_getSystemResources_java_lang_String_R_java_util_Enumeration(jcontext ctx, jobject param0);
jobject SM_java_lang_ClassLoader_getSystemResourceAsStream_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject param0);
jobject M_java_lang_ClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jbool param1);
jobject M_java_lang_ClassLoader_loadClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_ClassLoader_getResource_java_lang_String_R_java_net_URL(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_ClassLoader_getResources_java_lang_String_R_java_util_Enumeration(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_ClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_ClassLoader_findClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_ClassLoader_findSystemClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0);
jobject M_java_lang_ClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
void M_java_lang_ClassLoader_resolveClass_java_lang_Class(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
