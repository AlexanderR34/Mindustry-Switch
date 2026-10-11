#ifndef HEADER_java_nio_file_FileSystem
#define HEADER_java_nio_file_FileSystem

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_FileSystem {
	java_lang_Object parent;
} java_nio_file_FileSystem;

extern Class class_java_nio_file_FileSystem;


#define VTABLE_java_nio_file_FileSystem_hashCode_R_int 0
typedef jint (*func_java_nio_file_FileSystem_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_file_FileSystem_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_file_FileSystem_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_file_FileSystem_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_file_FileSystem_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_file_FileSystem_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_finalize 5
typedef void (*func_java_nio_file_FileSystem_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_notify 6
typedef void (*func_java_nio_file_FileSystem_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_notifyAll 7
typedef void (*func_java_nio_file_FileSystem_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_wait 8
typedef void (*func_java_nio_file_FileSystem_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_wait_long 9
typedef void (*func_java_nio_file_FileSystem_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_file_FileSystem_wait_long_int 10
typedef void (*func_java_nio_file_FileSystem_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_file_FileSystem_close 11
typedef void (*func_java_nio_file_FileSystem_close)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_isOpen_R_boolean 12
typedef jbool (*func_java_nio_file_FileSystem_isOpen_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_isReadOnly_R_boolean 13
typedef jbool (*func_java_nio_file_FileSystem_isReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_getSeparator_R_java_lang_String 14
typedef jobject (*func_java_nio_file_FileSystem_getSeparator_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_getRootDirectories_R_java_lang_Iterable 15
typedef jobject (*func_java_nio_file_FileSystem_getRootDirectories_R_java_lang_Iterable)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_getFileStores_R_java_lang_Iterable 16
typedef jobject (*func_java_nio_file_FileSystem_getFileStores_R_java_lang_Iterable)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_supportedFileAttributeViews_R_java_util_Set 17
typedef jobject (*func_java_nio_file_FileSystem_supportedFileAttributeViews_R_java_util_Set)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path 18
typedef jobject (*func_java_nio_file_FileSystem_getPath_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_java_nio_file_FileSystem_getPathMatcher_java_lang_String_R_java_nio_file_PathMatcher 19
typedef jobject (*func_java_nio_file_FileSystem_getPathMatcher_java_lang_String_R_java_nio_file_PathMatcher)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_file_FileSystem_getUserPrincipalLookupService_R_java_nio_file_attribute_UserPrincipalLookupService 20
typedef jobject (*func_java_nio_file_FileSystem_getUserPrincipalLookupService_R_java_nio_file_attribute_UserPrincipalLookupService)(jcontext ctx, jobject self);
#define VTABLE_java_nio_file_FileSystem_newWatchService_R_java_nio_file_WatchService 21
typedef jobject (*func_java_nio_file_FileSystem_newWatchService_R_java_nio_file_WatchService)(jcontext ctx, jobject self);

void mark_java_nio_file_FileSystem(jobject object, jint mark, jint depth);
void clinit_java_nio_file_FileSystem(jcontext ctx);
void init_java_nio_file_FileSystem(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
