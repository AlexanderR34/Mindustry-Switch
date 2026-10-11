#ifndef HEADER_mindustry_entities_Puddles
#define HEADER_mindustry_entities_Puddles

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Puddles {
	java_lang_Object parent;
} mindustry_entities_Puddles;

extern Class class_mindustry_entities_Puddles;

extern jfloat SF_mindustry_entities_Puddles_maxLiquid;

#define VTABLE_mindustry_entities_Puddles_hashCode_R_int 0
typedef jint (*func_mindustry_entities_Puddles_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Puddles_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_Puddles_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Puddles_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_Puddles_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Puddles_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_Puddles_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Puddles_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_Puddles_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Puddles_finalize 5
typedef void (*func_mindustry_entities_Puddles_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Puddles_notify 6
typedef void (*func_mindustry_entities_Puddles_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Puddles_notifyAll 7
typedef void (*func_mindustry_entities_Puddles_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Puddles_wait 8
typedef void (*func_mindustry_entities_Puddles_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Puddles_wait_long 9
typedef void (*func_mindustry_entities_Puddles_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_Puddles_wait_long_int 10
typedef void (*func_mindustry_entities_Puddles_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_Puddles(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Puddles(jcontext ctx);
void init_mindustry_entities_Puddles(jcontext ctx, jobject self);
void SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3);
void SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_type_Liquid_float(jcontext ctx, jobject param0, jobject param1, jfloat param2);
jobject SM_mindustry_entities_Puddles_get_mindustry_world_Tile_R_mindustry_gen_Puddle(jcontext ctx, jobject param0);
void SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jbool param4);
void SM_mindustry_entities_Puddles_deposit_mindustry_world_Tile_mindustry_world_Tile_mindustry_type_Liquid_float_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jbool param4, jbool param5);
jbool SM_mindustry_entities_Puddles_hasLiquid_mindustry_world_Tile_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject param0, jobject param1);
void SM_mindustry_entities_Puddles_remove_mindustry_world_Tile(jcontext ctx, jobject param0);
void SM_mindustry_entities_Puddles_register_mindustry_gen_Puddle(jcontext ctx, jobject param0);
jfloat SM_mindustry_entities_Puddles_reactPuddle_mindustry_type_Liquid_mindustry_type_Liquid_float_mindustry_world_Tile_float_float_R_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jobject param3, jfloat param4, jfloat param5);
jbool SM_mindustry_entities_Puddles_canStayOn_mindustry_type_Liquid_mindustry_type_Liquid_R_boolean(jcontext ctx, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
