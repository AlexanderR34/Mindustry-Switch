#ifndef HEADER_mindustry_ai_ControlPathfinder$IntraEdgeStruct
#define HEADER_mindustry_ai_ControlPathfinder$IntraEdgeStruct

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_ControlPathfinder$IntraEdgeStruct {
	java_lang_Object parent;
	jint F_dir;
	jint F_portal;
	jfloat F_cost;
} mindustry_ai_ControlPathfinder$IntraEdgeStruct;

extern Class class_mindustry_ai_ControlPathfinder$IntraEdgeStruct;


#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_hashCode_R_int 0
typedef jint (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_finalize 5
typedef void (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_notify 6
typedef void (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_notifyAll 7
typedef void (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_wait 8
typedef void (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_wait_long 9
typedef void (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_ControlPathfinder$IntraEdgeStruct_wait_long_int 10
typedef void (*func_mindustry_ai_ControlPathfinder$IntraEdgeStruct_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ai_ControlPathfinder$IntraEdgeStruct(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_ControlPathfinder$IntraEdgeStruct(jcontext ctx);
void init_mindustry_ai_ControlPathfinder$IntraEdgeStruct(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
