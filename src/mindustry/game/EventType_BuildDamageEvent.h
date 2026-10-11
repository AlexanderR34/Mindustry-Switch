#ifndef HEADER_mindustry_game_EventType$BuildDamageEvent
#define HEADER_mindustry_game_EventType$BuildDamageEvent

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_EventType$BuildDamageEvent {
	java_lang_Object parent;
	jref F_build;
	jref F_source;
} mindustry_game_EventType$BuildDamageEvent;

extern Class class_mindustry_game_EventType$BuildDamageEvent;


#define VTABLE_mindustry_game_EventType$BuildDamageEvent_hashCode_R_int 0
typedef jint (*func_mindustry_game_EventType$BuildDamageEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_EventType$BuildDamageEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_EventType$BuildDamageEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_EventType$BuildDamageEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_EventType$BuildDamageEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_finalize 5
typedef void (*func_mindustry_game_EventType$BuildDamageEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_notify 6
typedef void (*func_mindustry_game_EventType$BuildDamageEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_notifyAll 7
typedef void (*func_mindustry_game_EventType$BuildDamageEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_wait 8
typedef void (*func_mindustry_game_EventType$BuildDamageEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_wait_long 9
typedef void (*func_mindustry_game_EventType$BuildDamageEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_wait_long_int 10
typedef void (*func_mindustry_game_EventType$BuildDamageEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_EventType$BuildDamageEvent_set_mindustry_gen_Building_mindustry_gen_Bullet_R_mindustry_game_EventType$BuildDamageEvent 11
typedef jobject (*func_mindustry_game_EventType$BuildDamageEvent_set_mindustry_gen_Building_mindustry_gen_Bullet_R_mindustry_game_EventType$BuildDamageEvent)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_mindustry_game_EventType$BuildDamageEvent(jobject object, jint mark, jint depth);
void clinit_mindustry_game_EventType$BuildDamageEvent(jcontext ctx);
void init_mindustry_game_EventType$BuildDamageEvent(jcontext ctx, jobject self);
jobject M_mindustry_game_EventType$BuildDamageEvent_set_mindustry_gen_Building_mindustry_gen_Bullet_R_mindustry_game_EventType$BuildDamageEvent(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
