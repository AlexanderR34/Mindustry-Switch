#ifndef HEADER_java_nio_channels_Channels$WritableByteChannelImpl
#define HEADER_java_nio_channels_Channels$WritableByteChannelImpl

#include "Clearwing.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"
#include "java/nio/channels/WritableByteChannel.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_Channels$WritableByteChannelImpl {
	java_nio_channels_spi_AbstractInterruptibleChannel parent;
	jref F_out;
	jref F_buf;
	jref F_writeLock;
} java_nio_channels_Channels$WritableByteChannelImpl;

extern Class class_java_nio_channels_Channels$WritableByteChannelImpl;

extern jint SF_java_nio_channels_Channels$WritableByteChannelImpl_TRANSFER_SIZE;

#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_hashCode_R_int 0
typedef jint (*func_java_nio_channels_Channels$WritableByteChannelImpl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_channels_Channels$WritableByteChannelImpl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_channels_Channels$WritableByteChannelImpl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_channels_Channels$WritableByteChannelImpl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_channels_Channels$WritableByteChannelImpl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_finalize 5
typedef void (*func_java_nio_channels_Channels$WritableByteChannelImpl_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_notify 6
typedef void (*func_java_nio_channels_Channels$WritableByteChannelImpl_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_notifyAll 7
typedef void (*func_java_nio_channels_Channels$WritableByteChannelImpl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_wait 8
typedef void (*func_java_nio_channels_Channels$WritableByteChannelImpl_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_wait_long 9
typedef void (*func_java_nio_channels_Channels$WritableByteChannelImpl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_wait_long_int 10
typedef void (*func_java_nio_channels_Channels$WritableByteChannelImpl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_close 11
typedef void (*func_java_nio_channels_Channels$WritableByteChannelImpl_close)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_isOpen_R_boolean 12
typedef jbool (*func_java_nio_channels_Channels$WritableByteChannelImpl_isOpen_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_begin 13
typedef void (*func_java_nio_channels_Channels$WritableByteChannelImpl_begin)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_end_boolean 14
typedef void (*func_java_nio_channels_Channels$WritableByteChannelImpl_end_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_write_java_nio_ByteBuffer_R_int 15
typedef jint (*func_java_nio_channels_Channels$WritableByteChannelImpl_write_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Channels$WritableByteChannelImpl_implCloseChannel 16
typedef void (*func_java_nio_channels_Channels$WritableByteChannelImpl_implCloseChannel)(jcontext ctx, jobject self);

void mark_java_nio_channels_Channels$WritableByteChannelImpl(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_Channels$WritableByteChannelImpl(jcontext ctx);
void init_java_nio_channels_Channels$WritableByteChannelImpl_java_io_OutputStream(jcontext ctx, jobject self, jobject param0);
jint M_java_nio_channels_Channels$WritableByteChannelImpl_write_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0);
void M_java_nio_channels_Channels$WritableByteChannelImpl_implCloseChannel(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
