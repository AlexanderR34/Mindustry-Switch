#ifndef HEADER_mindustry_mod_ModClassLoader
#define HEADER_mindustry_mod_ModClassLoader

#include "Clearwing.h"
#include "java/lang/ClassLoader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_mod_ModClassLoader {
	java_lang_ClassLoader parent;
	jref F_children;
	jref F_inChild;
} mindustry_mod_ModClassLoader;

extern Class class_mindustry_mod_ModClassLoader;


#define VTABLE_mindustry_mod_ModClassLoader_hashCode_R_int 0
typedef jint (*func_mindustry_mod_ModClassLoader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_mod_ModClassLoader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_mod_ModClassLoader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_mod_ModClassLoader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_mod_ModClassLoader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader_finalize 5
typedef void (*func_mindustry_mod_ModClassLoader_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader_notify 6
typedef void (*func_mindustry_mod_ModClassLoader_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader_notifyAll 7
typedef void (*func_mindustry_mod_ModClassLoader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader_wait 8
typedef void (*func_mindustry_mod_ModClassLoader_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader_wait_long 9
typedef void (*func_mindustry_mod_ModClassLoader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_mod_ModClassLoader_wait_long_int 10
typedef void (*func_mindustry_mod_ModClassLoader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_mod_ModClassLoader_getParent_R_java_lang_ClassLoader 11
typedef jobject (*func_mindustry_mod_ModClassLoader_getParent_R_java_lang_ClassLoader)(jcontext ctx, jobject self);
#define VTABLE_mindustry_mod_ModClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream 12
typedef jobject (*func_mindustry_mod_ModClassLoader_getResourceAsStream_java_lang_String_R_java_io_InputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class 13
typedef jobject (*func_mindustry_mod_ModClassLoader_loadClass_java_lang_String_boolean_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_mod_ModClassLoader_loadClass_java_lang_String_R_java_lang_Class 14
typedef jobject (*func_mindustry_mod_ModClassLoader_loadClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader_getResource_java_lang_String_R_java_net_URL 15
typedef jobject (*func_mindustry_mod_ModClassLoader_getResource_java_lang_String_R_java_net_URL)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader_getResources_java_lang_String_R_java_util_Enumeration 16
typedef jobject (*func_mindustry_mod_ModClassLoader_getResources_java_lang_String_R_java_util_Enumeration)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class 17
typedef jobject (*func_mindustry_mod_ModClassLoader_findLoadedClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader_findClass_java_lang_String_R_java_lang_Class 18
typedef jobject (*func_mindustry_mod_ModClassLoader_findClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader_findSystemClass_java_lang_String_R_java_lang_Class 19
typedef jobject (*func_mindustry_mod_ModClassLoader_findSystemClass_java_lang_String_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class 20
typedef jobject (*func_mindustry_mod_ModClassLoader_defineClass_java_lang_String_Array1_byte_int_int_R_java_lang_Class)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3);
#define VTABLE_mindustry_mod_ModClassLoader_resolveClass_java_lang_Class 21
typedef void (*func_mindustry_mod_ModClassLoader_resolveClass_java_lang_Class)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_mod_ModClassLoader_addChild_java_lang_ClassLoader 22
typedef void (*func_mindustry_mod_ModClassLoader_addChild_java_lang_ClassLoader)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_mod_ModClassLoader(jobject object, jint mark, jint depth);
void clinit_mindustry_mod_ModClassLoader(jcontext ctx);
void init_mindustry_mod_ModClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0);
void M_mindustry_mod_ModClassLoader_addChild_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_mod_ModClassLoader_findClass_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
