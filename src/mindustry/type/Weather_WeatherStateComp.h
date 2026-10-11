#ifndef HEADER_mindustry_type_Weather$WeatherStateComp
#define HEADER_mindustry_type_Weather$WeatherStateComp

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Syncc.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_type_Weather$WeatherStateComp {
	java_lang_Object parent;
	jref F_weather;
	jfloat F_intensity;
	jfloat F_opacity;
	jfloat F_life;
	jfloat F_effectTimer;
	jref F_windVector;
} mindustry_type_Weather$WeatherStateComp;

extern Class class_mindustry_type_Weather$WeatherStateComp;

extern jfloat SF_mindustry_type_Weather$WeatherStateComp_fadeTime;

#define VTABLE_mindustry_type_Weather$WeatherStateComp_hashCode_R_int 0
typedef jint (*func_mindustry_type_Weather$WeatherStateComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_type_Weather$WeatherStateComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_type_Weather$WeatherStateComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_type_Weather$WeatherStateComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_type_Weather$WeatherStateComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_finalize 5
typedef void (*func_mindustry_type_Weather$WeatherStateComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_notify 6
typedef void (*func_mindustry_type_Weather$WeatherStateComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_notifyAll 7
typedef void (*func_mindustry_type_Weather$WeatherStateComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_wait 8
typedef void (*func_mindustry_type_Weather$WeatherStateComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_wait_long 9
typedef void (*func_mindustry_type_Weather$WeatherStateComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_wait_long_int 10
typedef void (*func_mindustry_type_Weather$WeatherStateComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_self_R_mindustry_gen_Entityc 11
typedef jobject (*func_mindustry_type_Weather$WeatherStateComp_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_as_R_java_lang_Object 12
typedef jobject (*func_mindustry_type_Weather$WeatherStateComp_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_isAdded_R_boolean 13
typedef jbool (*func_mindustry_type_Weather$WeatherStateComp_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_isLocal_R_boolean 14
typedef jbool (*func_mindustry_type_Weather$WeatherStateComp_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_isRemote_R_boolean 15
typedef jbool (*func_mindustry_type_Weather$WeatherStateComp_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_serialize_R_boolean 16
typedef jbool (*func_mindustry_type_Weather$WeatherStateComp_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_classId_R_int 17
typedef jint (*func_mindustry_type_Weather$WeatherStateComp_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_id_R_int 18
typedef jint (*func_mindustry_type_Weather$WeatherStateComp_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_add 19
typedef void (*func_mindustry_type_Weather$WeatherStateComp_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_afterRead 20
typedef void (*func_mindustry_type_Weather$WeatherStateComp_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_afterReadAll 21
typedef void (*func_mindustry_type_Weather$WeatherStateComp_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_beforeWrite 22
typedef void (*func_mindustry_type_Weather$WeatherStateComp_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_id_int 23
typedef void (*func_mindustry_type_Weather$WeatherStateComp_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_read_arc_util_io_Reads 24
typedef void (*func_mindustry_type_Weather$WeatherStateComp_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_remove 25
typedef void (*func_mindustry_type_Weather$WeatherStateComp_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_update 26
typedef void (*func_mindustry_type_Weather$WeatherStateComp_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_write_arc_util_io_Writes 27
typedef void (*func_mindustry_type_Weather$WeatherStateComp_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_getX_R_float 28
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_getY_R_float 29
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_angleTo_arc_math_geom_Position_R_float 30
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_angleTo_float_float_R_float 31
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_dst2_arc_math_geom_Position_R_float 32
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_dst_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_dst_float_float_R_float 34
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_dst2_float_float_R_float 35
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_within_arc_math_geom_Position_float_R_boolean 36
typedef jbool (*func_mindustry_type_Weather$WeatherStateComp_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_within_float_float_float_R_boolean 37
typedef jbool (*func_mindustry_type_Weather$WeatherStateComp_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_floorOn_R_mindustry_world_blocks_environment_Floor 38
typedef jobject (*func_mindustry_type_Weather$WeatherStateComp_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_buildOn_R_mindustry_gen_Building 39
typedef jobject (*func_mindustry_type_Weather$WeatherStateComp_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_onSolid_R_boolean 40
typedef jbool (*func_mindustry_type_Weather$WeatherStateComp_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_x_R_float 41
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_y_R_float 42
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_tileX_R_int 43
typedef jint (*func_mindustry_type_Weather$WeatherStateComp_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_tileY_R_int 44
typedef jint (*func_mindustry_type_Weather$WeatherStateComp_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_blockOn_R_mindustry_world_Block 45
typedef jobject (*func_mindustry_type_Weather$WeatherStateComp_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_tileOn_R_mindustry_world_Tile 46
typedef jobject (*func_mindustry_type_Weather$WeatherStateComp_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_set_arc_math_geom_Position 47
typedef void (*func_mindustry_type_Weather$WeatherStateComp_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_set_float_float 48
typedef void (*func_mindustry_type_Weather$WeatherStateComp_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_trns_arc_math_geom_Position 49
typedef void (*func_mindustry_type_Weather$WeatherStateComp_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_trns_float_float 50
typedef void (*func_mindustry_type_Weather$WeatherStateComp_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_x_float 51
typedef void (*func_mindustry_type_Weather$WeatherStateComp_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_y_float 52
typedef void (*func_mindustry_type_Weather$WeatherStateComp_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_clipSize_R_float 53
typedef jfloat (*func_mindustry_type_Weather$WeatherStateComp_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_draw 54
typedef void (*func_mindustry_type_Weather$WeatherStateComp_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_isSyncHidden_mindustry_game_Team_R_boolean 55
typedef jbool (*func_mindustry_type_Weather$WeatherStateComp_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_lastUpdated_R_long 56
typedef jlong (*func_mindustry_type_Weather$WeatherStateComp_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_updateSpacing_R_long 57
typedef jlong (*func_mindustry_type_Weather$WeatherStateComp_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_afterSync 58
typedef void (*func_mindustry_type_Weather$WeatherStateComp_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_handleSyncHidden 59
typedef void (*func_mindustry_type_Weather$WeatherStateComp_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_interpolate 60
typedef void (*func_mindustry_type_Weather$WeatherStateComp_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_lastUpdated_long 61
typedef void (*func_mindustry_type_Weather$WeatherStateComp_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_readSync_arc_util_io_Reads 62
typedef void (*func_mindustry_type_Weather$WeatherStateComp_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_readSyncManual_java_nio_FloatBuffer 63
typedef void (*func_mindustry_type_Weather$WeatherStateComp_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_snapInterpolation 64
typedef void (*func_mindustry_type_Weather$WeatherStateComp_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_snapSync 65
typedef void (*func_mindustry_type_Weather$WeatherStateComp_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_updateSpacing_long 66
typedef void (*func_mindustry_type_Weather$WeatherStateComp_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_writeSync_arc_util_io_Writes 67
typedef void (*func_mindustry_type_Weather$WeatherStateComp_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_writeSyncManual_java_nio_FloatBuffer 68
typedef void (*func_mindustry_type_Weather$WeatherStateComp_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_init_mindustry_type_Weather 69
typedef void (*func_mindustry_type_Weather$WeatherStateComp_init_mindustry_type_Weather)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_lambda$draw$1 70
typedef void (*func_mindustry_type_Weather$WeatherStateComp_lambda$draw$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_type_Weather$WeatherStateComp_lambda$draw$0 71
typedef void (*func_mindustry_type_Weather$WeatherStateComp_lambda$draw$0)(jcontext ctx, jobject self);

void mark_mindustry_type_Weather$WeatherStateComp(jobject object, jint mark, jint depth);
void clinit_mindustry_type_Weather$WeatherStateComp(jcontext ctx);
void init_mindustry_type_Weather$WeatherStateComp(jcontext ctx, jobject self);
void M_mindustry_type_Weather$WeatherStateComp_init_mindustry_type_Weather(jcontext ctx, jobject self, jobject param0);
void M_mindustry_type_Weather$WeatherStateComp_update(jcontext ctx, jobject self);
void M_mindustry_type_Weather$WeatherStateComp_draw(jcontext ctx, jobject self);
void M_mindustry_type_Weather$WeatherStateComp_lambda$draw$1(jcontext ctx, jobject self);
void M_mindustry_type_Weather$WeatherStateComp_lambda$draw$0(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
