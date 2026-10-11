#ifndef HEADER_rhino_DefiningClassLoader
#define HEADER_rhino_DefiningClassLoader

#include "Clearwing.h"
#include "java/lang/ClassLoader.h"
#include "rhino/GeneratedClassLoader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct rhino_DefiningClassLoader {
	java_lang_ClassLoader parent;
	jref F_parentLoader;
} rhino_DefiningClassLoader;

extern Class class_rhino_DefiningClassLoader;


#define VTABLE_rhino_DefiningClassLoader_hashCode_R_int 0
typedef jint (*func_rhino_DefiningClassLoader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefiningClassLoader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_rhino_DefiningClassLoader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DefiningClassLoader_clone_R_java_lang_Object 2
typedef jobject (*func_rhino_DefiningClassLoader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefiningClassLoader_getClass_R_java_lang_Class 3
typedef jobject (*func_rhino_DefiningClassLoader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefiningClassLoader_toString_R_java_lang_String 4
typedef jobject (*func_rhino_DefiningClassLoader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefiningClassLoader_finalize 5
typedef void (*func_rhino_DefiningClassLoader_finalize)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefiningClassLoader_notify 6
typedef void (*func_rhino_DefiningClassLoader_notify)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefiningClassLoader_notifyAll 7
typedef void (*func_rhino_DefiningClassLoader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefiningClassLoader_wait 8
typedef void (*func_rhino_DefiningClassLoader_wait)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefiningClassLoader_wait_long 9
typedef void (*func_rhino_DefiningClassLoader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_rhino_DefiningClassLoader_wait_long_int 10
typedef void (*func_rhino_DefiningClassLoader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_rhino_DefiningClassLoader_getParent_R_java_lang_ClassLoader 11
typedef jobject (*func_rhino_DefiningClassLoader_getParent_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_rhino_DefiningClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream 12
typedef jobject (*func_rhino_DefiningClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DefiningClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class 13
typedef jobject (*func_rhino_DefiningClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_rhino_DefiningClassLoader_loadClass_java_lang_String_R_java_lang_Class 14
typedef jobject (*func_rhino_DefiningClassLoader_loadClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DefiningClassLoader_getResource_java_lang_String_R_java_net_URL 15
typedef jobject (*func_rhino_DefiningClassLoader_getResource_java_lang_String_R_java_net_URL)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DefiningClassLoader_getResources_java_lang_String_R_java_util_Enumeration 16
typedef jobject (*func_rhino_DefiningClassLoader_getResources_java_lang_String_R_java_util_Enumeration)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DefiningClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class 17
typedef jobject (*func_rhino_DefiningClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DefiningClassLoader_findClass_java_lang_String_R_java_lang_Class 18
typedef jobject (*func_rhino_DefiningClassLoader_findClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DefiningClassLoader_findSystemClass_java_lang_String_R_java_lang_Class 19
typedef jobject (*func_rhino_DefiningClassLoader_findSystemClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DefiningClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class 20
typedef jobject (*func_rhino_DefiningClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_rhino_DefiningClassLoader_resolveClass_java_lang_Class 21
typedef void (*func_rhino_DefiningClassLoader_resolveClass_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_rhino_DefiningClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class 22
typedef jobject (*func_rhino_DefiningClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_rhino_DefiningClassLoader_linkClass_java_lang_Class 23
typedef void (*func_rhino_DefiningClassLoader_linkClass_java_lang_Class)(jcontext ctx, jobject self, jobject param0);

void mark_rhino_DefiningClassLoader(jobject object, jint mark, jint depth);
void clinit_rhino_DefiningClassLoader(jcontext ctx);
void init_rhino_DefiningClassLoader(jcontext ctx, jobject self);
void init_rhino_DefiningClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_DefiningClassLoader_defineClass_java_lang_String_Array1_byte_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_rhino_DefiningClassLoader_linkClass_java_lang_Class(jcontext ctx, jobject self, jobject param0);
jobject M_rhino_DefiningClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jbool param1);

#ifdef __cplusplus
}
#endif

#endif
