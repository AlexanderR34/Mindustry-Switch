#ifndef HEADER_mindustry_type_Weather$WeatherEntry
#define HEADER_mindustry_type_Weather$WeatherEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_Weather$WeatherEntry {
	java_lang_Object parent;
	jref F_weather;
	jfloat F_minFrequency;
	jfloat F_maxFrequency;
	jfloat F_minDuration;
	jfloat F_maxDuration;
	jfloat F_cooldown;
	jfloat F_intensity;
	jbool F_always;
} mindustry_type_Weather$WeatherEntry;

extern Class class_mindustry_type_Weather$WeatherEntry;


#define VTABLE_mindustry_type_Weather$WeatherEntry_hashCode_R_int 0
typedef jint (*func_mindustry_type_Weather$WeatherEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_Weather$WeatherEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherEntry_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_Weather$WeatherEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_Weather$WeatherEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherEntry_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_Weather$WeatherEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherEntry_finalize 5
typedef void (*func_mindustry_type_Weather$WeatherEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherEntry_notify 6
typedef void (*func_mindustry_type_Weather$WeatherEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherEntry_notifyAll 7
typedef void (*func_mindustry_type_Weather$WeatherEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherEntry_wait 8
typedef void (*func_mindustry_type_Weather$WeatherEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherEntry_wait_long 9
typedef void (*func_mindustry_type_Weather$WeatherEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_Weather$WeatherEntry_wait_long_int 10
typedef void (*func_mindustry_type_Weather$WeatherEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_type_Weather$WeatherEntry(jobject object, jint mark, jint depth);
void clinit_mindustry_type_Weather$WeatherEntry(jcontext ctx);
void init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather(jcontext ctx, jobject self, jobject param0);
void init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void init_mindustry_type_Weather$WeatherEntry(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
