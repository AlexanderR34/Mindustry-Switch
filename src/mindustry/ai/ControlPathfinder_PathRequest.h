#ifndef HEADER_mindustry_ai_ControlPathfinder$PathRequest
#define HEADER_mindustry_ai_ControlPathfinder$PathRequest

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_ControlPathfinder$PathRequest {
	java_lang_Object parent;
	jref F_unit;
	jint F_destination;
	jint F_team;
	jint F_costId;
	jref F_resultPath;
	jref F_costs;
	jref F_cameFrom;
	jref F_frontier;
	jlong F_lastUpdateId;
	jlong F_lastRecomputeTime;
	volatile jbool F_notFound;
	volatile jbool F_invalidated;
	volatile jref F_oldCache;
	jbool F_lastRaycastResult;
	jint F_lastRaycastTile;
	jint F_lastWorldUpdate;
	jint F_lastTile;
	jref F_lastTargetTile;
} mindustry_ai_ControlPathfinder$PathRequest;

extern Class class_mindustry_ai_ControlPathfinder$PathRequest;


#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_hashCode_R_int 0
typedef jint (*func_mindustry_ai_ControlPathfinder$PathRequest_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_ControlPathfinder$PathRequest_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_ControlPathfinder$PathRequest_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_ControlPathfinder$PathRequest_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_ControlPathfinder$PathRequest_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_finalize 5
typedef void (*func_mindustry_ai_ControlPathfinder$PathRequest_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_notify 6
typedef void (*func_mindustry_ai_ControlPathfinder$PathRequest_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_notifyAll 7
typedef void (*func_mindustry_ai_ControlPathfinder$PathRequest_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_wait 8
typedef void (*func_mindustry_ai_ControlPathfinder$PathRequest_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_wait_long 9
typedef void (*func_mindustry_ai_ControlPathfinder$PathRequest_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_ControlPathfinder$PathRequest_wait_long_int 10
typedef void (*func_mindustry_ai_ControlPathfinder$PathRequest_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ai_ControlPathfinder$PathRequest(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_ControlPathfinder$PathRequest(jcontext ctx);
void init_mindustry_ai_ControlPathfinder$PathRequest_mindustry_gen_Unit_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
