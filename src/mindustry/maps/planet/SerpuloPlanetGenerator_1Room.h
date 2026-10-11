#ifndef HEADER_mindustry_maps_planet_SerpuloPlanetGenerator$1Room
#define HEADER_mindustry_maps_planet_SerpuloPlanetGenerator$1Room

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_maps_planet_SerpuloPlanetGenerator$1Room {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_radius;
	jref F_connected;
	jref F_this$0;
} mindustry_maps_planet_SerpuloPlanetGenerator$1Room;

extern Class class_mindustry_maps_planet_SerpuloPlanetGenerator$1Room;


#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_hashCode_R_int 0
typedef jint (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_finalize 5
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_notify 6
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_notifyAll 7
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_wait 8
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_wait_long 9
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_wait_long_int 10
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int 11
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room 12
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int 13
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connectLiquid_mindustry_maps_planet_SerpuloPlanetGenerator$1Room 14
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connectLiquid_mindustry_maps_planet_SerpuloPlanetGenerator$1Room)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$1_int_int_int_int_mindustry_world_Tile 15
typedef void (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$1_int_int_int_int_mindustry_world_Tile)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$0_float_mindustry_world_Tile_R_float 16
typedef jfloat (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$0_float_mindustry_world_Tile_R_float)(jcontext ctx, jobject self, jfloat param0, jobject param1);
#define VTABLE_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$join$0_float_mindustry_world_Tile_R_float 17
typedef jfloat (*func_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$join$0_float_mindustry_world_Tile_R_float)(jcontext ctx, jobject self, jfloat param0, jobject param1);

void mark_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(jobject object, jint mark, jint depth);
void clinit_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(jcontext ctx);
void init_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_mindustry_maps_planet_SerpuloPlanetGenerator_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_join_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connect_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_joinLiquid_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_connectLiquid_mindustry_maps_planet_SerpuloPlanetGenerator$1Room(jcontext ctx, jobject self, jobject param0);
void M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$1_int_int_int_int_mindustry_world_Tile(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);
jfloat M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$joinLiquid$0_float_mindustry_world_Tile_R_float(jcontext ctx, jobject self, jfloat param0, jobject param1);
jfloat M_mindustry_maps_planet_SerpuloPlanetGenerator$1Room_lambda$join$0_float_mindustry_world_Tile_R_float(jcontext ctx, jobject self, jfloat param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
