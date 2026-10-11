#ifndef HEADER_mindustry_net_Packet
#define HEADER_mindustry_net_Packet

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Packet {
	java_lang_Object parent;
} mindustry_net_Packet;

extern Class class_mindustry_net_Packet;

extern jobject SF_mindustry_net_Packet_NODATA;
extern jobject SF_mindustry_net_Packet_BAIS;
extern jobject SF_mindustry_net_Packet_READ;
extern jint SF_mindustry_net_Packet_priorityLow;
extern jint SF_mindustry_net_Packet_priorityNormal;
extern jint SF_mindustry_net_Packet_priorityHigh;

#define VTABLE_mindustry_net_Packet_hashCode_R_int 0
typedef jint (*func_mindustry_net_Packet_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Packet_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packet_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Packet_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Packet_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Packet_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_finalize 5
typedef void (*func_mindustry_net_Packet_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_notify 6
typedef void (*func_mindustry_net_Packet_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_notifyAll 7
typedef void (*func_mindustry_net_Packet_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_wait 8
typedef void (*func_mindustry_net_Packet_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_wait_long 9
typedef void (*func_mindustry_net_Packet_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Packet_wait_long_int 10
typedef void (*func_mindustry_net_Packet_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Packet_read_arc_util_io_Reads 11
typedef void (*func_mindustry_net_Packet_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packet_write_arc_util_io_Writes 12
typedef void (*func_mindustry_net_Packet_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packet_allow_boolean_R_boolean 13
typedef jbool (*func_mindustry_net_Packet_allow_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_net_Packet_read_arc_util_io_Reads_int 14
typedef void (*func_mindustry_net_Packet_read_arc_util_io_Reads_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_net_Packet_handled 15
typedef void (*func_mindustry_net_Packet_handled)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_getPriority_R_int 16
typedef jint (*func_mindustry_net_Packet_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_handleClient 17
typedef void (*func_mindustry_net_Packet_handleClient)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packet_handleServer_mindustry_net_NetConnection 18
typedef void (*func_mindustry_net_Packet_handleServer_mindustry_net_NetConnection)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_net_Packet(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Packet(jcontext ctx);
void init_mindustry_net_Packet(jcontext ctx, jobject self);
void M_mindustry_net_Packet_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_Packet_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_net_Packet_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_net_Packet_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_net_Packet_handled(jcontext ctx, jobject self);
jint M_mindustry_net_Packet_getPriority_R_int(jcontext ctx, jobject self);
void M_mindustry_net_Packet_handleClient(jcontext ctx, jobject self);
void M_mindustry_net_Packet_handleServer_mindustry_net_NetConnection(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
