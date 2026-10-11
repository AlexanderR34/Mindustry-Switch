#ifndef HEADER_mindustry_content_Planets
#define HEADER_mindustry_content_Planets

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Planets {
	java_lang_Object parent;
} mindustry_content_Planets;

extern Class class_mindustry_content_Planets;

extern jobject SF_mindustry_content_Planets_sun;
extern jobject SF_mindustry_content_Planets_erekir;
extern jobject SF_mindustry_content_Planets_tantros;
extern jobject SF_mindustry_content_Planets_serpulo;
extern jobject SF_mindustry_content_Planets_gier;
extern jobject SF_mindustry_content_Planets_notva;
extern jobject SF_mindustry_content_Planets_verilus;

#define VTABLE_mindustry_content_Planets_hashCode_R_int 0
typedef jint (*func_mindustry_content_Planets_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Planets_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Planets_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Planets_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Planets_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Planets_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets_finalize 5
typedef void (*func_mindustry_content_Planets_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets_notify 6
typedef void (*func_mindustry_content_Planets_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets_notifyAll 7
typedef void (*func_mindustry_content_Planets_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets_wait 8
typedef void (*func_mindustry_content_Planets_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Planets_wait_long 9
typedef void (*func_mindustry_content_Planets_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Planets_wait_long_int 10
typedef void (*func_mindustry_content_Planets_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_content_Planets(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Planets(jcontext ctx);
void init_mindustry_content_Planets(jcontext ctx, jobject self);
void SM_mindustry_content_Planets_load(jcontext ctx);
jobject SM_mindustry_content_Planets_makeAsteroid_java_lang_String_mindustry_type_Planet_mindustry_world_Block_mindustry_world_Block_int_float_int_float_arc_func_Cons_R_mindustry_type_Planet(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jfloat param5, jint param6, jfloat param7, jobject param8);
void SM_mindustry_content_Planets_lambda$load$2_mindustry_maps_planet_AsteroidGenerator(jcontext ctx, jobject param0);
void SM_mindustry_content_Planets_lambda$load$1_mindustry_maps_planet_AsteroidGenerator(jcontext ctx, jobject param0);
void SM_mindustry_content_Planets_lambda$load$0_mindustry_maps_planet_AsteroidGenerator(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
