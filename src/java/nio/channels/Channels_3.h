#ifndef HEADER_java_nio_channels_Channels$3
#define HEADER_java_nio_channels_Channels$3

#include "Clearwing.h"
#include "java/io/OutputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_Channels$3 {
	java_io_OutputStream parent;
	jref F_bb;
	jref F_bs;
	jref F_b1;
	jref F_val$ch;
} java_nio_channels_Channels$3;

extern Class class_java_nio_channels_Channels$3;


#define VTABLE_java_nio_channels_Channels$3_hashCode_R_int 0
typedef jint (*func_java_nio_channels_Channels$3_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$3_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_channels_Channels$3_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Channels$3_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_channels_Channels$3_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$3_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_channels_Channels$3_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$3_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_channels_Channels$3_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$3_finalize 5
typedef void (*func_java_nio_channels_Channels$3_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$3_notify 6
typedef void (*func_java_nio_channels_Channels$3_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$3_notifyAll 7
typedef void (*func_java_nio_channels_Channels$3_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$3_wait 8
typedef void (*func_java_nio_channels_Channels$3_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$3_wait_long 9
typedef void (*func_java_nio_channels_Channels$3_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_channels_Channels$3_wait_long_int 10
typedef void (*func_java_nio_channels_Channels$3_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_channels_Channels$3_close 11
typedef void (*func_java_nio_channels_Channels$3_close)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$3_flush 12
typedef void (*func_java_nio_channels_Channels$3_flush)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$3_write_Array1_byte 13
typedef void (*func_java_nio_channels_Channels$3_write_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Channels$3_write_Array1_byte_int_int 14
typedef void (*func_java_nio_channels_Channels$3_write_Array1_byte_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_channels_Channels$3_write_int 15
typedef void (*func_java_nio_channels_Channels$3_write_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_channels_Channels$3_checkError_R_boolean 16
typedef jbool (*func_java_nio_channels_Channels$3_checkError_R_boolean)(jcontext ctx, jobject self);

void mark_java_nio_channels_Channels$3(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_Channels$3(jcontext ctx);
void init_java_nio_channels_Channels$3_java_nio_channels_AsynchronousByteChannel(jcontext ctx, jobject self, jobject param0);
void M_java_nio_channels_Channels$3_write_int(jcontext ctx, jobject self, jint param0);
void M_java_nio_channels_Channels$3_write_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_nio_channels_Channels$3_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
