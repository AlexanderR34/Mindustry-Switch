#ifndef HEADER_mindustry_world_meta_StatUnit
#define HEADER_mindustry_world_meta_StatUnit

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_world_meta_StatUnit {
	java_lang_Object parent;
	jbool F_space;
	jref F_name;
	jref F_icon;
} mindustry_world_meta_StatUnit;

extern Class class_mindustry_world_meta_StatUnit;

extern jobject SF_mindustry_world_meta_StatUnit_blocks;
extern jobject SF_mindustry_world_meta_StatUnit_blocksSquared;
extern jobject SF_mindustry_world_meta_StatUnit_worldUnits;
extern jobject SF_mindustry_world_meta_StatUnit_tilesSecond;
extern jobject SF_mindustry_world_meta_StatUnit_powerSecond;
extern jobject SF_mindustry_world_meta_StatUnit_liquidSecond;
extern jobject SF_mindustry_world_meta_StatUnit_itemsSecond;
extern jobject SF_mindustry_world_meta_StatUnit_liquidUnits;
extern jobject SF_mindustry_world_meta_StatUnit_powerUnits;
extern jobject SF_mindustry_world_meta_StatUnit_powerEquilibrium;
extern jobject SF_mindustry_world_meta_StatUnit_heatUnits;
extern jobject SF_mindustry_world_meta_StatUnit_degrees;
extern jobject SF_mindustry_world_meta_StatUnit_seconds;
extern jobject SF_mindustry_world_meta_StatUnit_minutes;
extern jobject SF_mindustry_world_meta_StatUnit_shots;
extern jobject SF_mindustry_world_meta_StatUnit_perSecond;
extern jobject SF_mindustry_world_meta_StatUnit_perMinute;
extern jobject SF_mindustry_world_meta_StatUnit_perShot;
extern jobject SF_mindustry_world_meta_StatUnit_perLeg;
extern jobject SF_mindustry_world_meta_StatUnit_perSide;
extern jobject SF_mindustry_world_meta_StatUnit_timesSpeed;
extern jobject SF_mindustry_world_meta_StatUnit_multiplier;
extern jobject SF_mindustry_world_meta_StatUnit_percent;
extern jobject SF_mindustry_world_meta_StatUnit_shieldHealth;
extern jobject SF_mindustry_world_meta_StatUnit_none;
extern jobject SF_mindustry_world_meta_StatUnit_items;
extern jobject SF_mindustry_world_meta_StatUnit_instant;

#define VTABLE_mindustry_world_meta_StatUnit_hashCode_R_int 0
typedef jint (*func_mindustry_world_meta_StatUnit_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatUnit_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_world_meta_StatUnit_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_world_meta_StatUnit_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_world_meta_StatUnit_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatUnit_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_world_meta_StatUnit_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatUnit_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_world_meta_StatUnit_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatUnit_finalize 5
typedef void (*func_mindustry_world_meta_StatUnit_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatUnit_notify 6
typedef void (*func_mindustry_world_meta_StatUnit_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatUnit_notifyAll 7
typedef void (*func_mindustry_world_meta_StatUnit_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatUnit_wait 8
typedef void (*func_mindustry_world_meta_StatUnit_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_world_meta_StatUnit_wait_long 9
typedef void (*func_mindustry_world_meta_StatUnit_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_world_meta_StatUnit_wait_long_int 10
typedef void (*func_mindustry_world_meta_StatUnit_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_world_meta_StatUnit_localized_R_java_lang_String 11
typedef jobject (*func_mindustry_world_meta_StatUnit_localized_R_java_lang_String)(jcontext ctx, jobject self);

void mark_mindustry_world_meta_StatUnit(jobject object, jint mark, jint depth);
void clinit_mindustry_world_meta_StatUnit(jcontext ctx);
void init_mindustry_world_meta_StatUnit_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void init_mindustry_world_meta_StatUnit_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_mindustry_world_meta_StatUnit_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1);
jobject M_mindustry_world_meta_StatUnit_localized_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
