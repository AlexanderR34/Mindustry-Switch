#ifndef HEADER_arc_backend_sdl_SdlFiles
#define HEADER_arc_backend_sdl_SdlFiles

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/Files.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_SdlFiles {
	java_lang_Object parent;
} arc_backend_sdl_SdlFiles;

extern Class class_arc_backend_sdl_SdlFiles;

extern jobject SF_arc_backend_sdl_SdlFiles_externalPath;
extern jobject SF_arc_backend_sdl_SdlFiles_localPath;

#define VTABLE_arc_backend_sdl_SdlFiles_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_SdlFiles_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_SdlFiles_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlFiles_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_SdlFiles_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_SdlFiles_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_SdlFiles_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_finalize 5
typedef void (*func_arc_backend_sdl_SdlFiles_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_notify 6
typedef void (*func_arc_backend_sdl_SdlFiles_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_notifyAll 7
typedef void (*func_arc_backend_sdl_SdlFiles_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_wait 8
typedef void (*func_arc_backend_sdl_SdlFiles_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_wait_long 9
typedef void (*func_arc_backend_sdl_SdlFiles_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_SdlFiles_wait_long_int 10
typedef void (*func_arc_backend_sdl_SdlFiles_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_backend_sdl_SdlFiles_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi 11
typedef jobject (*func_arc_backend_sdl_SdlFiles_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_backend_sdl_SdlFiles_classpath_java_lang_String_R_arc_files_Fi 12
typedef jobject (*func_arc_backend_sdl_SdlFiles_classpath_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlFiles_internal_java_lang_String_R_arc_files_Fi 13
typedef jobject (*func_arc_backend_sdl_SdlFiles_internal_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlFiles_external_java_lang_String_R_arc_files_Fi 14
typedef jobject (*func_arc_backend_sdl_SdlFiles_external_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlFiles_absolute_java_lang_String_R_arc_files_Fi 15
typedef jobject (*func_arc_backend_sdl_SdlFiles_absolute_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlFiles_local_java_lang_String_R_arc_files_Fi 16
typedef jobject (*func_arc_backend_sdl_SdlFiles_local_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlFiles_cache_java_lang_String_R_arc_files_Fi 17
typedef jobject (*func_arc_backend_sdl_SdlFiles_cache_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_SdlFiles_getCachePath_R_java_lang_String 18
typedef jobject (*func_arc_backend_sdl_SdlFiles_getCachePath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_getInternalStoragePath_R_java_lang_String 19
typedef jobject (*func_arc_backend_sdl_SdlFiles_getInternalStoragePath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_getExternalStoragePath_R_java_lang_String 20
typedef jobject (*func_arc_backend_sdl_SdlFiles_getExternalStoragePath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_isExternalStorageAvailable_R_boolean 21
typedef jbool (*func_arc_backend_sdl_SdlFiles_isExternalStorageAvailable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_getLocalStoragePath_R_java_lang_String 22
typedef jobject (*func_arc_backend_sdl_SdlFiles_getLocalStoragePath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_SdlFiles_isLocalStorageAvailable_R_boolean 23
typedef jbool (*func_arc_backend_sdl_SdlFiles_isLocalStorageAvailable_R_boolean)(jcontext ctx, jobject self);

void mark_arc_backend_sdl_SdlFiles(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_SdlFiles(jcontext ctx);
void init_arc_backend_sdl_SdlFiles(jcontext ctx, jobject self);
jobject M_arc_backend_sdl_SdlFiles_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_backend_sdl_SdlFiles_getExternalStoragePath_R_java_lang_String(jcontext ctx, jobject self);
jbool M_arc_backend_sdl_SdlFiles_isExternalStorageAvailable_R_boolean(jcontext ctx, jobject self);
jobject M_arc_backend_sdl_SdlFiles_getLocalStoragePath_R_java_lang_String(jcontext ctx, jobject self);
jbool M_arc_backend_sdl_SdlFiles_isLocalStorageAvailable_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
