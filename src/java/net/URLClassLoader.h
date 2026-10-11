#ifndef HEADER_java_net_URLClassLoader
#define HEADER_java_net_URLClassLoader

#include "Clearwing.h"
#include "java/security/SecureClassLoader.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_net_URLClassLoader {
	java_security_SecureClassLoader parent;
} java_net_URLClassLoader;

extern Class class_java_net_URLClassLoader;


#define VTABLE_java_net_URLClassLoader_hashCode_R_int 0
typedef jint (*func_java_net_URLClassLoader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLClassLoader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_net_URLClassLoader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLClassLoader_clone_R_java_lang_Object 2
typedef jobject (*func_java_net_URLClassLoader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLClassLoader_getClass_R_java_lang_Class 3
typedef jobject (*func_java_net_URLClassLoader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLClassLoader_toString_R_java_lang_String 4
typedef jobject (*func_java_net_URLClassLoader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLClassLoader_finalize 5
typedef void (*func_java_net_URLClassLoader_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLClassLoader_notify 6
typedef void (*func_java_net_URLClassLoader_notify)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLClassLoader_notifyAll 7
typedef void (*func_java_net_URLClassLoader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLClassLoader_wait 8
typedef void (*func_java_net_URLClassLoader_wait)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLClassLoader_wait_long 9
typedef void (*func_java_net_URLClassLoader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_net_URLClassLoader_wait_long_int 10
typedef void (*func_java_net_URLClassLoader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_net_URLClassLoader_getParent_R_java_lang_ClassLoader 11
typedef jobject (*func_java_net_URLClassLoader_getParent_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_java_net_URLClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream 12
typedef jobject (*func_java_net_URLClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class 13
typedef jobject (*func_java_net_URLClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_net_URLClassLoader_loadClass_java_lang_String_R_java_lang_Class 14
typedef jobject (*func_java_net_URLClassLoader_loadClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLClassLoader_getResource_java_lang_String_R_java_net_URL 15
typedef jobject (*func_java_net_URLClassLoader_getResource_java_lang_String_R_java_net_URL)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLClassLoader_getResources_java_lang_String_R_java_util_Enumeration 16
typedef jobject (*func_java_net_URLClassLoader_getResources_java_lang_String_R_java_util_Enumeration)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class 17
typedef jobject (*func_java_net_URLClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLClassLoader_findClass_java_lang_String_R_java_lang_Class 18
typedef jobject (*func_java_net_URLClassLoader_findClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLClassLoader_findSystemClass_java_lang_String_R_java_lang_Class 19
typedef jobject (*func_java_net_URLClassLoader_findSystemClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class 20
typedef jobject (*func_java_net_URLClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_java_net_URLClassLoader_resolveClass_java_lang_Class 21
typedef void (*func_java_net_URLClassLoader_resolveClass_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_net_URLClassLoader_close 22
typedef void (*func_java_net_URLClassLoader_close)(jcontext ctx, jobject self);

void mark_java_net_URLClassLoader(jobject object, jint mark, jint depth);
void clinit_java_net_URLClassLoader(jcontext ctx);
void init_java_net_URLClassLoader_Array1_java_net_URL_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_net_URLClassLoader_Array1_java_net_URL(jcontext ctx, jobject self, jobject param0);
void init_java_net_URLClassLoader_Array1_java_net_URL_java_lang_ClassLoader_java_net_URLStreamHandlerFactory(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_java_net_URLClassLoader_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
