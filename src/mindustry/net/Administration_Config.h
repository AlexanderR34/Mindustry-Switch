#ifndef HEADER_mindustry_net_Administration$Config
#define HEADER_mindustry_net_Administration$Config

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Administration$Config {
	java_lang_Object parent;
	jref F_defaultValue;
	jref F_name;
	jref F_key;
	jref F_description;
	jref F_changed;
} mindustry_net_Administration$Config;

extern Class class_mindustry_net_Administration$Config;

extern jobject SF_mindustry_net_Administration$Config_all;
extern jobject SF_mindustry_net_Administration$Config_serverName;
extern jobject SF_mindustry_net_Administration$Config_desc;
extern jobject SF_mindustry_net_Administration$Config_port;
extern jobject SF_mindustry_net_Administration$Config_autoUpdate;
extern jobject SF_mindustry_net_Administration$Config_showConnectMessages;
extern jobject SF_mindustry_net_Administration$Config_enableVotekick;
extern jobject SF_mindustry_net_Administration$Config_startCommands;
extern jobject SF_mindustry_net_Administration$Config_logging;
extern jobject SF_mindustry_net_Administration$Config_strict;
extern jobject SF_mindustry_net_Administration$Config_antiSpam;
extern jobject SF_mindustry_net_Administration$Config_interactRateWindow;
extern jobject SF_mindustry_net_Administration$Config_interactRateLimit;
extern jobject SF_mindustry_net_Administration$Config_interactRateKick;
extern jobject SF_mindustry_net_Administration$Config_messageRateLimit;
extern jobject SF_mindustry_net_Administration$Config_messageSpamKick;
extern jobject SF_mindustry_net_Administration$Config_packetSpamLimit;
extern jobject SF_mindustry_net_Administration$Config_uuidChangeLimit;
extern jobject SF_mindustry_net_Administration$Config_uuidChangeTimePeriod;
extern jobject SF_mindustry_net_Administration$Config_chatSpamLimit;
extern jobject SF_mindustry_net_Administration$Config_socketInput;
extern jobject SF_mindustry_net_Administration$Config_socketInputPort;
extern jobject SF_mindustry_net_Administration$Config_socketInputAddress;
extern jobject SF_mindustry_net_Administration$Config_allowCustomClients;
extern jobject SF_mindustry_net_Administration$Config_whitelist;
extern jobject SF_mindustry_net_Administration$Config_motd;
extern jobject SF_mindustry_net_Administration$Config_autosave;
extern jobject SF_mindustry_net_Administration$Config_autosaveAmount;
extern jobject SF_mindustry_net_Administration$Config_autosaveSpacing;
extern jobject SF_mindustry_net_Administration$Config_debug;
extern jobject SF_mindustry_net_Administration$Config_snapshotInterval;
extern jobject SF_mindustry_net_Administration$Config_autoPause;
extern jobject SF_mindustry_net_Administration$Config_roundExtraTime;
extern jobject SF_mindustry_net_Administration$Config_maxLogLength;
extern jobject SF_mindustry_net_Administration$Config_logCommands;

#define VTABLE_mindustry_net_Administration$Config_hashCode_R_int 0
typedef jint (*func_mindustry_net_Administration$Config_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Administration$Config_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Administration$Config_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Administration$Config_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Administration$Config_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Administration$Config_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_finalize 5
typedef void (*func_mindustry_net_Administration$Config_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_notify 6
typedef void (*func_mindustry_net_Administration$Config_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_notifyAll 7
typedef void (*func_mindustry_net_Administration$Config_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_wait 8
typedef void (*func_mindustry_net_Administration$Config_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_wait_long 9
typedef void (*func_mindustry_net_Administration$Config_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Administration$Config_wait_long_int 10
typedef void (*func_mindustry_net_Administration$Config_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Administration$Config_isNum_R_boolean 11
typedef jbool (*func_mindustry_net_Administration$Config_isNum_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_isBool_R_boolean 12
typedef jbool (*func_mindustry_net_Administration$Config_isBool_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_isString_R_boolean 13
typedef jbool (*func_mindustry_net_Administration$Config_isString_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_get_R_java_lang_Object 14
typedef jobject (*func_mindustry_net_Administration$Config_get_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_bool_R_boolean 15
typedef jbool (*func_mindustry_net_Administration$Config_bool_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_num_R_int 16
typedef jint (*func_mindustry_net_Administration$Config_num_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_string_R_java_lang_String 17
typedef jobject (*func_mindustry_net_Administration$Config_string_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Administration$Config_set_java_lang_Object 18
typedef void (*func_mindustry_net_Administration$Config_set_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Administration$Config_isDefault_R_boolean 19
typedef jbool (*func_mindustry_net_Administration$Config_isDefault_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_net_Administration$Config(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Administration$Config(jcontext ctx);
void init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2);
void init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3);
void init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jbool M_mindustry_net_Administration$Config_isNum_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_net_Administration$Config_isBool_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_net_Administration$Config_isString_R_boolean(jcontext ctx, jobject self);
jobject M_mindustry_net_Administration$Config_get_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_net_Administration$Config_bool_R_boolean(jcontext ctx, jobject self);
jint M_mindustry_net_Administration$Config_num_R_int(jcontext ctx, jobject self);
jobject M_mindustry_net_Administration$Config_string_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_net_Administration$Config_set_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_net_Administration$Config_isDefault_R_boolean(jcontext ctx, jobject self);
jbool SM_mindustry_net_Administration$Config_debug_R_boolean(jcontext ctx);
void SM_mindustry_net_Administration$Config_lambda$new$0(jcontext ctx);
void SM_mindustry_net_Administration$Config_lambda$static$3(jcontext ctx);
void SM_mindustry_net_Administration$Config_lambda$static$2(jcontext ctx);
void SM_mindustry_net_Administration$Config_lambda$static$1(jcontext ctx);
void SM_mindustry_net_Administration$Config_lambda$static$0(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
