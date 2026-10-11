#ifndef HEADER_mindustry_game_EventType$SaveLoadEvent
#define HEADER_mindustry_game_EventType$SaveLoadEvent

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_EventType$SaveLoadEvent {
	java_lang_Object parent;
	jbool F_isMap;
} mindustry_game_EventType$SaveLoadEvent;

extern Class class_mindustry_game_EventType$SaveLoadEvent;


#define VTABLE_mindustry_game_EventType$SaveLoadEvent_hashCode_R_int 0
typedef jint (*func_mindustry_game_EventType$SaveLoadEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SaveLoadEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_EventType$SaveLoadEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_EventType$SaveLoadEvent_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_EventType$SaveLoadEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SaveLoadEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_EventType$SaveLoadEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SaveLoadEvent_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_EventType$SaveLoadEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SaveLoadEvent_finalize 5
typedef void (*func_mindustry_game_EventType$SaveLoadEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SaveLoadEvent_notify 6
typedef void (*func_mindustry_game_EventType$SaveLoadEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SaveLoadEvent_notifyAll 7
typedef void (*func_mindustry_game_EventType$SaveLoadEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SaveLoadEvent_wait 8
typedef void (*func_mindustry_game_EventType$SaveLoadEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SaveLoadEvent_wait_long 9
typedef void (*func_mindustry_game_EventType$SaveLoadEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_EventType$SaveLoadEvent_wait_long_int 10
typedef void (*func_mindustry_game_EventType$SaveLoadEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_game_EventType$SaveLoadEvent(jobject object, jint mark, jint depth);
void clinit_mindustry_game_EventType$SaveLoadEvent(jcontext ctx);
void init_mindustry_game_EventType$SaveLoadEvent_boolean(jcontext ctx, jobject self, jbool param0);

#ifdef __cplusplus
}
#endif

#endif
