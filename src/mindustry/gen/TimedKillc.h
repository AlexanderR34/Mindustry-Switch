#ifndef HEADER_mindustry_gen_TimedKillc
#define HEADER_mindustry_gen_TimedKillc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/Scaled.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_TimedKillc {
	java_lang_Object parent;
} mindustry_gen_TimedKillc;

extern Class class_mindustry_gen_TimedKillc;


#define INDEX_mindustry_gen_TimedKillc_fin_R_float 0
typedef jfloat (*func_mindustry_gen_TimedKillc_fin_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_TimedKillc_lifetime_R_float 1
typedef jfloat (*func_mindustry_gen_TimedKillc_lifetime_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_TimedKillc_time_R_float 2
typedef jfloat (*func_mindustry_gen_TimedKillc_time_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_TimedKillc_lifetime_float 3
typedef void (*func_mindustry_gen_TimedKillc_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_TimedKillc_time_float 4
typedef void (*func_mindustry_gen_TimedKillc_time_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_TimedKillc_update 5
typedef void (*func_mindustry_gen_TimedKillc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_TimedKillc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_TimedKillc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
