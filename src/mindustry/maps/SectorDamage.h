#ifndef HEADER_mindustry_maps_SectorDamage
#define HEADER_mindustry_maps_SectorDamage

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_SectorDamage {
	java_lang_Object parent;
} mindustry_maps_SectorDamage;

extern Class class_mindustry_maps_SectorDamage;

extern jbool SF_mindustry_maps_SectorDamage_rubble;

#define VTABLE_mindustry_maps_SectorDamage_hashCode_R_int 0
typedef jint (*func_mindustry_maps_SectorDamage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorDamage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_SectorDamage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_SectorDamage_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_SectorDamage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorDamage_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_SectorDamage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorDamage_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_SectorDamage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorDamage_finalize 5
typedef void (*func_mindustry_maps_SectorDamage_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorDamage_notify 6
typedef void (*func_mindustry_maps_SectorDamage_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorDamage_notifyAll 7
typedef void (*func_mindustry_maps_SectorDamage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorDamage_wait 8
typedef void (*func_mindustry_maps_SectorDamage_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_SectorDamage_wait_long 9
typedef void (*func_mindustry_maps_SectorDamage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_SectorDamage_wait_long_int 10
typedef void (*func_mindustry_maps_SectorDamage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_maps_SectorDamage(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_SectorDamage(jcontext ctx);
void init_mindustry_maps_SectorDamage(jcontext ctx, jobject self);
void SM_mindustry_maps_SectorDamage_apply_float(jcontext ctx, jfloat param0);
jfloat SM_mindustry_maps_SectorDamage_cost_mindustry_world_Tile_R_float(jcontext ctx, jobject param0);
jfloat SM_mindustry_maps_SectorDamage_lambda$apply$1_int_mindustry_world_Tile_R_float(jcontext ctx, jint param0, jobject param1);
jbool SM_mindustry_maps_SectorDamage_lambda$apply$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
