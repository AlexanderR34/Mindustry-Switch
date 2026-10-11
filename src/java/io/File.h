#ifndef HEADER_java_io_File
#define HEADER_java_io_File

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_File {
	java_lang_Object parent;
	jref F_path;
} java_io_File;

extern Class class_java_io_File;

extern jobject SF_java_io_File_pathSeparator;
extern jchar SF_java_io_File_pathSeparatorChar;
extern jobject SF_java_io_File_separator;
extern jchar SF_java_io_File_separatorChar;

#define VTABLE_java_io_File_hashCode_R_int 0
typedef jint (*func_java_io_File_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_File_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_File_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_File_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_File_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_toString_R_java_lang_String 4
typedef jobject (*func_java_io_File_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_finalize 5
typedef void (*func_java_io_File_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_notify 6
typedef void (*func_java_io_File_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_notifyAll 7
typedef void (*func_java_io_File_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_wait 8
typedef void (*func_java_io_File_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_wait_long 9
typedef void (*func_java_io_File_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_File_wait_long_int 10
typedef void (*func_java_io_File_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_File_normalizePath_java_lang_String_R_java_lang_String 11
typedef jobject (*func_java_io_File_normalizePath_java_lang_String_R_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_File_canExecute_R_boolean 12
typedef jbool (*func_java_io_File_canExecute_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_canRead_R_boolean 13
typedef jbool (*func_java_io_File_canRead_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_canWrite_R_boolean 14
typedef jbool (*func_java_io_File_canWrite_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_compareTo_java_io_File_R_int 15
typedef jint (*func_java_io_File_compareTo_java_io_File_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_File_createNewFile_R_boolean 16
typedef jbool (*func_java_io_File_createNewFile_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_delete_R_boolean 17
typedef jbool (*func_java_io_File_delete_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_deleteOnExit 18
typedef void (*func_java_io_File_deleteOnExit)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_exists_R_boolean 19
typedef jbool (*func_java_io_File_exists_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getAbsoluteFile_R_java_io_File 20
typedef jobject (*func_java_io_File_getAbsoluteFile_R_java_io_File)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getAbsolutePath_R_java_lang_String 21
typedef jobject (*func_java_io_File_getAbsolutePath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getCanonicalPath_R_java_lang_String 22
typedef jobject (*func_java_io_File_getCanonicalPath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getCanonicalFile_R_java_io_File 23
typedef jobject (*func_java_io_File_getCanonicalFile_R_java_io_File)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getFreeSpace_R_long 24
typedef jlong (*func_java_io_File_getFreeSpace_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getName_R_java_lang_String 25
typedef jobject (*func_java_io_File_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getParent_R_java_lang_String 26
typedef jobject (*func_java_io_File_getParent_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getParentFile_R_java_io_File 27
typedef jobject (*func_java_io_File_getParentFile_R_java_io_File)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getPath_R_java_lang_String 28
typedef jobject (*func_java_io_File_getPath_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getTotalSpace_R_long 29
typedef jlong (*func_java_io_File_getTotalSpace_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_getUsableSpace_R_long 30
typedef jlong (*func_java_io_File_getUsableSpace_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_isAbsolute_R_boolean 31
typedef jbool (*func_java_io_File_isAbsolute_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_isDirectory_R_boolean 32
typedef jbool (*func_java_io_File_isDirectory_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_isFile_R_boolean 33
typedef jbool (*func_java_io_File_isFile_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_isInvalid_R_boolean 34
typedef jbool (*func_java_io_File_isInvalid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_isHidden_R_boolean 35
typedef jbool (*func_java_io_File_isHidden_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_lastModified_R_long 36
typedef jlong (*func_java_io_File_lastModified_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_length_R_long 37
typedef jlong (*func_java_io_File_length_R_long)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_list_R_Array1_java_lang_String 38
typedef jobject (*func_java_io_File_list_R_Array1_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_listFiles_R_Array1_java_io_File 39
typedef jobject (*func_java_io_File_listFiles_R_Array1_java_io_File)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_listFiles_java_io_FilenameFilter_R_Array1_java_io_File 40
typedef jobject (*func_java_io_File_listFiles_java_io_FilenameFilter_R_Array1_java_io_File)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_File_listFiles_java_io_FileFilter_R_Array1_java_io_File 41
typedef jobject (*func_java_io_File_listFiles_java_io_FileFilter_R_Array1_java_io_File)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_File_mkdir_R_boolean 42
typedef jbool (*func_java_io_File_mkdir_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_mkdirs_R_boolean 43
typedef jbool (*func_java_io_File_mkdirs_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_renameTo_java_io_File_R_boolean 44
typedef jbool (*func_java_io_File_renameTo_java_io_File_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_File_setExecutable_boolean_R_boolean 45
typedef jbool (*func_java_io_File_setExecutable_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_io_File_setExecutable_boolean_boolean_R_boolean 46
typedef jbool (*func_java_io_File_setExecutable_boolean_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_java_io_File_setReadable_boolean_R_boolean 47
typedef jbool (*func_java_io_File_setReadable_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_io_File_setReadable_boolean_boolean_R_boolean 48
typedef jbool (*func_java_io_File_setReadable_boolean_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_java_io_File_setReadOnly_R_boolean 49
typedef jbool (*func_java_io_File_setReadOnly_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_setWritable_boolean_R_boolean 50
typedef jbool (*func_java_io_File_setWritable_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_io_File_setWritable_boolean_boolean_R_boolean 51
typedef jbool (*func_java_io_File_setWritable_boolean_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_java_io_File_toURI_R_java_net_URI 52
typedef jobject (*func_java_io_File_toURI_R_java_net_URI)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_toURL_R_java_net_URL 53
typedef jobject (*func_java_io_File_toURL_R_java_net_URL)(jcontext ctx, jobject self);
#define VTABLE_java_io_File_toPath_R_java_nio_file_Path 54
typedef jobject (*func_java_io_File_toPath_R_java_nio_file_Path)(jcontext ctx, jobject self);

void mark_java_io_File(jobject object, jint mark, jint depth);
void clinit_java_io_File(jcontext ctx);
void init_java_io_File_java_io_File_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_io_File_java_lang_String(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_File_normalizePath_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_io_File_java_net_URI(jcontext ctx, jobject self, jobject param0);
void init_java_io_File_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jbool M_java_io_File_canExecute_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_File_canRead_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_File_canWrite_R_boolean(jcontext ctx, jobject self);
jint M_java_io_File_compareTo_java_io_File_R_int(jcontext ctx, jobject self, jobject param0);
jbool M_java_io_File_createNewFile_R_boolean(jcontext ctx, jobject self);
jobject SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(jcontext ctx, jobject param0, jobject param1);
jobject SM_java_io_File_createTempFile_java_lang_String_java_lang_String_java_io_File_R_java_io_File(jcontext ctx, jobject param0, jobject param1, jobject param2);
jbool SM_java_io_File_createFile_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool M_java_io_File_delete_R_boolean(jcontext ctx, jobject self);
void M_java_io_File_deleteOnExit(jcontext ctx, jobject self);
jbool M_java_io_File_exists_R_boolean(jcontext ctx, jobject self);
jobject M_java_io_File_getAbsoluteFile_R_java_io_File(jcontext ctx, jobject self);
jobject M_java_io_File_getAbsolutePath_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_io_File_getCanonicalPath_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_io_File_getCanonicalFile_R_java_io_File(jcontext ctx, jobject self);
jlong M_java_io_File_getFreeSpace_R_long(jcontext ctx, jobject self);
jobject M_java_io_File_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_io_File_getParent_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_io_File_getParentFile_R_java_io_File(jcontext ctx, jobject self);
jobject M_java_io_File_getPath_R_java_lang_String(jcontext ctx, jobject self);
jlong M_java_io_File_getTotalSpace_R_long(jcontext ctx, jobject self);
jlong M_java_io_File_getUsableSpace_R_long(jcontext ctx, jobject self);
jbool M_java_io_File_isAbsolute_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_File_isDirectory_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_File_isFile_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_File_isInvalid_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_File_isHidden_R_boolean(jcontext ctx, jobject self);
jlong M_java_io_File_lastModified_R_long(jcontext ctx, jobject self);
jlong M_java_io_File_length_R_long(jcontext ctx, jobject self);
jobject M_java_io_File_list_R_Array1_java_lang_String(jcontext ctx, jobject self);
jobject M_java_io_File_listFiles_R_Array1_java_io_File(jcontext ctx, jobject self);
jobject M_java_io_File_listFiles_java_io_FilenameFilter_R_Array1_java_io_File(jcontext ctx, jobject self, jobject param0);
jobject M_java_io_File_listFiles_java_io_FileFilter_R_Array1_java_io_File(jcontext ctx, jobject self, jobject param0);
jobject SM_java_io_File_listRoots_R_Array1_java_io_File(jcontext ctx);
jbool M_java_io_File_mkdir_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_File_mkdirs_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_File_renameTo_java_io_File_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_java_io_File_setExecutable_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_io_File_setExecutable_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jbool M_java_io_File_setReadable_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_io_File_setReadable_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jbool M_java_io_File_setReadOnly_R_boolean(jcontext ctx, jobject self);
jbool M_java_io_File_setWritable_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_java_io_File_setWritable_boolean_boolean_R_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
jobject M_java_io_File_toURI_R_java_net_URI(jcontext ctx, jobject self);
jobject M_java_io_File_toURL_R_java_net_URL(jcontext ctx, jobject self);
jobject M_java_io_File_toPath_R_java_nio_file_Path(jcontext ctx, jobject self);
jobject M_java_io_File_toString_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
