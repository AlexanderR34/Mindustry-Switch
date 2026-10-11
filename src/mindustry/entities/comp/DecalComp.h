#ifndef HEADER_mindustry_entities_comp_DecalComp
#define HEADER_mindustry_entities_comp_DecalComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Timedc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Posc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_DecalComp {
	java_lang_Object parent;
	jfloat F_x;
	jfloat F_y;
	jfloat F_rotation;
	jref F_color;
	jref F_region;
} mindustry_entities_comp_DecalComp;

extern Class class_mindustry_entities_comp_DecalComp;


#define VTABLE_mindustry_entities_comp_DecalComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_DecalComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_DecalComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DecalComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_DecalComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_DecalComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_DecalComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_finalize 5
typedef void (*func_mindustry_entities_comp_DecalComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_notify 6
typedef void (*func_mindustry_entities_comp_DecalComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_DecalComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_wait 8
typedef void (*func_mindustry_entities_comp_DecalComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_wait_long 9
typedef void (*func_mindustry_entities_comp_DecalComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_DecalComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_DecalComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_DecalComp_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_entities_comp_DecalComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_entities_comp_DecalComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_isAdded_R_boolean 13
typedef jbool (*func_mindustry_entities_comp_DecalComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_isLocal_R_boolean 14
typedef jbool (*func_mindustry_entities_comp_DecalComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_isRemote_R_boolean 15
typedef jbool (*func_mindustry_entities_comp_DecalComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_serialize_R_boolean 16
typedef jbool (*func_mindustry_entities_comp_DecalComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_classId_R_int 17
typedef jint (*func_mindustry_entities_comp_DecalComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_id_R_int 18
typedef jint (*func_mindustry_entities_comp_DecalComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_add 19
typedef void (*func_mindustry_entities_comp_DecalComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_afterRead 20
typedef void (*func_mindustry_entities_comp_DecalComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_afterReadAll 21
typedef void (*func_mindustry_entities_comp_DecalComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_beforeWrite 22
typedef void (*func_mindustry_entities_comp_DecalComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_id_int 23
typedef void (*func_mindustry_entities_comp_DecalComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_DecalComp_read_arc_util_io_Reads 24
typedef void (*func_mindustry_entities_comp_DecalComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DecalComp_remove 25
typedef void (*func_mindustry_entities_comp_DecalComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_update 26
typedef void (*func_mindustry_entities_comp_DecalComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_write_arc_util_io_Writes 27
typedef void (*func_mindustry_entities_comp_DecalComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DecalComp_getX_R_float 28
typedef jfloat (*func_mindustry_entities_comp_DecalComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_getY_R_float 29
typedef jfloat (*func_mindustry_entities_comp_DecalComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_entities_comp_DecalComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DecalComp_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_entities_comp_DecalComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DecalComp_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_entities_comp_DecalComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DecalComp_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_entities_comp_DecalComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DecalComp_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_entities_comp_DecalComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DecalComp_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_entities_comp_DecalComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DecalComp_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_entities_comp_DecalComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DecalComp_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_entities_comp_DecalComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_DecalComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_DecalComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_DecalComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_DecalComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_DecalComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_DecalComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_DecalComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_DecalComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_DecalComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_DecalComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_DecalComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DecalComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_DecalComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DecalComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_DecalComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DecalComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_DecalComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_DecalComp_x_float 51
typedef void (*func_mindustry_entities_comp_DecalComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_DecalComp_y_float 52
typedef void (*func_mindustry_entities_comp_DecalComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_DecalComp_clipSize_R_float 53
typedef jfloat (*func_mindustry_entities_comp_DecalComp_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_draw 54
typedef void (*func_mindustry_entities_comp_DecalComp_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_fin_R_float 55
typedef jfloat (*func_mindustry_entities_comp_DecalComp_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_fout_R_float 56
typedef jfloat (*func_mindustry_entities_comp_DecalComp_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_fout_arc_math_Interp_R_float 57
typedef jfloat (*func_mindustry_entities_comp_DecalComp_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DecalComp_fout_float_R_float 58
typedef jfloat (*func_mindustry_entities_comp_DecalComp_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_DecalComp_fin_arc_math_Interp_R_float 59
typedef jfloat (*func_mindustry_entities_comp_DecalComp_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_DecalComp_finpow_R_float 60
typedef jfloat (*func_mindustry_entities_comp_DecalComp_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_foutpow_R_float 61
typedef jfloat (*func_mindustry_entities_comp_DecalComp_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_finpowdown_R_float 62
typedef jfloat (*func_mindustry_entities_comp_DecalComp_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_foutpowdown_R_float 63
typedef jfloat (*func_mindustry_entities_comp_DecalComp_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_fslope_R_float 64
typedef jfloat (*func_mindustry_entities_comp_DecalComp_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_lifetime_R_float 65
typedef jfloat (*func_mindustry_entities_comp_DecalComp_lifetime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_time_R_float 66
typedef jfloat (*func_mindustry_entities_comp_DecalComp_time_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_lifetime_float 67
typedef void (*func_mindustry_entities_comp_DecalComp_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_DecalComp_time_float 68
typedef void (*func_mindustry_entities_comp_DecalComp_time_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_DecalComp_rotation_R_float 69
typedef jfloat (*func_mindustry_entities_comp_DecalComp_rotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_DecalComp_rotation_float 70
typedef void (*func_mindustry_entities_comp_DecalComp_rotation_float)(jcontext ctx, jobject self, jfloat param0);

void mark_mindustry_entities_comp_DecalComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_DecalComp(jcontext ctx);
void init_mindustry_entities_comp_DecalComp(jcontext ctx, jobject self);
void M_mindustry_entities_comp_DecalComp_draw(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_DecalComp_clipSize_R_float(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
