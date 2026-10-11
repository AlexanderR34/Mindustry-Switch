#ifndef HEADER_mindustry_game_EventType$SectorCaptureEvent
#define HEADER_mindustry_game_EventType$SectorCaptureEvent

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_EventType$SectorCaptureEvent {
	java_lang_Object parent;
	jref F_sector;
	jbool F_initialCapture;
} mindustry_game_EventType$SectorCaptureEvent;

extern Class class_mindustry_game_EventType$SectorCaptureEvent;


#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_hashCode_R_int 0
typedef jint (*func_mindustry_game_EventType$SectorCaptureEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_EventType$SectorCaptureEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_EventType$SectorCaptureEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_EventType$SectorCaptureEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_EventType$SectorCaptureEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_finalize 5
typedef void (*func_mindustry_game_EventType$SectorCaptureEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_notify 6
typedef void (*func_mindustry_game_EventType$SectorCaptureEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_notifyAll 7
typedef void (*func_mindustry_game_EventType$SectorCaptureEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_wait 8
typedef void (*func_mindustry_game_EventType$SectorCaptureEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_wait_long 9
typedef void (*func_mindustry_game_EventType$SectorCaptureEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_EventType$SectorCaptureEvent_wait_long_int 10
typedef void (*func_mindustry_game_EventType$SectorCaptureEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_game_EventType$SectorCaptureEvent(jobject object, jint mark, jint depth);
void clinit_mindustry_game_EventType$SectorCaptureEvent(jcontext ctx);
void init_mindustry_game_EventType$SectorCaptureEvent_mindustry_type_Sector_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);

#ifdef __cplusplus
}
#endif

#endif
