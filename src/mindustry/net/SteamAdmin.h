#ifndef HEADER_mindustry_net_SteamAdmin
#define HEADER_mindustry_net_SteamAdmin

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_SteamAdmin {
	java_lang_Object parent;
} mindustry_net_SteamAdmin;

extern Class class_mindustry_net_SteamAdmin;

extern jbool SF_mindustry_net_SteamAdmin_scheduled;
extern jobject SF_mindustry_net_SteamAdmin_data;
extern jfloat SF_mindustry_net_SteamAdmin_checkInterval;

#define VTABLE_mindustry_net_SteamAdmin_hashCode_R_int 0
typedef jint (*func_mindustry_net_SteamAdmin_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_SteamAdmin_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_SteamAdmin_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_SteamAdmin_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_SteamAdmin_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_SteamAdmin_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_SteamAdmin_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_SteamAdmin_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_SteamAdmin_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_SteamAdmin_finalize 5
typedef void (*func_mindustry_net_SteamAdmin_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_SteamAdmin_notify 6
typedef void (*func_mindustry_net_SteamAdmin_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_SteamAdmin_notifyAll 7
typedef void (*func_mindustry_net_SteamAdmin_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_SteamAdmin_wait 8
typedef void (*func_mindustry_net_SteamAdmin_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_SteamAdmin_wait_long 9
typedef void (*func_mindustry_net_SteamAdmin_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_SteamAdmin_wait_long_int 10
typedef void (*func_mindustry_net_SteamAdmin_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_net_SteamAdmin(jobject object, jint mark, jint depth);
void clinit_mindustry_net_SteamAdmin(jcontext ctx);
void init_mindustry_net_SteamAdmin(jcontext ctx, jobject self);
void SM_mindustry_net_SteamAdmin_fetch(jcontext ctx);
void SM_mindustry_net_SteamAdmin_fetch_boolean(jcontext ctx, jbool param0);
void SM_mindustry_net_SteamAdmin_fetchImpl_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_net_SteamAdmin_fetch_java_lang_String_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_net_SteamAdmin_isBanned_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool SM_mindustry_net_SteamAdmin_isAdmin_java_lang_String_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_net_SteamAdmin_lambda$fetch$2_arc_util_Http$HttpResponse(jcontext ctx, jobject param0);
void SM_mindustry_net_SteamAdmin_lambda$fetch$3_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_net_SteamAdmin_lambda$fetch$5_mindustry_gen_Player(jcontext ctx, jobject param0);
jbool SM_mindustry_net_SteamAdmin_lambda$fetch$4_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0);
void SM_mindustry_net_SteamAdmin_lambda$fetch$1_java_lang_Runnable_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_net_SteamAdmin_lambda$fetchImpl$0(jcontext ctx);
void SM_mindustry_net_SteamAdmin_lambda$fetchImpl$1(jcontext ctx);
void SM_mindustry_net_SteamAdmin_lambda$fetch$0_arc_util_Http$HttpResponse(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
