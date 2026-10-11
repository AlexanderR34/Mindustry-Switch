#ifndef HEADER_mindustry_game_MapObjectives$QuadMarker
#define HEADER_mindustry_game_MapObjectives$QuadMarker

#include "Clearwing.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_MapObjectives$QuadMarker {
	mindustry_game_MapObjectives$ObjectiveMarker parent;
	jref F_texture;
	jref F_vertices;
	jbool F_mapRegion;
	jref F_fetchedRegion;
} mindustry_game_MapObjectives$QuadMarker;

extern Class class_mindustry_game_MapObjectives$QuadMarker;


#define VTABLE_mindustry_game_MapObjectives$QuadMarker_hashCode_R_int 0
typedef jint (*func_mindustry_game_MapObjectives$QuadMarker_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_MapObjectives$QuadMarker_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_MapObjectives$QuadMarker_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_MapObjectives$QuadMarker_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_MapObjectives$QuadMarker_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_finalize 5
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_notify 6
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_notifyAll 7
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_wait 8
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_wait_long 9
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_wait_long_int 10
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_write_arc_util_serialization_Json 11
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_write_arc_util_serialization_Json)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_read_arc_util_serialization_Json_arc_util_serialization_JsonValue 12
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_read_arc_util_serialization_Json_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_draw_float 13
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_draw_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_drawLight_float 14
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_drawLight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_control_mindustry_logic_LMarkerControl_double_double_double 15
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_control_mindustry_logic_LMarkerControl_double_double_double)(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_setText_java_lang_String_boolean 16
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_setText_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object 17
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_typeName_R_java_lang_String 18
typedef jobject (*func_mindustry_game_MapObjectives$QuadMarker_typeName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_updateField_arc_util_serialization_JsonValue 19
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_updateField_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_setPos_int_double_double 20
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_setPos_int_double_double)(jcontext ctx, jobject self, jint param0, jdouble param1, jdouble param2);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_setColor_int_double 21
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_setColor_int_double)(jcontext ctx, jobject self, jint param0, jdouble param1);
#define VTABLE_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double 22
typedef void (*func_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double)(jcontext ctx, jobject self, jint param0, jdouble param1, jdouble param2);

void mark_mindustry_game_MapObjectives$QuadMarker(jobject object, jint mark, jint depth);
void clinit_mindustry_game_MapObjectives$QuadMarker(jcontext ctx);
void init_mindustry_game_MapObjectives$QuadMarker(jcontext ctx, jobject self);
void M_mindustry_game_MapObjectives$QuadMarker_draw_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_game_MapObjectives$QuadMarker_control_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3);
void M_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object(jcontext ctx, jobject self, jobject param0);
jfloat SM_mindustry_game_MapObjectives$QuadMarker_unmap_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2);
void M_mindustry_game_MapObjectives$QuadMarker_setPos_int_double_double(jcontext ctx, jobject self, jint param0, jdouble param1, jdouble param2);
void M_mindustry_game_MapObjectives$QuadMarker_setColor_int_double(jcontext ctx, jobject self, jint param0, jdouble param1);
void M_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double(jcontext ctx, jobject self, jint param0, jdouble param1, jdouble param2);

#ifdef __cplusplus
}
#endif

#endif
