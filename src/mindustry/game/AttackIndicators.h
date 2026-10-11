#ifndef HEADER_mindustry_game_AttackIndicators
#define HEADER_mindustry_game_AttackIndicators

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_game_AttackIndicators {
	java_lang_Object parent;
	jref F_indicators;
	jref F_posToIndex;
} mindustry_game_AttackIndicators;

extern Class class_mindustry_game_AttackIndicators;

extern jfloat SF_mindustry_game_AttackIndicators_duration;

#define VTABLE_mindustry_game_AttackIndicators_hashCode_R_int 0
typedef jint (*func_mindustry_game_AttackIndicators_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_AttackIndicators_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_game_AttackIndicators_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_game_AttackIndicators_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_game_AttackIndicators_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_AttackIndicators_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_game_AttackIndicators_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_AttackIndicators_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_game_AttackIndicators_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_AttackIndicators_finalize 5
typedef void (*func_mindustry_game_AttackIndicators_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_AttackIndicators_notify 6
typedef void (*func_mindustry_game_AttackIndicators_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_AttackIndicators_notifyAll 7
typedef void (*func_mindustry_game_AttackIndicators_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_AttackIndicators_wait 8
typedef void (*func_mindustry_game_AttackIndicators_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_AttackIndicators_wait_long 9
typedef void (*func_mindustry_game_AttackIndicators_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_game_AttackIndicators_wait_long_int 10
typedef void (*func_mindustry_game_AttackIndicators_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_mindustry_game_AttackIndicators_list_R_arc_struct_LongSeq 11
typedef jobject (*func_mindustry_game_AttackIndicators_list_R_arc_struct_LongSeq)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_AttackIndicators_clear 12
typedef void (*func_mindustry_game_AttackIndicators_clear)(jcontext ctx, jobject self);
#define VTABLE_mindustry_game_AttackIndicators_add_int_int 13
typedef void (*func_mindustry_game_AttackIndicators_add_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_mindustry_game_AttackIndicators_update 14
typedef void (*func_mindustry_game_AttackIndicators_update)(jcontext ctx, jobject self);

void mark_mindustry_game_AttackIndicators(jobject object, jint mark, jint depth);
void clinit_mindustry_game_AttackIndicators(jcontext ctx);
void init_mindustry_game_AttackIndicators(jcontext ctx, jobject self);
jobject M_mindustry_game_AttackIndicators_list_R_arc_struct_LongSeq(jcontext ctx, jobject self);
void M_mindustry_game_AttackIndicators_clear(jcontext ctx, jobject self);
void M_mindustry_game_AttackIndicators_add_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_mindustry_game_AttackIndicators_update(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
