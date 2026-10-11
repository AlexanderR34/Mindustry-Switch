#ifndef HEADER_mindustry_entities_Lightning
#define HEADER_mindustry_entities_Lightning

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Lightning {
	java_lang_Object parent;
} mindustry_entities_Lightning;

extern Class class_mindustry_entities_Lightning;

extern jobject SF_mindustry_entities_Lightning_random;
extern jobject SF_mindustry_entities_Lightning_rect;
extern jobject SF_mindustry_entities_Lightning_entities;
extern jobject SF_mindustry_entities_Lightning_hit;
extern jint SF_mindustry_entities_Lightning_maxChain;
extern jfloat SF_mindustry_entities_Lightning_hitRange;
extern jbool SF_mindustry_entities_Lightning_bhit;
extern jint SF_mindustry_entities_Lightning_lastSeed;

#define VTABLE_mindustry_entities_Lightning_hashCode_R_int 0
typedef jint (*func_mindustry_entities_Lightning_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Lightning_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_Lightning_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Lightning_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_Lightning_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Lightning_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_Lightning_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Lightning_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_Lightning_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Lightning_finalize 5
typedef void (*func_mindustry_entities_Lightning_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Lightning_notify 6
typedef void (*func_mindustry_entities_Lightning_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Lightning_notifyAll 7
typedef void (*func_mindustry_entities_Lightning_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Lightning_wait 8
typedef void (*func_mindustry_entities_Lightning_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Lightning_wait_long 9
typedef void (*func_mindustry_entities_Lightning_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_Lightning_wait_long_int 10
typedef void (*func_mindustry_entities_Lightning_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_Lightning(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Lightning(jcontext ctx);
void init_mindustry_entities_Lightning(jcontext ctx, jobject self);
void SM_mindustry_entities_Lightning_create_mindustry_entities_bullet_BulletType_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jint param7);
void SM_mindustry_entities_Lightning_create_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jint param6);
void SM_mindustry_entities_Lightning_create_mindustry_gen_Bullet_arc_graphics_Color_float_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jint param6);
void SM_mindustry_entities_Lightning_createLightningInternal_mindustry_gen_Bullet_mindustry_entities_bullet_BulletType_int_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jint param9);
void SM_mindustry_entities_Lightning_lambda$createLightningInternal$1_mindustry_gen_Bullet_mindustry_gen_Unit(jcontext ctx, jobject param0, jobject param1);
jbool SM_mindustry_entities_Lightning_lambda$createLightningInternal$0_mindustry_game_Team_arc_struct_Seq_int_int_R_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
