#ifndef HEADER_java_nio_channels_Channels$ReadableByteChannelImpl
#define HEADER_java_nio_channels_Channels$ReadableByteChannelImpl

#include "Clearwing.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"
#include "java/nio/channels/ReadableByteChannel.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_Channels$ReadableByteChannelImpl {
	java_nio_channels_spi_AbstractInterruptibleChannel parent;
	jref F_in;
	jref F_buf;
	jref F_readLock;
} java_nio_channels_Channels$ReadableByteChannelImpl;

extern Class class_java_nio_channels_Channels$ReadableByteChannelImpl;

extern jint SF_java_nio_channels_Channels$ReadableByteChannelImpl_TRANSFER_SIZE;

#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_hashCode_R_int 0
typedef jint (*func_java_nio_channels_Channels$ReadableByteChannelImpl_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_channels_Channels$ReadableByteChannelImpl_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_channels_Channels$ReadableByteChannelImpl_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_channels_Channels$ReadableByteChannelImpl_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_channels_Channels$ReadableByteChannelImpl_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_finalize 5
typedef void (*func_java_nio_channels_Channels$ReadableByteChannelImpl_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_notify 6
typedef void (*func_java_nio_channels_Channels$ReadableByteChannelImpl_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_notifyAll 7
typedef void (*func_java_nio_channels_Channels$ReadableByteChannelImpl_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_wait 8
typedef void (*func_java_nio_channels_Channels$ReadableByteChannelImpl_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_wait_long 9
typedef void (*func_java_nio_channels_Channels$ReadableByteChannelImpl_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_wait_long_int 10
typedef void (*func_java_nio_channels_Channels$ReadableByteChannelImpl_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_close 11
typedef void (*func_java_nio_channels_Channels$ReadableByteChannelImpl_close)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_isOpen_R_boolean 12
typedef jbool (*func_java_nio_channels_Channels$ReadableByteChannelImpl_isOpen_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_begin 13
typedef void (*func_java_nio_channels_Channels$ReadableByteChannelImpl_begin)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_end_boolean 14
typedef void (*func_java_nio_channels_Channels$ReadableByteChannelImpl_end_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_read_java_nio_ByteBuffer_R_int 15
typedef jint (*func_java_nio_channels_Channels$ReadableByteChannelImpl_read_java_nio_ByteBuffer_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_Channels$ReadableByteChannelImpl_implCloseChannel 16
typedef void (*func_java_nio_channels_Channels$ReadableByteChannelImpl_implCloseChannel)(jcontext ctx, jobject self);

void mark_java_nio_channels_Channels$ReadableByteChannelImpl(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_Channels$ReadableByteChannelImpl(jcontext ctx);
void init_java_nio_channels_Channels$ReadableByteChannelImpl_java_io_InputStream(jcontext ctx, jobject self, jobject param0);
jint M_java_nio_channels_Channels$ReadableByteChannelImpl_read_java_nio_ByteBuffer_R_int(jcontext ctx, jobject self, jobject param0);
void M_java_nio_channels_Channels$ReadableByteChannelImpl_implCloseChannel(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
