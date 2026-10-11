#ifndef HEADER_mindustry_graphics_Layer
#define HEADER_mindustry_graphics_Layer

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_graphics_Layer {
	java_lang_Object parent;
} mindustry_graphics_Layer;

extern Class class_mindustry_graphics_Layer;

extern jfloat SF_mindustry_graphics_Layer_min;
extern jfloat SF_mindustry_graphics_Layer_background;
extern jfloat SF_mindustry_graphics_Layer_floor;
extern jfloat SF_mindustry_graphics_Layer_scorch;
extern jfloat SF_mindustry_graphics_Layer_debris;
extern jfloat SF_mindustry_graphics_Layer_blockUnder;
extern jfloat SF_mindustry_graphics_Layer_block;
extern jfloat SF_mindustry_graphics_Layer_blockCracks;
extern jfloat SF_mindustry_graphics_Layer_blockAfterCracks;
extern jfloat SF_mindustry_graphics_Layer_blockAdditive;
extern jfloat SF_mindustry_graphics_Layer_blockProp;
extern jfloat SF_mindustry_graphics_Layer_blockOver;
extern jfloat SF_mindustry_graphics_Layer_blockBuilding;
extern jfloat SF_mindustry_graphics_Layer_turret;
extern jfloat SF_mindustry_graphics_Layer_turretHeat;
extern jfloat SF_mindustry_graphics_Layer_groundUnit;
extern jfloat SF_mindustry_graphics_Layer_power;
extern jfloat SF_mindustry_graphics_Layer_legUnit;
extern jfloat SF_mindustry_graphics_Layer_darkness;
extern jfloat SF_mindustry_graphics_Layer_plans;
extern jfloat SF_mindustry_graphics_Layer_flyingUnitLow;
extern jfloat SF_mindustry_graphics_Layer_bullet;
extern jfloat SF_mindustry_graphics_Layer_effect;
extern jfloat SF_mindustry_graphics_Layer_flyingUnit;
extern jfloat SF_mindustry_graphics_Layer_overlayUI;
extern jfloat SF_mindustry_graphics_Layer_buildBeam;
extern jfloat SF_mindustry_graphics_Layer_shields;
extern jfloat SF_mindustry_graphics_Layer_weather;
extern jfloat SF_mindustry_graphics_Layer_light;
extern jfloat SF_mindustry_graphics_Layer_playerName;
extern jfloat SF_mindustry_graphics_Layer_fogOfWar;
extern jfloat SF_mindustry_graphics_Layer_space;
extern jfloat SF_mindustry_graphics_Layer_end;
extern jfloat SF_mindustry_graphics_Layer_endPixeled;
extern jfloat SF_mindustry_graphics_Layer_max;

#define VTABLE_mindustry_graphics_Layer_hashCode_R_int 0
typedef jint (*func_mindustry_graphics_Layer_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Layer_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_graphics_Layer_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_graphics_Layer_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_graphics_Layer_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Layer_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_graphics_Layer_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Layer_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_graphics_Layer_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Layer_finalize 5
typedef void (*func_mindustry_graphics_Layer_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Layer_notify 6
typedef void (*func_mindustry_graphics_Layer_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Layer_notifyAll 7
typedef void (*func_mindustry_graphics_Layer_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Layer_wait 8
typedef void (*func_mindustry_graphics_Layer_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_graphics_Layer_wait_long 9
typedef void (*func_mindustry_graphics_Layer_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_graphics_Layer_wait_long_int 10
typedef void (*func_mindustry_graphics_Layer_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_graphics_Layer(jobject object, jint mark, jint depth);
void clinit_mindustry_graphics_Layer(jcontext ctx);
void init_mindustry_graphics_Layer(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
