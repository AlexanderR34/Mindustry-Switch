#ifndef HEADER_java_nio_channels_SelectionKey
#define HEADER_java_nio_channels_SelectionKey

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct java_nio_channels_SelectionKey {
	java_lang_Object parent;
	volatile jref F_attachment;
} java_nio_channels_SelectionKey;

extern Class class_java_nio_channels_SelectionKey;

extern jint SF_java_nio_channels_SelectionKey_OP_READ;
extern jint SF_java_nio_channels_SelectionKey_OP_WRITE;
extern jint SF_java_nio_channels_SelectionKey_OP_CONNECT;
extern jint SF_java_nio_channels_SelectionKey_OP_ACCEPT;
extern jobject SF_java_nio_channels_SelectionKey_attachmentUpdater;

#define VTABLE_java_nio_channels_SelectionKey_hashCode_R_int 0
typedef jint (*func_java_nio_channels_SelectionKey_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_java_nio_channels_SelectionKey_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_SelectionKey_clone_R_java_lang_Object 2
typedef jobject (*func_java_nio_channels_SelectionKey_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_getClass_R_java_lang_Class 3
typedef jobject (*func_java_nio_channels_SelectionKey_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_toString_R_java_lang_String 4
typedef jobject (*func_java_nio_channels_SelectionKey_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_finalize 5
typedef void (*func_java_nio_channels_SelectionKey_finalize)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_notify 6
typedef void (*func_java_nio_channels_SelectionKey_notify)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_notifyAll 7
typedef void (*func_java_nio_channels_SelectionKey_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_wait 8
typedef void (*func_java_nio_channels_SelectionKey_wait)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_wait_long 9
typedef void (*func_java_nio_channels_SelectionKey_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_java_nio_channels_SelectionKey_wait_long_int 10
typedef void (*func_java_nio_channels_SelectionKey_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_java_nio_channels_SelectionKey_channel_R_java_nio_channels_SelectableChannel 11
typedef jobject (*func_java_nio_channels_SelectionKey_channel_R_java_nio_channels_SelectableChannel)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_selector_R_java_nio_channels_Selector 12
typedef jobject (*func_java_nio_channels_SelectionKey_selector_R_java_nio_channels_Selector)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_isValid_R_boolean 13
typedef jbool (*func_java_nio_channels_SelectionKey_isValid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_cancel 14
typedef void (*func_java_nio_channels_SelectionKey_cancel)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_interestOps_R_int 15
typedef jint (*func_java_nio_channels_SelectionKey_interestOps_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_interestOps_int_R_java_nio_channels_SelectionKey 16
typedef jobject (*func_java_nio_channels_SelectionKey_interestOps_int_R_java_nio_channels_SelectionKey)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_channels_SelectionKey_interestOpsOr_int_R_int 17
typedef jint (*func_java_nio_channels_SelectionKey_interestOpsOr_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_channels_SelectionKey_interestOpsAnd_int_R_int 18
typedef jint (*func_java_nio_channels_SelectionKey_interestOpsAnd_int_R_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_java_nio_channels_SelectionKey_readyOps_R_int 19
typedef jint (*func_java_nio_channels_SelectionKey_readyOps_R_int)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_isReadable_R_boolean 20
typedef jbool (*func_java_nio_channels_SelectionKey_isReadable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_isWritable_R_boolean 21
typedef jbool (*func_java_nio_channels_SelectionKey_isWritable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_isConnectable_R_boolean 22
typedef jbool (*func_java_nio_channels_SelectionKey_isConnectable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_isAcceptable_R_boolean 23
typedef jbool (*func_java_nio_channels_SelectionKey_isAcceptable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_java_nio_channels_SelectionKey_attach_java_lang_Object_R_java_lang_Object 24
typedef jobject (*func_java_nio_channels_SelectionKey_attach_java_lang_Object_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_java_nio_channels_SelectionKey_attachment_R_java_lang_Object 25
typedef jobject (*func_java_nio_channels_SelectionKey_attachment_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_java_nio_channels_SelectionKey(jobject object, jint mark, jint depth);
void clinit_java_nio_channels_SelectionKey(jcontext ctx);
void init_java_nio_channels_SelectionKey(jcontext ctx, jobject self);
jint M_java_nio_channels_SelectionKey_interestOpsOr_int_R_int(jcontext ctx, jobject self, jint param0);
jint M_java_nio_channels_SelectionKey_interestOpsAnd_int_R_int(jcontext ctx, jobject self, jint param0);
jbool M_java_nio_channels_SelectionKey_isReadable_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_channels_SelectionKey_isWritable_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_channels_SelectionKey_isConnectable_R_boolean(jcontext ctx, jobject self);
jbool M_java_nio_channels_SelectionKey_isAcceptable_R_boolean(jcontext ctx, jobject self);
jobject M_java_nio_channels_SelectionKey_attach_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jobject M_java_nio_channels_SelectionKey_attachment_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
