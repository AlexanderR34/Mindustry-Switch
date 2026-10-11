#ifndef HEADER_mindustry_entities_pattern_ShootBarrel
#define HEADER_mindustry_entities_pattern_ShootBarrel

#include "Clearwing.h"
#include "mindustry/entities/pattern/ShootPattern.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_pattern_ShootBarrel {
	mindustry_entities_pattern_ShootPattern parent;
	jref F_barrels;
	jint F_barrelOffset;
} mindustry_entities_pattern_ShootBarrel;

extern Class class_mindustry_entities_pattern_ShootBarrel;


#define VTABLE_mindustry_entities_pattern_ShootBarrel_hashCode_R_int 0
typedef jint (*func_mindustry_entities_pattern_ShootBarrel_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_pattern_ShootBarrel_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_pattern_ShootBarrel_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_pattern_ShootBarrel_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_pattern_ShootBarrel_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_finalize 5
typedef void (*func_mindustry_entities_pattern_ShootBarrel_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_notify 6
typedef void (*func_mindustry_entities_pattern_ShootBarrel_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_notifyAll 7
typedef void (*func_mindustry_entities_pattern_ShootBarrel_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_wait 8
typedef void (*func_mindustry_entities_pattern_ShootBarrel_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_wait_long 9
typedef void (*func_mindustry_entities_pattern_ShootBarrel_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_wait_long_int 10
typedef void (*func_mindustry_entities_pattern_ShootBarrel_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable 11
typedef void (*func_mindustry_entities_pattern_ShootBarrel_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler 12
typedef void (*func_mindustry_entities_pattern_ShootBarrel_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_flip 13
typedef void (*func_mindustry_entities_pattern_ShootBarrel_flip)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootBarrel_copy_R_mindustry_entities_pattern_ShootPattern 14
typedef jobject (*func_mindustry_entities_pattern_ShootBarrel_copy_R_mindustry_entities_pattern_ShootPattern)(jcontext ctx, jobject self);

void mark_mindustry_entities_pattern_ShootBarrel(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_pattern_ShootBarrel(jcontext ctx);
void init_mindustry_entities_pattern_ShootBarrel(jcontext ctx, jobject self);
void M_mindustry_entities_pattern_ShootBarrel_flip(jcontext ctx, jobject self);
void M_mindustry_entities_pattern_ShootBarrel_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
