#ifndef HEADER_mindustry_gen_LaunchPayloadc
#define HEADER_mindustry_gen_LaunchPayloadc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Teamc.h"
#include "mindustry/gen/Timedc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_LaunchPayloadc {
	java_lang_Object parent;
} mindustry_gen_LaunchPayloadc;

extern Class class_mindustry_gen_LaunchPayloadc;


#define INDEX_mindustry_gen_LaunchPayloadc_stacks_R_arc_struct_Seq 0
typedef jobject (*func_mindustry_gen_LaunchPayloadc_stacks_R_arc_struct_Seq)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchPayloadc_in_R_arc_util_Interval 1
typedef jobject (*func_mindustry_gen_LaunchPayloadc_in_R_arc_util_Interval)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchPayloadc_cx_R_float 2
typedef jfloat (*func_mindustry_gen_LaunchPayloadc_cx_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchPayloadc_cy_R_float 3
typedef jfloat (*func_mindustry_gen_LaunchPayloadc_cy_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchPayloadc_draw 4
typedef void (*func_mindustry_gen_LaunchPayloadc_draw)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchPayloadc_in_arc_util_Interval 5
typedef void (*func_mindustry_gen_LaunchPayloadc_in_arc_util_Interval)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_LaunchPayloadc_remove 6
typedef void (*func_mindustry_gen_LaunchPayloadc_remove)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchPayloadc_stacks_arc_struct_Seq 7
typedef void (*func_mindustry_gen_LaunchPayloadc_stacks_arc_struct_Seq)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_LaunchPayloadc_update 8
typedef void (*func_mindustry_gen_LaunchPayloadc_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_LaunchPayloadc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_LaunchPayloadc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
