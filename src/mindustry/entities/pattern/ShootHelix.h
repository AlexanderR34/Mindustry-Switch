#ifndef HEADER_mindustry_entities_pattern_ShootHelix
#define HEADER_mindustry_entities_pattern_ShootHelix

#include "Clearwing.h"
#include "mindustry/entities/pattern/ShootPattern.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_pattern_ShootHelix {
	mindustry_entities_pattern_ShootPattern parent;
	jfloat F_scl;
	jfloat F_mag;
	jfloat F_offset;
} mindustry_entities_pattern_ShootHelix;

extern Class class_mindustry_entities_pattern_ShootHelix;


#define VTABLE_mindustry_entities_pattern_ShootHelix_hashCode_R_int 0
typedef jint (*func_mindustry_entities_pattern_ShootHelix_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootHelix_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_pattern_ShootHelix_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_pattern_ShootHelix_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_pattern_ShootHelix_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootHelix_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_pattern_ShootHelix_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootHelix_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_pattern_ShootHelix_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootHelix_finalize 5
typedef void (*func_mindustry_entities_pattern_ShootHelix_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootHelix_notify 6
typedef void (*func_mindustry_entities_pattern_ShootHelix_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootHelix_notifyAll 7
typedef void (*func_mindustry_entities_pattern_ShootHelix_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootHelix_wait 8
typedef void (*func_mindustry_entities_pattern_ShootHelix_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootHelix_wait_long 9
typedef void (*func_mindustry_entities_pattern_ShootHelix_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_pattern_ShootHelix_wait_long_int 10
typedef void (*func_mindustry_entities_pattern_ShootHelix_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_pattern_ShootHelix_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable 11
typedef void (*func_mindustry_entities_pattern_ShootHelix_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_mindustry_entities_pattern_ShootHelix_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler 12
typedef void (*func_mindustry_entities_pattern_ShootHelix_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_entities_pattern_ShootHelix_flip 13
typedef void (*func_mindustry_entities_pattern_ShootHelix_flip)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootHelix_copy_R_mindustry_entities_pattern_ShootPattern 14
typedef jobject (*func_mindustry_entities_pattern_ShootHelix_copy_R_mindustry_entities_pattern_ShootPattern)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootHelix_lambda$shoot$0_int_mindustry_gen_Bullet 15
typedef void (*func_mindustry_entities_pattern_ShootHelix_lambda$shoot$0_int_mindustry_gen_Bullet)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_mindustry_entities_pattern_ShootHelix(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_pattern_ShootHelix(jcontext ctx);
void init_mindustry_entities_pattern_ShootHelix_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void init_mindustry_entities_pattern_ShootHelix_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void init_mindustry_entities_pattern_ShootHelix(jcontext ctx, jobject self);
void M_mindustry_entities_pattern_ShootHelix_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void M_mindustry_entities_pattern_ShootHelix_lambda$shoot$0_int_mindustry_gen_Bullet(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
