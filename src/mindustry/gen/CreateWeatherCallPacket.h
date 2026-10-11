#ifndef HEADER_mindustry_gen_CreateWeatherCallPacket
#define HEADER_mindustry_gen_CreateWeatherCallPacket

#include "Clearwing.h"
#include "mindustry/net/Packet.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_CreateWeatherCallPacket {
	mindustry_net_Packet parent;
	jref F_DATA;
	jref F_weather;
	jfloat F_intensity;
	jfloat F_duration;
	jfloat F_windX;
	jfloat F_windY;
} mindustry_gen_CreateWeatherCallPacket;

extern Class class_mindustry_gen_CreateWeatherCallPacket;


#define VTABLE_mindustry_gen_CreateWeatherCallPacket_hashCode_R_int 0
typedef jint (*func_mindustry_gen_CreateWeatherCallPacket_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_CreateWeatherCallPacket_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_CreateWeatherCallPacket_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_CreateWeatherCallPacket_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_CreateWeatherCallPacket_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_finalize 5
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_notify 6
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_notifyAll 7
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_wait 8
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_wait_long 9
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_wait_long_int 10
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_read_arc_util_io_Reads 11
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_write_arc_util_io_Writes 12
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_allow_boolean_R_boolean 13
typedef jbool (*func_mindustry_gen_CreateWeatherCallPacket_allow_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_read_arc_util_io_Reads_int 14
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_read_arc_util_io_Reads_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_handled 15
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_handled)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_getPriority_R_int 16
typedef jint (*func_mindustry_gen_CreateWeatherCallPacket_getPriority_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_handleClient 17
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_handleClient)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_CreateWeatherCallPacket_handleServer_mindustry_net_NetConnection 18
typedef void (*func_mindustry_gen_CreateWeatherCallPacket_handleServer_mindustry_net_NetConnection)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_CreateWeatherCallPacket(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_CreateWeatherCallPacket(jcontext ctx);
void init_mindustry_gen_CreateWeatherCallPacket(jcontext ctx, jobject self);
void M_mindustry_gen_CreateWeatherCallPacket_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_CreateWeatherCallPacket_read_arc_util_io_Reads_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_mindustry_gen_CreateWeatherCallPacket_handled(jcontext ctx, jobject self);
void M_mindustry_gen_CreateWeatherCallPacket_handleClient(jcontext ctx, jobject self);
jbool M_mindustry_gen_CreateWeatherCallPacket_allow_boolean_R_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
