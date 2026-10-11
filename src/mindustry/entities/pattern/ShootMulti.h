#ifndef HEADER_mindustry_entities_pattern_ShootMulti
#define HEADER_mindustry_entities_pattern_ShootMulti

#include "Clearwing.h"
#include "mindustry/entities/pattern/ShootPattern.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_pattern_ShootMulti {
	mindustry_entities_pattern_ShootPattern parent;
	jref F_source;
	jref F_dest;
} mindustry_entities_pattern_ShootMulti;

extern Class class_mindustry_entities_pattern_ShootMulti;


#define VTABLE_mindustry_entities_pattern_ShootMulti_hashCode_R_int 0
typedef jint (*func_mindustry_entities_pattern_ShootMulti_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootMulti_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_pattern_ShootMulti_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_pattern_ShootMulti_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_pattern_ShootMulti_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootMulti_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_pattern_ShootMulti_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootMulti_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_pattern_ShootMulti_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootMulti_finalize 5
typedef void (*func_mindustry_entities_pattern_ShootMulti_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootMulti_notify 6
typedef void (*func_mindustry_entities_pattern_ShootMulti_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootMulti_notifyAll 7
typedef void (*func_mindustry_entities_pattern_ShootMulti_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootMulti_wait 8
typedef void (*func_mindustry_entities_pattern_ShootMulti_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootMulti_wait_long 9
typedef void (*func_mindustry_entities_pattern_ShootMulti_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_pattern_ShootMulti_wait_long_int 10
typedef void (*func_mindustry_entities_pattern_ShootMulti_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_pattern_ShootMulti_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable 11
typedef void (*func_mindustry_entities_pattern_ShootMulti_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable)(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
#define VTABLE_mindustry_entities_pattern_ShootMulti_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler 12
typedef void (*func_mindustry_entities_pattern_ShootMulti_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_mindustry_entities_pattern_ShootMulti_flip 13
typedef void (*func_mindustry_entities_pattern_ShootMulti_flip)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootMulti_copy_R_mindustry_entities_pattern_ShootPattern 14
typedef jobject (*func_mindustry_entities_pattern_ShootMulti_copy_R_mindustry_entities_pattern_ShootPattern)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_pattern_ShootMulti_lambda$shoot$0_int_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover 15
typedef void (*func_mindustry_entities_pattern_ShootMulti_lambda$shoot$0_int_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover)(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);

void mark_mindustry_entities_pattern_ShootMulti(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_pattern_ShootMulti(jcontext ctx);
void init_mindustry_entities_pattern_ShootMulti_mindustry_entities_pattern_ShootPattern_Array1_mindustry_entities_pattern_ShootPattern(jcontext ctx, jobject self, jobject param0, jobject param1);
void init_mindustry_entities_pattern_ShootMulti(jcontext ctx, jobject self);
void M_mindustry_entities_pattern_ShootMulti_flip(jcontext ctx, jobject self);
void M_mindustry_entities_pattern_ShootMulti_shoot_int_mindustry_entities_pattern_ShootPattern$BulletHandler_java_lang_Runnable(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2);
void M_mindustry_entities_pattern_ShootMulti_lambda$shoot$0_int_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6);
void SM_mindustry_entities_pattern_ShootMulti_lambda$shoot$1_mindustry_entities_pattern_ShootPattern$BulletHandler_float_float_float_float_mindustry_entities_Mover_float_float_float_float_mindustry_entities_Mover(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jobject param10);
void SM_mindustry_entities_pattern_ShootMulti_lambda$shoot$2_mindustry_entities_Mover_mindustry_entities_Mover_mindustry_gen_Bullet(jcontext ctx, jobject param0, jobject param1, jobject param2);

#ifdef __cplusplus
}
#endif

#endif
