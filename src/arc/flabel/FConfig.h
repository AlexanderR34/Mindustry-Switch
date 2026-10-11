#ifndef HEADER_arc_flabel_FConfig
#define HEADER_arc_flabel_FConfig

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct arc_flabel_FConfig {
	java_lang_Object parent;
} arc_flabel_FConfig;

extern Class class_arc_flabel_FConfig;

extern jbool SF_arc_flabel_FConfig_forceColorMarkupByDefault;
extern jfloat SF_arc_flabel_FConfig_defaultWaitValue;
extern jfloat SF_arc_flabel_FConfig_defaultSpeedPerChar;
extern jint SF_arc_flabel_FConfig_charLimitPerFrame;
extern jobject SF_arc_flabel_FConfig_defaultClearColor;
extern jobject SF_arc_flabel_FConfig_intervalMultipliersByChar;
extern jobject SF_arc_flabel_FConfig_globalVars;
extern jobject SF_arc_flabel_FConfig_effects;
extern jbool SF_arc_flabel_FConfig_dirtyEffectMaps;

#define VTABLE_arc_flabel_FConfig_hashCode_R_int 0
typedef jint (*func_arc_flabel_FConfig_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FConfig_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_arc_flabel_FConfig_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_arc_flabel_FConfig_clone_R_java_lang_Object 2
typedef jobject (*func_arc_flabel_FConfig_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FConfig_getClass_R_java_lang_Class 3
typedef jobject (*func_arc_flabel_FConfig_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FConfig_toString_R_java_lang_String 4
typedef jobject (*func_arc_flabel_FConfig_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FConfig_finalize 5
typedef void (*func_arc_flabel_FConfig_finalize)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FConfig_notify 6
typedef void (*func_arc_flabel_FConfig_notify)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FConfig_notifyAll 7
typedef void (*func_arc_flabel_FConfig_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FConfig_wait 8
typedef void (*func_arc_flabel_FConfig_wait)(jcontext ctx, jobject self);
#define VTABLE_arc_flabel_FConfig_wait_long 9
typedef void (*func_arc_flabel_FConfig_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_arc_flabel_FConfig_wait_long_int 10
typedef void (*func_arc_flabel_FConfig_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_arc_flabel_FConfig(jobject object, jint mark, jint depth);
void clinit_arc_flabel_FConfig(jcontext ctx);
void init_arc_flabel_FConfig(jcontext ctx, jobject self);
void SM_arc_flabel_FConfig_registerEffect_java_lang_String_arc_func_Prov(jcontext ctx, jobject param0, jobject param1);
void SM_arc_flabel_FConfig_unregisterEffect_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
