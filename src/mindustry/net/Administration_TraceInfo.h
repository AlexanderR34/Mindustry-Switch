#ifndef HEADER_mindustry_net_Administration$TraceInfo
#define HEADER_mindustry_net_Administration$TraceInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Administration$TraceInfo {
	java_lang_Object parent;
	jref F_ip;
	jref F_uuid;
	jref F_locale;
	jbool F_modded;
	jbool F_mobile;
	jint F_timesJoined;
	jint F_timesKicked;
	jref F_ips;
	jref F_names;
} mindustry_net_Administration$TraceInfo;

extern Class class_mindustry_net_Administration$TraceInfo;


#define VTABLE_mindustry_net_Administration$TraceInfo_hashCode_R_int 0
typedef jint (*func_mindustry_net_Administration$TraceInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$TraceInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Administration$TraceInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Administration$TraceInfo_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Administration$TraceInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$TraceInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Administration$TraceInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$TraceInfo_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Administration$TraceInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$TraceInfo_finalize 5
typedef void (*func_mindustry_net_Administration$TraceInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$TraceInfo_notify 6
typedef void (*func_mindustry_net_Administration$TraceInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$TraceInfo_notifyAll 7
typedef void (*func_mindustry_net_Administration$TraceInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$TraceInfo_wait 8
typedef void (*func_mindustry_net_Administration$TraceInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$TraceInfo_wait_long 9
typedef void (*func_mindustry_net_Administration$TraceInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Administration$TraceInfo_wait_long_int 10
typedef void (*func_mindustry_net_Administration$TraceInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_net_Administration$TraceInfo(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Administration$TraceInfo(jcontext ctx);
void init_mindustry_net_Administration$TraceInfo_java_lang_String_java_lang_String_java_lang_String_boolean_boolean_int_int_Array1_java_lang_String_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4, jint param5, jint param6, jobject param7, jobject param8);

#ifdef __cplusplus
}
#endif

#endif
