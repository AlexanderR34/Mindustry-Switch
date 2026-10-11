#ifndef HEADER_mindustry_ai_ControlPathfinder$FieldIndexStruct
#define HEADER_mindustry_ai_ControlPathfinder$FieldIndexStruct

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_ControlPathfinder$FieldIndexStruct {
	java_lang_Object parent;
	jint F_pos;
	jint F_costId;
	jint F_team;
} mindustry_ai_ControlPathfinder$FieldIndexStruct;

extern Class class_mindustry_ai_ControlPathfinder$FieldIndexStruct;


#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_hashCode_R_int 0
typedef jint (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_finalize 5
typedef void (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_notify 6
typedef void (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_notifyAll 7
typedef void (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_wait 8
typedef void (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_wait_long 9
typedef void (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_ControlPathfinder$FieldIndexStruct_wait_long_int 10
typedef void (*func_mindustry_ai_ControlPathfinder$FieldIndexStruct_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_ai_ControlPathfinder$FieldIndexStruct(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_ControlPathfinder$FieldIndexStruct(jcontext ctx);
void init_mindustry_ai_ControlPathfinder$FieldIndexStruct(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
