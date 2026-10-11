#ifndef HEADER_mindustry_gen_WeatherStatec
#define HEADER_mindustry_gen_WeatherStatec

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Syncc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_WeatherStatec {
	java_lang_Object parent;
} mindustry_gen_WeatherStatec;

extern Class class_mindustry_gen_WeatherStatec;


#define INDEX_mindustry_gen_WeatherStatec_windVector_R_arc_math_geom_Vec2 0
typedef jobject (*func_mindustry_gen_WeatherStatec_windVector_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WeatherStatec_effectTimer_R_float 1
typedef jfloat (*func_mindustry_gen_WeatherStatec_effectTimer_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WeatherStatec_intensity_R_float 2
typedef jfloat (*func_mindustry_gen_WeatherStatec_intensity_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WeatherStatec_life_R_float 3
typedef jfloat (*func_mindustry_gen_WeatherStatec_life_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WeatherStatec_opacity_R_float 4
typedef jfloat (*func_mindustry_gen_WeatherStatec_opacity_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WeatherStatec_weather_R_mindustry_type_Weather 5
typedef jobject (*func_mindustry_gen_WeatherStatec_weather_R_mindustry_type_Weather)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WeatherStatec_draw 6
typedef void (*func_mindustry_gen_WeatherStatec_draw)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WeatherStatec_effectTimer_float 7
typedef void (*func_mindustry_gen_WeatherStatec_effectTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_WeatherStatec_init_mindustry_type_Weather 8
typedef void (*func_mindustry_gen_WeatherStatec_init_mindustry_type_Weather)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_WeatherStatec_intensity_float 9
typedef void (*func_mindustry_gen_WeatherStatec_intensity_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_WeatherStatec_life_float 10
typedef void (*func_mindustry_gen_WeatherStatec_life_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_WeatherStatec_opacity_float 11
typedef void (*func_mindustry_gen_WeatherStatec_opacity_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_WeatherStatec_update 12
typedef void (*func_mindustry_gen_WeatherStatec_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_WeatherStatec_weather_mindustry_type_Weather 13
typedef void (*func_mindustry_gen_WeatherStatec_weather_mindustry_type_Weather)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_WeatherStatec_windVector_arc_math_geom_Vec2 14
typedef void (*func_mindustry_gen_WeatherStatec_windVector_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_WeatherStatec(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_WeatherStatec(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
