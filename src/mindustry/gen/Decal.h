#ifndef HEADER_mindustry_gen_Decal
#define HEADER_mindustry_gen_Decal

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "mindustry/gen/Decalc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Timedc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_Decal {
	java_lang_Object parent;
	jbool F_added;
	jref F_color;
	jint F_id;
	jint F_index__all;
	jint F_index__draw;
	jfloat F_lifetime;
	jref F_region;
	jfloat F_rotation;
	jfloat F_time;
	jfloat F_x;
	jfloat F_y;
} mindustry_gen_Decal;

extern Class class_mindustry_gen_Decal;


#define VTABLE_mindustry_gen_Decal_hashCode_R_int 0
typedef jint (*func_mindustry_gen_Decal_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_Decal_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_Decal_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_Decal_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_Decal_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_finalize 5
typedef void (*func_mindustry_gen_Decal_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_notify 6
typedef void (*func_mindustry_gen_Decal_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_notifyAll 7
typedef void (*func_mindustry_gen_Decal_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_wait 8
typedef void (*func_mindustry_gen_Decal_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_wait_long 9
typedef void (*func_mindustry_gen_Decal_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_Decal_wait_long_int 10
typedef void (*func_mindustry_gen_Decal_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_Decal_reset 11
typedef void (*func_mindustry_gen_Decal_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_self_R_mindustry_gen_Entityc 12
typedef jobject (*func_mindustry_gen_Decal_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_as_R_java_lang_Object 13
typedef jobject (*func_mindustry_gen_Decal_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_isAdded_R_boolean 14
typedef jbool (*func_mindustry_gen_Decal_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_isLocal_R_boolean 15
typedef jbool (*func_mindustry_gen_Decal_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_isRemote_R_boolean 16
typedef jbool (*func_mindustry_gen_Decal_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_serialize_R_boolean 17
typedef jbool (*func_mindustry_gen_Decal_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_classId_R_int 18
typedef jint (*func_mindustry_gen_Decal_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_id_R_int 19
typedef jint (*func_mindustry_gen_Decal_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_add 20
typedef void (*func_mindustry_gen_Decal_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_afterRead 21
typedef void (*func_mindustry_gen_Decal_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_afterReadAll 22
typedef void (*func_mindustry_gen_Decal_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_beforeWrite 23
typedef void (*func_mindustry_gen_Decal_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_id_int 24
typedef void (*func_mindustry_gen_Decal_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Decal_read_arc_util_io_Reads 25
typedef void (*func_mindustry_gen_Decal_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_remove 26
typedef void (*func_mindustry_gen_Decal_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_update 27
typedef void (*func_mindustry_gen_Decal_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_write_arc_util_io_Writes 28
typedef void (*func_mindustry_gen_Decal_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_getX_R_float 29
typedef jfloat (*func_mindustry_gen_Decal_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_getY_R_float 30
typedef jfloat (*func_mindustry_gen_Decal_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_angleTo_arc_math_geom_Position_R_float 31
typedef jfloat (*func_mindustry_gen_Decal_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_angleTo_float_float_R_float 32
typedef jfloat (*func_mindustry_gen_Decal_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Decal_dst2_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_Decal_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_dst_arc_math_geom_Position_R_float 34
typedef jfloat (*func_mindustry_gen_Decal_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_dst_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_Decal_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Decal_dst2_float_float_R_float 36
typedef jfloat (*func_mindustry_gen_Decal_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Decal_within_arc_math_geom_Position_float_R_boolean 37
typedef jbool (*func_mindustry_gen_Decal_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_Decal_within_float_float_float_R_boolean 38
typedef jbool (*func_mindustry_gen_Decal_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_Decal_floorOn_R_mindustry_world_blocks_environment_Floor 39
typedef jobject (*func_mindustry_gen_Decal_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_buildOn_R_mindustry_gen_Building 40
typedef jobject (*func_mindustry_gen_Decal_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_onSolid_R_boolean 41
typedef jbool (*func_mindustry_gen_Decal_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_x_R_float 42
typedef jfloat (*func_mindustry_gen_Decal_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_y_R_float 43
typedef jfloat (*func_mindustry_gen_Decal_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_tileX_R_int 44
typedef jint (*func_mindustry_gen_Decal_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_tileY_R_int 45
typedef jint (*func_mindustry_gen_Decal_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_blockOn_R_mindustry_world_Block 46
typedef jobject (*func_mindustry_gen_Decal_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile 47
typedef jobject (*func_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_set_arc_math_geom_Position 48
typedef void (*func_mindustry_gen_Decal_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_set_float_float 49
typedef void (*func_mindustry_gen_Decal_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Decal_trns_arc_math_geom_Position 50
typedef void (*func_mindustry_gen_Decal_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_trns_float_float 51
typedef void (*func_mindustry_gen_Decal_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_Decal_x_float 52
typedef void (*func_mindustry_gen_Decal_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Decal_y_float 53
typedef void (*func_mindustry_gen_Decal_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Decal_clipSize_R_float 54
typedef jfloat (*func_mindustry_gen_Decal_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_draw 55
typedef void (*func_mindustry_gen_Decal_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_rotation_R_float 56
typedef jfloat (*func_mindustry_gen_Decal_rotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_rotation_float 57
typedef void (*func_mindustry_gen_Decal_rotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Decal_fin_R_float 58
typedef jfloat (*func_mindustry_gen_Decal_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_fout_R_float 59
typedef jfloat (*func_mindustry_gen_Decal_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_fout_arc_math_Interp_R_float 60
typedef jfloat (*func_mindustry_gen_Decal_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_fout_float_R_float 61
typedef jfloat (*func_mindustry_gen_Decal_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Decal_fin_arc_math_Interp_R_float 62
typedef jfloat (*func_mindustry_gen_Decal_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_finpow_R_float 63
typedef jfloat (*func_mindustry_gen_Decal_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_foutpow_R_float 64
typedef jfloat (*func_mindustry_gen_Decal_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_finpowdown_R_float 65
typedef jfloat (*func_mindustry_gen_Decal_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_foutpowdown_R_float 66
typedef jfloat (*func_mindustry_gen_Decal_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_fslope_R_float 67
typedef jfloat (*func_mindustry_gen_Decal_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_lifetime_R_float 68
typedef jfloat (*func_mindustry_gen_Decal_lifetime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_time_R_float 69
typedef jfloat (*func_mindustry_gen_Decal_time_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_lifetime_float 70
typedef void (*func_mindustry_gen_Decal_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Decal_time_float 71
typedef void (*func_mindustry_gen_Decal_time_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_Decal_color_R_arc_graphics_Color 72
typedef jobject (*func_mindustry_gen_Decal_color_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_region_R_arc_graphics_g2d_TextureRegion 73
typedef jobject (*func_mindustry_gen_Decal_region_R_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_Decal_color_arc_graphics_Color 74
typedef void (*func_mindustry_gen_Decal_color_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_region_arc_graphics_g2d_TextureRegion 75
typedef void (*func_mindustry_gen_Decal_region_arc_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_Decal_setIndex__all_int 76
typedef void (*func_mindustry_gen_Decal_setIndex__all_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_Decal_setIndex__draw_int 77
typedef void (*func_mindustry_gen_Decal_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);

void mark_mindustry_gen_Decal(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_Decal(jcontext ctx);
void init_mindustry_gen_Decal(jcontext ctx, jobject self);
jobject M_mindustry_gen_Decal_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_Decal_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_Decal_color_R_arc_graphics_Color(jcontext ctx, jobject self);
jobject M_mindustry_gen_Decal_region_R_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Decal_lifetime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Decal_rotation_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Decal_time_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Decal_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Decal_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Decal_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Decal_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Decal_toString_R_java_lang_String(jcontext ctx, jobject self);
void M_mindustry_gen_Decal_color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Decal_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Decal_lifetime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Decal_region_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Decal_rotation_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Decal_setIndex__all_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Decal_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_Decal_time_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Decal_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_Decal_y_float(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_gen_Decal_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_Decal_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_Decal_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Decal_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Decal_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Decal_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_Decal_serialize_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Decal_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Decal_fin_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Decal_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_Decal_getY_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_Decal_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_Decal_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_Decal_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_Decal_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_Decal_create_R_mindustry_gen_Decal(jcontext ctx);
void M_mindustry_gen_Decal_add(jcontext ctx, jobject self);
void M_mindustry_gen_Decal_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_Decal_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_Decal_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_Decal_draw(jcontext ctx, jobject self);
void M_mindustry_gen_Decal_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Decal_remove(jcontext ctx, jobject self);
void M_mindustry_gen_Decal_reset(jcontext ctx, jobject self);
void M_mindustry_gen_Decal_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Decal_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Decal_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_Decal_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_Decal_update(jcontext ctx, jobject self);
void M_mindustry_gen_Decal_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
