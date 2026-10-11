#ifndef HEADER_mindustry_net_Packets$StreamChunk
#define HEADER_mindustry_net_Packets$StreamChunk

#include "Clearwing.h"
#include "mindustry/net/Packet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Packets$StreamChunk {
	mindustry_net_Packet parent;
	jint F_id;
	jref F_data;
} mindustry_net_Packets$StreamChunk;

extern Class class_mindustry_net_Packets$StreamChunk;


#define VTABLE_mindustry_net_Packets$StreamChunk_hashCode_R_int 0
typedef jint (*func_mindustry_net_Packets$StreamChunk_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Packets$StreamChunk_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$StreamChunk_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Packets$StreamChunk_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Packets$StreamChunk_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Packets$StreamChunk_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_finalize 5
typedef void (*func_mindustry_net_Packets$StreamChunk_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_notify 6
typedef void (*func_mindustry_net_Packets$StreamChunk_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_notifyAll 7
typedef void (*func_mindustry_net_Packets$StreamChunk_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_wait 8
typedef void (*func_mindustry_net_Packets$StreamChunk_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_wait_long 9
typedef void (*func_mindustry_net_Packets$StreamChunk_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Packets$StreamChunk_wait_long_int 10
typedef void (*func_mindustry_net_Packets$StreamChunk_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Packets$StreamChunk_read_arc_util_io_Reads 11
typedef void (*func_mindustry_net_Packets$StreamChunk_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$StreamChunk_write_arc_util_io_Writes 12
typedef void (*func_mindustry_net_Packets$StreamChunk_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$StreamChunk_allow_boolean_R_boolean 13
typedef jbool (*func_mindustry_net_Packets$StreamChunk_allow_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_net_Packets$StreamChunk_read_arc_util_io_Reads_int 14
typedef void (*func_mindustry_net_Packets$StreamChunk_read_arc_util_io_Reads_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_net_Packets$StreamChunk_handled 15
typedef void (*func_mindustry_net_Packets$StreamChunk_handled)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_getPriority_R_int 16
typedef jint (*func_mindustry_net_Packets$StreamChunk_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_handleClient 17
typedef void (*func_mindustry_net_Packets$StreamChunk_handleClient)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$StreamChunk_handleServer_mindustry_net_NetConnection 18
typedef void (*func_mindustry_net_Packets$StreamChunk_handleServer_mindustry_net_NetConnection)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_net_Packets$StreamChunk(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Packets$StreamChunk(jcontext ctx);
void init_mindustry_net_Packets$StreamChunk(jcontext ctx, jobject self);
jbool M_mindustry_net_Packets$StreamChunk_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_net_Packets$StreamChunk_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_net_Packets$StreamChunk_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
