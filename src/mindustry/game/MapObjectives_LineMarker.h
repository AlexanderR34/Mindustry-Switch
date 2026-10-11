#ifndef HEADER_mindustry_game_MapObjectives$LineMarker
#define HEADER_mindustry_game_MapObjectives$LineMarker

#include "Clearwing.h"
#include "mindustry/game/MapObjectives_PosMarker.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_MapObjectives$LineMarker {
	mindustry_game_MapObjectives$PosMarker parent;
	jref F_endPos;
	jfloat F_stroke;
	jbool F_outline;
	jref F_color1;
	jref F_color2;
} mindustry_game_MapObjectives$LineMarker;

extern Class class_mindustry_game_MapObjectives$LineMarker;


#define VTABLE_mindustry_game_MapObjectives$LineMarker_hashCode_R_int 0
typedef jint (*func_mindustry_game_MapObjectives$LineMarker_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_MapObjectives$LineMarker_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_MapObjectives$LineMarker_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_MapObjectives$LineMarker_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_MapObjectives$LineMarker_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_finalize 5
typedef void (*func_mindustry_game_MapObjectives$LineMarker_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_notify 6
typedef void (*func_mindustry_game_MapObjectives$LineMarker_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_notifyAll 7
typedef void (*func_mindustry_game_MapObjectives$LineMarker_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_wait 8
typedef void (*func_mindustry_game_MapObjectives$LineMarker_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_wait_long 9
typedef void (*func_mindustry_game_MapObjectives$LineMarker_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_wait_long_int 10
typedef void (*func_mindustry_game_MapObjectives$LineMarker_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_write_arc_util_serialization_Json 11
typedef void (*func_mindustry_game_MapObjectives$LineMarker_write_arc_util_serialization_Json)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_read_arc_util_serialization_Json_arc_util_serialization_JsonValue 12
typedef void (*func_mindustry_game_MapObjectives$LineMarker_read_arc_util_serialization_Json_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_draw_float 13
typedef void (*func_mindustry_game_MapObjectives$LineMarker_draw_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_drawLight_float 14
typedef void (*func_mindustry_game_MapObjectives$LineMarker_drawLight_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_control_mindustry_logic_LMarkerControl_double_double_double 15
typedef void (*func_mindustry_game_MapObjectives$LineMarker_control_mindustry_logic_LMarkerControl_double_double_double)(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_setText_java_lang_String_boolean 16
typedef void (*func_mindustry_game_MapObjectives$LineMarker_setText_java_lang_String_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_setTexture_java_lang_Object 17
typedef void (*func_mindustry_game_MapObjectives$LineMarker_setTexture_java_lang_Object)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_typeName_R_java_lang_String 18
typedef jobject (*func_mindustry_game_MapObjectives$LineMarker_typeName_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_MapObjectives$LineMarker_updateField_arc_util_serialization_JsonValue 19
typedef void (*func_mindustry_game_MapObjectives$LineMarker_updateField_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_MapObjectives$LineMarker(jobject object, jint mark, jint depth);
void clinit_mindustry_game_MapObjectives$LineMarker(jcontext ctx);
void init_mindustry_game_MapObjectives$LineMarker_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4);
void init_mindustry_game_MapObjectives$LineMarker_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void init_mindustry_game_MapObjectives$LineMarker(jcontext ctx, jobject self);
void M_mindustry_game_MapObjectives$LineMarker_draw_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_game_MapObjectives$LineMarker_drawLight_float(jcontext ctx, jobject self, jfloat param0);
void M_mindustry_game_MapObjectives$LineMarker_control_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3);

#ifdef __cplusplus
}
#endif

#endif
