#ifndef HEADER_mindustry_gen_UnitSafeDeathCallPacket
#define HEADER_mindustry_gen_UnitSafeDeathCallPacket

#include "Clearwing.h"
#include "mindustry/net/Packet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_UnitSafeDeathCallPacket {
	mindustry_net_Packet parent;
	jref F_DATA;
	jref F_unit;
} mindustry_gen_UnitSafeDeathCallPacket;

extern Class class_mindustry_gen_UnitSafeDeathCallPacket;


#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_hashCode_R_int 0
typedef jint (*func_mindustry_gen_UnitSafeDeathCallPacket_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_UnitSafeDeathCallPacket_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_UnitSafeDeathCallPacket_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_UnitSafeDeathCallPacket_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_UnitSafeDeathCallPacket_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_finalize 5
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_notify 6
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_notifyAll 7
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_wait 8
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_wait_long 9
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_wait_long_int 10
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_read_arc_util_io_Reads 11
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_write_arc_util_io_Writes 12
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_allow_boolean_R_boolean 13
typedef jbool (*func_mindustry_gen_UnitSafeDeathCallPacket_allow_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_read_arc_util_io_Reads_int 14
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_read_arc_util_io_Reads_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_handled 15
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_handled)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_getPriority_R_int 16
typedef jint (*func_mindustry_gen_UnitSafeDeathCallPacket_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_handleClient 17
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_handleClient)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_UnitSafeDeathCallPacket_handleServer_mindustry_net_NetConnection 18
typedef void (*func_mindustry_gen_UnitSafeDeathCallPacket_handleServer_mindustry_net_NetConnection)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_UnitSafeDeathCallPacket(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_UnitSafeDeathCallPacket(jcontext ctx);
void init_mindustry_gen_UnitSafeDeathCallPacket(jcontext ctx, jobject self);
void M_mindustry_gen_UnitSafeDeathCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_UnitSafeDeathCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_gen_UnitSafeDeathCallPacket_handled(jcontext ctx, jobject self);
void M_mindustry_gen_UnitSafeDeathCallPacket_handleClient(jcontext ctx, jobject self);
jbool M_mindustry_gen_UnitSafeDeathCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
