#ifndef HEADER_mindustry_async_AsyncCore
#define HEADER_mindustry_async_AsyncCore

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_async_AsyncCore {
	java_lang_Object parent;
	jref F_processes;
	jref F_futures;
	jref F_executor;
} mindustry_async_AsyncCore;

extern Class class_mindustry_async_AsyncCore;


#define VTABLE_mindustry_async_AsyncCore_hashCode_R_int 0
typedef jint (*func_mindustry_async_AsyncCore_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_async_AsyncCore_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_async_AsyncCore_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_async_AsyncCore_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_async_AsyncCore_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_async_AsyncCore_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_finalize 5
typedef void (*func_mindustry_async_AsyncCore_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_notify 6
typedef void (*func_mindustry_async_AsyncCore_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_notifyAll 7
typedef void (*func_mindustry_async_AsyncCore_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_wait 8
typedef void (*func_mindustry_async_AsyncCore_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_wait_long 9
typedef void (*func_mindustry_async_AsyncCore_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_async_AsyncCore_wait_long_int 10
typedef void (*func_mindustry_async_AsyncCore_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_async_AsyncCore_begin 11
typedef void (*func_mindustry_async_AsyncCore_begin)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_end 12
typedef void (*func_mindustry_async_AsyncCore_end)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_complete 13
typedef void (*func_mindustry_async_AsyncCore_complete)(jcontext ctx, jobject self);
#define VTABLE_mindustry_async_AsyncCore_lambda$new$1_mindustry_game_EventType$ResetEvent 14
typedef void (*func_mindustry_async_AsyncCore_lambda$new$1_mindustry_game_EventType$ResetEvent)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_async_AsyncCore_lambda$new$0_mindustry_game_EventType$WorldLoadEvent 15
typedef void (*func_mindustry_async_AsyncCore_lambda$new$0_mindustry_game_EventType$WorldLoadEvent)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_async_AsyncCore(jobject object, jint mark, jint depth);
void clinit_mindustry_async_AsyncCore(jcontext ctx);
void init_mindustry_async_AsyncCore(jcontext ctx, jobject self);
void M_mindustry_async_AsyncCore_begin(jcontext ctx, jobject self);
void M_mindustry_async_AsyncCore_end(jcontext ctx, jobject self);
void M_mindustry_async_AsyncCore_complete(jcontext ctx, jobject self);
jobject SM_mindustry_async_AsyncCore_lambda$begin$0_java_lang_Runnable_R_java_lang_Thread(jcontext ctx, jobject param0);
void SM_mindustry_async_AsyncCore_lambda$begin$1_java_lang_Thread_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1);
void M_mindustry_async_AsyncCore_lambda$new$1_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0);
void M_mindustry_async_AsyncCore_lambda$new$0_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
