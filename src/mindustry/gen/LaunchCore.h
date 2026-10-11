#ifndef HEADER_mindustry_gen_LaunchCore
#define HEADER_mindustry_gen_LaunchCore

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/LaunchCorec.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Timedc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_LaunchCore {
	java_lang_Object parent;
	jbool F_added;
	jref F_block;
	jint F_id;
	jref F_in;
	jint F_index__all;
	jint F_index__draw;
	jfloat F_lifetime;
	jfloat F_time;
	jfloat F_x;
	jfloat F_y;
} mindustry_gen_LaunchCore;

extern Class class_mindustry_gen_LaunchCore;


#define VTABLE_mindustry_gen_LaunchCore_hashCode_R_int 0
typedef jint (*func_mindustry_gen_LaunchCore_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_LaunchCore_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_LaunchCore_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_LaunchCore_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_LaunchCore_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_finalize 5
typedef void (*func_mindustry_gen_LaunchCore_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_notify 6
typedef void (*func_mindustry_gen_LaunchCore_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_notifyAll 7
typedef void (*func_mindustry_gen_LaunchCore_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_wait 8
typedef void (*func_mindustry_gen_LaunchCore_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_wait_long 9
typedef void (*func_mindustry_gen_LaunchCore_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_LaunchCore_wait_long_int 10
typedef void (*func_mindustry_gen_LaunchCore_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_LaunchCore_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_gen_LaunchCore_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_gen_LaunchCore_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_isAdded_R_boolean 13
typedef jbool (*func_mindustry_gen_LaunchCore_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_isLocal_R_boolean 14
typedef jbool (*func_mindustry_gen_LaunchCore_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_isRemote_R_boolean 15
typedef jbool (*func_mindustry_gen_LaunchCore_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_serialize_R_boolean 16
typedef jbool (*func_mindustry_gen_LaunchCore_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_classId_R_int 17
typedef jint (*func_mindustry_gen_LaunchCore_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_id_R_int 18
typedef jint (*func_mindustry_gen_LaunchCore_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_add 19
typedef void (*func_mindustry_gen_LaunchCore_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_afterRead 20
typedef void (*func_mindustry_gen_LaunchCore_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_afterReadAll 21
typedef void (*func_mindustry_gen_LaunchCore_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_beforeWrite 22
typedef void (*func_mindustry_gen_LaunchCore_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_id_int 23
typedef void (*func_mindustry_gen_LaunchCore_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_LaunchCore_read_arc_util_io_Reads 24
typedef void (*func_mindustry_gen_LaunchCore_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_remove 25
typedef void (*func_mindustry_gen_LaunchCore_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_update 26
typedef void (*func_mindustry_gen_LaunchCore_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_write_arc_util_io_Writes 27
typedef void (*func_mindustry_gen_LaunchCore_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_getX_R_float 28
typedef jfloat (*func_mindustry_gen_LaunchCore_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_getY_R_float 29
typedef jfloat (*func_mindustry_gen_LaunchCore_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_gen_LaunchCore_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_gen_LaunchCore_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchCore_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_gen_LaunchCore_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_LaunchCore_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_gen_LaunchCore_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchCore_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_LaunchCore_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchCore_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_gen_LaunchCore_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchCore_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_gen_LaunchCore_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_LaunchCore_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_gen_LaunchCore_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_gen_LaunchCore_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_onSolid_R_boolean 40
typedef jbool (*func_mindustry_gen_LaunchCore_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_x_R_float 41
typedef jfloat (*func_mindustry_gen_LaunchCore_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_y_R_float 42
typedef jfloat (*func_mindustry_gen_LaunchCore_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_tileX_R_int 43
typedef jint (*func_mindustry_gen_LaunchCore_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_tileY_R_int 44
typedef jint (*func_mindustry_gen_LaunchCore_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_gen_LaunchCore_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_set_arc_math_geom_Position 47
typedef void (*func_mindustry_gen_LaunchCore_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_set_float_float 48
typedef void (*func_mindustry_gen_LaunchCore_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchCore_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_gen_LaunchCore_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_trns_float_float 50
typedef void (*func_mindustry_gen_LaunchCore_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_LaunchCore_x_float 51
typedef void (*func_mindustry_gen_LaunchCore_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_LaunchCore_y_float 52
typedef void (*func_mindustry_gen_LaunchCore_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_LaunchCore_clipSize_R_float 53
typedef jfloat (*func_mindustry_gen_LaunchCore_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_draw 54
typedef void (*func_mindustry_gen_LaunchCore_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_setIndex__all_int 55
typedef void (*func_mindustry_gen_LaunchCore_setIndex__all_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_LaunchCore_setIndex__draw_int 56
typedef void (*func_mindustry_gen_LaunchCore_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_LaunchCore_fin_R_float 57
typedef jfloat (*func_mindustry_gen_LaunchCore_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_fout_R_float 58
typedef jfloat (*func_mindustry_gen_LaunchCore_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_fout_arc_math_Interp_R_float 59
typedef jfloat (*func_mindustry_gen_LaunchCore_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_fout_float_R_float 60
typedef jfloat (*func_mindustry_gen_LaunchCore_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_LaunchCore_fin_arc_math_Interp_R_float 61
typedef jfloat (*func_mindustry_gen_LaunchCore_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_finpow_R_float 62
typedef jfloat (*func_mindustry_gen_LaunchCore_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_foutpow_R_float 63
typedef jfloat (*func_mindustry_gen_LaunchCore_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_finpowdown_R_float 64
typedef jfloat (*func_mindustry_gen_LaunchCore_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_foutpowdown_R_float 65
typedef jfloat (*func_mindustry_gen_LaunchCore_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_fslope_R_float 66
typedef jfloat (*func_mindustry_gen_LaunchCore_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_lifetime_R_float 67
typedef jfloat (*func_mindustry_gen_LaunchCore_lifetime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_time_R_float 68
typedef jfloat (*func_mindustry_gen_LaunchCore_time_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_lifetime_float 69
typedef void (*func_mindustry_gen_LaunchCore_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_LaunchCore_time_float 70
typedef void (*func_mindustry_gen_LaunchCore_time_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_LaunchCore_in_R_arc_util_Interval 71
typedef jobject (*func_mindustry_gen_LaunchCore_in_R_arc_util_Interval)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_cx_R_float 72
typedef jfloat (*func_mindustry_gen_LaunchCore_cx_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_cy_R_float 73
typedef jfloat (*func_mindustry_gen_LaunchCore_cy_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_block_R_mindustry_world_Block 74
typedef jobject (*func_mindustry_gen_LaunchCore_block_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_LaunchCore_block_mindustry_world_Block 75
typedef void (*func_mindustry_gen_LaunchCore_block_mindustry_world_Block)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_LaunchCore_in_arc_util_Interval 76
typedef void (*func_mindustry_gen_LaunchCore_in_arc_util_Interval)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_gen_LaunchCore(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_LaunchCore(jcontext ctx);
void init_mindustry_gen_LaunchCore(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchCore_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchCore_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchCore_in_R_arc_util_Interval(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchCore_lifetime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchCore_time_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchCore_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchCore_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_LaunchCore_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_LaunchCore_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchCore_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchCore_block_R_mindustry_world_Block(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchCore_block_mindustry_world_Block(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchCore_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_LaunchCore_in_arc_util_Interval(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchCore_lifetime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_LaunchCore_setIndex__all_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_LaunchCore_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_LaunchCore_time_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_LaunchCore_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_LaunchCore_y_float(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_gen_LaunchCore_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchCore_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchCore_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchCore_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchCore_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchCore_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_LaunchCore_serialize_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchCore_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchCore_cx_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchCore_cy_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchCore_fin_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchCore_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_LaunchCore_getY_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_LaunchCore_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_LaunchCore_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchCore_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_LaunchCore_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_LaunchCore_create_R_mindustry_gen_LaunchCore(jcontext ctx);
void M_mindustry_gen_LaunchCore_add(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchCore_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchCore_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchCore_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchCore_draw(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchCore_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchCore_remove(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchCore_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchCore_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_LaunchCore_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_LaunchCore_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_LaunchCore_update(jcontext ctx, jobject self);
void M_mindustry_gen_LaunchCore_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
