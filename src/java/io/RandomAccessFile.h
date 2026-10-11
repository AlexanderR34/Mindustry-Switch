#ifndef HEADER_java_io_RandomAccessFile
#define HEADER_java_io_RandomAccessFile

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "java/io/Closeable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_RandomAccessFile {
	java_lang_Object parent;
} java_io_RandomAccessFile;

extern Class class_java_io_RandomAccessFile;


#define VTABLE_java_io_RandomAccessFile_hashCode_R_int 0
typedef jint (*func_java_io_RandomAccessFile_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_RandomAccessFile_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_RandomAccessFile_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_RandomAccessFile_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_RandomAccessFile_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_RandomAccessFile_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_RandomAccessFile_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_RandomAccessFile_toString_R_java_lang_String 4
typedef jobject (*func_java_io_RandomAccessFile_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_RandomAccessFile_finalize 5
typedef void (*func_java_io_RandomAccessFile_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_RandomAccessFile_notify 6
typedef void (*func_java_io_RandomAccessFile_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_RandomAccessFile_notifyAll 7
typedef void (*func_java_io_RandomAccessFile_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_RandomAccessFile_wait 8
typedef void (*func_java_io_RandomAccessFile_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_RandomAccessFile_wait_long 9
typedef void (*func_java_io_RandomAccessFile_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_RandomAccessFile_wait_long_int 10
typedef void (*func_java_io_RandomAccessFile_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_RandomAccessFile_close 11
typedef void (*func_java_io_RandomAccessFile_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_RandomAccessFile_getChannel_R_java_nio_channels_FileChannel 12
typedef jobject (*func_java_io_RandomAccessFile_getChannel_R_java_nio_channels_FileChannel)(jcontext ctx, jobject self);

void mark_java_io_RandomAccessFile(jobject object, jint mark, jint depth);
void clinit_java_io_RandomAccessFile(jcontext ctx);
void init_java_io_RandomAccessFile_java_io_File_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_java_io_RandomAccessFile_getChannel_R_java_nio_channels_FileChannel(jcontext ctx, jobject self);
void M_java_io_RandomAccessFile_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
