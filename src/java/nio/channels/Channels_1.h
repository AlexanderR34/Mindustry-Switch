#ifndef HEADER_java_nio_channels_Channels$1
#define HEADER_java_nio_channels_Channels$1

#include "Clearwing.h"
#include "java/io/OutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_Channels$1 {
	java_io_OutputStream parent;
	jref F_bb;
	jref F_bs;
	jref F_b1;
	jref F_val$ch;
} java_nio_channels_Channels$1;

extern Class class_java_nio_channels_Channels$1;


#define VTABLE_java_nio_channels_Channels$1_hashCode_R_int 0
typedef jint (*func_java_nio_channels_Channels$1_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$1_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_channels_Channels$1_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Channels$1_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_channels_Channels$1_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$1_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_channels_Channels$1_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$1_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_channels_Channels$1_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$1_finalize 5
typedef void (*func_java_nio_channels_Channels$1_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$1_notify 6
typedef void (*func_java_nio_channels_Channels$1_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$1_notifyAll 7
typedef void (*func_java_nio_channels_Channels$1_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$1_wait 8
typedef void (*func_java_nio_channels_Channels$1_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$1_wait_long 9
typedef void (*func_java_nio_channels_Channels$1_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_channels_Channels$1_wait_long_int 10
typedef void (*func_java_nio_channels_Channels$1_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_channels_Channels$1_close 11
typedef void (*func_java_nio_channels_Channels$1_close)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$1_flush 12
typedef void (*func_java_nio_channels_Channels$1_flush)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$1_write_Array1_byte 13
typedef void (*func_java_nio_channels_Channels$1_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Channels$1_write_Array1_byte_int_int 14
typedef void (*func_java_nio_channels_Channels$1_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_channels_Channels$1_write_int 15
typedef void (*func_java_nio_channels_Channels$1_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_channels_Channels$1_checkError_R_boolean 16
typedef jbool (*func_java_nio_channels_Channels$1_checkError_R_boolean)(jcontext ctx, jobject self);

void mark_java_nio_channels_Channels$1(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_Channels$1(jcontext ctx);
void init_java_nio_channels_Channels$1_java_nio_channels_WritableByteChannel(jcontext ctx, jobject self, jobject param0);
void M_java_nio_channels_Channels$1_write_int(jcontext ctx, jobject self, jint param0);
void M_java_nio_channels_Channels$1_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_nio_channels_Channels$1_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
