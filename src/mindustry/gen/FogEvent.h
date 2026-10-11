#ifndef HEADER_mindustry_gen_FogEvent
#define HEADER_mindustry_gen_FogEvent

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_FogEvent {
	java_lang_Object parent;
} mindustry_gen_FogEvent;

extern Class class_mindustry_gen_FogEvent;

extern jlong SF_mindustry_gen_FogEvent_bitMaskX;
extern jlong SF_mindustry_gen_FogEvent_bitMaskY;
extern jlong SF_mindustry_gen_FogEvent_bitMaskRadius;
extern jlong SF_mindustry_gen_FogEvent_bitMaskTeam;

#define VTABLE_mindustry_gen_FogEvent_hashCode_R_int 0
typedef jint (*func_mindustry_gen_FogEvent_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FogEvent_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_FogEvent_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_FogEvent_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_FogEvent_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FogEvent_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_FogEvent_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FogEvent_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_FogEvent_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FogEvent_finalize 5
typedef void (*func_mindustry_gen_FogEvent_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FogEvent_notify 6
typedef void (*func_mindustry_gen_FogEvent_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FogEvent_notifyAll 7
typedef void (*func_mindustry_gen_FogEvent_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FogEvent_wait 8
typedef void (*func_mindustry_gen_FogEvent_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_FogEvent_wait_long 9
typedef void (*func_mindustry_gen_FogEvent_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_FogEvent_wait_long_int 10
typedef void (*func_mindustry_gen_FogEvent_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_gen_FogEvent(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_FogEvent(jcontext ctx);
void init_mindustry_gen_FogEvent(jcontext ctx, jobject self);
jint SM_mindustry_gen_FogEvent_x_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_FogEvent_x_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_FogEvent_y_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_FogEvent_y_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_FogEvent_radius_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_FogEvent_radius_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jint SM_mindustry_gen_FogEvent_team_long_R_int(jcontext ctx, jlong param0);
jlong SM_mindustry_gen_FogEvent_team_long_int_R_long(jcontext ctx, jlong param0, jint param1);
jlong SM_mindustry_gen_FogEvent_get_int_int_int_int_R_long(jcontext ctx, jint param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
