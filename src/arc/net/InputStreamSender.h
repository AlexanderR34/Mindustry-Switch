#ifndef HEADER_arc_net_InputStreamSender
#define HEADER_arc_net_InputStreamSender

#include "Clearwing.h"
#include "arc/net/TcpIdleSender.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_net_InputStreamSender {
	arc_net_TcpIdleSender parent;
	jref F_input;
	jref F_chunk;
} arc_net_InputStreamSender;

extern Class class_arc_net_InputStreamSender;


#define VTABLE_arc_net_InputStreamSender_hashCode_R_int 0
typedef jint (*func_arc_net_InputStreamSender_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_net_InputStreamSender_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_net_InputStreamSender_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_InputStreamSender_clone_R_java_lang_Object 2
typedef jobject (*func_arc_net_InputStreamSender_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_InputStreamSender_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_net_InputStreamSender_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_net_InputStreamSender_toString_R_java_lang_String 4
typedef jobject (*func_arc_net_InputStreamSender_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_net_InputStreamSender_finalize 5
typedef void (*func_arc_net_InputStreamSender_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_net_InputStreamSender_notify 6
typedef void (*func_arc_net_InputStreamSender_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_net_InputStreamSender_notifyAll 7
typedef void (*func_arc_net_InputStreamSender_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_net_InputStreamSender_wait 8
typedef void (*func_arc_net_InputStreamSender_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_net_InputStreamSender_wait_long 9
typedef void (*func_arc_net_InputStreamSender_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_net_InputStreamSender_wait_long_int 10
typedef void (*func_arc_net_InputStreamSender_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_arc_net_InputStreamSender_connected_arc_net_Connection 11
typedef void (*func_arc_net_InputStreamSender_connected_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_InputStreamSender_disconnected_arc_net_Connection_arc_net_DcReason 12
typedef void (*func_arc_net_InputStreamSender_disconnected_arc_net_Connection_arc_net_DcReason)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_InputStreamSender_received_arc_net_Connection_java_lang_Object 13
typedef void (*func_arc_net_InputStreamSender_received_arc_net_Connection_java_lang_Object)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_arc_net_InputStreamSender_idle_arc_net_Connection 14
typedef void (*func_arc_net_InputStreamSender_idle_arc_net_Connection)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_net_InputStreamSender_start 15
typedef void (*func_arc_net_InputStreamSender_start)(jcontext ctx, jobject self);
#define VTABLE_arc_net_InputStreamSender_next_R_java_lang_Object 16
typedef jobject (*func_arc_net_InputStreamSender_next_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_net_InputStreamSender_next_Array1_byte_R_java_lang_Object 17
typedef jobject (*func_arc_net_InputStreamSender_next_Array1_byte_R_java_lang_Object)(jcontext ctx, jobject self, jobject param0);

void mark_arc_net_InputStreamSender(jobject object, jint mark, jint depth);
void clinit_arc_net_InputStreamSender(jcontext ctx);
void init_arc_net_InputStreamSender_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1);
jobject M_arc_net_InputStreamSender_next_R_java_lang_Object(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
