#ifndef HEADER_mindustry_entities_Leg
#define HEADER_mindustry_entities_Leg

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_Leg {
	java_lang_Object parent;
	jref F_joint;
	jref F_base;
	jint F_group;
	jbool F_moving;
	jfloat F_stage;
} mindustry_entities_Leg;

extern Class class_mindustry_entities_Leg;


#define VTABLE_mindustry_entities_Leg_hashCode_R_int 0
typedef jint (*func_mindustry_entities_Leg_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Leg_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_Leg_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_Leg_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_Leg_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Leg_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_Leg_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Leg_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_Leg_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Leg_finalize 5
typedef void (*func_mindustry_entities_Leg_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Leg_notify 6
typedef void (*func_mindustry_entities_Leg_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Leg_notifyAll 7
typedef void (*func_mindustry_entities_Leg_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Leg_wait 8
typedef void (*func_mindustry_entities_Leg_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_Leg_wait_long 9
typedef void (*func_mindustry_entities_Leg_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_Leg_wait_long_int 10
typedef void (*func_mindustry_entities_Leg_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_entities_Leg(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_Leg(jcontext ctx);
void init_mindustry_entities_Leg(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
