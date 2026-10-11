#ifndef HEADER_mindustry_net_Administration$PlayerInfo
#define HEADER_mindustry_net_Administration$PlayerInfo

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/AllowSerialization.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Administration$PlayerInfo {
	java_lang_Object parent;
	jref F_id;
	jref F_lastName;
	jref F_lastIP;
	jref F_ips;
	jref F_names;
	jref F_adminUsid;
	jint F_timesKicked;
	jint F_timesJoined;
	jbool F_banned;
	jbool F_admin;
	jlong F_lastKicked;
	jlong F_lastMessageTime;
	jlong F_lastSyncTime;
	jref F_lastSentMessage;
	jint F_messageInfractions;
	jref F_rate;
	jref F_messageTimer;
} mindustry_net_Administration$PlayerInfo;

extern Class class_mindustry_net_Administration$PlayerInfo;


#define VTABLE_mindustry_net_Administration$PlayerInfo_hashCode_R_int 0
typedef jint (*func_mindustry_net_Administration$PlayerInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Administration$PlayerInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Administration$PlayerInfo_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Administration$PlayerInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Administration$PlayerInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerInfo_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Administration$PlayerInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerInfo_finalize 5
typedef void (*func_mindustry_net_Administration$PlayerInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerInfo_notify 6
typedef void (*func_mindustry_net_Administration$PlayerInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerInfo_notifyAll 7
typedef void (*func_mindustry_net_Administration$PlayerInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerInfo_wait 8
typedef void (*func_mindustry_net_Administration$PlayerInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$PlayerInfo_wait_long 9
typedef void (*func_mindustry_net_Administration$PlayerInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Administration$PlayerInfo_wait_long_int 10
typedef void (*func_mindustry_net_Administration$PlayerInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Administration$PlayerInfo_plainLastName_R_java_lang_String 11
typedef jobject (*func_mindustry_net_Administration$PlayerInfo_plainLastName_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_net_Administration$PlayerInfo(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Administration$PlayerInfo(jcontext ctx);
void init_mindustry_net_Administration$PlayerInfo_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_mindustry_net_Administration$PlayerInfo(jcontext ctx, jobject self);
jobject M_mindustry_net_Administration$PlayerInfo_plainLastName_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
