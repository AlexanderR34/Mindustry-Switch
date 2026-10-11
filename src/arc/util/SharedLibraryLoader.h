#ifndef HEADER_arc_util_SharedLibraryLoader
#define HEADER_arc_util_SharedLibraryLoader

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_util_SharedLibraryLoader {
	java_lang_Object parent;
	jref F_nativesJar;
} arc_util_SharedLibraryLoader;

extern Class class_arc_util_SharedLibraryLoader;

extern jobject SF_arc_util_SharedLibraryLoader_loadedLibraries;

#define VTABLE_arc_util_SharedLibraryLoader_hashCode_R_int 0
typedef jint (*func_arc_util_SharedLibraryLoader_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_util_SharedLibraryLoader_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_util_SharedLibraryLoader_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_SharedLibraryLoader_clone_R_java_lang_Object 2
typedef jobject (*func_arc_util_SharedLibraryLoader_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_util_SharedLibraryLoader_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_util_SharedLibraryLoader_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_util_SharedLibraryLoader_toString_R_java_lang_String 4
typedef jobject (*func_arc_util_SharedLibraryLoader_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_util_SharedLibraryLoader_finalize 5
typedef void (*func_arc_util_SharedLibraryLoader_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_util_SharedLibraryLoader_notify 6
typedef void (*func_arc_util_SharedLibraryLoader_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_util_SharedLibraryLoader_notifyAll 7
typedef void (*func_arc_util_SharedLibraryLoader_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_util_SharedLibraryLoader_wait 8
typedef void (*func_arc_util_SharedLibraryLoader_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_util_SharedLibraryLoader_wait_long 9
typedef void (*func_arc_util_SharedLibraryLoader_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_util_SharedLibraryLoader_wait_long_int 10
typedef void (*func_arc_util_SharedLibraryLoader_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String 11
typedef jobject (*func_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String 12
typedef jobject (*func_arc_util_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_SharedLibraryLoader_load_java_lang_String 13
typedef void (*func_arc_util_SharedLibraryLoader_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream 14
typedef jobject (*func_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File 15
typedef jobject (*func_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_util_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File 16
typedef void (*func_arc_util_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_util_SharedLibraryLoader_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File 17
typedef jobject (*func_arc_util_SharedLibraryLoader_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean 18
typedef jbool (*func_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_SharedLibraryLoader_canExecute_java_io_File_R_boolean 19
typedef jbool (*func_arc_util_SharedLibraryLoader_canExecute_java_io_File_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File 20
typedef jobject (*func_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_util_SharedLibraryLoader_loadFile_java_lang_String 21
typedef void (*func_arc_util_SharedLibraryLoader_loadFile_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable 22
typedef jobject (*func_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_arc_util_SharedLibraryLoader(jobject object, jint mark, jint depth);
void clinit_arc_util_SharedLibraryLoader(jcontext ctx);
void init_arc_util_SharedLibraryLoader(jcontext ctx, jobject self);
void init_arc_util_SharedLibraryLoader_java_lang_String(jcontext ctx, jobject self, jobject param0);
void SM_arc_util_SharedLibraryLoader_setLoaded_java_lang_String(jcontext ctx, jobject param0);
jbool SM_arc_util_SharedLibraryLoader_isLoaded_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jobject M_arc_util_SharedLibraryLoader_crc_java_io_InputStream_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_SharedLibraryLoader_mapLibraryName_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_arc_util_SharedLibraryLoader_load_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_SharedLibraryLoader_readFile_java_lang_String_R_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_R_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_arc_util_SharedLibraryLoader_extractFileTo_java_lang_String_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_arc_util_SharedLibraryLoader_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_arc_util_SharedLibraryLoader_canWrite_java_io_File_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_arc_util_SharedLibraryLoader_canExecute_java_io_File_R_boolean(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_SharedLibraryLoader_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void M_arc_util_SharedLibraryLoader_loadFile_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_arc_util_SharedLibraryLoader_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
