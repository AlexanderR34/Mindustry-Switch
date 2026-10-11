#ifndef HEADER_mindustry_gen_EffectState
#define HEADER_mindustry_gen_EffectState

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "mindustry/gen/Childc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/EffectStatec.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/IndexableEntity__effect.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Rotc.h"
#include "mindustry/gen/Timedc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_EffectState {
	java_lang_Object parent;
	jbool F_added;
	jref F_color;
	jref F_data;
	jref F_effect;
	jint F_id;
	jint F_index__draw;
	jint F_index__effect;
	jfloat F_lifetime;
	jfloat F_offsetPos;
	jfloat F_offsetRot;
	jfloat F_offsetX;
	jfloat F_offsetY;
	jref F_parent;
	jbool F_rotWithParent;
	jfloat F_rotation;
	jfloat F_time;
	jfloat F_x;
	jfloat F_y;
} mindustry_gen_EffectState;

extern Class class_mindustry_gen_EffectState;


#define VTABLE_mindustry_gen_EffectState_hashCode_R_int 0
typedef jint (*func_mindustry_gen_EffectState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_EffectState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_EffectState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_EffectState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_EffectState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_finalize 5
typedef void (*func_mindustry_gen_EffectState_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_notify 6
typedef void (*func_mindustry_gen_EffectState_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_notifyAll 7
typedef void (*func_mindustry_gen_EffectState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_wait 8
typedef void (*func_mindustry_gen_EffectState_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_wait_long 9
typedef void (*func_mindustry_gen_EffectState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_EffectState_wait_long_int 10
typedef void (*func_mindustry_gen_EffectState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_EffectState_reset 11
typedef void (*func_mindustry_gen_EffectState_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_self_R_mindustry_gen_Entityc 12
typedef jobject (*func_mindustry_gen_EffectState_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_as_R_java_lang_Object 13
typedef jobject (*func_mindustry_gen_EffectState_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_isAdded_R_boolean 14
typedef jbool (*func_mindustry_gen_EffectState_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_isLocal_R_boolean 15
typedef jbool (*func_mindustry_gen_EffectState_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_isRemote_R_boolean 16
typedef jbool (*func_mindustry_gen_EffectState_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_serialize_R_boolean 17
typedef jbool (*func_mindustry_gen_EffectState_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_classId_R_int 18
typedef jint (*func_mindustry_gen_EffectState_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_id_R_int 19
typedef jint (*func_mindustry_gen_EffectState_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_add 20
typedef void (*func_mindustry_gen_EffectState_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_afterRead 21
typedef void (*func_mindustry_gen_EffectState_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_afterReadAll 22
typedef void (*func_mindustry_gen_EffectState_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_beforeWrite 23
typedef void (*func_mindustry_gen_EffectState_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_id_int 24
typedef void (*func_mindustry_gen_EffectState_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_EffectState_read_arc_util_io_Reads 25
typedef void (*func_mindustry_gen_EffectState_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_remove 26
typedef void (*func_mindustry_gen_EffectState_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_update 27
typedef void (*func_mindustry_gen_EffectState_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_write_arc_util_io_Writes 28
typedef void (*func_mindustry_gen_EffectState_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_getX_R_float 29
typedef jfloat (*func_mindustry_gen_EffectState_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_getY_R_float 30
typedef jfloat (*func_mindustry_gen_EffectState_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_angleTo_arc_math_geom_Position_R_float 31
typedef jfloat (*func_mindustry_gen_EffectState_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_angleTo_float_float_R_float 32
typedef jfloat (*func_mindustry_gen_EffectState_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_EffectState_dst2_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_EffectState_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_dst_arc_math_geom_Position_R_float 34
typedef jfloat (*func_mindustry_gen_EffectState_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_dst_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_EffectState_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_EffectState_dst2_float_float_R_float 36
typedef jfloat (*func_mindustry_gen_EffectState_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_EffectState_within_arc_math_geom_Position_float_R_boolean 37
typedef jbool (*func_mindustry_gen_EffectState_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_EffectState_within_float_float_float_R_boolean 38
typedef jbool (*func_mindustry_gen_EffectState_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_EffectState_floorOn_R_mindustry_world_blocks_environment_Floor 39
typedef jobject (*func_mindustry_gen_EffectState_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_buildOn_R_mindustry_gen_Building 40
typedef jobject (*func_mindustry_gen_EffectState_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_onSolid_R_boolean 41
typedef jbool (*func_mindustry_gen_EffectState_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_x_R_float 42
typedef jfloat (*func_mindustry_gen_EffectState_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_y_R_float 43
typedef jfloat (*func_mindustry_gen_EffectState_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_tileX_R_int 44
typedef jint (*func_mindustry_gen_EffectState_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_tileY_R_int 45
typedef jint (*func_mindustry_gen_EffectState_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_blockOn_R_mindustry_world_Block 46
typedef jobject (*func_mindustry_gen_EffectState_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile 47
typedef jobject (*func_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_set_arc_math_geom_Position 48
typedef void (*func_mindustry_gen_EffectState_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_set_float_float 49
typedef void (*func_mindustry_gen_EffectState_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_EffectState_trns_arc_math_geom_Position 50
typedef void (*func_mindustry_gen_EffectState_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_trns_float_float 51
typedef void (*func_mindustry_gen_EffectState_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_EffectState_x_float 52
typedef void (*func_mindustry_gen_EffectState_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_EffectState_y_float 53
typedef void (*func_mindustry_gen_EffectState_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_EffectState_rotation_R_float 54
typedef jfloat (*func_mindustry_gen_EffectState_rotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_rotation_float 55
typedef void (*func_mindustry_gen_EffectState_rotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_EffectState_parent_R_mindustry_gen_Posc 56
typedef jobject (*func_mindustry_gen_EffectState_parent_R_mindustry_gen_Posc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_rotWithParent_R_boolean 57
typedef jbool (*func_mindustry_gen_EffectState_rotWithParent_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_offsetPos_R_float 58
typedef jfloat (*func_mindustry_gen_EffectState_offsetPos_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_offsetRot_R_float 59
typedef jfloat (*func_mindustry_gen_EffectState_offsetRot_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_offsetX_R_float 60
typedef jfloat (*func_mindustry_gen_EffectState_offsetX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_offsetY_R_float 61
typedef jfloat (*func_mindustry_gen_EffectState_offsetY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_offsetPos_float 62
typedef void (*func_mindustry_gen_EffectState_offsetPos_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_EffectState_offsetRot_float 63
typedef void (*func_mindustry_gen_EffectState_offsetRot_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_EffectState_offsetX_float 64
typedef void (*func_mindustry_gen_EffectState_offsetX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_EffectState_offsetY_float 65
typedef void (*func_mindustry_gen_EffectState_offsetY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_EffectState_parent_mindustry_gen_Posc 66
typedef void (*func_mindustry_gen_EffectState_parent_mindustry_gen_Posc)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_rotWithParent_boolean 67
typedef void (*func_mindustry_gen_EffectState_rotWithParent_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_mindustry_gen_EffectState_clipSize_R_float 68
typedef jfloat (*func_mindustry_gen_EffectState_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_draw 69
typedef void (*func_mindustry_gen_EffectState_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_fin_R_float 70
typedef jfloat (*func_mindustry_gen_EffectState_fin_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_fout_R_float 71
typedef jfloat (*func_mindustry_gen_EffectState_fout_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_fout_arc_math_Interp_R_float 72
typedef jfloat (*func_mindustry_gen_EffectState_fout_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_fout_float_R_float 73
typedef jfloat (*func_mindustry_gen_EffectState_fout_float_R_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_EffectState_fin_arc_math_Interp_R_float 74
typedef jfloat (*func_mindustry_gen_EffectState_fin_arc_math_Interp_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_finpow_R_float 75
typedef jfloat (*func_mindustry_gen_EffectState_finpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_foutpow_R_float 76
typedef jfloat (*func_mindustry_gen_EffectState_foutpow_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_finpowdown_R_float 77
typedef jfloat (*func_mindustry_gen_EffectState_finpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_foutpowdown_R_float 78
typedef jfloat (*func_mindustry_gen_EffectState_foutpowdown_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_fslope_R_float 79
typedef jfloat (*func_mindustry_gen_EffectState_fslope_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_lifetime_R_float 80
typedef jfloat (*func_mindustry_gen_EffectState_lifetime_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_time_R_float 81
typedef jfloat (*func_mindustry_gen_EffectState_time_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_lifetime_float 82
typedef void (*func_mindustry_gen_EffectState_lifetime_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_EffectState_time_float 83
typedef void (*func_mindustry_gen_EffectState_time_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_EffectState_color_R_arc_graphics_Color 84
typedef jobject (*func_mindustry_gen_EffectState_color_R_arc_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_data_R_java_lang_Object 85
typedef jobject (*func_mindustry_gen_EffectState_data_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_effect_R_mindustry_entities_Effect 86
typedef jobject (*func_mindustry_gen_EffectState_effect_R_mindustry_entities_Effect)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_EffectState_color_arc_graphics_Color 87
typedef void (*func_mindustry_gen_EffectState_color_arc_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_data_java_lang_Object 88
typedef void (*func_mindustry_gen_EffectState_data_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_effect_mindustry_entities_Effect 89
typedef void (*func_mindustry_gen_EffectState_effect_mindustry_entities_Effect)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_EffectState_setIndex__draw_int 90
typedef void (*func_mindustry_gen_EffectState_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_EffectState_setIndex__effect_int 91
typedef void (*func_mindustry_gen_EffectState_setIndex__effect_int)(jcontext ctx, jobject self, jint param0);

void mark_mindustry_gen_EffectState(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_EffectState(jcontext ctx);
void init_mindustry_gen_EffectState(jcontext ctx, jobject self);
jobject M_mindustry_gen_EffectState_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_EffectState_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_EffectState_color_R_arc_graphics_Color(jcontext ctx, jobject self);
jbool M_mindustry_gen_EffectState_rotWithParent_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_lifetime_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_offsetPos_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_offsetRot_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_offsetX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_offsetY_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_rotation_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_time_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_EffectState_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_EffectState_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_EffectState_data_R_java_lang_Object(jcontext ctx, jobject self);
jobject M_mindustry_gen_EffectState_toString_R_java_lang_String(jcontext ctx, jobject self);
jobject M_mindustry_gen_EffectState_effect_R_mindustry_entities_Effect(jcontext ctx, jobject self);
jobject M_mindustry_gen_EffectState_parent_R_mindustry_gen_Posc(jcontext ctx, jobject self);
void M_mindustry_gen_EffectState_color_arc_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_EffectState_data_java_lang_Object(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_EffectState_effect_mindustry_entities_Effect(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_EffectState_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_EffectState_lifetime_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_EffectState_offsetPos_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_EffectState_offsetRot_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_EffectState_offsetX_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_EffectState_offsetY_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_EffectState_parent_mindustry_gen_Posc(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_EffectState_rotWithParent_boolean(jcontext ctx, jobject self, jbool param0);
void M_mindustry_gen_EffectState_rotation_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_EffectState_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_EffectState_setIndex__effect_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_EffectState_time_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_EffectState_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_EffectState_y_float(jcontext ctx, jobject self, jfloat param0);
jobject M_mindustry_gen_EffectState_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_EffectState_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_EffectState_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_EffectState_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_EffectState_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_EffectState_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_EffectState_serialize_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_fin_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_EffectState_getY_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_EffectState_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_EffectState_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_EffectState_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_EffectState_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_EffectState_create_R_mindustry_gen_EffectState(jcontext ctx);
void M_mindustry_gen_EffectState_add(jcontext ctx, jobject self);
void M_mindustry_gen_EffectState_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_EffectState_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_EffectState_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_EffectState_draw(jcontext ctx, jobject self);
void M_mindustry_gen_EffectState_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_EffectState_remove(jcontext ctx, jobject self);
void M_mindustry_gen_EffectState_reset(jcontext ctx, jobject self);
void M_mindustry_gen_EffectState_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_EffectState_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_EffectState_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_EffectState_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_EffectState_update(jcontext ctx, jobject self);
void M_mindustry_gen_EffectState_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
