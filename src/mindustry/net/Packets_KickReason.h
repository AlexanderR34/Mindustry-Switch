#ifndef HEADER_mindustry_net_Packets$KickReason
#define HEADER_mindustry_net_Packets$KickReason

#include "Clearwing.h"
#include "java/lang/Enum.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_Packets$KickReason {
	java_lang_Enum parent;
	jbool F_quiet;
} mindustry_net_Packets$KickReason;

extern Class class_mindustry_net_Packets$KickReason;

extern jobject SF_mindustry_net_Packets$KickReason_kick;
extern jobject SF_mindustry_net_Packets$KickReason_clientOutdated;
extern jobject SF_mindustry_net_Packets$KickReason_serverOutdated;
extern jobject SF_mindustry_net_Packets$KickReason_banned;
extern jobject SF_mindustry_net_Packets$KickReason_gameover;
extern jobject SF_mindustry_net_Packets$KickReason_recentKick;
extern jobject SF_mindustry_net_Packets$KickReason_nameInUse;
extern jobject SF_mindustry_net_Packets$KickReason_idInUse;
extern jobject SF_mindustry_net_Packets$KickReason_nameEmpty;
extern jobject SF_mindustry_net_Packets$KickReason_customClient;
extern jobject SF_mindustry_net_Packets$KickReason_serverClose;
extern jobject SF_mindustry_net_Packets$KickReason_vote;
extern jobject SF_mindustry_net_Packets$KickReason_typeMismatch;
extern jobject SF_mindustry_net_Packets$KickReason_whitelist;
extern jobject SF_mindustry_net_Packets$KickReason_playerLimit;
extern jobject SF_mindustry_net_Packets$KickReason_serverRestarting;
extern jobject SF_mindustry_net_Packets$KickReason_all;
extern jobject SF_mindustry_net_Packets$KickReason_$VALUES;

#define VTABLE_mindustry_net_Packets$KickReason_hashCode_R_int 0
typedef jint (*func_mindustry_net_Packets$KickReason_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_Packets$KickReason_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$KickReason_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_Packets$KickReason_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_Packets$KickReason_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_Packets$KickReason_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_finalize 5
typedef void (*func_mindustry_net_Packets$KickReason_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_notify 6
typedef void (*func_mindustry_net_Packets$KickReason_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_notifyAll 7
typedef void (*func_mindustry_net_Packets$KickReason_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_wait 8
typedef void (*func_mindustry_net_Packets$KickReason_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_wait_long 9
typedef void (*func_mindustry_net_Packets$KickReason_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_Packets$KickReason_wait_long_int 10
typedef void (*func_mindustry_net_Packets$KickReason_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_net_Packets$KickReason_compareTo_java_lang_Object_R_int 11
typedef jint (*func_mindustry_net_Packets$KickReason_compareTo_java_lang_Object_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$KickReason_compareTo_java_lang_Enum_R_int 12
typedef jint (*func_mindustry_net_Packets$KickReason_compareTo_java_lang_Enum_R_int)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_Packets$KickReason_name_R_java_lang_String 13
typedef jobject (*func_mindustry_net_Packets$KickReason_name_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_ordinal_R_int 14
typedef jint (*func_mindustry_net_Packets$KickReason_ordinal_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_getDeclaringClass_R_java_lang_Class 15
typedef jobject (*func_mindustry_net_Packets$KickReason_getDeclaringClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_Packets$KickReason_extraText_R_java_lang_String 16
typedef jobject (*func_mindustry_net_Packets$KickReason_extraText_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_net_Packets$KickReason(jobject object, jint mark, jint depth);
void clinit_mindustry_net_Packets$KickReason(jcontext ctx);
jobject SM_mindustry_net_Packets$KickReason_values_R_Array1_mindustry_net_Packets$KickReason(jcontext ctx);
jobject SM_mindustry_net_Packets$KickReason_valueOf_java_lang_String_R_mindustry_net_Packets$KickReason(jcontext ctx, jobject param0);
void init_mindustry_net_Packets$KickReason_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);
void init_mindustry_net_Packets$KickReason_java_lang_String_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2);
jobject M_mindustry_net_Packets$KickReason_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_net_Packets$KickReason_extraText_R_java_lang_String(jcontext ctx, jobject self);
jobject SM_mindustry_net_Packets$KickReason_$values_R_Array1_mindustry_net_Packets$KickReason(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
