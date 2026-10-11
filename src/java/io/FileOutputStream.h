#ifndef HEADER_java_io_FileOutputStream
#define HEADER_java_io_FileOutputStream

#include "Clearwing.h"
#include "java/io/OutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_FileOutputStream {
	java_io_OutputStream parent;
	jlong F_file;
	jbool F_append;
	jref F_path;
	jref F_closeLock;
	volatile jbool F_closed;
} java_io_FileOutputStream;

extern Class class_java_io_FileOutputStream;


#define VTABLE_java_io_FileOutputStream_hashCode_R_int 0
typedef jint (*func_java_io_FileOutputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_FileOutputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_FileOutputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_FileOutputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_FileOutputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_FileOutputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_finalize 5
typedef void (*func_java_io_FileOutputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_notify 6
typedef void (*func_java_io_FileOutputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_notifyAll 7
typedef void (*func_java_io_FileOutputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_wait 8
typedef void (*func_java_io_FileOutputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_wait_long 9
typedef void (*func_java_io_FileOutputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_FileOutputStream_wait_long_int 10
typedef void (*func_java_io_FileOutputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_FileOutputStream_close 11
typedef void (*func_java_io_FileOutputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_flush 12
typedef void (*func_java_io_FileOutputStream_flush)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_write_Array1_byte 13
typedef void (*func_java_io_FileOutputStream_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_FileOutputStream_write_Array1_byte_int_int 14
typedef void (*func_java_io_FileOutputStream_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_FileOutputStream_write_int 15
typedef void (*func_java_io_FileOutputStream_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_FileOutputStream_checkError_R_boolean 16
typedef jbool (*func_java_io_FileOutputStream_checkError_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_open_java_lang_String_boolean 17
typedef void (*func_java_io_FileOutputStream_open_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_java_io_FileOutputStream_write_int_boolean 18
typedef void (*func_java_io_FileOutputStream_write_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);
#define VTABLE_java_io_FileOutputStream_writeBytes_Array1_byte_int_int_boolean 19
typedef void (*func_java_io_FileOutputStream_writeBytes_Array1_byte_int_int_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
#define VTABLE_java_io_FileOutputStream_getChannel_R_java_nio_channels_FileChannel 20
typedef jobject (*func_java_io_FileOutputStream_getChannel_R_java_nio_channels_FileChannel)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileOutputStream_close0 21
typedef void (*func_java_io_FileOutputStream_close0)(jcontext ctx, jobject self);

void mark_java_io_FileOutputStream(jobject object, jint mark, jint depth);
void clinit_java_io_FileOutputStream(jcontext ctx);
void init_java_io_FileOutputStream_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_io_FileOutputStream_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void init_java_io_FileOutputStream_java_io_File(jcontext ctx, jobject self, jobject param0);
void init_java_io_FileOutputStream_java_io_File_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_java_io_FileOutputStream_open_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void M_java_io_FileOutputStream_write_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
void M_java_io_FileOutputStream_write_int(jcontext ctx, jobject self, jint param0);
void M_java_io_FileOutputStream_writeBytes_Array1_byte_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3);
void M_java_io_FileOutputStream_write_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_java_io_FileOutputStream_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_io_FileOutputStream_close(jcontext ctx, jobject self);
jobject M_java_io_FileOutputStream_getChannel_R_java_nio_channels_FileChannel(jcontext ctx, jobject self);
void M_java_io_FileOutputStream_finalize(jcontext ctx, jobject self);
void M_java_io_FileOutputStream_close0(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
