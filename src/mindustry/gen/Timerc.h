#ifndef HEADER_mindustry_gen_Timerc
#define HEADER_mindustry_gen_Timerc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Timerc {
	java_lang_Object parent;
} mindustry_gen_Timerc;

extern Class class_mindustry_gen_Timerc;


#define INDEX_mindustry_gen_Timerc_timer_R_arc_util_Interval 0
typedef jobject (*func_mindustry_gen_Timerc_timer_R_arc_util_Interval)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Timerc_timer_int_float_R_boolean 1
typedef jbool (*func_mindustry_gen_Timerc_timer_int_float_R_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define INDEX_mindustry_gen_Timerc_timer_arc_util_Interval 2
typedef void (*func_mindustry_gen_Timerc_timer_arc_util_Interval)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Timerc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Timerc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
