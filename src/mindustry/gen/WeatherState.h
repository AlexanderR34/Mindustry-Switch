#ifndef HEADER_mindustry_gen_WeatherState
#define HEADER_mindustry_gen_WeatherState

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/IndexableEntity__all.h"
#include "mindustry/gen/IndexableEntity__draw.h"
#include "mindustry/gen/IndexableEntity__sync.h"
#include "mindustry/gen/IndexableEntity__weather.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/WeatherStatec.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_gen_WeatherState {
	java_lang_Object parent;
	jbool F_added;
	jfloat F_effectTimer;
	jint F_id;
	jint F_index__all;
	jint F_index__draw;
	jint F_index__sync;
	jint F_index__weather;
	jfloat F_intensity;
	jlong F_lastUpdated;
	jfloat F_life;
	jfloat F_opacity;
	jlong F_updateSpacing;
	jref F_weather;
	jref F_windVector;
	jfloat F_x;
	jfloat F_x_LAST_;
	jfloat F_x_TARGET_;
	jfloat F_y;
	jfloat F_y_LAST_;
	jfloat F_y_TARGET_;
} mindustry_gen_WeatherState;

extern Class class_mindustry_gen_WeatherState;

extern jfloat SF_mindustry_gen_WeatherState_fadeTime;

#define VTABLE_mindustry_gen_WeatherState_hashCode_R_int 0
typedef jint (*func_mindustry_gen_WeatherState_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_gen_WeatherState_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_gen_WeatherState_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_gen_WeatherState_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_gen_WeatherState_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_finalize 5
typedef void (*func_mindustry_gen_WeatherState_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_notify 6
typedef void (*func_mindustry_gen_WeatherState_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_notifyAll 7
typedef void (*func_mindustry_gen_WeatherState_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_wait 8
typedef void (*func_mindustry_gen_WeatherState_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_wait_long 9
typedef void (*func_mindustry_gen_WeatherState_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_WeatherState_wait_long_int 10
typedef void (*func_mindustry_gen_WeatherState_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_gen_WeatherState_reset 11
typedef void (*func_mindustry_gen_WeatherState_reset)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_self_R_mindustry_gen_Entityc 12
typedef jobject (*func_mindustry_gen_WeatherState_self_R_mindustry_gen_Entityc)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_as_R_java_lang_Object 13
typedef jobject (*func_mindustry_gen_WeatherState_as_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_isAdded_R_boolean 14
typedef jbool (*func_mindustry_gen_WeatherState_isAdded_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_isLocal_R_boolean 15
typedef jbool (*func_mindustry_gen_WeatherState_isLocal_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_isRemote_R_boolean 16
typedef jbool (*func_mindustry_gen_WeatherState_isRemote_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_serialize_R_boolean 17
typedef jbool (*func_mindustry_gen_WeatherState_serialize_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_classId_R_int 18
typedef jint (*func_mindustry_gen_WeatherState_classId_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_id_R_int 19
typedef jint (*func_mindustry_gen_WeatherState_id_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_add 20
typedef void (*func_mindustry_gen_WeatherState_add)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_afterRead 21
typedef void (*func_mindustry_gen_WeatherState_afterRead)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_afterReadAll 22
typedef void (*func_mindustry_gen_WeatherState_afterReadAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_beforeWrite 23
typedef void (*func_mindustry_gen_WeatherState_beforeWrite)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_id_int 24
typedef void (*func_mindustry_gen_WeatherState_id_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_WeatherState_read_arc_util_io_Reads 25
typedef void (*func_mindustry_gen_WeatherState_read_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_remove 26
typedef void (*func_mindustry_gen_WeatherState_remove)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_update 27
typedef void (*func_mindustry_gen_WeatherState_update)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_write_arc_util_io_Writes 28
typedef void (*func_mindustry_gen_WeatherState_write_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_getX_R_float 29
typedef jfloat (*func_mindustry_gen_WeatherState_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_getY_R_float 30
typedef jfloat (*func_mindustry_gen_WeatherState_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_angleTo_arc_math_geom_Position_R_float 31
typedef jfloat (*func_mindustry_gen_WeatherState_angleTo_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_angleTo_float_float_R_float 32
typedef jfloat (*func_mindustry_gen_WeatherState_angleTo_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_WeatherState_dst2_arc_math_geom_Position_R_float 33
typedef jfloat (*func_mindustry_gen_WeatherState_dst2_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_dst_arc_math_geom_Position_R_float 34
typedef jfloat (*func_mindustry_gen_WeatherState_dst_arc_math_geom_Position_R_float)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_dst_float_float_R_float 35
typedef jfloat (*func_mindustry_gen_WeatherState_dst_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_WeatherState_dst2_float_float_R_float 36
typedef jfloat (*func_mindustry_gen_WeatherState_dst2_float_float_R_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_WeatherState_within_arc_math_geom_Position_float_R_boolean 37
typedef jbool (*func_mindustry_gen_WeatherState_within_arc_math_geom_Position_float_R_boolean)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_mindustry_gen_WeatherState_within_float_float_float_R_boolean 38
typedef jbool (*func_mindustry_gen_WeatherState_within_float_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_mindustry_gen_WeatherState_floorOn_R_mindustry_world_blocks_environment_Floor 39
typedef jobject (*func_mindustry_gen_WeatherState_floorOn_R_mindustry_world_blocks_environment_Floor)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_buildOn_R_mindustry_gen_Building 40
typedef jobject (*func_mindustry_gen_WeatherState_buildOn_R_mindustry_gen_Building)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_onSolid_R_boolean 41
typedef jbool (*func_mindustry_gen_WeatherState_onSolid_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_x_R_float 42
typedef jfloat (*func_mindustry_gen_WeatherState_x_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_y_R_float 43
typedef jfloat (*func_mindustry_gen_WeatherState_y_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_tileX_R_int 44
typedef jint (*func_mindustry_gen_WeatherState_tileX_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_tileY_R_int 45
typedef jint (*func_mindustry_gen_WeatherState_tileY_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_blockOn_R_mindustry_world_Block 46
typedef jobject (*func_mindustry_gen_WeatherState_blockOn_R_mindustry_world_Block)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile 47
typedef jobject (*func_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_set_arc_math_geom_Position 48
typedef void (*func_mindustry_gen_WeatherState_set_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_set_float_float 49
typedef void (*func_mindustry_gen_WeatherState_set_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_WeatherState_trns_arc_math_geom_Position 50
typedef void (*func_mindustry_gen_WeatherState_trns_arc_math_geom_Position)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_trns_float_float 51
typedef void (*func_mindustry_gen_WeatherState_trns_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_mindustry_gen_WeatherState_x_float 52
typedef void (*func_mindustry_gen_WeatherState_x_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_WeatherState_y_float 53
typedef void (*func_mindustry_gen_WeatherState_y_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_WeatherState_clipSize_R_float 54
typedef jfloat (*func_mindustry_gen_WeatherState_clipSize_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_draw 55
typedef void (*func_mindustry_gen_WeatherState_draw)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_setIndex__all_int 56
typedef void (*func_mindustry_gen_WeatherState_setIndex__all_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_WeatherState_setIndex__draw_int 57
typedef void (*func_mindustry_gen_WeatherState_setIndex__draw_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_WeatherState_setIndex__sync_int 58
typedef void (*func_mindustry_gen_WeatherState_setIndex__sync_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_WeatherState_setIndex__weather_int 59
typedef void (*func_mindustry_gen_WeatherState_setIndex__weather_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_mindustry_gen_WeatherState_isSyncHidden_mindustry_game_Team_R_boolean 60
typedef jbool (*func_mindustry_gen_WeatherState_isSyncHidden_mindustry_game_Team_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_lastUpdated_R_long 61
typedef jlong (*func_mindustry_gen_WeatherState_lastUpdated_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_updateSpacing_R_long 62
typedef jlong (*func_mindustry_gen_WeatherState_updateSpacing_R_long)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_afterSync 63
typedef void (*func_mindustry_gen_WeatherState_afterSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_handleSyncHidden 64
typedef void (*func_mindustry_gen_WeatherState_handleSyncHidden)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_interpolate 65
typedef void (*func_mindustry_gen_WeatherState_interpolate)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_lastUpdated_long 66
typedef void (*func_mindustry_gen_WeatherState_lastUpdated_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_WeatherState_readSync_arc_util_io_Reads 67
typedef void (*func_mindustry_gen_WeatherState_readSync_arc_util_io_Reads)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_readSyncManual_java_nio_FloatBuffer 68
typedef void (*func_mindustry_gen_WeatherState_readSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_snapInterpolation 69
typedef void (*func_mindustry_gen_WeatherState_snapInterpolation)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_snapSync 70
typedef void (*func_mindustry_gen_WeatherState_snapSync)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_updateSpacing_long 71
typedef void (*func_mindustry_gen_WeatherState_updateSpacing_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_gen_WeatherState_writeSync_arc_util_io_Writes 72
typedef void (*func_mindustry_gen_WeatherState_writeSync_arc_util_io_Writes)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_writeSyncManual_java_nio_FloatBuffer 73
typedef void (*func_mindustry_gen_WeatherState_writeSyncManual_java_nio_FloatBuffer)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_windVector_R_arc_math_geom_Vec2 74
typedef jobject (*func_mindustry_gen_WeatherState_windVector_R_arc_math_geom_Vec2)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_effectTimer_R_float 75
typedef jfloat (*func_mindustry_gen_WeatherState_effectTimer_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_intensity_R_float 76
typedef jfloat (*func_mindustry_gen_WeatherState_intensity_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_life_R_float 77
typedef jfloat (*func_mindustry_gen_WeatherState_life_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_opacity_R_float 78
typedef jfloat (*func_mindustry_gen_WeatherState_opacity_R_float)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_weather_R_mindustry_type_Weather 79
typedef jobject (*func_mindustry_gen_WeatherState_weather_R_mindustry_type_Weather)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_effectTimer_float 80
typedef void (*func_mindustry_gen_WeatherState_effectTimer_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_WeatherState_init_mindustry_type_Weather 81
typedef void (*func_mindustry_gen_WeatherState_init_mindustry_type_Weather)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_intensity_float 82
typedef void (*func_mindustry_gen_WeatherState_intensity_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_WeatherState_life_float 83
typedef void (*func_mindustry_gen_WeatherState_life_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_WeatherState_opacity_float 84
typedef void (*func_mindustry_gen_WeatherState_opacity_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_gen_WeatherState_weather_mindustry_type_Weather 85
typedef void (*func_mindustry_gen_WeatherState_weather_mindustry_type_Weather)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_windVector_arc_math_geom_Vec2 86
typedef void (*func_mindustry_gen_WeatherState_windVector_arc_math_geom_Vec2)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_gen_WeatherState_lambda$draw$1 87
typedef void (*func_mindustry_gen_WeatherState_lambda$draw$1)(jcontext ctx, jobject self);
#define VTABLE_mindustry_gen_WeatherState_lambda$draw$0 88
typedef void (*func_mindustry_gen_WeatherState_lambda$draw$0)(jcontext ctx, jobject self);

void mark_mindustry_gen_WeatherState(jobject object, jint mark, jint depth);
void clinit_mindustry_gen_WeatherState(jcontext ctx);
void init_mindustry_gen_WeatherState(jcontext ctx, jobject self);
jobject M_mindustry_gen_WeatherState_buildOn_R_mindustry_gen_Building(jcontext ctx, jobject self);
jobject M_mindustry_gen_WeatherState_tileOn_R_mindustry_world_Tile(jcontext ctx, jobject self);
jobject M_mindustry_gen_WeatherState_windVector_R_arc_math_geom_Vec2(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WeatherState_effectTimer_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WeatherState_intensity_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WeatherState_life_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WeatherState_opacity_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WeatherState_x_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WeatherState_y_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_WeatherState_classId_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_WeatherState_id_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_WeatherState_toString_R_java_lang_String(jcontext ctx, jobject self);
jlong M_mindustry_gen_WeatherState_lastUpdated_R_long(jcontext ctx, jobject self);
jlong M_mindustry_gen_WeatherState_updateSpacing_R_long(jcontext ctx, jobject self);
jobject M_mindustry_gen_WeatherState_weather_R_mindustry_type_Weather(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_effectTimer_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_WeatherState_id_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_WeatherState_intensity_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_WeatherState_lastUpdated_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_WeatherState_life_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_WeatherState_opacity_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_WeatherState_setIndex__all_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_WeatherState_setIndex__draw_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_WeatherState_setIndex__sync_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_WeatherState_setIndex__weather_int(jcontext ctx, jobject self, jint param0);
void M_mindustry_gen_WeatherState_updateSpacing_long(jcontext ctx, jobject self, jlong param0);
void M_mindustry_gen_WeatherState_weather_mindustry_type_Weather(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WeatherState_windVector_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WeatherState_x_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_WeatherState_y_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_gen_WeatherState_read_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WeatherState_write_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
jobject M_mindustry_gen_WeatherState_self_R_mindustry_gen_Entityc(jcontext ctx, jobject self);
jobject M_mindustry_gen_WeatherState_as_R_java_lang_Object(jcontext ctx, jobject self);
jbool M_mindustry_gen_WeatherState_isAdded_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_WeatherState_isLocal_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_WeatherState_isRemote_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_WeatherState_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_gen_WeatherState_onSolid_R_boolean(jcontext ctx, jobject self);
jbool M_mindustry_gen_WeatherState_serialize_R_boolean(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WeatherState_clipSize_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WeatherState_getX_R_float(jcontext ctx, jobject self);
jfloat M_mindustry_gen_WeatherState_getY_R_float(jcontext ctx, jobject self);
jint M_mindustry_gen_WeatherState_tileX_R_int(jcontext ctx, jobject self);
jint M_mindustry_gen_WeatherState_tileY_R_int(jcontext ctx, jobject self);
jobject M_mindustry_gen_WeatherState_blockOn_R_mindustry_world_Block(jcontext ctx, jobject self);
jobject M_mindustry_gen_WeatherState_floorOn_R_mindustry_world_blocks_environment_Floor(jcontext ctx, jobject self);
jobject SM_mindustry_gen_WeatherState_create_R_mindustry_gen_WeatherState(jcontext ctx);
void M_mindustry_gen_WeatherState_add(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_afterRead(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_afterReadAll(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_afterSync(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_beforeWrite(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_draw(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_handleSyncHidden(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_init_mindustry_type_Weather(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WeatherState_interpolate(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WeatherState_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WeatherState_remove(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_reset(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_set_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WeatherState_set_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_WeatherState_snapInterpolation(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_snapSync(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_trns_arc_math_geom_Position(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WeatherState_trns_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_mindustry_gen_WeatherState_update(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WeatherState_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0);
void M_mindustry_gen_WeatherState_lambda$draw$1(jcontext ctx, jobject self);
void M_mindustry_gen_WeatherState_lambda$draw$0(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
