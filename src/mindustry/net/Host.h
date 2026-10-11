#ifndef HEADER_mindustry_net_Host
#define HEADER_mindustry_net_Host

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Host {
	java_lang_Object parent;
	jref F_name;
	jref F_address;
	jref F_mapname;
	jref F_description;
	jint F_wave;
	jint F_players;
	jint F_playerLimit;
	jint F_version;
	jref F_versionType;
	jref F_mode;
	jref F_modeName;
	jint F_ping;
	jint F_port;
} mindustry_net_Host;

extern Class class_mindustry_net_Host;


#define VTABLE_mindustry_net_Host_hashCode_R_int 0
typedef jint (*func_mindustry_net_Host_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Host_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Host_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Host_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Host_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Host_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Host_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Host_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Host_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Host_finalize 5
typedef void (*func_mindustry_net_Host_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Host_notify 6
typedef void (*func_mindustry_net_Host_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Host_notifyAll 7
typedef void (*func_mindustry_net_Host_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Host_wait 8
typedef void (*func_mindustry_net_Host_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Host_wait_long 9
typedef void (*func_mindustry_net_Host_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Host_wait_long_int 10
typedef void (*func_mindustry_net_Host_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_net_Host(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Host(jcontext ctx);
void init_mindustry_net_Host_int_java_lang_String_java_lang_String_int_java_lang_String_int_int_int_java_lang_String_mindustry_game_Gamemode_int_java_lang_String_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jint param3, jobject param4, jint param5, jint param6, jint param7, jobject param8, jobject param9, jint param10, jobject param11, jobject param12);
void init_mindustry_net_Host_int_java_lang_String_java_lang_String_java_lang_String_int_int_int_java_lang_String_mindustry_game_Gamemode_int_java_lang_String_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5, jint param6, jobject param7, jobject param8, jint param9, jobject param10, jobject param11);

#ifdef __cplusplus
}
#endif

#endif
