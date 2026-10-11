#ifndef HEADER_arc_Files
#define HEADER_arc_Files

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_Files {
	java_lang_Object parent;
} arc_Files;

extern Class class_arc_Files;


#define INDEX_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi 0
typedef jobject (*func_arc_Files_get_java_lang_String_arc_Files$FileType_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_arc_Files_classpath_java_lang_String_R_arc_files_Fi 1
typedef jobject (*func_arc_Files_classpath_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi 2
typedef jobject (*func_arc_Files_internal_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Files_external_java_lang_String_R_arc_files_Fi 3
typedef jobject (*func_arc_Files_external_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Files_absolute_java_lang_String_R_arc_files_Fi 4
typedef jobject (*func_arc_Files_absolute_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Files_local_java_lang_String_R_arc_files_Fi 5
typedef jobject (*func_arc_Files_local_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Files_cache_java_lang_String_R_arc_files_Fi 6
typedef jobject (*func_arc_Files_cache_java_lang_String_R_arc_files_Fi)(jcontext ctx, jobject self, jobject param0);
#define INDEX_arc_Files_getCachePath_R_java_lang_String 7
typedef jobject (*func_arc_Files_getCachePath_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_arc_Files_getInternalStoragePath_R_java_lang_String 8
typedef jobject (*func_arc_Files_getInternalStoragePath_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_arc_Files_getExternalStoragePath_R_java_lang_String 9
typedef jobject (*func_arc_Files_getExternalStoragePath_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_arc_Files_isExternalStorageAvailable_R_boolean 10
typedef jbool (*func_arc_Files_isExternalStorageAvailable_R_boolean)(jcontext ctx, jobject self);
#define INDEX_arc_Files_getLocalStoragePath_R_java_lang_String 11
typedef jobject (*func_arc_Files_getLocalStoragePath_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_arc_Files_isLocalStorageAvailable_R_boolean 12
typedef jbool (*func_arc_Files_isLocalStorageAvailable_R_boolean)(jcontext ctx, jobject self);

void mark_arc_Files(jobject object, jint mark, jint depth);
void clinit_arc_Files(jcontext ctx);
jobject M_arc_Files_classpath_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Files_internal_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Files_external_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Files_absolute_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Files_local_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Files_cache_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0);
jobject M_arc_Files_getCachePath_R_java_lang_String(jcontext ctx, jobject self);
jobject M_arc_Files_getInternalStoragePath_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
