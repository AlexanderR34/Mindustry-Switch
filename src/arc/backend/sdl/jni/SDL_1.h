#ifndef HEADER_arc_backend_sdl_jni_SDL$1
#define HEADER_arc_backend_sdl_jni_SDL$1

#include "Clearwing.h"
#include "arc/util/SharedLibraryLoader.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_backend_sdl_jni_SDL$1 {
	arc_util_SharedLibraryLoader parent;
} arc_backend_sdl_jni_SDL$1;

extern Class class_arc_backend_sdl_jni_SDL$1;


#define VTABLE_arc_backend_sdl_jni_SDL$1_hashCode_R_int 0
typedef jint (*func_arc_backend_sdl_jni_SDL$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDL$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_backend_sdl_jni_SDL$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_jni_SDL$1_clone_R_java_lang_Object 2
typedef jobject (*func_arc_backend_sdl_jni_SDL$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDL$1_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_backend_sdl_jni_SDL$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDL$1_toString_R_java_lang_String 4
typedef jobject (*func_arc_backend_sdl_jni_SDL$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDL$1_finalize 5
typedef void (*func_arc_backend_sdl_jni_SDL$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDL$1_notify 6
typedef void (*func_arc_backend_sdl_jni_SDL$1_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDL$1_notifyAll 7
typedef void (*func_arc_backend_sdl_jni_SDL$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDL$1_wait 8
typedef void (*func_arc_backend_sdl_jni_SDL$1_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_backend_sdl_jni_SDL$1_wait_long 9
typedef void (*func_arc_backend_sdl_jni_SDL$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_backend_sdl_jni_SDL$1_wait_long_int 10
typedef void (*func_arc_backend_sdl_jni_SDL$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_backend_sdl_jni_SDL$1_crc_java_io_InputStream_R_java_lang_String 11
typedef jobject (*func_arc_backend_sdl_jni_SDL$1_crc_java_io_InputStream_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_jni_SDL$1_mapLibraryName_java_lang_String_R_java_lang_String 12
typedef jobject (*func_arc_backend_sdl_jni_SDL$1_mapLibraryName_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_jni_SDL$1_load_java_lang_String 13
typedef void (*func_arc_backend_sdl_jni_SDL$1_load_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_jni_SDL$1_readFile_java_lang_String_R_java_io_InputStream 14
typedef jobject (*func_arc_backend_sdl_jni_SDL$1_readFile_java_lang_String_R_java_io_InputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_jni_SDL$1_extractFile_java_lang_String_java_lang_String_R_java_io_File 15
typedef jobject (*func_arc_backend_sdl_jni_SDL$1_extractFile_java_lang_String_java_lang_String_R_java_io_File)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_backend_sdl_jni_SDL$1_extractFileTo_java_lang_String_java_io_File 16
typedef void (*func_arc_backend_sdl_jni_SDL$1_extractFileTo_java_lang_String_java_io_File)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_backend_sdl_jni_SDL$1_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File 17
typedef jobject (*func_arc_backend_sdl_jni_SDL$1_getExtractedFile_java_lang_String_java_lang_String_R_java_io_File)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_backend_sdl_jni_SDL$1_canWrite_java_io_File_R_boolean 18
typedef jbool (*func_arc_backend_sdl_jni_SDL$1_canWrite_java_io_File_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_jni_SDL$1_canExecute_java_io_File_R_boolean 19
typedef jbool (*func_arc_backend_sdl_jni_SDL$1_canExecute_java_io_File_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_jni_SDL$1_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File 20
typedef jobject (*func_arc_backend_sdl_jni_SDL$1_extractFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
#define VTABLE_arc_backend_sdl_jni_SDL$1_loadFile_java_lang_String 21
typedef void (*func_arc_backend_sdl_jni_SDL$1_loadFile_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_backend_sdl_jni_SDL$1_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable 22
typedef jobject (*func_arc_backend_sdl_jni_SDL$1_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable)(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

void mark_arc_backend_sdl_jni_SDL$1(jobject object, jint mark, jint depth);
void clinit_arc_backend_sdl_jni_SDL$1(jcontext ctx);
void init_arc_backend_sdl_jni_SDL$1(jcontext ctx, jobject self);
jobject M_arc_backend_sdl_jni_SDL$1_loadFile_java_lang_String_java_lang_String_java_io_File_R_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
