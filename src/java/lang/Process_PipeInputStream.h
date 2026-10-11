#ifndef HEADER_java_lang_Process$PipeInputStream
#define HEADER_java_lang_Process$PipeInputStream

#include "Clearwing.h"
#include "java/io/FileInputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_lang_Process$PipeInputStream {
	java_io_FileInputStream parent;
} java_lang_Process$PipeInputStream;

extern Class class_java_lang_Process$PipeInputStream;


#define VTABLE_java_lang_Process$PipeInputStream_hashCode_R_int 0
typedef jint (*func_java_lang_Process$PipeInputStream_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_lang_Process$PipeInputStream_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Process$PipeInputStream_clone_R_java_lang_Object 2
typedef jobject (*func_java_lang_Process$PipeInputStream_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_getClass_R_java_lang_Class 3
typedef jobject (*func_java_lang_Process$PipeInputStream_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_toString_R_java_lang_String 4
typedef jobject (*func_java_lang_Process$PipeInputStream_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_finalize 5
typedef void (*func_java_lang_Process$PipeInputStream_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_notify 6
typedef void (*func_java_lang_Process$PipeInputStream_notify)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_notifyAll 7
typedef void (*func_java_lang_Process$PipeInputStream_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_wait 8
typedef void (*func_java_lang_Process$PipeInputStream_wait)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_wait_long 9
typedef void (*func_java_lang_Process$PipeInputStream_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Process$PipeInputStream_wait_long_int 10
typedef void (*func_java_lang_Process$PipeInputStream_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_lang_Process$PipeInputStream_close 11
typedef void (*func_java_lang_Process$PipeInputStream_close)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_available_R_int 12
typedef jint (*func_java_lang_Process$PipeInputStream_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_mark_int 13
typedef void (*func_java_lang_Process$PipeInputStream_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_lang_Process$PipeInputStream_markSupported_R_boolean 14
typedef jbool (*func_java_lang_Process$PipeInputStream_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_read_R_int 15
typedef jint (*func_java_lang_Process$PipeInputStream_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_read_Array1_byte_R_int 16
typedef jint (*func_java_lang_Process$PipeInputStream_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Process$PipeInputStream_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_lang_Process$PipeInputStream_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_lang_Process$PipeInputStream_reset 18
typedef void (*func_java_lang_Process$PipeInputStream_reset)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_skip_long_R_long 19
typedef jlong (*func_java_lang_Process$PipeInputStream_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_lang_Process$PipeInputStream_open_java_lang_String 20
typedef void (*func_java_lang_Process$PipeInputStream_open_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_lang_Process$PipeInputStream_readBytes_Array1_byte_int_int_R_int 21
typedef jint (*func_java_lang_Process$PipeInputStream_readBytes_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_lang_Process$PipeInputStream_getChannel_R_java_nio_channels_FileChannel 22
typedef jobject (*func_java_lang_Process$PipeInputStream_getChannel_R_java_nio_channels_FileChannel)(jcontext ctx, jobject self);
#define VTABLE_java_lang_Process$PipeInputStream_close0 23
typedef void (*func_java_lang_Process$PipeInputStream_close0)(jcontext ctx, jobject self);

void mark_java_lang_Process$PipeInputStream(jobject object, jint mark, jint depth);
void clinit_java_lang_Process$PipeInputStream(jcontext ctx);
void init_java_lang_Process$PipeInputStream_java_io_FileDescriptor(jcontext ctx, jobject self, jobject param0);
jlong M_java_lang_Process$PipeInputStream_skip_long_R_long(jcontext ctx, jobject self, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
