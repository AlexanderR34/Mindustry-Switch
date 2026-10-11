#ifndef HEADER_mindustry_gen_Syncc
#define HEADER_mindustry_gen_Syncc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Syncc {
	java_lang_Object parent;
} mindustry_gen_Syncc;

extern Class class_mindustry_gen_Syncc;


#define INDEX_mindustry_gen_Syncc_isSyncHidden_mindustry_game_Team_R_boolean 0
typedef jbool (*func_mindustry_gen_Syncc_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Syncc_lastUpdated_R_long 1
typedef jlong (*func_mindustry_gen_Syncc_lastUpdated_R_long)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Syncc_updateSpacing_R_long 2
typedef jlong (*func_mindustry_gen_Syncc_updateSpacing_R_long)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Syncc_afterSync 3
typedef void (*func_mindustry_gen_Syncc_afterSync)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Syncc_handleSyncHidden 4
typedef void (*func_mindustry_gen_Syncc_handleSyncHidden)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Syncc_interpolate 5
typedef void (*func_mindustry_gen_Syncc_interpolate)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Syncc_lastUpdated_long 6
typedef void (*func_mindustry_gen_Syncc_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define INDEX_mindustry_gen_Syncc_readSync_arc_util_io_Reads 7
typedef void (*func_mindustry_gen_Syncc_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Syncc_readSyncManual_java_nio_FloatBuffer 8
typedef void (*func_mindustry_gen_Syncc_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Syncc_remove 9
typedef void (*func_mindustry_gen_Syncc_remove)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Syncc_snapInterpolation 10
typedef void (*func_mindustry_gen_Syncc_snapInterpolation)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Syncc_snapSync 11
typedef void (*func_mindustry_gen_Syncc_snapSync)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Syncc_update 12
typedef void (*func_mindustry_gen_Syncc_update)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Syncc_updateSpacing_long 13
typedef void (*func_mindustry_gen_Syncc_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define INDEX_mindustry_gen_Syncc_writeSync_arc_util_io_Writes 14
typedef void (*func_mindustry_gen_Syncc_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Syncc_writeSyncManual_java_nio_FloatBuffer 15
typedef void (*func_mindustry_gen_Syncc_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_Syncc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Syncc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
