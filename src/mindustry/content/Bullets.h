#ifndef HEADER_mindustry_content_Bullets
#define HEADER_mindustry_content_Bullets

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct mindustry_content_Bullets {
	java_lang_Object parent;
} mindustry_content_Bullets;

extern Class class_mindustry_content_Bullets;

extern jobject SF_mindustry_content_Bullets_placeholder;
extern jobject SF_mindustry_content_Bullets_spaceLiquid;
extern jobject SF_mindustry_content_Bullets_damageLightning;
extern jobject SF_mindustry_content_Bullets_damageLightningGround;
extern jobject SF_mindustry_content_Bullets_damageLightningAir;
extern jobject SF_mindustry_content_Bullets_fireball;

#define VTABLE_mindustry_content_Bullets_hashCode_R_int 0
typedef jint (*func_mindustry_content_Bullets_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Bullets_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_mindustry_content_Bullets_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_mindustry_content_Bullets_clone_R_java_lang_Object 2
typedef jobject (*func_mindustry_content_Bullets_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Bullets_getClass_R_java_lang_Class 3
typedef jobject (*func_mindustry_content_Bullets_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Bullets_toString_R_java_lang_String 4
typedef jobject (*func_mindustry_content_Bullets_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Bullets_finalize 5
typedef void (*func_mindustry_content_Bullets_finalize)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Bullets_notify 6
typedef void (*func_mindustry_content_Bullets_notify)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Bullets_notifyAll 7
typedef void (*func_mindustry_content_Bullets_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Bullets_wait 8
typedef void (*func_mindustry_content_Bullets_wait)(jcontext ctx, jobject self);
#define VTABLE_mindustry_content_Bullets_wait_long 9
typedef void (*func_mindustry_content_Bullets_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_mindustry_content_Bullets_wait_long_int 10
typedef void (*func_mindustry_content_Bullets_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_mindustry_content_Bullets(jobject object, jint mark, jint depth);
void clinit_mindustry_content_Bullets(jcontext ctx);
void init_mindustry_content_Bullets(jcontext ctx, jobject self);
void SM_mindustry_content_Bullets_load(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
