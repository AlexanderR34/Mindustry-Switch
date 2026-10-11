#ifndef HEADER_mindustry_entities_comp_PuddleComp
#define HEADER_mindustry_entities_comp_PuddleComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Puddlec.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Syncc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_PuddleComp {
	java_lang_Object parent;
	jint F_id;
	jfloat F_x;
	jfloat F_y;
	jbool F_added;
	jfloat F_accepting;
	jfloat F_updateTime;
	jfloat F_lastRipple;
	jfloat F_effectTime;
	jfloat F_amount;
	jref F_tile;
	jref F_liquid;
} mindustry_entities_comp_PuddleComp;

extern Class class_mindustry_entities_comp_PuddleComp;

extern jobject SF_mindustry_entities_comp_PuddleComp_rect;
extern jobject SF_mindustry_entities_comp_PuddleComp_rect2;
extern jobject SF_mindustry_entities_comp_PuddleComp_paramPuddle;
extern jobject SF_mindustry_entities_comp_PuddleComp_unitCons;

#define VTABLE_mindustry_entities_comp_PuddleComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_PuddleComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_PuddleComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_PuddleComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_PuddleComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_PuddleComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_finalize 5
typedef void (*func_mindustry_entities_comp_PuddleComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_notify 6
typedef void (*func_mindustry_entities_comp_PuddleComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_PuddleComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_wait 8
typedef void (*func_mindustry_entities_comp_PuddleComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_wait_long 9
typedef void (*func_mindustry_entities_comp_PuddleComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_PuddleComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_PuddleComp_getX_R_float 11
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_getY_R_float 12
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_angleTo_arc_math_geom_Position_R_float 13
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_angleTo_float_float_R_float 14
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PuddleComp_dst2_arc_math_geom_Position_R_float 15
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_dst_arc_math_geom_Position_R_float 16
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_dst_float_float_R_float 17
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PuddleComp_dst2_float_float_R_float 18
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PuddleComp_within_arc_math_geom_Position_float_R_boolean 19
typedef jbool (*func_mindustry_entities_comp_PuddleComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PuddleComp_within_float_float_float_R_boolean 20
typedef jbool (*func_mindustry_entities_comp_PuddleComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc 21
typedef jobject (*func_mindustry_entities_comp_PuddleComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_as_R_java_lang_Object 22
typedef jobject (*func_mindustry_entities_comp_PuddleComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_isAdded_R_boolean 23
typedef jbool (*func_mindustry_entities_comp_PuddleComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_isLocal_R_boolean 24
typedef jbool (*func_mindustry_entities_comp_PuddleComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_isRemote_R_boolean 25
typedef jbool (*func_mindustry_entities_comp_PuddleComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_serialize_R_boolean 26
typedef jbool (*func_mindustry_entities_comp_PuddleComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_classId_R_int 27
typedef jint (*func_mindustry_entities_comp_PuddleComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_id_R_int 28
typedef jint (*func_mindustry_entities_comp_PuddleComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_add 29
typedef void (*func_mindustry_entities_comp_PuddleComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_afterRead 30
typedef void (*func_mindustry_entities_comp_PuddleComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_afterReadAll 31
typedef void (*func_mindustry_entities_comp_PuddleComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_beforeWrite 32
typedef void (*func_mindustry_entities_comp_PuddleComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_id_int 33
typedef void (*func_mindustry_entities_comp_PuddleComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_read_arc_util_io_Reads 34
typedef void (*func_mindustry_entities_comp_PuddleComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_remove 35
typedef void (*func_mindustry_entities_comp_PuddleComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_update 36
typedef void (*func_mindustry_entities_comp_PuddleComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_write_arc_util_io_Writes 37
typedef void (*func_mindustry_entities_comp_PuddleComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_entities_comp_PuddleComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_entities_comp_PuddleComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_entities_comp_PuddleComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_x_R_float 41
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_y_R_float 42
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_tileX_R_int 43
typedef jint (*func_mindustry_entities_comp_PuddleComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_tileY_R_int 44
typedef jint (*func_mindustry_entities_comp_PuddleComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_entities_comp_PuddleComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_entities_comp_PuddleComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_entities_comp_PuddleComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_set_float_float 48
typedef void (*func_mindustry_entities_comp_PuddleComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PuddleComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_entities_comp_PuddleComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_trns_float_float 50
typedef void (*func_mindustry_entities_comp_PuddleComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_entities_comp_PuddleComp_x_float 51
typedef void (*func_mindustry_entities_comp_PuddleComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_y_float 52
typedef void (*func_mindustry_entities_comp_PuddleComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_clipSize_R_float 53
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_draw 54
typedef void (*func_mindustry_entities_comp_PuddleComp_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_isSyncHidden_mindustry_game_Team_R_boolean 55
typedef jbool (*func_mindustry_entities_comp_PuddleComp_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_lastUpdated_R_long 56
typedef jlong (*func_mindustry_entities_comp_PuddleComp_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_updateSpacing_R_long 57
typedef jlong (*func_mindustry_entities_comp_PuddleComp_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_afterSync 58
typedef void (*func_mindustry_entities_comp_PuddleComp_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_handleSyncHidden 59
typedef void (*func_mindustry_entities_comp_PuddleComp_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_interpolate 60
typedef void (*func_mindustry_entities_comp_PuddleComp_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_lastUpdated_long 61
typedef void (*func_mindustry_entities_comp_PuddleComp_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_readSync_arc_util_io_Reads 62
typedef void (*func_mindustry_entities_comp_PuddleComp_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_readSyncManual_java_nio_FloatBuffer 63
typedef void (*func_mindustry_entities_comp_PuddleComp_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_snapInterpolation 64
typedef void (*func_mindustry_entities_comp_PuddleComp_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_snapSync 65
typedef void (*func_mindustry_entities_comp_PuddleComp_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_PuddleComp_updateSpacing_long 66
typedef void (*func_mindustry_entities_comp_PuddleComp_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_writeSync_arc_util_io_Writes 67
typedef void (*func_mindustry_entities_comp_PuddleComp_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_writeSyncManual_java_nio_FloatBuffer 68
typedef void (*func_mindustry_entities_comp_PuddleComp_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_PuddleComp_getFlammability_R_float 69
typedef jfloat (*func_mindustry_entities_comp_PuddleComp_getFlammability_R_float)(jcontext ctx, jobject self);

void mark_mindustry_entities_comp_PuddleComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_PuddleComp(jcontext ctx);
void init_mindustry_entities_comp_PuddleComp(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_PuddleComp_getFlammability_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PuddleComp_update(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PuddleComp_draw(jcontext ctx, jobject self);
jfloat M_mindustry_entities_comp_PuddleComp_clipSize_R_float(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PuddleComp_remove(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PuddleComp_afterRead(jcontext ctx, jobject self);
void M_mindustry_entities_comp_PuddleComp_afterSync(jcontext ctx, jobject self);
void SM_mindustry_entities_comp_PuddleComp_lambda$static$0_mindustry_gen_Unit(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
