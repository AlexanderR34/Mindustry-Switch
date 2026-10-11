#ifndef HEADER_mindustry_gen_Timedc
#define HEADER_mindustry_gen_Timedc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/Scaled.h"
#include "mindustry/gen/Entityc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Timedc {
	java_lang_Object parent;
} mindustry_gen_Timedc;

extern Class class_mindustry_gen_Timedc;


#define INDEX_mindustry_gen_Timedc_fin_R_float 0
typedef jfloat (*func_mindustry_gen_Timedc_fin_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Timedc_lifetime_R_float 1
typedef jfloat (*func_mindustry_gen_Timedc_lifetime_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Timedc_time_R_float 2
typedef jfloat (*func_mindustry_gen_Timedc_time_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Timedc_lifetime_float 3
typedef void (*func_mindustry_gen_Timedc_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Timedc_time_float 4
typedef void (*func_mindustry_gen_Timedc_time_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Timedc_update 5
typedef void (*func_mindustry_gen_Timedc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_Timedc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Timedc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
