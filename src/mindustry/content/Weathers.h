#ifndef HEADER_mindustry_content_Weathers
#define HEADER_mindustry_content_Weathers

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Weathers {
	java_lang_Object parent;
} mindustry_content_Weathers;

extern Class class_mindustry_content_Weathers;

extern jobject SF_mindustry_content_Weathers_rain;
extern jobject SF_mindustry_content_Weathers_snow;
extern jobject SF_mindustry_content_Weathers_sandstorm;
extern jobject SF_mindustry_content_Weathers_sporestorm;
extern jobject SF_mindustry_content_Weathers_fog;
extern jobject SF_mindustry_content_Weathers_suspendParticles;

#define VTABLE_mindustry_content_Weathers_hashCode_R_int 0
typedef jint (*func_mindustry_content_Weathers_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Weathers_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Weathers_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Weathers_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Weathers_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Weathers_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers_finalize 5
typedef void (*func_mindustry_content_Weathers_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers_notify 6
typedef void (*func_mindustry_content_Weathers_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers_notifyAll 7
typedef void (*func_mindustry_content_Weathers_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers_wait 8
typedef void (*func_mindustry_content_Weathers_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Weathers_wait_long 9
typedef void (*func_mindustry_content_Weathers_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Weathers_wait_long_int 10
typedef void (*func_mindustry_content_Weathers_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_content_Weathers(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Weathers(jcontext ctx);
void init_mindustry_content_Weathers(jcontext ctx, jobject self);
void SM_mindustry_content_Weathers_load(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
