#ifndef HEADER_mindustry_gen_Posc
#define HEADER_mindustry_gen_Posc

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Position.h"
#include "mindustry/gen/Entityc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Posc {
	java_lang_Object parent;
} mindustry_gen_Posc;

extern Class class_mindustry_gen_Posc;


#define INDEX_mindustry_gen_Posc_floorOn_R_mindustry_world_blocks_environment_Floor 0
typedef jobject (*func_mindustry_gen_Posc_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_buildOn_R_mindustry_gen_Building 1
typedef jobject (*func_mindustry_gen_Posc_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_onSolid_R_boolean 2
typedef jbool (*func_mindustry_gen_Posc_onSolid_R_boolean)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_getX_R_float 3
typedef jfloat (*func_mindustry_gen_Posc_getX_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_getY_R_float 4
typedef jfloat (*func_mindustry_gen_Posc_getY_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_x_R_float 5
typedef jfloat (*func_mindustry_gen_Posc_x_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_y_R_float 6
typedef jfloat (*func_mindustry_gen_Posc_y_R_float)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_tileX_R_int 7
typedef jint (*func_mindustry_gen_Posc_tileX_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_tileY_R_int 8
typedef jint (*func_mindustry_gen_Posc_tileY_R_int)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_blockOn_R_mindustry_world_Block 9
typedef jobject (*func_mindustry_gen_Posc_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_tileOn_R_mindustry_world_Tile 10
typedef jobject (*func_mindustry_gen_Posc_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define INDEX_mindustry_gen_Posc_set_arc_math_geom_Position 11
typedef void (*func_mindustry_gen_Posc_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Posc_set_float_float 12
typedef void (*func_mindustry_gen_Posc_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Posc_trns_arc_math_geom_Position 13
typedef void (*func_mindustry_gen_Posc_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define INDEX_mindustry_gen_Posc_trns_float_float 14
typedef void (*func_mindustry_gen_Posc_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_mindustry_gen_Posc_x_float 15
typedef void (*func_mindustry_gen_Posc_x_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_mindustry_gen_Posc_y_float 16
typedef void (*func_mindustry_gen_Posc_y_float)(jcontext ctx, jobject self, jfloat param0);

void mark_mindustry_gen_Posc(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Posc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
