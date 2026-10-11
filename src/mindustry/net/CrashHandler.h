#ifndef HEADER_mindustry_net_CrashHandler
#define HEADER_mindustry_net_CrashHandler

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_net_CrashHandler {
	java_lang_Object parent;
} mindustry_net_CrashHandler;

extern Class class_mindustry_net_CrashHandler;


#define VTABLE_mindustry_net_CrashHandler_hashCode_R_int 0
typedef jint (*func_mindustry_net_CrashHandler_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_CrashHandler_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_net_CrashHandler_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_net_CrashHandler_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_net_CrashHandler_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_CrashHandler_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_net_CrashHandler_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_CrashHandler_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_net_CrashHandler_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_CrashHandler_finalize 5
typedef void (*func_mindustry_net_CrashHandler_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_CrashHandler_notify 6
typedef void (*func_mindustry_net_CrashHandler_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_CrashHandler_notifyAll 7
typedef void (*func_mindustry_net_CrashHandler_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_CrashHandler_wait 8
typedef void (*func_mindustry_net_CrashHandler_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_net_CrashHandler_wait_long 9
typedef void (*func_mindustry_net_CrashHandler_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_net_CrashHandler_wait_long_int 10
typedef void (*func_mindustry_net_CrashHandler_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_net_CrashHandler(jobject object, jint mark, jint depth);
void clinit_mindustry_net_CrashHandler(jcontext ctx);
void init_mindustry_net_CrashHandler(jcontext ctx, jobject self);
jobject SM_mindustry_net_CrashHandler_createReport_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject param0);
void SM_mindustry_net_CrashHandler_log_java_lang_Throwable(jcontext ctx, jobject param0);
void SM_mindustry_net_CrashHandler_handle_java_lang_Throwable_arc_func_Cons(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_net_CrashHandler_getModCause_java_lang_Throwable_R_mindustry_mod_Mods$LoadedMod(jcontext ctx, jobject param0);
jint SM_mindustry_net_CrashHandler_getMatches_java_lang_String_java_lang_String_R_int(jcontext ctx, jobject param0, jobject param1);
jobject SM_mindustry_net_CrashHandler_writeException_java_lang_Throwable_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_mindustry_net_CrashHandler_lambda$createReport$2_mindustry_mod_data_PatchAsset_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_mindustry_net_CrashHandler_lambda$createReport$1_mindustry_mod_Mods$LoadedMod_R_java_lang_String(jcontext ctx, jobject param0);
jbool SM_mindustry_net_CrashHandler_lambda$createReport$0_mindustry_mod_Mods$LoadedMod_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
