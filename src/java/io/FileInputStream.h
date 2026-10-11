#ifndef HEADER_java_io_FileInputStream
#define HEADER_java_io_FileInputStream

#include "Clearwing.h"
#include "java/io/InputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_io_FileInputStream {
	java_io_InputStream parent;
	jlong F_file;
	jref F_path;
	jref F_closeLock;
	volatile jbool F_closed;
} java_io_FileInputStream;

extern Class class_java_io_FileInputStream;


#define VTABLE_java_io_FileInputStream_hashCode_R_int 0
typedef jint (*func_java_io_FileInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_io_FileInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_FileInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_io_FileInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_io_FileInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_io_FileInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_finalize 5
typedef void (*func_java_io_FileInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_notify 6
typedef void (*func_java_io_FileInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_notifyAll 7
typedef void (*func_java_io_FileInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_wait 8
typedef void (*func_java_io_FileInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_wait_long 9
typedef void (*func_java_io_FileInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_FileInputStream_wait_long_int 10
typedef void (*func_java_io_FileInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_io_FileInputStream_close 11
typedef void (*func_java_io_FileInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_available_R_int 12
typedef jint (*func_java_io_FileInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_mark_int 13
typedef void (*func_java_io_FileInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_io_FileInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_io_FileInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_read_R_int 15
typedef jint (*func_java_io_FileInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_io_FileInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_FileInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_io_FileInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_FileInputStream_reset 18
typedef void (*func_java_io_FileInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_skip_long_R_long 19
typedef jlong (*func_java_io_FileInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_io_FileInputStream_open_java_lang_String 20
typedef void (*func_java_io_FileInputStream_open_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_io_FileInputStream_readBytes_Array1_byte_int_int_R_int 21
typedef jint (*func_java_io_FileInputStream_readBytes_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel 22
typedef jobject (*func_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel)(jcontext ctx, jobject self);
#define VTABLE_java_io_FileInputStream_close0 23
typedef void (*func_java_io_FileInputStream_close0)(jcontext ctx, jobject self);

void mark_java_io_FileInputStream(jobject object, jint mark, jint depth);
void clinit_java_io_FileInputStream(jcontext ctx);
void init_java_io_FileInputStream_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_java_io_FileInputStream_java_io_File(jcontext ctx, jobject self, jobject param0);
void init_java_io_FileInputStream_java_io_FileDescriptor(jcontext ctx, jobject self, jobject param0);
void M_java_io_FileInputStream_open_java_lang_String(jcontext ctx, jobject self, jobject param0);
jint M_java_io_FileInputStream_read_R_int(jcontext ctx, jobject self);
jint M_java_io_FileInputStream_readBytes_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_java_io_FileInputStream_read_Array1_byte_R_int(jcontext ctx, jobject self, jobject param0);
jint M_java_io_FileInputStream_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jlong M_java_io_FileInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0);
jint M_java_io_FileInputStream_available_R_int(jcontext ctx, jobject self);
void M_java_io_FileInputStream_close(jcontext ctx, jobject self);
jobject M_java_io_FileInputStream_getChannel_R_java_nio_channels_FileChannel(jcontext ctx, jobject self);
void M_java_io_FileInputStream_close0(jcontext ctx, jobject self);
void M_java_io_FileInputStream_finalize(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
