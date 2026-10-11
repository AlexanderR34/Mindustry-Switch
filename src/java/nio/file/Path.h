#ifndef HEADER_java_nio_file_Path
#define HEADER_java_nio_file_Path

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/lang/Comparable.h"
#include "java/lang/Iterable.h"
#include "java/nio/file/Watchable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_file_Path {
	java_lang_Object parent;
} java_nio_file_Path;

extern Class class_java_nio_file_Path;


#define INDEX_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem 2
typedef jobject (*func_java_nio_file_Path_getFileSystem_R_java_nio_file_FileSystem)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_isAbsolute_R_boolean 3
typedef jbool (*func_java_nio_file_Path_isAbsolute_R_boolean)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_getRoot_R_java_nio_file_Path 4
typedef jobject (*func_java_nio_file_Path_getRoot_R_java_nio_file_Path)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_getFileName_R_java_nio_file_Path 5
typedef jobject (*func_java_nio_file_Path_getFileName_R_java_nio_file_Path)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_getParent_R_java_nio_file_Path 6
typedef jobject (*func_java_nio_file_Path_getParent_R_java_nio_file_Path)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_getNameCount_R_int 7
typedef jint (*func_java_nio_file_Path_getNameCount_R_int)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_getName_int_R_java_nio_file_Path 8
typedef jobject (*func_java_nio_file_Path_getName_int_R_java_nio_file_Path)(jcontext ctx, jobject self, jint param0);
#define INDEX_java_nio_file_Path_subpath_int_int_R_java_nio_file_Path 9
typedef jobject (*func_java_nio_file_Path_subpath_int_int_R_java_nio_file_Path)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_java_nio_file_Path_startsWith_java_nio_file_Path_R_boolean 10
typedef jbool (*func_java_nio_file_Path_startsWith_java_nio_file_Path_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_startsWith_java_lang_String_R_boolean 11
typedef jbool (*func_java_nio_file_Path_startsWith_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_endsWith_java_nio_file_Path_R_boolean 12
typedef jbool (*func_java_nio_file_Path_endsWith_java_nio_file_Path_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_endsWith_java_lang_String_R_boolean 13
typedef jbool (*func_java_nio_file_Path_endsWith_java_lang_String_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_normalize_R_java_nio_file_Path 14
typedef jobject (*func_java_nio_file_Path_normalize_R_java_nio_file_Path)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_resolve_java_nio_file_Path_R_java_nio_file_Path 15
typedef jobject (*func_java_nio_file_Path_resolve_java_nio_file_Path_R_java_nio_file_Path)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_resolve_java_lang_String_R_java_nio_file_Path 16
typedef jobject (*func_java_nio_file_Path_resolve_java_lang_String_R_java_nio_file_Path)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_resolveSibling_java_nio_file_Path_R_java_nio_file_Path 17
typedef jobject (*func_java_nio_file_Path_resolveSibling_java_nio_file_Path_R_java_nio_file_Path)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_resolveSibling_java_lang_String_R_java_nio_file_Path 18
typedef jobject (*func_java_nio_file_Path_resolveSibling_java_lang_String_R_java_nio_file_Path)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_relativize_java_nio_file_Path_R_java_nio_file_Path 19
typedef jobject (*func_java_nio_file_Path_relativize_java_nio_file_Path_R_java_nio_file_Path)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_toUri_R_java_net_URI 20
typedef jobject (*func_java_nio_file_Path_toUri_R_java_net_URI)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_toAbsolutePath_R_java_nio_file_Path 21
typedef jobject (*func_java_nio_file_Path_toAbsolutePath_R_java_nio_file_Path)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_toRealPath_Array1_java_nio_file_LinkOption_R_java_nio_file_Path 22
typedef jobject (*func_java_nio_file_Path_toRealPath_Array1_java_nio_file_LinkOption_R_java_nio_file_Path)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_toFile_R_java_io_File 23
typedef jobject (*func_java_nio_file_Path_toFile_R_java_io_File)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_Array1_java_nio_file_WatchEvent$Modifier_R_java_nio_file_WatchKey 24
typedef jobject (*func_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_Array1_java_nio_file_WatchEvent$Modifier_R_java_nio_file_WatchKey)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define INDEX_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey 25
typedef jobject (*func_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_java_nio_file_Path_iterator_R_java_util_Iterator 26
typedef jobject (*func_java_nio_file_Path_iterator_R_java_util_Iterator)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_compareTo_java_nio_file_Path_R_int 27
typedef jint (*func_java_nio_file_Path_compareTo_java_nio_file_Path_R_int)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_equals_java_lang_Object_R_boolean 28
typedef jbool (*func_java_nio_file_Path_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_java_nio_file_Path_hashCode_R_int 29
typedef jint (*func_java_nio_file_Path_hashCode_R_int)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_toString_R_java_lang_String 30
typedef jobject (*func_java_nio_file_Path_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_java_nio_file_Path_compareTo_java_lang_Object_R_int 31
typedef jint (*func_java_nio_file_Path_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);

void mark_java_nio_file_Path(jobject object, jint mark, jint depth);
void clinit_java_nio_file_Path(jcontext ctx);
jobject SM_java_nio_file_Path_of_java_lang_String_Array1_java_lang_String_R_java_nio_file_Path(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_nio_file_Path_of_java_net_URI_R_java_nio_file_Path(jcontext ctx, jobject param0);
jbool M_java_nio_file_Path_startsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_nio_file_Path_endsWith_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_file_Path_resolve_java_lang_String_R_java_nio_file_Path(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_file_Path_resolveSibling_java_nio_file_Path_R_java_nio_file_Path(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_file_Path_resolveSibling_java_lang_String_R_java_nio_file_Path(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_file_Path_toFile_R_java_io_File(jcontext ctx, jobject self);
jobject M_java_nio_file_Path_register_java_nio_file_WatchService_Array1_java_nio_file_WatchEvent$Kind_R_java_nio_file_WatchKey(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_nio_file_Path_iterator_R_java_util_Iterator(jcontext ctx, jobject self);
jint M_java_nio_file_Path_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
