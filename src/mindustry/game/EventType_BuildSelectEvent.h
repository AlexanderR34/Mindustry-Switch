#ifndef HEADER_mindustry_game_EventType$BuildSelectEvent
#define HEADER_mindustry_game_EventType$BuildSelectEvent

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_EventType$BuildSelectEvent {
	java_lang_Object parent;
	jref F_tile;
	jref F_team;
	jref F_builder;
	jbool F_breaking;
} mindustry_game_EventType$BuildSelectEvent;

extern Class class_mindustry_game_EventType$BuildSelectEvent;


#define VTABLE_mindustry_game_EventType$BuildSelectEvent_hashCode_R_int 0
typedef jint (*func_mindustry_game_EventType$BuildSelectEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildSelectEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_EventType$BuildSelectEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_EventType$BuildSelectEvent_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_EventType$BuildSelectEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildSelectEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_EventType$BuildSelectEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildSelectEvent_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_EventType$BuildSelectEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildSelectEvent_finalize 5
typedef void (*func_mindustry_game_EventType$BuildSelectEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildSelectEvent_notify 6
typedef void (*func_mindustry_game_EventType$BuildSelectEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildSelectEvent_notifyAll 7
typedef void (*func_mindustry_game_EventType$BuildSelectEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildSelectEvent_wait 8
typedef void (*func_mindustry_game_EventType$BuildSelectEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildSelectEvent_wait_long 9
typedef void (*func_mindustry_game_EventType$BuildSelectEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_EventType$BuildSelectEvent_wait_long_int 10
typedef void (*func_mindustry_game_EventType$BuildSelectEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_game_EventType$BuildSelectEvent(jobject object, jint mark, jint depth);
void clinit_mindustry_game_EventType$BuildSelectEvent(jcontext ctx);
void init_mindustry_game_EventType$BuildSelectEvent_mindustry_world_Tile_mindustry_game_Team_mindustry_gen_Unit_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3);

#ifdef __cplusplus
}
#endif

#endif
