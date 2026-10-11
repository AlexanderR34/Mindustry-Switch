#ifndef HEADER_mindustry_ai_types_NoAI
#define HEADER_mindustry_ai_types_NoAI

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/UnitController.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_ai_types_NoAI {
	java_lang_Object parent;
	jref F_unit;
} mindustry_ai_types_NoAI;

extern Class class_mindustry_ai_types_NoAI;


#define VTABLE_mindustry_ai_types_NoAI_hashCode_R_int 0
typedef jint (*func_mindustry_ai_types_NoAI_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_ai_types_NoAI_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_NoAI_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_ai_types_NoAI_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_ai_types_NoAI_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_ai_types_NoAI_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_finalize 5
typedef void (*func_mindustry_ai_types_NoAI_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_notify 6
typedef void (*func_mindustry_ai_types_NoAI_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_notifyAll 7
typedef void (*func_mindustry_ai_types_NoAI_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_wait 8
typedef void (*func_mindustry_ai_types_NoAI_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_wait_long 9
typedef void (*func_mindustry_ai_types_NoAI_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_ai_types_NoAI_wait_long_int 10
typedef void (*func_mindustry_ai_types_NoAI_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_ai_types_NoAI_unit_mindustry_gen_Unit 11
typedef void (*func_mindustry_ai_types_NoAI_unit_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_NoAI_unit_R_mindustry_gen_Unit 12
typedef jobject (*func_mindustry_ai_types_NoAI_unit_R_mindustry_gen_Unit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_hit_mindustry_gen_Bullet 13
typedef void (*func_mindustry_ai_types_NoAI_hit_mindustry_gen_Bullet)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_NoAI_isValidController_R_boolean 14
typedef jbool (*func_mindustry_ai_types_NoAI_isValidController_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_isLogicControllable_R_boolean 15
typedef jbool (*func_mindustry_ai_types_NoAI_isLogicControllable_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_updateUnit 16
typedef void (*func_mindustry_ai_types_NoAI_updateUnit)(jcontext ctx, jobject self);
#define VTABLE_mindustry_ai_types_NoAI_removed_mindustry_gen_Unit 17
typedef void (*func_mindustry_ai_types_NoAI_removed_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_ai_types_NoAI_afterRead_mindustry_gen_Unit 18
typedef void (*func_mindustry_ai_types_NoAI_afterRead_mindustry_gen_Unit)(jcontext ctx, jobject self, jobject param0);

void mark_mindustry_ai_types_NoAI(jobject object, jint mark, jint depth);
void clinit_mindustry_ai_types_NoAI(jcontext ctx);
void init_mindustry_ai_types_NoAI(jcontext ctx, jobject self);
jobject M_mindustry_ai_types_NoAI_unit_R_mindustry_gen_Unit(jcontext ctx, jobject self);
void M_mindustry_ai_types_NoAI_unit_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);
jbool M_mindustry_ai_types_NoAI_isValidController_R_boolean(jcontext ctx, jobject self);
void M_mindustry_ai_types_NoAI_updateUnit(jcontext ctx, jobject self);
void M_mindustry_ai_types_NoAI_removed_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
