#ifndef HEADER_mindustry_content_StatusEffects
#define HEADER_mindustry_content_StatusEffects

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_StatusEffects {
	java_lang_Object parent;
} mindustry_content_StatusEffects;

extern Class class_mindustry_content_StatusEffects;

extern jobject SF_mindustry_content_StatusEffects_none;
extern jobject SF_mindustry_content_StatusEffects_burning;
extern jobject SF_mindustry_content_StatusEffects_freezing;
extern jobject SF_mindustry_content_StatusEffects_unmoving;
extern jobject SF_mindustry_content_StatusEffects_slow;
extern jobject SF_mindustry_content_StatusEffects_fast;
extern jobject SF_mindustry_content_StatusEffects_wet;
extern jobject SF_mindustry_content_StatusEffects_muddy;
extern jobject SF_mindustry_content_StatusEffects_melting;
extern jobject SF_mindustry_content_StatusEffects_sapped;
extern jobject SF_mindustry_content_StatusEffects_tarred;
extern jobject SF_mindustry_content_StatusEffects_overdrive;
extern jobject SF_mindustry_content_StatusEffects_overclock;
extern jobject SF_mindustry_content_StatusEffects_shielded;
extern jobject SF_mindustry_content_StatusEffects_shocked;
extern jobject SF_mindustry_content_StatusEffects_blasted;
extern jobject SF_mindustry_content_StatusEffects_corroded;
extern jobject SF_mindustry_content_StatusEffects_boss;
extern jobject SF_mindustry_content_StatusEffects_sporeSlowed;
extern jobject SF_mindustry_content_StatusEffects_disarmed;
extern jobject SF_mindustry_content_StatusEffects_electrified;
extern jobject SF_mindustry_content_StatusEffects_invincible;
extern jobject SF_mindustry_content_StatusEffects_dynamic;

#define VTABLE_mindustry_content_StatusEffects_hashCode_R_int 0
typedef jint (*func_mindustry_content_StatusEffects_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_StatusEffects_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_StatusEffects_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_StatusEffects_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_StatusEffects_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_StatusEffects_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects_finalize 5
typedef void (*func_mindustry_content_StatusEffects_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects_notify 6
typedef void (*func_mindustry_content_StatusEffects_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects_notifyAll 7
typedef void (*func_mindustry_content_StatusEffects_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects_wait 8
typedef void (*func_mindustry_content_StatusEffects_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_StatusEffects_wait_long 9
typedef void (*func_mindustry_content_StatusEffects_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_StatusEffects_wait_long_int 10
typedef void (*func_mindustry_content_StatusEffects_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_content_StatusEffects(jobject object, jint mark, jint depth);
void clinit_mindustry_content_StatusEffects(jcontext ctx);
void init_mindustry_content_StatusEffects(jcontext ctx, jobject self);
void SM_mindustry_content_StatusEffects_load(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
