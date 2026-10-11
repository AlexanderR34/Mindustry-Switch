#ifndef HEADER_mindustry_entities_comp_TimerComp
#define HEADER_mindustry_entities_comp_TimerComp

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_entities_comp_TimerComp {
	java_lang_Object parent;
	jref F_timer;
} mindustry_entities_comp_TimerComp;

extern Class class_mindustry_entities_comp_TimerComp;


#define VTABLE_mindustry_entities_comp_TimerComp_hashCode_R_int 0
typedef jint (*func_mindustry_entities_comp_TimerComp_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimerComp_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_entities_comp_TimerComp_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_entities_comp_TimerComp_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_entities_comp_TimerComp_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimerComp_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_entities_comp_TimerComp_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimerComp_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_entities_comp_TimerComp_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimerComp_finalize 5
typedef void (*func_mindustry_entities_comp_TimerComp_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimerComp_notify 6
typedef void (*func_mindustry_entities_comp_TimerComp_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimerComp_notifyAll 7
typedef void (*func_mindustry_entities_comp_TimerComp_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimerComp_wait 8
typedef void (*func_mindustry_entities_comp_TimerComp_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_entities_comp_TimerComp_wait_long 9
typedef void (*func_mindustry_entities_comp_TimerComp_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_entities_comp_TimerComp_wait_long_int 10
typedef void (*func_mindustry_entities_comp_TimerComp_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_entities_comp_TimerComp_timer_int_float_R_boolean 11
typedef jbool (*func_mindustry_entities_comp_TimerComp_timer_int_float_R_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1);

void mark_mindustry_entities_comp_TimerComp(jobject object, jint mark, jint depth);
void clinit_mindustry_entities_comp_TimerComp(jcontext ctx);
void init_mindustry_entities_comp_TimerComp(jcontext ctx, jobject self);
jbool M_mindustry_entities_comp_TimerComp_timer_int_float_R_boolean(jcontext ctx, jobject self, jint param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
