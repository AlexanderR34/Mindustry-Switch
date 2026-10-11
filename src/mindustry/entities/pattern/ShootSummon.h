#ifndef HEADER_mindustry_entities_pattern_ShootSummon
#define HEADER_mindustry_entities_pattern_ShootSummon

#include "Clearwing.h"
#include "mindustry/entities/pattern/ShootPattern.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_pattern_ShootSummon {
	mindustry_entities_pattern_ShootPattern parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_radius;
	jfloat F_spread;
} mindustry_entities_pattern_ShootSummon;

extern Class class_mindustry_entities_pattern_ShootSummon;


#define VTABLE_mindustry_entities_pattern_ShootSummon_hashCode_R_int 0
typedef jint (*func_mindustry_entities_pattern_ShootSummon_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootSummon_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_pattern_ShootSummon_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_pattern_ShootSummon_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_pattern_ShootSummon_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootSummon_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_pattern_ShootSummon_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootSummon_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_pattern_ShootSummon_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootSummon_finalize 5
typedef void (*func_mindustry_entities_pattern_ShootSummon_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootSummon_notify 6
typedef void (*func_mindustry_entities_pattern_ShootSummon_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootSummon_notifyAll 7
typedef void (*func_mindustry_entities_pattern_ShootSummon_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootSummon_wait 8
typedef void (*func_mindustry_entities_pattern_ShootSummon_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootSummon_wait_long 9
typedef void (*func_mindustry_entities_pattern_ShootSummon_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_pattern_ShootSummon_wait_long_int 10
typedef void (*func_mindustry_entities_pattern_ShootSummon_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_pattern_ShootSummon_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable 11
typedef void (*func_mindustry_entities_pattern_ShootSummon_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_mindustry_entities_pattern_ShootSummon_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler 12
typedef void (*func_mindustry_entities_pattern_ShootSummon_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_entities_pattern_ShootSummon_flip 13
typedef void (*func_mindustry_entities_pattern_ShootSummon_flip)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootSummon_copy_R_mindustry_entities_pattern_ShootPattern 14
typedef jobject (*func_mindustry_entities_pattern_ShootSummon_copy_R_mindustry_entities_pattern_ShootPattern)(jcontext ctx, jobject self);

void mark_mindustry_entities_pattern_ShootSummon(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_pattern_ShootSummon(jcontext ctx);
void init_mindustry_entities_pattern_ShootSummon_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void init_mindustry_entities_pattern_ShootSummon(jcontext ctx, jobject self);
void M_mindustry_entities_pattern_ShootSummon_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
