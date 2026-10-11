#ifndef HEADER_mindustry_ai_ControlPathfinder$FieldCache
#define HEADER_mindustry_ai_ControlPathfinder$FieldCache

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_ControlPathfinder$FieldCache {
	java_lang_Object parent;
	jref F_cost;
	jint F_costId;
	jint F_team;
	jint F_goalPos;
	jref F_frontier;
	jref F_fields;
	jlong F_mapKey;
	jlong F_lastUpdateId;
} mindustry_ai_ControlPathfinder$FieldCache;

extern Class class_mindustry_ai_ControlPathfinder$FieldCache;


#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_hashCode_R_int 0
typedef jint (*func_mindustry_ai_ControlPathfinder$FieldCache_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_ControlPathfinder$FieldCache_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_ControlPathfinder$FieldCache_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_ControlPathfinder$FieldCache_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_ControlPathfinder$FieldCache_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_finalize 5
typedef void (*func_mindustry_ai_ControlPathfinder$FieldCache_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_notify 6
typedef void (*func_mindustry_ai_ControlPathfinder$FieldCache_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_notifyAll 7
typedef void (*func_mindustry_ai_ControlPathfinder$FieldCache_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_wait 8
typedef void (*func_mindustry_ai_ControlPathfinder$FieldCache_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_wait_long 9
typedef void (*func_mindustry_ai_ControlPathfinder$FieldCache_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldCache_wait_long_int 10
typedef void (*func_mindustry_ai_ControlPathfinder$FieldCache_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ai_ControlPathfinder$FieldCache(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_ControlPathfinder$FieldCache(jcontext ctx);
void init_mindustry_ai_ControlPathfinder$FieldCache_mindustry_ai_Pathfinder$PathCost_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
