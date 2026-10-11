#ifndef HEADER_java_nio_channels_Channels$2
#define HEADER_java_nio_channels_Channels$2

#include "Clearwing.h"
#include "java/io/InputStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_Channels$2 {
	java_io_InputStream parent;
	jref F_bb;
	jref F_bs;
	jref F_b1;
	jref F_val$ch;
} java_nio_channels_Channels$2;

extern Class class_java_nio_channels_Channels$2;


#define VTABLE_java_nio_channels_Channels$2_hashCode_R_int 0
typedef jint (*func_java_nio_channels_Channels$2_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_channels_Channels$2_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Channels$2_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_channels_Channels$2_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_channels_Channels$2_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_channels_Channels$2_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_finalize 5
typedef void (*func_java_nio_channels_Channels$2_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_notify 6
typedef void (*func_java_nio_channels_Channels$2_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_notifyAll 7
typedef void (*func_java_nio_channels_Channels$2_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_wait 8
typedef void (*func_java_nio_channels_Channels$2_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_wait_long 9
typedef void (*func_java_nio_channels_Channels$2_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_channels_Channels$2_wait_long_int 10
typedef void (*func_java_nio_channels_Channels$2_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_channels_Channels$2_close 11
typedef void (*func_java_nio_channels_Channels$2_close)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_available_R_int 12
typedef jint (*func_java_nio_channels_Channels$2_available_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_mark_int 13
typedef void (*func_java_nio_channels_Channels$2_mark_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_channels_Channels$2_markSupported_R_boolean 14
typedef jbool (*func_java_nio_channels_Channels$2_markSupported_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_read_R_int 15
typedef jint (*func_java_nio_channels_Channels$2_read_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_read_Array1_byte_R_int 16
typedef jint (*func_java_nio_channels_Channels$2_read_Array1_byte_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Channels$2_read_Array1_byte_int_int_R_int 17
typedef jint (*func_java_nio_channels_Channels$2_read_Array1_byte_int_int_R_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_java_nio_channels_Channels$2_reset 18
typedef void (*func_java_nio_channels_Channels$2_reset)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$2_skip_long_R_long 19
typedef jlong (*func_java_nio_channels_Channels$2_skip_long_R_long)(jcontext ctx, jobject self, jlong param0);

void mark_java_nio_channels_Channels$2(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_Channels$2(jcontext ctx);
void init_java_nio_channels_Channels$2_java_nio_channels_AsynchronousByteChannel(jcontext ctx, jobject self, jobject param0);
jint M_java_nio_channels_Channels$2_read_R_int(jcontext ctx, jobject self);
jint M_java_nio_channels_Channels$2_read_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_java_nio_channels_Channels$2_close(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
