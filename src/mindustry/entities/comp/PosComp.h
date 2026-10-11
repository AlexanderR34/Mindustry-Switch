#ifndef HEADER_mindustry_entities_comp_PosComp
#define HEADER_mindustry_entities_comp_PosComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Position.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_PosComp {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
} mindustry_entities_comp_PosComp;

extern Class class_mindustry_entities_comp_PosComp;


#define VTABLE_mindustry_entities_comp_PosComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_PosComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_PosComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PosComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_PosComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_PosComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_PosComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_finalize 5
typedef void (*func_mindustry_entities_comp_PosComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_notify 6
typedef void (*func_mindustry_entities_comp_PosComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_PosComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_wait 8
typedef void (*func_mindustry_entities_comp_PosComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_wait_long 9
typedef void (*func_mindustry_entities_comp_PosComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_PosComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_PosComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_PosComp_getX_R_float 11
typedef jfloat (*func_mindustry_entities_comp_PosComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_getY_R_float 12
typedef jfloat (*func_mindustry_entities_comp_PosComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_entities_comp_PosComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PosComp_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_entities_comp_PosComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PosComp_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_entities_comp_PosComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PosComp_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_entities_comp_PosComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PosComp_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_entities_comp_PosComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PosComp_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_entities_comp_PosComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PosComp_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_entities_comp_PosComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PosComp_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_entities_comp_PosComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_PosComp_set_float_float 21
typedef void (*func_mindustry_entities_comp_PosComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PosComp_set_arc_math_geom_Position 22
typedef void (*func_mindustry_entities_comp_PosComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PosComp_trns_float_float 23
typedef void (*func_mindustry_entities_comp_PosComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PosComp_trns_arc_math_geom_Position 24
typedef void (*func_mindustry_entities_comp_PosComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PosComp_tileX_R_int 25
typedef jint (*func_mindustry_entities_comp_PosComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_tileY_R_int 26
typedef jint (*func_mindustry_entities_comp_PosComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_floorOn_R_mindustry_world_blocks_environment_Floor 27
typedef jobject (*func_mindustry_entities_comp_PosComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_blockOn_R_mindustry_world_Block 28
typedef jobject (*func_mindustry_entities_comp_PosComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_buildOn_R_mindustry_gen_Building 29
typedef jobject (*func_mindustry_entities_comp_PosComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_tileOn_R_mindustry_world_Tile 30
typedef jobject (*func_mindustry_entities_comp_PosComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PosComp_onSolid_R_boolean 31
typedef jbool (*func_mindustry_entities_comp_PosComp_onSolid_R_boolean)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_PosComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_PosComp(jcontext ctx);
void init_mindustry_entities_comp_PosComp(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PosComp_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_entities_comp_PosComp_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_entities_comp_PosComp_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_entities_comp_PosComp_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
jint M_mindustry_entities_comp_PosComp_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_entities_comp_PosComp_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PosComp_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PosComp_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PosComp_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_entities_comp_PosComp_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_PosComp_onSolid_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_PosComp_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_PosComp_getY_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
