#ifndef HEADER_mindustry_gen_LaunchCorec
#define HEADER_mindustry_gen_LaunchCorec

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Timedc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_LaunchCorec {
	java_lang_Object parent;
} mindustry_gen_LaunchCorec;

extern Class class_mindustry_gen_LaunchCorec;


#define INDEX_mindustry_gen_LaunchCorec_in_R_arc_util_Interval 0
typedef jobject (*func_mindustry_gen_LaunchCorec_in_R_arc_util_Interval)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchCorec_cx_R_float 1
typedef jfloat (*func_mindustry_gen_LaunchCorec_cx_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchCorec_cy_R_float 2
typedef jfloat (*func_mindustry_gen_LaunchCorec_cy_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchCorec_block_R_mindustry_world_Block 3
typedef jobject (*func_mindustry_gen_LaunchCorec_block_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchCorec_block_mindustry_world_Block 4
typedef void (*func_mindustry_gen_LaunchCorec_block_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_LaunchCorec_draw 5
typedef void (*func_mindustry_gen_LaunchCorec_draw)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_LaunchCorec_in_arc_util_Interval 6
typedef void (*func_mindustry_gen_LaunchCorec_in_arc_util_Interval)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_LaunchCorec_update 7
typedef void (*func_mindustry_gen_LaunchCorec_update)(jcontext ctx, jobject self);

void mark_mindustry_gen_LaunchCorec(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_LaunchCorec(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
