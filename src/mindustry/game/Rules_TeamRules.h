#ifndef HEADER_mindustry_game_Rules$TeamRules
#define HEADER_mindustry_game_Rules$TeamRules

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/Json_JsonSerializable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_Rules$TeamRules {
	java_lang_Object parent;
	jref F_values;
} mindustry_game_Rules$TeamRules;

extern Class class_mindustry_game_Rules$TeamRules;


#define VTABLE_mindustry_game_Rules$TeamRules_hashCode_R_int 0
typedef jint (*func_mindustry_game_Rules$TeamRules_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRules_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_Rules$TeamRules_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules$TeamRules_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_Rules$TeamRules_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRules_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_Rules$TeamRules_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRules_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_Rules$TeamRules_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRules_finalize 5
typedef void (*func_mindustry_game_Rules$TeamRules_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRules_notify 6
typedef void (*func_mindustry_game_Rules$TeamRules_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRules_notifyAll 7
typedef void (*func_mindustry_game_Rules$TeamRules_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRules_wait 8
typedef void (*func_mindustry_game_Rules$TeamRules_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_Rules$TeamRules_wait_long 9
typedef void (*func_mindustry_game_Rules$TeamRules_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_Rules$TeamRules_wait_long_int 10
typedef void (*func_mindustry_game_Rules$TeamRules_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_Rules$TeamRules_write_arc_util_serialization_Json 11
typedef void (*func_mindustry_game_Rules$TeamRules_write_arc_util_serialization_Json)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_Rules$TeamRules_read_arc_util_serialization_Json_arc_util_serialization_JsonValue 12
typedef void (*func_mindustry_game_Rules$TeamRules_read_arc_util_serialization_Json_arc_util_serialization_JsonValue)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule 13
typedef jobject (*func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_game_Rules$TeamRules(jobject object, jint mark, jint depth);
void clinit_mindustry_game_Rules$TeamRules(jcontext ctx);
void init_mindustry_game_Rules$TeamRules(jcontext ctx, jobject self);
jobject M_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Rules$TeamRules_write_arc_util_serialization_Json(jcontext ctx, jobject self, jobject param0);
void M_mindustry_game_Rules$TeamRules_read_arc_util_serialization_Json_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
