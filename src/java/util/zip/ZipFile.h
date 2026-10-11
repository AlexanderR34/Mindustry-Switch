#ifndef HEADER_java_util_zip_ZipFile
#define HEADER_java_util_zip_ZipFile

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/util/zip/ZipConstants.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_util_zip_ZipFile {
	java_lang_Object parent;
	jlong F_handle;
	jref F_name;
	jref F_entries;
} java_util_zip_ZipFile;

extern Class class_java_util_zip_ZipFile;

extern jint SF_java_util_zip_ZipFile_OPEN_READ;
extern jint SF_java_util_zip_ZipFile_OPEN_DELETE;

#define VTABLE_java_util_zip_ZipFile_hashCode_R_int 0
typedef jint (*func_java_util_zip_ZipFile_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_util_zip_ZipFile_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipFile_clone_R_java_lang_Object 2
typedef jobject (*func_java_util_zip_ZipFile_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_getClass_R_java_lang_Class 3
typedef jobject (*func_java_util_zip_ZipFile_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_toString_R_java_lang_String 4
typedef jobject (*func_java_util_zip_ZipFile_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_finalize 5
typedef void (*func_java_util_zip_ZipFile_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_notify 6
typedef void (*func_java_util_zip_ZipFile_notify)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_notifyAll 7
typedef void (*func_java_util_zip_ZipFile_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_wait 8
typedef void (*func_java_util_zip_ZipFile_wait)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_wait_long 9
typedef void (*func_java_util_zip_ZipFile_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_util_zip_ZipFile_wait_long_int 10
typedef void (*func_java_util_zip_ZipFile_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_util_zip_ZipFile_close 11
typedef void (*func_java_util_zip_ZipFile_close)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_getComment_R_java_lang_String 12
typedef jobject (*func_java_util_zip_ZipFile_getComment_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_getEntry_java_lang_String_R_java_util_zip_ZipEntry 13
typedef jobject (*func_java_util_zip_ZipFile_getEntry_java_lang_String_R_java_util_zip_ZipEntry)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream 14
typedef jobject (*func_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_util_zip_ZipFile_getName_R_java_lang_String 15
typedef jobject (*func_java_util_zip_ZipFile_getName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_entries_R_java_util_Enumeration 16
typedef jobject (*func_java_util_zip_ZipFile_entries_R_java_util_Enumeration)(jcontext ctx, jobject self);
#define VTABLE_java_util_zip_ZipFile_size_R_int 17
typedef jint (*func_java_util_zip_ZipFile_size_R_int)(jcontext ctx, jobject self);

void mark_java_util_zip_ZipFile(jobject object, jint mark, jint depth);
void clinit_java_util_zip_ZipFile(jcontext ctx);
void init_java_util_zip_ZipFile_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_util_zip_ZipFile_java_io_File_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_java_util_zip_ZipFile_java_io_File(jcontext ctx, jobject self, jobject param0);
void init_java_util_zip_ZipFile_java_lang_String_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_zip_ZipFile_java_io_File_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_java_util_zip_ZipFile_java_io_File_int_java_nio_charset_Charset(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2);
jobject M_java_util_zip_ZipFile_getComment_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_zip_ZipFile_getEntry_java_lang_String_R_java_util_zip_ZipEntry(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_zip_ZipFile_getInputStream_java_util_zip_ZipEntry_R_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
jobject M_java_util_zip_ZipFile_getName_R_java_lang_String(jcontext ctx, jobject self);
jobject M_java_util_zip_ZipFile_entries_R_java_util_Enumeration(jcontext ctx, jobject self);
jint M_java_util_zip_ZipFile_size_R_int(jcontext ctx, jobject self);
void M_java_util_zip_ZipFile_close(jcontext ctx, jobject self);
jlong SM_java_util_zip_ZipFile_open_java_lang_String_java_util_ArrayList_R_long(jcontext ctx, jobject param0, jobject param1);
void SM_java_util_zip_ZipFile_close0_long(jcontext ctx, jlong param0);
jlong SM_java_util_zip_ZipFile_openEntry_long_java_lang_String_R_long(jcontext ctx, jlong param0, jobject param1);
jint SM_java_util_zip_ZipFile_readEntry_long_R_int(jcontext ctx, jlong param0);
void SM_java_util_zip_ZipFile_closeEntry_long(jcontext ctx, jlong param0);
jlong SM_java_util_zip_ZipFile_access$000_java_util_zip_ZipFile_R_long(jcontext ctx, jobject param0);
jlong SM_java_util_zip_ZipFile_access$100_long_java_lang_String_R_long(jcontext ctx, jlong param0, jobject param1);
jint SM_java_util_zip_ZipFile_access$200_long_R_int(jcontext ctx, jlong param0);
void SM_java_util_zip_ZipFile_access$300_long(jcontext ctx, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
