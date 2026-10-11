#ifndef HEADER_mindustry_game_EventType$WinEvent
#define HEADER_mindustry_game_EventType$WinEvent

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_EventType$WinEvent {
	java_lang_Object parent;
} mindustry_game_EventType$WinEvent;

extern Class class_mindustry_game_EventType$WinEvent;


#define VTABLE_mindustry_game_EventType$WinEvent_hashCode_R_int 0
typedef jint (*func_mindustry_game_EventType$WinEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$WinEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_EventType$WinEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_EventType$WinEvent_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_EventType$WinEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$WinEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_EventType$WinEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$WinEvent_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_EventType$WinEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$WinEvent_finalize 5
typedef void (*func_mindustry_game_EventType$WinEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$WinEvent_notify 6
typedef void (*func_mindustry_game_EventType$WinEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$WinEvent_notifyAll 7
typedef void (*func_mindustry_game_EventType$WinEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$WinEvent_wait 8
typedef void (*func_mindustry_game_EventType$WinEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$WinEvent_wait_long 9
typedef void (*func_mindustry_game_EventType$WinEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_EventType$WinEvent_wait_long_int 10
typedef void (*func_mindustry_game_EventType$WinEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_game_EventType$WinEvent(jobject object, jint mark, jint depth);
void clinit_mindustry_game_EventType$WinEvent(jcontext ctx);
void init_mindustry_game_EventType$WinEvent(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
